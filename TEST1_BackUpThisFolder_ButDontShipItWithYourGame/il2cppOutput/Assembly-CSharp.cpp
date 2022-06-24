#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,UnityEngine.GameObject>
struct Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,System.Object>
struct Dictionary_2_t2053158D0376C8BF1E4837AFD63E6DB5E46CB680;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.MeshId>
struct IEqualityComparer_1_t491CBF36A24B05E9D27E005C32F9DFAB28BCA898;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.MeshId,UnityEngine.GameObject>
struct KeyCollection_tD743756E200E147525BB39994E95094C2FDEB6D3;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_tEE09D0BD215A518344AF2985829C519B609B7B17;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystem>
struct List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4;
// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.MeshId,UnityEngine.GameObject>
struct ValueCollection_tD7FDC7E1F7001B13BD70D9B31C1D99F9FD1ECF0E;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.MeshId,UnityEngine.GameObject>[]
struct EntryU5BU5D_t87673139DC638A1E588B2490FC8475405D96900F;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.XR.MeshInfo[]
struct MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature[]
struct OpenXRFeatureU5BU5D_t1E8B328877C0D98F92ADE93D6F8C6536F92C3F3F;
// UnityEngine.XR.XRMeshSubsystem[]
struct XRMeshSubsystemU5BU5D_t53BBB317E9E4FD5903A2E0B8A1B8FC15182B1295;
// UnityEngine.XR.XRMeshSubsystemDescriptor[]
struct XRMeshSubsystemDescriptorU5BU5D_t3B992422B03C712E6A939E14D9CF3F3799D62E72;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.XR.OpenXR.Samples.MeshingFeature.FallingSphere
struct FallingSphere_tE12F80B78F3B25C609125CF5384A42AD3F5EF9EA;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3;
// UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature
struct InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F;
// UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptMessageHandler
struct InterceptMessageHandler_t1DF3F1A3719A60512C414F1E247D810ED8599FE4;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour
struct MeshingBehaviour_t109955F72D30C3D1F02C61F77289972F36947DE2;
// UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingTeapotFeature
struct MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143;
// UnityEngine.XR.OpenXR.OpenXRSettings
struct OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.String
struct String_t;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2;
// UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/OnMessageDelegate
struct OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9;
// UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/ReceiveMessageDelegate
struct ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B;
// UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour/<>c
struct U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEE09D0BD215A518344AF2985829C519B609B7B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshGenerationStatus_t1F91400BEB3E9E6B4DC12A43C85006812BD28EDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral45ABB9CCE315792527F1FB93BD11632791565DBD;
IL2CPP_EXTERN_C String_t* _stringLiteral5F2EE87779038CC92BFBB1DF34C03DEF305FB801;
IL2CPP_EXTERN_C String_t* _stringLiteral6694A5DE87718A7301C9D332796F1D8284057656;
IL2CPP_EXTERN_C String_t* _stringLiteral6A4A75F8AA5E0F61ACA8A64BF8C1612267A769EE;
IL2CPP_EXTERN_C String_t* _stringLiteral98C756BD55BDDC280B6C032C2E49B6D45D887F8C;
IL2CPP_EXTERN_C String_t* _stringLiteralA8CCA272FE14112D756F93769EECED88FA5AC79A;
IL2CPP_EXTERN_C String_t* _stringLiteralB1692839853852513A7A25A35F75CD821A35339C;
IL2CPP_EXTERN_C String_t* _stringLiteralC5B72789EFB9E0555C84C47E04FC5E67DCBB9A44;
IL2CPP_EXTERN_C String_t* _stringLiteralD7185F3BCA17ABA6AA2CF6A9C5404AB293CFFC48;
IL2CPP_EXTERN_C String_t* _stringLiteralF33CDB2C1E618C34248975FB6EB8FC1FC6256C81;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m3ACCE6031F6FF6C54F88DE9EF8AD788143E6C016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD5700C6F114DD67B63664D9FD62690E29520FEB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFF35FF8199520A91C28C7C4A6F912CADEFE83909_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m4A55A1B492681E3944838CD2008DB0DC4CE6C777_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_m21E4C15ED89B2D1A80F393D96CF4464B16E9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterceptCreateSessionFeature_OnMessage_m547374ECFC8D1C60E15B20E79E5594C693265636_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m277DBA8B46097B1BA355F0215F73E0DA16803756_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2D504F27EFCAFC96E2CC2541C7A144D920F76A77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC7DA166E8D82026036A1F31B4B32E0C1549A62FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mEC986C80443975BD0614D2D8580012A9C0B634B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRFeature_CreateSubsystem_TisXRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_mAB175555B5E53A082F353048FD7E6ABF6846F607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRFeature_DestroySubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m90715606D59F037609DDB43AEF21D087F3C25EBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRFeature_StartSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m0C067F6B64FF1332C06FCC302EB30FA6BC88F29C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRFeature_StopSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m94A9611521BB67BAACE92079BEB86CB5D8E64B86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRSettings_GetFeature_TisInterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F_mCA36190361158CB585814D7DC7E9DB5567FB73AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRSettings_GetFeature_TisMeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_mCB0851553933D9B0FE7ED440CF6F5761B9120FBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_mE10F479C333B2B73EFC960D8D6B917D3BD94B2DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CUpdateU3Eb__7_0_mD2B7D1DD8BF091248BC6B4734E36263EFBDC15FD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,UnityEngine.GameObject>
struct Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t87673139DC638A1E588B2490FC8475405D96900F* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tD743756E200E147525BB39994E95094C2FDEB6D3* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD7FDC7E1F7001B13BD70D9B31C1D99F9FD1ECF0E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_tEE09D0BD215A518344AF2985829C519B609B7B17  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tEE09D0BD215A518344AF2985829C519B609B7B17_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystem>
struct List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRMeshSubsystemU5BU5D_t53BBB317E9E4FD5903A2E0B8A1B8FC15182B1295* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRMeshSubsystemU5BU5D_t53BBB317E9E4FD5903A2E0B8A1B8FC15182B1295* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRMeshSubsystemDescriptorU5BU5D_t3B992422B03C712E6A939E14D9CF3F3799D62E72* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRMeshSubsystemDescriptorU5BU5D_t3B992422B03C712E6A939E14D9CF3F3799D62E72* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour/<>c
struct U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B  : public RuntimeObject
{
};

struct U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_StaticFields
{
	// UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour/<>c UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour/<>c::<>9
	U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B* ___U3CU3E9_0;
	// System.Action`1<UnityEngine.XR.MeshGenerationResult> UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour/<>c::<>9__7_0
	Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* ___U3CU3E9__7_0_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.XR.MeshId
struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC 
{
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId2
	uint64_t ___m_SubId2_2;
};

struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC_StaticFields
{
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshId::s_InvalidId
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___s_InvalidId_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3  : public RuntimeObject
{
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C 
{
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshGenerationResult::<MeshId>k__BackingField
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.Mesh UnityEngine.XR.MeshGenerationResult::<Mesh>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CMeshU3Ek__BackingField_1;
	// UnityEngine.MeshCollider UnityEngine.XR.MeshGenerationResult::<MeshCollider>k__BackingField
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___U3CMeshColliderU3Ek__BackingField_2;
	// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_3;
	// UnityEngine.XR.MeshVertexAttributes UnityEngine.XR.MeshGenerationResult::<Attributes>k__BackingField
	int32_t ___U3CAttributesU3Ek__BackingField_4;
	// System.UInt64 UnityEngine.XR.MeshGenerationResult::<Timestamp>k__BackingField
	uint64_t ___U3CTimestampU3Ek__BackingField_5;
	// UnityEngine.Vector3 UnityEngine.XR.MeshGenerationResult::<Position>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_6;
	// UnityEngine.Quaternion UnityEngine.XR.MeshGenerationResult::<Rotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_7;
	// UnityEngine.Vector3 UnityEngine.XR.MeshGenerationResult::<Scale>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshaled_pinvoke
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
	uint64_t ___U3CTimestampU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_6;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField_8;
};
// Native definition for COM marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshaled_com
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
	uint64_t ___U3CTimestampU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_6;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField_8;
};

// UnityEngine.XR.MeshInfo
struct MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA 
{
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshInfo::<MeshId>k__BackingField
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.XR.MeshChangeState UnityEngine.XR.MeshInfo::<ChangeState>k__BackingField
	int32_t ___U3CChangeStateU3Ek__BackingField_1;
	// System.Int32 UnityEngine.XR.MeshInfo::<PriorityHint>k__BackingField
	int32_t ___U3CPriorityHintU3Ek__BackingField_2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>
struct Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA ____current_3;
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::m_enabled
	bool ___m_enabled_4;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<failedInitialization>k__BackingField
	bool ___U3CfailedInitializationU3Ek__BackingField_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::nameUi
	String_t* ___nameUi_7;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::version
	String_t* ___version_8;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::featureIdInternal
	String_t* ___featureIdInternal_9;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::openxrExtensionStrings
	String_t* ___openxrExtensionStrings_10;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::company
	String_t* ___company_11;
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature::priority
	int32_t ___priority_12;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::required
	bool ___required_13;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::internalFieldsUpdated
	bool ___internalFieldsUpdated_14;
};

struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143_StaticFields
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<requiredFeatureFailed>k__BackingField
	bool ___U3CrequiredFeatureFailedU3Ek__BackingField_6;
};

// UnityEngine.XR.OpenXR.OpenXRSettings
struct OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.OpenXR.Features.OpenXRFeature[] UnityEngine.XR.OpenXR.OpenXRSettings::features
	OpenXRFeatureU5BU5D_t1E8B328877C0D98F92ADE93D6F8C6536F92C3F3F* ___features_4;
	// UnityEngine.XR.OpenXR.OpenXRSettings/RenderMode UnityEngine.XR.OpenXR.OpenXRSettings::m_renderMode
	int32_t ___m_renderMode_5;
	// UnityEngine.XR.OpenXR.OpenXRSettings/DepthSubmissionMode UnityEngine.XR.OpenXR.OpenXRSettings::m_depthSubmissionMode
	int32_t ___m_depthSubmissionMode_6;
};

struct OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55_StaticFields
{
	// UnityEngine.XR.OpenXR.OpenXRSettings UnityEngine.XR.OpenXR.OpenXRSettings::s_RuntimeInstance
	OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* ___s_RuntimeInstance_8;
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2  : public IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03
{
};

// UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/OnMessageDelegate
struct OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9  : public MulticastDelegate_t
{
};

// UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/ReceiveMessageDelegate
struct ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B  : public MulticastDelegate_t
{
};

// UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature
struct InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
	// System.String UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::message
	String_t* ___message_17;
	// System.String UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::<receivedMessage>k__BackingField
	String_t* ___U3CreceivedMessageU3Ek__BackingField_18;
};

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingTeapotFeature
struct MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
};

struct MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor> UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingTeapotFeature::s_MeshDescriptors
	List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22* ___s_MeshDescriptors_17;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.OpenXR.Samples.MeshingFeature.FallingSphere
struct FallingSphere_tE12F80B78F3B25C609125CF5384A42AD3F5EF9EA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 UnityEngine.XR.OpenXR.Samples.MeshingFeature.FallingSphere::starting
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___starting_4;
	// UnityEngine.Rigidbody UnityEngine.XR.OpenXR.Samples.MeshingFeature.FallingSphere::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_5;
};

// UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptMessageHandler
struct InterceptMessageHandler_t1DF3F1A3719A60512C414F1E247D810ED8599FE4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.TextMesh UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptMessageHandler::textMesh
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___textMesh_4;
};

// UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour
struct MeshingBehaviour_t109955F72D30C3D1F02C61F77289972F36947DE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour::emptyMeshPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___emptyMeshPrefab_4;
	// UnityEngine.TextMesh UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour::textMesh
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___textMesh_5;
	// UnityEngine.Transform UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_6;
	// UnityEngine.XR.XRMeshSubsystem UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour::s_MeshSubsystem
	XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* ___s_MeshSubsystem_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour::s_MeshInfos
	List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* ___s_MeshInfos_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,UnityEngine.GameObject> UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour::m_MeshIdToGo
	Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6* ___m_MeshIdToGo_9;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// TFeature UnityEngine.XR.OpenXR.OpenXRSettings::GetFeature<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenXRSettings_GetFeature_TisRuntimeObject_m02D495FEA638A31EB52305C2E1721CB19B84DEAC_gshared (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_m483A6D40AA7F54CA9B8E450BD763C2F4FB515A16_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___subsystems0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3 List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333_gshared (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7_gshared (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_gshared_inline (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m4E9F83459786172E9EBE2F35A3170A4BD5790547_gshared (Dictionary_2_t2053158D0376C8BF1E4837AFD63E6DB5E46CB680* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m8784E2833D9F115FD2B2BED6615426E8CD75EE9B_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mD714535AEFB8553A332B9223C69B8D0CDDAD2C68_gshared (Dictionary_2_t2053158D0376C8BF1E4837AFD63E6DB5E46CB680* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.MeshGenerationResult>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m62D287B08FD32117DDF0FA2BB669D66F788BF382_gshared (Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m240E78E45F4721C5A2AEB3B43F5550FAFDAAC7BE_gshared (Dictionary_2_t2053158D0376C8BF1E4837AFD63E6DB5E46CB680* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C_gshared (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23_gshared (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1E7D15D7285A8DAE5BCEF02B8592BCDDF8A73030_gshared (Dictionary_2_t2053158D0376C8BF1E4837AFD63E6DB5E46CB680* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m8962B65060EE47BA2A88FE24CDED2724A6F3C51B_gshared (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature_StartSubsystem_TisRuntimeObject_mD1B1CCB13C8EF031254DBE592A148C7A744F3724_gshared (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature_StopSubsystem_TisRuntimeObject_m1728B76D0581F2DB06F23933C72937B0824A7A73_gshared (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature_DestroySubsystem_TisRuntimeObject_m34F0E133C03B7EF23B5C1CA652929AF7753CD427_gshared (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.OpenXR.OpenXRSettings UnityEngine.XR.OpenXR.OpenXRSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* OpenXRSettings_get_Instance_m25767314F824892FDFCAFD23C0B39385BB67D92F (const RuntimeMethod* method) ;
// TFeature UnityEngine.XR.OpenXR.OpenXRSettings::GetFeature<UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingTeapotFeature>()
inline MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* OpenXRSettings_GetFeature_TisMeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_mCB0851553933D9B0FE7ED440CF6F5761B9120FBD (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* __this, const RuntimeMethod* method)
{
	return ((  MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* (*) (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55*, const RuntimeMethod*))OpenXRSettings_GetFeature_TisRuntimeObject_m02D495FEA638A31EB52305C2E1721CB19B84DEAC_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRFeature_get_enabled_m958523A02F396C1623F2C7D7292B2E96A26270CD (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystem>::.ctor()
inline void List_1__ctor_m2D504F27EFCAFC96E2CC2541C7A144D920F76A77 (List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.XRMeshSubsystem>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetInstances_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_mE10F479C333B2B73EFC960D8D6B917D3BD94B2DB (List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4* ___subsystems0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4*, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_m483A6D40AA7F54CA9B8E450BD763C2F4FB515A16_gshared)(___subsystems0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystem>::get_Count()
inline int32_t List_1_get_Count_mC7DA166E8D82026036A1F31B4B32E0C1549A62FD_inline (List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystem>::get_Item(System.Int32)
inline XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* List_1_get_Item_mEC986C80443975BD0614D2D8580012A9C0B634B3 (List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* (*) (List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.IntegratedSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8 (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRMeshSubsystem::TryGetMeshInfos(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystem_TryGetMeshInfos_m05F584066A873F286C16B99A929C4B3B9AB58FD2 (XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* __this, List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* ___meshInfosOut0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::GetEnumerator()
inline Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3 List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333 (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3 (*) (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17*, const RuntimeMethod*))List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::Dispose()
inline void Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7 (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3*, const RuntimeMethod*))Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::get_Current()
inline MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_inline (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method)
{
	return ((  MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA (*) (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3*, const RuntimeMethod*))Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_gshared_inline)(__this, method);
}
// UnityEngine.XR.MeshChangeState UnityEngine.XR.MeshInfo::get_ChangeState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshInfo_get_ChangeState_mF366492B8EF4A9FC8F677E01A6BA4C6C75D3BF68_inline (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.MeshId UnityEngine.XR.MeshInfo::get_MeshId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,UnityEngine.GameObject>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mD5700C6F114DD67B63664D9FD62690E29520FEB4 (Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___key0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6*, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**, const RuntimeMethod*))Dictionary_2_TryGetValue_m4E9F83459786172E9EBE2F35A3170A4BD5790547_gshared)(__this, ___key0, ___value1, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform,System.Boolean)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m8784E2833D9F115FD2B2BED6615426E8CD75EE9B_gshared)(___original0, ___parent1, ___worldPositionStays2, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,UnityEngine.GameObject>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m4A55A1B492681E3944838CD2008DB0DC4CE6C777 (Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___key0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6*, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_set_Item_mD714535AEFB8553A332B9223C69B8D0CDDAD2C68_gshared)(__this, ___key0, ___value1, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshCollider>()
inline MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* GameObject_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_m21E4C15ED89B2D1A80F393D96CF4464B16E9F1F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.MeshGenerationResult>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m62D287B08FD32117DDF0FA2BB669D66F788BF382 (Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m62D287B08FD32117DDF0FA2BB669D66F788BF382_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.XRMeshSubsystem::GenerateMeshAsync(UnityEngine.XR.MeshId,UnityEngine.Mesh,UnityEngine.MeshCollider,UnityEngine.XR.MeshVertexAttributes,System.Action`1<UnityEngine.XR.MeshGenerationResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystem_GenerateMeshAsync_m3DEA3C294695FD7C54D1186FF7DCE84A4BA1CFB7 (XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___meshId0, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh1, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___meshCollider2, int32_t ___attributes3, Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* ___onMeshGenerationComplete4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,UnityEngine.GameObject>::Remove(TKey)
inline bool Dictionary_2_Remove_m3ACCE6031F6FF6C54F88DE9EF8AD788143E6C016 (Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6*, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC, const RuntimeMethod*))Dictionary_2_Remove_m240E78E45F4721C5A2AEB3B43F5550FAFDAAC7BE_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::MoveNext()
inline bool Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3*, const RuntimeMethod*))Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::.ctor()
inline void List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23 (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17*, const RuntimeMethod*))List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_mFF35FF8199520A91C28C7C4A6F912CADEFE83909 (Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6*, const RuntimeMethod*))Dictionary_2__ctor_m1E7D15D7285A8DAE5BCEF02B8592BCDDF8A73030_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m726994FB513CD5C23A758B095B7F2050D7A88F00 (U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Status_m392754927B1E28DB2E6078A212F8FCC013AC10C0_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::CreateSubsystem<UnityEngine.XR.XRMeshSubsystemDescriptor,UnityEngine.XR.XRMeshSubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void OpenXRFeature_CreateSubsystem_TisXRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_mAB175555B5E53A082F353048FD7E6ABF6846F607 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22* ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143*, List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22*, String_t*, const RuntimeMethod*))OpenXRFeature_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m8962B65060EE47BA2A88FE24CDED2724A6F3C51B_gshared)(__this, ___descriptors0, ___id1, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::StartSubsystem<UnityEngine.XR.XRMeshSubsystem>()
inline void OpenXRFeature_StartSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m0C067F6B64FF1332C06FCC302EB30FA6BC88F29C (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method)
{
	((  void (*) (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143*, const RuntimeMethod*))OpenXRFeature_StartSubsystem_TisRuntimeObject_mD1B1CCB13C8EF031254DBE592A148C7A744F3724_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::StopSubsystem<UnityEngine.XR.XRMeshSubsystem>()
inline void OpenXRFeature_StopSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m94A9611521BB67BAACE92079BEB86CB5D8E64B86 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method)
{
	((  void (*) (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143*, const RuntimeMethod*))OpenXRFeature_StopSubsystem_TisRuntimeObject_m1728B76D0581F2DB06F23933C72937B0824A7A73_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::DestroySubsystem<UnityEngine.XR.XRMeshSubsystem>()
inline void OpenXRFeature_DestroySubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m90715606D59F037609DDB43AEF21D087F3C25EBB (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method)
{
	((  void (*) (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143*, const RuntimeMethod*))OpenXRFeature_DestroySubsystem_TisRuntimeObject_m34F0E133C03B7EF23B5C1CA652929AF7753CD427_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m277DBA8B46097B1BA355F0215F73E0DA16803756 (List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::OnMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_OnMessage_m547374ECFC8D1C60E15B20E79E5594C693265636 (String_t* ___message0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::intercept_xrCreateSession_xrGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InterceptCreateSessionFeature_intercept_xrCreateSession_xrGetInstanceProcAddr_mF57CC15ED99AFE6C5B07D566A58AD545FFA15FF5 (intptr_t ___func0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/ReceiveMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveMessageDelegate__ctor_m152A9C050292D523407A94CA7A708C9C89C00E06 (ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::Internal_SetCallback(UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/ReceiveMessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_Internal_SetCallback_m8292B0BCB519D91361A3E6F13AAE42AA44C6CCAF (ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* ___callback0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::Internal_SetMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_Internal_SetMessage_m07432894D8B3B9F523AE6D494214A340047966C2 (String_t* ___printString0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// TFeature UnityEngine.XR.OpenXR.OpenXRSettings::GetFeature<UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature>()
inline InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* OpenXRSettings_GetFeature_TisInterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F_mCA36190361158CB585814D7DC7E9DB5567FB73AB (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* __this, const RuntimeMethod* method)
{
	return ((  InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* (*) (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55*, const RuntimeMethod*))OpenXRSettings_GetFeature_TisRuntimeObject_m02D495FEA638A31EB52305C2E1721CB19B84DEAC_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::set_receivedMessage(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_set_receivedMessage_m06924CA717DBCA3DCFCCC136AF8F1C86CE98756D_inline (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::get_receivedMessage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InterceptCreateSessionFeature_get_receivedMessage_m3783793E40B12DC8AE9770D6DBB7F981D36C92D6_inline (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_color_mF08F30C3CD797C16289225B567724B9F07DC641E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InterceptFeaturePlugin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL script_intercept_xrCreateSession_xrGetInstanceProcAddr(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InterceptFeaturePlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL script_set_message(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InterceptFeaturePlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL script_set_callback(Il2CppMethodPointer);
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
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.FallingSphere::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallingSphere_Start_mA5F656B736FA5AC265D51582444E4682CB83FFA2 (FallingSphere_tE12F80B78F3B25C609125CF5384A42AD3F5EF9EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_5), (void*)L_0);
		// starting = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		__this->___starting_4 = L_2;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.FallingSphere::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallingSphere_FixedUpdate_m3A15CC58648EAD2033911C4D517E1D4A4567A947 (FallingSphere_tE12F80B78F3B25C609125CF5384A42AD3F5EF9EA* __this, const RuntimeMethod* method) 
{
	{
		// if (transform.position.y < -10)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		if ((!(((float)L_2) < ((float)(-10.0f)))))
		{
			goto IL_0048;
		}
	}
	{
		// rb.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rb_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_3);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_3, L_4, NULL);
		// rb.angularVelocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___rb_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_5);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_5, L_6, NULL);
		// rb.MovePosition(starting);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___rb_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___starting_4;
		NullCheck(L_7);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_7, L_8, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.FallingSphere::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallingSphere__ctor_mF045BE8913869389EAB2B517053BD0A91A010722 (FallingSphere_tE12F80B78F3B25C609125CF5384A42AD3F5EF9EA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshingBehaviour_Start_m0FD2D4DA344B65CE5140E4BEA7E12D957E41F897 (MeshingBehaviour_t109955F72D30C3D1F02C61F77289972F36947DE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2D504F27EFCAFC96E2CC2541C7A144D920F76A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC7DA166E8D82026036A1F31B4B32E0C1549A62FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEC986C80443975BD0614D2D8580012A9C0B634B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRSettings_GetFeature_TisMeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_mCB0851553933D9B0FE7ED440CF6F5761B9120FBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_mE10F479C333B2B73EFC960D8D6B917D3BD94B2DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A4A75F8AA5E0F61ACA8A64BF8C1612267A769EE);
		s_Il2CppMethodInitialized = true;
	}
	MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* V_0 = NULL;
	List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4* V_1 = NULL;
	{
		// var feature = OpenXRSettings.Instance.GetFeature<MeshingTeapotFeature>();
		OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* L_0;
		L_0 = OpenXRSettings_get_Instance_m25767314F824892FDFCAFD23C0B39385BB67D92F(NULL);
		NullCheck(L_0);
		MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* L_1;
		L_1 = OpenXRSettings_GetFeature_TisMeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_mCB0851553933D9B0FE7ED440CF6F5761B9120FBD(L_0, OpenXRSettings_GetFeature_TisMeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_mCB0851553933D9B0FE7ED440CF6F5761B9120FBD_RuntimeMethod_var);
		V_0 = L_1;
		// if (null == feature || feature.enabled == false)
		MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_2, NULL);
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = OpenXRFeature_get_enabled_m958523A02F396C1623F2C7D7292B2E96A26270CD(L_4, NULL);
		if (L_5)
		{
			goto IL_0024;
		}
	}

IL_001c:
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0024:
	{
		// var meshSubsystems = new List<XRMeshSubsystem>();
		List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4* L_6 = (List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4*)il2cpp_codegen_object_new(List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m2D504F27EFCAFC96E2CC2541C7A144D920F76A77(L_6, List_1__ctor_m2D504F27EFCAFC96E2CC2541C7A144D920F76A77_RuntimeMethod_var);
		V_1 = L_6;
		// SubsystemManager.GetInstances(meshSubsystems);
		List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_mE10F479C333B2B73EFC960D8D6B917D3BD94B2DB(L_7, SubsystemManager_GetInstances_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_mE10F479C333B2B73EFC960D8D6B917D3BD94B2DB_RuntimeMethod_var);
		// if (meshSubsystems.Count == 1)
		List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mC7DA166E8D82026036A1F31B4B32E0C1549A62FD_inline(L_8, List_1_get_Count_mC7DA166E8D82026036A1F31B4B32E0C1549A62FD_RuntimeMethod_var);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		// s_MeshSubsystem = meshSubsystems[0];
		List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4* L_10 = V_1;
		NullCheck(L_10);
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_11;
		L_11 = List_1_get_Item_mEC986C80443975BD0614D2D8580012A9C0B634B3(L_10, 0, List_1_get_Item_mEC986C80443975BD0614D2D8580012A9C0B634B3_RuntimeMethod_var);
		__this->___s_MeshSubsystem_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___s_MeshSubsystem_7), (void*)L_11);
		// textMesh.gameObject.SetActive(false);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_12 = __this->___textMesh_5;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		return;
	}

IL_0058:
	{
		// textMesh.text = "Failed to initialize MeshSubsystem.";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_14 = __this->___textMesh_5;
		NullCheck(L_14);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_14, _stringLiteral6A4A75F8AA5E0F61ACA8A64BF8C1612267A769EE, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshingBehaviour_Update_m65D2787A869C31C638CA19643B72C0EC151739AC (MeshingBehaviour_t109955F72D30C3D1F02C61F77289972F36947DE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3ACCE6031F6FF6C54F88DE9EF8AD788143E6C016_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD5700C6F114DD67B63664D9FD62690E29520FEB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m4A55A1B492681E3944838CD2008DB0DC4CE6C777_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_m21E4C15ED89B2D1A80F393D96CF4464B16E9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CUpdateU3Eb__7_0_mD2B7D1DD8BF091248BC6B4734E36263EFBDC15FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_3 = NULL;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* V_4 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	int32_t V_6 = 0;
	Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* G_B11_2 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B11_3 = NULL;
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC G_B11_4;
	memset((&G_B11_4), 0, sizeof(G_B11_4));
	XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* G_B11_5 = NULL;
	Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* G_B10_2 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B10_3 = NULL;
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC G_B10_4;
	memset((&G_B10_4), 0, sizeof(G_B10_4));
	XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* G_B10_5 = NULL;
	{
		// if (s_MeshSubsystem.running && s_MeshSubsystem.TryGetMeshInfos(s_MeshInfos))
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_0 = __this->___s_MeshSubsystem_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8(L_0, NULL);
		if (!L_1)
		{
			goto IL_012d;
		}
	}
	{
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_2 = __this->___s_MeshSubsystem_7;
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_3 = __this->___s_MeshInfos_8;
		NullCheck(L_2);
		bool L_4;
		L_4 = XRMeshSubsystem_TryGetMeshInfos_m05F584066A873F286C16B99A929C4B3B9AB58FD2(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_012d;
		}
	}
	{
		// foreach (var meshInfo in s_MeshInfos)
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_5 = __this->___s_MeshInfos_8;
		NullCheck(L_5);
		Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3 L_6;
		L_6 = List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333(L_5, List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_011f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7((&V_0), Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0111_1;
			}

IL_0037_1:
			{
				// foreach (var meshInfo in s_MeshInfos)
				MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA L_7;
				L_7 = Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_inline((&V_0), Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_RuntimeMethod_var);
				V_1 = L_7;
				// switch (meshInfo.ChangeState)
				int32_t L_8;
				L_8 = MeshInfo_get_ChangeState_mF366492B8EF4A9FC8F677E01A6BA4C6C75D3BF68_inline((&V_1), NULL);
				V_6 = L_8;
				int32_t L_9 = V_6;
				if ((!(((uint32_t)L_9) > ((uint32_t)1))))
				{
					goto IL_005a_1;
				}
			}
			{
				int32_t L_10 = V_6;
				if ((((int32_t)L_10) == ((int32_t)2)))
				{
					goto IL_00e1_1;
				}
			}
			{
				goto IL_0111_1;
			}

IL_005a_1:
			{
				// if (!m_MeshIdToGo.TryGetValue(meshInfo.MeshId, out var go))
				Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6* L_11 = __this->___m_MeshIdToGo_9;
				MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_12;
				L_12 = MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline((&V_1), NULL);
				NullCheck(L_11);
				bool L_13;
				L_13 = Dictionary_2_TryGetValue_mD5700C6F114DD67B63664D9FD62690E29520FEB4(L_11, L_12, (&V_2), Dictionary_2_TryGetValue_mD5700C6F114DD67B63664D9FD62690E29520FEB4_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0096_1;
				}
			}
			{
				// go = Instantiate(emptyMeshPrefab, target, false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___emptyMeshPrefab_4;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___target_6;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
				L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5(L_14, L_15, (bool)0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5_RuntimeMethod_var);
				V_2 = L_16;
				// m_MeshIdToGo[meshInfo.MeshId] = go;
				Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6* L_17 = __this->___m_MeshIdToGo_9;
				MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_18;
				L_18 = MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline((&V_1), NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_2;
				NullCheck(L_17);
				Dictionary_2_set_Item_m4A55A1B492681E3944838CD2008DB0DC4CE6C777(L_17, L_18, L_19, Dictionary_2_set_Item_m4A55A1B492681E3944838CD2008DB0DC4CE6C777_RuntimeMethod_var);
			}

IL_0096_1:
			{
				// var mesh = go.GetComponent<MeshFilter>().mesh;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_2;
				NullCheck(L_20);
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_21;
				L_21 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_20, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
				NullCheck(L_21);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_22;
				L_22 = MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C(L_21, NULL);
				V_3 = L_22;
				// var col = go.GetComponent<MeshCollider>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_2;
				NullCheck(L_23);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_24;
				L_24 = GameObject_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_m21E4C15ED89B2D1A80F393D96CF4464B16E9F1F9(L_23, GameObject_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_m21E4C15ED89B2D1A80F393D96CF4464B16E9F1F9_RuntimeMethod_var);
				V_4 = L_24;
				// s_MeshSubsystem.GenerateMeshAsync(meshInfo.MeshId, mesh, col, MeshVertexAttributes.Normals | MeshVertexAttributes.UVs,
				//     result =>
				//     {
				//         Debug.Log("Mesh generated: " + result.Status);
				//     });
				XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_25 = __this->___s_MeshSubsystem_7;
				MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_26;
				L_26 = MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline((&V_1), NULL);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_27 = V_3;
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_28 = V_4;
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var);
				Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* L_29 = ((U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1;
				Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* L_30 = L_29;
				G_B10_0 = L_30;
				G_B10_1 = 5;
				G_B10_2 = L_28;
				G_B10_3 = L_27;
				G_B10_4 = L_26;
				G_B10_5 = L_25;
				if (L_30)
				{
					G_B11_0 = L_30;
					G_B11_1 = 5;
					G_B11_2 = L_28;
					G_B11_3 = L_27;
					G_B11_4 = L_26;
					G_B11_5 = L_25;
					goto IL_00da_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var);
				U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B* L_31 = ((U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* L_32 = (Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8*)il2cpp_codegen_object_new(Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8_il2cpp_TypeInfo_var);
				NullCheck(L_32);
				Action_1__ctor_m62D287B08FD32117DDF0FA2BB669D66F788BF382(L_32, L_31, (intptr_t)((void*)U3CU3Ec_U3CUpdateU3Eb__7_0_mD2B7D1DD8BF091248BC6B4734E36263EFBDC15FD_RuntimeMethod_var), NULL);
				Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* L_33 = L_32;
				((U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1 = L_33;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1), (void*)L_33);
				G_B11_0 = L_33;
				G_B11_1 = G_B10_1;
				G_B11_2 = G_B10_2;
				G_B11_3 = G_B10_3;
				G_B11_4 = G_B10_4;
				G_B11_5 = G_B10_5;
			}

IL_00da_1:
			{
				NullCheck(G_B11_5);
				XRMeshSubsystem_GenerateMeshAsync_m3DEA3C294695FD7C54D1186FF7DCE84A4BA1CFB7(G_B11_5, G_B11_4, G_B11_3, G_B11_2, G_B11_1, G_B11_0, NULL);
				// break;
				goto IL_0111_1;
			}

IL_00e1_1:
			{
				// if (m_MeshIdToGo.TryGetValue(meshInfo.MeshId, out var meshGo))
				Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6* L_34 = __this->___m_MeshIdToGo_9;
				MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_35;
				L_35 = MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline((&V_1), NULL);
				NullCheck(L_34);
				bool L_36;
				L_36 = Dictionary_2_TryGetValue_mD5700C6F114DD67B63664D9FD62690E29520FEB4(L_34, L_35, (&V_5), Dictionary_2_TryGetValue_mD5700C6F114DD67B63664D9FD62690E29520FEB4_RuntimeMethod_var);
				if (!L_36)
				{
					goto IL_0111_1;
				}
			}
			{
				// Destroy(meshGo);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = V_5;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_37, NULL);
				// m_MeshIdToGo.Remove(meshInfo.MeshId);
				Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6* L_38 = __this->___m_MeshIdToGo_9;
				MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_39;
				L_39 = MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline((&V_1), NULL);
				NullCheck(L_38);
				bool L_40;
				L_40 = Dictionary_2_Remove_m3ACCE6031F6FF6C54F88DE9EF8AD788143E6C016(L_38, L_39, Dictionary_2_Remove_m3ACCE6031F6FF6C54F88DE9EF8AD788143E6C016_RuntimeMethod_var);
			}

IL_0111_1:
			{
				// foreach (var meshInfo in s_MeshInfos)
				bool L_41;
				L_41 = Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C((&V_0), Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_0037_1;
				}
			}
			{
				goto IL_012d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_012d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshingBehaviour__ctor_mAAC064E80F89337602B32FEF8304AD3516E542AA (MeshingBehaviour_t109955F72D30C3D1F02C61F77289972F36947DE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mFF35FF8199520A91C28C7C4A6F912CADEFE83909_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEE09D0BD215A518344AF2985829C519B609B7B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<MeshInfo> s_MeshInfos = new List<MeshInfo>();
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_0 = (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17*)il2cpp_codegen_object_new(List_1_tEE09D0BD215A518344AF2985829C519B609B7B17_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23(L_0, List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23_RuntimeMethod_var);
		__this->___s_MeshInfos_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___s_MeshInfos_8), (void*)L_0);
		// private Dictionary<MeshId, GameObject> m_MeshIdToGo = new Dictionary<MeshId, GameObject>();
		Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6* L_1 = (Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6*)il2cpp_codegen_object_new(Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mFF35FF8199520A91C28C7C4A6F912CADEFE83909(L_1, Dictionary_2__ctor_mFF35FF8199520A91C28C7C4A6F912CADEFE83909_RuntimeMethod_var);
		__this->___m_MeshIdToGo_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MeshIdToGo_9), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6DBE0861E2B6921C47097EEF489CE4E6A81CD65B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B* L_0 = (U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B*)il2cpp_codegen_object_new(U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m726994FB513CD5C23A758B095B7F2050D7A88F00(L_0, NULL);
		((U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m726994FB513CD5C23A758B095B7F2050D7A88F00 (U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour/<>c::<Update>b__7_0(UnityEngine.XR.MeshGenerationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CUpdateU3Eb__7_0_mD2B7D1DD8BF091248BC6B4734E36263EFBDC15FD (U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B* __this, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshGenerationStatus_t1F91400BEB3E9E6B4DC12A43C85006812BD28EDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7185F3BCA17ABA6AA2CF6A9C5404AB293CFFC48);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.Log("Mesh generated: " + result.Status);
		int32_t L_0;
		L_0 = MeshGenerationResult_get_Status_m392754927B1E28DB2E6078A212F8FCC013AC10C0_inline((&___result0), NULL);
		V_0 = L_0;
		Il2CppFakeBox<int32_t> L_1(MeshGenerationStatus_t1F91400BEB3E9E6B4DC12A43C85006812BD28EDE_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralD7185F3BCA17ABA6AA2CF6A9C5404AB293CFFC48, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// });
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
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingTeapotFeature::OnSubsystemCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshingTeapotFeature_OnSubsystemCreate_m829E4DB978C5C6CA1E12C31FE355F5ED7E4132B0 (MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFeature_CreateSubsystem_TisXRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_mAB175555B5E53A082F353048FD7E6ABF6846F607_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45ABB9CCE315792527F1FB93BD11632791565DBD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreateSubsystem<XRMeshSubsystemDescriptor, XRMeshSubsystem>(s_MeshDescriptors, "Sample Meshing");
		il2cpp_codegen_runtime_class_init_inline(MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_il2cpp_TypeInfo_var);
		List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22* L_0 = ((MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_StaticFields*)il2cpp_codegen_static_fields_for(MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_il2cpp_TypeInfo_var))->___s_MeshDescriptors_17;
		OpenXRFeature_CreateSubsystem_TisXRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_mAB175555B5E53A082F353048FD7E6ABF6846F607(__this, L_0, _stringLiteral45ABB9CCE315792527F1FB93BD11632791565DBD, OpenXRFeature_CreateSubsystem_TisXRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_mAB175555B5E53A082F353048FD7E6ABF6846F607_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingTeapotFeature::OnSubsystemStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshingTeapotFeature_OnSubsystemStart_m781F9E63F36D607B8B505B7101497FA62CD8FB8D (MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFeature_StartSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m0C067F6B64FF1332C06FCC302EB30FA6BC88F29C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartSubsystem<XRMeshSubsystem>();
		OpenXRFeature_StartSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m0C067F6B64FF1332C06FCC302EB30FA6BC88F29C(__this, OpenXRFeature_StartSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m0C067F6B64FF1332C06FCC302EB30FA6BC88F29C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingTeapotFeature::OnSubsystemStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshingTeapotFeature_OnSubsystemStop_mF4964F832C2E3E45335C024632FD7237C24E3639 (MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFeature_StopSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m94A9611521BB67BAACE92079BEB86CB5D8E64B86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopSubsystem<XRMeshSubsystem>();
		OpenXRFeature_StopSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m94A9611521BB67BAACE92079BEB86CB5D8E64B86(__this, OpenXRFeature_StopSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m94A9611521BB67BAACE92079BEB86CB5D8E64B86_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingTeapotFeature::OnSubsystemDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshingTeapotFeature_OnSubsystemDestroy_m72B93C7FE5846BAEAFF000426012519A6D582C16 (MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFeature_DestroySubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m90715606D59F037609DDB43AEF21D087F3C25EBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DestroySubsystem<XRMeshSubsystem>();
		OpenXRFeature_DestroySubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m90715606D59F037609DDB43AEF21D087F3C25EBB(__this, OpenXRFeature_DestroySubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m90715606D59F037609DDB43AEF21D087F3C25EBB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingTeapotFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshingTeapotFeature__ctor_mF9443C25EBF36C2E2B75A0EC646AE3D6A1F951C4 (MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* __this, const RuntimeMethod* method) 
{
	{
		OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingTeapotFeature::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshingTeapotFeature__cctor_mB024A89CC542750F1FAE290BE037B939093A71B8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m277DBA8B46097B1BA355F0215F73E0DA16803756_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<XRMeshSubsystemDescriptor> s_MeshDescriptors =
		//     new List<XRMeshSubsystemDescriptor>();
		List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22* L_0 = (List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22*)il2cpp_codegen_object_new(List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m277DBA8B46097B1BA355F0215F73E0DA16803756(L_0, List_1__ctor_m277DBA8B46097B1BA355F0215F73E0DA16803756_RuntimeMethod_var);
		((MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_StaticFields*)il2cpp_codegen_static_fields_for(MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_il2cpp_TypeInfo_var))->___s_MeshDescriptors_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_StaticFields*)il2cpp_codegen_static_fields_for(MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_il2cpp_TypeInfo_var))->___s_MeshDescriptors_17), (void*)L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InterceptCreateSessionFeature_OnMessage_m547374ECFC8D1C60E15B20E79E5594C693265636(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	InterceptCreateSessionFeature_OnMessage_m547374ECFC8D1C60E15B20E79E5594C693265636(____message0_unmarshaled, NULL);

}
// System.String UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::get_receivedMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InterceptCreateSessionFeature_get_receivedMessage_m3783793E40B12DC8AE9770D6DBB7F981D36C92D6 (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, const RuntimeMethod* method) 
{
	{
		// public string receivedMessage { get; private set; }
		String_t* L_0 = __this->___U3CreceivedMessageU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::set_receivedMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_set_receivedMessage_m06924CA717DBCA3DCFCCC136AF8F1C86CE98756D (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string receivedMessage { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CreceivedMessageU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreceivedMessageU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
// System.IntPtr UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::HookGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InterceptCreateSessionFeature_HookGetInstanceProcAddr_m8E62A8EF76425D5CBC6EF2086C66402653FC9C0A (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, intptr_t ___func0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF33CDB2C1E618C34248975FB6EB8FC1FC6256C81);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("EXT: registering our own xrGetInstanceProcAddr");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralF33CDB2C1E618C34248975FB6EB8FC1FC6256C81, NULL);
		// return intercept_xrCreateSession_xrGetInstanceProcAddr(func);
		intptr_t L_0 = ___func0;
		intptr_t L_1;
		L_1 = InterceptCreateSessionFeature_intercept_xrCreateSession_xrGetInstanceProcAddr_mF57CC15ED99AFE6C5B07D566A58AD545FFA15FF5(L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::OnInstanceCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterceptCreateSessionFeature_OnInstanceCreate_mDB9D5F1E18BAA436FEF1C4433D779A8A961A8E21 (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, uint64_t ___xrInstance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterceptCreateSessionFeature_OnMessage_m547374ECFC8D1C60E15B20E79E5594C693265636_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6694A5DE87718A7301C9D332796F1D8284057656);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Internal_SetCallback(OnMessage);
		ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* L_0 = (ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B*)il2cpp_codegen_object_new(ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ReceiveMessageDelegate__ctor_m152A9C050292D523407A94CA7A708C9C89C00E06(L_0, NULL, (intptr_t)((void*)InterceptCreateSessionFeature_OnMessage_m547374ECFC8D1C60E15B20E79E5594C693265636_RuntimeMethod_var), NULL);
		InterceptCreateSessionFeature_Internal_SetCallback_m8292B0BCB519D91361A3E6F13AAE42AA44C6CCAF(L_0, NULL);
		// Internal_SetMessage(message);
		String_t* L_1 = __this->___message_17;
		InterceptCreateSessionFeature_Internal_SetMessage_m07432894D8B3B9F523AE6D494214A340047966C2(L_1, NULL);
		// Debug.Log($"EXT: Got xrInstance: {xrInstance}");
		uint64_t L_2 = ___xrInstance0;
		uint64_t L_3 = L_2;
		RuntimeObject* L_4 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral6694A5DE87718A7301C9D332796F1D8284057656, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::OnMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_OnMessage_m547374ECFC8D1C60E15B20E79E5594C693265636 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRSettings_GetFeature_TisInterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F_mCA36190361158CB585814D7DC7E9DB5567FB73AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* V_0 = NULL;
	{
		// if (message == null)
		String_t* L_0 = ___message0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// Debug.Log(message);
		String_t* L_1 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// var feature = OpenXRSettings.Instance.GetFeature<InterceptCreateSessionFeature>();
		OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* L_2;
		L_2 = OpenXRSettings_get_Instance_m25767314F824892FDFCAFD23C0B39385BB67D92F(NULL);
		NullCheck(L_2);
		InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* L_3;
		L_3 = OpenXRSettings_GetFeature_TisInterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F_mCA36190361158CB585814D7DC7E9DB5567FB73AB(L_2, OpenXRSettings_GetFeature_TisInterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F_mCA36190361158CB585814D7DC7E9DB5567FB73AB_RuntimeMethod_var);
		V_0 = L_3;
		// if (null == feature)
		InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_4, NULL);
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		// return;
		return;
	}

IL_001f:
	{
		// feature.receivedMessage = message;
		InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* L_6 = V_0;
		String_t* L_7 = ___message0;
		NullCheck(L_6);
		InterceptCreateSessionFeature_set_receivedMessage_m06924CA717DBCA3DCFCCC136AF8F1C86CE98756D_inline(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::OnSessionCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_OnSessionCreate_mDACF4FF80A5496A2D82814AFA71F799E3C437D56 (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, uint64_t ___xrSession0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F2EE87779038CC92BFBB1DF34C03DEF305FB801);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"EXT: Got xrSession: {xrSession}");
		uint64_t L_0 = ___xrSession0;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral5F2EE87779038CC92BFBB1DF34C03DEF305FB801, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::OnSessionBegin(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_OnSessionBegin_m15CD5550E062FBEC79260F9228CFC77FC07856CB (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, uint64_t ___xrSession0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98C756BD55BDDC280B6C032C2E49B6D45D887F8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"EXT: xrBeginSession: {xrSession}");
		uint64_t L_0 = ___xrSession0;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral98C756BD55BDDC280B6C032C2E49B6D45D887F8C, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::OnSessionEnd(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_OnSessionEnd_m7CB13DAC61C6312563F892F8FD8C0CF6A687A95A (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, uint64_t ___xrSession0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5B72789EFB9E0555C84C47E04FC5E67DCBB9A44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"EXT: about to xrEndSession: {xrSession}");
		uint64_t L_0 = ___xrSession0;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralC5B72789EFB9E0555C84C47E04FC5E67DCBB9A44, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// }
		return;
	}
}
// System.IntPtr UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::intercept_xrCreateSession_xrGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InterceptCreateSessionFeature_intercept_xrCreateSession_xrGetInstanceProcAddr_mF57CC15ED99AFE6C5B07D566A58AD545FFA15FF5 (intptr_t ___func0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InterceptFeaturePlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InterceptFeaturePlugin"), "script_intercept_xrCreateSession_xrGetInstanceProcAddr", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InterceptFeaturePlugin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(script_intercept_xrCreateSession_xrGetInstanceProcAddr)(___func0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___func0);
	#endif

	return returnValue;
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::Internal_SetMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_Internal_SetMessage_m07432894D8B3B9F523AE6D494214A340047966C2 (String_t* ___printString0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InterceptFeaturePlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InterceptFeaturePlugin"), "script_set_message", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___printString0' to native representation
	char* ____printString0_marshaled = NULL;
	____printString0_marshaled = il2cpp_codegen_marshal_string(___printString0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InterceptFeaturePlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(script_set_message)(____printString0_marshaled);
	#else
	il2cppPInvokeFunc(____printString0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___printString0' native representation
	il2cpp_codegen_marshal_free(____printString0_marshaled);
	____printString0_marshaled = NULL;

}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::Internal_SetCallback(UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/ReceiveMessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_Internal_SetCallback_m8292B0BCB519D91361A3E6F13AAE42AA44C6CCAF (ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* ___callback0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InterceptFeaturePlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InterceptFeaturePlugin"), "script_set_callback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InterceptFeaturePlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(script_set_callback)(____callback0_marshaled);
	#else
	il2cppPInvokeFunc(____callback0_marshaled);
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature__ctor_mD0FAEE0D99BDF012EE612DEDA4407BEA51D1E40B (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1692839853852513A7A25A35F75CD821A35339C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string message = "Hello from C#!";
		__this->___message_17 = _stringLiteralB1692839853852513A7A25A35F75CD821A35339C;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_17), (void*)_stringLiteralB1692839853852513A7A25A35F75CD821A35339C);
		OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852(__this, NULL);
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
void OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0_Multicast(OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* __this, String_t* ___message0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* currentDelegate = reinterpret_cast<OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0_OpenInst(OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* __this, String_t* ___message0, const RuntimeMethod* method)
{
	NullCheck(___message0);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0_OpenStatic(OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0_OpenStaticInvoker(OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0);
}
void OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0_ClosedStaticInvoker(OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9 (OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/OnMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageDelegate__ctor_m801B609CB0434789C86EAD1684D20BF61DE06498 (OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0_Multicast;
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/OnMessageDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0 (OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/OnMessageDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnMessageDelegate_BeginInvoke_m28732DC47EBF67DA6238B054994108A78625BF49 (OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* __this, String_t* ___message0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/OnMessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageDelegate_EndInvoke_m652C2BA612DB540A590E2356FF221E2BB80DCDFE (OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064_Multicast(ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, String_t* ___message0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* currentDelegate = reinterpret_cast<ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064_OpenInst(ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, String_t* ___message0, const RuntimeMethod* method)
{
	NullCheck(___message0);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064_OpenStatic(ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064_OpenStaticInvoker(ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0);
}
void ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064_ClosedStaticInvoker(ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B (ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/ReceiveMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveMessageDelegate__ctor_m152A9C050292D523407A94CA7A708C9C89C00E06 (ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064_Multicast;
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/ReceiveMessageDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064 (ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/ReceiveMessageDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReceiveMessageDelegate_BeginInvoke_m70F1F6CA07C4219A74CBBE7C0EBD6777D600230F (ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, String_t* ___message0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/ReceiveMessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveMessageDelegate_EndInvoke_m5F92BB28F37C771DDBE557852F74F8E1312EE9F2 (ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptMessageHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptMessageHandler_Start_m9DCC386E18B0022AED0CCF7659795C6CEAAE7ECD (InterceptMessageHandler_t1DF3F1A3719A60512C414F1E247D810ED8599FE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRSettings_GetFeature_TisInterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F_mCA36190361158CB585814D7DC7E9DB5567FB73AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8CCA272FE14112D756F93769EECED88FA5AC79A);
		s_Il2CppMethodInitialized = true;
	}
	InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* V_0 = NULL;
	{
		// var feature = OpenXRSettings.Instance.GetFeature<InterceptCreateSessionFeature>();
		OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* L_0;
		L_0 = OpenXRSettings_get_Instance_m25767314F824892FDFCAFD23C0B39385BB67D92F(NULL);
		NullCheck(L_0);
		InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* L_1;
		L_1 = OpenXRSettings_GetFeature_TisInterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F_mCA36190361158CB585814D7DC7E9DB5567FB73AB(L_0, OpenXRSettings_GetFeature_TisInterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F_mCA36190361158CB585814D7DC7E9DB5567FB73AB_RuntimeMethod_var);
		V_0 = L_1;
		// if (feature == null || !feature.enabled)
		InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = OpenXRFeature_get_enabled_m958523A02F396C1623F2C7D7292B2E96A26270CD(L_4, NULL);
		if (L_5)
		{
			goto IL_002d;
		}
	}

IL_001c:
	{
		// textMesh.text = "InterceptCreateSession feature not enabled";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_6 = __this->___textMesh_4;
		NullCheck(L_6);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_6, _stringLiteralA8CCA272FE14112D756F93769EECED88FA5AC79A, NULL);
		return;
	}

IL_002d:
	{
		// textMesh.text = feature.receivedMessage;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_7 = __this->___textMesh_4;
		InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = InterceptCreateSessionFeature_get_receivedMessage_m3783793E40B12DC8AE9770D6DBB7F981D36C92D6_inline(L_8, NULL);
		NullCheck(L_7);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_7, L_9, NULL);
		// textMesh.color = Color.white;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_10 = __this->___textMesh_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		NullCheck(L_10);
		TextMesh_set_color_mF08F30C3CD797C16289225B567724B9F07DC641E(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptMessageHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptMessageHandler__ctor_mA197DD6FF64EDDB88CAF44B9A607AC5BBB812EBF (InterceptMessageHandler_t1DF3F1A3719A60512C414F1E247D810ED8599FE4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshInfo_get_ChangeState_mF366492B8EF4A9FC8F677E01A6BA4C6C75D3BF68_inline (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CChangeStateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* __this, const RuntimeMethod* method) 
{
	{
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_0 = __this->___U3CMeshIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Status_m392754927B1E28DB2E6078A212F8FCC013AC10C0_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_set_receivedMessage_m06924CA717DBCA3DCFCCC136AF8F1C86CE98756D_inline (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string receivedMessage { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CreceivedMessageU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreceivedMessageU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InterceptCreateSessionFeature_get_receivedMessage_m3783793E40B12DC8AE9770D6DBB7F981D36C92D6_inline (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, const RuntimeMethod* method) 
{
	{
		// public string receivedMessage { get; private set; }
		String_t* L_0 = __this->___U3CreceivedMessageU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_gshared_inline (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method) 
{
	{
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA L_0 = (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
