﻿using System.Collections;
using System.Collections.Generic;
using System.Linq;
using NUnit.Framework;
using Unity.XR.CoreUtils;
using UnityEngine.TestTools;
using UnityEngine.TestTools.Utils;
using UnityEngine.XR.Interaction.Toolkit.Transformers;

namespace UnityEngine.XR.Interaction.Toolkit.Tests
{
    [TestFixture]
    class GrabInteractableTests
    {
        static readonly XRBaseInteractable.MovementType[] s_MovementTypes =
        {
            XRBaseInteractable.MovementType.VelocityTracking,
            XRBaseInteractable.MovementType.Kinematic,
            XRBaseInteractable.MovementType.Instantaneous,
        };

        [TearDown]
        public void TearDown()
        {
            TestUtilities.DestroyAllSceneObjects();
        }

        static void DisableDelayProperties(XRGrabInteractable grabInteractable)
        {
            grabInteractable.velocityDamping = 1f;
            grabInteractable.velocityScale = 1f;
            grabInteractable.angularVelocityDamping = 1f;
            grabInteractable.angularVelocityScale = 1f;
            grabInteractable.attachEaseInTime = 0f;
            var rigidbody = grabInteractable.GetComponent<Rigidbody>();
            rigidbody.maxAngularVelocity = float.PositiveInfinity;
        }

        static IEnumerator WaitForSteadyState(XRBaseInteractable.MovementType movementType)
        {
            yield return null;

            if (movementType == XRBaseInteractable.MovementType.VelocityTracking)
                yield return new WaitForFixedUpdate();

            yield return new WaitForFixedUpdate();
        }

        [UnityTest]
        public IEnumerator CenteredObjectWithAttachTransformMovesToExpectedPosition([ValueSource(nameof(s_MovementTypes))] XRBaseInteractable.MovementType movementType)
        {
            // Create Grab Interactable at some arbitrary point
            var grabInteractableGO = GameObject.CreatePrimitive(PrimitiveType.Cube);
            grabInteractableGO.name = "Grab Interactable";
            grabInteractableGO.transform.localPosition = new Vector3(1f, 2f, 3f);
            grabInteractableGO.transform.localRotation = Quaternion.identity;
            var boxCollider = grabInteractableGO.GetComponent<BoxCollider>();
            var rigidbody = grabInteractableGO.AddComponent<Rigidbody>();
            rigidbody.useGravity = false;
            rigidbody.isKinematic = true;
            var grabInteractable = grabInteractableGO.AddComponent<XRGrabInteractable>();
            grabInteractable.movementType = movementType;
            DisableDelayProperties(grabInteractable);
            // Set the Attach Transform to the back upper-right corner of the cube
            // to test an attach transform different from the transform position (which is also its center).
            var grabInteractableAttach = new GameObject("Grab Interactable Attach").transform;
            var attachOffset = new Vector3(0.5f, 0.5f, -0.5f);
            grabInteractableAttach.SetParent(grabInteractable.transform);
            grabInteractableAttach.localPosition = attachOffset;
            grabInteractableAttach.localRotation = Quaternion.identity;
            grabInteractable.attachTransform = grabInteractableAttach;
            // The built-in Cube resource has its center at the center of the cube.
            var centerOffset = Vector3.zero;

            Assert.That(grabInteractable.attachPointCompatibilityMode, Is.EqualTo(XRGrabInteractable.AttachPointCompatibilityMode.Default));

            // Wait for physics update to ensure the Rigidbody is stable and center of mass has been calculated
            yield return new WaitForFixedUpdate();
            yield return null;

            Assert.That(grabInteractable.isSelected, Is.False);
            Assert.That(grabInteractable.attachTransform.position, Is.EqualTo(new Vector3(1f, 2f, 3f) + attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.attachTransform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(grabInteractable.transform.position, Is.EqualTo(new Vector3(1f, 2f, 3f)).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(boxCollider, Is.Not.Null);
            Assert.That(boxCollider.center, Is.EqualTo(centerOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.position, Is.EqualTo(new Vector3(1f, 2f, 3f)).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.centerOfMass, Is.EqualTo(centerOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.worldCenterOfMass, Is.EqualTo(new Vector3(1f, 2f, 3f) + centerOffset).Using(Vector3ComparerWithEqualsOperator.Instance));

            // Create Interactor at some arbitrary point away from the Interactable
            var interactor = TestUtilities.CreateMockInteractor();
            var targetPosition = Vector3.zero;

            yield return null;

            Assert.That(grabInteractable.isSelected, Is.False);
            Assert.That(interactor.hasSelection, Is.False);
            Assert.That(interactor.interactablesSelected, Is.Empty);
            Assert.That(interactor.attachTransform, Is.Not.Null);
            Assert.That(interactor.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(interactor.attachTransform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));

            // Set valid so it will be selected next frame by the Interaction Manager
            interactor.validTargets.Add(grabInteractable);

            yield return WaitForSteadyState(movementType);

            Assert.That(grabInteractable.isSelected, Is.True);
            Assert.That(grabInteractable.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.attachTransform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(grabInteractable.transform.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(interactor.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(interactor.attachTransform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(rigidbody.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));

            // Move the attach transform on the Interactor after being grabbed
            targetPosition = new Vector3(5f, 5f, 5f);
            interactor.attachTransform.position = targetPosition;

            yield return WaitForSteadyState(movementType);

            Assert.That(grabInteractable.isSelected, Is.True);
            Assert.That(grabInteractable.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.attachTransform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(grabInteractable.transform.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(interactor.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(interactor.attachTransform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(rigidbody.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));

            // Move the attach transform on the Interactable to the back lower-right corner of the cube
            attachOffset = new Vector3(0.5f, -0.5f, -0.5f);
            grabInteractable.attachTransform.localPosition = attachOffset;

            yield return WaitForSteadyState(movementType);

            Assert.That(grabInteractable.isSelected, Is.True);
            Assert.That(grabInteractable.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.attachTransform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(grabInteractable.transform.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(interactor.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(interactor.attachTransform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(rigidbody.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
        }

        [UnityTest]
        public IEnumerator CenteredObjectWithoutAttachTransformMovesToExpectedPosition([ValueSource(nameof(s_MovementTypes))] XRBaseInteractable.MovementType movementType)
        {
            // Create Grab Interactable at some arbitrary point
            var grabInteractableGO = GameObject.CreatePrimitive(PrimitiveType.Cube);
            grabInteractableGO.name = "Grab Interactable";
            grabInteractableGO.transform.localPosition = new Vector3(1f, 2f, 3f);
            grabInteractableGO.transform.localRotation = Quaternion.identity;
            var boxCollider = grabInteractableGO.GetComponent<BoxCollider>();
            var rigidbody = grabInteractableGO.AddComponent<Rigidbody>();
            rigidbody.useGravity = false;
            rigidbody.isKinematic = true;
            var grabInteractable = grabInteractableGO.AddComponent<XRGrabInteractable>();
            grabInteractable.movementType = movementType;
            DisableDelayProperties(grabInteractable);
            // Keep the Attach Transform null to use the transform itself (which is also its center).
            var attachOffset = Vector3.zero;
            grabInteractable.attachTransform = null;
            // The built-in Cube resource has its center at the center of the cube.
            var centerOffset = Vector3.zero;

            Assert.That(grabInteractable.attachPointCompatibilityMode, Is.EqualTo(XRGrabInteractable.AttachPointCompatibilityMode.Default));

            // Wait for physics update to ensure the Rigidbody is stable and center of mass has been calculated
            yield return new WaitForFixedUpdate();
            yield return null;

            Assert.That(grabInteractable.isSelected, Is.False);
            Assert.That(grabInteractable.attachTransform, Is.Null);
            Assert.That(grabInteractable.transform.position, Is.EqualTo(new Vector3(1f, 2f, 3f)).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(boxCollider, Is.Not.Null);
            Assert.That(boxCollider.center, Is.EqualTo(centerOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.position, Is.EqualTo(new Vector3(1f, 2f, 3f)).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.centerOfMass, Is.EqualTo(centerOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.worldCenterOfMass, Is.EqualTo(new Vector3(1f, 2f, 3f) + centerOffset).Using(Vector3ComparerWithEqualsOperator.Instance));

            // Create Interactor at some arbitrary point away from the Interactable
            var interactor = TestUtilities.CreateMockInteractor();
            var targetPosition = Vector3.zero;

            yield return null;

            Assert.That(grabInteractable.isSelected, Is.False);
            Assert.That(interactor.hasSelection, Is.False);
            Assert.That(interactor.interactablesSelected, Is.Empty);
            Assert.That(interactor.attachTransform, Is.Not.Null);
            Assert.That(interactor.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(interactor.attachTransform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));

            // Set valid so it will be selected next frame by the Interaction Manager
            interactor.validTargets.Add(grabInteractable);

            yield return WaitForSteadyState(movementType);

            Assert.That(grabInteractable.isSelected, Is.True);
            Assert.That(grabInteractable.attachTransform, Is.Null);
            Assert.That(grabInteractable.transform.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(interactor.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(interactor.attachTransform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(rigidbody.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));

            // Move the attach transform on the Interactor after being grabbed
            targetPosition = new Vector3(5f, 5f, 5f);
            interactor.attachTransform.position = targetPosition;

            yield return WaitForSteadyState(movementType);

            Assert.That(grabInteractable.isSelected, Is.True);
            Assert.That(grabInteractable.attachTransform, Is.Null);
            Assert.That(grabInteractable.transform.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(interactor.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(interactor.attachTransform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(rigidbody.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
        }

        [UnityTest]
        public IEnumerator NonCenteredObjectMovesToExpectedPosition([ValueSource(nameof(s_MovementTypes))] XRBaseInteractable.MovementType movementType)
        {
            // Create a cube mesh with the pivot position at the bottom center
            // rather than the built-in Cube resource which has its center at the
            // center of the cube.
            var cubePrimitiveGO = GameObject.CreatePrimitive(PrimitiveType.Cube);
            var cubePrimitiveMesh = cubePrimitiveGO.GetComponent<MeshFilter>().sharedMesh;
            var centerOffset = new Vector3(0f, 0.5f, 0f);
            var offCenterMesh = new Mesh
            {
                vertices = cubePrimitiveMesh.vertices.Select(vertex => vertex + centerOffset).ToArray(),
                triangles = cubePrimitiveMesh.triangles.ToArray(),
                normals = cubePrimitiveMesh.normals.ToArray(),
            };
            cubePrimitiveGO.SetActive(false);
            Object.Destroy(cubePrimitiveGO);

            // Create Grab Interactable at some arbitrary point
            var grabInteractableGO = new GameObject("Grab Interactable");
            grabInteractableGO.transform.localPosition = new Vector3(1f, 2f, 3f);
            grabInteractableGO.transform.localRotation = Quaternion.identity;
            var meshFilter = grabInteractableGO.AddComponent<MeshFilter>();
            meshFilter.sharedMesh = offCenterMesh;
            grabInteractableGO.AddComponent<MeshRenderer>();
            var boxCollider = grabInteractableGO.AddComponent<BoxCollider>();
            var rigidbody = grabInteractableGO.AddComponent<Rigidbody>();
            rigidbody.useGravity = false;
            rigidbody.isKinematic = true;
            var grabInteractable = grabInteractableGO.AddComponent<XRGrabInteractable>();
            grabInteractable.movementType = movementType;
            DisableDelayProperties(grabInteractable);
            // Set the Attach Transform to the back upper-right corner of the cube
            // to test an attach transform different from both the transform position and center.
            var grabInteractableAttach = new GameObject("Grab Interactable Attach").transform;
            var attachOffset = new Vector3(0.5f, 1f, -0.5f);
            grabInteractableAttach.SetParent(grabInteractable.transform);
            grabInteractableAttach.localPosition = attachOffset;
            grabInteractableAttach.localRotation = Quaternion.identity;
            grabInteractable.attachTransform = grabInteractableAttach;

            Assert.That(grabInteractable.attachPointCompatibilityMode, Is.EqualTo(XRGrabInteractable.AttachPointCompatibilityMode.Default));

            // Wait for physics update to ensure the Rigidbody is stable and center of mass has been calculated
            yield return new WaitForFixedUpdate();
            yield return null;

            Assert.That(grabInteractable.isSelected, Is.False);
            Assert.That(grabInteractable.attachTransform.position, Is.EqualTo(new Vector3(1f, 2f, 3f) + attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.attachTransform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(grabInteractable.transform.position, Is.EqualTo(new Vector3(1f, 2f, 3f)).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(boxCollider.center, Is.EqualTo(centerOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.position, Is.EqualTo(new Vector3(1f, 2f, 3f)).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.centerOfMass, Is.EqualTo(centerOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.worldCenterOfMass, Is.EqualTo(new Vector3(1f, 2f, 3f) + centerOffset).Using(Vector3ComparerWithEqualsOperator.Instance));

            // Create Interactor at some arbitrary point away from the Interactable
            var interactor = TestUtilities.CreateMockInteractor();
            var targetPosition = Vector3.zero;

            yield return null;

            Assert.That(grabInteractable.isSelected, Is.False);
            Assert.That(interactor.hasSelection, Is.False);
            Assert.That(interactor.interactablesSelected, Is.Empty);
            Assert.That(interactor.attachTransform, Is.Not.Null);
            Assert.That(interactor.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(interactor.attachTransform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));

            // Set valid so it will be selected next frame by the Interaction Manager
            interactor.validTargets.Add(grabInteractable);

            yield return WaitForSteadyState(movementType);

            Assert.That(grabInteractable.isSelected, Is.True);
            Assert.That(grabInteractable.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.attachTransform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(grabInteractable.transform.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(interactor.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(interactor.attachTransform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(rigidbody.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));

            // Move the attach transform on the Interactor after being grabbed
            targetPosition = new Vector3(5f, 5f, 5f);
            interactor.attachTransform.position = targetPosition;

            yield return WaitForSteadyState(movementType);

            Assert.That(grabInteractable.isSelected, Is.True);
            Assert.That(grabInteractable.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.attachTransform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(grabInteractable.transform.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(interactor.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(interactor.attachTransform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(rigidbody.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));

            // Move the attach transform on the Interactable to the back lower-right corner of the cube
            attachOffset = new Vector3(0.5f, 0f, -0.5f);
            grabInteractable.attachTransform.localPosition = attachOffset;

            yield return WaitForSteadyState(movementType);

            Assert.That(grabInteractable.isSelected, Is.True);
            Assert.That(grabInteractable.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.attachTransform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(grabInteractable.transform.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(interactor.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(interactor.attachTransform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(rigidbody.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
        }

        [UnityTest]
        public IEnumerator NonCenteredObjectRotatesToExpectedOrientation([ValueSource(nameof(s_MovementTypes))] XRBaseInteractable.MovementType movementType)
        {
            // Create a cube mesh with the pivot position at the bottom center
            // rather than the built-in Cube resource which has its center at the
            // center of the cube.
            var cubePrimitiveGO = GameObject.CreatePrimitive(PrimitiveType.Cube);
            var cubePrimitiveMesh = cubePrimitiveGO.GetComponent<MeshFilter>().sharedMesh;
            var centerOffset = new Vector3(0f, 0.5f, 0f);
            var offCenterMesh = new Mesh
            {
                vertices = cubePrimitiveMesh.vertices.Select(vertex => vertex + centerOffset).ToArray(),
                triangles = cubePrimitiveMesh.triangles.ToArray(),
                normals = cubePrimitiveMesh.normals.ToArray(),
            };
            cubePrimitiveGO.SetActive(false);
            Object.Destroy(cubePrimitiveGO);

            // Create Grab Interactable at some arbitrary point
            var grabInteractableGO = new GameObject("Grab Interactable");
            grabInteractableGO.transform.localPosition = new Vector3(1f, 2f, 3f);
            grabInteractableGO.transform.localRotation = Quaternion.LookRotation(Vector3.back, Vector3.up);
            var meshFilter = grabInteractableGO.AddComponent<MeshFilter>();
            meshFilter.sharedMesh = offCenterMesh;
            grabInteractableGO.AddComponent<MeshRenderer>();
            var boxCollider = grabInteractableGO.AddComponent<BoxCollider>();
            var rigidbody = grabInteractableGO.AddComponent<Rigidbody>();
            rigidbody.useGravity = false;
            rigidbody.isKinematic = true;
            var grabInteractable = grabInteractableGO.AddComponent<XRGrabInteractable>();
            grabInteractable.movementType = movementType;
            DisableDelayProperties(grabInteractable);
            // Set the Attach Transform to the back upper-right corner of the cube
            // to test an attach transform different from both the transform position and center.
            var grabInteractableAttach = new GameObject("Grab Interactable Attach").transform;
            var attachOffset = new Vector3(0.5f, 1f, -0.5f);
            grabInteractableAttach.SetParent(grabInteractable.transform);
            grabInteractableAttach.localPosition = attachOffset;
            var attachRotation = Quaternion.LookRotation(Vector3.left, Vector3.forward);
            grabInteractableAttach.rotation = attachRotation;
            grabInteractable.attachTransform = grabInteractableAttach;

            Assert.That(grabInteractable.attachPointCompatibilityMode, Is.EqualTo(XRGrabInteractable.AttachPointCompatibilityMode.Default));

            // Wait for physics update to ensure the Rigidbody is stable and center of mass has been calculated
            yield return new WaitForFixedUpdate();
            yield return null;

            Assert.That(grabInteractable.isSelected, Is.False);
            // The Grab Interactable is rotated 180 degrees around the y-axis,
            // so the Attach Transform becomes the front upper-left corner of the cube from the perspective of the world axes,
            // so the position will end up at (0.5, 3, 3.5).
            var worldAttachOffset = new Vector3(-0.5f, 1f, 0.5f);
            Assert.That(grabInteractable.attachTransform.position, Is.EqualTo(new Vector3(1f, 2f, 3f) + worldAttachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.position, Is.EqualTo(new Vector3(1f, 2f, 3f)).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(boxCollider.center, Is.EqualTo(centerOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.position, Is.EqualTo(new Vector3(1f, 2f, 3f)).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.centerOfMass, Is.EqualTo(centerOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.worldCenterOfMass, Is.EqualTo(new Vector3(1f, 2f, 3f) + centerOffset).Using(Vector3ComparerWithEqualsOperator.Instance));

            // Create Interactor at some arbitrary point away from the Interactable
            var interactor = TestUtilities.CreateMockInteractor();
            var targetPosition = Vector3.zero;
            var targetRotation = Quaternion.identity;

            yield return null;

            Assert.That(grabInteractable.isSelected, Is.False);
            Assert.That(interactor.hasSelection, Is.False);
            Assert.That(interactor.interactablesSelected, Is.Empty);
            Assert.That(interactor.attachTransform, Is.Not.Null);
            Assert.That(interactor.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(interactor.attachTransform.rotation, Is.EqualTo(targetRotation).Using(QuaternionEqualityComparer.Instance));

            // Set valid so it will be selected next frame by the Interaction Manager
            interactor.validTargets.Add(grabInteractable);

            yield return WaitForSteadyState(movementType);

            Assert.That(grabInteractable.isSelected, Is.True);
            // When the Grab Interactable moves to align with the Interactor's Attach Transform at the origin,
            // the cube should end up with the transform pivot on the right face from the perspective of the world axes
            // to have the Attach Transform there pointing forward.
            var expectedRotation = Quaternion.LookRotation(Vector3.down, Vector3.left);
            Assert.That(grabInteractable.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.attachTransform.rotation, Is.EqualTo(targetRotation).Using(QuaternionEqualityComparer.Instance));
            Assert.That(grabInteractable.transform.position, Is.EqualTo(new Vector3(1f, -0.5f, -0.5f)).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(expectedRotation).Using(QuaternionEqualityComparer.Instance));
            Assert.That(interactor.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(interactor.attachTransform.rotation, Is.EqualTo(targetRotation).Using(QuaternionEqualityComparer.Instance));
            Assert.That(rigidbody.position, Is.EqualTo(new Vector3(1f, -0.5f, -0.5f)).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.rotation, Is.EqualTo(expectedRotation).Using(QuaternionEqualityComparer.Instance));
        }
        
        [UnityTest]
        public IEnumerator TrackRotationDisabledObjectMovesAndRotatesToExpectedPositionAndOrientation([ValueSource(nameof(s_MovementTypes))] XRBaseInteractable.MovementType movementType)
        {
            // Create a cube mesh with the pivot position at the bottom center
            // rather than the built-in Cube resource which has its center at the
            // center of the cube.
            var cubePrimitiveGO = GameObject.CreatePrimitive(PrimitiveType.Cube);
            var cubePrimitiveMesh = cubePrimitiveGO.GetComponent<MeshFilter>().sharedMesh;
            var centerOffset = new Vector3(0f, 0.5f, 0f);
            var offCenterMesh = new Mesh
            {
                vertices = cubePrimitiveMesh.vertices.Select(vertex => vertex + centerOffset).ToArray(),
                triangles = cubePrimitiveMesh.triangles.ToArray(),
                normals = cubePrimitiveMesh.normals.ToArray(),
            };
            cubePrimitiveGO.SetActive(false);
            Object.Destroy(cubePrimitiveGO);

            // Create Grab Interactable at some arbitrary point
            var grabInteractableGO = new GameObject("Grab Interactable");
            grabInteractableGO.transform.localPosition = new Vector3(1f, 2f, 3f);
            grabInteractableGO.transform.localRotation = Quaternion.identity;
            var meshFilter = grabInteractableGO.AddComponent<MeshFilter>();
            meshFilter.sharedMesh = offCenterMesh;
            grabInteractableGO.AddComponent<MeshRenderer>();
            var boxCollider = grabInteractableGO.AddComponent<BoxCollider>();
            var rigidbody = grabInteractableGO.AddComponent<Rigidbody>();
            rigidbody.useGravity = false;
            rigidbody.isKinematic = true;
            var grabInteractable = grabInteractableGO.AddComponent<XRGrabInteractable>();
            grabInteractable.movementType = movementType;
            DisableDelayProperties(grabInteractable);
            // Set the Attach Transform to the back upper-right corner of the cube
            // to test an attach transform different from both the transform position and center.
            var grabInteractableAttach = new GameObject("Grab Interactable Attach").transform;
            var attachOffset = new Vector3(0.5f, 1f, -0.5f);
            var attachRotation = Quaternion.Euler(0f, 45f, 0f);
            grabInteractableAttach.SetParent(grabInteractable.transform);
            grabInteractableAttach.localPosition = attachOffset;
            grabInteractableAttach.localRotation = attachRotation;
            grabInteractable.attachTransform = grabInteractableAttach;
            // Disable track rotation
            grabInteractable.trackRotation = false;

            Assert.That(grabInteractable.attachPointCompatibilityMode, Is.EqualTo(XRGrabInteractable.AttachPointCompatibilityMode.Default));

            // Wait for physics update to ensure the Rigidbody is stable and center of mass has been calculated
            yield return new WaitForFixedUpdate();
            yield return null;

            Assert.That(grabInteractable.isSelected, Is.False);
            Assert.That(grabInteractable.attachTransform.position, Is.EqualTo(new Vector3(1f, 2f, 3f) + attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.attachTransform.rotation, Is.EqualTo(attachRotation).Using(QuaternionEqualityComparer.Instance));
            Assert.That(grabInteractable.transform.position, Is.EqualTo(new Vector3(1f, 2f, 3f)).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(boxCollider.center, Is.EqualTo(centerOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.position, Is.EqualTo(new Vector3(1f, 2f, 3f)).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.centerOfMass, Is.EqualTo(centerOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.worldCenterOfMass, Is.EqualTo(new Vector3(1f, 2f, 3f) + centerOffset).Using(Vector3ComparerWithEqualsOperator.Instance));

            // Create Interactor at some arbitrary point away from the Interactable
            var interactor = TestUtilities.CreateMockInteractor();
            var targetPosition = Vector3.zero;
            var interactorAttachTransformRotation = Quaternion.identity;

            yield return null;

            Assert.That(grabInteractable.isSelected, Is.False);
            Assert.That(interactor.hasSelection, Is.False);
            Assert.That(interactor.interactablesSelected, Is.Empty);
            Assert.That(interactor.attachTransform, Is.Not.Null);
            Assert.That(interactor.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(interactor.attachTransform.rotation, Is.EqualTo(interactorAttachTransformRotation).Using(QuaternionEqualityComparer.Instance));

            // Set valid so it will be selected next frame by the Interaction Manager
            interactor.validTargets.Add(grabInteractable);

            yield return WaitForSteadyState(movementType);

            Assert.That(grabInteractable.isSelected, Is.True);
            Assert.That(grabInteractable.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.attachTransform.rotation, Is.EqualTo(attachRotation).Using(QuaternionEqualityComparer.Instance));
            Assert.That(grabInteractable.transform.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(interactor.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(interactor.attachTransform.rotation, Is.EqualTo(interactorAttachTransformRotation).Using(QuaternionEqualityComparer.Instance));
            Assert.That(rigidbody.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));

            // Move and rotate the attach transform on the Interactor after being grabbed
            targetPosition = new Vector3(5f, 5f, 5f);
            interactorAttachTransformRotation = Quaternion.Euler(0f, 90f, 0f);
            interactor.attachTransform.position = targetPosition;
            interactor.attachTransform.rotation = interactorAttachTransformRotation;

            yield return WaitForSteadyState(movementType);

            // The expected object and its attached transform rotation remains unchanged since track rotation is disabled
            Assert.That(grabInteractable.isSelected, Is.True);
            Assert.That(grabInteractable.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.attachTransform.rotation, Is.EqualTo(attachRotation).Using(QuaternionEqualityComparer.Instance));
            Assert.That(grabInteractable.transform.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(interactor.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(interactor.attachTransform.rotation, Is.EqualTo(interactorAttachTransformRotation).Using(QuaternionEqualityComparer.Instance));
            Assert.That(rigidbody.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));

            // Move the attach transform on the Interactable to the back lower-right corner of the cube
            attachOffset = new Vector3(0.5f, 0f, -0.5f);
            grabInteractable.attachTransform.localPosition = attachOffset;

            yield return WaitForSteadyState(movementType);

            Assert.That(grabInteractable.isSelected, Is.True);
            Assert.That(grabInteractable.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.attachTransform.rotation, Is.EqualTo(attachRotation).Using(QuaternionEqualityComparer.Instance));
            Assert.That(grabInteractable.transform.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
            Assert.That(interactor.attachTransform.position, Is.EqualTo(targetPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(interactor.attachTransform.rotation, Is.EqualTo(interactorAttachTransformRotation).Using(QuaternionEqualityComparer.Instance));
            Assert.That(rigidbody.position, Is.EqualTo(targetPosition - attachOffset).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));
        }

        [UnityTest]
        public IEnumerator DynamicAttachKeepsSamePose([ValueSource(nameof(s_MovementTypes))] XRBaseInteractable.MovementType movementType)
        {
            // Create Grab Interactable at some arbitrary point
            var grabInteractableGO = GameObject.CreatePrimitive(PrimitiveType.Cube);
            grabInteractableGO.name = "Grab Interactable";
            grabInteractableGO.transform.localPosition = new Vector3(1f, 2f, 3f);
            grabInteractableGO.transform.localRotation = Quaternion.Euler(15f, 30f, 60f);
            var rigidbody = grabInteractableGO.AddComponent<Rigidbody>();
            rigidbody.useGravity = false;
            rigidbody.isKinematic = true;
            var grabInteractable = grabInteractableGO.AddComponent<XRGrabInteractable>();
            grabInteractable.movementType = movementType;
            grabInteractable.useDynamicAttach = true;
            grabInteractable.matchAttachPosition = true;
            grabInteractable.matchAttachRotation = true;
            grabInteractable.snapToColliderVolume = false;
            DisableDelayProperties(grabInteractable);

            Assert.That(grabInteractable.attachPointCompatibilityMode, Is.EqualTo(XRGrabInteractable.AttachPointCompatibilityMode.Default));

            // Wait for physics update to ensure the Rigidbody is stable and center of mass has been calculated
            yield return new WaitForFixedUpdate();
            yield return null;

            Assert.That(grabInteractable.isSelected, Is.False);
            Assert.That(grabInteractable.transform.position, Is.EqualTo(new Vector3(1f, 2f, 3f)).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(Quaternion.Euler(15f, 30f, 60f)).Using(QuaternionEqualityComparer.Instance));

            // Create Interactor at some arbitrary point away from the Interactable
            var interactor = TestUtilities.CreateMockInteractor();

            yield return null;

            Assert.That(grabInteractable.isSelected, Is.False);
            Assert.That(interactor.hasSelection, Is.False);
            Assert.That(interactor.interactablesSelected, Is.Empty);
            Assert.That(interactor.attachTransform, Is.Not.Null);
            Assert.That(interactor.attachTransform.position, Is.EqualTo(Vector3.zero).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(interactor.attachTransform.rotation, Is.EqualTo(Quaternion.identity).Using(QuaternionEqualityComparer.Instance));

            // Set valid so it will be selected next frame by the Interaction Manager
            interactor.validTargets.Add(grabInteractable);

            yield return WaitForSteadyState(movementType);

            Assert.That(grabInteractable.isSelected, Is.True);
            Assert.That(grabInteractable.transform.position, Is.EqualTo(new Vector3(1f, 2f, 3f)).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(Quaternion.Euler(15f, 30f, 60f)).Using(QuaternionEqualityComparer.Instance));
            Assert.That(rigidbody.position, Is.EqualTo(new Vector3(1f, 2f, 3f)).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(rigidbody.rotation, Is.EqualTo(Quaternion.Euler(15f, 30f, 60f)).Using(QuaternionEqualityComparer.Instance));
        }

        [UnityTest]
        public IEnumerator GrabTransformerMethodsInvoked()
        {
            // This method will test a sequence of adds, selections, and removes to make sure the grab transformer methods
            // are called as expected after each change of state. This also tests some of the fallback rules.
            // Splitting each of these to their own different test would cause a huge amount of code duplication
            // since the setup needed for each depends a lot on the previous steps.
            // 1. Add -> OnLink
            // 2. Single Select -> OnGrab, OnGrabCountChanged; Process called on Single only
            // 3. No change -> Process called on Single only
            // 4. Single Select but Single can't process -> Process called on Multiple only as fallback
            // 5. Multiple Select -> OnGrabCountChanged; Process called on Multiple only
            // 6. No change -> Process called on Multiple only
            // 7. Multiple Select but Multiple can't process -> Process called on Single only as fallback
            // 8. Multiple Select but both can't process -> No method calls
            // 9. Remove -> OnUnlink
            var grabInteractable = TestUtilities.CreateGrabInteractable();
            grabInteractable.ClearSingleGrabTransformers();
            grabInteractable.ClearMultipleGrabTransformers();
            grabInteractable.selectMode = InteractableSelectMode.Multiple;

            Assert.That(grabInteractable.singleGrabTransformersCount, Is.EqualTo(0));
            Assert.That(grabInteractable.multipleGrabTransformersCount, Is.EqualTo(0));

            var singleGrabTransformer = new MockGrabTransformer();
            var multipleGrabTransformer = new MockGrabTransformer();

            Assert.That(singleGrabTransformer.canProcess, Is.True);
            Assert.That(multipleGrabTransformer.canProcess, Is.True);

            // 1. Add -> OnLink
            grabInteractable.AddSingleGrabTransformer(singleGrabTransformer);
            grabInteractable.AddMultipleGrabTransformer(multipleGrabTransformer);

            Assert.That(singleGrabTransformer.methodTraces, Is.EqualTo(new[] { MockGrabTransformer.MethodTrace.OnLink }));
            Assert.That(multipleGrabTransformer.methodTraces, Is.EqualTo(new[] { MockGrabTransformer.MethodTrace.OnLink }));
            ClearMethodTraces();

            var interactor1 = TestUtilities.CreateMockInteractor();
            var interactor2 = TestUtilities.CreateMockInteractor();

            // 2. Single Select -> OnGrab, OnGrabCountChanged; Process called on Single only
            // Set valid so it will be selected next frame by the Interaction Manager
            interactor1.validTargets.Add(grabInteractable);

            yield return null;

            Assert.That(grabInteractable.interactorsSelecting, Is.EqualTo(new[] { interactor1 }));
            Assert.That(singleGrabTransformer.methodTraces, Is.EqualTo(new[]
            {
                MockGrabTransformer.MethodTrace.OnGrab,
                MockGrabTransformer.MethodTrace.OnGrabCountChanged,
                MockGrabTransformer.MethodTrace.ProcessDynamic,
            }));
            Assert.That(multipleGrabTransformer.methodTraces, Is.EqualTo(new[]
            {
                MockGrabTransformer.MethodTrace.OnGrab,
                MockGrabTransformer.MethodTrace.OnGrabCountChanged,
            }));
            ClearMethodTraces();

            // 3. No change -> Process called on Single only
            yield return null;

            Assert.That(grabInteractable.interactorsSelecting, Is.EqualTo(new[] { interactor1 }));
            Assert.That(singleGrabTransformer.methodTraces, Is.EqualTo(new[] { MockGrabTransformer.MethodTrace.ProcessDynamic }));
            Assert.That(multipleGrabTransformer.methodTraces, Is.Empty);
            ClearMethodTraces();

            // 4. Single Select but Single can't process -> Process called on Multiple only as fallback
            singleGrabTransformer.canProcess = false;
            multipleGrabTransformer.canProcess = true;

            yield return null;

            Assert.That(grabInteractable.interactorsSelecting, Is.EqualTo(new[] { interactor1 }));
            Assert.That(singleGrabTransformer.methodTraces, Is.Empty);
            Assert.That(multipleGrabTransformer.methodTraces, Is.EqualTo(new[] { MockGrabTransformer.MethodTrace.ProcessDynamic }));
            ClearMethodTraces();

            // 5. Multiple Select -> OnGrabCountChanged; Process called on Multiple only
            singleGrabTransformer.canProcess = true;
            multipleGrabTransformer.canProcess = true;

            // Set valid so it will be selected next frame by the Interaction Manager
            interactor2.validTargets.Add(grabInteractable);

            yield return null;

            Assert.That(grabInteractable.interactorsSelecting, Is.EqualTo(new[] { interactor1, interactor2 }));
            Assert.That(singleGrabTransformer.methodTraces, Is.EqualTo(new[]
            {
                MockGrabTransformer.MethodTrace.OnGrabCountChanged,
            }));
            Assert.That(multipleGrabTransformer.methodTraces, Is.EqualTo(new[]
            {
                MockGrabTransformer.MethodTrace.OnGrabCountChanged,
                MockGrabTransformer.MethodTrace.ProcessDynamic,
            }));
            ClearMethodTraces();

            // 6. No change -> Process called on Multiple only
            yield return null;

            Assert.That(grabInteractable.interactorsSelecting, Is.EqualTo(new[] { interactor1, interactor2 }));
            Assert.That(singleGrabTransformer.methodTraces, Is.Empty);
            Assert.That(multipleGrabTransformer.methodTraces, Is.EqualTo(new[] { MockGrabTransformer.MethodTrace.ProcessDynamic }));
            ClearMethodTraces();

            // 7. Multiple Select but Multiple can't process -> Process called on Single only as fallback
            singleGrabTransformer.canProcess = true;
            multipleGrabTransformer.canProcess = false;

            yield return null;

            Assert.That(grabInteractable.interactorsSelecting, Is.EqualTo(new[] { interactor1, interactor2 }));
            Assert.That(singleGrabTransformer.methodTraces, Is.EqualTo(new[] { MockGrabTransformer.MethodTrace.ProcessDynamic }));
            Assert.That(multipleGrabTransformer.methodTraces, Is.Empty);
            ClearMethodTraces();

            // 8. Multiple Select but both can't process -> No method calls
            singleGrabTransformer.canProcess = false;
            multipleGrabTransformer.canProcess = false;

            yield return null;

            Assert.That(grabInteractable.interactorsSelecting, Is.EqualTo(new[] { interactor1, interactor2 }));
            Assert.That(singleGrabTransformer.methodTraces, Is.Empty);
            Assert.That(multipleGrabTransformer.methodTraces, Is.Empty);

            // 9. Remove -> OnUnlink
            grabInteractable.RemoveSingleGrabTransformer(singleGrabTransformer);
            grabInteractable.RemoveMultipleGrabTransformer(multipleGrabTransformer);

            Assert.That(grabInteractable.interactorsSelecting, Is.EqualTo(new[] { interactor1, interactor2 }));
            Assert.That(singleGrabTransformer.methodTraces, Is.EqualTo(new[] { MockGrabTransformer.MethodTrace.OnUnlink }));
            Assert.That(multipleGrabTransformer.methodTraces, Is.EqualTo(new[] { MockGrabTransformer.MethodTrace.OnUnlink }));

            void ClearMethodTraces()
            {
                singleGrabTransformer.methodTraces.Clear();
                multipleGrabTransformer.methodTraces.Clear();
            }
        }

        [UnityTest]
        public IEnumerator GrabTransformerAddedAfterGrabHasGrabMethodsInvoked()
        {
            // Tests to make sure OnGrab is called when a new Grab Transformer is added when already selected
            var grabInteractable = TestUtilities.CreateGrabInteractable();
            grabInteractable.ClearSingleGrabTransformers();
            grabInteractable.ClearMultipleGrabTransformers();

            Assert.That(grabInteractable.singleGrabTransformersCount, Is.EqualTo(0));
            Assert.That(grabInteractable.multipleGrabTransformersCount, Is.EqualTo(0));

            // The first will be added before the grab, the second will be added after the grab
            var grabTransformer1 = new MockGrabTransformer();
            var grabTransformer2 = new MockGrabTransformer();

            grabInteractable.AddSingleGrabTransformer(grabTransformer1);

            var grabTransformers = new List<IXRGrabTransformer>();
            grabInteractable.GetSingleGrabTransformers(grabTransformers);
            Assert.That(grabTransformers, Is.EqualTo(new[] { grabTransformer1 }));

            Assert.That(grabTransformer1.methodTraces, Is.EqualTo(new[] { MockGrabTransformer.MethodTrace.OnLink }));
            grabTransformer1.methodTraces.Clear();

            var interactor = TestUtilities.CreateMockInteractor();

            // Set valid so it will be selected next frame by the Interaction Manager
            interactor.validTargets.Add(grabInteractable);

            yield return null;

            Assert.That(grabInteractable.isSelected, Is.True);
            Assert.That(grabInteractable.interactorsSelecting, Is.EqualTo(new[] { interactor }));
            Assert.That(grabTransformer1.methodTraces, Is.EqualTo(new[]
            {
                MockGrabTransformer.MethodTrace.OnGrab,
                MockGrabTransformer.MethodTrace.OnGrabCountChanged,
                MockGrabTransformer.MethodTrace.ProcessDynamic,
            }));
            grabTransformer1.methodTraces.Clear();

            grabInteractable.AddSingleGrabTransformer(grabTransformer2);

            grabInteractable.GetSingleGrabTransformers(grabTransformers);
            Assert.That(grabTransformers, Is.EqualTo(new[] { grabTransformer1, grabTransformer2 }));

            Assert.That(grabTransformer2.methodTraces, Is.EqualTo(new[]
            {
                MockGrabTransformer.MethodTrace.OnLink,
                MockGrabTransformer.MethodTrace.OnGrab,
            }));
            grabTransformer2.methodTraces.Clear();

            yield return null;

            Assert.That(grabTransformer1.methodTraces, Is.EqualTo(new[] { MockGrabTransformer.MethodTrace.ProcessDynamic }));
            Assert.That(grabTransformer2.methodTraces, Is.EqualTo(new[]
            {
                MockGrabTransformer.MethodTrace.OnGrabCountChanged,
                MockGrabTransformer.MethodTrace.ProcessDynamic,
            }));
        }

        [UnityTest]
        public IEnumerator GrabTransformerUnlinkedWhenInteractableDestroyed()
        {
            var grabInteractable = TestUtilities.CreateGrabInteractable();
            grabInteractable.ClearSingleGrabTransformers();
            grabInteractable.ClearMultipleGrabTransformers();

            Assert.That(grabInteractable.singleGrabTransformersCount, Is.EqualTo(0));
            Assert.That(grabInteractable.multipleGrabTransformersCount, Is.EqualTo(0));

            var singleGrabTransformer = new MockGrabTransformer();
            var multipleGrabTransformer = new MockGrabTransformer();

            grabInteractable.AddSingleGrabTransformer(singleGrabTransformer);
            grabInteractable.AddMultipleGrabTransformer(multipleGrabTransformer);

            var grabTransformers = new List<IXRGrabTransformer>();
            grabInteractable.GetSingleGrabTransformers(grabTransformers);
            Assert.That(grabTransformers, Is.EqualTo(new[] { singleGrabTransformer }));

            grabInteractable.GetMultipleGrabTransformers(grabTransformers);
            Assert.That(grabTransformers, Is.EqualTo(new[] { multipleGrabTransformer }));

            Assert.That(singleGrabTransformer.methodTraces, Is.EqualTo(new[] { MockGrabTransformer.MethodTrace.OnLink }));
            Assert.That(multipleGrabTransformer.methodTraces, Is.EqualTo(new[] { MockGrabTransformer.MethodTrace.OnLink }));
            singleGrabTransformer.methodTraces.Clear();
            multipleGrabTransformer.methodTraces.Clear();

            Object.Destroy(grabInteractable);

            yield return null;

            Assert.That(singleGrabTransformer.methodTraces, Is.EqualTo(new[] { MockGrabTransformer.MethodTrace.OnUnlink }));
            Assert.That(multipleGrabTransformer.methodTraces, Is.EqualTo(new[] { MockGrabTransformer.MethodTrace.OnUnlink }));

            grabInteractable.GetSingleGrabTransformers(grabTransformers);
            Assert.That(grabTransformers, Is.Empty);

            grabInteractable.GetMultipleGrabTransformers(grabTransformers);
            Assert.That(grabTransformers, Is.Empty);
        }

        [UnityTest]
        public IEnumerator AutomaticAddingOfDefaultGrabTransformersCanBeDisabled()
        {
            var grabInteractable = TestUtilities.CreateGrabInteractable();
            grabInteractable.addDefaultGrabTransformers = false;

            yield return null;

            var grabTransformers = new List<IXRGrabTransformer>();
            grabInteractable.GetSingleGrabTransformers(grabTransformers);
            Assert.That(grabTransformers, Is.Empty);

            grabInteractable.GetMultipleGrabTransformers(grabTransformers);
            Assert.That(grabTransformers, Is.Empty);

            Assert.That(grabInteractable.singleGrabTransformersCount, Is.EqualTo(0));
            Assert.That(grabInteractable.multipleGrabTransformersCount, Is.EqualTo(0));
        }

        [UnityTest]
        public IEnumerator XRBaseGrabTransformersAutomaticallyLink()
        {
            var grabInteractable = TestUtilities.CreateGrabInteractable();
            grabInteractable.addDefaultGrabTransformers = false;

            yield return null;

            var grabTransformers = new List<IXRGrabTransformer>();
            grabInteractable.GetSingleGrabTransformers(grabTransformers);
            Assert.That(grabTransformers, Is.Empty);

            grabInteractable.GetMultipleGrabTransformers(grabTransformers);
            Assert.That(grabTransformers, Is.Empty);

            Assert.That(typeof(XRSingleGrabFreeTransformer).IsSubclassOf(typeof(XRBaseGrabTransformer)), Is.True);
            var singleGrabTransformer = grabInteractable.gameObject.AddComponent<XRSingleGrabFreeTransformer>();

            Assert.That(typeof(XRDualGrabFreeTransformer).IsSubclassOf(typeof(XRBaseGrabTransformer)), Is.True);
            var multipleGrabTransformer = grabInteractable.gameObject.AddComponent<XRDualGrabFreeTransformer>();

            yield return null;

            grabInteractable.GetSingleGrabTransformers(grabTransformers);
            Assert.That(grabTransformers, Is.EqualTo(new[] { singleGrabTransformer }));

            grabInteractable.GetMultipleGrabTransformers(grabTransformers);
            Assert.That(grabTransformers, Is.EqualTo(new[] { multipleGrabTransformer }));

            Object.Destroy(singleGrabTransformer);
            Object.Destroy(multipleGrabTransformer);

            yield return null;

            grabInteractable.GetSingleGrabTransformers(grabTransformers);
            Assert.That(grabTransformers, Is.Empty);

            grabInteractable.GetMultipleGrabTransformers(grabTransformers);
            Assert.That(grabTransformers, Is.Empty);
        }

        [UnityTest]
        public IEnumerator GrabTransformerCanSetTargetPose([ValueSource(nameof(s_MovementTypes))] XRBaseInteractable.MovementType movementType)
        {
            var grabInteractable = TestUtilities.CreateGrabInteractable();
            grabInteractable.ClearSingleGrabTransformers();
            grabInteractable.ClearMultipleGrabTransformers();
            grabInteractable.movementType = movementType;
            DisableDelayProperties(grabInteractable);
            grabInteractable.transform.SetPositionAndRotation(new Vector3(1f, 2f, 3f), Quaternion.Euler(15f, 30f, 60f));

            Assert.That(grabInteractable.singleGrabTransformersCount, Is.EqualTo(0));
            Assert.That(grabInteractable.multipleGrabTransformersCount, Is.EqualTo(0));

            var grabTransformer = new MockGrabTransformer();
            grabInteractable.AddSingleGrabTransformer(grabTransformer);

            var grabTransformers = new List<IXRGrabTransformer>();
            grabInteractable.GetSingleGrabTransformers(grabTransformers);
            Assert.That(grabTransformers, Is.EqualTo(new[] { grabTransformer }));

            yield return WaitForSteadyState(movementType);

            grabInteractable.GetSingleGrabTransformers(grabTransformers);
            Assert.That(grabTransformers, Is.EqualTo(new[] { grabTransformer }));

            Assert.That(grabInteractable.isSelected, Is.False);
            Assert.That(grabInteractable.transform.position, Is.EqualTo(new Vector3(1f, 2f, 3f)).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(Quaternion.Euler(15f, 30f, 60f)).Using(QuaternionEqualityComparer.Instance));

            var interactor = TestUtilities.CreateMockInteractor();

            // Set valid so it will be selected next frame by the Interaction Manager
            interactor.validTargets.Add(grabInteractable);

            yield return WaitForSteadyState(movementType);

            // Keeps the same pose if Process does not change the values
            Assert.That(grabInteractable.isSelected, Is.True);
            Assert.That(grabInteractable.transform.position, Is.EqualTo(new Vector3(1f, 2f, 3f)).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(Quaternion.Euler(15f, 30f, 60f)).Using(QuaternionEqualityComparer.Instance));

            grabTransformer.targetPoseValue = new Pose(new Vector3(4f, 5f, 6f), Quaternion.Euler(80f, 20f, -100f));

            yield return WaitForSteadyState(movementType);

            Assert.That(grabInteractable.transform.position, Is.EqualTo(grabTransformer.targetPoseValue.Value.position).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(grabInteractable.transform.rotation, Is.EqualTo(grabTransformer.targetPoseValue.Value.rotation).Using(QuaternionEqualityComparer.Instance));
        }

        [UnityTest]
        public IEnumerator GrabTransformerCanSetScale([ValueSource(nameof(s_MovementTypes))] XRBaseInteractable.MovementType movementType)
        {
            var grabInteractable = TestUtilities.CreateGrabInteractable();
            grabInteractable.ClearSingleGrabTransformers();
            grabInteractable.ClearMultipleGrabTransformers();
            grabInteractable.movementType = movementType;
            DisableDelayProperties(grabInteractable);
            grabInteractable.transform.localScale = Vector3.one;

            Assert.That(grabInteractable.singleGrabTransformersCount, Is.EqualTo(0));
            Assert.That(grabInteractable.multipleGrabTransformersCount, Is.EqualTo(0));

            var grabTransformer = new MockGrabTransformer();
            grabInteractable.AddSingleGrabTransformer(grabTransformer);

            var grabTransformers = new List<IXRGrabTransformer>();
            grabInteractable.GetSingleGrabTransformers(grabTransformers);
            Assert.That(grabTransformers, Is.EqualTo(new[] { grabTransformer }));

            yield return WaitForSteadyState(movementType);

            grabInteractable.GetSingleGrabTransformers(grabTransformers);
            Assert.That(grabTransformers, Is.EqualTo(new[] { grabTransformer }));

            Assert.That(grabInteractable.isSelected, Is.False);
            Assert.That(grabInteractable.transform.localScale, Is.EqualTo(Vector3.one).Using(Vector3ComparerWithEqualsOperator.Instance));

            var interactor = TestUtilities.CreateMockInteractor();

            // Set valid so it will be selected next frame by the Interaction Manager
            interactor.validTargets.Add(grabInteractable);

            yield return WaitForSteadyState(movementType);

            // Keeps the same scale if Process does not change the values
            Assert.That(grabInteractable.isSelected, Is.True);
            Assert.That(grabInteractable.transform.localScale, Is.EqualTo(Vector3.one).Using(Vector3ComparerWithEqualsOperator.Instance));

            grabTransformer.localScaleValue = new Vector3(0.5f, 0.25f, 0.75f);

            yield return WaitForSteadyState(movementType);

            Assert.That(grabInteractable.transform.localScale, Is.EqualTo(grabTransformer.localScaleValue.Value).Using(Vector3ComparerWithEqualsOperator.Instance));
        }

        [TestCase(false, false)]
        [TestCase(false, true)]
        [TestCase(true, false)]
        [TestCase(true, true)]
        public void InitializesDynamicAttachTransformToInteractorAttachPose(bool matchAttachPosition, bool matchAttachRotation)
        {
            var interactor = TestUtilities.CreateMockInteractor();
            interactor.transform.localPosition = new Vector3(1f, 2f, 3f);
            interactor.transform.localRotation = Quaternion.Euler(15f, 30f, 60f);
            var grabInteractableGO = GameObject.CreatePrimitive(PrimitiveType.Cube);
            grabInteractableGO.transform.SetWorldPose(Pose.identity);
            var grabInteractable = grabInteractableGO.AddComponent<PublicAccessGrabInteractable>();
            grabInteractable.useDynamicAttach = true;
            grabInteractable.matchAttachPosition = matchAttachPosition;
            grabInteractable.matchAttachRotation = matchAttachRotation;
            grabInteractable.snapToColliderVolume = false;

            var dynamicAttachTransform = new GameObject("Dynamic Attach Transform").transform;
            dynamicAttachTransform.SetLocalPose(Pose.identity);
            dynamicAttachTransform.SetParent(grabInteractable.transform, false);

            grabInteractable.InitializeDynamicAttachPose(interactor, dynamicAttachTransform);

            var expectedPosition = matchAttachPosition ? new Vector3(1f, 2f, 3f) : Vector3.zero;
            var expectedRotation = matchAttachRotation ? Quaternion.Euler(15f, 30f, 60f) : Quaternion.identity;
            Assert.That(dynamicAttachTransform.position, Is.EqualTo(expectedPosition).Using(Vector3ComparerWithEqualsOperator.Instance));
            Assert.That(dynamicAttachTransform.rotation, Is.EqualTo(expectedRotation).Using(QuaternionEqualityComparer.Instance));
        }

        [Test]
        public void MatchAttachPropertiesNotOverriddenByBaseInteractor()
        {
            var interactor = TestUtilities.CreateMockInteractor();
            var grabInteractableGO = GameObject.CreatePrimitive(PrimitiveType.Cube);
            var grabInteractable = grabInteractableGO.AddComponent<PublicAccessGrabInteractable>();
            grabInteractable.useDynamicAttach = true;
            grabInteractable.matchAttachPosition = true;
            grabInteractable.matchAttachRotation = true;
            grabInteractable.snapToColliderVolume = true;

            Assert.That(grabInteractable.ShouldMatchAttachPosition(interactor), Is.True);
            Assert.That(grabInteractable.ShouldMatchAttachRotation(interactor), Is.True);
            Assert.That(grabInteractable.ShouldSnapToColliderVolume(interactor), Is.True);

            grabInteractable.matchAttachPosition = false;
            grabInteractable.matchAttachRotation = false;
            grabInteractable.snapToColliderVolume = false;

            Assert.That(grabInteractable.ShouldMatchAttachPosition(interactor), Is.False);
            Assert.That(grabInteractable.ShouldMatchAttachRotation(interactor), Is.False);
            Assert.That(grabInteractable.ShouldSnapToColliderVolume(interactor), Is.False);
        }

        [Test]
        public void MatchAttachPropertiesOverriddenBySocketInteractor()
        {
            var interactor = TestUtilities.CreateSocketInteractor();
            var grabInteractableGO = GameObject.CreatePrimitive(PrimitiveType.Cube);
            var grabInteractable = grabInteractableGO.AddComponent<PublicAccessGrabInteractable>();
            grabInteractable.useDynamicAttach = true;
            grabInteractable.matchAttachPosition = true;
            grabInteractable.matchAttachRotation = true;
            grabInteractable.snapToColliderVolume = true;

            Assert.That(grabInteractable.ShouldMatchAttachPosition(interactor), Is.False);
            Assert.That(grabInteractable.ShouldMatchAttachRotation(interactor), Is.False);
            Assert.That(grabInteractable.ShouldSnapToColliderVolume(interactor), Is.True);

            grabInteractable.matchAttachPosition = false;
            grabInteractable.matchAttachRotation = false;
            grabInteractable.snapToColliderVolume = false;

            Assert.That(grabInteractable.ShouldMatchAttachPosition(interactor), Is.False);
            Assert.That(grabInteractable.ShouldMatchAttachRotation(interactor), Is.False);
            Assert.That(grabInteractable.ShouldSnapToColliderVolume(interactor), Is.False);
        }

        [TestCase(false)]
        [TestCase(true)]
        public void MatchAttachPropertiesOverriddenByRayInteractor(bool useForceGrab)
        {
            var interactor = TestUtilities.CreateRayInteractor();
            interactor.useForceGrab = useForceGrab;
            var grabInteractableGO = GameObject.CreatePrimitive(PrimitiveType.Cube);
            var grabInteractable = grabInteractableGO.AddComponent<PublicAccessGrabInteractable>();
            grabInteractable.useDynamicAttach = true;
            grabInteractable.matchAttachPosition = true;
            grabInteractable.matchAttachRotation = true;
            grabInteractable.snapToColliderVolume = true;

            Assert.That(grabInteractable.ShouldMatchAttachPosition(interactor), Is.Not.EqualTo(useForceGrab));
            Assert.That(grabInteractable.ShouldMatchAttachRotation(interactor), Is.True);
            Assert.That(grabInteractable.ShouldSnapToColliderVolume(interactor), Is.True);

            grabInteractable.matchAttachPosition = false;
            grabInteractable.matchAttachRotation = false;
            grabInteractable.snapToColliderVolume = false;

            Assert.That(grabInteractable.ShouldMatchAttachPosition(interactor), Is.False);
            Assert.That(grabInteractable.ShouldMatchAttachRotation(interactor), Is.False);
            Assert.That(grabInteractable.ShouldSnapToColliderVolume(interactor), Is.False);
        }

        class PublicAccessGrabInteractable : XRGrabInteractable
        {
            public new bool ShouldMatchAttachPosition(IXRSelectInteractor interactor) => base.ShouldMatchAttachPosition(interactor);

            public new bool ShouldMatchAttachRotation(IXRSelectInteractor interactor) => base.ShouldMatchAttachRotation(interactor);

            public new bool ShouldSnapToColliderVolume(IXRSelectInteractor interactor) => base.ShouldSnapToColliderVolume(interactor);

            public new void InitializeDynamicAttachPose(IXRSelectInteractor interactor, Transform dynamicAttachTransform) =>
                base.InitializeDynamicAttachPose(interactor, dynamicAttachTransform);
        }
    }
}