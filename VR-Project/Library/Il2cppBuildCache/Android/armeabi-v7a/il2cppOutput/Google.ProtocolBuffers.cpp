#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>
struct Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>
struct Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256;
// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>
struct Dictionary_2_t2C9174ADBD8F9BA0C7614DCA5CA178EA9D236857;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t94EDACED291E81230362ED968AE1B9B5034550FB;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t673DFF64E51C18A8B1287F4BD988966CE3B15A45;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t9C161AD4E982EC01062A5E052662E7862A7874F4;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair>
struct IEqualityComparer_1_tA702F69E87FCEC994C6988BE1433EA0CF0F3DD3E;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>
struct KeyCollection_tCFE00C4B8E3481EC8A5D1F371A666E0EA6DB6FD0;
// System.Collections.Generic.Dictionary`2/KeyCollection<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>
struct KeyCollection_t5D0E48F493F5ED720A907DCF2F21A2783EA6D65D;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>
struct ValueCollection_t30995518DABE0D316CA62A38B00C49988F903A3F;
// System.Collections.Generic.Dictionary`2/ValueCollection<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>
struct ValueCollection_t2BA743573B5AA2495B886D4508BD8832C915891F;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>[]
struct EntryU5BU5D_t3ED4F2726E5EA0C914067970DE397EC9FF2ED298;
// System.Collections.Generic.Dictionary`2/Entry<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>[]
struct EntryU5BU5D_t1FCD3C993078F94041AC9C4E8A8AB5B0DD19BB33;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Google.ProtocolBuffers.ByteString
struct ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Exception
struct Exception_t;
// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5;
// Google.ProtocolBuffers.IBuilderLite
struct IBuilderLite_t3455A8D3C46916F3BC2556810070F82D7A6455D3;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Google.ProtocolBuffers.IMessageLite
struct IMessageLite_tA796EF3E5E4656B8FC42C9138B1423CB43BC5D68;
// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// Google.ProtocolBuffers.InvalidProtocolBufferException
struct InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.Type
struct Type_t;
// Google.ProtocolBuffers.UninitializedMessageException
struct UninitializedMessageException_t972153CF378C13CE55AED679E613EBFB65907E83;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Google.ProtocolBuffers.CodedOutputStream/OutOfSpaceException
struct OutOfSpaceException_tDF80BF94ABB3ECC88AE7B7C851596B3A820489B1;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameworkPortability_t75531D894745351C33AA12992DB03BC39B9CF74A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBuilderLite_t3455A8D3C46916F3BC2556810070F82D7A6455D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t94EDACED291E81230362ED968AE1B9B5034550FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t673DFF64E51C18A8B1287F4BD988966CE3B15A45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t87C38B0EE9F1DE9AFC8F366EEAE5D497C061B4E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMessageLite_tA796EF3E5E4656B8FC42C9138B1423CB43BC5D68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfSpaceException_tDF80BF94ABB3ECC88AE7B7C851596B3A820489B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral32FC645E89078B86749D57C4CAC50B9D5BF192C0;
IL2CPP_EXTERN_C String_t* _stringLiteral361DCAE70833E87AF4B169A7E89AC3F82B22C68D;
IL2CPP_EXTERN_C String_t* _stringLiteral37CAB78886EABBE51E00800B7D06DF3BC833E248;
IL2CPP_EXTERN_C String_t* _stringLiteral3E9140A37888450FAF9B70A0C32C11FB471FFF6A;
IL2CPP_EXTERN_C String_t* _stringLiteral66D5BE4AFB85E2143155EC87ACACA892F4969F4F;
IL2CPP_EXTERN_C String_t* _stringLiteral67875C89B7D74D98EB5F19AFA28A2F65638FD06B;
IL2CPP_EXTERN_C String_t* _stringLiteral6F356AD89457A0E07F3806D7D150A40568358E35;
IL2CPP_EXTERN_C String_t* _stringLiteral77E95D09C5F112B22B85209F68C2D00F8C0455D4;
IL2CPP_EXTERN_C String_t* _stringLiteral969102D1EB362C94277F4C9C936058AF4A09EA47;
IL2CPP_EXTERN_C String_t* _stringLiteralA20877EDFA7D8BA34A319D9F0BAD242BE0558B29;
IL2CPP_EXTERN_C String_t* _stringLiteralB3611BCFD4C959E153B2D5A4BC5FF22874151973;
IL2CPP_EXTERN_C String_t* _stringLiteralBC90A44252B611E4DA17C5914BBC7180A24B2E55;
IL2CPP_EXTERN_C String_t* _stringLiteralDC3CEC67214AC74EEA247DC50A8C840F0B2308B0;
IL2CPP_EXTERN_C String_t* _stringLiteralF675610394CF76A6BCE5A6A7C06021D99F54199F;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_CheckLastTagWas_m28D6F0A6FF1C952BB42A948C47DBD38339EB92F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_PushLimit_m1854C1FA7289DF8BAFB8BADBAA2B6B8693FE2822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_ReadMessage_m5D9B0741D5EC3106740E8DE56752CA5BD98F84A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_ReadRawBytes_m7FBEDB3E623E59BEC1F6B6FC8AE10AB28C8BA130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_ReadRawVarint32_m17E84932C037FC629E48C8BD7C38F381A937001A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_ReadRawVarint32_m565C74FB7192E10D19DEBC8C2DD2A72723DA2B62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_ReadRawVarint64_mCABB283337372618F0D33AAFBC6483C0BAC21D78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_ReadTag_m3BDAC10958E13B59F571A57D0304B372E6719EF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_RefillBuffer_m5146E2A6D7B932DF81F031D2EFD8EE35A2A15C61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_SkipField_mF57F4CE323B361D9ED7795FF76184BCA22FE3745_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_SkipImpl_m07171E9AAADDC5CD3873B351D33687F16EF84B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_SkipRawBytes_m993F821EA6EC6DE9E35D94081714F57E8CE6996D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_SlowReadRawVarint32_m8F6F9F131543E48C86B00082AE94D7A081E55C23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedOutputStream_CheckNoSpaceLeft_m5CFAE09852A3FD109EC6C7BA94BF2D311EC7DA1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedOutputStream_RefreshBuffer_mD9D5A7943F18439D86239870A2A12229136BBA7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedOutputStream_get_SpaceLeft_m6FE86945329112834D2853C908CA219479AC3581_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m17C5F3C712FB57465C5F39FE4AB3651FEF6942D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2AAF0A3D0DB2C1815A964E002A0EA308E075F0F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC5F7F8487E6B29554657BCBE89090BB8E7A16421_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD16E9BAB800FEB8A571777E0D1EA77D2ED90B84B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA883043E5D5EF71DBC1CAB582704E6AEE2743609_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m02C594AD8F27BF8AEC5E1C08B33236E2B0063965_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowIfNull_m9A9CAEFB9454ACC5341F04F73FBDE9DC996F27A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowIfNull_mB38F1A7437B7520460411B3DCA9A068E6BCE62CC_RuntimeMethod_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t89795EC2AF9539971B46BE950370A2C08D7289CA 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>
struct Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3ED4F2726E5EA0C914067970DE397EC9FF2ED298* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tCFE00C4B8E3481EC8A5D1F371A666E0EA6DB6FD0 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t30995518DABE0D316CA62A38B00C49988F903A3F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7, ___entries_1)); }
	inline EntryU5BU5D_t3ED4F2726E5EA0C914067970DE397EC9FF2ED298* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3ED4F2726E5EA0C914067970DE397EC9FF2ED298** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3ED4F2726E5EA0C914067970DE397EC9FF2ED298* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7, ___keys_7)); }
	inline KeyCollection_tCFE00C4B8E3481EC8A5D1F371A666E0EA6DB6FD0 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCFE00C4B8E3481EC8A5D1F371A666E0EA6DB6FD0 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCFE00C4B8E3481EC8A5D1F371A666E0EA6DB6FD0 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7, ___values_8)); }
	inline ValueCollection_t30995518DABE0D316CA62A38B00C49988F903A3F * get_values_8() const { return ___values_8; }
	inline ValueCollection_t30995518DABE0D316CA62A38B00C49988F903A3F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t30995518DABE0D316CA62A38B00C49988F903A3F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>
struct Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1FCD3C993078F94041AC9C4E8A8AB5B0DD19BB33* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t5D0E48F493F5ED720A907DCF2F21A2783EA6D65D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2BA743573B5AA2495B886D4508BD8832C915891F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256, ___entries_1)); }
	inline EntryU5BU5D_t1FCD3C993078F94041AC9C4E8A8AB5B0DD19BB33* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1FCD3C993078F94041AC9C4E8A8AB5B0DD19BB33** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1FCD3C993078F94041AC9C4E8A8AB5B0DD19BB33* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256, ___keys_7)); }
	inline KeyCollection_t5D0E48F493F5ED720A907DCF2F21A2783EA6D65D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5D0E48F493F5ED720A907DCF2F21A2783EA6D65D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5D0E48F493F5ED720A907DCF2F21A2783EA6D65D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256, ___values_8)); }
	inline ValueCollection_t2BA743573B5AA2495B886D4508BD8832C915891F * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2BA743573B5AA2495B886D4508BD8832C915891F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2BA743573B5AA2495B886D4508BD8832C915891F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE, ____items_1)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get__items_1() const { return ____items_1; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.BitConverter
struct BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654  : public RuntimeObject
{
public:

public:
};

struct BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields
{
public:
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;

public:
	inline static int32_t get_offset_of_IsLittleEndian_0() { return static_cast<int32_t>(offsetof(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields, ___IsLittleEndian_0)); }
	inline bool get_IsLittleEndian_0() const { return ___IsLittleEndian_0; }
	inline bool* get_address_of_IsLittleEndian_0() { return &___IsLittleEndian_0; }
	inline void set_IsLittleEndian_0(bool value)
	{
		___IsLittleEndian_0 = value;
	}
};


// Google.ProtocolBuffers.ByteArray
struct ByteArray_tF8C2DEFB874BE45F80C3FEDA8A6EAEBE77F1EA4D  : public RuntimeObject
{
public:

public:
};


// Google.ProtocolBuffers.ByteString
struct ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586  : public RuntimeObject
{
public:
	// System.Byte[] Google.ProtocolBuffers.ByteString::bytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes_1;

public:
	inline static int32_t get_offset_of_bytes_1() { return static_cast<int32_t>(offsetof(ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586, ___bytes_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_bytes_1() const { return ___bytes_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_bytes_1() { return &___bytes_1; }
	inline void set_bytes_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___bytes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bytes_1), (void*)value);
	}
};

struct ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586_StaticFields
{
public:
	// Google.ProtocolBuffers.ByteString Google.ProtocolBuffers.ByteString::empty
	ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586_StaticFields, ___empty_0)); }
	inline ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * get_empty_0() const { return ___empty_0; }
	inline ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 ** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___empty_0), (void*)value);
	}
};


// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7  : public RuntimeObject
{
public:
	// System.Byte[] Google.ProtocolBuffers.CodedInputStream::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_0;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::bufferSize
	int32_t ___bufferSize_1;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::bufferSizeAfterLimit
	int32_t ___bufferSizeAfterLimit_2;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::bufferPos
	int32_t ___bufferPos_3;
	// System.IO.Stream Google.ProtocolBuffers.CodedInputStream::input
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input_4;
	// System.UInt32 Google.ProtocolBuffers.CodedInputStream::lastTag
	uint32_t ___lastTag_5;
	// System.UInt32 Google.ProtocolBuffers.CodedInputStream::nextTag
	uint32_t ___nextTag_6;
	// System.Boolean Google.ProtocolBuffers.CodedInputStream::hasNextTag
	bool ___hasNextTag_7;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::totalBytesRetired
	int32_t ___totalBytesRetired_8;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::currentLimit
	int32_t ___currentLimit_9;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::recursionDepth
	int32_t ___recursionDepth_10;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::recursionLimit
	int32_t ___recursionLimit_11;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::sizeLimit
	int32_t ___sizeLimit_12;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7, ___buffer_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_bufferSize_1() { return static_cast<int32_t>(offsetof(CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7, ___bufferSize_1)); }
	inline int32_t get_bufferSize_1() const { return ___bufferSize_1; }
	inline int32_t* get_address_of_bufferSize_1() { return &___bufferSize_1; }
	inline void set_bufferSize_1(int32_t value)
	{
		___bufferSize_1 = value;
	}

	inline static int32_t get_offset_of_bufferSizeAfterLimit_2() { return static_cast<int32_t>(offsetof(CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7, ___bufferSizeAfterLimit_2)); }
	inline int32_t get_bufferSizeAfterLimit_2() const { return ___bufferSizeAfterLimit_2; }
	inline int32_t* get_address_of_bufferSizeAfterLimit_2() { return &___bufferSizeAfterLimit_2; }
	inline void set_bufferSizeAfterLimit_2(int32_t value)
	{
		___bufferSizeAfterLimit_2 = value;
	}

	inline static int32_t get_offset_of_bufferPos_3() { return static_cast<int32_t>(offsetof(CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7, ___bufferPos_3)); }
	inline int32_t get_bufferPos_3() const { return ___bufferPos_3; }
	inline int32_t* get_address_of_bufferPos_3() { return &___bufferPos_3; }
	inline void set_bufferPos_3(int32_t value)
	{
		___bufferPos_3 = value;
	}

	inline static int32_t get_offset_of_input_4() { return static_cast<int32_t>(offsetof(CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7, ___input_4)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_input_4() const { return ___input_4; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_input_4() { return &___input_4; }
	inline void set_input_4(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___input_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_4), (void*)value);
	}

	inline static int32_t get_offset_of_lastTag_5() { return static_cast<int32_t>(offsetof(CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7, ___lastTag_5)); }
	inline uint32_t get_lastTag_5() const { return ___lastTag_5; }
	inline uint32_t* get_address_of_lastTag_5() { return &___lastTag_5; }
	inline void set_lastTag_5(uint32_t value)
	{
		___lastTag_5 = value;
	}

	inline static int32_t get_offset_of_nextTag_6() { return static_cast<int32_t>(offsetof(CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7, ___nextTag_6)); }
	inline uint32_t get_nextTag_6() const { return ___nextTag_6; }
	inline uint32_t* get_address_of_nextTag_6() { return &___nextTag_6; }
	inline void set_nextTag_6(uint32_t value)
	{
		___nextTag_6 = value;
	}

	inline static int32_t get_offset_of_hasNextTag_7() { return static_cast<int32_t>(offsetof(CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7, ___hasNextTag_7)); }
	inline bool get_hasNextTag_7() const { return ___hasNextTag_7; }
	inline bool* get_address_of_hasNextTag_7() { return &___hasNextTag_7; }
	inline void set_hasNextTag_7(bool value)
	{
		___hasNextTag_7 = value;
	}

	inline static int32_t get_offset_of_totalBytesRetired_8() { return static_cast<int32_t>(offsetof(CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7, ___totalBytesRetired_8)); }
	inline int32_t get_totalBytesRetired_8() const { return ___totalBytesRetired_8; }
	inline int32_t* get_address_of_totalBytesRetired_8() { return &___totalBytesRetired_8; }
	inline void set_totalBytesRetired_8(int32_t value)
	{
		___totalBytesRetired_8 = value;
	}

	inline static int32_t get_offset_of_currentLimit_9() { return static_cast<int32_t>(offsetof(CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7, ___currentLimit_9)); }
	inline int32_t get_currentLimit_9() const { return ___currentLimit_9; }
	inline int32_t* get_address_of_currentLimit_9() { return &___currentLimit_9; }
	inline void set_currentLimit_9(int32_t value)
	{
		___currentLimit_9 = value;
	}

	inline static int32_t get_offset_of_recursionDepth_10() { return static_cast<int32_t>(offsetof(CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7, ___recursionDepth_10)); }
	inline int32_t get_recursionDepth_10() const { return ___recursionDepth_10; }
	inline int32_t* get_address_of_recursionDepth_10() { return &___recursionDepth_10; }
	inline void set_recursionDepth_10(int32_t value)
	{
		___recursionDepth_10 = value;
	}

	inline static int32_t get_offset_of_recursionLimit_11() { return static_cast<int32_t>(offsetof(CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7, ___recursionLimit_11)); }
	inline int32_t get_recursionLimit_11() const { return ___recursionLimit_11; }
	inline int32_t* get_address_of_recursionLimit_11() { return &___recursionLimit_11; }
	inline void set_recursionLimit_11(int32_t value)
	{
		___recursionLimit_11 = value;
	}

	inline static int32_t get_offset_of_sizeLimit_12() { return static_cast<int32_t>(offsetof(CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7, ___sizeLimit_12)); }
	inline int32_t get_sizeLimit_12() const { return ___sizeLimit_12; }
	inline int32_t* get_address_of_sizeLimit_12() { return &___sizeLimit_12; }
	inline void set_sizeLimit_12(int32_t value)
	{
		___sizeLimit_12 = value;
	}
};


// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388  : public RuntimeObject
{
public:
	// System.Byte[] Google.ProtocolBuffers.CodedOutputStream::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_1;
	// System.Int32 Google.ProtocolBuffers.CodedOutputStream::limit
	int32_t ___limit_2;
	// System.Int32 Google.ProtocolBuffers.CodedOutputStream::position
	int32_t ___position_3;
	// System.IO.Stream Google.ProtocolBuffers.CodedOutputStream::output
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___output_4;

public:
	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388, ___buffer_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_limit_2() { return static_cast<int32_t>(offsetof(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388, ___limit_2)); }
	inline int32_t get_limit_2() const { return ___limit_2; }
	inline int32_t* get_address_of_limit_2() { return &___limit_2; }
	inline void set_limit_2(int32_t value)
	{
		___limit_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388, ___position_3)); }
	inline int32_t get_position_3() const { return ___position_3; }
	inline int32_t* get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(int32_t value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_output_4() { return static_cast<int32_t>(offsetof(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388, ___output_4)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_output_4() const { return ___output_4; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_output_4() { return &___output_4; }
	inline void set_output_4(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___output_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_4), (void*)value);
	}
};

struct CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_StaticFields
{
public:
	// System.Int32 Google.ProtocolBuffers.CodedOutputStream::DefaultBufferSize
	int32_t ___DefaultBufferSize_0;

public:
	inline static int32_t get_offset_of_DefaultBufferSize_0() { return static_cast<int32_t>(offsetof(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_StaticFields, ___DefaultBufferSize_0)); }
	inline int32_t get_DefaultBufferSize_0() const { return ___DefaultBufferSize_0; }
	inline int32_t* get_address_of_DefaultBufferSize_0() { return &___DefaultBufferSize_0; }
	inline void set_DefaultBufferSize_0(int32_t value)
	{
		___DefaultBufferSize_0 = value;
	}
};


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>> Google.ProtocolBuffers.ExtensionRegistry::extensionsByName
	Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 * ___extensionsByName_1;
	// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite> Google.ProtocolBuffers.ExtensionRegistry::extensionsByNumber
	Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 * ___extensionsByNumber_2;
	// System.Boolean Google.ProtocolBuffers.ExtensionRegistry::readOnly
	bool ___readOnly_3;

public:
	inline static int32_t get_offset_of_extensionsByName_1() { return static_cast<int32_t>(offsetof(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5, ___extensionsByName_1)); }
	inline Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 * get_extensionsByName_1() const { return ___extensionsByName_1; }
	inline Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 ** get_address_of_extensionsByName_1() { return &___extensionsByName_1; }
	inline void set_extensionsByName_1(Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 * value)
	{
		___extensionsByName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensionsByName_1), (void*)value);
	}

	inline static int32_t get_offset_of_extensionsByNumber_2() { return static_cast<int32_t>(offsetof(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5, ___extensionsByNumber_2)); }
	inline Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 * get_extensionsByNumber_2() const { return ___extensionsByNumber_2; }
	inline Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 ** get_address_of_extensionsByNumber_2() { return &___extensionsByNumber_2; }
	inline void set_extensionsByNumber_2(Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 * value)
	{
		___extensionsByNumber_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensionsByNumber_2), (void*)value);
	}

	inline static int32_t get_offset_of_readOnly_3() { return static_cast<int32_t>(offsetof(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5, ___readOnly_3)); }
	inline bool get_readOnly_3() const { return ___readOnly_3; }
	inline bool* get_address_of_readOnly_3() { return &___readOnly_3; }
	inline void set_readOnly_3(bool value)
	{
		___readOnly_3 = value;
	}
};

struct ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_StaticFields
{
public:
	// Google.ProtocolBuffers.ExtensionRegistry Google.ProtocolBuffers.ExtensionRegistry::empty
	ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_StaticFields, ___empty_0)); }
	inline ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * get_empty_0() const { return ___empty_0; }
	inline ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 ** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___empty_0), (void*)value);
	}
};


// Google.ProtocolBuffers.FrameworkPortability
struct FrameworkPortability_t75531D894745351C33AA12992DB03BC39B9CF74A  : public RuntimeObject
{
public:

public:
};

struct FrameworkPortability_t75531D894745351C33AA12992DB03BC39B9CF74A_StaticFields
{
public:
	// System.String Google.ProtocolBuffers.FrameworkPortability::NewLine
	String_t* ___NewLine_0;

public:
	inline static int32_t get_offset_of_NewLine_0() { return static_cast<int32_t>(offsetof(FrameworkPortability_t75531D894745351C33AA12992DB03BC39B9CF74A_StaticFields, ___NewLine_0)); }
	inline String_t* get_NewLine_0() const { return ___NewLine_0; }
	inline String_t** get_address_of_NewLine_0() { return &___NewLine_0; }
	inline void set_NewLine_0(String_t* value)
	{
		___NewLine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NewLine_0), (void*)value);
	}
};


// Google.ProtocolBuffers.Collections.Lists
struct Lists_t7D8C5F381D4B2471A0637DC295E4F44882932988  : public RuntimeObject
{
public:

public:
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// Google.ProtocolBuffers.ThrowHelper
struct ThrowHelper_tA06AEC43480A16C929E65D95971F2854EE8BC95A  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Google.ProtocolBuffers.WireFormat
struct WireFormat_t7DCAB03CED572CDC6381F5D606B44A16318B00C5  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
struct Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950, ___list_0)); }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * get_list_0() const { return ___list_0; }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950, ___current_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_current_3() const { return ___current_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
struct ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3 
{
public:
	// System.Object Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::msgType
	RuntimeObject * ___msgType_0;
	// System.Int32 Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::number
	int32_t ___number_1;

public:
	inline static int32_t get_offset_of_msgType_0() { return static_cast<int32_t>(offsetof(ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3, ___msgType_0)); }
	inline RuntimeObject * get_msgType_0() const { return ___msgType_0; }
	inline RuntimeObject ** get_address_of_msgType_0() { return &___msgType_0; }
	inline void set_msgType_0(RuntimeObject * value)
	{
		___msgType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msgType_0), (void*)value);
	}

	inline static int32_t get_offset_of_number_1() { return static_cast<int32_t>(offsetof(ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3, ___number_1)); }
	inline int32_t get_number_1() const { return ___number_1; }
	inline int32_t* get_address_of_number_1() { return &___number_1; }
	inline void set_number_1(int32_t value)
	{
		___number_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
struct ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3_marshaled_pinvoke
{
	Il2CppIUnknown* ___msgType_0;
	int32_t ___number_1;
};
// Native definition for COM marshalling of Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
struct ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3_marshaled_com
{
	Il2CppIUnknown* ___msgType_0;
	int32_t ___number_1;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Google.ProtocolBuffers.WireFormat/WireType
struct WireType_tEADAFF287458A27BE8CA662D6A5E5053220CEC66 
{
public:
	// System.UInt32 Google.ProtocolBuffers.WireFormat/WireType::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WireType_tEADAFF287458A27BE8CA662D6A5E5053220CEC66, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Google.ProtocolBuffers.UninitializedMessageException
struct UninitializedMessageException_t972153CF378C13CE55AED679E613EBFB65907E83  : public Exception_t
{
public:
	// System.Collections.Generic.IList`1<System.String> Google.ProtocolBuffers.UninitializedMessageException::missingFields
	RuntimeObject* ___missingFields_17;

public:
	inline static int32_t get_offset_of_missingFields_17() { return static_cast<int32_t>(offsetof(UninitializedMessageException_t972153CF378C13CE55AED679E613EBFB65907E83, ___missingFields_17)); }
	inline RuntimeObject* get_missingFields_17() const { return ___missingFields_17; }
	inline RuntimeObject** get_address_of_missingFields_17() { return &___missingFields_17; }
	inline void set_missingFields_17(RuntimeObject* value)
	{
		___missingFields_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___missingFields_17), (void*)value);
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// Google.ProtocolBuffers.InvalidProtocolBufferException
struct InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
{
public:

public:
};


// Google.ProtocolBuffers.CodedOutputStream/OutOfSpaceException
struct OutOfSpaceException_tDF80BF94ABB3ECC88AE7B7C851596B3A820489B1  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8C404ED562A4EFC5955CE18132C6E6F2B06BC14B_gshared (Dictionary_2_t2C9174ADBD8F9BA0C7614DCA5CA178EA9D236857 * __this, const RuntimeMethod* method);

// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.ByteArray::ByteCopy(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArray_ByteCopy_m36A0B7A9959D64EDE1ED1B0296897C124337E3EC (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___src0, int32_t ___srcOffset1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Byte> Google.ProtocolBuffers.ByteString::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ByteString_GetEnumerator_m08F539DF0BF532FF6AA07AA2DCF190EE8562FA60 (ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * __this, const RuntimeMethod* method);
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.CodedInputStream::CreateInstance(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * CodedInputStream_CreateInstance_m060065F6A5D1A7979F1F16BABE7E662E929017EA (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf0, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.ByteString::Equals(Google.ProtocolBuffers.ByteString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteString_Equals_m6F8AC94F3C1EAF7B6F4565FECBE39D618272EFE9 (ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * __this, ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * ___other0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.ByteString::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteString__ctor_m11AA5EB0C1A75F718351CDEA5D2CE4A5124DBDBD (ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.CodedInputStream::RefillBuffer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_RefillBuffer_m5146E2A6D7B932DF81F031D2EFD8EE35A2A15C61 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, bool ___mustSucceed0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedInputStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream__ctor_m3E0E86CD9D40716D63BA3EF5755692377D858442 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedInputStream::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream__ctor_mCBFCC90ADD6C539CFE0233191A6491FA4CD86920 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidEndTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * InvalidProtocolBufferException_InvalidEndTag_m3019FB5E4424AE1770050580E97D51E77233A466 (const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadTag(System.UInt32&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_ReadTag_m3BDAC10958E13B59F571A57D0304B372E6719EF3 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, uint32_t* ___fieldTag0, String_t** ___fieldName1, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.CodedInputStream::get_IsAtEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_get_IsAtEnd_mA11B0011B9A0DF4D222F332921920DFF46D1D177 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method);
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CodedInputStream_ReadRawVarint32_m17E84932C037FC629E48C8BD7C38F381A937001A (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method);
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * InvalidProtocolBufferException_InvalidTag_m2B39E4AEE6E6B4DE200ED9B10F0128F140ADAF88 (const RuntimeMethod* method);
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_mF9F12631D5CA7C2D4BFE3F89A22D39FB45E1986F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Byte[] Google.ProtocolBuffers.CodedInputStream::ReadRawBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* CodedInputStream_ReadRawBytes_m7FBEDB3E623E59BEC1F6B6FC8AE10AB28C8BA130 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.ByteArray::Reverse(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArray_Reverse_mCC157836DA21DC3E8D769F8B8A7C677C5AFA31CB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// System.UInt64 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CodedInputStream_ReadRawVarint64_mCABB283337372618F0D33AAFBC6483C0BAC21D78 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method);
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::RecursionLimitExceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * InvalidProtocolBufferException_RecursionLimitExceeded_m8E9B79B416A929E07DAF9C0463CE9F8D268F25F7 (const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.CodedInputStream::PushLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedInputStream_PushLimit_m1854C1FA7289DF8BAFB8BADBAA2B6B8693FE2822 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, int32_t ___byteLimit0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedInputStream::CheckLastTagWas(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_CheckLastTagWas_m28D6F0A6FF1C952BB42A948C47DBD38339EB92F2 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedInputStream::PopLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_PopLimit_m3363ECBE789385251C9729E1EA8A919078C7B91C (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, int32_t ___oldLimit0, const RuntimeMethod* method);
// Google.ProtocolBuffers.WireFormat/WireType Google.ProtocolBuffers.WireFormat::GetTagWireType(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WireFormat_GetTagWireType_m82EBD4F60A8CBA9163BDB8D9CE3A9F544C016C98 (uint32_t ___tag0, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.CodedInputStream::PeekNextTag(System.UInt32&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_PeekNextTag_mDA310A701D4FB5207298645B9131237EFC722D3D (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, uint32_t* ___fieldTag0, String_t** ___fieldName1, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.CodedInputStream::get_ReachedLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_get_ReachedLimit_mE3CCBCFF450B8388F0897F597C21329B802C996D (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.CodedInputStream::BeginArray(System.UInt32,System.Boolean&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_BeginArray_mED09133773FBEFABBED95F1E9A4D7840EC19A006 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, uint32_t ___fieldTag0, bool* ___isPacked1, int32_t* ___oldLimit2, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadFloat(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_ReadFloat_m3592DBB20F54D582F90FF7F787575B6820720A6F (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, float* ___value0, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ContinueArray(System.UInt32,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_ContinueArray_mAD42695150C7082DD3FFCFA4B995FBF3278C673A (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, uint32_t ___currentTag0, bool ___packed1, int32_t ___oldLimit2, const RuntimeMethod* method);
// System.Byte Google.ProtocolBuffers.CodedInputStream::ReadRawByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method);
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::MalformedVarint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * InvalidProtocolBufferException_MalformedVarint_m0111203A64A0D3700152460D8BC275B5E250E871 (const RuntimeMethod* method);
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::SlowReadRawVarint32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CodedInputStream_SlowReadRawVarint32_m8F6F9F131543E48C86B00082AE94D7A081E55C23 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method);
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::TruncatedMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * InvalidProtocolBufferException_TruncatedMessage_m4EF2861AB0C4D34BA859979101FBE6B6194BC4A0 (const RuntimeMethod* method);
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::NegativeSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * InvalidProtocolBufferException_NegativeSize_m67D2C76867BCC7B628A33EAAC0F4BD1949814005 (const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedInputStream::RecomputeBufferSizeAfterLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_RecomputeBufferSizeAfterLimit_m844717B9E131A5C7798741E72137F9EE760EEAA2 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::SizeLimitExceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * InvalidProtocolBufferException_SizeLimitExceeded_m47053C4DD95FEC6CEA110E5CC766BFA9E681B738 (const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipRawBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_SkipRawBytes_m993F821EA6EC6DE9E35D94081714F57E8CE6996D (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.ByteArray::Copy(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArray_Copy_mE932E39DA26FAF229BE4996B822E048C863A430B (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___src0, int32_t ___srcOffset1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05 (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(!0)
inline void List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904 (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
inline Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950  List_1_GetEnumerator_m02C594AD8F27BF8AEC5E1C08B33236E2B0063965 (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950  (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Byte[]>::get_Current()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Enumerator_get_Current_mA883043E5D5EF71DBC1CAB582704E6AEE2743609_inline (Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Byte[]>::MoveNext()
inline bool Enumerator_MoveNext_mD16E9BAB800FEB8A571777E0D1EA77D2ED90B84B (Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Byte[]>::Dispose()
inline void Enumerator_Dispose_mC5F7F8487E6B29554657BCBE89090BB8E7A16421 (Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.UInt64 Google.ProtocolBuffers.CodedInputStream::ReadRawLittleEndian64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CodedInputStream_ReadRawLittleEndian64_mA564037F64E937673B4DA8D0520920FCD466C81A (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_SkipMessage_m1C7FDED2684692E2B668242C8CB62B56771C20B0 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.WireFormat::GetTagFieldNumber(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WireFormat_GetTagFieldNumber_mA7E7022959089660F404CB9C91D7D339DDC8DD8E (uint32_t ___tag0, const RuntimeMethod* method);
// System.UInt32 Google.ProtocolBuffers.WireFormat::MakeTag(System.Int32,Google.ProtocolBuffers.WireFormat/WireType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WireFormat_MakeTag_mDFD42625C101D7558D42ADDD3279C4250A396480 (int32_t ___fieldNumber0, uint32_t ___wireType1, const RuntimeMethod* method);
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawLittleEndian32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CodedInputStream_ReadRawLittleEndian32_mF6D84082C42850B8B400A51CD50138FE96F94043 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method);
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidWireType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * InvalidProtocolBufferException_InvalidWireType_mFA8E176C1FA6F7B9171535483897D5CC16292B9D (const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.CodedInputStream::SkipField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_SkipField_mF57F4CE323B361D9ED7795FF76184BCA22FE3745 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipImpl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_SkipImpl_m07171E9AAADDC5CD3873B351D33687F16EF84B54 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, int32_t ___amountToSkip0, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeTagSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeTagSize_mF4A260827A0DF594FD4FC2AECDD9ECE4794C37FA (int32_t ___fieldNumber0, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeRawVarint64Size(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeRawVarint64Size_mA956EC24FFB7EACBCACC5359D66971964D122D50 (uint64_t ___value0, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeRawVarint32Size(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeRawVarint32Size_m2DEA6BCA78E0386C6B245936DC4EA0E6CE03A7E2 (uint32_t ___value0, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeEnumSizeNoTag(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeEnumSizeNoTag_mA3DB740FE994256BD53AF1FA80B1FF75336A216C (int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt32SizeNoTag(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeInt32SizeNoTag_mFBB77FE9884DE65C0989BB7F2F9C0C4DF697B144 (int32_t ___value0, const RuntimeMethod* method);
// Google.ProtocolBuffers.CodedOutputStream Google.ProtocolBuffers.CodedOutputStream::CreateInstance(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * CodedOutputStream_CreateInstance_m37EA5B320833D79BCEDEF07B5B9532185ABDADC9 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___flatArray0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedOutputStream::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream__ctor_mDFDBEC4E46A34B3ECFCC98AD5D532A7725374405 (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteTag(System.Int32,Google.ProtocolBuffers.WireFormat/WireType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteTag_mD3DE430E6898A07FF86E44DE1DDCE11C4A2C163D (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, int32_t ___fieldNumber0, uint32_t ___type1, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteFloatNoTag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteFloatNoTag_m9A1865384B2E0A3318F9FAA06B2FBFE2921C1538 (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawVarint64(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawVarint64_m0710EC98157EB062E5D51CB3E6A41FE18FE5FF0D (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawVarint32(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawVarint32_m405E0FB2664C91AA9C7120907C9423B913A19EE2 (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt32NoTag(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteInt32NoTag_m4C7CAD3533F9DF51D6B0BB889545C93114572084 (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m7ED1DB1B6D850DF7D04A7122E1229883226C10D2 (float ___value0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawBytes_m97873F22509557488C01B4E9BD962533715BE8D7 (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawByte_mF4C0FD336AD8072321214AB1A010A4C8EF8F040C (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedOutputStream::RefreshBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_RefreshBuffer_mD9D5A7943F18439D86239870A2A12229136BBA7C (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedOutputStream/OutOfSpaceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfSpaceException__ctor_m2A0D021AB94EF1A17862BC37D6781C71C97ED878 (OutOfSpaceException_tDF80BF94ABB3ECC88AE7B7C851596B3A820489B1 * __this, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::get_SpaceLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_get_SpaceLeft_m6FE86945329112834D2853C908CA219479AC3581 (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>::.ctor()
inline void Dictionary_2__ctor_m2AAF0A3D0DB2C1815A964E002A0EA308E075F0F2 (Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>::.ctor()
inline void Dictionary_2__ctor_m17C5F3C712FB57465C5F39FE4AB3651FEF6942D6 (Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 *, const RuntimeMethod*))Dictionary_2__ctor_m8C404ED562A4EFC5955CE18132C6E6F2B06BC14B_gshared)(__this, method);
}
// System.Void Google.ProtocolBuffers.ExtensionRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>,System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionRegistry__ctor_mC4E9DA3D5F19D1FF37D06E4D8F08ABDC77CB7B2E (ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * __this, Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 * ___byName0, Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 * ___byNumber1, bool ___readOnly2, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4 (const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m208E01C02FF2C1D6C5AA661A5816C744804E1690 (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.InvalidProtocolBufferException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidProtocolBufferException__ctor_m0DF1F7D9C630AD5477130D4A75288C0F891A3D9D (InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEF0800D4AF607E61714C92A76911B4780C4D0A29 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Int32 Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExtensionIntPair_GetHashCode_m90F73BF2F669DA2371A4F4FBE722DEAFFC5AB87E (ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3 * __this, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::Equals(Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtensionIntPair_Equals_mFAE9605688D1000E2F201CF16F33ACA4E1B6FF79 (ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3 * __this, ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3  ___other0, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtensionIntPair_Equals_m6A7FC738499FFF1F3D1EC39426CCE680F675B8AB (ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.ProtocolBuffers.ByteArray::Copy(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArray_Copy_mE932E39DA26FAF229BE4996B822E048C863A430B (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___src0, int32_t ___srcOffset1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___count4;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0019;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___src0;
		int32_t L_2 = ___srcOffset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___dst2;
		int32_t L_4 = ___dstOffset3;
		int32_t L_5 = ___count4;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_1, L_2, (RuntimeArray *)(RuntimeArray *)L_3, L_4, L_5, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_0019:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___src0;
		int32_t L_7 = ___srcOffset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___dst2;
		int32_t L_9 = ___dstOffset3;
		int32_t L_10 = ___count4;
		ByteArray_ByteCopy_m36A0B7A9959D64EDE1ED1B0296897C124337E3EC(L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.ByteArray::ByteCopy(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArray_ByteCopy_m36A0B7A9959D64EDE1ED1B0296897C124337E3EC (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___src0, int32_t ___srcOffset1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___srcOffset1;
		int32_t L_1 = ___count4;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = ___srcOffset1;
		V_1 = L_2;
		goto IL_001b;
	}

IL_000c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___dst2;
		int32_t L_4 = ___dstOffset3;
		int32_t L_5 = L_4;
		___dstOffset3 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___src0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_001b:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.ByteArray::Reverse(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArray_Reverse_mCC157836DA21DC3E8D769F8B8A7C677C5AFA31CB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_1 = 0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		NullCheck(L_0);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), (int32_t)1));
		goto IL_0023;
	}

IL_000d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___bytes0;
		int32_t L_6 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___bytes0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___bytes0;
		int32_t L_12 = V_2;
		uint8_t L_13 = V_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)L_13);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.ProtocolBuffers.ByteString::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteString__ctor_m11AA5EB0C1A75F718351CDEA5D2CE4A5124DBDBD (ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		__this->set_bytes_1(L_0);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Byte> Google.ProtocolBuffers.ByteString::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ByteString_GetEnumerator_m08F539DF0BF532FF6AA07AA2DCF190EE8562FA60 (ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t87C38B0EE9F1DE9AFC8F366EEAE5D497C061B4E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_bytes_1();
		NullCheck((RuntimeObject*)(RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Byte>::GetEnumerator() */, IEnumerable_1_t87C38B0EE9F1DE9AFC8F366EEAE5D497C061B4E1_il2cpp_TypeInfo_var, (RuntimeObject*)(RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator Google.ProtocolBuffers.ByteString::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ByteString_System_Collections_IEnumerable_GetEnumerator_m22FF0741F9517C74427C8DE75A93BEDB96114C79 (ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = ByteString_GetEnumerator_m08F539DF0BF532FF6AA07AA2DCF190EE8562FA60(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.ByteString::CreateCodedInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * ByteString_CreateCodedInput_mC9362BE310D1C2D96E43D5976A05C74D3694280E (ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_bytes_1();
		CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * L_1;
		L_1 = CodedInputStream_CreateInstance_m060065F6A5D1A7979F1F16BABE7E662E929017EA(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Google.ProtocolBuffers.ByteString::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteString_Equals_mF22E7C4F81B0233DCE7065AFE78258AE9784248E (ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 *)IsInstSealed((RuntimeObject*)L_0, ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586_il2cpp_TypeInfo_var));
		RuntimeObject * L_1 = ___obj0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * L_2 = V_0;
		bool L_3;
		L_3 = ByteString_Equals_m6F8AC94F3C1EAF7B6F4565FECBE39D618272EFE9(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Google.ProtocolBuffers.ByteString::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteString_GetHashCode_m2990BBFF73C4A317326D75918EEF1DEFE2CAB1FF (ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = ((int32_t)23);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_bytes_1();
		V_2 = L_0;
		V_3 = 0;
		goto IL_001f;
	}

IL_0011:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		int32_t L_5 = V_0;
		uint8_t L_6 = V_1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5<<(int32_t)8))|(int32_t)L_6));
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_001f:
	{
		int32_t L_8 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Boolean Google.ProtocolBuffers.ByteString::Equals(Google.ProtocolBuffers.ByteString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteString_Equals_m6F8AC94F3C1EAF7B6F4565FECBE39D618272EFE9 (ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * __this, ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * L_0 = ___other0;
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0->get_bytes_1();
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_bytes_1();
		NullCheck(L_2);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		V_0 = 0;
		goto IL_0039;
	}

IL_001e:
	{
		ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * L_3 = ___other0;
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = L_3->get_bytes_1();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_bytes_1();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_7) == ((int32_t)L_11)))
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_13 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = __this->get_bytes_1();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void Google.ProtocolBuffers.ByteString::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteString__cctor_mD3D230BD015C39D9C13D31C4D4E2B4F723E86301 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)0);
		ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * L_1 = (ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 *)il2cpp_codegen_object_new(ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586_il2cpp_TypeInfo_var);
		ByteString__ctor_m11AA5EB0C1A75F718351CDEA5D2CE4A5124DBDBD(L_1, L_0, /*hidden argument*/NULL);
		((ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586_StaticFields*)il2cpp_codegen_static_fields_for(ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586_il2cpp_TypeInfo_var))->set_empty_0(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.ProtocolBuffers.CodedInputStream::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream__ctor_mCBFCC90ADD6C539CFE0233191A6491FA4CD86920 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		__this->set_bufferSizeAfterLimit_2(0);
		__this->set_bufferPos_3(0);
		__this->set_lastTag_5(0);
		__this->set_nextTag_6(0);
		__this->set_hasNextTag_7((bool)0);
		__this->set_totalBytesRetired_8(0);
		__this->set_currentLimit_9(((int32_t)2147483647LL));
		__this->set_recursionDepth_10(0);
		__this->set_recursionLimit_11(((int32_t)64));
		__this->set_sizeLimit_12(((int32_t)67108864));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buffer0;
		__this->set_buffer_0(L_0);
		int32_t L_1 = ___offset1;
		__this->set_bufferPos_3(L_1);
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___length2;
		__this->set_bufferSize_1(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)));
		__this->set_input_4((Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)NULL);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream__ctor_m3E0E86CD9D40716D63BA3EF5755692377D858442 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_bufferSizeAfterLimit_2(0);
		__this->set_bufferPos_3(0);
		__this->set_lastTag_5(0);
		__this->set_nextTag_6(0);
		__this->set_hasNextTag_7((bool)0);
		__this->set_totalBytesRetired_8(0);
		__this->set_currentLimit_9(((int32_t)2147483647LL));
		__this->set_recursionDepth_10(0);
		__this->set_recursionLimit_11(((int32_t)64));
		__this->set_sizeLimit_12(((int32_t)67108864));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->set_buffer_0(L_0);
		__this->set_bufferSize_1(0);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___input0;
		__this->set_input_4(L_1);
		return;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::get_ReachedLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_get_ReachedLimit_mE3CCBCFF450B8388F0897F597C21329B802C996D (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_currentLimit_9();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		int32_t L_1 = __this->get_totalBytesRetired_8();
		int32_t L_2 = __this->get_bufferPos_3();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get_currentLimit_9();
		return (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::get_IsAtEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_get_IsAtEnd_mA11B0011B9A0DF4D222F332921920DFF46D1D177 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_bufferPos_3();
		int32_t L_1 = __this->get_bufferSize_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_001d;
		}
	}
	{
		bool L_2;
		L_2 = CodedInputStream_RefillBuffer_m5146E2A6D7B932DF81F031D2EFD8EE35A2A15C61(__this, (bool)0, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		return (bool)G_B3_0;
	}
}
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.CodedInputStream::CreateInstance(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * CodedInputStream_CreateInstance_m362836A8E35303DBE3728A3EF7879E61E2DEF649 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___input0;
		CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * L_1 = (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 *)il2cpp_codegen_object_new(CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7_il2cpp_TypeInfo_var);
		CodedInputStream__ctor_m3E0E86CD9D40716D63BA3EF5755692377D858442(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.CodedInputStream::CreateInstance(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * CodedInputStream_CreateInstance_m060065F6A5D1A7979F1F16BABE7E662E929017EA (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buf0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___buf0;
		NullCheck(L_1);
		CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * L_2 = (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 *)il2cpp_codegen_object_new(CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7_il2cpp_TypeInfo_var);
		CodedInputStream__ctor_mCBFCC90ADD6C539CFE0233191A6491FA4CD86920(L_2, L_0, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::CheckLastTagWas(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_CheckLastTagWas_m28D6F0A6FF1C952BB42A948C47DBD38339EB92F2 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_lastTag_5();
		uint32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_2;
		L_2 = InvalidProtocolBufferException_InvalidEndTag_m3019FB5E4424AE1770050580E97D51E77233A466(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_CheckLastTagWas_m28D6F0A6FF1C952BB42A948C47DBD38339EB92F2_RuntimeMethod_var)));
	}

IL_0012:
	{
		return;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::PeekNextTag(System.UInt32&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_PeekNextTag_mDA310A701D4FB5207298645B9131237EFC722D3D (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, uint32_t* ___fieldTag0, String_t** ___fieldName1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		bool L_0 = __this->get_hasNextTag_7();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t** L_1 = ___fieldName1;
		*((RuntimeObject **)L_1) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_1, (void*)(RuntimeObject *)NULL);
		uint32_t* L_2 = ___fieldTag0;
		uint32_t L_3 = __this->get_nextTag_6();
		*((int32_t*)L_2) = (int32_t)L_3;
		return (bool)1;
	}

IL_0018:
	{
		uint32_t L_4 = __this->get_lastTag_5();
		V_0 = L_4;
		uint32_t* L_5 = __this->get_address_of_nextTag_6();
		String_t** L_6 = ___fieldName1;
		bool L_7;
		L_7 = CodedInputStream_ReadTag_m3BDAC10958E13B59F571A57D0304B372E6719EF3(__this, (uint32_t*)L_5, (String_t**)L_6, /*hidden argument*/NULL);
		__this->set_hasNextTag_7(L_7);
		uint32_t L_8 = V_0;
		__this->set_lastTag_5(L_8);
		uint32_t* L_9 = ___fieldTag0;
		uint32_t L_10 = __this->get_nextTag_6();
		*((int32_t*)L_9) = (int32_t)L_10;
		bool L_11 = __this->get_hasNextTag_7();
		return L_11;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadTag(System.UInt32&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_ReadTag_m3BDAC10958E13B59F571A57D0304B372E6719EF3 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, uint32_t* ___fieldTag0, String_t** ___fieldName1, const RuntimeMethod* method)
{
	{
		String_t** L_0 = ___fieldName1;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		bool L_1 = __this->get_hasNextTag_7();
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		uint32_t* L_2 = ___fieldTag0;
		uint32_t L_3 = __this->get_nextTag_6();
		*((int32_t*)L_2) = (int32_t)L_3;
		uint32_t* L_4 = ___fieldTag0;
		int32_t L_5 = *((uint32_t*)L_4);
		__this->set_lastTag_5(L_5);
		__this->set_hasNextTag_7((bool)0);
		return (bool)1;
	}

IL_0027:
	{
		bool L_6;
		L_6 = CodedInputStream_get_IsAtEnd_mA11B0011B9A0DF4D222F332921920DFF46D1D177(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		uint32_t* L_7 = ___fieldTag0;
		*((int32_t*)L_7) = (int32_t)0;
		uint32_t* L_8 = ___fieldTag0;
		int32_t L_9 = *((uint32_t*)L_8);
		__this->set_lastTag_5(L_9);
		return (bool)0;
	}

IL_003f:
	{
		uint32_t* L_10 = ___fieldTag0;
		uint32_t L_11;
		L_11 = CodedInputStream_ReadRawVarint32_m17E84932C037FC629E48C8BD7C38F381A937001A(__this, /*hidden argument*/NULL);
		*((int32_t*)L_10) = (int32_t)L_11;
		uint32_t* L_12 = ___fieldTag0;
		int32_t L_13 = *((uint32_t*)L_12);
		__this->set_lastTag_5(L_13);
		uint32_t L_14 = __this->get_lastTag_5();
		if (L_14)
		{
			goto IL_0060;
		}
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_15;
		L_15 = InvalidProtocolBufferException_InvalidTag_m2B39E4AEE6E6B4DE200ED9B10F0128F140ADAF88(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_ReadTag_m3BDAC10958E13B59F571A57D0304B372E6719EF3_RuntimeMethod_var)));
	}

IL_0060:
	{
		return (bool)1;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadFloat(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_ReadFloat_m3592DBB20F54D582F90FF7F787575B6820720A6F (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, float* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_1 = __this->get_bufferSize_1();
		int32_t L_2 = __this->get_bufferPos_3();
		if ((((int32_t)4) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)))))
		{
			goto IL_0043;
		}
	}
	{
		float* L_3 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_buffer_0();
		int32_t L_5 = __this->get_bufferPos_3();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		float L_6;
		L_6 = BitConverter_ToSingle_mF9F12631D5CA7C2D4BFE3F89A22D39FB45E1986F(L_4, L_5, /*hidden argument*/NULL);
		*((float*)L_3) = (float)L_6;
		int32_t L_7 = __this->get_bufferPos_3();
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)4)));
		goto IL_0064;
	}

IL_0043:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = CodedInputStream_ReadRawBytes_m7FBEDB3E623E59BEC1F6B6FC8AE10AB28C8BA130(__this, 4, /*hidden argument*/NULL);
		V_0 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		bool L_9 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (L_9)
		{
			goto IL_005b;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_0;
		ByteArray_Reverse_mCC157836DA21DC3E8D769F8B8A7C677C5AFA31CB(L_10, /*hidden argument*/NULL);
	}

IL_005b:
	{
		float* L_11 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		float L_13;
		L_13 = BitConverter_ToSingle_mF9F12631D5CA7C2D4BFE3F89A22D39FB45E1986F(L_12, 0, /*hidden argument*/NULL);
		*((float*)L_11) = (float)L_13;
	}

IL_0064:
	{
		return (bool)1;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadInt64(System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_ReadInt64_m8B72521DCC2327DF36A5D39FAAC231B67277E59B (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, int64_t* ___value0, const RuntimeMethod* method)
{
	{
		int64_t* L_0 = ___value0;
		uint64_t L_1;
		L_1 = CodedInputStream_ReadRawVarint64_mCABB283337372618F0D33AAFBC6483C0BAC21D78(__this, /*hidden argument*/NULL);
		*((int64_t*)L_0) = (int64_t)L_1;
		return (bool)1;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadInt32(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_ReadInt32_m080BB941FEE5EF3D981C4364F9AC4F02B217F871 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, int32_t* ___value0, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = ___value0;
		uint32_t L_1;
		L_1 = CodedInputStream_ReadRawVarint32_m17E84932C037FC629E48C8BD7C38F381A937001A(__this, /*hidden argument*/NULL);
		*((int32_t*)L_0) = (int32_t)L_1;
		return (bool)1;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::ReadMessage(Google.ProtocolBuffers.IBuilderLite,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_ReadMessage_m5D9B0741D5EC3106740E8DE56752CA5BD98F84A4 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, RuntimeObject* ___builder0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuilderLite_t3455A8D3C46916F3BC2556810070F82D7A6455D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint32_t L_0;
		L_0 = CodedInputStream_ReadRawVarint32_m17E84932C037FC629E48C8BD7C38F381A937001A(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = __this->get_recursionDepth_10();
		int32_t L_2 = __this->get_recursionLimit_11();
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_3;
		L_3 = InvalidProtocolBufferException_RecursionLimitExceeded_m8E9B79B416A929E07DAF9C0463CE9F8D268F25F7(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_ReadMessage_m5D9B0741D5EC3106740E8DE56752CA5BD98F84A4_RuntimeMethod_var)));
	}

IL_001e:
	{
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = CodedInputStream_PushLimit_m1854C1FA7289DF8BAFB8BADBAA2B6B8693FE2822(__this, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = __this->get_recursionDepth_10();
		__this->set_recursionDepth_10(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		RuntimeObject* L_7 = ___builder0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_8 = ___extensionRegistry1;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * >::Invoke(0 /* Google.ProtocolBuffers.IBuilderLite Google.ProtocolBuffers.IBuilderLite::WeakMergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry) */, IBuilderLite_t3455A8D3C46916F3BC2556810070F82D7A6455D3_il2cpp_TypeInfo_var, L_7, __this, L_8);
		CodedInputStream_CheckLastTagWas_m28D6F0A6FF1C952BB42A948C47DBD38339EB92F2(__this, 0, /*hidden argument*/NULL);
		int32_t L_10 = __this->get_recursionDepth_10();
		__this->set_recursionDepth_10(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)));
		int32_t L_11 = V_1;
		CodedInputStream_PopLimit_m3363ECBE789385251C9729E1EA8A919078C7B91C(__this, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::BeginArray(System.UInt32,System.Boolean&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_BeginArray_mED09133773FBEFABBED95F1E9A4D7840EC19A006 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, uint32_t ___fieldTag0, bool* ___isPacked1, int32_t* ___oldLimit2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool* L_0 = ___isPacked1;
		uint32_t L_1 = ___fieldTag0;
		uint32_t L_2;
		L_2 = WireFormat_GetTagWireType_m82EBD4F60A8CBA9163BDB8D9CE3A9F544C016C98(L_1, /*hidden argument*/NULL);
		*((int8_t*)L_0) = (int8_t)((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		bool* L_3 = ___isPacked1;
		int32_t L_4 = *((int8_t*)L_3);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		uint32_t L_5;
		L_5 = CodedInputStream_ReadRawVarint32_m17E84932C037FC629E48C8BD7C38F381A937001A(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647LL)));
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t* L_7 = ___oldLimit2;
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = CodedInputStream_PushLimit_m1854C1FA7289DF8BAFB8BADBAA2B6B8693FE2822(__this, L_8, /*hidden argument*/NULL);
		*((int32_t*)L_7) = (int32_t)L_9;
		return (bool)1;
	}

IL_0031:
	{
		int32_t* L_10 = ___oldLimit2;
		*((int32_t*)L_10) = (int32_t)(-1);
		return (bool)0;
	}

IL_0036:
	{
		int32_t* L_11 = ___oldLimit2;
		*((int32_t*)L_11) = (int32_t)(-1);
		return (bool)1;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ContinueArray(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_ContinueArray_mA6CDAF9D6D22C17E1D63D0B75FC04EE8E55A512F (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, uint32_t ___currentTag0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		bool L_0;
		L_0 = CodedInputStream_PeekNextTag_mDA310A701D4FB5207298645B9131237EFC722D3D(__this, (uint32_t*)(&V_1), (String_t**)(&V_0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_1 = V_1;
		uint32_t L_2 = ___currentTag0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		__this->set_hasNextTag_7((bool)0);
		return (bool)1;
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ContinueArray(System.UInt32,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_ContinueArray_mAD42695150C7082DD3FFCFA4B995FBF3278C673A (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, uint32_t ___currentTag0, bool ___packed1, int32_t ___oldLimit2, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		bool L_0 = ___packed1;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1;
		L_1 = CodedInputStream_get_ReachedLimit_mE3CCBCFF450B8388F0897F597C21329B802C996D(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___oldLimit2;
		CodedInputStream_PopLimit_m3363ECBE789385251C9729E1EA8A919078C7B91C(__this, L_2, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_001a:
	{
		return (bool)1;
	}

IL_001c:
	{
		bool L_3;
		L_3 = CodedInputStream_PeekNextTag_mDA310A701D4FB5207298645B9131237EFC722D3D(__this, (uint32_t*)(&V_1), (String_t**)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_4 = V_1;
		uint32_t L_5 = ___currentTag0;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		__this->set_hasNextTag_7((bool)0);
		return (bool)1;
	}

IL_003b:
	{
		return (bool)0;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::ReadFloatArray(System.UInt32,System.String,System.Collections.Generic.ICollection`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_ReadFloatArray_mFF1D815AB4EA021D776476B9F9B6FB347DA947E6 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, uint32_t ___fieldTag0, String_t* ___fieldName1, RuntimeObject* ___list2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t94EDACED291E81230362ED968AE1B9B5034550FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		uint32_t L_0 = ___fieldTag0;
		bool L_1;
		L_1 = CodedInputStream_BeginArray_mED09133773FBEFABBED95F1E9A4D7840EC19A006(__this, L_0, (bool*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		V_2 = (0.0f);
	}

IL_0016:
	{
		bool L_2;
		L_2 = CodedInputStream_ReadFloat_m3592DBB20F54D582F90FF7F787575B6820720A6F(__this, (float*)(&V_2), /*hidden argument*/NULL);
		RuntimeObject* L_3 = ___list2;
		float L_4 = V_2;
		NullCheck(L_3);
		InterfaceActionInvoker1< float >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Single>::Add(!0) */, ICollection_1_t94EDACED291E81230362ED968AE1B9B5034550FB_il2cpp_TypeInfo_var, L_3, L_4);
		uint32_t L_5 = ___fieldTag0;
		bool L_6 = V_0;
		int32_t L_7 = V_1;
		bool L_8;
		L_8 = CodedInputStream_ContinueArray_mAD42695150C7082DD3FFCFA4B995FBF3278C673A(__this, L_5, L_6, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0016;
		}
	}

IL_0034:
	{
		return;
	}
}
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::SlowReadRawVarint32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CodedInputStream_SlowReadRawVarint32_m8F6F9F131543E48C86B00082AE94D7A081E55C23 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		uint8_t L_0;
		L_0 = CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		return L_2;
	}

IL_0014:
	{
		int32_t L_3 = V_0;
		V_1 = ((int32_t)((int32_t)L_3&(int32_t)((int32_t)127)));
		uint8_t L_4;
		L_4 = CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD(__this, /*hidden argument*/NULL);
		uint8_t L_5 = L_4;
		V_0 = L_5;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		V_1 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)((int32_t)L_7<<(int32_t)7))));
		goto IL_00d2;
	}

IL_0036:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		V_1 = ((int32_t)((int32_t)L_8|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)127)))<<(int32_t)7))));
		uint8_t L_10;
		L_10 = CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD(__this, /*hidden argument*/NULL);
		uint8_t L_11 = L_10;
		V_0 = L_11;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)128))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		V_1 = ((int32_t)((int32_t)L_12|(int32_t)((int32_t)((int32_t)L_13<<(int32_t)((int32_t)14)))));
		goto IL_00d2;
	}

IL_005d:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		V_1 = ((int32_t)((int32_t)L_14|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)14)))));
		uint8_t L_16;
		L_16 = CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD(__this, /*hidden argument*/NULL);
		uint8_t L_17 = L_16;
		V_0 = L_17;
		if ((((int32_t)L_17) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		V_1 = ((int32_t)((int32_t)L_18|(int32_t)((int32_t)((int32_t)L_19<<(int32_t)((int32_t)21)))));
		goto IL_00d2;
	}

IL_0085:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = V_0;
		V_1 = ((int32_t)((int32_t)L_20|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_21&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)21)))));
		int32_t L_22 = V_1;
		uint8_t L_23;
		L_23 = CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD(__this, /*hidden argument*/NULL);
		uint8_t L_24 = L_23;
		V_0 = L_24;
		V_1 = ((int32_t)((int32_t)L_22|(int32_t)((int32_t)((int32_t)L_24<<(int32_t)((int32_t)28)))));
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)128))))
		{
			goto IL_00d2;
		}
	}
	{
		V_2 = 0;
		goto IL_00c5;
	}

IL_00af:
	{
		uint8_t L_26;
		L_26 = CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_26) >= ((int32_t)((int32_t)128))))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_27 = V_1;
		return L_27;
	}

IL_00c1:
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00c5:
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) < ((int32_t)5)))
		{
			goto IL_00af;
		}
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_30;
		L_30 = InvalidProtocolBufferException_MalformedVarint_m0111203A64A0D3700152460D8BC275B5E250E871(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_SlowReadRawVarint32_m8F6F9F131543E48C86B00082AE94D7A081E55C23_RuntimeMethod_var)));
	}

IL_00d2:
	{
		int32_t L_31 = V_1;
		return L_31;
	}
}
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CodedInputStream_ReadRawVarint32_m17E84932C037FC629E48C8BD7C38F381A937001A (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_bufferPos_3();
		int32_t L_1 = __this->get_bufferSize_1();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)5))) <= ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		uint32_t L_2;
		L_2 = CodedInputStream_SlowReadRawVarint32_m8F6F9F131543E48C86B00082AE94D7A081E55C23(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_001a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_buffer_0();
		int32_t L_4 = __this->get_bufferPos_3();
		int32_t L_5 = L_4;
		V_1 = L_5;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		int32_t L_6 = V_1;
		NullCheck(L_3);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		V_2 = ((int32_t)((int32_t)L_11&(int32_t)((int32_t)127)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_buffer_0();
		int32_t L_13 = __this->get_bufferPos_3();
		int32_t L_14 = L_13;
		V_1 = L_14;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
		int32_t L_15 = V_1;
		NullCheck(L_12);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		uint8_t L_18 = L_17;
		V_0 = L_18;
		if ((((int32_t)L_18) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_19 = V_2;
		int32_t L_20 = V_0;
		V_2 = ((int32_t)((int32_t)L_19|(int32_t)((int32_t)((int32_t)L_20<<(int32_t)7))));
		goto IL_0146;
	}

IL_0074:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_0;
		V_2 = ((int32_t)((int32_t)L_21|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_22&(int32_t)((int32_t)127)))<<(int32_t)7))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = __this->get_buffer_0();
		int32_t L_24 = __this->get_bufferPos_3();
		int32_t L_25 = L_24;
		V_1 = L_25;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)));
		int32_t L_26 = V_1;
		NullCheck(L_23);
		int32_t L_27 = L_26;
		uint8_t L_28 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		uint8_t L_29 = L_28;
		V_0 = L_29;
		if ((((int32_t)L_29) >= ((int32_t)((int32_t)128))))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_30 = V_2;
		int32_t L_31 = V_0;
		V_2 = ((int32_t)((int32_t)L_30|(int32_t)((int32_t)((int32_t)L_31<<(int32_t)((int32_t)14)))));
		goto IL_0146;
	}

IL_00ad:
	{
		int32_t L_32 = V_2;
		int32_t L_33 = V_0;
		V_2 = ((int32_t)((int32_t)L_32|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)14)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = __this->get_buffer_0();
		int32_t L_35 = __this->get_bufferPos_3();
		int32_t L_36 = L_35;
		V_1 = L_36;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)));
		int32_t L_37 = V_1;
		NullCheck(L_34);
		int32_t L_38 = L_37;
		uint8_t L_39 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		uint8_t L_40 = L_39;
		V_0 = L_40;
		if ((((int32_t)L_40) >= ((int32_t)((int32_t)128))))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_41 = V_2;
		int32_t L_42 = V_0;
		V_2 = ((int32_t)((int32_t)L_41|(int32_t)((int32_t)((int32_t)L_42<<(int32_t)((int32_t)21)))));
		goto IL_0146;
	}

IL_00e7:
	{
		int32_t L_43 = V_2;
		int32_t L_44 = V_0;
		V_2 = ((int32_t)((int32_t)L_43|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_44&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)21)))));
		int32_t L_45 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46 = __this->get_buffer_0();
		int32_t L_47 = __this->get_bufferPos_3();
		int32_t L_48 = L_47;
		V_1 = L_48;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1)));
		int32_t L_49 = V_1;
		NullCheck(L_46);
		int32_t L_50 = L_49;
		uint8_t L_51 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		uint8_t L_52 = L_51;
		V_0 = L_52;
		V_2 = ((int32_t)((int32_t)L_45|(int32_t)((int32_t)((int32_t)L_52<<(int32_t)((int32_t)28)))));
		int32_t L_53 = V_0;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)128))))
		{
			goto IL_0146;
		}
	}
	{
		V_3 = 0;
		goto IL_0139;
	}

IL_0123:
	{
		uint8_t L_54;
		L_54 = CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_54) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0135;
		}
	}
	{
		int32_t L_55 = V_2;
		return L_55;
	}

IL_0135:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_0139:
	{
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) < ((int32_t)5)))
		{
			goto IL_0123;
		}
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_58;
		L_58 = InvalidProtocolBufferException_MalformedVarint_m0111203A64A0D3700152460D8BC275B5E250E871(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_ReadRawVarint32_m17E84932C037FC629E48C8BD7C38F381A937001A_RuntimeMethod_var)));
	}

IL_0146:
	{
		int32_t L_59 = V_2;
		return L_59;
	}
}
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint32(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CodedInputStream_ReadRawVarint32_m565C74FB7192E10D19DEBC8C2DD2A72723DA2B62 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_003b;
	}

IL_0009:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___input0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_2 = L_1;
		int32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_3;
		L_3 = InvalidProtocolBufferException_TruncatedMessage_m4EF2861AB0C4D34BA859979101FBE6B6194BC4A0(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_ReadRawVarint32_m565C74FB7192E10D19DEBC8C2DD2A72723DA2B62_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = V_2;
		int32_t L_6 = V_1;
		V_0 = ((int32_t)((int32_t)L_4|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)))))));
		int32_t L_7 = V_2;
		if (((int32_t)((int32_t)L_7&(int32_t)((int32_t)128))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_8 = V_0;
		return L_8;
	}

IL_0037:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)7));
	}

IL_003b:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)32))))
		{
			goto IL_0009;
		}
	}
	{
		goto IL_006e;
	}

IL_0048:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_11 = ___input0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::ReadByte() */, L_11);
		V_3 = L_12;
		int32_t L_13 = V_3;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_005c;
		}
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_14;
		L_14 = InvalidProtocolBufferException_TruncatedMessage_m4EF2861AB0C4D34BA859979101FBE6B6194BC4A0(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_ReadRawVarint32_m565C74FB7192E10D19DEBC8C2DD2A72723DA2B62_RuntimeMethod_var)));
	}

IL_005c:
	{
		int32_t L_15 = V_3;
		if (((int32_t)((int32_t)L_15&(int32_t)((int32_t)128))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_16 = V_0;
		return L_16;
	}

IL_006a:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)7));
	}

IL_006e:
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)64))))
		{
			goto IL_0048;
		}
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_19;
		L_19 = InvalidProtocolBufferException_MalformedVarint_m0111203A64A0D3700152460D8BC275B5E250E871(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_ReadRawVarint32_m565C74FB7192E10D19DEBC8C2DD2A72723DA2B62_RuntimeMethod_var)));
	}
}
// System.UInt64 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CodedInputStream_ReadRawVarint64_mCABB283337372618F0D33AAFBC6483C0BAC21D78 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		V_0 = 0;
		V_1 = ((int64_t)((int64_t)0));
		goto IL_0030;
	}

IL_000a:
	{
		uint8_t L_0;
		L_0 = CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD(__this, /*hidden argument*/NULL);
		V_2 = L_0;
		uint64_t L_1 = V_1;
		uint8_t L_2 = V_2;
		int32_t L_3 = V_0;
		V_1 = ((int64_t)((int64_t)L_1|(int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)127)))))<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)63)))))));
		uint8_t L_4 = V_2;
		if (((int32_t)((int32_t)L_4&(int32_t)((int32_t)128))))
		{
			goto IL_002c;
		}
	}
	{
		uint64_t L_5 = V_1;
		return L_5;
	}

IL_002c:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)7));
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)64))))
		{
			goto IL_000a;
		}
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_8;
		L_8 = InvalidProtocolBufferException_MalformedVarint_m0111203A64A0D3700152460D8BC275B5E250E871(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_ReadRawVarint64_mCABB283337372618F0D33AAFBC6483C0BAC21D78_RuntimeMethod_var)));
	}
}
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawLittleEndian32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CodedInputStream_ReadRawLittleEndian32_mF6D84082C42850B8B400A51CD50138FE96F94043 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		uint8_t L_0;
		L_0 = CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		uint8_t L_1;
		L_1 = CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		uint8_t L_2;
		L_2 = CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		uint8_t L_3;
		L_3 = CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD(__this, /*hidden argument*/NULL);
		V_3 = L_3;
		uint32_t L_4 = V_0;
		uint32_t L_5 = V_1;
		uint32_t L_6 = V_2;
		uint32_t L_7 = V_3;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)((int32_t)L_5<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)L_6<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_7<<(int32_t)((int32_t)24)))));
	}
}
// System.UInt64 Google.ProtocolBuffers.CodedInputStream::ReadRawLittleEndian64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CodedInputStream_ReadRawLittleEndian64_mA564037F64E937673B4DA8D0520920FCD466C81A (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	{
		uint8_t L_0;
		L_0 = CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD(__this, /*hidden argument*/NULL);
		V_0 = ((int64_t)((uint64_t)L_0));
		uint8_t L_1;
		L_1 = CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD(__this, /*hidden argument*/NULL);
		V_1 = ((int64_t)((uint64_t)L_1));
		uint8_t L_2;
		L_2 = CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD(__this, /*hidden argument*/NULL);
		V_2 = ((int64_t)((uint64_t)L_2));
		uint8_t L_3;
		L_3 = CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD(__this, /*hidden argument*/NULL);
		V_3 = ((int64_t)((uint64_t)L_3));
		uint8_t L_4;
		L_4 = CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD(__this, /*hidden argument*/NULL);
		V_4 = ((int64_t)((uint64_t)L_4));
		uint8_t L_5;
		L_5 = CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD(__this, /*hidden argument*/NULL);
		V_5 = ((int64_t)((uint64_t)L_5));
		uint8_t L_6;
		L_6 = CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD(__this, /*hidden argument*/NULL);
		V_6 = ((int64_t)((uint64_t)L_6));
		uint8_t L_7;
		L_7 = CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD(__this, /*hidden argument*/NULL);
		V_7 = ((int64_t)((uint64_t)L_7));
		uint64_t L_8 = V_0;
		uint64_t L_9 = V_1;
		uint64_t L_10 = V_2;
		uint64_t L_11 = V_3;
		uint64_t L_12 = V_4;
		uint64_t L_13 = V_5;
		uint64_t L_14 = V_6;
		uint64_t L_15 = V_7;
		return ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_8|(int64_t)((int64_t)((int64_t)L_9<<(int32_t)8))))|(int64_t)((int64_t)((int64_t)L_10<<(int32_t)((int32_t)16)))))|(int64_t)((int64_t)((int64_t)L_11<<(int32_t)((int32_t)24)))))|(int64_t)((int64_t)((int64_t)L_12<<(int32_t)((int32_t)32)))))|(int64_t)((int64_t)((int64_t)L_13<<(int32_t)((int32_t)40)))))|(int64_t)((int64_t)((int64_t)L_14<<(int32_t)((int32_t)48)))))|(int64_t)((int64_t)((int64_t)L_15<<(int32_t)((int32_t)56)))));
	}
}
// System.Int32 Google.ProtocolBuffers.CodedInputStream::PushLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedInputStream_PushLimit_m1854C1FA7289DF8BAFB8BADBAA2B6B8693FE2822 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, int32_t ___byteLimit0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___byteLimit0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_1;
		L_1 = InvalidProtocolBufferException_NegativeSize_m67D2C76867BCC7B628A33EAAC0F4BD1949814005(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_PushLimit_m1854C1FA7289DF8BAFB8BADBAA2B6B8693FE2822_RuntimeMethod_var)));
	}

IL_000d:
	{
		int32_t L_2 = ___byteLimit0;
		int32_t L_3 = __this->get_totalBytesRetired_8();
		int32_t L_4 = __this->get_bufferPos_3();
		___byteLimit0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4))));
		int32_t L_5 = __this->get_currentLimit_9();
		V_0 = L_5;
		int32_t L_6 = ___byteLimit0;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0032;
		}
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_8;
		L_8 = InvalidProtocolBufferException_TruncatedMessage_m4EF2861AB0C4D34BA859979101FBE6B6194BC4A0(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_PushLimit_m1854C1FA7289DF8BAFB8BADBAA2B6B8693FE2822_RuntimeMethod_var)));
	}

IL_0032:
	{
		int32_t L_9 = ___byteLimit0;
		__this->set_currentLimit_9(L_9);
		CodedInputStream_RecomputeBufferSizeAfterLimit_m844717B9E131A5C7798741E72137F9EE760EEAA2(__this, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::RecomputeBufferSizeAfterLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_RecomputeBufferSizeAfterLimit_m844717B9E131A5C7798741E72137F9EE760EEAA2 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bufferSize_1();
		int32_t L_1 = __this->get_bufferSizeAfterLimit_2();
		__this->set_bufferSize_1(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		int32_t L_2 = __this->get_totalBytesRetired_8();
		int32_t L_3 = __this->get_bufferSize_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3));
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_currentLimit_9();
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_currentLimit_9();
		__this->set_bufferSizeAfterLimit_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)));
		int32_t L_8 = __this->get_bufferSize_1();
		int32_t L_9 = __this->get_bufferSizeAfterLimit_2();
		__this->set_bufferSize_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)));
		goto IL_005a;
	}

IL_0053:
	{
		__this->set_bufferSizeAfterLimit_2(0);
	}

IL_005a:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::PopLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_PopLimit_m3363ECBE789385251C9729E1EA8A919078C7B91C (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, int32_t ___oldLimit0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___oldLimit0;
		__this->set_currentLimit_9(L_0);
		CodedInputStream_RecomputeBufferSizeAfterLimit_m844717B9E131A5C7798741E72137F9EE760EEAA2(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::RefillBuffer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_RefillBuffer_m5146E2A6D7B932DF81F031D2EFD8EE35A2A15C61 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, bool ___mustSucceed0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * G_B8_0 = NULL;
	CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * G_B9_1 = NULL;
	{
		int32_t L_0 = __this->get_bufferPos_3();
		int32_t L_1 = __this->get_bufferSize_1();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66D5BE4AFB85E2143155EC87ACACA892F4969F4F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_RefillBuffer_m5146E2A6D7B932DF81F031D2EFD8EE35A2A15C61_RuntimeMethod_var)));
	}

IL_001c:
	{
		int32_t L_3 = __this->get_totalBytesRetired_8();
		int32_t L_4 = __this->get_bufferSize_1();
		int32_t L_5 = __this->get_currentLimit_9();
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4))) == ((uint32_t)L_5))))
		{
			goto IL_0042;
		}
	}
	{
		bool L_6 = ___mustSucceed0;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_7;
		L_7 = InvalidProtocolBufferException_TruncatedMessage_m4EF2861AB0C4D34BA859979101FBE6B6194BC4A0(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_RefillBuffer_m5146E2A6D7B932DF81F031D2EFD8EE35A2A15C61_RuntimeMethod_var)));
	}

IL_0040:
	{
		return (bool)0;
	}

IL_0042:
	{
		int32_t L_8 = __this->get_totalBytesRetired_8();
		int32_t L_9 = __this->get_bufferSize_1();
		__this->set_totalBytesRetired_8(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)));
		__this->set_bufferPos_3(0);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_10 = __this->get_input_4();
		G_B7_0 = __this;
		if (L_10)
		{
			G_B8_0 = __this;
			goto IL_006e;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_0088;
	}

IL_006e:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_11 = __this->get_input_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_buffer_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = __this->get_buffer_0();
		NullCheck(L_13);
		NullCheck(L_11);
		int32_t L_14;
		L_14 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))));
		G_B9_0 = L_14;
		G_B9_1 = G_B8_0;
	}

IL_0088:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_bufferSize_1(G_B9_0);
		int32_t L_15 = __this->get_bufferSize_1();
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_00a4;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_16 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral361DCAE70833E87AF4B169A7E89AC3F82B22C68D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_RefillBuffer_m5146E2A6D7B932DF81F031D2EFD8EE35A2A15C61_RuntimeMethod_var)));
	}

IL_00a4:
	{
		int32_t L_17 = __this->get_bufferSize_1();
		if (L_17)
		{
			goto IL_00bd;
		}
	}
	{
		bool L_18 = ___mustSucceed0;
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_19;
		L_19 = InvalidProtocolBufferException_TruncatedMessage_m4EF2861AB0C4D34BA859979101FBE6B6194BC4A0(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_RefillBuffer_m5146E2A6D7B932DF81F031D2EFD8EE35A2A15C61_RuntimeMethod_var)));
	}

IL_00bb:
	{
		return (bool)0;
	}

IL_00bd:
	{
		CodedInputStream_RecomputeBufferSizeAfterLimit_m844717B9E131A5C7798741E72137F9EE760EEAA2(__this, /*hidden argument*/NULL);
		int32_t L_20 = __this->get_totalBytesRetired_8();
		int32_t L_21 = __this->get_bufferSize_1();
		int32_t L_22 = __this->get_bufferSizeAfterLimit_2();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21)), (int32_t)L_22));
		int32_t L_23 = V_0;
		int32_t L_24 = __this->get_sizeLimit_12();
		if ((((int32_t)L_23) > ((int32_t)L_24)))
		{
			goto IL_00eb;
		}
	}
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_00f1;
		}
	}

IL_00eb:
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_26;
		L_26 = InvalidProtocolBufferException_SizeLimitExceeded_m47053C4DD95FEC6CEA110E5CC766BFA9E681B738(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_RefillBuffer_m5146E2A6D7B932DF81F031D2EFD8EE35A2A15C61_RuntimeMethod_var)));
	}

IL_00f1:
	{
		return (bool)1;
	}
}
// System.Byte Google.ProtocolBuffers.CodedInputStream::ReadRawByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CodedInputStream_ReadRawByte_m0812F77EC03347180AB9F0EC69FCDC69DF1A3DBD (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bufferPos_3();
		int32_t L_1 = __this->get_bufferSize_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0019;
		}
	}
	{
		bool L_2;
		L_2 = CodedInputStream_RefillBuffer_m5146E2A6D7B932DF81F031D2EFD8EE35A2A15C61(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0019:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_buffer_0();
		int32_t L_4 = __this->get_bufferPos_3();
		int32_t L_5 = L_4;
		V_0 = L_5;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		int32_t L_6 = V_0;
		NullCheck(L_3);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		return L_8;
	}
}
// System.Byte[] Google.ProtocolBuffers.CodedInputStream::ReadRawBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* CodedInputStream_ReadRawBytes_m7FBEDB3E623E59BEC1F6B6FC8AE10AB28C8BA130 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC5F7F8487E6B29554657BCBE89090BB8E7A16421_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD16E9BAB800FEB8A571777E0D1EA77D2ED90B84B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA883043E5D5EF71DBC1CAB582704E6AEE2743609_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m02C594AD8F27BF8AEC5E1C08B33236E2B0063965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * V_6 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_10 = NULL;
	int32_t V_11 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_12 = NULL;
	Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950  V_13;
	memset((&V_13), 0, sizeof(V_13));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B16_0 = 0;
	{
		int32_t L_0 = ___size0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_1;
		L_1 = InvalidProtocolBufferException_NegativeSize_m67D2C76867BCC7B628A33EAAC0F4BD1949814005(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_ReadRawBytes_m7FBEDB3E623E59BEC1F6B6FC8AE10AB28C8BA130_RuntimeMethod_var)));
	}

IL_000d:
	{
		int32_t L_2 = __this->get_totalBytesRetired_8();
		int32_t L_3 = __this->get_bufferPos_3();
		int32_t L_4 = ___size0;
		int32_t L_5 = __this->get_currentLimit_9();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), (int32_t)L_4))) <= ((int32_t)L_5)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_6 = __this->get_currentLimit_9();
		int32_t L_7 = __this->get_totalBytesRetired_8();
		int32_t L_8 = __this->get_bufferPos_3();
		CodedInputStream_SkipRawBytes_m993F821EA6EC6DE9E35D94081714F57E8CE6996D(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)), (int32_t)L_8)), /*hidden argument*/NULL);
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_9;
		L_9 = InvalidProtocolBufferException_TruncatedMessage_m4EF2861AB0C4D34BA859979101FBE6B6194BC4A0(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_ReadRawBytes_m7FBEDB3E623E59BEC1F6B6FC8AE10AB28C8BA130_RuntimeMethod_var)));
	}

IL_0047:
	{
		int32_t L_10 = ___size0;
		int32_t L_11 = __this->get_bufferSize_1();
		int32_t L_12 = __this->get_bufferPos_3();
		if ((((int32_t)L_10) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12)))))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_13 = ___size0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_13);
		V_0 = L_14;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get_buffer_0();
		int32_t L_16 = __this->get_bufferPos_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = V_0;
		int32_t L_18 = ___size0;
		ByteArray_Copy_mE932E39DA26FAF229BE4996B822E048C863A430B(L_15, L_16, L_17, 0, L_18, /*hidden argument*/NULL);
		int32_t L_19 = __this->get_bufferPos_3();
		int32_t L_20 = ___size0;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = V_0;
		return L_21;
	}

IL_0085:
	{
		int32_t L_22 = ___size0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = __this->get_buffer_0();
		NullCheck(L_23);
		if ((((int32_t)L_22) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_0130;
		}
	}
	{
		int32_t L_24 = ___size0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_24);
		V_1 = L_25;
		int32_t L_26 = __this->get_bufferSize_1();
		int32_t L_27 = __this->get_bufferPos_3();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)L_27));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = __this->get_buffer_0();
		int32_t L_29 = __this->get_bufferPos_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = V_1;
		int32_t L_31 = V_2;
		ByteArray_Copy_mE932E39DA26FAF229BE4996B822E048C863A430B(L_28, L_29, L_30, 0, L_31, /*hidden argument*/NULL);
		int32_t L_32 = __this->get_bufferSize_1();
		__this->set_bufferPos_3(L_32);
		bool L_33;
		L_33 = CodedInputStream_RefillBuffer_m5146E2A6D7B932DF81F031D2EFD8EE35A2A15C61(__this, (bool)1, /*hidden argument*/NULL);
		goto IL_0106;
	}

IL_00d5:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = __this->get_buffer_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = V_1;
		int32_t L_36 = V_2;
		int32_t L_37 = __this->get_bufferSize_1();
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_34, 0, (RuntimeArray *)(RuntimeArray *)L_35, L_36, L_37, /*hidden argument*/NULL);
		int32_t L_38 = V_2;
		int32_t L_39 = __this->get_bufferSize_1();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)L_39));
		int32_t L_40 = __this->get_bufferSize_1();
		__this->set_bufferPos_3(L_40);
		bool L_41;
		L_41 = CodedInputStream_RefillBuffer_m5146E2A6D7B932DF81F031D2EFD8EE35A2A15C61(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0106:
	{
		int32_t L_42 = ___size0;
		int32_t L_43 = V_2;
		int32_t L_44 = __this->get_bufferSize_1();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)L_43))) > ((int32_t)L_44)))
		{
			goto IL_00d5;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = __this->get_buffer_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46 = V_1;
		int32_t L_47 = V_2;
		int32_t L_48 = ___size0;
		int32_t L_49 = V_2;
		ByteArray_Copy_mE932E39DA26FAF229BE4996B822E048C863A430B(L_45, 0, L_46, L_47, ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)L_49)), /*hidden argument*/NULL);
		int32_t L_50 = ___size0;
		int32_t L_51 = V_2;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)L_51)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_52 = V_1;
		return L_52;
	}

IL_0130:
	{
		int32_t L_53 = __this->get_bufferPos_3();
		V_3 = L_53;
		int32_t L_54 = __this->get_bufferSize_1();
		V_4 = L_54;
		int32_t L_55 = __this->get_totalBytesRetired_8();
		int32_t L_56 = __this->get_bufferSize_1();
		__this->set_totalBytesRetired_8(((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)L_56)));
		__this->set_bufferPos_3(0);
		__this->set_bufferSize_1(0);
		int32_t L_57 = ___size0;
		int32_t L_58 = V_4;
		int32_t L_59 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)L_59))));
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_60 = (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *)il2cpp_codegen_object_new(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var);
		List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05(L_60, /*hidden argument*/List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05_RuntimeMethod_var);
		V_6 = L_60;
		goto IL_01fc;
	}

IL_0174:
	{
		int32_t L_61 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_62 = __this->get_buffer_0();
		NullCheck(L_62);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_63;
		L_63 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_61, ((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_64 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_63);
		V_7 = L_64;
		V_8 = 0;
		goto IL_01df;
	}

IL_0192:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_65 = __this->get_input_4();
		if (L_65)
		{
			goto IL_01a3;
		}
	}
	{
		G_B16_0 = (-1);
		goto IL_01b9;
	}

IL_01a3:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_66 = __this->get_input_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_67 = V_7;
		int32_t L_68 = V_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_69 = V_7;
		NullCheck(L_69);
		int32_t L_70 = V_8;
		NullCheck(L_66);
		int32_t L_71;
		L_71 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_66, L_67, L_68, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length))), (int32_t)L_70)));
		G_B16_0 = L_71;
	}

IL_01b9:
	{
		V_9 = G_B16_0;
		int32_t L_72 = V_9;
		if ((((int32_t)L_72) > ((int32_t)0)))
		{
			goto IL_01c9;
		}
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_73;
		L_73 = InvalidProtocolBufferException_TruncatedMessage_m4EF2861AB0C4D34BA859979101FBE6B6194BC4A0(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_73, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_ReadRawBytes_m7FBEDB3E623E59BEC1F6B6FC8AE10AB28C8BA130_RuntimeMethod_var)));
	}

IL_01c9:
	{
		int32_t L_74 = __this->get_totalBytesRetired_8();
		int32_t L_75 = V_9;
		__this->set_totalBytesRetired_8(((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)L_75)));
		int32_t L_76 = V_8;
		int32_t L_77 = V_9;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)L_77));
	}

IL_01df:
	{
		int32_t L_78 = V_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_79 = V_7;
		NullCheck(L_79);
		if ((((int32_t)L_78) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_79)->max_length))))))
		{
			goto IL_0192;
		}
	}
	{
		int32_t L_80 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_81 = V_7;
		NullCheck(L_81);
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_81)->max_length)))));
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_82 = V_6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_83 = V_7;
		NullCheck(L_82);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_82, L_83, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
	}

IL_01fc:
	{
		int32_t L_84 = V_5;
		if ((((int32_t)L_84) > ((int32_t)0)))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_85 = ___size0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_86 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_85);
		V_10 = L_86;
		int32_t L_87 = V_4;
		int32_t L_88 = V_3;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_87, (int32_t)L_88));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_89 = __this->get_buffer_0();
		int32_t L_90 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_91 = V_10;
		int32_t L_92 = V_11;
		ByteArray_Copy_mE932E39DA26FAF229BE4996B822E048C863A430B(L_89, L_90, L_91, 0, L_92, /*hidden argument*/NULL);
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_93 = V_6;
		NullCheck(L_93);
		Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950  L_94;
		L_94 = List_1_GetEnumerator_m02C594AD8F27BF8AEC5E1C08B33236E2B0063965(L_93, /*hidden argument*/List_1_GetEnumerator_m02C594AD8F27BF8AEC5E1C08B33236E2B0063965_RuntimeMethod_var);
		V_13 = L_94;
	}

IL_022c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0253;
		}

IL_0231:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_95;
			L_95 = Enumerator_get_Current_mA883043E5D5EF71DBC1CAB582704E6AEE2743609_inline((Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 *)(&V_13), /*hidden argument*/Enumerator_get_Current_mA883043E5D5EF71DBC1CAB582704E6AEE2743609_RuntimeMethod_var);
			V_12 = L_95;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_96 = V_12;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_97 = V_10;
			int32_t L_98 = V_11;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_99 = V_12;
			NullCheck(L_99);
			Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_96, 0, (RuntimeArray *)(RuntimeArray *)L_97, L_98, ((int32_t)((int32_t)(((RuntimeArray*)L_99)->max_length))), /*hidden argument*/NULL);
			int32_t L_100 = V_11;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_101 = V_12;
			NullCheck(L_101);
			V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_101)->max_length)))));
		}

IL_0253:
		{
			bool L_102;
			L_102 = Enumerator_MoveNext_mD16E9BAB800FEB8A571777E0D1EA77D2ED90B84B((Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 *)(&V_13), /*hidden argument*/Enumerator_MoveNext_mD16E9BAB800FEB8A571777E0D1EA77D2ED90B84B_RuntimeMethod_var);
			if (L_102)
			{
				goto IL_0231;
			}
		}

IL_025f:
		{
			IL2CPP_LEAVE(0x272, FINALLY_0264);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0264;
	}

FINALLY_0264:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC5F7F8487E6B29554657BCBE89090BB8E7A16421((Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 *)(&V_13), /*hidden argument*/Enumerator_Dispose_mC5F7F8487E6B29554657BCBE89090BB8E7A16421_RuntimeMethod_var);
		IL2CPP_END_FINALLY(612)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(612)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x272, IL_0272)
	}

IL_0272:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_103 = V_10;
		return L_103;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::SkipField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_SkipField_mF57F4CE323B361D9ED7795FF76184BCA22FE3745 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = __this->get_lastTag_5();
		V_0 = L_0;
		uint32_t L_1 = V_0;
		uint32_t L_2;
		L_2 = WireFormat_GetTagWireType_m82EBD4F60A8CBA9163BDB8D9CE3A9F544C016C98(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		uint32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0031;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_0043;
			}
			case 3:
			{
				goto IL_0051;
			}
			case 4:
			{
				goto IL_006b;
			}
			case 5:
			{
				goto IL_006d;
			}
		}
	}
	{
		goto IL_0076;
	}

IL_0031:
	{
		uint64_t L_4;
		L_4 = CodedInputStream_ReadRawVarint64_mCABB283337372618F0D33AAFBC6483C0BAC21D78(__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_003a:
	{
		uint64_t L_5;
		L_5 = CodedInputStream_ReadRawLittleEndian64_mA564037F64E937673B4DA8D0520920FCD466C81A(__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0043:
	{
		uint32_t L_6;
		L_6 = CodedInputStream_ReadRawVarint32_m17E84932C037FC629E48C8BD7C38F381A937001A(__this, /*hidden argument*/NULL);
		CodedInputStream_SkipRawBytes_m993F821EA6EC6DE9E35D94081714F57E8CE6996D(__this, L_6, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0051:
	{
		CodedInputStream_SkipMessage_m1C7FDED2684692E2B668242C8CB62B56771C20B0(__this, /*hidden argument*/NULL);
		uint32_t L_7 = V_0;
		int32_t L_8;
		L_8 = WireFormat_GetTagFieldNumber_mA7E7022959089660F404CB9C91D7D339DDC8DD8E(L_7, /*hidden argument*/NULL);
		uint32_t L_9;
		L_9 = WireFormat_MakeTag_mDFD42625C101D7558D42ADDD3279C4250A396480(L_8, 4, /*hidden argument*/NULL);
		CodedInputStream_CheckLastTagWas_m28D6F0A6FF1C952BB42A948C47DBD38339EB92F2(__this, L_9, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_006b:
	{
		return (bool)0;
	}

IL_006d:
	{
		uint32_t L_10;
		L_10 = CodedInputStream_ReadRawLittleEndian32_mF6D84082C42850B8B400A51CD50138FE96F94043(__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0076:
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_11;
		L_11 = InvalidProtocolBufferException_InvalidWireType_mFA8E176C1FA6F7B9171535483897D5CC16292B9D(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_SkipField_mF57F4CE323B361D9ED7795FF76184BCA22FE3745_RuntimeMethod_var)));
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_SkipMessage_m1C7FDED2684692E2B668242C8CB62B56771C20B0 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		goto IL_0011;
	}

IL_0005:
	{
		bool L_0;
		L_0 = CodedInputStream_SkipField_mF57F4CE323B361D9ED7795FF76184BCA22FE3745(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		bool L_1;
		L_1 = CodedInputStream_ReadTag_m3BDAC10958E13B59F571A57D0304B372E6719EF3(__this, (uint32_t*)(&V_0), (String_t**)(&V_1), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipRawBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_SkipRawBytes_m993F821EA6EC6DE9E35D94081714F57E8CE6996D (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___size0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_1;
		L_1 = InvalidProtocolBufferException_NegativeSize_m67D2C76867BCC7B628A33EAAC0F4BD1949814005(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_SkipRawBytes_m993F821EA6EC6DE9E35D94081714F57E8CE6996D_RuntimeMethod_var)));
	}

IL_000d:
	{
		int32_t L_2 = __this->get_totalBytesRetired_8();
		int32_t L_3 = __this->get_bufferPos_3();
		int32_t L_4 = ___size0;
		int32_t L_5 = __this->get_currentLimit_9();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), (int32_t)L_4))) <= ((int32_t)L_5)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_6 = __this->get_currentLimit_9();
		int32_t L_7 = __this->get_totalBytesRetired_8();
		int32_t L_8 = __this->get_bufferPos_3();
		CodedInputStream_SkipRawBytes_m993F821EA6EC6DE9E35D94081714F57E8CE6996D(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)), (int32_t)L_8)), /*hidden argument*/NULL);
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_9;
		L_9 = InvalidProtocolBufferException_TruncatedMessage_m4EF2861AB0C4D34BA859979101FBE6B6194BC4A0(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_SkipRawBytes_m993F821EA6EC6DE9E35D94081714F57E8CE6996D_RuntimeMethod_var)));
	}

IL_0047:
	{
		int32_t L_10 = ___size0;
		int32_t L_11 = __this->get_bufferSize_1();
		int32_t L_12 = __this->get_bufferPos_3();
		if ((((int32_t)L_10) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12)))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_13 = __this->get_bufferPos_3();
		int32_t L_14 = ___size0;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)));
		goto IL_00cd;
	}

IL_006d:
	{
		int32_t L_15 = __this->get_bufferSize_1();
		int32_t L_16 = __this->get_bufferPos_3();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16));
		int32_t L_17 = __this->get_totalBytesRetired_8();
		int32_t L_18 = __this->get_bufferSize_1();
		__this->set_totalBytesRetired_8(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)));
		__this->set_bufferPos_3(0);
		__this->set_bufferSize_1(0);
		int32_t L_19 = V_0;
		int32_t L_20 = ___size0;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_00cd;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_21 = __this->get_input_4();
		if (L_21)
		{
			goto IL_00b4;
		}
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_22;
		L_22 = InvalidProtocolBufferException_TruncatedMessage_m4EF2861AB0C4D34BA859979101FBE6B6194BC4A0(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_SkipRawBytes_m993F821EA6EC6DE9E35D94081714F57E8CE6996D_RuntimeMethod_var)));
	}

IL_00b4:
	{
		int32_t L_23 = ___size0;
		int32_t L_24 = V_0;
		CodedInputStream_SkipImpl_m07171E9AAADDC5CD3873B351D33687F16EF84B54(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24)), /*hidden argument*/NULL);
		int32_t L_25 = __this->get_totalBytesRetired_8();
		int32_t L_26 = ___size0;
		int32_t L_27 = V_0;
		__this->set_totalBytesRetired_8(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)L_27)))));
	}

IL_00cd:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipImpl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_SkipImpl_m07171E9AAADDC5CD3873B351D33687F16EF84B54 (CodedInputStream_t474D666AEDDB1438B9EE389712488B0EBBC796D7 * __this, int32_t ___amountToSkip0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_0);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = __this->get_input_4();
		NullCheck(L_2);
		int64_t L_3;
		L_3 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_2);
		V_0 = L_3;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = __this->get_input_4();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_5 = L_4;
		NullCheck(L_5);
		int64_t L_6;
		L_6 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_5);
		int32_t L_7 = ___amountToSkip0;
		NullCheck(L_5);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_5, ((int64_t)il2cpp_codegen_add((int64_t)L_6, (int64_t)((int64_t)((int64_t)L_7)))));
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_8 = __this->get_input_4();
		NullCheck(L_8);
		int64_t L_9;
		L_9 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_8);
		int64_t L_10 = V_0;
		int32_t L_11 = ___amountToSkip0;
		if ((((int64_t)L_9) == ((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)((int64_t)((int64_t)L_11)))))))
		{
			goto IL_004a;
		}
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_12;
		L_12 = InvalidProtocolBufferException_TruncatedMessage_m4EF2861AB0C4D34BA859979101FBE6B6194BC4A0(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_SkipImpl_m07171E9AAADDC5CD3873B351D33687F16EF84B54_RuntimeMethod_var)));
	}

IL_004a:
	{
		goto IL_008f;
	}

IL_004f:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_1 = L_13;
		goto IL_0088;
	}

IL_005f:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_14 = __this->get_input_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = ___amountToSkip0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))), L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_19;
		L_19 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, L_18);
		V_2 = L_19;
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) > ((int32_t)0)))
		{
			goto IL_0083;
		}
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_21;
		L_21 = InvalidProtocolBufferException_TruncatedMessage_m4EF2861AB0C4D34BA859979101FBE6B6194BC4A0(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedInputStream_SkipImpl_m07171E9AAADDC5CD3873B351D33687F16EF84B54_RuntimeMethod_var)));
	}

IL_0083:
	{
		int32_t L_22 = ___amountToSkip0;
		int32_t L_23 = V_2;
		___amountToSkip0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23));
	}

IL_0088:
	{
		int32_t L_24 = ___amountToSkip0;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_005f;
		}
	}

IL_008f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.ProtocolBuffers.CodedOutputStream::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream__ctor_mDFDBEC4E46A34B3ECFCC98AD5D532A7725374405 (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_output_4((Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buffer0;
		__this->set_buffer_1(L_0);
		int32_t L_1 = ___offset1;
		__this->set_position_3(L_1);
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___length2;
		__this->set_limit_2(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)));
		return;
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::get_SpaceLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_get_SpaceLeft_m6FE86945329112834D2853C908CA219479AC3581 (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_output_4();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = __this->get_limit_2();
		int32_t L_2 = __this->get_position_3();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2));
	}

IL_0019:
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37CAB78886EABBE51E00800B7D06DF3BC833E248)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedOutputStream_get_SpaceLeft_m6FE86945329112834D2853C908CA219479AC3581_RuntimeMethod_var)));
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeFloatSize(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeFloatSize_mBAE0E51F69F52D5A816258D7069EBFC08FA48E81 (int32_t ___fieldNumber0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CodedOutputStream_ComputeTagSize_mF4A260827A0DF594FD4FC2AECDD9ECE4794C37FA(L_0, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)4));
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt64Size(System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeInt64Size_m64723754368B03CA581FA5609DF836BC223798E8 (int32_t ___fieldNumber0, int64_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CodedOutputStream_ComputeTagSize_mF4A260827A0DF594FD4FC2AECDD9ECE4794C37FA(L_0, /*hidden argument*/NULL);
		int64_t L_2 = ___value1;
		int32_t L_3;
		L_3 = CodedOutputStream_ComputeRawVarint64Size_mA956EC24FFB7EACBCACC5359D66971964D122D50(L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_3));
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt32Size(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeInt32Size_mAD9DFDB7A7F0A5C37E8B3807D781C34813AC0A42 (int32_t ___fieldNumber0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___fieldNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = CodedOutputStream_ComputeTagSize_mF4A260827A0DF594FD4FC2AECDD9ECE4794C37FA(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___value1;
		int32_t L_4;
		L_4 = CodedOutputStream_ComputeRawVarint32Size_m2DEA6BCA78E0386C6B245936DC4EA0E6CE03A7E2(L_3, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_4));
	}

IL_0015:
	{
		int32_t L_5 = ___fieldNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = CodedOutputStream_ComputeTagSize_mF4A260827A0DF594FD4FC2AECDD9ECE4794C37FA(L_5, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)10)));
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeMessageSize(System.Int32,Google.ProtocolBuffers.IMessageLite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeMessageSize_m732B539489A2A2BADB70B706C3DF81BBA6AA1AE5 (int32_t ___fieldNumber0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessageLite_tA796EF3E5E4656B8FC42C9138B1423CB43BC5D68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___value1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Google.ProtocolBuffers.IMessageLite::get_SerializedSize() */, IMessageLite_tA796EF3E5E4656B8FC42C9138B1423CB43BC5D68_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = ___fieldNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = CodedOutputStream_ComputeTagSize_mF4A260827A0DF594FD4FC2AECDD9ECE4794C37FA(L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = CodedOutputStream_ComputeRawVarint32Size_m2DEA6BCA78E0386C6B245936DC4EA0E6CE03A7E2(L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_5)), (int32_t)L_6));
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeEnumSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeEnumSize_m3827FD0C319732EBB02159469D5AD7CF10CD5A37 (int32_t ___fieldNumber0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CodedOutputStream_ComputeTagSize_mF4A260827A0DF594FD4FC2AECDD9ECE4794C37FA(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		int32_t L_3;
		L_3 = CodedOutputStream_ComputeEnumSizeNoTag_mA3DB740FE994256BD53AF1FA80B1FF75336A216C(L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_3));
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt32SizeNoTag(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeInt32SizeNoTag_mFBB77FE9884DE65C0989BB7F2F9C0C4DF697B144 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = CodedOutputStream_ComputeRawVarint32Size_m2DEA6BCA78E0386C6B245936DC4EA0E6CE03A7E2(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000e:
	{
		return ((int32_t)10);
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeEnumSizeNoTag(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeEnumSizeNoTag_mA3DB740FE994256BD53AF1FA80B1FF75336A216C (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CodedOutputStream_ComputeInt32SizeNoTag_mFBB77FE9884DE65C0989BB7F2F9C0C4DF697B144(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeRawVarint32Size(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeRawVarint32Size_m2DEA6BCA78E0386C6B245936DC4EA0E6CE03A7E2 (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		if (((int32_t)((int32_t)L_0&(int32_t)((int32_t)-128))))
		{
			goto IL_000b;
		}
	}
	{
		return 1;
	}

IL_000b:
	{
		uint32_t L_1 = ___value0;
		if (((int32_t)((int32_t)L_1&(int32_t)((int32_t)-16384))))
		{
			goto IL_0019;
		}
	}
	{
		return 2;
	}

IL_0019:
	{
		uint32_t L_2 = ___value0;
		if (((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2097152))))
		{
			goto IL_0027;
		}
	}
	{
		return 3;
	}

IL_0027:
	{
		uint32_t L_3 = ___value0;
		if (((int32_t)((int32_t)L_3&(int32_t)((int32_t)-268435456))))
		{
			goto IL_0035;
		}
	}
	{
		return 4;
	}

IL_0035:
	{
		return 5;
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeRawVarint64Size(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeRawVarint64Size_mA956EC24FFB7EACBCACC5359D66971964D122D50 (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_0&(int64_t)((int64_t)((int64_t)((int32_t)-128)))))) == ((uint64_t)((int64_t)((int64_t)0))))))
		{
			goto IL_000e;
		}
	}
	{
		return 1;
	}

IL_000e:
	{
		uint64_t L_1 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_1&(int64_t)((int64_t)((int64_t)((int32_t)-16384)))))) == ((uint64_t)((int64_t)((int64_t)0))))))
		{
			goto IL_001f;
		}
	}
	{
		return 2;
	}

IL_001f:
	{
		uint64_t L_2 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_2&(int64_t)((int64_t)((int64_t)((int32_t)-2097152)))))) == ((uint64_t)((int64_t)((int64_t)0))))))
		{
			goto IL_0030;
		}
	}
	{
		return 3;
	}

IL_0030:
	{
		uint64_t L_3 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_3&(int64_t)((int64_t)((int64_t)((int32_t)-268435456)))))) == ((uint64_t)((int64_t)((int64_t)0))))))
		{
			goto IL_0041;
		}
	}
	{
		return 4;
	}

IL_0041:
	{
		uint64_t L_4 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_4&(int64_t)((int64_t)-34359738368LL)))) == ((uint64_t)((int64_t)((int64_t)0))))))
		{
			goto IL_0055;
		}
	}
	{
		return 5;
	}

IL_0055:
	{
		uint64_t L_5 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_5&(int64_t)((int64_t)-4398046511104LL)))) == ((uint64_t)((int64_t)((int64_t)0))))))
		{
			goto IL_0069;
		}
	}
	{
		return 6;
	}

IL_0069:
	{
		uint64_t L_6 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_6&(int64_t)((int64_t)-562949953421312LL)))) == ((uint64_t)((int64_t)((int64_t)0))))))
		{
			goto IL_007d;
		}
	}
	{
		return 7;
	}

IL_007d:
	{
		uint64_t L_7 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_7&(int64_t)((int64_t)-72057594037927936LL)))) == ((uint64_t)((int64_t)((int64_t)0))))))
		{
			goto IL_0091;
		}
	}
	{
		return 8;
	}

IL_0091:
	{
		uint64_t L_8 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_8&(int64_t)((int64_t)(std::numeric_limits<int64_t>::min)())))) == ((uint64_t)((int64_t)((int64_t)0))))))
		{
			goto IL_00a6;
		}
	}
	{
		return ((int32_t)9);
	}

IL_00a6:
	{
		return ((int32_t)10);
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeTagSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeTagSize_mF4A260827A0DF594FD4FC2AECDD9ECE4794C37FA (int32_t ___fieldNumber0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		uint32_t L_1;
		L_1 = WireFormat_MakeTag_mDFD42625C101D7558D42ADDD3279C4250A396480(L_0, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = CodedOutputStream_ComputeRawVarint32Size_m2DEA6BCA78E0386C6B245936DC4EA0E6CE03A7E2(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Google.ProtocolBuffers.CodedOutputStream Google.ProtocolBuffers.CodedOutputStream::CreateInstance(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * CodedOutputStream_CreateInstance_mAB41E09923BA47D989A0A8441B94B64F1B933053 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___flatArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___flatArray0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___flatArray0;
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * L_2;
		L_2 = CodedOutputStream_CreateInstance_m37EA5B320833D79BCEDEF07B5B9532185ABDADC9(L_0, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), /*hidden argument*/NULL);
		return L_2;
	}
}
// Google.ProtocolBuffers.CodedOutputStream Google.ProtocolBuffers.CodedOutputStream::CreateInstance(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * CodedOutputStream_CreateInstance_m37EA5B320833D79BCEDEF07B5B9532185ABDADC9 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___flatArray0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___flatArray0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___length2;
		CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * L_3 = (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 *)il2cpp_codegen_object_new(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		CodedOutputStream__ctor_mDFDBEC4E46A34B3ECFCC98AD5D532A7725374405(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteFloat(System.Int32,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteFloat_m57052553A22144BB5EE514E7B41762AB81F16280 (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, float ___value2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fieldNumber0;
		CodedOutputStream_WriteTag_mD3DE430E6898A07FF86E44DE1DDCE11C4A2C163D(__this, L_0, 5, /*hidden argument*/NULL);
		float L_1 = ___value2;
		CodedOutputStream_WriteFloatNoTag_m9A1865384B2E0A3318F9FAA06B2FBFE2921C1538(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt64(System.Int32,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteInt64_mFF850F687D87E0FF7DB8F26EF64130216A3D3916 (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, int64_t ___value2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fieldNumber0;
		CodedOutputStream_WriteTag_mD3DE430E6898A07FF86E44DE1DDCE11C4A2C163D(__this, L_0, 0, /*hidden argument*/NULL);
		int64_t L_1 = ___value2;
		CodedOutputStream_WriteRawVarint64_m0710EC98157EB062E5D51CB3E6A41FE18FE5FF0D(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt32(System.Int32,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteInt32_mC25F423B972D32E935E60AEFD9E5EAA3461D3307 (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, int32_t ___value2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fieldNumber0;
		CodedOutputStream_WriteTag_mD3DE430E6898A07FF86E44DE1DDCE11C4A2C163D(__this, L_0, 0, /*hidden argument*/NULL);
		int32_t L_1 = ___value2;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = ___value2;
		CodedOutputStream_WriteRawVarint32_m405E0FB2664C91AA9C7120907C9423B913A19EE2(__this, L_2, /*hidden argument*/NULL);
		goto IL_0023;
	}

IL_001b:
	{
		int32_t L_3 = ___value2;
		CodedOutputStream_WriteRawVarint64_m0710EC98157EB062E5D51CB3E6A41FE18FE5FF0D(__this, ((int64_t)((int64_t)L_3)), /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteMessage(System.Int32,System.String,Google.ProtocolBuffers.IMessageLite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteMessage_mF8CBC2E5C45CAD3C18AE33EC364A2DE6F0CCB47E (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, RuntimeObject* ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessageLite_tA796EF3E5E4656B8FC42C9138B1423CB43BC5D68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		CodedOutputStream_WriteTag_mD3DE430E6898A07FF86E44DE1DDCE11C4A2C163D(__this, L_0, 2, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___value2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Google.ProtocolBuffers.IMessageLite::get_SerializedSize() */, IMessageLite_tA796EF3E5E4656B8FC42C9138B1423CB43BC5D68_il2cpp_TypeInfo_var, L_1);
		CodedOutputStream_WriteRawVarint32_m405E0FB2664C91AA9C7120907C9423B913A19EE2(__this, L_2, /*hidden argument*/NULL);
		RuntimeObject* L_3 = ___value2;
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Google.ProtocolBuffers.IMessageLite::WriteTo(Google.ProtocolBuffers.ICodedOutputStream) */, IMessageLite_tA796EF3E5E4656B8FC42C9138B1423CB43BC5D68_il2cpp_TypeInfo_var, L_3, __this);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteEnum(System.Int32,System.String,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteEnum_mDF13FAA0C44747079E962682E078EE518A627D3D (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, int32_t ___value2, RuntimeObject * ___rawValue3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fieldNumber0;
		CodedOutputStream_WriteTag_mD3DE430E6898A07FF86E44DE1DDCE11C4A2C163D(__this, L_0, 0, /*hidden argument*/NULL);
		int32_t L_1 = ___value2;
		CodedOutputStream_WriteInt32NoTag_m4C7CAD3533F9DF51D6B0BB889545C93114572084(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteFloatNoTag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteFloatNoTag_m9A1865384B2E0A3318F9FAA06B2FBFE2921C1538 (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	int32_t V_1 = 0;
	{
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = BitConverter_GetBytes_m7ED1DB1B6D850DF7D04A7122E1229883226C10D2(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		ByteArray_Reverse_mCC157836DA21DC3E8D769F8B8A7C677C5AFA31CB(L_3, /*hidden argument*/NULL);
	}

IL_0017:
	{
		int32_t L_4 = __this->get_limit_2();
		int32_t L_5 = __this->get_position_3();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5))) < ((int32_t)4)))
		{
			goto IL_009b;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_buffer_1();
		int32_t L_7 = __this->get_position_3();
		int32_t L_8 = L_7;
		V_1 = L_8;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = __this->get_buffer_1();
		int32_t L_14 = __this->get_position_3();
		int32_t L_15 = L_14;
		V_1 = L_15;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)));
		int32_t L_16 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)L_19);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = __this->get_buffer_1();
		int32_t L_21 = __this->get_position_3();
		int32_t L_22 = L_21;
		V_1 = L_22;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)));
		int32_t L_23 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)L_26);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = __this->get_buffer_1();
		int32_t L_28 = __this->get_position_3();
		int32_t L_29 = L_28;
		V_1 = L_29;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)));
		int32_t L_30 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint8_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (uint8_t)L_33);
		goto IL_00a4;
	}

IL_009b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = V_0;
		CodedOutputStream_WriteRawBytes_m97873F22509557488C01B4E9BD962533715BE8D7(__this, L_34, 0, 4, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt32NoTag(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteInt32NoTag_m4C7CAD3533F9DF51D6B0BB889545C93114572084 (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___value0;
		CodedOutputStream_WriteRawVarint32_m405E0FB2664C91AA9C7120907C9423B913A19EE2(__this, L_1, /*hidden argument*/NULL);
		goto IL_001b;
	}

IL_0013:
	{
		int32_t L_2 = ___value0;
		CodedOutputStream_WriteRawVarint64_m0710EC98157EB062E5D51CB3E6A41FE18FE5FF0D(__this, ((int64_t)((int64_t)L_2)), /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WritePackedFloatArray(System.Int32,System.String,System.Int32,System.Collections.Generic.IEnumerable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WritePackedFloatArray_m35491F5B88D32C249589D2AAE775C5090B3FB66B (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, int32_t ___calculatedSize2, RuntimeObject* ___list3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t673DFF64E51C18A8B1287F4BD988966CE3B15A45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = ___fieldNumber0;
		CodedOutputStream_WriteTag_mD3DE430E6898A07FF86E44DE1DDCE11C4A2C163D(__this, L_0, 2, /*hidden argument*/NULL);
		int32_t L_1 = ___calculatedSize2;
		CodedOutputStream_WriteRawVarint32_m405E0FB2664C91AA9C7120907C9423B913A19EE2(__this, L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___list3;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator() */, IEnumerable_1_t673DFF64E51C18A8B1287F4BD988966CE3B15A45_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_001c:
		{
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			float L_5;
			L_5 = InterfaceFuncInvoker0< float >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF_il2cpp_TypeInfo_var, L_4);
			V_0 = L_5;
			float L_6 = V_0;
			CodedOutputStream_WriteFloatNoTag_m9A1865384B2E0A3318F9FAA06B2FBFE2921C1538(__this, L_6, /*hidden argument*/NULL);
		}

IL_002a:
		{
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			bool L_8;
			L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_001c;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x47, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_1;
			if (!L_9)
			{
				goto IL_0046;
			}
		}

IL_0040:
		{
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_10);
		}

IL_0046:
		{
			IL2CPP_END_FINALLY(58)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x47, IL_0047)
	}

IL_0047:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteTag(System.Int32,Google.ProtocolBuffers.WireFormat/WireType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteTag_mD3DE430E6898A07FF86E44DE1DDCE11C4A2C163D (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, int32_t ___fieldNumber0, uint32_t ___type1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fieldNumber0;
		uint32_t L_1 = ___type1;
		uint32_t L_2;
		L_2 = WireFormat_MakeTag_mDFD42625C101D7558D42ADDD3279C4250A396480(L_0, L_1, /*hidden argument*/NULL);
		CodedOutputStream_WriteRawVarint32_m405E0FB2664C91AA9C7120907C9423B913A19EE2(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawVarint32(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawVarint32_m405E0FB2664C91AA9C7120907C9423B913A19EE2 (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_002d;
	}

IL_0005:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_buffer_1();
		int32_t L_1 = __this->get_position_3();
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = V_0;
		uint32_t L_4 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)127)))|(int32_t)((int32_t)128))))));
		uint32_t L_5 = ___value0;
		___value0 = ((int32_t)((uint32_t)L_5>>7));
	}

IL_002d:
	{
		uint32_t L_6 = ___value0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)127)))))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_7 = __this->get_position_3();
		int32_t L_8 = __this->get_limit_2();
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0005;
		}
	}

IL_0046:
	{
		goto IL_0061;
	}

IL_004b:
	{
		uint32_t L_9 = ___value0;
		CodedOutputStream_WriteRawByte_mF4C0FD336AD8072321214AB1A010A4C8EF8F040C(__this, (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)127)))|(int32_t)((int32_t)128))))), /*hidden argument*/NULL);
		uint32_t L_10 = ___value0;
		___value0 = ((int32_t)((uint32_t)L_10>>7));
	}

IL_0061:
	{
		uint32_t L_11 = ___value0;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)127)))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_12 = __this->get_position_3();
		int32_t L_13 = __this->get_limit_2();
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0099;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = __this->get_buffer_1();
		int32_t L_15 = __this->get_position_3();
		int32_t L_16 = L_15;
		V_0 = L_16;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		int32_t L_17 = V_0;
		uint32_t L_18 = ___value0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)((uint8_t)L_18)));
		goto IL_00a1;
	}

IL_0099:
	{
		uint32_t L_19 = ___value0;
		CodedOutputStream_WriteRawByte_mF4C0FD336AD8072321214AB1A010A4C8EF8F040C(__this, (uint8_t)((int32_t)((uint8_t)L_19)), /*hidden argument*/NULL);
	}

IL_00a1:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawVarint64(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawVarint64_m0710EC98157EB062E5D51CB3E6A41FE18FE5FF0D (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_002f;
	}

IL_0005:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_buffer_1();
		int32_t L_1 = __this->get_position_3();
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = V_0;
		uint64_t L_4 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_4&(int64_t)((int64_t)((int64_t)((int32_t)127)))))|(int64_t)((int64_t)((int64_t)((int32_t)128))))))));
		uint64_t L_5 = ___value0;
		___value0 = ((int64_t)((uint64_t)L_5>>7));
	}

IL_002f:
	{
		uint64_t L_6 = ___value0;
		if ((!(((uint64_t)L_6) > ((uint64_t)((int64_t)((int64_t)((int32_t)127)))))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_7 = __this->get_position_3();
		int32_t L_8 = __this->get_limit_2();
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0005;
		}
	}

IL_0049:
	{
		goto IL_0066;
	}

IL_004e:
	{
		uint64_t L_9 = ___value0;
		CodedOutputStream_WriteRawByte_mF4C0FD336AD8072321214AB1A010A4C8EF8F040C(__this, (uint8_t)((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_9&(int64_t)((int64_t)((int64_t)((int32_t)127)))))|(int64_t)((int64_t)((int64_t)((int32_t)128))))))), /*hidden argument*/NULL);
		uint64_t L_10 = ___value0;
		___value0 = ((int64_t)((uint64_t)L_10>>7));
	}

IL_0066:
	{
		uint64_t L_11 = ___value0;
		if ((!(((uint64_t)L_11) <= ((uint64_t)((int64_t)((int64_t)((int32_t)127)))))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_12 = __this->get_position_3();
		int32_t L_13 = __this->get_limit_2();
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_009f;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = __this->get_buffer_1();
		int32_t L_15 = __this->get_position_3();
		int32_t L_16 = L_15;
		V_0 = L_16;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		int32_t L_17 = V_0;
		uint64_t L_18 = ___value0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)((uint8_t)L_18)));
		goto IL_00a7;
	}

IL_009f:
	{
		uint64_t L_19 = ___value0;
		CodedOutputStream_WriteRawByte_mF4C0FD336AD8072321214AB1A010A4C8EF8F040C(__this, (uint8_t)((int32_t)((uint8_t)L_19)), /*hidden argument*/NULL);
	}

IL_00a7:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawByte_mF4C0FD336AD8072321214AB1A010A4C8EF8F040C (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_position_3();
		int32_t L_1 = __this->get_limit_2();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		CodedOutputStream_RefreshBuffer_mD9D5A7943F18439D86239870A2A12229136BBA7C(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_buffer_1();
		int32_t L_3 = __this->get_position_3();
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		int32_t L_5 = V_0;
		uint8_t L_6 = ___value0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)L_6);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawBytes_m97873F22509557488C01B4E9BD962533715BE8D7 (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_limit_2();
		int32_t L_1 = __this->get_position_3();
		int32_t L_2 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) < ((int32_t)L_2)))
		{
			goto IL_003a;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___value0;
		int32_t L_4 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get_buffer_1();
		int32_t L_6 = __this->get_position_3();
		int32_t L_7 = ___length2;
		ByteArray_Copy_mE932E39DA26FAF229BE4996B822E048C863A430B(L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_position_3();
		int32_t L_9 = ___length2;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)));
		goto IL_00ad;
	}

IL_003a:
	{
		int32_t L_10 = __this->get_limit_2();
		int32_t L_11 = __this->get_position_3();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___value0;
		int32_t L_13 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = __this->get_buffer_1();
		int32_t L_15 = __this->get_position_3();
		int32_t L_16 = V_0;
		ByteArray_Copy_mE932E39DA26FAF229BE4996B822E048C863A430B(L_12, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		int32_t L_17 = ___offset1;
		int32_t L_18 = V_0;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18));
		int32_t L_19 = ___length2;
		int32_t L_20 = V_0;
		___length2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20));
		int32_t L_21 = __this->get_limit_2();
		__this->set_position_3(L_21);
		CodedOutputStream_RefreshBuffer_mD9D5A7943F18439D86239870A2A12229136BBA7C(__this, /*hidden argument*/NULL);
		int32_t L_22 = ___length2;
		int32_t L_23 = __this->get_limit_2();
		if ((((int32_t)L_22) > ((int32_t)L_23)))
		{
			goto IL_009f;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = ___value0;
		int32_t L_25 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = __this->get_buffer_1();
		int32_t L_27 = ___length2;
		ByteArray_Copy_mE932E39DA26FAF229BE4996B822E048C863A430B(L_24, L_25, L_26, 0, L_27, /*hidden argument*/NULL);
		int32_t L_28 = ___length2;
		__this->set_position_3(L_28);
		goto IL_00ad;
	}

IL_009f:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_29 = __this->get_output_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = ___value0;
		int32_t L_31 = ___offset1;
		int32_t L_32 = ___length2;
		NullCheck(L_29);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_29, L_30, L_31, L_32);
	}

IL_00ad:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::RefreshBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_RefreshBuffer_mD9D5A7943F18439D86239870A2A12229136BBA7C (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_output_4();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		OutOfSpaceException_tDF80BF94ABB3ECC88AE7B7C851596B3A820489B1 * L_1 = (OutOfSpaceException_tDF80BF94ABB3ECC88AE7B7C851596B3A820489B1 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfSpaceException_tDF80BF94ABB3ECC88AE7B7C851596B3A820489B1_il2cpp_TypeInfo_var)));
		OutOfSpaceException__ctor_m2A0D021AB94EF1A17862BC37D6781C71C97ED878(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedOutputStream_RefreshBuffer_mD9D5A7943F18439D86239870A2A12229136BBA7C_RuntimeMethod_var)));
	}

IL_0011:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = __this->get_output_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_buffer_1();
		int32_t L_4 = __this->get_position_3();
		NullCheck(L_2);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, L_4);
		__this->set_position_3(0);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::CheckNoSpaceLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_CheckNoSpaceLeft_m5CFAE09852A3FD109EC6C7BA94BF2D311EC7DA1E (CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = CodedOutputStream_get_SpaceLeft_m6FE86945329112834D2853C908CA219479AC3581(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3611BCFD4C959E153B2D5A4BC5FF22874151973)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodedOutputStream_CheckNoSpaceLeft_m5CFAE09852A3FD109EC6C7BA94BF2D311EC7DA1E_RuntimeMethod_var)));
	}

IL_0016:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream__cctor_m20F3097D307D8D9995E48930F250BE9A3351ED55 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_StaticFields*)il2cpp_codegen_static_fields_for(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var))->set_DefaultBufferSize_0(((int32_t)4096));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.ProtocolBuffers.ExtensionRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>,System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionRegistry__ctor_mC4E9DA3D5F19D1FF37D06E4D8F08ABDC77CB7B2E (ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * __this, Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 * ___byName0, Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 * ___byNumber1, bool ___readOnly2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 * L_0 = ___byName0;
		__this->set_extensionsByName_1(L_0);
		Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 * L_1 = ___byNumber1;
		__this->set_extensionsByNumber_2(L_1);
		bool L_2 = ___readOnly2;
		__this->set_readOnly_3(L_2);
		return;
	}
}
// Google.ProtocolBuffers.ExtensionRegistry Google.ProtocolBuffers.ExtensionRegistry::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ExtensionRegistry_get_Empty_mC0CEC24AC7345586186C0641D64BAAC63413DAA9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_0 = ((ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_StaticFields*)il2cpp_codegen_static_fields_for(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var))->get_empty_0();
		return L_0;
	}
}
// Google.ProtocolBuffers.ExtensionRegistry Google.ProtocolBuffers.ExtensionRegistry::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ExtensionRegistry_CreateInstance_mAFE70CB5B63B7FC5A530B01AE6657AEC40A868D4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m17C5F3C712FB57465C5F39FE4AB3651FEF6942D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2AAF0A3D0DB2C1815A964E002A0EA308E075F0F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 * L_0 = (Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 *)il2cpp_codegen_object_new(Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2AAF0A3D0DB2C1815A964E002A0EA308E075F0F2(L_0, /*hidden argument*/Dictionary_2__ctor_m2AAF0A3D0DB2C1815A964E002A0EA308E075F0F2_RuntimeMethod_var);
		Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 * L_1 = (Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 *)il2cpp_codegen_object_new(Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m17C5F3C712FB57465C5F39FE4AB3651FEF6942D6(L_1, /*hidden argument*/Dictionary_2__ctor_m17C5F3C712FB57465C5F39FE4AB3651FEF6942D6_RuntimeMethod_var);
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_2 = (ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *)il2cpp_codegen_object_new(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		ExtensionRegistry__ctor_mC4E9DA3D5F19D1FF37D06E4D8F08ABDC77CB7B2E(L_2, L_0, L_1, (bool)0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Google.ProtocolBuffers.ExtensionRegistry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionRegistry__cctor_m84CBC3977F71CE6BF5F5058EC5EA1687460A6053 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m17C5F3C712FB57465C5F39FE4AB3651FEF6942D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2AAF0A3D0DB2C1815A964E002A0EA308E075F0F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 * L_0 = (Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 *)il2cpp_codegen_object_new(Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2AAF0A3D0DB2C1815A964E002A0EA308E075F0F2(L_0, /*hidden argument*/Dictionary_2__ctor_m2AAF0A3D0DB2C1815A964E002A0EA308E075F0F2_RuntimeMethod_var);
		Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 * L_1 = (Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 *)il2cpp_codegen_object_new(Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m17C5F3C712FB57465C5F39FE4AB3651FEF6942D6(L_1, /*hidden argument*/Dictionary_2__ctor_m17C5F3C712FB57465C5F39FE4AB3651FEF6942D6_RuntimeMethod_var);
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_2 = (ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *)il2cpp_codegen_object_new(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		ExtensionRegistry__ctor_mC4E9DA3D5F19D1FF37D06E4D8F08ABDC77CB7B2E(L_2, L_0, L_1, (bool)1, /*hidden argument*/NULL);
		((ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_StaticFields*)il2cpp_codegen_static_fields_for(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var))->set_empty_0(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Globalization.CultureInfo Google.ProtocolBuffers.FrameworkPortability::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * FrameworkPortability_get_InvariantCulture_mBF2341FFC06C478F62AF5BC3A09DB806883F5BCB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Google.ProtocolBuffers.FrameworkPortability::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameworkPortability__cctor_m7B083930B6B1322BA8FE6AD0C77D81727902C803 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameworkPortability_t75531D894745351C33AA12992DB03BC39B9CF74A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		((FrameworkPortability_t75531D894745351C33AA12992DB03BC39B9CF74A_StaticFields*)il2cpp_codegen_static_fields_for(FrameworkPortability_t75531D894745351C33AA12992DB03BC39B9CF74A_il2cpp_TypeInfo_var))->set_NewLine_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.ProtocolBuffers.InvalidProtocolBufferException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidProtocolBufferException__ctor_m0DF1F7D9C630AD5477130D4A75288C0F891A3D9D (InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		IOException__ctor_m208E01C02FF2C1D6C5AA661A5816C744804E1690(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::TruncatedMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * InvalidProtocolBufferException_TruncatedMessage_m4EF2861AB0C4D34BA859979101FBE6B6194BC4A0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC90A44252B611E4DA17C5914BBC7180A24B2E55);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_0 = (InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m0DF1F7D9C630AD5477130D4A75288C0F891A3D9D(L_0, _stringLiteralBC90A44252B611E4DA17C5914BBC7180A24B2E55, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::NegativeSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * InvalidProtocolBufferException_NegativeSize_m67D2C76867BCC7B628A33EAAC0F4BD1949814005 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF675610394CF76A6BCE5A6A7C06021D99F54199F);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_0 = (InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m0DF1F7D9C630AD5477130D4A75288C0F891A3D9D(L_0, _stringLiteralF675610394CF76A6BCE5A6A7C06021D99F54199F, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::MalformedVarint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * InvalidProtocolBufferException_MalformedVarint_m0111203A64A0D3700152460D8BC275B5E250E871 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F356AD89457A0E07F3806D7D150A40568358E35);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_0 = (InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m0DF1F7D9C630AD5477130D4A75288C0F891A3D9D(L_0, _stringLiteral6F356AD89457A0E07F3806D7D150A40568358E35, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * InvalidProtocolBufferException_InvalidTag_m2B39E4AEE6E6B4DE200ED9B10F0128F140ADAF88 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969102D1EB362C94277F4C9C936058AF4A09EA47);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_0 = (InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m0DF1F7D9C630AD5477130D4A75288C0F891A3D9D(L_0, _stringLiteral969102D1EB362C94277F4C9C936058AF4A09EA47, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidEndTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * InvalidProtocolBufferException_InvalidEndTag_m3019FB5E4424AE1770050580E97D51E77233A466 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77E95D09C5F112B22B85209F68C2D00F8C0455D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_0 = (InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m0DF1F7D9C630AD5477130D4A75288C0F891A3D9D(L_0, _stringLiteral77E95D09C5F112B22B85209F68C2D00F8C0455D4, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidWireType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * InvalidProtocolBufferException_InvalidWireType_mFA8E176C1FA6F7B9171535483897D5CC16292B9D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67875C89B7D74D98EB5F19AFA28A2F65638FD06B);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_0 = (InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m0DF1F7D9C630AD5477130D4A75288C0F891A3D9D(L_0, _stringLiteral67875C89B7D74D98EB5F19AFA28A2F65638FD06B, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::RecursionLimitExceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * InvalidProtocolBufferException_RecursionLimitExceeded_m8E9B79B416A929E07DAF9C0463CE9F8D268F25F7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32FC645E89078B86749D57C4CAC50B9D5BF192C0);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_0 = (InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m0DF1F7D9C630AD5477130D4A75288C0F891A3D9D(L_0, _stringLiteral32FC645E89078B86749D57C4CAC50B9D5BF192C0, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::SizeLimitExceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * InvalidProtocolBufferException_SizeLimitExceeded_m47053C4DD95FEC6CEA110E5CC766BFA9E681B738 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E9140A37888450FAF9B70A0C32C11FB471FFF6A);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_0 = (InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m0DF1F7D9C630AD5477130D4A75288C0F891A3D9D(L_0, _stringLiteral3E9140A37888450FAF9B70A0C32C11FB471FFF6A, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.ProtocolBuffers.ThrowHelper::ThrowIfNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIfNull_mB38F1A7437B7520460411B3DCA9A068E6BCE62CC (RuntimeObject * ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___name1;
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowIfNull_mB38F1A7437B7520460411B3DCA9A068E6BCE62CC_RuntimeMethod_var)));
	}

IL_000d:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.ThrowHelper::ThrowIfNull(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIfNull_m9A9CAEFB9454ACC5341F04F73FBDE9DC996F27A6 (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_mEF0800D4AF607E61714C92A76911B4780C4D0A29(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowIfNull_m9A9CAEFB9454ACC5341F04F73FBDE9DC996F27A6_RuntimeMethod_var)));
	}

IL_000c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.ProtocolBuffers.UninitializedMessageException::.ctor(Google.ProtocolBuffers.IMessageLite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UninitializedMessageException__ctor_m0967878F1633A4A3B293771477D894B51B13E4FB (UninitializedMessageException_t972153CF378C13CE55AED679E613EBFB65907E83 * __this, RuntimeObject* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC3CEC67214AC74EEA247DC50A8C840F0B2308B0);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___message0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralDC3CEC67214AC74EEA247DC50A8C840F0B2308B0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_2, /*hidden argument*/NULL);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_3, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_missingFields_17(L_3);
		return;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.UninitializedMessageException::AsInvalidProtocolBufferException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * UninitializedMessageException_AsInvalidProtocolBufferException_mF9487DD10975EE739737630493036D0D7757A663 (UninitializedMessageException_t972153CF378C13CE55AED679E613EBFB65907E83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, __this);
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_1 = (InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m0DF1F7D9C630AD5477130D4A75288C0F891A3D9D(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.ProtocolBuffers.WireFormat/WireType Google.ProtocolBuffers.WireFormat::GetTagWireType(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WireFormat_GetTagWireType_m82EBD4F60A8CBA9163BDB8D9CE3A9F544C016C98 (uint32_t ___tag0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___tag0;
		return (uint32_t)(((int32_t)((int32_t)L_0&(int32_t)7)));
	}
}
// System.Boolean Google.ProtocolBuffers.WireFormat::IsEndGroupTag(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WireFormat_IsEndGroupTag_mB577CA68ED4BEFC51C8E72F58E018D921140D929 (uint32_t ___tag0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___tag0;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)4))? 1 : 0);
	}
}
// System.Int32 Google.ProtocolBuffers.WireFormat::GetTagFieldNumber(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WireFormat_GetTagFieldNumber_mA7E7022959089660F404CB9C91D7D339DDC8DD8E (uint32_t ___tag0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___tag0;
		return ((int32_t)((int32_t)L_0>>(int32_t)3));
	}
}
// System.UInt32 Google.ProtocolBuffers.WireFormat::MakeTag(System.Int32,Google.ProtocolBuffers.WireFormat/WireType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WireFormat_MakeTag_mDFD42625C101D7558D42ADDD3279C4250A396480 (int32_t ___fieldNumber0, uint32_t ___wireType1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fieldNumber0;
		uint32_t L_1 = ___wireType1;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)3))|(int32_t)L_1));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.ProtocolBuffers.CodedOutputStream/OutOfSpaceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfSpaceException__ctor_m2A0D021AB94EF1A17862BC37D6781C71C97ED878 (OutOfSpaceException_tDF80BF94ABB3ECC88AE7B7C851596B3A820489B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA20877EDFA7D8BA34A319D9F0BAD242BE0558B29);
		s_Il2CppMethodInitialized = true;
	}
	{
		IOException__ctor_m208E01C02FF2C1D6C5AA661A5816C744804E1690(__this, _stringLiteralA20877EDFA7D8BA34A319D9F0BAD242BE0558B29, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
IL2CPP_EXTERN_C void ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3_marshal_pinvoke(const ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3& unmarshaled, ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get_msgType_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_msgType_0()))
		{
			marshaled.___msgType_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_msgType_0()));
			(marshaled.___msgType_0)->AddRef();
		}
		else
		{
			marshaled.___msgType_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_msgType_0());
		}
	}
	else
	{
		marshaled.___msgType_0 = NULL;
	}
	marshaled.___number_1 = unmarshaled.get_number_1();
}
IL2CPP_EXTERN_C void ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3_marshal_pinvoke_back(const ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3_marshaled_pinvoke& marshaled, ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___msgType_0 != NULL)
	{
		unmarshaled.set_msgType_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___msgType_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_msgType_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_msgType_0()), Il2CppIUnknown::IID, marshaled.___msgType_0);
		}
	}
	else
	{
		unmarshaled.set_msgType_0(NULL);
	}
	int32_t unmarshaled_number_temp_1 = 0;
	unmarshaled_number_temp_1 = marshaled.___number_1;
	unmarshaled.set_number_1(unmarshaled_number_temp_1);
}
// Conversion method for clean up from marshalling of: Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
IL2CPP_EXTERN_C void ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3_marshal_pinvoke_cleanup(ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3_marshaled_pinvoke& marshaled)
{
	if (marshaled.___msgType_0 != NULL)
	{
		(marshaled.___msgType_0)->Release();
		marshaled.___msgType_0 = NULL;
	}
}
// Conversion methods for marshalling of: Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
IL2CPP_EXTERN_C void ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3_marshal_com(const ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3& unmarshaled, ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3_marshaled_com& marshaled)
{
	if (unmarshaled.get_msgType_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_msgType_0()))
		{
			marshaled.___msgType_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_msgType_0()));
			(marshaled.___msgType_0)->AddRef();
		}
		else
		{
			marshaled.___msgType_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_msgType_0());
		}
	}
	else
	{
		marshaled.___msgType_0 = NULL;
	}
	marshaled.___number_1 = unmarshaled.get_number_1();
}
IL2CPP_EXTERN_C void ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3_marshal_com_back(const ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3_marshaled_com& marshaled, ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___msgType_0 != NULL)
	{
		unmarshaled.set_msgType_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___msgType_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_msgType_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_msgType_0()), Il2CppIUnknown::IID, marshaled.___msgType_0);
		}
	}
	else
	{
		unmarshaled.set_msgType_0(NULL);
	}
	int32_t unmarshaled_number_temp_1 = 0;
	unmarshaled_number_temp_1 = marshaled.___number_1;
	unmarshaled.set_number_1(unmarshaled_number_temp_1);
}
// Conversion method for clean up from marshalling of: Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
IL2CPP_EXTERN_C void ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3_marshal_com_cleanup(ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3_marshaled_com& marshaled)
{
	if (marshaled.___msgType_0 != NULL)
	{
		(marshaled.___msgType_0)->Release();
		marshaled.___msgType_0 = NULL;
	}
}
// System.Int32 Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExtensionIntPair_GetHashCode_m90F73BF2F669DA2371A4F4FBE722DEAFFC5AB87E (ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_msgType_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		int32_t L_2 = __this->get_number_1();
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)65535))), (int32_t)L_2));
	}
}
IL2CPP_EXTERN_C  int32_t ExtensionIntPair_GetHashCode_m90F73BF2F669DA2371A4F4FBE722DEAFFC5AB87E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3 * _thisAdjusted = reinterpret_cast<ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ExtensionIntPair_GetHashCode_m90F73BF2F669DA2371A4F4FBE722DEAFFC5AB87E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtensionIntPair_Equals_m6A7FC738499FFF1F3D1EC39426CCE680F675B8AB (ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = ExtensionIntPair_Equals_mFAE9605688D1000E2F201CF16F33ACA4E1B6FF79((ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3 *)__this, ((*(ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3 *)((ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3 *)UnBox(L_1, ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool ExtensionIntPair_Equals_m6A7FC738499FFF1F3D1EC39426CCE680F675B8AB_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3 * _thisAdjusted = reinterpret_cast<ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ExtensionIntPair_Equals_m6A7FC738499FFF1F3D1EC39426CCE680F675B8AB(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::Equals(Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtensionIntPair_Equals_mFAE9605688D1000E2F201CF16F33ACA4E1B6FF79 (ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3 * __this, ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3  ___other0, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = __this->get_msgType_0();
		RuntimeObject * L_1 = (&___other0)->get_msgType_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = __this->get_number_1();
		int32_t L_4 = (&___other0)->get_number_1();
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		return (bool)G_B3_0;
	}
}
IL2CPP_EXTERN_C  bool ExtensionIntPair_Equals_mFAE9605688D1000E2F201CF16F33ACA4E1B6FF79_AdjustorThunk (RuntimeObject * __this, ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3 * _thisAdjusted = reinterpret_cast<ExtensionIntPair_tA5842E055089DA9AFC5972B9DA0C7E7A6D9EA4A3 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ExtensionIntPair_Equals_mFAE9605688D1000E2F201CF16F33ACA4E1B6FF79(_thisAdjusted, ___other0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
