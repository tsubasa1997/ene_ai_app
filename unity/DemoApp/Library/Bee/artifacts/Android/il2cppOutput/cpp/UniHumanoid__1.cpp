#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// System.Collections.Generic.Dictionary`2<UnityEngine.HumanBodyBones,System.Int32>
struct Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Func`2<UniHumanoid.BvhBone,UniHumanoid.IBone>
struct Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC;
// System.Func`2<UniHumanoid.IBone,System.Boolean>
struct Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D;
// System.Func`2<UnityEngine.Transform,UnityEngine.Matrix4x4>
struct Func_2_tD9729754657EDC600F802415BA24F2F5B554CADC;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
// System.Func`3<UniHumanoid.IBone,UniHumanoid.IBone,UniHumanoid.IBone>
struct Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F;
// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4;
// System.Collections.Generic.IEnumerable`1<UniHumanoid.BvhBone>
struct IEnumerable_1_t98EB73E00FEEF395EC2F3D6B4772084E66D38781;
// System.Collections.Generic.IEnumerable`1<UniHumanoid.IBone>
struct IEnumerable_1_t209B7769C163174342BDDD388E7831F0A48277CB;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Matrix4x4>
struct IEnumerable_1_t7E13FCC61B2DB26146CA569CB146A0200C4618D1;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>
struct IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.HumanBodyBones>
struct IEqualityComparer_1_t14A3BA3B354ADB5BFF56453047E30EAFCDC6C1D6;
// System.Collections.Generic.IList`1<UniHumanoid.IBone>
struct IList_1_tEC4B815B305AFCEE078D7784719BA547982AE509;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.HumanBodyBones,System.Int32>
struct KeyCollection_t344E351054C65FE795FC5AE4CC1CCE11D1555716;
// System.Collections.Generic.List`1<UnityEngine.BoneWeight>
struct List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F;
// System.Collections.Generic.List`1<UniHumanoid.BvhNode>
struct List_1_t1CFD9FA0481ECAB5A5F39CDF4C5900C6ACEA63C4;
// System.Collections.Generic.List`1<UniHumanoid.IBone>
struct List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.HumanBodyBones,System.Int32>
struct ValueCollection_tF3E42631CB7427368E69D90906962A5435CEA1DC;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.HumanBodyBones,System.Int32>[]
struct EntryU5BU5D_t2BCB8ED289BFDC72E4C3BB8A860FE11999118D51;
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
// UniHumanoid.BvhChannel[]
struct BvhChannelU5BU5D_t08AFCA08A7E2D99611887A0C082DD0A8FD5E53D1;
// UniHumanoid.BvhChannelCurve[]
struct BvhChannelCurveU5BU5D_t01A4B756DDF5C0769247048B76E4D9F7E29F1C1D;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UniHumanoid.IBone[]
struct IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// UniHumanoid.SkeletonMeshUtility/BoneHeadTail[]
struct BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UniHumanoid.Bvh
struct Bvh_t860215FD572E44D06C2764E255A5129C00A39687;
// UniHumanoid.BvhBone
struct BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106;
// UniHumanoid.BvhNode
struct BvhNode_t69ABF425B6902A35367FF490DF3BB35A4F1AF80C;
// UniHumanoid.BvhSkeletonEstimator
struct BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UniHumanoid.IBone
struct IBone_t0D620A0C4978553CA8278758D71556CADA609AE3;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UniHumanoid.BvhSkeletonEstimator/<>c
struct U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F;
// UniHumanoid.SkeletonMeshUtility/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C;
// UniHumanoid.SkeletonMeshUtility/MeshBuilder
struct MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUniHumanoid[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C RuntimeClass* BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD9729754657EDC600F802415BA24F2F5B554CADC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HumanBodyBones_tA2A904890A05ABCFFAB7E119244E97C5EA9807E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tAFEC19DC35BBB8D14E6B4410BFC4D29762BA60FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t209B7769C163174342BDDD388E7831F0A48277CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD8C66FF0320BD62B6AB6F5FB4E27C7A326468CD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tEC4B815B305AFCEE078D7784719BA547982AE509_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkeletonMeshUtility_t8F8EA2193A3FFBAE71B804B72623941435608C60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1276D47E098386396D1368835D9D091CF53E4F93;
IL2CPP_EXTERN_C String_t* _stringLiteral8CFDE6052CA0FD77D6503747E37D0F81B977C776;
IL2CPP_EXTERN_C String_t* _stringLiteral8F7E31A57D54C1CB0AE3D0134B5640AC33153DF6;
IL2CPP_EXTERN_C String_t* _stringLiteralA1F38FB78103D23149590E9D2D8B4F145437FB39;
IL2CPP_EXTERN_C String_t* _stringLiteralAE99D30A587B2A7638BCE5DEB3A263174FFA684B;
IL2CPP_EXTERN_C String_t* _stringLiteralBD7A3B40B8A32FA24131781A1D953D1E223A1CB6;
IL2CPP_EXTERN_C String_t* _stringLiteralF0C4FF4D8D536521833CE6E3FF55C30EC16F582D;
IL2CPP_EXTERN_C const RuntimeMethod* BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BvhNode_get_Name_mDB1AB1CF22C6BF5CC0AD6E0B49638445EB5C50B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BvhSkeletonEstimator_Detect_m38E28F49437698A2A9B6DFCC6E3774E9E7C02112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BvhSkeletonEstimator_Detect_m4CB96C21EDCEFF476B700B812F1139F48C0576A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BvhSkeletonEstimator_Detect_m8590F35D09EFE278F8310A55B41CF7E6132225AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BvhSkeletonEstimator_GetArm_mA88BA0C78CD08C7300C559191C6CA1A805AB6CFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BvhSkeletonEstimator_GetLeg_mF45B73CC8B2954569F3F6AD5F697F1B410D8360F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BvhSkeletonEstimator_GetNeckAndArms_m7C232A8ED0C8C16FB84AE28EE91E268651184508_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BvhSkeletonEstimator_GetRoot_mC3A4A69472C456DF2FC5BB9175D84A251C66A929_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BvhSkeletonEstimator_GetSpineAndHips_mBF56FFDF85DDD9CF261B3A1044E68149D10371E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BvhSkeletonEstimator_SelectBone_m019838CB786A5FCC3B716833379B562AA23038F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BvhSkeletonEstimator__ctor_mF6A7D39D21708023D89442EDFFC8E4555B78CF79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Bvh_get_Root_mB98898C2E5B5E11C4F3A6932F6D0638172833FB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m9421C01A92AAD28C01812C6F0663E7EF557A5771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA5A05218EF351AA7D138904BC82E379CA99EF605_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m086D129F26E4E0A687EEA78EDC2793AB11A2E08E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_mFDF2A8B918768587D0A04CD259FB3D85A893F957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Last_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m01944214001FA224522129E102E521B72EF0D7C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisBvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m3F1090C4BDC576669EC4E68D53FF6DDA66D09C90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m2247CA5CDEA0766EFD154D7277437BDC45750194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m7F5F31A56770F7A7418214B7A3928754E9F40BF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m8207DBC9BB2B222E4B35B5AEF5C31B22AD5C09E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m24B08756BA1B69E8DB774BB81E1CE27021BD0C41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9AEA33F3B287912A369F86579214A123828BDCC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m3D023308A7A44C20875FE8592F3856E1EF607543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA88F5063680AC5A1F40E439D5681433089375D05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC85312B7A900D66882788521C394A8179AA44A60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m5925CCD2844741E30EB14EDD03DD79F169BBFA80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mE61932ED5F0BE9F3A28DD0F3800A6373A32618DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC74E36CF226BEA2843849C034619DCA6FF568BD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCB4C0FD63BA973934B61CA1EB2700467B5670C97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB4F62BAA727837B4387A2701570F68477843EB34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC6D02345441E4D990506061CE1C806C7BB803A96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshBuilder_AddBone_mCFA6A97CD863C006CB0EA813D42DC0FF7F09781A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshBuilder_AddBox_m4F53BFE8CAACE15C46AE3D1F45886615AF0A5D00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshBuilder_AddQuad_m420F09BD49072F0C502BA406DBE6B03FCAF78851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshBuilder_CreateMesh_m98E1B40C0565A76818BFE79779B576D99BB2069C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshBuilder__ctor_m7421490CFA93D231F541839B4683C633291F099D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeletonMeshUtility_CreateRenderer_m4B9BE9D811E10600E6FB2B4BE10544CFE123E1F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeletonMeshUtility__cctor_m4ECE481F077C5451410EF86928D7AE5D3E2A635D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Skeleton_Estimate_mA527646C6E4766E0802443D5C2AEB65A0B68CB31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Skeleton_GetBoneIndex_mB738A5B104596371F49803CE8AC2334260FD3928_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Skeleton_Set_m31BA363CE8F5788804BCAD31309ED298CBF01939_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Skeleton_get_Bones_m7355D1400108E6F192AD8C8EE594A951210064C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TSRBox_ToMatrix_mCD4D65414C7782A9D4FBB59DC26802A8E1548D85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TSRBox__ctor_m1CF12B88EF9752FF989714EFD2C4188FA701C866_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CDetectU3Eb__10_0_m84601719200AE7026E4DC7C057413E0318B42E52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CDetectU3Eb__8_0_m0F1937CD6E8CB5E2E27E1EAF09F8BB7CBEFE5BC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CDetectU3Eb__8_1_mB3874E8D814E1E65B6BC27CBF8B86BB163099D01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CDetectU3Eb__9_0_m9EA520B768C8B97BA98DD9E8EDA8F40FBF694E9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetLegU3Eb__7_0_m1729267B32850331C891A0F4A84EDADA9036B232_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetNeckAndArmsU3Eb__3_0_mB739D106B67A3D3C21146A4692791DFEB16F5F21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetNeckAndArmsU3Eb__3_1_mEEB8AB13946E6CFC73D89B32FD83497331B3B4C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetNeckAndArmsU3Eb__3_2_m5344F7668BBC2AC832C353DBD5A5623B84951A06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetRootU3Eb__0_0_m0B24A7BC314E4F7947E70EEF8789859712F96337_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetSpineAndHipsU3Eb__2_0_m647E2F7D1E1E8EE14CFED1B2A7C24D7A2C5AD3AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetSpineAndHipsU3Eb__2_1_m5928CA23BE6596A3C4A88B05805512065832DF32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetSpineAndHipsU3Eb__2_2_m02813F4A2A1D9EC6C585E9AF412E84AA5C59CC24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CCreateRendererU3Eb__0_m9FD708582CC625B3FFE02B510D960B22B1898B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0__ctor_mD7B3D177A8F54AC8191793A11E76C90EFEFFF6F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__cctor_m7CFCBDF0D5390EFEF06F218284CB301E04692C3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__ctor_m5C1D787BCA9EF5E21A6A4787D15260A13065A48F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BvhNode_t69ABF425B6902A35367FF490DF3BB35A4F1AF80C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Bvh_t860215FD572E44D06C2764E255A5129C00A39687_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IEnumerator_1_tD8C66FF0320BD62B6AB6F5FB4E27C7A326468CD1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TSRBox_tB3C81ACF1D76E965AC8BC787CD2F08D3DD105F74_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
struct IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<UnityEngine.HumanBodyBones,System.Int32>
struct Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t2BCB8ED289BFDC72E4C3BB8A860FE11999118D51* ____entries_1;
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
	KeyCollection_t344E351054C65FE795FC5AE4CC1CCE11D1555716* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF3E42631CB7427368E69D90906962A5435CEA1DC* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.BoneWeight>
struct List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UniHumanoid.IBone>
struct List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UniHumanoid.BvhSkeletonEstimator
struct BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64  : public RuntimeObject
{
};

// UniHumanoid.SkeletonMeshUtility
struct SkeletonMeshUtility_t8F8EA2193A3FFBAE71B804B72623941435608C60  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// UniHumanoid.BvhSkeletonEstimator/<>c
struct U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F  : public RuntimeObject
{
};

// UniHumanoid.SkeletonMeshUtility/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C  : public RuntimeObject
{
	// UnityEngine.Animator UniHumanoid.SkeletonMeshUtility/<>c__DisplayClass4_0::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_0;
};

// UniHumanoid.SkeletonMeshUtility/MeshBuilder
struct MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UniHumanoid.SkeletonMeshUtility/MeshBuilder::m_positions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_positions_0;
	// System.Collections.Generic.List`1<System.Int32> UniHumanoid.SkeletonMeshUtility/MeshBuilder::m_indices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_indices_1;
	// System.Collections.Generic.List`1<UnityEngine.BoneWeight> UniHumanoid.SkeletonMeshUtility/MeshBuilder::m_boneWeights
	List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F* ___m_boneWeights_2;
};

// UnityEngine.BoneWeight
struct BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F 
{
	// System.Single UnityEngine.BoneWeight::m_Weight0
	float ___m_Weight0_0;
	// System.Single UnityEngine.BoneWeight::m_Weight1
	float ___m_Weight1_1;
	// System.Single UnityEngine.BoneWeight::m_Weight2
	float ___m_Weight2_2;
	// System.Single UnityEngine.BoneWeight::m_Weight3
	float ___m_Weight3_3;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex0
	int32_t ___m_BoneIndex0_4;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex1
	int32_t ___m_BoneIndex1_5;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex2
	int32_t ___m_BoneIndex2_6;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex3
	int32_t ___m_BoneIndex3_7;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UniHumanoid.Skeleton
struct Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.HumanBodyBones,System.Int32> UniHumanoid.Skeleton::m_indexMap
	Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509* ___m_indexMap_0;
};
// Native definition for P/Invoke marshalling of UniHumanoid.Skeleton
struct Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_marshaled_pinvoke
{
	Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509* ___m_indexMap_0;
};
// Native definition for COM marshalling of UniHumanoid.Skeleton
struct Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_marshaled_com
{
	Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509* ___m_indexMap_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// UniHumanoid.BvhSkeletonEstimator/Arm
struct Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55 
{
	// UniHumanoid.IBone UniHumanoid.BvhSkeletonEstimator/Arm::Shoulder
	RuntimeObject* ___Shoulder_0;
	// UniHumanoid.IBone UniHumanoid.BvhSkeletonEstimator/Arm::UpperArm
	RuntimeObject* ___UpperArm_1;
	// UniHumanoid.IBone UniHumanoid.BvhSkeletonEstimator/Arm::LowerArm
	RuntimeObject* ___LowerArm_2;
	// UniHumanoid.IBone UniHumanoid.BvhSkeletonEstimator/Arm::Hand
	RuntimeObject* ___Hand_3;
};
// Native definition for P/Invoke marshalling of UniHumanoid.BvhSkeletonEstimator/Arm
struct Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55_marshaled_pinvoke
{
	RuntimeObject* ___Shoulder_0;
	RuntimeObject* ___UpperArm_1;
	RuntimeObject* ___LowerArm_2;
	RuntimeObject* ___Hand_3;
};
// Native definition for COM marshalling of UniHumanoid.BvhSkeletonEstimator/Arm
struct Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55_marshaled_com
{
	RuntimeObject* ___Shoulder_0;
	RuntimeObject* ___UpperArm_1;
	RuntimeObject* ___LowerArm_2;
	RuntimeObject* ___Hand_3;
};

// UniHumanoid.BvhSkeletonEstimator/Leg
struct Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3 
{
	// UniHumanoid.IBone UniHumanoid.BvhSkeletonEstimator/Leg::UpperLeg
	RuntimeObject* ___UpperLeg_0;
	// UniHumanoid.IBone UniHumanoid.BvhSkeletonEstimator/Leg::LowerLeg
	RuntimeObject* ___LowerLeg_1;
	// UniHumanoid.IBone UniHumanoid.BvhSkeletonEstimator/Leg::Foot
	RuntimeObject* ___Foot_2;
	// UniHumanoid.IBone UniHumanoid.BvhSkeletonEstimator/Leg::Toes
	RuntimeObject* ___Toes_3;
};
// Native definition for P/Invoke marshalling of UniHumanoid.BvhSkeletonEstimator/Leg
struct Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3_marshaled_pinvoke
{
	RuntimeObject* ___UpperLeg_0;
	RuntimeObject* ___LowerLeg_1;
	RuntimeObject* ___Foot_2;
	RuntimeObject* ___Toes_3;
};
// Native definition for COM marshalling of UniHumanoid.BvhSkeletonEstimator/Leg
struct Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3_marshaled_com
{
	RuntimeObject* ___UpperLeg_0;
	RuntimeObject* ___LowerLeg_1;
	RuntimeObject* ___Foot_2;
	RuntimeObject* ___Toes_3;
};

// UniHumanoid.Bvh
struct Bvh_t860215FD572E44D06C2764E255A5129C00A39687  : public RuntimeObject
{
	// UniHumanoid.BvhNode UniHumanoid.Bvh::<Root>k__BackingField
	BvhNode_t69ABF425B6902A35367FF490DF3BB35A4F1AF80C* ___U3CRootU3Ek__BackingField_0;
	// System.TimeSpan UniHumanoid.Bvh::<FrameTime>k__BackingField
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___U3CFrameTimeU3Ek__BackingField_1;
	// UniHumanoid.BvhChannelCurve[] UniHumanoid.Bvh::<Channels>k__BackingField
	BvhChannelCurveU5BU5D_t01A4B756DDF5C0769247048B76E4D9F7E29F1C1D* ___U3CChannelsU3Ek__BackingField_2;
	// System.Int32 UniHumanoid.Bvh::m_frames
	int32_t ___m_frames_3;
};

// UniHumanoid.BvhBone
struct BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106  : public RuntimeObject
{
	// System.String UniHumanoid.BvhBone::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// UnityEngine.Vector3 UniHumanoid.BvhBone::<SkeletonLocalPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CSkeletonLocalPositionU3Ek__BackingField_1;
	// UniHumanoid.IBone UniHumanoid.BvhBone::<Parent>k__BackingField
	RuntimeObject* ___U3CParentU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<UniHumanoid.IBone> UniHumanoid.BvhBone::_children
	List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* ____children_3;
};

// UniHumanoid.BvhNode
struct BvhNode_t69ABF425B6902A35367FF490DF3BB35A4F1AF80C  : public RuntimeObject
{
	// System.String UniHumanoid.BvhNode::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// UnityEngine.Vector3 UniHumanoid.BvhNode::<Offset>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3COffsetU3Ek__BackingField_1;
	// UniHumanoid.BvhChannel[] UniHumanoid.BvhNode::<Channels>k__BackingField
	BvhChannelU5BU5D_t08AFCA08A7E2D99611887A0C082DD0A8FD5E53D1* ___U3CChannelsU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<UniHumanoid.BvhNode> UniHumanoid.BvhNode::<Children>k__BackingField
	List_1_t1CFD9FA0481ECAB5A5F39CDF4C5900C6ACEA63C4* ___U3CChildrenU3Ek__BackingField_3;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UniHumanoid.SkeletonMeshUtility/BoneHeadTail
struct BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 
{
	// UnityEngine.HumanBodyBones UniHumanoid.SkeletonMeshUtility/BoneHeadTail::Head
	int32_t ___Head_0;
	// UnityEngine.HumanBodyBones UniHumanoid.SkeletonMeshUtility/BoneHeadTail::Tail
	int32_t ___Tail_1;
	// UnityEngine.Vector3 UniHumanoid.SkeletonMeshUtility/BoneHeadTail::TailOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___TailOffset_2;
	// System.Single UniHumanoid.SkeletonMeshUtility/BoneHeadTail::Width
	float ___Width_3;
	// System.Single UniHumanoid.SkeletonMeshUtility/BoneHeadTail::Height
	float ___Height_4;
	// UnityEngine.Vector3 UniHumanoid.SkeletonMeshUtility/BoneHeadTail::XAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___XAxis_5;
};

// UniHumanoid.SkeletonMeshUtility/TSRBox
struct TSRBox_tB3C81ACF1D76E965AC8BC787CD2F08D3DD105F74 
{
	// UnityEngine.Vector3 UniHumanoid.SkeletonMeshUtility/TSRBox::T
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___T_0;
	// UnityEngine.Vector3 UniHumanoid.SkeletonMeshUtility/TSRBox::S
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___S_1;
	// UnityEngine.Quaternion UniHumanoid.SkeletonMeshUtility/TSRBox::R
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___R_2;
	// UnityEngine.Vector3 UniHumanoid.SkeletonMeshUtility/TSRBox::HeadPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___HeadPosition_3;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Func`2<UniHumanoid.BvhBone,UniHumanoid.IBone>
struct Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC  : public MulticastDelegate_t
{
};

// System.Func`2<UniHumanoid.IBone,System.Boolean>
struct Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Transform,UnityEngine.Matrix4x4>
struct Func_2_tD9729754657EDC600F802415BA24F2F5B554CADC  : public MulticastDelegate_t
{
};

// System.Func`3<UniHumanoid.IBone,UniHumanoid.IBone,UniHumanoid.IBone>
struct Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F  : public MulticastDelegate_t
{
};

// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// System.Collections.Generic.Dictionary`2<UnityEngine.HumanBodyBones,System.Int32>

// System.Collections.Generic.Dictionary`2<UnityEngine.HumanBodyBones,System.Int32>

// System.Collections.Generic.List`1<UnityEngine.BoneWeight>
struct List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.BoneWeight>

// System.Collections.Generic.List`1<UniHumanoid.IBone>
struct List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UniHumanoid.IBone>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UniHumanoid.BvhSkeletonEstimator

// UniHumanoid.BvhSkeletonEstimator

// UniHumanoid.SkeletonMeshUtility
struct SkeletonMeshUtility_t8F8EA2193A3FFBAE71B804B72623941435608C60_StaticFields
{
	// UniHumanoid.SkeletonMeshUtility/BoneHeadTail[] UniHumanoid.SkeletonMeshUtility::Bones
	BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* ___Bones_0;
};

// UniHumanoid.SkeletonMeshUtility

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UniHumanoid.BvhSkeletonEstimator/<>c
struct U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields
{
	// UniHumanoid.BvhSkeletonEstimator/<>c UniHumanoid.BvhSkeletonEstimator/<>c::<>9
	U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* ___U3CU3E9_0;
	// System.Func`2<UniHumanoid.IBone,System.Boolean> UniHumanoid.BvhSkeletonEstimator/<>c::<>9__0_0
	Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* ___U3CU3E9__0_0_1;
	// System.Func`3<UniHumanoid.IBone,UniHumanoid.IBone,UniHumanoid.IBone> UniHumanoid.BvhSkeletonEstimator/<>c::<>9__2_0
	Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* ___U3CU3E9__2_0_2;
	// System.Func`3<UniHumanoid.IBone,UniHumanoid.IBone,UniHumanoid.IBone> UniHumanoid.BvhSkeletonEstimator/<>c::<>9__2_1
	Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* ___U3CU3E9__2_1_3;
	// System.Func`3<UniHumanoid.IBone,UniHumanoid.IBone,UniHumanoid.IBone> UniHumanoid.BvhSkeletonEstimator/<>c::<>9__2_2
	Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* ___U3CU3E9__2_2_4;
	// System.Func`3<UniHumanoid.IBone,UniHumanoid.IBone,UniHumanoid.IBone> UniHumanoid.BvhSkeletonEstimator/<>c::<>9__3_0
	Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* ___U3CU3E9__3_0_5;
	// System.Func`3<UniHumanoid.IBone,UniHumanoid.IBone,UniHumanoid.IBone> UniHumanoid.BvhSkeletonEstimator/<>c::<>9__3_1
	Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* ___U3CU3E9__3_1_6;
	// System.Func`3<UniHumanoid.IBone,UniHumanoid.IBone,UniHumanoid.IBone> UniHumanoid.BvhSkeletonEstimator/<>c::<>9__3_2
	Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* ___U3CU3E9__3_2_7;
	// System.Func`2<UniHumanoid.IBone,System.Boolean> UniHumanoid.BvhSkeletonEstimator/<>c::<>9__7_0
	Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* ___U3CU3E9__7_0_8;
	// System.Func`2<UniHumanoid.IBone,System.Boolean> UniHumanoid.BvhSkeletonEstimator/<>c::<>9__8_0
	Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* ___U3CU3E9__8_0_9;
	// System.Func`2<UniHumanoid.IBone,System.Boolean> UniHumanoid.BvhSkeletonEstimator/<>c::<>9__8_1
	Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* ___U3CU3E9__8_1_10;
	// System.Func`2<UniHumanoid.BvhBone,UniHumanoid.IBone> UniHumanoid.BvhSkeletonEstimator/<>c::<>9__9_0
	Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC* ___U3CU3E9__9_0_11;
	// System.Func`2<UniHumanoid.BvhBone,UniHumanoid.IBone> UniHumanoid.BvhSkeletonEstimator/<>c::<>9__10_0
	Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC* ___U3CU3E9__10_0_12;
};

// UniHumanoid.BvhSkeletonEstimator/<>c

// UniHumanoid.SkeletonMeshUtility/<>c__DisplayClass4_0

// UniHumanoid.SkeletonMeshUtility/<>c__DisplayClass4_0

// UniHumanoid.SkeletonMeshUtility/MeshBuilder

// UniHumanoid.SkeletonMeshUtility/MeshBuilder

// UnityEngine.BoneWeight

// UnityEngine.BoneWeight

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UniHumanoid.Skeleton

// UniHumanoid.Skeleton

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UniHumanoid.BvhSkeletonEstimator/Arm

// UniHumanoid.BvhSkeletonEstimator/Arm

// UniHumanoid.BvhSkeletonEstimator/Leg

// UniHumanoid.BvhSkeletonEstimator/Leg

// UniHumanoid.Bvh

// UniHumanoid.Bvh

// UniHumanoid.BvhBone

// UniHumanoid.BvhBone

// UniHumanoid.BvhNode

// UniHumanoid.BvhNode

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UniHumanoid.SkeletonMeshUtility/BoneHeadTail

// UniHumanoid.SkeletonMeshUtility/BoneHeadTail

// UniHumanoid.SkeletonMeshUtility/TSRBox

// UniHumanoid.SkeletonMeshUtility/TSRBox

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Mesh

// UnityEngine.Mesh

// System.Func`2<UniHumanoid.BvhBone,UniHumanoid.IBone>

// System.Func`2<UniHumanoid.BvhBone,UniHumanoid.IBone>

// System.Func`2<UniHumanoid.IBone,System.Boolean>

// System.Func`2<UniHumanoid.IBone,System.Boolean>

// System.Func`2<UnityEngine.Transform,UnityEngine.Matrix4x4>

// System.Func`2<UnityEngine.Transform,UnityEngine.Matrix4x4>

// System.Func`3<UniHumanoid.IBone,UniHumanoid.IBone,UniHumanoid.IBone>

// System.Func`3<UniHumanoid.IBone,UniHumanoid.IBone,UniHumanoid.IBone>

// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.NotImplementedException

// System.NotImplementedException

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.SkinnedMeshRenderer

// UnityEngine.SkinnedMeshRenderer
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UniHumanoid.IBone[]
struct IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UniHumanoid.SkeletonMeshUtility/BoneHeadTail[]
struct BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C  : public RuntimeArray
{
	ALIGN_FIELD (8) BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 m_Items[1];

	inline BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651  : public RuntimeArray
{
	ALIGN_FIELD (8) BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F m_Items[1];

	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisIl2CppFullySharedGenericAny_m3F416675DC7A5572025B02ED373C41AD9ED8F6C4_gshared (RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// TResult System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_gshared_inline (Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_arg1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m3D53118DAA71CFFC80A4B21073B54F3C4EFA1C68_gshared (Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerable_First_TisIl2CppFullySharedGenericAny_m08978D082DCBF739A9269BC79C5EA59C44E39877_gshared (RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerable_Last_TisIl2CppFullySharedGenericAny_mB9ABB6ECA57F2592ABCE0EE92365A4FCB3CDAB43_gshared (RuntimeObject* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5BBCA2BC02448D0B77D2201BB08B13BAB3BABA53_gshared (RuntimeObject* ___0_source, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___1_selector, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* Enumerable_ToList_TisIl2CppFullySharedGenericAny_m191EA129E511F9B8304FF8826A2DA645E06CCBF0_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m1FFA888B47CE3256B0AC301302FAD79AAAFC0818_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;

// System.Collections.Generic.Dictionary`2<UnityEngine.HumanBodyBones,System.Int32> UniHumanoid.Skeleton::get_Bones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509* Skeleton_get_Bones_m7355D1400108E6F192AD8C8EE594A951210064C9 (Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.HumanBodyBones,System.Int32>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m9421C01A92AAD28C01812C6F0663E7EF557A5771 (Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509* __this, int32_t ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// System.Int32 UniHumanoid.Skeleton::GetBoneIndex(UnityEngine.HumanBodyBones)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Skeleton_GetBoneIndex_mB738A5B104596371F49803CE8AC2334260FD3928 (Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE* __this, int32_t ___0_bone, const RuntimeMethod* method) ;
// System.Void UniHumanoid.BvhSkeletonEstimator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BvhSkeletonEstimator__ctor_mF6A7D39D21708023D89442EDFFC8E4555B78CF79 (BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64* __this, const RuntimeMethod* method) ;
// UniHumanoid.Skeleton UniHumanoid.BvhSkeletonEstimator::Detect(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE BvhSkeletonEstimator_Detect_m38E28F49437698A2A9B6DFCC6E3774E9E7C02112 (BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, const RuntimeMethod* method) ;
// System.Void UniHumanoid.Skeleton::Set(UnityEngine.HumanBodyBones,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skeleton_Set_m31BA363CE8F5788804BCAD31309ED298CBF01939 (Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE* __this, int32_t ___0_bone, int32_t ___1_index, String_t* ___2_name, const RuntimeMethod* method) ;
// System.Void UniHumanoid.Skeleton::Set(UnityEngine.HumanBodyBones,System.Collections.Generic.IList`1<UniHumanoid.IBone>,UniHumanoid.IBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B (Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE* __this, int32_t ___0_bone, RuntimeObject* ___1_bones, RuntimeObject* ___2_b, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.HumanBodyBones,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mA5A05218EF351AA7D138904BC82E379CA99EF605 (Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.HumanBodyBones,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m086D129F26E4E0A687EEA78EDC2793AB11A2E08E (Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny)&___1_value, method);
}
// System.Void System.Func`2<UniHumanoid.IBone,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0589ABE0FC3B524804B5C99C772EBF57DBE71D1E (Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<UniHumanoid.IBone>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m3D023308A7A44C20875FE8592F3856E1EF607543 (RuntimeObject* ___0_source, Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* ___1_predicate, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))Enumerable_Where_TisIl2CppFullySharedGenericAny_m3F416675DC7A5572025B02ED373C41AD9ED8F6C4_gshared)((RuntimeObject*)___0_source, (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)___1_predicate, method);
	return (RuntimeObject*)il2cppRetVal;
}
// TSource[] System.Linq.Enumerable::ToArray<UniHumanoid.IBone>(System.Collections.Generic.IEnumerable`1<TSource>)
inline IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* Enumerable_ToArray_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m7F5F31A56770F7A7418214B7A3928754E9F40BF9 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_gshared)((RuntimeObject*)___0_source, method);
	return (IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2*)il2cppRetVal;
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// TResult System.Func`3<UniHumanoid.IBone,UniHumanoid.IBone,UniHumanoid.IBone>::Invoke(T1,T2)
inline RuntimeObject* Func_3_Invoke_m8B5FED920D51C55D20F98F1AAF0E612303473FB1_inline (Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_gshared_inline)((Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4*)__this, (Il2CppFullySharedGenericAny)___0_arg1, (Il2CppFullySharedGenericAny)___1_arg2, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Func`3<UniHumanoid.IBone,UniHumanoid.IBone,UniHumanoid.IBone>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m50F02032F416DD6574AD57B4F958887518A4B246 (Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m3D53118DAA71CFFC80A4B21073B54F3C4EFA1C68_gshared)((Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4*)__this, ___0_object, ___1_method, method);
}
// UniHumanoid.IBone UniHumanoid.BvhSkeletonEstimator::SelectBone(System.Func`3<UniHumanoid.IBone,UniHumanoid.IBone,UniHumanoid.IBone>,System.Collections.Generic.IList`1<UniHumanoid.IBone>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BvhSkeletonEstimator_SelectBone_m019838CB786A5FCC3B716833379B562AA23038F7 (Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* ___0_selector, RuntimeObject* ___1_bones, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UniHumanoid.IBone> UniHumanoid.IBoneExtensions::Traverse(UniHumanoid.IBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IBoneExtensions_Traverse_m922659D6A7E9FE709DFA9C658D96E79B57838874 (RuntimeObject* ___0_self, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// UniHumanoid.IBone UniHumanoid.BvhSkeletonEstimator::GetRoot(System.Collections.Generic.IList`1<UniHumanoid.IBone>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BvhSkeletonEstimator_GetRoot_mC3A4A69472C456DF2FC5BB9175D84A251C66A929 (RuntimeObject* ___0_bones, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<UniHumanoid.IBone>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_First_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_mFDF2A8B918768587D0A04CD259FB3D85A893F957 (RuntimeObject* ___0_source, Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* ___1_predicate, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerable_First_TisIl2CppFullySharedGenericAny_m08978D082DCBF739A9269BC79C5EA59C44E39877_gshared)((RuntimeObject*)___0_source, (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)___1_predicate, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UniHumanoid.BvhSkeletonEstimator::GetSpineAndHips(UniHumanoid.IBone,UniHumanoid.IBone&,UniHumanoid.IBone&,UniHumanoid.IBone&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BvhSkeletonEstimator_GetSpineAndHips_mBF56FFDF85DDD9CF261B3A1044E68149D10371E1 (RuntimeObject* ___0_hips, RuntimeObject** ___1_spine, RuntimeObject** ___2_leg_L, RuntimeObject** ___3_leg_R, const RuntimeMethod* method) ;
// UniHumanoid.BvhSkeletonEstimator/Leg UniHumanoid.BvhSkeletonEstimator::GetLeg(UniHumanoid.IBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3 BvhSkeletonEstimator_GetLeg_mF45B73CC8B2954569F3F6AD5F697F1B410D8360F (BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64* __this, RuntimeObject* ___0_leg, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UniHumanoid.IBone>::.ctor()
inline void List_1__ctor_mC74E36CF226BEA2843849C034619DCA6FF568BD6 (List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UniHumanoid.IBone>::Add(T)
inline void List_1_Add_mA88F5063680AC5A1F40E439D5681433089375D05_inline (List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// TSource System.Linq.Enumerable::Last<UniHumanoid.IBone>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Last_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m01944214001FA224522129E102E521B72EF0D7C0 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (RuntimeObject*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerable_Last_TisIl2CppFullySharedGenericAny_mB9ABB6ECA57F2592ABCE0EE92365A4FCB3CDAB43_gshared)((RuntimeObject*)___0_source, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UniHumanoid.BvhSkeletonEstimator::GetNeckAndArms(UniHumanoid.IBone,UniHumanoid.IBone&,UniHumanoid.IBone&,UniHumanoid.IBone&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BvhSkeletonEstimator_GetNeckAndArms_m7C232A8ED0C8C16FB84AE28EE91E268651184508 (RuntimeObject* ___0_chest, RuntimeObject** ___1_neck, RuntimeObject** ___2_arm_L, RuntimeObject** ___3_arm_R, const RuntimeMethod* method) ;
// UniHumanoid.BvhSkeletonEstimator/Arm UniHumanoid.BvhSkeletonEstimator::GetArm(UniHumanoid.IBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55 BvhSkeletonEstimator_GetArm_mA88BA0C78CD08C7300C559191C6CA1A805AB6CFC (BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64* __this, RuntimeObject* ___0_shoulder, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UniHumanoid.IBone>::get_Count()
inline int32_t List_1_get_Count_mB4F62BAA727837B4387A2701570F68477843EB34_inline (List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UniHumanoid.IBone>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_mC6D02345441E4D990506061CE1C806C7BB803A96 (List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UniHumanoid.BvhNode UniHumanoid.Bvh::get_Root()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BvhNode_t69ABF425B6902A35367FF490DF3BB35A4F1AF80C* Bvh_get_Root_mB98898C2E5B5E11C4F3A6932F6D0638172833FB9_inline (Bvh_t860215FD572E44D06C2764E255A5129C00A39687* __this, const RuntimeMethod* method) ;
// System.String UniHumanoid.BvhNode::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BvhNode_get_Name_mDB1AB1CF22C6BF5CC0AD6E0B49638445EB5C50B6_inline (BvhNode_t69ABF425B6902A35367FF490DF3BB35A4F1AF80C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UniHumanoid.BvhBone::.ctor(System.String,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BvhBone__ctor_mDF9CB5FCA126A988B05CDA5759F512FC9312EF88 (BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106* __this, String_t* ___0_name, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// System.Void UniHumanoid.BvhBone::Build(UniHumanoid.BvhNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BvhBone_Build_mBD2E36C251D3537A28402FE80255D1AEB88CA20F (BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106* __this, BvhNode_t69ABF425B6902A35367FF490DF3BB35A4F1AF80C* ___0_node, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UniHumanoid.BvhBone> UniHumanoid.BvhBone::Traverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BvhBone_Traverse_m9D5675C430420534EBD203DDCB5793965FE19DD6 (BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<UniHumanoid.BvhBone,UniHumanoid.IBone>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m3C2F4927E783D5A01371B1CD015BA1FC844E92C1 (Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<UniHumanoid.BvhBone,UniHumanoid.IBone>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisBvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m3F1090C4BDC576669EC4E68D53FF6DDA66D09C90 (RuntimeObject* ___0_source, Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC* ___1_selector, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))Enumerable_Select_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5BBCA2BC02448D0B77D2201BB08B13BAB3BABA53_gshared)((RuntimeObject*)___0_source, (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)___1_selector, method);
	return (RuntimeObject*)il2cppRetVal;
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<UniHumanoid.IBone>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* Enumerable_ToList_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m24B08756BA1B69E8DB774BB81E1CE27021BD0C41 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* il2cppRetVal = ((  List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisIl2CppFullySharedGenericAny_m191EA129E511F9B8304FF8826A2DA645E06CCBF0_gshared)((RuntimeObject*)___0_source, method);
	return (List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3*)il2cppRetVal;
}
// UniHumanoid.Skeleton UniHumanoid.BvhSkeletonEstimator::Detect(System.Collections.Generic.IList`1<UniHumanoid.IBone>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE BvhSkeletonEstimator_Detect_m8590F35D09EFE278F8310A55B41CF7E6132225AA (BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64* __this, RuntimeObject* ___0_bones, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UniHumanoid.BvhBone::Build(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BvhBone_Build_m424FB986ACAB2ADCFA35562C2A1207BFC55E6761 (BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UniHumanoid.BvhSkeletonEstimator/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5C1D787BCA9EF5E21A6A4787D15260A13065A48F (U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UniHumanoid.IBoneExtensions::CenterOfDescendant(UniHumanoid.IBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IBoneExtensions_CenterOfDescendant_mD282033F03563D31A2A20F3681021C09571521E2 (RuntimeObject* ___0_self, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UniHumanoid.SkeletonMeshUtility/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mD7B3D177A8F54AC8191793A11E76C90EFEFFF6F3 (U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform> UniHumanoid.UnityExtensions::Traverse(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityExtensions_Traverse_mE0982867992EEE817CF84A870054BDE18954562E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<UnityEngine.Transform>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* Enumerable_ToList_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9AEA33F3B287912A369F86579214A123828BDCC8 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* il2cppRetVal = ((  List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisIl2CppFullySharedGenericAny_m191EA129E511F9B8304FF8826A2DA645E06CCBF0_gshared)((RuntimeObject*)___0_source, method);
	return (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cppRetVal;
}
// System.Void UniHumanoid.SkeletonMeshUtility/MeshBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder__ctor_m7421490CFA93D231F541839B4683C633291F099D (MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransform(UnityEngine.HumanBodyBones)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_humanBoneId, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::IndexOf(T)
inline int32_t List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_IndexOf_m1FFA888B47CE3256B0AC301302FAD79AAAFC0818_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void UniHumanoid.SkeletonMeshUtility/MeshBuilder::AddBone(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Single,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_AddBone_mCFA6A97CD863C006CB0EA813D42DC0FF7F09781A (MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_head, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_tail, int32_t ___2_boneIndex, float ___3_width, float ___4_height, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___5_xAxis, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Boolean VRMShaders.Symbols::get_VRM_DEVELOP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Symbols_get_VRM_DEVELOP_m6725AEBFEEB26F05FDD82C6C8A1FEF501CEFDFC5 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// UnityEngine.Mesh UniHumanoid.SkeletonMeshUtility/MeshBuilder::CreateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshBuilder_CreateMesh_m98E1B40C0565A76818BFE79779B576D99BB2069C (MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.Transform,UnityEngine.Matrix4x4>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m29B7403838787E1A5F6100C52BB21B9D2E021B19 (Func_2_tD9729754657EDC600F802415BA24F2F5B554CADC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<UnityEngine.Transform,UnityEngine.Matrix4x4>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m2247CA5CDEA0766EFD154D7277437BDC45750194 (RuntimeObject* ___0_source, Func_2_tD9729754657EDC600F802415BA24F2F5B554CADC* ___1_selector, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))Enumerable_Select_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5BBCA2BC02448D0B77D2201BB08B13BAB3BABA53_gshared)((RuntimeObject*)___0_source, (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)___1_selector, method);
	return (RuntimeObject*)il2cppRetVal;
}
// TSource[] System.Linq.Enumerable::ToArray<UnityEngine.Matrix4x4>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Enumerable_ToArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m8207DBC9BB2B222E4B35B5AEF5C31B22AD5C09E4 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_gshared)((RuntimeObject*)___0_source, method);
	return (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)il2cppRetVal;
}
// System.Void UnityEngine.Mesh::set_bindposes(UnityEngine.Matrix4x4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.SkinnedMeshRenderer>()
inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.Transform>::ToArray()
inline TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* List_1_ToArray_m5925CCD2844741E30EB14EDD03DD79F169BBFA80 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
	return (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)il2cppRetVal;
}
// System.Void UnityEngine.SkinnedMeshRenderer::set_bones(UnityEngine.Transform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_bones_m80B64F72E4E5C7901E3105594D964F25D00952D7 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_rootBone(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_rootBone_m218D83F020040DB84BA06D99050D6A01A3C90355 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_sharedMesh_m3D3A431BC8B244C21EB9D01B9A10D040D7137F98 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Void UniHumanoid.SkeletonMeshUtility/BoneHeadTail::.ctor(UnityEngine.HumanBodyBones,UnityEngine.HumanBodyBones,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52* __this, int32_t ___0_head, int32_t ___1_tail, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_xAxis, float ___3_width, float ___4_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UniHumanoid.SkeletonMeshUtility/BoneHeadTail::.ctor(UnityEngine.HumanBodyBones,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178 (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52* __this, int32_t ___0_head, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_tailOffset, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_xAxis, float ___3_width, float ___4_height, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// System.Void UniHumanoid.SkeletonMeshUtility/TSRBox::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSRBox__ctor_m1CF12B88EF9752FF989714EFD2C4188FA701C866 (TSRBox_tB3C81ACF1D76E965AC8BC787CD2F08D3DD105F74* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_s, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_r, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_head, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Translate_mF3EDFC59C9E51DC0C0A483F6E44A4930D62E4091 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Rotate(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Rotate_m015442530DFF5651458BBFDFB3CBC9180FC09D9E (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_q, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_lhs, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UniHumanoid.SkeletonMeshUtility/TSRBox::ToMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 TSRBox_ToMatrix_mCD4D65414C7782A9D4FBB59DC26802A8E1548D85 (TSRBox_tB3C81ACF1D76E965AC8BC787CD2F08D3DD105F74* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4__ctor_m6523044D700F15EC6BCD183633A329EE56AA8C99 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_column0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_column1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_column2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___3_column3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Matrix4x4::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Matrix4x4_get_rotation_m7E2C29FCB2AAFAE4D7B4FBD3563E9EDB53F5A8BB (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
// System.Void UniHumanoid.SkeletonMeshUtility/MeshBuilder::AddBox(System.Int32,UniHumanoid.SkeletonMeshUtility/TSRBox)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_AddBox_m4F53BFE8CAACE15C46AE3D1F45886615AF0A5D00 (MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923* __this, int32_t ___0_boneIndex, TSRBox_tB3C81ACF1D76E965AC8BC787CD2F08D3DD105F74 ___1_box, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// System.Void UniHumanoid.SkeletonMeshUtility/MeshBuilder::AddQuad(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_AddQuad_m420F09BD49072F0C502BA406DBE6B03FCAF78851 (MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923* __this, int32_t ___0_boneIndex, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_v0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_v1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_v2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___4_v3, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
// System.Void UnityEngine.BoneWeight::set_boneIndex0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_boneIndex0_mC11383D890013A65F158A7D3F81AB2C4A1C6B8FC (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoneWeight::set_weight0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_weight0_m8756609C6942EDC04DA03F59A57986D520DB86E7 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.BoneWeight>::Add(T)
inline void List_1_Add_mC85312B7A900D66882788521C394A8179AA44A60_inline (List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F* __this, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertices_mCE01139EEEC3D10B4A6CEA1749FD84DABC53599E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_inVertices, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.BoneWeight>::ToArray()
inline BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* List_1_ToArray_mE61932ED5F0BE9F3A28DD0F3800A6373A32618DB (List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
	return (BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)il2cppRetVal;
}
// System.Void UnityEngine.Mesh::set_boneWeights(UnityEngine.BoneWeight[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_boneWeights_m4924E79620EDC7AAA1D05CFE8B535BB37F0E8FA7 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___0_value, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
	return (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cppRetVal;
}
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.BoneWeight>::.ctor()
inline void List_1__ctor_mCB4C0FD63BA973934B61CA1EB2700467B5670C97 (List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UniHumanoid.Skeleton
IL2CPP_EXTERN_C void Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_marshal_pinvoke(const Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE& unmarshaled, Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_indexMap_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_indexMap' of type 'Skeleton'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_indexMap_0Exception, NULL);
}
IL2CPP_EXTERN_C void Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_marshal_pinvoke_back(const Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_marshaled_pinvoke& marshaled, Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE& unmarshaled)
{
	Exception_t* ___m_indexMap_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_indexMap' of type 'Skeleton'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_indexMap_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UniHumanoid.Skeleton
IL2CPP_EXTERN_C void Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_marshal_pinvoke_cleanup(Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UniHumanoid.Skeleton
IL2CPP_EXTERN_C void Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_marshal_com(const Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE& unmarshaled, Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_marshaled_com& marshaled)
{
	Exception_t* ___m_indexMap_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_indexMap' of type 'Skeleton'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_indexMap_0Exception, NULL);
}
IL2CPP_EXTERN_C void Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_marshal_com_back(const Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_marshaled_com& marshaled, Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE& unmarshaled)
{
	Exception_t* ___m_indexMap_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_indexMap' of type 'Skeleton'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_indexMap_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UniHumanoid.Skeleton
IL2CPP_EXTERN_C void Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_marshal_com_cleanup(Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_marshaled_com& marshaled)
{
}
// System.Collections.Generic.Dictionary`2<UnityEngine.HumanBodyBones,System.Int32> UniHumanoid.Skeleton::get_Bones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509* Skeleton_get_Bones_m7355D1400108E6F192AD8C8EE594A951210064C9 (Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skeleton_get_Bones_m7355D1400108E6F192AD8C8EE594A951210064C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Skeleton_get_Bones_m7355D1400108E6F192AD8C8EE594A951210064C9_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4081));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4082));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4083));
		// get { return m_indexMap; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4084));
		Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509* L_0 = __this->___m_indexMap_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_indexMap; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4085));
		Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509* Skeleton_get_Bones_m7355D1400108E6F192AD8C8EE594A951210064C9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE*>(__this + _offset);
	Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509* _returnValue;
	_returnValue = Skeleton_get_Bones_m7355D1400108E6F192AD8C8EE594A951210064C9(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UniHumanoid.Skeleton::GetBoneIndex(UnityEngine.HumanBodyBones)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Skeleton_GetBoneIndex_mB738A5B104596371F49803CE8AC2334260FD3928 (Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE* __this, int32_t ___0_bone, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m9421C01A92AAD28C01812C6F0663E7EF557A5771_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skeleton_GetBoneIndex_mB738A5B104596371F49803CE8AC2334260FD3928_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_bone));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Skeleton_GetBoneIndex_mB738A5B104596371F49803CE8AC2334260FD3928_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4086));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4087));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4088));
		// if (m_indexMap.TryGetValue(bone, out index))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4089));
		Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509* L_0 = __this->___m_indexMap_0;
		int32_t L_1 = ___0_bone;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4090));
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m9421C01A92AAD28C01812C6F0663E7EF557A5771(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m9421C01A92AAD28C01812C6F0663E7EF557A5771_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4090));
		V_1 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4091));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4092));
		// return index;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4093));
		int32_t L_4 = V_0;
		V_2 = L_4;
		goto IL_001d;
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4094));
		// return -1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4095));
		V_2 = (-1);
		goto IL_001d;
	}

IL_001d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4096));
		int32_t L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C  int32_t Skeleton_GetBoneIndex_mB738A5B104596371F49803CE8AC2334260FD3928_AdjustorThunk (RuntimeObject* __this, int32_t ___0_bone, const RuntimeMethod* method)
{
	Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Skeleton_GetBoneIndex_mB738A5B104596371F49803CE8AC2334260FD3928(_thisAdjusted, ___0_bone, method);
	return _returnValue;
}
// UniHumanoid.Skeleton UniHumanoid.Skeleton::Estimate(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE Skeleton_Estimate_mA527646C6E4766E0802443D5C2AEB65A0B68CB31 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_hips, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skeleton_Estimate_mA527646C6E4766E0802443D5C2AEB65A0B68CB31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64* V_0 = NULL;
	Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_hips));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Skeleton_Estimate_mA527646C6E4766E0802443D5C2AEB65A0B68CB31_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4097));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4098));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4099));
		// var estimator = new BvhSkeletonEstimator();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4100));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4101));
		BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64* L_0 = (BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64*)il2cpp_codegen_object_new(BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BvhSkeletonEstimator__ctor_mF6A7D39D21708023D89442EDFFC8E4555B78CF79(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4101));
		V_0 = L_0;
		// return estimator.Detect(hips);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4102));
		BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64* L_1 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_hips;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4103));
		NullCheck(L_1);
		Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE L_3;
		L_3 = BvhSkeletonEstimator_Detect_m38E28F49437698A2A9B6DFCC6E3774E9E7C02112(L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4103));
		V_1 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4104));
		Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE L_4 = V_1;
		return L_4;
	}
}
// System.Void UniHumanoid.Skeleton::Set(UnityEngine.HumanBodyBones,System.Collections.Generic.IList`1<UniHumanoid.IBone>,UniHumanoid.IBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B (Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE* __this, int32_t ___0_bone, RuntimeObject* ___1_bones, RuntimeObject* ___2_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tEC4B815B305AFCEE078D7784719BA547982AE509_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_bone), (&___1_bones), (&___2_b));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4105));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4106));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4107));
		// if (b != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4108));
		RuntimeObject* L_0 = ___2_b;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4109));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4110));
		// Set(bone, bones.IndexOf(b), b.Name);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4111));
		int32_t L_2 = ___0_bone;
		RuntimeObject* L_3 = ___1_bones;
		RuntimeObject* L_4 = ___2_b;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4112));
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.Generic.IList`1<UniHumanoid.IBone>::IndexOf(T) */, IList_1_tEC4B815B305AFCEE078D7784719BA547982AE509_il2cpp_TypeInfo_var, L_3, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4112));
		RuntimeObject* L_6 = ___2_b;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4113));
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UniHumanoid.IBone::get_Name() */, IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4113));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4114));
		Skeleton_Set_m31BA363CE8F5788804BCAD31309ED298CBF01939(__this, L_2, L_5, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4114));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4115));
	}

IL_0020:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4116));
		return;
	}
}
IL2CPP_EXTERN_C  void Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B_AdjustorThunk (RuntimeObject* __this, int32_t ___0_bone, RuntimeObject* ___1_bones, RuntimeObject* ___2_b, const RuntimeMethod* method)
{
	Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE*>(__this + _offset);
	Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B(_thisAdjusted, ___0_bone, ___1_bones, ___2_b, method);
}
// System.Void UniHumanoid.Skeleton::Set(UnityEngine.HumanBodyBones,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skeleton_Set_m31BA363CE8F5788804BCAD31309ED298CBF01939 (Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE* __this, int32_t ___0_bone, int32_t ___1_index, String_t* ___2_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA5A05218EF351AA7D138904BC82E379CA99EF605_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m086D129F26E4E0A687EEA78EDC2793AB11A2E08E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skeleton_Set_m31BA363CE8F5788804BCAD31309ED298CBF01939_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_bone), (&___1_index), (&___2_name));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Skeleton_Set_m31BA363CE8F5788804BCAD31309ED298CBF01939_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4117));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4118));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4119));
		// if (m_indexMap == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4120));
		Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509* L_0 = __this->___m_indexMap_0;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4121));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4122));
		// m_indexMap = new Dictionary<HumanBodyBones, int>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4123));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4124));
		Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509* L_2 = (Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509*)il2cpp_codegen_object_new(Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_mA5A05218EF351AA7D138904BC82E379CA99EF605(L_2, Dictionary_2__ctor_mA5A05218EF351AA7D138904BC82E379CA99EF605_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4124));
		__this->___m_indexMap_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_indexMap_0), (void*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4125));
	}

IL_001b:
	{
		// m_indexMap[bone] = index;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4126));
		Dictionary_2_tDE712BD101FB039D2F6E5C8B2521CAB8BB5D1509* L_3 = __this->___m_indexMap_0;
		int32_t L_4 = ___0_bone;
		int32_t L_5 = ___1_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4127));
		NullCheck(L_3);
		Dictionary_2_set_Item_m086D129F26E4E0A687EEA78EDC2793AB11A2E08E(L_3, L_4, L_5, Dictionary_2_set_Item_m086D129F26E4E0A687EEA78EDC2793AB11A2E08E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4127));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4128));
		return;
	}
}
IL2CPP_EXTERN_C  void Skeleton_Set_m31BA363CE8F5788804BCAD31309ED298CBF01939_AdjustorThunk (RuntimeObject* __this, int32_t ___0_bone, int32_t ___1_index, String_t* ___2_name, const RuntimeMethod* method)
{
	Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE*>(__this + _offset);
	Skeleton_Set_m31BA363CE8F5788804BCAD31309ED298CBF01939(_thisAdjusted, ___0_bone, ___1_index, ___2_name, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UniHumanoid.IBone UniHumanoid.BvhSkeletonEstimator::GetRoot(System.Collections.Generic.IList`1<UniHumanoid.IBone>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BvhSkeletonEstimator_GetRoot_mC3A4A69472C456DF2FC5BB9175D84A251C66A929 (RuntimeObject* ___0_bones, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhSkeletonEstimator_GetRoot_mC3A4A69472C456DF2FC5BB9175D84A251C66A929_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m7F5F31A56770F7A7418214B7A3928754E9F40BF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m3D023308A7A44C20875FE8592F3856E1EF607543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetRootU3Eb__0_0_m0B24A7BC314E4F7947E70EEF8789859712F96337_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_bones));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BvhSkeletonEstimator_GetRoot_mC3A4A69472C456DF2FC5BB9175D84A251C66A929_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4129));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4130));
	Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4131));
		// var hips = bones.Where(x => x.Parent == null).ToArray();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4132));
		RuntimeObject* L_0 = ___0_bones;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* L_1 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* L_3 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4133));
		Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* L_4 = (Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D*)il2cpp_codegen_object_new(Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m0589ABE0FC3B524804B5C99C772EBF57DBE71D1E(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CGetRootU3Eb__0_0_m0B24A7BC314E4F7947E70EEF8789859712F96337_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4133));
		Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* L_5 = L_4;
		((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4134));
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m3D023308A7A44C20875FE8592F3856E1EF607543(G_B2_1, G_B2_0, Enumerable_Where_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m3D023308A7A44C20875FE8592F3856E1EF607543_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4134));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4135));
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_7;
		L_7 = Enumerable_ToArray_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m7F5F31A56770F7A7418214B7A3928754E9F40BF9(L_6, Enumerable_ToArray_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m7F5F31A56770F7A7418214B7A3928754E9F40BF9_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4135));
		V_0 = L_7;
		// if (hips.Length != 1)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4136));
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_8 = V_0;
		NullCheck(L_8);
		V_1 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4137));
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4138));
		// throw new System.Exception("Require unique root");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4139));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4140));
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F7E31A57D54C1CB0AE3D0134B5640AC33153DF6)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4140));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BvhSkeletonEstimator_GetRoot_mC3A4A69472C456DF2FC5BB9175D84A251C66A929_RuntimeMethod_var)));
	}

IL_0045:
	{
		// return hips[0];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4141));
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = 0;
		RuntimeObject* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		goto IL_004b;
	}

IL_004b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4142));
		RuntimeObject* L_14 = V_2;
		return L_14;
	}
}
// UniHumanoid.IBone UniHumanoid.BvhSkeletonEstimator::SelectBone(System.Func`3<UniHumanoid.IBone,UniHumanoid.IBone,UniHumanoid.IBone>,System.Collections.Generic.IList`1<UniHumanoid.IBone>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BvhSkeletonEstimator_SelectBone_m019838CB786A5FCC3B716833379B562AA23038F7 (Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* ___0_selector, RuntimeObject* ___1_bones, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhSkeletonEstimator_SelectBone_m019838CB786A5FCC3B716833379B562AA23038F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tAFEC19DC35BBB8D14E6B4410BFC4D29762BA60FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tEC4B815B305AFCEE078D7784719BA547982AE509_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_selector), (&___1_bones));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BvhSkeletonEstimator_SelectBone_m019838CB786A5FCC3B716833379B562AA23038F7_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4143));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4144));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4145));
		// if (bones == null || bones.Count == 0) throw new Exception("no bones");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4146));
		RuntimeObject* L_0 = ___1_bones;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = ___1_bones;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4147));
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UniHumanoid.IBone>::get_Count() */, ICollection_1_tAFEC19DC35BBB8D14E6B4410BFC4D29762BA60FF_il2cpp_TypeInfo_var, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4147));
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_1 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4148));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// if (bones == null || bones.Count == 0) throw new Exception("no bones");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4149));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4150));
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8CFDE6052CA0FD77D6503747E37D0F81B977C776)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4150));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BvhSkeletonEstimator_SelectBone_m019838CB786A5FCC3B716833379B562AA23038F7_RuntimeMethod_var)));
	}

IL_001f:
	{
		// var current = bones[0];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4151));
		RuntimeObject* L_5 = ___1_bones;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4152));
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UniHumanoid.IBone>::get_Item(System.Int32) */, IList_1_tEC4B815B305AFCEE078D7784719BA547982AE509_il2cpp_TypeInfo_var, L_5, 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4152));
		V_0 = L_6;
		// for (var i = 1; i < bones.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4153));
		V_2 = 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4154));
		goto IL_0040;
	}

IL_002b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4155));
		// current = selector(current, bones[i]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4156));
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_7 = ___0_selector;
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9 = ___1_bones;
		int32_t L_10 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4157));
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UniHumanoid.IBone>::get_Item(System.Int32) */, IList_1_tEC4B815B305AFCEE078D7784719BA547982AE509_il2cpp_TypeInfo_var, L_9, L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4157));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4158));
		NullCheck(L_7);
		RuntimeObject* L_12;
		L_12 = Func_3_Invoke_m8B5FED920D51C55D20F98F1AAF0E612303473FB1_inline(L_7, L_8, L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4158));
		V_0 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4159));
		// for (var i = 1; i < bones.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4160));
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0040:
	{
		// for (var i = 1; i < bones.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4161));
		int32_t L_14 = V_2;
		RuntimeObject* L_15 = ___1_bones;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4162));
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UniHumanoid.IBone>::get_Count() */, ICollection_1_tAFEC19DC35BBB8D14E6B4410BFC4D29762BA60FF_il2cpp_TypeInfo_var, L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4162));
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)L_16))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4163));
		bool L_17 = V_3;
		if (L_17)
		{
			goto IL_002b;
		}
	}
	{
		// return current;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4164));
		RuntimeObject* L_18 = V_0;
		V_4 = L_18;
		goto IL_0052;
	}

IL_0052:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4165));
		RuntimeObject* L_19 = V_4;
		return L_19;
	}
}
// System.Void UniHumanoid.BvhSkeletonEstimator::GetSpineAndHips(UniHumanoid.IBone,UniHumanoid.IBone&,UniHumanoid.IBone&,UniHumanoid.IBone&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BvhSkeletonEstimator_GetSpineAndHips_mBF56FFDF85DDD9CF261B3A1044E68149D10371E1 (RuntimeObject* ___0_hips, RuntimeObject** ___1_spine, RuntimeObject** ___2_leg_L, RuntimeObject** ___3_leg_R, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhSkeletonEstimator_GetSpineAndHips_mBF56FFDF85DDD9CF261B3A1044E68149D10371E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tAFEC19DC35BBB8D14E6B4410BFC4D29762BA60FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetSpineAndHipsU3Eb__2_0_m647E2F7D1E1E8EE14CFED1B2A7C24D7A2C5AD3AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetSpineAndHipsU3Eb__2_1_m5928CA23BE6596A3C4A88B05805512065832DF32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetSpineAndHipsU3Eb__2_2_m02813F4A2A1D9EC6C585E9AF412E84AA5C59CC24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_hips), (&___1_spine), (&___2_leg_L), (&___3_leg_R));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BvhSkeletonEstimator_GetSpineAndHips_mBF56FFDF85DDD9CF261B3A1044E68149D10371E1_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4166));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4167));
	Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* G_B4_0 = NULL;
	RuntimeObject** G_B4_1 = NULL;
	Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* G_B3_0 = NULL;
	RuntimeObject** G_B3_1 = NULL;
	Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* G_B6_0 = NULL;
	RuntimeObject** G_B6_1 = NULL;
	Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* G_B5_0 = NULL;
	RuntimeObject** G_B5_1 = NULL;
	Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* G_B8_0 = NULL;
	RuntimeObject** G_B8_1 = NULL;
	Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* G_B7_0 = NULL;
	RuntimeObject** G_B7_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4168));
		// if (hips.Children.Count != 3) throw new System.Exception("Hips require 3 children");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4169));
		RuntimeObject* L_0 = ___0_hips;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4170));
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IList`1<UniHumanoid.IBone> UniHumanoid.IBone::get_Children() */, IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4170));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4171));
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UniHumanoid.IBone>::get_Count() */, ICollection_1_tAFEC19DC35BBB8D14E6B4410BFC4D29762BA60FF_il2cpp_TypeInfo_var, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4171));
		V_0 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4172));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// if (hips.Children.Count != 3) throw new System.Exception("Hips require 3 children");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4173));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4174));
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD7A3B40B8A32FA24131781A1D953D1E223A1CB6)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4174));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BvhSkeletonEstimator_GetSpineAndHips_mBF56FFDF85DDD9CF261B3A1044E68149D10371E1_RuntimeMethod_var)));
	}

IL_0021:
	{
		// spine = SelectBone((l, r) => l.CenterOfDescendant().y > r.CenterOfDescendant().y ? l : r, hips.Children);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4175));
		RuntimeObject** L_5 = ___1_spine;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_6 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_2;
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = L_5;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = L_5;
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* L_8 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4176));
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_9 = (Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F*)il2cpp_codegen_object_new(Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_3__ctor_m50F02032F416DD6574AD57B4F958887518A4B246(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3CGetSpineAndHipsU3Eb__2_0_m647E2F7D1E1E8EE14CFED1B2A7C24D7A2C5AD3AB_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4176));
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_10 = L_9;
		((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_2), (void*)L_10);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
	}

IL_0041:
	{
		RuntimeObject* L_11 = ___0_hips;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4177));
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IList`1<UniHumanoid.IBone> UniHumanoid.IBone::get_Children() */, IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var, L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4177));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4178));
		RuntimeObject* L_13;
		L_13 = BvhSkeletonEstimator_SelectBone_m019838CB786A5FCC3B716833379B562AA23038F7(G_B4_0, L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4178));
		*((RuntimeObject**)G_B4_1) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)G_B4_1, (void*)(RuntimeObject*)L_13);
		// leg_L = SelectBone((l, r) => l.CenterOfDescendant().x < r.CenterOfDescendant().x ? l : r, hips.Children);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4179));
		RuntimeObject** L_14 = ___2_leg_L;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_15 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_3;
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_16 = L_15;
		G_B5_0 = L_16;
		G_B5_1 = L_14;
		if (L_16)
		{
			G_B6_0 = L_16;
			G_B6_1 = L_14;
			goto IL_006d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* L_17 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4180));
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_18 = (Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F*)il2cpp_codegen_object_new(Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Func_3__ctor_m50F02032F416DD6574AD57B4F958887518A4B246(L_18, L_17, (intptr_t)((void*)U3CU3Ec_U3CGetSpineAndHipsU3Eb__2_1_m5928CA23BE6596A3C4A88B05805512065832DF32_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4180));
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_19 = L_18;
		((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_3), (void*)L_19);
		G_B6_0 = L_19;
		G_B6_1 = G_B5_1;
	}

IL_006d:
	{
		RuntimeObject* L_20 = ___0_hips;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4181));
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IList`1<UniHumanoid.IBone> UniHumanoid.IBone::get_Children() */, IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var, L_20);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4181));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4182));
		RuntimeObject* L_22;
		L_22 = BvhSkeletonEstimator_SelectBone_m019838CB786A5FCC3B716833379B562AA23038F7(G_B6_0, L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4182));
		*((RuntimeObject**)G_B6_1) = (RuntimeObject*)L_22;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)G_B6_1, (void*)(RuntimeObject*)L_22);
		// leg_R = SelectBone((l, r) => l.CenterOfDescendant().x > r.CenterOfDescendant().x ? l : r, hips.Children);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4183));
		RuntimeObject** L_23 = ___3_leg_R;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_24 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__2_2_4;
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_25 = L_24;
		G_B7_0 = L_25;
		G_B7_1 = L_23;
		if (L_25)
		{
			G_B8_0 = L_25;
			G_B8_1 = L_23;
			goto IL_0099;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* L_26 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4184));
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_27 = (Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F*)il2cpp_codegen_object_new(Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_3__ctor_m50F02032F416DD6574AD57B4F958887518A4B246(L_27, L_26, (intptr_t)((void*)U3CU3Ec_U3CGetSpineAndHipsU3Eb__2_2_m02813F4A2A1D9EC6C585E9AF412E84AA5C59CC24_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4184));
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_28 = L_27;
		((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__2_2_4 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__2_2_4), (void*)L_28);
		G_B8_0 = L_28;
		G_B8_1 = G_B7_1;
	}

IL_0099:
	{
		RuntimeObject* L_29 = ___0_hips;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4185));
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IList`1<UniHumanoid.IBone> UniHumanoid.IBone::get_Children() */, IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var, L_29);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4185));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4186));
		RuntimeObject* L_31;
		L_31 = BvhSkeletonEstimator_SelectBone_m019838CB786A5FCC3B716833379B562AA23038F7(G_B8_0, L_30, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4186));
		*((RuntimeObject**)G_B8_1) = (RuntimeObject*)L_31;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)G_B8_1, (void*)(RuntimeObject*)L_31);
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4187));
		return;
	}
}
// System.Void UniHumanoid.BvhSkeletonEstimator::GetNeckAndArms(UniHumanoid.IBone,UniHumanoid.IBone&,UniHumanoid.IBone&,UniHumanoid.IBone&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BvhSkeletonEstimator_GetNeckAndArms_m7C232A8ED0C8C16FB84AE28EE91E268651184508 (RuntimeObject* ___0_chest, RuntimeObject** ___1_neck, RuntimeObject** ___2_arm_L, RuntimeObject** ___3_arm_R, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhSkeletonEstimator_GetNeckAndArms_m7C232A8ED0C8C16FB84AE28EE91E268651184508_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tAFEC19DC35BBB8D14E6B4410BFC4D29762BA60FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetNeckAndArmsU3Eb__3_0_mB739D106B67A3D3C21146A4692791DFEB16F5F21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetNeckAndArmsU3Eb__3_1_mEEB8AB13946E6CFC73D89B32FD83497331B3B4C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetNeckAndArmsU3Eb__3_2_m5344F7668BBC2AC832C353DBD5A5623B84951A06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_chest), (&___1_neck), (&___2_arm_L), (&___3_arm_R));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BvhSkeletonEstimator_GetNeckAndArms_m7C232A8ED0C8C16FB84AE28EE91E268651184508_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4188));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4189));
	Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* G_B4_0 = NULL;
	RuntimeObject** G_B4_1 = NULL;
	Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* G_B3_0 = NULL;
	RuntimeObject** G_B3_1 = NULL;
	Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* G_B6_0 = NULL;
	RuntimeObject** G_B6_1 = NULL;
	Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* G_B5_0 = NULL;
	RuntimeObject** G_B5_1 = NULL;
	Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* G_B8_0 = NULL;
	RuntimeObject** G_B8_1 = NULL;
	Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* G_B7_0 = NULL;
	RuntimeObject** G_B7_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4190));
		// if (chest.Children.Count != 3) throw new System.Exception("Chest require 3 children");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4191));
		RuntimeObject* L_0 = ___0_chest;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4192));
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IList`1<UniHumanoid.IBone> UniHumanoid.IBone::get_Children() */, IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4192));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4193));
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UniHumanoid.IBone>::get_Count() */, ICollection_1_tAFEC19DC35BBB8D14E6B4410BFC4D29762BA60FF_il2cpp_TypeInfo_var, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4193));
		V_0 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4194));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// if (chest.Children.Count != 3) throw new System.Exception("Chest require 3 children");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4195));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4196));
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0C4FF4D8D536521833CE6E3FF55C30EC16F582D)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4196));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BvhSkeletonEstimator_GetNeckAndArms_m7C232A8ED0C8C16FB84AE28EE91E268651184508_RuntimeMethod_var)));
	}

IL_0021:
	{
		// neck = SelectBone((l, r) => l.CenterOfDescendant().y > r.CenterOfDescendant().y ? l : r, chest.Children);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4197));
		RuntimeObject** L_5 = ___1_neck;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_6 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_5;
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = L_5;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = L_5;
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* L_8 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4198));
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_9 = (Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F*)il2cpp_codegen_object_new(Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_3__ctor_m50F02032F416DD6574AD57B4F958887518A4B246(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3CGetNeckAndArmsU3Eb__3_0_mB739D106B67A3D3C21146A4692791DFEB16F5F21_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4198));
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_10 = L_9;
		((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_5), (void*)L_10);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
	}

IL_0041:
	{
		RuntimeObject* L_11 = ___0_chest;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4199));
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IList`1<UniHumanoid.IBone> UniHumanoid.IBone::get_Children() */, IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var, L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4199));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4200));
		RuntimeObject* L_13;
		L_13 = BvhSkeletonEstimator_SelectBone_m019838CB786A5FCC3B716833379B562AA23038F7(G_B4_0, L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4200));
		*((RuntimeObject**)G_B4_1) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)G_B4_1, (void*)(RuntimeObject*)L_13);
		// arm_L = SelectBone((l, r) => l.CenterOfDescendant().x < r.CenterOfDescendant().x ? l : r, chest.Children);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4201));
		RuntimeObject** L_14 = ___2_arm_L;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_15 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_6;
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_16 = L_15;
		G_B5_0 = L_16;
		G_B5_1 = L_14;
		if (L_16)
		{
			G_B6_0 = L_16;
			G_B6_1 = L_14;
			goto IL_006d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* L_17 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4202));
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_18 = (Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F*)il2cpp_codegen_object_new(Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Func_3__ctor_m50F02032F416DD6574AD57B4F958887518A4B246(L_18, L_17, (intptr_t)((void*)U3CU3Ec_U3CGetNeckAndArmsU3Eb__3_1_mEEB8AB13946E6CFC73D89B32FD83497331B3B4C0_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4202));
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_19 = L_18;
		((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_6), (void*)L_19);
		G_B6_0 = L_19;
		G_B6_1 = G_B5_1;
	}

IL_006d:
	{
		RuntimeObject* L_20 = ___0_chest;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4203));
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IList`1<UniHumanoid.IBone> UniHumanoid.IBone::get_Children() */, IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var, L_20);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4203));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4204));
		RuntimeObject* L_22;
		L_22 = BvhSkeletonEstimator_SelectBone_m019838CB786A5FCC3B716833379B562AA23038F7(G_B6_0, L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4204));
		*((RuntimeObject**)G_B6_1) = (RuntimeObject*)L_22;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)G_B6_1, (void*)(RuntimeObject*)L_22);
		// arm_R = SelectBone((l, r) => l.CenterOfDescendant().x > r.CenterOfDescendant().x ? l : r, chest.Children);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4205));
		RuntimeObject** L_23 = ___3_arm_R;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_24 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__3_2_7;
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_25 = L_24;
		G_B7_0 = L_25;
		G_B7_1 = L_23;
		if (L_25)
		{
			G_B8_0 = L_25;
			G_B8_1 = L_23;
			goto IL_0099;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* L_26 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4206));
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_27 = (Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F*)il2cpp_codegen_object_new(Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_3__ctor_m50F02032F416DD6574AD57B4F958887518A4B246(L_27, L_26, (intptr_t)((void*)U3CU3Ec_U3CGetNeckAndArmsU3Eb__3_2_m5344F7668BBC2AC832C353DBD5A5623B84951A06_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4206));
		Func_3_tF9DA206B5DF0FDC7882BCB4968F002DFA8182F3F* L_28 = L_27;
		((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__3_2_7 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__3_2_7), (void*)L_28);
		G_B8_0 = L_28;
		G_B8_1 = G_B7_1;
	}

IL_0099:
	{
		RuntimeObject* L_29 = ___0_chest;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4207));
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IList`1<UniHumanoid.IBone> UniHumanoid.IBone::get_Children() */, IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var, L_29);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4207));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4208));
		RuntimeObject* L_31;
		L_31 = BvhSkeletonEstimator_SelectBone_m019838CB786A5FCC3B716833379B562AA23038F7(G_B8_0, L_30, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4208));
		*((RuntimeObject**)G_B8_1) = (RuntimeObject*)L_31;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)G_B8_1, (void*)(RuntimeObject*)L_31);
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4209));
		return;
	}
}
// UniHumanoid.BvhSkeletonEstimator/Arm UniHumanoid.BvhSkeletonEstimator::GetArm(UniHumanoid.IBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55 BvhSkeletonEstimator_GetArm_mA88BA0C78CD08C7300C559191C6CA1A805AB6CFC (BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64* __this, RuntimeObject* ___0_shoulder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhSkeletonEstimator_GetArm_mA88BA0C78CD08C7300C559191C6CA1A805AB6CFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m7F5F31A56770F7A7418214B7A3928754E9F40BF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55 V_4;
	memset((&V_4), 0, sizeof(V_4));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_shoulder));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BvhSkeletonEstimator_GetArm_mA88BA0C78CD08C7300C559191C6CA1A805AB6CFC_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4210));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4211));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4212));
		// var bones = shoulder.Traverse().ToArray();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4213));
		RuntimeObject* L_0 = ___0_shoulder;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4214));
		RuntimeObject* L_1;
		L_1 = IBoneExtensions_Traverse_m922659D6A7E9FE709DFA9C658D96E79B57838874(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4214));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4215));
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_2;
		L_2 = Enumerable_ToArray_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m7F5F31A56770F7A7418214B7A3928754E9F40BF9(L_1, Enumerable_ToArray_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m7F5F31A56770F7A7418214B7A3928754E9F40BF9_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4215));
		V_0 = L_2;
		// switch (bones.Length)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4216));
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_3 = V_0;
		NullCheck(L_3);
		V_2 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4217));
		int32_t L_4 = V_2;
		V_1 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4218));
		int32_t L_5 = V_1;
		if ((!(((uint32_t)L_5) > ((uint32_t)3))))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_001f;
	}

IL_0019:
	{
		// throw new NotImplementedException();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4219));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4220));
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_6 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4220));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BvhSkeletonEstimator_GetArm_mA88BA0C78CD08C7300C559191C6CA1A805AB6CFC_RuntimeMethod_var)));
	}

IL_001f:
	{
		// return new Arm
		// {
		//     Shoulder = bones[0],
		//     UpperArm = bones[1],
		//     LowerArm = bones[2],
		//     Hand = bones[3],
		// };
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4221));
		il2cpp_codegen_initobj((&V_3), sizeof(Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55));
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = 0;
		RuntimeObject* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		(&V_3)->___Shoulder_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___Shoulder_0), (void*)L_9);
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 1;
		RuntimeObject* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		(&V_3)->___UpperArm_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___UpperArm_1), (void*)L_12);
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = 2;
		RuntimeObject* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		(&V_3)->___LowerArm_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___LowerArm_2), (void*)L_15);
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = 3;
		RuntimeObject* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		(&V_3)->___Hand_3 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___Hand_3), (void*)L_18);
		Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55 L_19 = V_3;
		V_4 = L_19;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4222));
		Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55 L_20 = V_4;
		return L_20;
	}
}
// UniHumanoid.BvhSkeletonEstimator/Leg UniHumanoid.BvhSkeletonEstimator::GetLeg(UniHumanoid.IBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3 BvhSkeletonEstimator_GetLeg_mF45B73CC8B2954569F3F6AD5F697F1B410D8360F (BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64* __this, RuntimeObject* ___0_leg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhSkeletonEstimator_GetLeg_mF45B73CC8B2954569F3F6AD5F697F1B410D8360F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m7F5F31A56770F7A7418214B7A3928754E9F40BF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m3D023308A7A44C20875FE8592F3856E1EF607543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetLegU3Eb__7_0_m1729267B32850331C891A0F4A84EDADA9036B232_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_leg));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BvhSkeletonEstimator_GetLeg_mF45B73CC8B2954569F3F6AD5F697F1B410D8360F_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4223));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4224));
	Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4225));
		// var bones = leg.Traverse().Where(x => !x.Name.ToLower().Contains("buttock")).ToArray();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4226));
		RuntimeObject* L_0 = ___0_leg;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4227));
		RuntimeObject* L_1;
		L_1 = IBoneExtensions_Traverse_m922659D6A7E9FE709DFA9C658D96E79B57838874(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4227));
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* L_2 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_8;
		Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* L_4 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4228));
		Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* L_5 = (Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D*)il2cpp_codegen_object_new(Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m0589ABE0FC3B524804B5C99C772EBF57DBE71D1E(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CGetLegU3Eb__7_0_m1729267B32850331C891A0F4A84EDADA9036B232_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4228));
		Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* L_6 = L_5;
		((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_8), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0026:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4229));
		RuntimeObject* L_7;
		L_7 = Enumerable_Where_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m3D023308A7A44C20875FE8592F3856E1EF607543(G_B2_1, G_B2_0, Enumerable_Where_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m3D023308A7A44C20875FE8592F3856E1EF607543_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4229));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4230));
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_8;
		L_8 = Enumerable_ToArray_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m7F5F31A56770F7A7418214B7A3928754E9F40BF9(L_7, Enumerable_ToArray_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m7F5F31A56770F7A7418214B7A3928754E9F40BF9_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4230));
		V_0 = L_8;
		// switch (bones.Length)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4231));
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_9 = V_0;
		NullCheck(L_9);
		V_2 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4232));
		int32_t L_10 = V_2;
		V_1 = L_10;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4233));
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) > ((uint32_t)2))))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)3)))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_0074;
	}

IL_0043:
	{
		// throw new NotImplementedException();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4234));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4235));
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_13 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4235));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BvhSkeletonEstimator_GetLeg_mF45B73CC8B2954569F3F6AD5F697F1B410D8360F_RuntimeMethod_var)));
	}

IL_0049:
	{
		// return new Leg
		// {
		//     UpperLeg = bones[0],
		//     LowerLeg = bones[1],
		//     Foot = bones[2],
		// };
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4236));
		il2cpp_codegen_initobj((&V_3), sizeof(Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3));
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		RuntimeObject* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		(&V_3)->___UpperLeg_0 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___UpperLeg_0), (void*)L_16);
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = 1;
		RuntimeObject* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		(&V_3)->___LowerLeg_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___LowerLeg_1), (void*)L_19);
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = 2;
		RuntimeObject* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		(&V_3)->___Foot_2 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___Foot_2), (void*)L_22);
		Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3 L_23 = V_3;
		V_4 = L_23;
		goto IL_00b9;
	}

IL_0074:
	{
		// return new Leg
		// {
		//     UpperLeg = bones[bones.Length - 4],
		//     LowerLeg = bones[bones.Length - 3],
		//     Foot = bones[bones.Length - 2],
		//     Toes = bones[bones.Length - 1],
		// };
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4237));
		il2cpp_codegen_initobj((&V_3), sizeof(Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3));
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_24 = V_0;
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_25 = V_0;
		NullCheck(L_25);
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_25)->max_length)), 4));
		RuntimeObject* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		(&V_3)->___UpperLeg_0 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___UpperLeg_0), (void*)L_27);
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_28 = V_0;
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_29 = V_0;
		NullCheck(L_29);
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_29)->max_length)), 3));
		RuntimeObject* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		(&V_3)->___LowerLeg_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___LowerLeg_1), (void*)L_31);
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_32 = V_0;
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_33 = V_0;
		NullCheck(L_33);
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_33)->max_length)), 2));
		RuntimeObject* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		(&V_3)->___Foot_2 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___Foot_2), (void*)L_35);
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_36 = V_0;
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_37 = V_0;
		NullCheck(L_37);
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_37)->max_length)), 1));
		RuntimeObject* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		(&V_3)->___Toes_3 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___Toes_3), (void*)L_39);
		Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3 L_40 = V_3;
		V_4 = L_40;
		goto IL_00b9;
	}

IL_00b9:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4238));
		Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3 L_41 = V_4;
		return L_41;
	}
}
// UniHumanoid.Skeleton UniHumanoid.BvhSkeletonEstimator::Detect(System.Collections.Generic.IList`1<UniHumanoid.IBone>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE BvhSkeletonEstimator_Detect_m8590F35D09EFE278F8310A55B41CF7E6132225AA (BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64* __this, RuntimeObject* ___0_bones, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhSkeletonEstimator_Detect_m8590F35D09EFE278F8310A55B41CF7E6132225AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_mFDF2A8B918768587D0A04CD259FB3D85A893F957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Last_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m01944214001FA224522129E102E521B72EF0D7C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m7F5F31A56770F7A7418214B7A3928754E9F40BF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m3D023308A7A44C20875FE8592F3856E1EF607543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tAFEC19DC35BBB8D14E6B4410BFC4D29762BA60FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t209B7769C163174342BDDD388E7831F0A48277CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD8C66FF0320BD62B6AB6F5FB4E27C7A326468CD1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD8C66FF0320BD62B6AB6F5FB4E27C7A326468CD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA88F5063680AC5A1F40E439D5681433089375D05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC74E36CF226BEA2843849C034619DCA6FF568BD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB4F62BAA727837B4387A2701570F68477843EB34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC6D02345441E4D990506061CE1C806C7BB803A96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CDetectU3Eb__8_0_m0F1937CD6E8CB5E2E27E1EAF09F8BB7CBEFE5BC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CDetectU3Eb__8_1_mB3874E8D814E1E65B6BC27CBF8B86BB163099D01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3 V_6;
	memset((&V_6), 0, sizeof(V_6));
	List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55 V_12;
	memset((&V_12), 0, sizeof(V_12));
	IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* V_13 = NULL;
	Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE V_14;
	memset((&V_14), 0, sizeof(V_14));
	RuntimeObject* V_15 = NULL;
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE V_22;
	memset((&V_22), 0, sizeof(V_22));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_bones));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6), (&V_7), (&V_8), (&V_9), (&V_10), (&V_11), (&V_12), (&V_13), (&V_14), (&V_16));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BvhSkeletonEstimator_Detect_m8590F35D09EFE278F8310A55B41CF7E6132225AA_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4239));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4240));
	Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* G_B26_0 = NULL;
	IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* G_B26_1 = NULL;
	RuntimeObject* G_B26_2 = NULL;
	int32_t G_B26_3 = 0;
	Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE* G_B26_4 = NULL;
	Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* G_B25_0 = NULL;
	IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* G_B25_1 = NULL;
	RuntimeObject* G_B25_2 = NULL;
	int32_t G_B25_3 = 0;
	Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE* G_B25_4 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4241));
		// var root = GetRoot(bones);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4242));
		RuntimeObject* L_0 = ___0_bones;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4243));
		RuntimeObject* L_1;
		L_1 = BvhSkeletonEstimator_GetRoot_mC3A4A69472C456DF2FC5BB9175D84A251C66A929(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4243));
		V_0 = L_1;
		// var hips = root.Traverse().First(x => x.Children.Count == 3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4244));
		RuntimeObject* L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4245));
		RuntimeObject* L_3;
		L_3 = IBoneExtensions_Traverse_m922659D6A7E9FE709DFA9C658D96E79B57838874(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4245));
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* L_4 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_9;
		Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* L_6 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4246));
		Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* L_7 = (Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D*)il2cpp_codegen_object_new(Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_2__ctor_m0589ABE0FC3B524804B5C99C772EBF57DBE71D1E(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3CDetectU3Eb__8_0_m0F1937CD6E8CB5E2E27E1EAF09F8BB7CBEFE5BC6_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4246));
		Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* L_8 = L_7;
		((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_9), (void*)L_8);
		G_B2_0 = L_8;
		G_B2_1 = G_B1_1;
	}

IL_002d:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4247));
		RuntimeObject* L_9;
		L_9 = Enumerable_First_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_mFDF2A8B918768587D0A04CD259FB3D85A893F957(G_B2_1, G_B2_0, Enumerable_First_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_mFDF2A8B918768587D0A04CD259FB3D85A893F957_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4247));
		V_1 = L_9;
		// GetSpineAndHips(hips, out spine, out hip_L, out hip_R);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4248));
		RuntimeObject* L_10 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4249));
		BvhSkeletonEstimator_GetSpineAndHips_mBF56FFDF85DDD9CF261B3A1044E68149D10371E1(L_10, (&V_2), (&V_3), (&V_4), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4249));
		// var legLeft = GetLeg(hip_L);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4250));
		RuntimeObject* L_11 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4251));
		Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3 L_12;
		L_12 = BvhSkeletonEstimator_GetLeg_mF45B73CC8B2954569F3F6AD5F697F1B410D8360F(__this, L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4251));
		V_5 = L_12;
		// var legRight = GetLeg(hip_R);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4252));
		RuntimeObject* L_13 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4253));
		Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3 L_14;
		L_14 = BvhSkeletonEstimator_GetLeg_mF45B73CC8B2954569F3F6AD5F697F1B410D8360F(__this, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4253));
		V_6 = L_14;
		// var spineToChest = new List<IBone>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4254));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4255));
		List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* L_15 = (List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3*)il2cpp_codegen_object_new(List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		List_1__ctor_mC74E36CF226BEA2843849C034619DCA6FF568BD6(L_15, List_1__ctor_mC74E36CF226BEA2843849C034619DCA6FF568BD6_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4255));
		V_7 = L_15;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4256));
		// foreach(var x in spine.Traverse())
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4257));
		RuntimeObject* L_16 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4258));
		RuntimeObject* L_17;
		L_17 = IBoneExtensions_Traverse_m922659D6A7E9FE709DFA9C658D96E79B57838874(L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4258));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4259));
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UniHumanoid.IBone>::GetEnumerator() */, IEnumerable_1_t209B7769C163174342BDDD388E7831F0A48277CB_il2cpp_TypeInfo_var, L_17);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4259));
		V_15 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a1:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4274));
					RuntimeObject* L_19 = V_15;
					if (!L_19)
					{
						goto IL_00ad;
					}
				}
				{
					RuntimeObject* L_20 = V_15;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4275));
					NullCheck(L_20);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_20);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4275));
				}

IL_00ad:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4276));
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4260));
				goto IL_0096_1;
			}

IL_006a_1:
			{
				// foreach(var x in spine.Traverse())
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4261));
				RuntimeObject* L_21 = V_15;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4262));
				NullCheck(L_21);
				RuntimeObject* L_22;
				L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UniHumanoid.IBone>::get_Current() */, IEnumerator_1_tD8C66FF0320BD62B6AB6F5FB4E27C7A326468CD1_il2cpp_TypeInfo_var, L_21);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4262));
				V_16 = L_22;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4263));
				// spineToChest.Add(x);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4264));
				List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* L_23 = V_7;
				RuntimeObject* L_24 = V_16;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4265));
				NullCheck(L_23);
				List_1_Add_mA88F5063680AC5A1F40E439D5681433089375D05_inline(L_23, L_24, List_1_Add_mA88F5063680AC5A1F40E439D5681433089375D05_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4265));
				// if (x.Children.Count == 3) break;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4266));
				RuntimeObject* L_25 = V_16;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4267));
				NullCheck(L_25);
				RuntimeObject* L_26;
				L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IList`1<UniHumanoid.IBone> UniHumanoid.IBone::get_Children() */, IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var, L_25);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4267));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4268));
				NullCheck(L_26);
				int32_t L_27;
				L_27 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UniHumanoid.IBone>::get_Count() */, ICollection_1_tAFEC19DC35BBB8D14E6B4410BFC4D29762BA60FF_il2cpp_TypeInfo_var, L_26);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4268));
				V_17 = (bool)((((int32_t)L_27) == ((int32_t)3))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4269));
				bool L_28 = V_17;
				if (!L_28)
				{
					goto IL_0095_1;
				}
			}
			{
				// if (x.Children.Count == 3) break;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4270));
				goto IL_009f_1;
			}

IL_0095_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4271));
			}

IL_0096_1:
			{
				// foreach(var x in spine.Traverse())
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4272));
				RuntimeObject* L_29 = V_15;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4273));
				NullCheck(L_29);
				bool L_30;
				L_30 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_29);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4273));
				if (L_30)
				{
					goto IL_006a_1;
				}
			}

IL_009f_1:
			{
				goto IL_00ae;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ae:
	{
		// GetNeckAndArms(spineToChest.Last(), out neck, out shoulder_L, out shoulder_R);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4277));
		List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* L_31 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4278));
		RuntimeObject* L_32;
		L_32 = Enumerable_Last_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m01944214001FA224522129E102E521B72EF0D7C0(L_31, Enumerable_Last_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m01944214001FA224522129E102E521B72EF0D7C0_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4278));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4279));
		BvhSkeletonEstimator_GetNeckAndArms_m7C232A8ED0C8C16FB84AE28EE91E268651184508(L_32, (&V_8), (&V_9), (&V_10), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4279));
		// var armLeft = GetArm(shoulder_L);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4280));
		RuntimeObject* L_33 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4281));
		Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55 L_34;
		L_34 = BvhSkeletonEstimator_GetArm_mA88BA0C78CD08C7300C559191C6CA1A805AB6CFC(__this, L_33, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4281));
		V_11 = L_34;
		// var armRight = GetArm(shoulder_R);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4282));
		RuntimeObject* L_35 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4283));
		Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55 L_36;
		L_36 = BvhSkeletonEstimator_GetArm_mA88BA0C78CD08C7300C559191C6CA1A805AB6CFC(__this, L_35, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4283));
		V_12 = L_36;
		// var neckToHead = neck.Traverse().ToArray();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4284));
		RuntimeObject* L_37 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4285));
		RuntimeObject* L_38;
		L_38 = IBoneExtensions_Traverse_m922659D6A7E9FE709DFA9C658D96E79B57838874(L_37, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4285));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4286));
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_39;
		L_39 = Enumerable_ToArray_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m7F5F31A56770F7A7418214B7A3928754E9F40BF9(L_38, Enumerable_ToArray_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m7F5F31A56770F7A7418214B7A3928754E9F40BF9_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4286));
		V_13 = L_39;
		// var skeleton = new Skeleton();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4287));
		il2cpp_codegen_initobj((&V_14), sizeof(Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE));
		// skeleton.Set(HumanBodyBones.Hips, bones, hips);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4288));
		RuntimeObject* L_40 = ___0_bones;
		RuntimeObject* L_41 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4289));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), 0, L_40, L_41, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4289));
		// switch (spineToChest.Count)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4290));
		List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* L_42 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4291));
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_mB4F62BAA727837B4387A2701570F68477843EB34_inline(L_42, List_1_get_Count_mB4F62BAA727837B4387A2701570F68477843EB34_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4291));
		V_19 = L_43;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4292));
		int32_t L_44 = V_19;
		V_18 = L_44;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4293));
		int32_t L_45 = V_18;
		switch (L_45)
		{
			case 0:
			{
				goto IL_011c;
			}
			case 1:
			{
				goto IL_0122;
			}
			case 2:
			{
				goto IL_0139;
			}
			case 3:
			{
				goto IL_015f;
			}
		}
	}
	{
		goto IL_0198;
	}

IL_011c:
	{
		// throw new Exception();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4294));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4295));
		Exception_t* L_46 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_46);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_46, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4295));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BvhSkeletonEstimator_Detect_m8590F35D09EFE278F8310A55B41CF7E6132225AA_RuntimeMethod_var)));
	}

IL_0122:
	{
		// skeleton.Set(HumanBodyBones.Spine, bones, spineToChest[0]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4296));
		RuntimeObject* L_47 = ___0_bones;
		List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* L_48 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4297));
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = List_1_get_Item_mC6D02345441E4D990506061CE1C806C7BB803A96(L_48, 0, List_1_get_Item_mC6D02345441E4D990506061CE1C806C7BB803A96_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4297));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4298));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), 7, L_47, L_49, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4298));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4299));
		goto IL_01d0;
	}

IL_0139:
	{
		// skeleton.Set(HumanBodyBones.Spine, bones, spineToChest[0]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4300));
		RuntimeObject* L_50 = ___0_bones;
		List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* L_51 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4301));
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = List_1_get_Item_mC6D02345441E4D990506061CE1C806C7BB803A96(L_51, 0, List_1_get_Item_mC6D02345441E4D990506061CE1C806C7BB803A96_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4301));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4302));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), 7, L_50, L_52, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4302));
		// skeleton.Set(HumanBodyBones.Chest, bones, spineToChest[1]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4303));
		RuntimeObject* L_53 = ___0_bones;
		List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* L_54 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4304));
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = List_1_get_Item_mC6D02345441E4D990506061CE1C806C7BB803A96(L_54, 1, List_1_get_Item_mC6D02345441E4D990506061CE1C806C7BB803A96_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4304));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4305));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), 8, L_53, L_55, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4305));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4306));
		goto IL_01d0;
	}

IL_015f:
	{
		// skeleton.Set(HumanBodyBones.Spine, bones, spineToChest[0]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4307));
		RuntimeObject* L_56 = ___0_bones;
		List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* L_57 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4308));
		NullCheck(L_57);
		RuntimeObject* L_58;
		L_58 = List_1_get_Item_mC6D02345441E4D990506061CE1C806C7BB803A96(L_57, 0, List_1_get_Item_mC6D02345441E4D990506061CE1C806C7BB803A96_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4308));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4309));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), 7, L_56, L_58, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4309));
		// skeleton.Set(HumanBodyBones.Chest, bones, spineToChest[1]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4310));
		RuntimeObject* L_59 = ___0_bones;
		List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* L_60 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4311));
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = List_1_get_Item_mC6D02345441E4D990506061CE1C806C7BB803A96(L_60, 1, List_1_get_Item_mC6D02345441E4D990506061CE1C806C7BB803A96_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4311));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4312));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), 8, L_59, L_61, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4312));
		// skeleton.Set(HumanBodyBones.UpperChest, bones, spineToChest[2]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4313));
		RuntimeObject* L_62 = ___0_bones;
		List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* L_63 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4314));
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = List_1_get_Item_mC6D02345441E4D990506061CE1C806C7BB803A96(L_63, 2, List_1_get_Item_mC6D02345441E4D990506061CE1C806C7BB803A96_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4314));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4315));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), ((int32_t)54), L_62, L_64, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4315));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4316));
		goto IL_01d0;
	}

IL_0198:
	{
		// skeleton.Set(HumanBodyBones.Spine, bones, spineToChest[0]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4317));
		RuntimeObject* L_65 = ___0_bones;
		List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* L_66 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4318));
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = List_1_get_Item_mC6D02345441E4D990506061CE1C806C7BB803A96(L_66, 0, List_1_get_Item_mC6D02345441E4D990506061CE1C806C7BB803A96_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4318));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4319));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), 7, L_65, L_67, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4319));
		// skeleton.Set(HumanBodyBones.Chest, bones, spineToChest[1]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4320));
		RuntimeObject* L_68 = ___0_bones;
		List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* L_69 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4321));
		NullCheck(L_69);
		RuntimeObject* L_70;
		L_70 = List_1_get_Item_mC6D02345441E4D990506061CE1C806C7BB803A96(L_69, 1, List_1_get_Item_mC6D02345441E4D990506061CE1C806C7BB803A96_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4321));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4322));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), 8, L_68, L_70, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4322));
		// skeleton.Set(HumanBodyBones.UpperChest, bones, spineToChest.Last());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4323));
		RuntimeObject* L_71 = ___0_bones;
		List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* L_72 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4324));
		RuntimeObject* L_73;
		L_73 = Enumerable_Last_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m01944214001FA224522129E102E521B72EF0D7C0(L_72, Enumerable_Last_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m01944214001FA224522129E102E521B72EF0D7C0_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4324));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4325));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), ((int32_t)54), L_71, L_73, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4325));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4326));
		goto IL_01d0;
	}

IL_01d0:
	{
		// switch (neckToHead.Length)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4327));
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_74 = V_13;
		NullCheck(L_74);
		V_21 = ((int32_t)(((RuntimeArray*)L_74)->max_length));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4328));
		int32_t L_75 = V_21;
		V_20 = L_75;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4329));
		int32_t L_76 = V_20;
		switch (L_76)
		{
			case 0:
			{
				goto IL_01ef;
			}
			case 1:
			{
				goto IL_01f5;
			}
			case 2:
			{
				goto IL_0206;
			}
		}
	}
	{
		goto IL_0226;
	}

IL_01ef:
	{
		// throw new Exception();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4330));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4331));
		Exception_t* L_77 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_77);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_77, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4331));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_77, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BvhSkeletonEstimator_Detect_m8590F35D09EFE278F8310A55B41CF7E6132225AA_RuntimeMethod_var)));
	}

IL_01f5:
	{
		// skeleton.Set(HumanBodyBones.Head, bones, neckToHead[0]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4332));
		RuntimeObject* L_78 = ___0_bones;
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_79 = V_13;
		NullCheck(L_79);
		int32_t L_80 = 0;
		RuntimeObject* L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4333));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), ((int32_t)10), L_78, L_81, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4333));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4334));
		goto IL_026d;
	}

IL_0206:
	{
		// skeleton.Set(HumanBodyBones.Neck, bones, neckToHead[0]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4335));
		RuntimeObject* L_82 = ___0_bones;
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_83 = V_13;
		NullCheck(L_83);
		int32_t L_84 = 0;
		RuntimeObject* L_85 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4336));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), ((int32_t)9), L_82, L_85, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4336));
		// skeleton.Set(HumanBodyBones.Head, bones, neckToHead[1]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4337));
		RuntimeObject* L_86 = ___0_bones;
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_87 = V_13;
		NullCheck(L_87);
		int32_t L_88 = 1;
		RuntimeObject* L_89 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4338));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), ((int32_t)10), L_86, L_89, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4338));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4339));
		goto IL_026d;
	}

IL_0226:
	{
		// skeleton.Set(HumanBodyBones.Neck, bones, neckToHead[0]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4340));
		RuntimeObject* L_90 = ___0_bones;
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_91 = V_13;
		NullCheck(L_91);
		int32_t L_92 = 0;
		RuntimeObject* L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4341));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), ((int32_t)9), L_90, L_93, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4341));
		// skeleton.Set(HumanBodyBones.Head, bones, neckToHead.Where(x => x.Parent.Children.Count==1).Last());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4342));
		RuntimeObject* L_94 = ___0_bones;
		IBoneU5BU5D_tABB1B987512C2E78583557DDA3EE5EFBF93B46B2* L_95 = V_13;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* L_96 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__8_1_10;
		Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* L_97 = L_96;
		G_B25_0 = L_97;
		G_B25_1 = L_95;
		G_B25_2 = L_94;
		G_B25_3 = ((int32_t)10);
		G_B25_4 = (&V_14);
		if (L_97)
		{
			G_B26_0 = L_97;
			G_B26_1 = L_95;
			G_B26_2 = L_94;
			G_B26_3 = ((int32_t)10);
			G_B26_4 = (&V_14);
			goto IL_025b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* L_98 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4343));
		Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* L_99 = (Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D*)il2cpp_codegen_object_new(Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D_il2cpp_TypeInfo_var);
		NullCheck(L_99);
		Func_2__ctor_m0589ABE0FC3B524804B5C99C772EBF57DBE71D1E(L_99, L_98, (intptr_t)((void*)U3CU3Ec_U3CDetectU3Eb__8_1_mB3874E8D814E1E65B6BC27CBF8B86BB163099D01_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4343));
		Func_2_tAB6D26AB97FEAA29A7341CC4CD43D8584ECA796D* L_100 = L_99;
		((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__8_1_10 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__8_1_10), (void*)L_100);
		G_B26_0 = L_100;
		G_B26_1 = G_B25_1;
		G_B26_2 = G_B25_2;
		G_B26_3 = G_B25_3;
		G_B26_4 = G_B25_4;
	}

IL_025b:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4344));
		RuntimeObject* L_101;
		L_101 = Enumerable_Where_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m3D023308A7A44C20875FE8592F3856E1EF607543((RuntimeObject*)G_B26_1, G_B26_0, Enumerable_Where_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m3D023308A7A44C20875FE8592F3856E1EF607543_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4344));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4345));
		RuntimeObject* L_102;
		L_102 = Enumerable_Last_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m01944214001FA224522129E102E521B72EF0D7C0(L_101, Enumerable_Last_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m01944214001FA224522129E102E521B72EF0D7C0_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4345));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4346));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B(G_B26_4, G_B26_3, G_B26_2, L_102, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4346));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4347));
		goto IL_026d;
	}

IL_026d:
	{
		// skeleton.Set(HumanBodyBones.LeftUpperLeg, bones, legLeft.UpperLeg);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4348));
		RuntimeObject* L_103 = ___0_bones;
		Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3 L_104 = V_5;
		RuntimeObject* L_105 = L_104.___UpperLeg_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4349));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), 1, L_103, L_105, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4349));
		// skeleton.Set(HumanBodyBones.LeftLowerLeg, bones, legLeft.LowerLeg);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4350));
		RuntimeObject* L_106 = ___0_bones;
		Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3 L_107 = V_5;
		RuntimeObject* L_108 = L_107.___LowerLeg_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4351));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), 3, L_106, L_108, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4351));
		// skeleton.Set(HumanBodyBones.LeftFoot, bones, legLeft.Foot);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4352));
		RuntimeObject* L_109 = ___0_bones;
		Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3 L_110 = V_5;
		RuntimeObject* L_111 = L_110.___Foot_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4353));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), 5, L_109, L_111, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4353));
		// skeleton.Set(HumanBodyBones.LeftToes, bones, legLeft.Toes);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4354));
		RuntimeObject* L_112 = ___0_bones;
		Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3 L_113 = V_5;
		RuntimeObject* L_114 = L_113.___Toes_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4355));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), ((int32_t)19), L_112, L_114, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4355));
		// skeleton.Set(HumanBodyBones.RightUpperLeg, bones, legRight.UpperLeg);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4356));
		RuntimeObject* L_115 = ___0_bones;
		Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3 L_116 = V_6;
		RuntimeObject* L_117 = L_116.___UpperLeg_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4357));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), 2, L_115, L_117, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4357));
		// skeleton.Set(HumanBodyBones.RightLowerLeg, bones, legRight.LowerLeg);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4358));
		RuntimeObject* L_118 = ___0_bones;
		Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3 L_119 = V_6;
		RuntimeObject* L_120 = L_119.___LowerLeg_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4359));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), 4, L_118, L_120, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4359));
		// skeleton.Set(HumanBodyBones.RightFoot, bones, legRight.Foot);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4360));
		RuntimeObject* L_121 = ___0_bones;
		Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3 L_122 = V_6;
		RuntimeObject* L_123 = L_122.___Foot_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4361));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), 6, L_121, L_123, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4361));
		// skeleton.Set(HumanBodyBones.RightToes, bones, legRight.Toes);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4362));
		RuntimeObject* L_124 = ___0_bones;
		Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3 L_125 = V_6;
		RuntimeObject* L_126 = L_125.___Toes_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4363));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), ((int32_t)20), L_124, L_126, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4363));
		// skeleton.Set(HumanBodyBones.LeftShoulder, bones, armLeft.Shoulder);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4364));
		RuntimeObject* L_127 = ___0_bones;
		Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55 L_128 = V_11;
		RuntimeObject* L_129 = L_128.___Shoulder_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4365));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), ((int32_t)11), L_127, L_129, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4365));
		// skeleton.Set(HumanBodyBones.LeftUpperArm, bones, armLeft.UpperArm);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4366));
		RuntimeObject* L_130 = ___0_bones;
		Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55 L_131 = V_11;
		RuntimeObject* L_132 = L_131.___UpperArm_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4367));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), ((int32_t)13), L_130, L_132, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4367));
		// skeleton.Set(HumanBodyBones.LeftLowerArm, bones, armLeft.LowerArm);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4368));
		RuntimeObject* L_133 = ___0_bones;
		Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55 L_134 = V_11;
		RuntimeObject* L_135 = L_134.___LowerArm_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4369));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), ((int32_t)15), L_133, L_135, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4369));
		// skeleton.Set(HumanBodyBones.LeftHand, bones, armLeft.Hand);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4370));
		RuntimeObject* L_136 = ___0_bones;
		Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55 L_137 = V_11;
		RuntimeObject* L_138 = L_137.___Hand_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4371));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), ((int32_t)17), L_136, L_138, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4371));
		// skeleton.Set(HumanBodyBones.RightShoulder, bones, armRight.Shoulder);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4372));
		RuntimeObject* L_139 = ___0_bones;
		Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55 L_140 = V_12;
		RuntimeObject* L_141 = L_140.___Shoulder_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4373));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), ((int32_t)12), L_139, L_141, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4373));
		// skeleton.Set(HumanBodyBones.RightUpperArm, bones, armRight.UpperArm);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4374));
		RuntimeObject* L_142 = ___0_bones;
		Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55 L_143 = V_12;
		RuntimeObject* L_144 = L_143.___UpperArm_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4375));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), ((int32_t)14), L_142, L_144, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4375));
		// skeleton.Set(HumanBodyBones.RightLowerArm, bones, armRight.LowerArm);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4376));
		RuntimeObject* L_145 = ___0_bones;
		Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55 L_146 = V_12;
		RuntimeObject* L_147 = L_146.___LowerArm_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4377));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), ((int32_t)16), L_145, L_147, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4377));
		// skeleton.Set(HumanBodyBones.RightHand, bones, armRight.Hand);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4378));
		RuntimeObject* L_148 = ___0_bones;
		Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55 L_149 = V_12;
		RuntimeObject* L_150 = L_149.___Hand_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4379));
		Skeleton_Set_m4747E941432D8334B0932D4F4418758A26BA664B((&V_14), ((int32_t)18), L_148, L_150, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4379));
		// return skeleton;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4380));
		Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE L_151 = V_14;
		V_22 = L_151;
		goto IL_038d;
	}

IL_038d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4381));
		Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE L_152 = V_22;
		return L_152;
	}
}
// UniHumanoid.Skeleton UniHumanoid.BvhSkeletonEstimator::Detect(UniHumanoid.Bvh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE BvhSkeletonEstimator_Detect_m4CB96C21EDCEFF476B700B812F1139F48C0576A2 (BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64* __this, Bvh_t860215FD572E44D06C2764E255A5129C00A39687* ___0_bvh, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhSkeletonEstimator_Detect_m4CB96C21EDCEFF476B700B812F1139F48C0576A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisBvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m3F1090C4BDC576669EC4E68D53FF6DDA66D09C90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m24B08756BA1B69E8DB774BB81E1CE27021BD0C41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CDetectU3Eb__9_0_m9EA520B768C8B97BA98DD9E8EDA8F40FBF694E9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106* V_0 = NULL;
	Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_bvh));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BvhSkeletonEstimator_Detect_m4CB96C21EDCEFF476B700B812F1139F48C0576A2_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4382));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4383));
	Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64* G_B2_2 = NULL;
	Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64* G_B1_2 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4384));
		// var root = new BvhBone(bvh.Root.Name, Vector3.zero);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4385));
		Bvh_t860215FD572E44D06C2764E255A5129C00A39687* L_0 = ___0_bvh;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4386));
		NullCheck(L_0);
		BvhNode_t69ABF425B6902A35367FF490DF3BB35A4F1AF80C* L_1;
		L_1 = Bvh_get_Root_mB98898C2E5B5E11C4F3A6932F6D0638172833FB9_inline(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4386));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4387));
		NullCheck(L_1);
		String_t* L_2;
		L_2 = BvhNode_get_Name_mDB1AB1CF22C6BF5CC0AD6E0B49638445EB5C50B6_inline(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4387));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4388));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4388));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4389));
		BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106* L_4 = (BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106*)il2cpp_codegen_object_new(BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BvhBone__ctor_mDF9CB5FCA126A988B05CDA5759F512FC9312EF88(L_4, L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4389));
		V_0 = L_4;
		// root.Build(bvh.Root);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4390));
		BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106* L_5 = V_0;
		Bvh_t860215FD572E44D06C2764E255A5129C00A39687* L_6 = ___0_bvh;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4391));
		NullCheck(L_6);
		BvhNode_t69ABF425B6902A35367FF490DF3BB35A4F1AF80C* L_7;
		L_7 = Bvh_get_Root_mB98898C2E5B5E11C4F3A6932F6D0638172833FB9_inline(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4391));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4392));
		NullCheck(L_5);
		BvhBone_Build_mBD2E36C251D3537A28402FE80255D1AEB88CA20F(L_5, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4392));
		// return Detect(root.Traverse().Select(x => (IBone)x).ToList());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4393));
		BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106* L_8 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4394));
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = BvhBone_Traverse_m9D5675C430420534EBD203DDCB5793965FE19DD6(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4394));
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC* L_10 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_11;
		Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC* L_11 = L_10;
		G_B1_0 = L_11;
		G_B1_1 = L_9;
		G_B1_2 = __this;
		if (L_11)
		{
			G_B2_0 = L_11;
			G_B2_1 = L_9;
			G_B2_2 = __this;
			goto IL_004a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* L_12 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4395));
		Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC* L_13 = (Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC*)il2cpp_codegen_object_new(Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_2__ctor_m3C2F4927E783D5A01371B1CD015BA1FC844E92C1(L_13, L_12, (intptr_t)((void*)U3CU3Ec_U3CDetectU3Eb__9_0_m9EA520B768C8B97BA98DD9E8EDA8F40FBF694E9B_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4395));
		Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC* L_14 = L_13;
		((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_11), (void*)L_14);
		G_B2_0 = L_14;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_004a:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4396));
		RuntimeObject* L_15;
		L_15 = Enumerable_Select_TisBvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m3F1090C4BDC576669EC4E68D53FF6DDA66D09C90(G_B2_1, G_B2_0, Enumerable_Select_TisBvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m3F1090C4BDC576669EC4E68D53FF6DDA66D09C90_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4396));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4397));
		List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* L_16;
		L_16 = Enumerable_ToList_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m24B08756BA1B69E8DB774BB81E1CE27021BD0C41(L_15, Enumerable_ToList_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m24B08756BA1B69E8DB774BB81E1CE27021BD0C41_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4397));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4398));
		NullCheck(G_B2_2);
		Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE L_17;
		L_17 = BvhSkeletonEstimator_Detect_m8590F35D09EFE278F8310A55B41CF7E6132225AA(G_B2_2, L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4398));
		V_1 = L_17;
		goto IL_005c;
	}

IL_005c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4399));
		Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE L_18 = V_1;
		return L_18;
	}
}
// UniHumanoid.Skeleton UniHumanoid.BvhSkeletonEstimator::Detect(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE BvhSkeletonEstimator_Detect_m38E28F49437698A2A9B6DFCC6E3774E9E7C02112 (BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhSkeletonEstimator_Detect_m38E28F49437698A2A9B6DFCC6E3774E9E7C02112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisBvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m3F1090C4BDC576669EC4E68D53FF6DDA66D09C90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m24B08756BA1B69E8DB774BB81E1CE27021BD0C41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CDetectU3Eb__10_0_m84601719200AE7026E4DC7C057413E0318B42E52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106* V_0 = NULL;
	Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_t));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BvhSkeletonEstimator_Detect_m38E28F49437698A2A9B6DFCC6E3774E9E7C02112_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4400));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4401));
	Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64* G_B2_2 = NULL;
	Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64* G_B1_2 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4402));
		// var root = new BvhBone(t.name, Vector3.zero);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4403));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_t;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4404));
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4404));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4405));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4405));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4406));
		BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106* L_3 = (BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106*)il2cpp_codegen_object_new(BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BvhBone__ctor_mDF9CB5FCA126A988B05CDA5759F512FC9312EF88(L_3, L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4406));
		V_0 = L_3;
		// root.Build(t);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4407));
		BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106* L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_t;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4408));
		NullCheck(L_4);
		BvhBone_Build_m424FB986ACAB2ADCFA35562C2A1207BFC55E6761(L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4408));
		// return Detect(root.Traverse().Select(x => (IBone)x).ToList());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4409));
		BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106* L_6 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4410));
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = BvhBone_Traverse_m9D5675C430420534EBD203DDCB5793965FE19DD6(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4410));
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC* L_8 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_12;
		Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC* L_9 = L_8;
		G_B1_0 = L_9;
		G_B1_1 = L_7;
		G_B1_2 = __this;
		if (L_9)
		{
			G_B2_0 = L_9;
			G_B2_1 = L_7;
			G_B2_2 = __this;
			goto IL_0040;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* L_10 = ((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4411));
		Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC* L_11 = (Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC*)il2cpp_codegen_object_new(Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Func_2__ctor_m3C2F4927E783D5A01371B1CD015BA1FC844E92C1(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CDetectU3Eb__10_0_m84601719200AE7026E4DC7C057413E0318B42E52_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4411));
		Func_2_t4E94F2AC34C0C7A5E7375241DD227BDBB64767EC* L_12 = L_11;
		((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_12), (void*)L_12);
		G_B2_0 = L_12;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0040:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4412));
		RuntimeObject* L_13;
		L_13 = Enumerable_Select_TisBvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m3F1090C4BDC576669EC4E68D53FF6DDA66D09C90(G_B2_1, G_B2_0, Enumerable_Select_TisBvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m3F1090C4BDC576669EC4E68D53FF6DDA66D09C90_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4412));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4413));
		List_1_t813E79F0DD502FC5D725025D29C7FFC1D032AEB3* L_14;
		L_14 = Enumerable_ToList_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m24B08756BA1B69E8DB774BB81E1CE27021BD0C41(L_13, Enumerable_ToList_TisIBone_t0D620A0C4978553CA8278758D71556CADA609AE3_m24B08756BA1B69E8DB774BB81E1CE27021BD0C41_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4413));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4414));
		NullCheck(G_B2_2);
		Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE L_15;
		L_15 = BvhSkeletonEstimator_Detect_m8590F35D09EFE278F8310A55B41CF7E6132225AA(G_B2_2, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4414));
		V_1 = L_15;
		goto IL_0052;
	}

IL_0052:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4415));
		Skeleton_t9FD60B60CD83FFAFBB23F7964D2941B75EB1FBEE L_16 = V_1;
		return L_16;
	}
}
// System.Void UniHumanoid.BvhSkeletonEstimator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BvhSkeletonEstimator__ctor_mF6A7D39D21708023D89442EDFFC8E4555B78CF79 (BvhSkeletonEstimator_t5B5AE717CB77CD38FAE092335182CD2C2D17BC64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhSkeletonEstimator__ctor_mF6A7D39D21708023D89442EDFFC8E4555B78CF79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BvhSkeletonEstimator__ctor_mF6A7D39D21708023D89442EDFFC8E4555B78CF79_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Conversion methods for marshalling of: UniHumanoid.BvhSkeletonEstimator/Arm
IL2CPP_EXTERN_C void Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55_marshal_pinvoke(const Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55& unmarshaled, Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Shoulder_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Shoulder' of type 'Arm': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Shoulder_0Exception, NULL);
}
IL2CPP_EXTERN_C void Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55_marshal_pinvoke_back(const Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55_marshaled_pinvoke& marshaled, Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55& unmarshaled)
{
	Exception_t* ___Shoulder_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Shoulder' of type 'Arm': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Shoulder_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UniHumanoid.BvhSkeletonEstimator/Arm
IL2CPP_EXTERN_C void Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55_marshal_pinvoke_cleanup(Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UniHumanoid.BvhSkeletonEstimator/Arm
IL2CPP_EXTERN_C void Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55_marshal_com(const Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55& unmarshaled, Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55_marshaled_com& marshaled)
{
	Exception_t* ___Shoulder_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Shoulder' of type 'Arm': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Shoulder_0Exception, NULL);
}
IL2CPP_EXTERN_C void Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55_marshal_com_back(const Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55_marshaled_com& marshaled, Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55& unmarshaled)
{
	Exception_t* ___Shoulder_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Shoulder' of type 'Arm': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Shoulder_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UniHumanoid.BvhSkeletonEstimator/Arm
IL2CPP_EXTERN_C void Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55_marshal_com_cleanup(Arm_tFC02D5EDCA6B81305EBB98721C12956476743F55_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UniHumanoid.BvhSkeletonEstimator/Leg
IL2CPP_EXTERN_C void Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3_marshal_pinvoke(const Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3& unmarshaled, Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___UpperLeg_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'UpperLeg' of type 'Leg': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___UpperLeg_0Exception, NULL);
}
IL2CPP_EXTERN_C void Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3_marshal_pinvoke_back(const Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3_marshaled_pinvoke& marshaled, Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3& unmarshaled)
{
	Exception_t* ___UpperLeg_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'UpperLeg' of type 'Leg': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___UpperLeg_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UniHumanoid.BvhSkeletonEstimator/Leg
IL2CPP_EXTERN_C void Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3_marshal_pinvoke_cleanup(Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UniHumanoid.BvhSkeletonEstimator/Leg
IL2CPP_EXTERN_C void Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3_marshal_com(const Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3& unmarshaled, Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3_marshaled_com& marshaled)
{
	Exception_t* ___UpperLeg_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'UpperLeg' of type 'Leg': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___UpperLeg_0Exception, NULL);
}
IL2CPP_EXTERN_C void Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3_marshal_com_back(const Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3_marshaled_com& marshaled, Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3& unmarshaled)
{
	Exception_t* ___UpperLeg_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'UpperLeg' of type 'Leg': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___UpperLeg_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UniHumanoid.BvhSkeletonEstimator/Leg
IL2CPP_EXTERN_C void Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3_marshal_com_cleanup(Leg_t7ACCBF1228B013FBAA31D7A5851109E1E7B621C3_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniHumanoid.BvhSkeletonEstimator/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7CFCBDF0D5390EFEF06F218284CB301E04692C3E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__cctor_m7CFCBDF0D5390EFEF06F218284CB301E04692C3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__cctor_m7CFCBDF0D5390EFEF06F218284CB301E04692C3E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* L_0 = (U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F*)il2cpp_codegen_object_new(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m5C1D787BCA9EF5E21A6A4787D15260A13065A48F(L_0, NULL);
		((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UniHumanoid.BvhSkeletonEstimator/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5C1D787BCA9EF5E21A6A4787D15260A13065A48F (U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__ctor_m5C1D787BCA9EF5E21A6A4787D15260A13065A48F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__ctor_m5C1D787BCA9EF5E21A6A4787D15260A13065A48F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UniHumanoid.BvhSkeletonEstimator/<>c::<GetRoot>b__0_0(UniHumanoid.IBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetRootU3Eb__0_0_m0B24A7BC314E4F7947E70EEF8789859712F96337 (U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* __this, RuntimeObject* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetRootU3Eb__0_0_m0B24A7BC314E4F7947E70EEF8789859712F96337_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec_U3CGetRootU3Eb__0_0_m0B24A7BC314E4F7947E70EEF8789859712F96337_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4416));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4417));
	{
		// var hips = bones.Where(x => x.Parent == null).ToArray();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4418));
		RuntimeObject* L_0 = ___0_x;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4419));
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* UniHumanoid.IBone UniHumanoid.IBone::get_Parent() */, IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4419));
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
// UniHumanoid.IBone UniHumanoid.BvhSkeletonEstimator/<>c::<GetSpineAndHips>b__2_0(UniHumanoid.IBone,UniHumanoid.IBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetSpineAndHipsU3Eb__2_0_m647E2F7D1E1E8EE14CFED1B2A7C24D7A2C5AD3AB (U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* __this, RuntimeObject* ___0_l, RuntimeObject* ___1_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetSpineAndHipsU3Eb__2_0_m647E2F7D1E1E8EE14CFED1B2A7C24D7A2C5AD3AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_l), (&___1_r));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec_U3CGetSpineAndHipsU3Eb__2_0_m647E2F7D1E1E8EE14CFED1B2A7C24D7A2C5AD3AB_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4420));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4421));
	RuntimeObject* G_B3_0 = NULL;
	{
		// spine = SelectBone((l, r) => l.CenterOfDescendant().y > r.CenterOfDescendant().y ? l : r, hips.Children);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4422));
		RuntimeObject* L_0 = ___0_l;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4423));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = IBoneExtensions_CenterOfDescendant_mD282033F03563D31A2A20F3681021C09571521E2(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4423));
		float L_2 = L_1.___y_3;
		RuntimeObject* L_3 = ___1_r;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4424));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = IBoneExtensions_CenterOfDescendant_mD282033F03563D31A2A20F3681021C09571521E2(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4424));
		float L_5 = L_4.___y_3;
		if ((((float)L_2) > ((float)L_5)))
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_6 = ___1_r;
		G_B3_0 = L_6;
		goto IL_001c;
	}

IL_001b:
	{
		RuntimeObject* L_7 = ___0_l;
		G_B3_0 = L_7;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UniHumanoid.IBone UniHumanoid.BvhSkeletonEstimator/<>c::<GetSpineAndHips>b__2_1(UniHumanoid.IBone,UniHumanoid.IBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetSpineAndHipsU3Eb__2_1_m5928CA23BE6596A3C4A88B05805512065832DF32 (U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* __this, RuntimeObject* ___0_l, RuntimeObject* ___1_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetSpineAndHipsU3Eb__2_1_m5928CA23BE6596A3C4A88B05805512065832DF32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_l), (&___1_r));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec_U3CGetSpineAndHipsU3Eb__2_1_m5928CA23BE6596A3C4A88B05805512065832DF32_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4425));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4426));
	RuntimeObject* G_B3_0 = NULL;
	{
		// leg_L = SelectBone((l, r) => l.CenterOfDescendant().x < r.CenterOfDescendant().x ? l : r, hips.Children);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4427));
		RuntimeObject* L_0 = ___0_l;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4428));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = IBoneExtensions_CenterOfDescendant_mD282033F03563D31A2A20F3681021C09571521E2(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4428));
		float L_2 = L_1.___x_2;
		RuntimeObject* L_3 = ___1_r;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4429));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = IBoneExtensions_CenterOfDescendant_mD282033F03563D31A2A20F3681021C09571521E2(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4429));
		float L_5 = L_4.___x_2;
		if ((((float)L_2) < ((float)L_5)))
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_6 = ___1_r;
		G_B3_0 = L_6;
		goto IL_001c;
	}

IL_001b:
	{
		RuntimeObject* L_7 = ___0_l;
		G_B3_0 = L_7;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UniHumanoid.IBone UniHumanoid.BvhSkeletonEstimator/<>c::<GetSpineAndHips>b__2_2(UniHumanoid.IBone,UniHumanoid.IBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetSpineAndHipsU3Eb__2_2_m02813F4A2A1D9EC6C585E9AF412E84AA5C59CC24 (U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* __this, RuntimeObject* ___0_l, RuntimeObject* ___1_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetSpineAndHipsU3Eb__2_2_m02813F4A2A1D9EC6C585E9AF412E84AA5C59CC24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_l), (&___1_r));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec_U3CGetSpineAndHipsU3Eb__2_2_m02813F4A2A1D9EC6C585E9AF412E84AA5C59CC24_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4430));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4431));
	RuntimeObject* G_B3_0 = NULL;
	{
		// leg_R = SelectBone((l, r) => l.CenterOfDescendant().x > r.CenterOfDescendant().x ? l : r, hips.Children);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4432));
		RuntimeObject* L_0 = ___0_l;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4433));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = IBoneExtensions_CenterOfDescendant_mD282033F03563D31A2A20F3681021C09571521E2(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4433));
		float L_2 = L_1.___x_2;
		RuntimeObject* L_3 = ___1_r;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4434));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = IBoneExtensions_CenterOfDescendant_mD282033F03563D31A2A20F3681021C09571521E2(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4434));
		float L_5 = L_4.___x_2;
		if ((((float)L_2) > ((float)L_5)))
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_6 = ___1_r;
		G_B3_0 = L_6;
		goto IL_001c;
	}

IL_001b:
	{
		RuntimeObject* L_7 = ___0_l;
		G_B3_0 = L_7;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UniHumanoid.IBone UniHumanoid.BvhSkeletonEstimator/<>c::<GetNeckAndArms>b__3_0(UniHumanoid.IBone,UniHumanoid.IBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetNeckAndArmsU3Eb__3_0_mB739D106B67A3D3C21146A4692791DFEB16F5F21 (U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* __this, RuntimeObject* ___0_l, RuntimeObject* ___1_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetNeckAndArmsU3Eb__3_0_mB739D106B67A3D3C21146A4692791DFEB16F5F21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_l), (&___1_r));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec_U3CGetNeckAndArmsU3Eb__3_0_mB739D106B67A3D3C21146A4692791DFEB16F5F21_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4435));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4436));
	RuntimeObject* G_B3_0 = NULL;
	{
		// neck = SelectBone((l, r) => l.CenterOfDescendant().y > r.CenterOfDescendant().y ? l : r, chest.Children);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4437));
		RuntimeObject* L_0 = ___0_l;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4438));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = IBoneExtensions_CenterOfDescendant_mD282033F03563D31A2A20F3681021C09571521E2(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4438));
		float L_2 = L_1.___y_3;
		RuntimeObject* L_3 = ___1_r;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4439));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = IBoneExtensions_CenterOfDescendant_mD282033F03563D31A2A20F3681021C09571521E2(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4439));
		float L_5 = L_4.___y_3;
		if ((((float)L_2) > ((float)L_5)))
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_6 = ___1_r;
		G_B3_0 = L_6;
		goto IL_001c;
	}

IL_001b:
	{
		RuntimeObject* L_7 = ___0_l;
		G_B3_0 = L_7;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UniHumanoid.IBone UniHumanoid.BvhSkeletonEstimator/<>c::<GetNeckAndArms>b__3_1(UniHumanoid.IBone,UniHumanoid.IBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetNeckAndArmsU3Eb__3_1_mEEB8AB13946E6CFC73D89B32FD83497331B3B4C0 (U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* __this, RuntimeObject* ___0_l, RuntimeObject* ___1_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetNeckAndArmsU3Eb__3_1_mEEB8AB13946E6CFC73D89B32FD83497331B3B4C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_l), (&___1_r));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec_U3CGetNeckAndArmsU3Eb__3_1_mEEB8AB13946E6CFC73D89B32FD83497331B3B4C0_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4440));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4441));
	RuntimeObject* G_B3_0 = NULL;
	{
		// arm_L = SelectBone((l, r) => l.CenterOfDescendant().x < r.CenterOfDescendant().x ? l : r, chest.Children);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4442));
		RuntimeObject* L_0 = ___0_l;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4443));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = IBoneExtensions_CenterOfDescendant_mD282033F03563D31A2A20F3681021C09571521E2(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4443));
		float L_2 = L_1.___x_2;
		RuntimeObject* L_3 = ___1_r;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4444));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = IBoneExtensions_CenterOfDescendant_mD282033F03563D31A2A20F3681021C09571521E2(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4444));
		float L_5 = L_4.___x_2;
		if ((((float)L_2) < ((float)L_5)))
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_6 = ___1_r;
		G_B3_0 = L_6;
		goto IL_001c;
	}

IL_001b:
	{
		RuntimeObject* L_7 = ___0_l;
		G_B3_0 = L_7;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UniHumanoid.IBone UniHumanoid.BvhSkeletonEstimator/<>c::<GetNeckAndArms>b__3_2(UniHumanoid.IBone,UniHumanoid.IBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetNeckAndArmsU3Eb__3_2_m5344F7668BBC2AC832C353DBD5A5623B84951A06 (U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* __this, RuntimeObject* ___0_l, RuntimeObject* ___1_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetNeckAndArmsU3Eb__3_2_m5344F7668BBC2AC832C353DBD5A5623B84951A06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_l), (&___1_r));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec_U3CGetNeckAndArmsU3Eb__3_2_m5344F7668BBC2AC832C353DBD5A5623B84951A06_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4445));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4446));
	RuntimeObject* G_B3_0 = NULL;
	{
		// arm_R = SelectBone((l, r) => l.CenterOfDescendant().x > r.CenterOfDescendant().x ? l : r, chest.Children);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4447));
		RuntimeObject* L_0 = ___0_l;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4448));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = IBoneExtensions_CenterOfDescendant_mD282033F03563D31A2A20F3681021C09571521E2(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4448));
		float L_2 = L_1.___x_2;
		RuntimeObject* L_3 = ___1_r;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4449));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = IBoneExtensions_CenterOfDescendant_mD282033F03563D31A2A20F3681021C09571521E2(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4449));
		float L_5 = L_4.___x_2;
		if ((((float)L_2) > ((float)L_5)))
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_6 = ___1_r;
		G_B3_0 = L_6;
		goto IL_001c;
	}

IL_001b:
	{
		RuntimeObject* L_7 = ___0_l;
		G_B3_0 = L_7;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Boolean UniHumanoid.BvhSkeletonEstimator/<>c::<GetLeg>b__7_0(UniHumanoid.IBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetLegU3Eb__7_0_m1729267B32850331C891A0F4A84EDADA9036B232 (U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* __this, RuntimeObject* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetLegU3Eb__7_0_m1729267B32850331C891A0F4A84EDADA9036B232_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1F38FB78103D23149590E9D2D8B4F145437FB39);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec_U3CGetLegU3Eb__7_0_m1729267B32850331C891A0F4A84EDADA9036B232_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4450));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4451));
	{
		// var bones = leg.Traverse().Where(x => !x.Name.ToLower().Contains("buttock")).ToArray();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4452));
		RuntimeObject* L_0 = ___0_x;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4453));
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UniHumanoid.IBone::get_Name() */, IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4453));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4454));
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4454));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4455));
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteralA1F38FB78103D23149590E9D2D8B4F145437FB39, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4455));
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UniHumanoid.BvhSkeletonEstimator/<>c::<Detect>b__8_0(UniHumanoid.IBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CDetectU3Eb__8_0_m0F1937CD6E8CB5E2E27E1EAF09F8BB7CBEFE5BC6 (U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* __this, RuntimeObject* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tAFEC19DC35BBB8D14E6B4410BFC4D29762BA60FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CDetectU3Eb__8_0_m0F1937CD6E8CB5E2E27E1EAF09F8BB7CBEFE5BC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec_U3CDetectU3Eb__8_0_m0F1937CD6E8CB5E2E27E1EAF09F8BB7CBEFE5BC6_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4456));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4457));
	{
		// var hips = root.Traverse().First(x => x.Children.Count == 3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4458));
		RuntimeObject* L_0 = ___0_x;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4459));
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IList`1<UniHumanoid.IBone> UniHumanoid.IBone::get_Children() */, IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4459));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4460));
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UniHumanoid.IBone>::get_Count() */, ICollection_1_tAFEC19DC35BBB8D14E6B4410BFC4D29762BA60FF_il2cpp_TypeInfo_var, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4460));
		return (bool)((((int32_t)L_2) == ((int32_t)3))? 1 : 0);
	}
}
// System.Boolean UniHumanoid.BvhSkeletonEstimator/<>c::<Detect>b__8_1(UniHumanoid.IBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CDetectU3Eb__8_1_mB3874E8D814E1E65B6BC27CBF8B86BB163099D01 (U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* __this, RuntimeObject* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tAFEC19DC35BBB8D14E6B4410BFC4D29762BA60FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CDetectU3Eb__8_1_mB3874E8D814E1E65B6BC27CBF8B86BB163099D01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec_U3CDetectU3Eb__8_1_mB3874E8D814E1E65B6BC27CBF8B86BB163099D01_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4461));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4462));
	{
		// skeleton.Set(HumanBodyBones.Head, bones, neckToHead.Where(x => x.Parent.Children.Count==1).Last());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4463));
		RuntimeObject* L_0 = ___0_x;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4464));
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* UniHumanoid.IBone UniHumanoid.IBone::get_Parent() */, IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4464));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4465));
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IList`1<UniHumanoid.IBone> UniHumanoid.IBone::get_Children() */, IBone_t0D620A0C4978553CA8278758D71556CADA609AE3_il2cpp_TypeInfo_var, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4465));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4466));
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UniHumanoid.IBone>::get_Count() */, ICollection_1_tAFEC19DC35BBB8D14E6B4410BFC4D29762BA60FF_il2cpp_TypeInfo_var, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4466));
		return (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
	}
}
// UniHumanoid.IBone UniHumanoid.BvhSkeletonEstimator/<>c::<Detect>b__9_0(UniHumanoid.BvhBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CDetectU3Eb__9_0_m9EA520B768C8B97BA98DD9E8EDA8F40FBF694E9B (U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* __this, BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CDetectU3Eb__9_0_m9EA520B768C8B97BA98DD9E8EDA8F40FBF694E9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec_U3CDetectU3Eb__9_0_m9EA520B768C8B97BA98DD9E8EDA8F40FBF694E9B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4467));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4468));
	{
		// return Detect(root.Traverse().Select(x => (IBone)x).ToList());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4469));
		BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106* L_0 = ___0_x;
		return L_0;
	}
}
// UniHumanoid.IBone UniHumanoid.BvhSkeletonEstimator/<>c::<Detect>b__10_0(UniHumanoid.BvhBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CDetectU3Eb__10_0_m84601719200AE7026E4DC7C057413E0318B42E52 (U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F* __this, BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CDetectU3Eb__10_0_m84601719200AE7026E4DC7C057413E0318B42E52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A3BC087D3DC034E3784BCA9FE882933B51AAC3F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec_U3CDetectU3Eb__10_0_m84601719200AE7026E4DC7C057413E0318B42E52_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4470));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4471));
	{
		// return Detect(root.Traverse().Select(x => (IBone)x).ToList());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4472));
		BvhBone_tE9215201949E3693F9D6D2C605BD1AB16E517106* L_0 = ___0_x;
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
// UnityEngine.SkinnedMeshRenderer UniHumanoid.SkeletonMeshUtility::CreateRenderer(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* SkeletonMeshUtility_CreateRenderer_m4B9BE9D811E10600E6FB2B4BE10544CFE123E1F5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m2247CA5CDEA0766EFD154D7277437BDC45750194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m8207DBC9BB2B222E4B35B5AEF5C31B22AD5C09E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9AEA33F3B287912A369F86579214A123828BDCC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD9729754657EDC600F802415BA24F2F5B554CADC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanBodyBones_tA2A904890A05ABCFFAB7E119244E97C5EA9807E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m5925CCD2844741E30EB14EDD03DD79F169BBFA80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeletonMeshUtility_CreateRenderer_m4B9BE9D811E10600E6FB2B4BE10544CFE123E1F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeletonMeshUtility_t8F8EA2193A3FFBAE71B804B72623941435608C60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CCreateRendererU3Eb__0_m9FD708582CC625B3FFE02B510D960B22B1898B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1276D47E098386396D1368835D9D091CF53E4F93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE99D30A587B2A7638BCE5DEB3A263174FFA684B);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C* V_0 = NULL;
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* V_1 = NULL;
	MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923* V_2 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_3 = NULL;
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* V_4 = NULL;
	BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* V_5 = NULL;
	int32_t V_6 = 0;
	BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_8 = NULL;
	bool V_9 = false;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* V_14 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_animator));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_7), (&V_8), (&V_10));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SkeletonMeshUtility_CreateRenderer_m4B9BE9D811E10600E6FB2B4BE10544CFE123E1F5_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4473));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4474));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4475));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4476));
		U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C* L_0 = (U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_mD7B3D177A8F54AC8191793A11E76C90EFEFFF6F3(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4476));
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C* L_1 = V_0;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = ___0_animator;
		NullCheck(L_1);
		L_1->___animator_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___animator_0), (void*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4477));
		// var bones = animator.transform.Traverse().ToList();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4478));
		U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C* L_3 = V_0;
		NullCheck(L_3);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = L_3->___animator_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4479));
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4479));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4480));
		RuntimeObject* L_6;
		L_6 = UnityExtensions_Traverse_mE0982867992EEE817CF84A870054BDE18954562E(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4480));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4481));
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_7;
		L_7 = Enumerable_ToList_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9AEA33F3B287912A369F86579214A123828BDCC8(L_6, Enumerable_ToList_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9AEA33F3B287912A369F86579214A123828BDCC8_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4481));
		V_1 = L_7;
		// var builder = new MeshBuilder();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4482));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4483));
		MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923* L_8 = (MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923*)il2cpp_codegen_object_new(MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		MeshBuilder__ctor_m7421490CFA93D231F541839B4683C633291F099D(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4483));
		V_2 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4484));
		// foreach (var headTail in Bones)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4485));
		il2cpp_codegen_runtime_class_init_inline(SkeletonMeshUtility_t8F8EA2193A3FFBAE71B804B72623941435608C60_il2cpp_TypeInfo_var);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_9 = ((SkeletonMeshUtility_t8F8EA2193A3FFBAE71B804B72623941435608C60_StaticFields*)il2cpp_codegen_static_fields_for(SkeletonMeshUtility_t8F8EA2193A3FFBAE71B804B72623941435608C60_il2cpp_TypeInfo_var))->___Bones_0;
		V_5 = L_9;
		V_6 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4486));
		goto IL_0156;
	}

IL_003a:
	{
		// foreach (var headTail in Bones)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4487));
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_10 = V_5;
		int32_t L_11 = V_6;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_7 = L_13;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4488));
		// var head = animator.GetBoneTransform(headTail.Head);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4489));
		U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C* L_14 = V_0;
		NullCheck(L_14);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = L_14->___animator_0;
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_16 = V_7;
		int32_t L_17 = L_16.___Head_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4490));
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56(L_15, L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4490));
		V_8 = L_18;
		// if (head != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4491));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4492));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4492));
		V_9 = L_20;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4493));
		bool L_21 = V_9;
		if (!L_21)
		{
			goto IL_0120;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4494));
		// Transform tail = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4495));
		V_10 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		// if (headTail.Tail != HumanBodyBones.LastBone)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4496));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_22 = V_7;
		int32_t L_23 = L_22.___Tail_1;
		V_11 = (bool)((((int32_t)((((int32_t)L_23) == ((int32_t)((int32_t)55)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4497));
		bool L_24 = V_11;
		if (!L_24)
		{
			goto IL_0099;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4498));
		// tail = animator.GetBoneTransform(headTail.Tail);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4499));
		U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C* L_25 = V_0;
		NullCheck(L_25);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_26 = L_25->___animator_0;
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_27 = V_7;
		int32_t L_28 = L_27.___Tail_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4500));
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56(L_26, L_28, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4500));
		V_10 = L_29;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4501));
	}

IL_0099:
	{
		// if (tail != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4502));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4503));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4503));
		V_12 = L_31;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4504));
		bool L_32 = V_12;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4505));
		// builder.AddBone(head.position, tail.position, bones.IndexOf(head), headTail.Width, headTail.Height, headTail.XAxis);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4506));
		MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923* L_33 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4507));
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4507));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4508));
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4508));
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_38 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4509));
		NullCheck(L_38);
		int32_t L_40;
		L_40 = List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F(L_38, L_39, List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4509));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_41 = V_7;
		float L_42 = L_41.___Width_3;
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_43 = V_7;
		float L_44 = L_43.___Height_4;
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_45 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = L_45.___XAxis_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4510));
		NullCheck(L_33);
		MeshBuilder_AddBone_mCFA6A97CD863C006CB0EA813D42DC0FF7F09781A(L_33, L_35, L_37, L_40, L_42, L_44, L_46, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4510));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4511));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4512));
		goto IL_011d;
	}

IL_00dd:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4513));
		// builder.AddBone(head.position, head.position + headTail.TailOffset, bones.IndexOf(head), headTail.Width, headTail.Height, headTail.XAxis);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4514));
		MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923* L_47 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4515));
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_48, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4515));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4516));
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_50, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4516));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_52 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = L_52.___TailOffset_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4517));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_51, L_53, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4517));
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_55 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4518));
		NullCheck(L_55);
		int32_t L_57;
		L_57 = List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F(L_55, L_56, List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4518));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_58 = V_7;
		float L_59 = L_58.___Width_3;
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_60 = V_7;
		float L_61 = L_60.___Height_4;
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_62 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = L_62.___XAxis_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4519));
		NullCheck(L_47);
		MeshBuilder_AddBone_mCFA6A97CD863C006CB0EA813D42DC0FF7F09781A(L_47, L_49, L_54, L_57, L_59, L_61, L_63, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4519));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4520));
	}

IL_011d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4521));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4522));
		goto IL_014f;
	}

IL_0120:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4523));
		// if (VRMShaders.Symbols.VRM_DEVELOP)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4524));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4525));
		bool L_64;
		L_64 = Symbols_get_VRM_DEVELOP_m6725AEBFEEB26F05FDD82C6C8A1FEF501CEFDFC5(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4525));
		V_13 = L_64;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4526));
		bool L_65 = V_13;
		if (!L_65)
		{
			goto IL_014e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4527));
		// Debug.LogWarningFormat("{0} not found", headTail.Head);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4528));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_66 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_67 = L_66;
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_68 = V_7;
		int32_t L_69 = L_68.___Head_0;
		int32_t L_70 = L_69;
		RuntimeObject* L_71 = Box(HumanBodyBones_tA2A904890A05ABCFFAB7E119244E97C5EA9807E6_il2cpp_TypeInfo_var, &L_70);
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_71);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_71);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4529));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC(_stringLiteral1276D47E098386396D1368835D9D091CF53E4F93, L_67, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4529));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4530));
	}

IL_014e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4531));
	}

IL_014f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4532));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4533));
		int32_t L_72 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_0156:
	{
		// foreach (var headTail in Bones)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4534));
		int32_t L_73 = V_6;
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_74 = V_5;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_003a;
		}
	}
	{
		// var mesh = builder.CreateMesh();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4535));
		MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923* L_75 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4536));
		NullCheck(L_75);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_76;
		L_76 = MeshBuilder_CreateMesh_m98E1B40C0565A76818BFE79779B576D99BB2069C(L_75, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4536));
		V_3 = L_76;
		// mesh.name = "box-man";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4537));
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_77 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4538));
		NullCheck(L_77);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_77, _stringLiteralAE99D30A587B2A7638BCE5DEB3A263174FFA684B, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4538));
		// mesh.bindposes = bones.Select(x => x.worldToLocalMatrix * animator.transform.localToWorldMatrix).ToArray();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4539));
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_78 = V_3;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_79 = V_1;
		U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C* L_80 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4540));
		Func_2_tD9729754657EDC600F802415BA24F2F5B554CADC* L_81 = (Func_2_tD9729754657EDC600F802415BA24F2F5B554CADC*)il2cpp_codegen_object_new(Func_2_tD9729754657EDC600F802415BA24F2F5B554CADC_il2cpp_TypeInfo_var);
		NullCheck(L_81);
		Func_2__ctor_m29B7403838787E1A5F6100C52BB21B9D2E021B19(L_81, L_80, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CCreateRendererU3Eb__0_m9FD708582CC625B3FFE02B510D960B22B1898B3B_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4540));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4541));
		RuntimeObject* L_82;
		L_82 = Enumerable_Select_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m2247CA5CDEA0766EFD154D7277437BDC45750194(L_79, L_81, Enumerable_Select_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m2247CA5CDEA0766EFD154D7277437BDC45750194_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4541));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4542));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_83;
		L_83 = Enumerable_ToArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m8207DBC9BB2B222E4B35B5AEF5C31B22AD5C09E4(L_82, Enumerable_ToArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m8207DBC9BB2B222E4B35B5AEF5C31B22AD5C09E4_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4542));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4543));
		NullCheck(L_78);
		Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF(L_78, L_83, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4543));
		// var renderer = animator.gameObject.AddComponent<SkinnedMeshRenderer>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4544));
		U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C* L_84 = V_0;
		NullCheck(L_84);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_85 = L_84->___animator_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4545));
		NullCheck(L_85);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86;
		L_86 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_85, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4545));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4546));
		NullCheck(L_86);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_87;
		L_87 = GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6(L_86, GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4546));
		V_4 = L_87;
		// renderer.bones = bones.ToArray();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4547));
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_88 = V_4;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_89 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4548));
		NullCheck(L_89);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_90;
		L_90 = List_1_ToArray_m5925CCD2844741E30EB14EDD03DD79F169BBFA80(L_89, List_1_ToArray_m5925CCD2844741E30EB14EDD03DD79F169BBFA80_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4548));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4549));
		NullCheck(L_88);
		SkinnedMeshRenderer_set_bones_m80B64F72E4E5C7901E3105594D964F25D00952D7(L_88, L_90, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4549));
		// renderer.rootBone = animator.GetBoneTransform(HumanBodyBones.Hips);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4550));
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_91 = V_4;
		U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C* L_92 = V_0;
		NullCheck(L_92);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_93 = L_92->___animator_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4551));
		NullCheck(L_93);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
		L_94 = Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56(L_93, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4551));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4552));
		NullCheck(L_91);
		SkinnedMeshRenderer_set_rootBone_m218D83F020040DB84BA06D99050D6A01A3C90355(L_91, L_94, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4552));
		// renderer.sharedMesh = mesh;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4553));
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_95 = V_4;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_96 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4554));
		NullCheck(L_95);
		SkinnedMeshRenderer_set_sharedMesh_m3D3A431BC8B244C21EB9D01B9A10D040D7137F98(L_95, L_96, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4554));
		// return renderer;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4555));
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97 = V_4;
		V_14 = L_97;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4556));
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_98 = V_14;
		return L_98;
	}
}
// System.Void UniHumanoid.SkeletonMeshUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonMeshUtility__cctor_m4ECE481F077C5451410EF86928D7AE5D3E2A635D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeletonMeshUtility__cctor_m4ECE481F077C5451410EF86928D7AE5D3E2A635D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeletonMeshUtility_t8F8EA2193A3FFBAE71B804B72623941435608C60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SkeletonMeshUtility__cctor_m4ECE481F077C5451410EF86928D7AE5D3E2A635D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4557));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4558));
	{
		// static BoneHeadTail[] Bones = new BoneHeadTail[]
		// {
		//     new BoneHeadTail(HumanBodyBones.Hips, HumanBodyBones.Spine, Vector3.right, 0.2f, 0.12f),
		//     new BoneHeadTail(HumanBodyBones.Spine, HumanBodyBones.Chest, Vector3.right),
		//     new BoneHeadTail(HumanBodyBones.Chest, HumanBodyBones.Neck, Vector3.right, 0.2f, 0.12f),
		//     new BoneHeadTail(HumanBodyBones.Neck, HumanBodyBones.Head, Vector3.right, 0.06f, 0.06f),
		//     new BoneHeadTail(HumanBodyBones.Head, new Vector3(0, 0.2f, 0), Vector3.right, 0.2f, 0.2f),
		//     // new BoneHeadTail(HumanBodyBones.Head, new Vector3(0, 0, 0.1f), Vector3.right, 0.2f, 0.2f),
		// 
		//     new BoneHeadTail(HumanBodyBones.LeftShoulder, HumanBodyBones.LeftUpperArm, Vector3.forward),
		//     new BoneHeadTail(HumanBodyBones.LeftUpperArm, HumanBodyBones.LeftLowerArm, Vector3.forward),
		//     new BoneHeadTail(HumanBodyBones.LeftLowerArm, HumanBodyBones.LeftHand, Vector3.forward),
		// 
		//     new BoneHeadTail(HumanBodyBones.LeftHand, HumanBodyBones.LeftMiddleProximal, Vector3.forward, 0.05f, 0.02f),
		//     new BoneHeadTail(HumanBodyBones.LeftThumbProximal, HumanBodyBones.LeftThumbIntermediate, Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.LeftThumbIntermediate, HumanBodyBones.LeftThumbDistal, Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.LeftThumbDistal, new Vector3(-0.03f, 0, 0), Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.LeftIndexProximal, HumanBodyBones.LeftIndexIntermediate, Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.LeftIndexIntermediate, HumanBodyBones.LeftIndexDistal, Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.LeftIndexDistal, new Vector3(-0.03f, 0, 0), Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.LeftMiddleProximal, HumanBodyBones.LeftMiddleIntermediate, Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.LeftMiddleIntermediate, HumanBodyBones.LeftMiddleDistal, Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.LeftMiddleDistal, new Vector3(-0.032f, 0, 0), Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.LeftRingProximal, HumanBodyBones.LeftRingIntermediate, Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.LeftRingIntermediate, HumanBodyBones.LeftRingDistal, Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.LeftRingDistal, new Vector3(-0.028f, 0, 0), Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.LeftLittleProximal, HumanBodyBones.LeftLittleIntermediate, Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.LeftLittleIntermediate, HumanBodyBones.LeftLittleDistal, Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.LeftLittleDistal, new Vector3(-0.025f, 0, 0), Vector3.forward, 0.01f, 0.01f),
		// 
		//     new BoneHeadTail(HumanBodyBones.LeftUpperLeg, HumanBodyBones.LeftLowerLeg, Vector3.left),
		//     new BoneHeadTail(HumanBodyBones.LeftLowerLeg, HumanBodyBones.LeftFoot, Vector3.left),
		//     new BoneHeadTail(HumanBodyBones.LeftFoot, HumanBodyBones.LeftToes, Vector3.left),
		//     new BoneHeadTail(HumanBodyBones.LeftToes, new Vector3(0, 0, 0.03f), Vector3.left),
		// 
		//     new BoneHeadTail(HumanBodyBones.RightShoulder, HumanBodyBones.RightUpperArm, Vector3.back),
		//     new BoneHeadTail(HumanBodyBones.RightUpperArm, HumanBodyBones.RightLowerArm, Vector3.back),
		//     new BoneHeadTail(HumanBodyBones.RightLowerArm, HumanBodyBones.RightHand, Vector3.back),
		// 
		//     new BoneHeadTail(HumanBodyBones.RightHand, new Vector3(0.1f, 0, 0), Vector3.back, 0.05f, 0.02f),
		//     new BoneHeadTail(HumanBodyBones.RightThumbProximal, HumanBodyBones.RightThumbIntermediate, Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.RightThumbIntermediate, HumanBodyBones.RightThumbDistal, Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.RightThumbDistal, new Vector3(0.03f, 0, 0), Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.RightIndexProximal, HumanBodyBones.RightIndexIntermediate, Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.RightIndexIntermediate, HumanBodyBones.RightIndexDistal, Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.RightIndexDistal, new Vector3(0.03f, 0, 0), Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.RightMiddleProximal, HumanBodyBones.RightMiddleIntermediate, Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.RightMiddleIntermediate, HumanBodyBones.RightMiddleDistal, Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.RightMiddleDistal, new Vector3(0.032f, 0, 0), Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.RightRingProximal, HumanBodyBones.RightRingIntermediate, Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.RightRingIntermediate, HumanBodyBones.RightRingDistal, Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.RightRingDistal, new Vector3(0.028f, 0, 0), Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.RightLittleProximal, HumanBodyBones.RightLittleIntermediate, Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.RightLittleIntermediate, HumanBodyBones.RightLittleDistal, Vector3.forward, 0.01f, 0.01f),
		//     new BoneHeadTail(HumanBodyBones.RightLittleDistal, new Vector3(0.025f, 0, 0), Vector3.forward, 0.01f, 0.01f),
		// 
		//     new BoneHeadTail(HumanBodyBones.RightUpperLeg, HumanBodyBones.RightLowerLeg, Vector3.left),
		//     new BoneHeadTail(HumanBodyBones.RightLowerLeg, HumanBodyBones.RightFoot, Vector3.left),
		//     new BoneHeadTail(HumanBodyBones.RightFoot, HumanBodyBones.RightToes, Vector3.left),
		//     new BoneHeadTail(HumanBodyBones.RightToes, new Vector3(0, 0, 0.03f), Vector3.left),
		// 
		// 
		// };
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4559));
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_0 = (BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C*)(BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C*)SZArrayNew(BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)51));
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_1 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4560));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4560));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4561));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_3;
		memset((&L_3), 0, sizeof(L_3));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_3), 0, 7, L_2, (0.200000003f), (0.119999997f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4561));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_3);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_4 = L_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4562));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4562));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4563));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_6;
		memset((&L_6), 0, sizeof(L_6));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_6), 7, 8, L_5, (0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4563));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_6);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_7 = L_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4564));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4564));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4565));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_9;
		memset((&L_9), 0, sizeof(L_9));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_9), 8, ((int32_t)9), L_8, (0.200000003f), (0.119999997f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4565));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_9);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_10 = L_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4566));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4566));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4567));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_12;
		memset((&L_12), 0, sizeof(L_12));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_12), ((int32_t)9), ((int32_t)10), L_11, (0.0599999987f), (0.0599999987f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4567));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_12);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_13 = L_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4568));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), (0.0f), (0.200000003f), (0.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4568));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4569));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4569));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4570));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_16;
		memset((&L_16), 0, sizeof(L_16));
		BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178((&L_16), ((int32_t)10), L_14, L_15, (0.200000003f), (0.200000003f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4570));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_16);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_17 = L_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4571));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4571));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4572));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_19;
		memset((&L_19), 0, sizeof(L_19));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_19), ((int32_t)11), ((int32_t)13), L_18, (0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4572));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_19);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_20 = L_17;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4573));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4573));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4574));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_22;
		memset((&L_22), 0, sizeof(L_22));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_22), ((int32_t)13), ((int32_t)15), L_21, (0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4574));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(6), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_22);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_23 = L_20;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4575));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4575));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4576));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_25;
		memset((&L_25), 0, sizeof(L_25));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_25), ((int32_t)15), ((int32_t)17), L_24, (0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4576));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(7), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_25);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_26 = L_23;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4577));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4577));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4578));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_28;
		memset((&L_28), 0, sizeof(L_28));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_28), ((int32_t)17), ((int32_t)30), L_27, (0.0500000007f), (0.0199999996f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4578));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(8), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_28);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_29 = L_26;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4579));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4579));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4580));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_31;
		memset((&L_31), 0, sizeof(L_31));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_31), ((int32_t)24), ((int32_t)25), L_30, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4580));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_31);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_32 = L_29;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4581));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4581));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4582));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_34;
		memset((&L_34), 0, sizeof(L_34));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_34), ((int32_t)25), ((int32_t)26), L_33, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4582));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_34);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_35 = L_32;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4583));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), (-0.0299999993f), (0.0f), (0.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4583));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4584));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4584));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4585));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_38;
		memset((&L_38), 0, sizeof(L_38));
		BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178((&L_38), ((int32_t)26), L_36, L_37, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4585));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_38);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_39 = L_35;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4586));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4586));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4587));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_41;
		memset((&L_41), 0, sizeof(L_41));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_41), ((int32_t)27), ((int32_t)28), L_40, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4587));
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_41);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_42 = L_39;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4588));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4588));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4589));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_44;
		memset((&L_44), 0, sizeof(L_44));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_44), ((int32_t)28), ((int32_t)29), L_43, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4589));
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_44);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_45 = L_42;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4590));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_46), (-0.0299999993f), (0.0f), (0.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4590));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4591));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4591));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4592));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_48;
		memset((&L_48), 0, sizeof(L_48));
		BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178((&L_48), ((int32_t)29), L_46, L_47, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4592));
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_48);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_49 = L_45;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4593));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4593));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4594));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_51;
		memset((&L_51), 0, sizeof(L_51));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_51), ((int32_t)30), ((int32_t)31), L_50, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4594));
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_51);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_52 = L_49;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4595));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4595));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4596));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_54;
		memset((&L_54), 0, sizeof(L_54));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_54), ((int32_t)31), ((int32_t)32), L_53, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4596));
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_54);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_55 = L_52;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4597));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_56), (-0.0320000015f), (0.0f), (0.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4597));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4598));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4598));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4599));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_58;
		memset((&L_58), 0, sizeof(L_58));
		BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178((&L_58), ((int32_t)32), L_56, L_57, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4599));
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_58);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_59 = L_55;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4600));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4600));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4601));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_61;
		memset((&L_61), 0, sizeof(L_61));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_61), ((int32_t)33), ((int32_t)34), L_60, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4601));
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_61);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_62 = L_59;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4602));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4602));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4603));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_64;
		memset((&L_64), 0, sizeof(L_64));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_64), ((int32_t)34), ((int32_t)35), L_63, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4603));
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_64);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_65 = L_62;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4604));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_66), (-0.0280000009f), (0.0f), (0.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4604));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4605));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4605));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4606));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_68;
		memset((&L_68), 0, sizeof(L_68));
		BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178((&L_68), ((int32_t)35), L_66, L_67, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4606));
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_68);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_69 = L_65;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4607));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4607));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4608));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_71;
		memset((&L_71), 0, sizeof(L_71));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_71), ((int32_t)36), ((int32_t)37), L_70, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4608));
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_71);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_72 = L_69;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4609));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4609));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4610));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_74;
		memset((&L_74), 0, sizeof(L_74));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_74), ((int32_t)37), ((int32_t)38), L_73, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4610));
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_74);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_75 = L_72;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4611));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		memset((&L_76), 0, sizeof(L_76));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_76), (-0.0250000004f), (0.0f), (0.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4611));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4612));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4612));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4613));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_78;
		memset((&L_78), 0, sizeof(L_78));
		BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178((&L_78), ((int32_t)38), L_76, L_77, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4613));
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_78);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_79 = L_75;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4614));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4614));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4615));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_81;
		memset((&L_81), 0, sizeof(L_81));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_81), 1, 3, L_80, (0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4615));
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_81);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_82 = L_79;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4616));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4616));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4617));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_84;
		memset((&L_84), 0, sizeof(L_84));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_84), 3, 5, L_83, (0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4617));
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_84);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_85 = L_82;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4618));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4618));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4619));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_87;
		memset((&L_87), 0, sizeof(L_87));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_87), 5, ((int32_t)19), L_86, (0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4619));
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_87);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_88 = L_85;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4620));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		memset((&L_89), 0, sizeof(L_89));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_89), (0.0f), (0.0f), (0.0299999993f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4620));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4621));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4621));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4622));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_91;
		memset((&L_91), 0, sizeof(L_91));
		BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178((&L_91), ((int32_t)19), L_89, L_90, (0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4622));
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_91);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_92 = L_88;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4623));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4623));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4624));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_94;
		memset((&L_94), 0, sizeof(L_94));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_94), ((int32_t)12), ((int32_t)14), L_93, (0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4624));
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_94);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_95 = L_92;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4625));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4625));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4626));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_97;
		memset((&L_97), 0, sizeof(L_97));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_97), ((int32_t)14), ((int32_t)16), L_96, (0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4626));
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_97);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_98 = L_95;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4627));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4627));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4628));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_100;
		memset((&L_100), 0, sizeof(L_100));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_100), ((int32_t)16), ((int32_t)18), L_99, (0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4628));
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_100);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_101 = L_98;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4629));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		memset((&L_102), 0, sizeof(L_102));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_102), (0.100000001f), (0.0f), (0.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4629));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4630));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4630));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4631));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_104;
		memset((&L_104), 0, sizeof(L_104));
		BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178((&L_104), ((int32_t)18), L_102, L_103, (0.0500000007f), (0.0199999996f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4631));
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_104);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_105 = L_101;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4632));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4632));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4633));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_107;
		memset((&L_107), 0, sizeof(L_107));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_107), ((int32_t)39), ((int32_t)40), L_106, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4633));
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_107);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_108 = L_105;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4634));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4634));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4635));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_110;
		memset((&L_110), 0, sizeof(L_110));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_110), ((int32_t)40), ((int32_t)41), L_109, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4635));
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_110);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_111 = L_108;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4636));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		memset((&L_112), 0, sizeof(L_112));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_112), (0.0299999993f), (0.0f), (0.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4636));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4637));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4637));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4638));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_114;
		memset((&L_114), 0, sizeof(L_114));
		BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178((&L_114), ((int32_t)41), L_112, L_113, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4638));
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_114);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_115 = L_111;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4639));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116;
		L_116 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4639));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4640));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_117;
		memset((&L_117), 0, sizeof(L_117));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_117), ((int32_t)42), ((int32_t)43), L_116, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4640));
		NullCheck(L_115);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_117);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_118 = L_115;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4641));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4641));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4642));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_120;
		memset((&L_120), 0, sizeof(L_120));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_120), ((int32_t)43), ((int32_t)44), L_119, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4642));
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_120);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_121 = L_118;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4643));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		memset((&L_122), 0, sizeof(L_122));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_122), (0.0299999993f), (0.0f), (0.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4643));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4644));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123;
		L_123 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4644));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4645));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_124;
		memset((&L_124), 0, sizeof(L_124));
		BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178((&L_124), ((int32_t)44), L_122, L_123, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4645));
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_124);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_125 = L_121;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4646));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126;
		L_126 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4646));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4647));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_127;
		memset((&L_127), 0, sizeof(L_127));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_127), ((int32_t)45), ((int32_t)46), L_126, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4647));
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_127);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_128 = L_125;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4648));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		L_129 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4648));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4649));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_130;
		memset((&L_130), 0, sizeof(L_130));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_130), ((int32_t)46), ((int32_t)47), L_129, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4649));
		NullCheck(L_128);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_130);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_131 = L_128;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4650));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132;
		memset((&L_132), 0, sizeof(L_132));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_132), (0.0320000015f), (0.0f), (0.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4650));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4651));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133;
		L_133 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4651));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4652));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_134;
		memset((&L_134), 0, sizeof(L_134));
		BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178((&L_134), ((int32_t)47), L_132, L_133, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4652));
		NullCheck(L_131);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_134);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_135 = L_131;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4653));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136;
		L_136 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4653));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4654));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_137;
		memset((&L_137), 0, sizeof(L_137));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_137), ((int32_t)48), ((int32_t)49), L_136, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4654));
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)41)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_137);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_138 = L_135;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4655));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139;
		L_139 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4655));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4656));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_140;
		memset((&L_140), 0, sizeof(L_140));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_140), ((int32_t)49), ((int32_t)50), L_139, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4656));
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)42)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_140);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_141 = L_138;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4657));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142;
		memset((&L_142), 0, sizeof(L_142));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_142), (0.0280000009f), (0.0f), (0.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4657));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4658));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143;
		L_143 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4658));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4659));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_144;
		memset((&L_144), 0, sizeof(L_144));
		BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178((&L_144), ((int32_t)50), L_142, L_143, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4659));
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)43)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_144);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_145 = L_141;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4660));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146;
		L_146 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4660));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4661));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_147;
		memset((&L_147), 0, sizeof(L_147));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_147), ((int32_t)51), ((int32_t)52), L_146, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4661));
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_147);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_148 = L_145;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4662));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4662));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4663));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_150;
		memset((&L_150), 0, sizeof(L_150));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_150), ((int32_t)52), ((int32_t)53), L_149, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4663));
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)45)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_150);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_151 = L_148;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4664));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152;
		memset((&L_152), 0, sizeof(L_152));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_152), (0.0250000004f), (0.0f), (0.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4664));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4665));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153;
		L_153 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4665));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4666));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_154;
		memset((&L_154), 0, sizeof(L_154));
		BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178((&L_154), ((int32_t)53), L_152, L_153, (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4666));
		NullCheck(L_151);
		(L_151)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_154);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_155 = L_151;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4667));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_156;
		L_156 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4667));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4668));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_157;
		memset((&L_157), 0, sizeof(L_157));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_157), 2, 4, L_156, (0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4668));
		NullCheck(L_155);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)47)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_157);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_158 = L_155;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4669));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_159;
		L_159 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4669));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4670));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_160;
		memset((&L_160), 0, sizeof(L_160));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_160), 4, 6, L_159, (0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4670));
		NullCheck(L_158);
		(L_158)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)48)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_160);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_161 = L_158;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4671));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162;
		L_162 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4671));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4672));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_163;
		memset((&L_163), 0, sizeof(L_163));
		BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC((&L_163), 6, ((int32_t)20), L_162, (0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4672));
		NullCheck(L_161);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)49)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_163);
		BoneHeadTailU5BU5D_t9DED73E339D9455C8CFDCD2E74B35952396DB17C* L_164 = L_161;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4673));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_165;
		memset((&L_165), 0, sizeof(L_165));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_165), (0.0f), (0.0f), (0.0299999993f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4673));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4674));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_166;
		L_166 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4674));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4675));
		BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52 L_167;
		memset((&L_167), 0, sizeof(L_167));
		BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178((&L_167), ((int32_t)20), L_165, L_166, (0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4675));
		NullCheck(L_164);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)50)), (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52)L_167);
		((SkeletonMeshUtility_t8F8EA2193A3FFBAE71B804B72623941435608C60_StaticFields*)il2cpp_codegen_static_fields_for(SkeletonMeshUtility_t8F8EA2193A3FFBAE71B804B72623941435608C60_il2cpp_TypeInfo_var))->___Bones_0 = L_164;
		Il2CppCodeGenWriteBarrier((void**)(&((SkeletonMeshUtility_t8F8EA2193A3FFBAE71B804B72623941435608C60_StaticFields*)il2cpp_codegen_static_fields_for(SkeletonMeshUtility_t8F8EA2193A3FFBAE71B804B72623941435608C60_il2cpp_TypeInfo_var))->___Bones_0), (void*)L_164);
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
// System.Void UniHumanoid.SkeletonMeshUtility/TSRBox::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSRBox__ctor_m1CF12B88EF9752FF989714EFD2C4188FA701C866 (TSRBox_tB3C81ACF1D76E965AC8BC787CD2F08D3DD105F74* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_s, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_r, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_head, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TSRBox__ctor_m1CF12B88EF9752FF989714EFD2C4188FA701C866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TSRBox_tB3C81ACF1D76E965AC8BC787CD2F08D3DD105F74_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_t), (&___1_s), (&___2_r), (&___3_head));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TSRBox__ctor_m1CF12B88EF9752FF989714EFD2C4188FA701C866_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4676));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4677));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4678));
		// T = t;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4679));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_t;
		__this->___T_0 = L_0;
		// S = s;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4680));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_s;
		__this->___S_1 = L_1;
		// R = r;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4681));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___2_r;
		__this->___R_2 = L_2;
		// HeadPosition = head;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4682));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___3_head;
		__this->___HeadPosition_3 = L_3;
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4683));
		return;
	}
}
IL2CPP_EXTERN_C  void TSRBox__ctor_m1CF12B88EF9752FF989714EFD2C4188FA701C866_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_s, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_r, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_head, const RuntimeMethod* method)
{
	TSRBox_tB3C81ACF1D76E965AC8BC787CD2F08D3DD105F74* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TSRBox_tB3C81ACF1D76E965AC8BC787CD2F08D3DD105F74*>(__this + _offset);
	TSRBox__ctor_m1CF12B88EF9752FF989714EFD2C4188FA701C866(_thisAdjusted, ___0_t, ___1_s, ___2_r, ___3_head, method);
}
// UnityEngine.Matrix4x4 UniHumanoid.SkeletonMeshUtility/TSRBox::ToMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 TSRBox_ToMatrix_mCD4D65414C7782A9D4FBB59DC26802A8E1548D85 (TSRBox_tB3C81ACF1D76E965AC8BC787CD2F08D3DD105F74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TSRBox_ToMatrix_mCD4D65414C7782A9D4FBB59DC26802A8E1548D85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TSRBox_tB3C81ACF1D76E965AC8BC787CD2F08D3DD105F74_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TSRBox_ToMatrix_mCD4D65414C7782A9D4FBB59DC26802A8E1548D85_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4684));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4685));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4686));
		// return Matrix4x4.Translate(HeadPosition)
		//     * Matrix4x4.Rotate(R) * Matrix4x4.Scale(S) * Matrix4x4.Translate(T);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4687));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___HeadPosition_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4688));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = Matrix4x4_Translate_mF3EDFC59C9E51DC0C0A483F6E44A4930D62E4091(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4688));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = __this->___R_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4689));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = Matrix4x4_Rotate_m015442530DFF5651458BBFDFB3CBC9180FC09D9E(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4689));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4690));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_1, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4690));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___S_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4691));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6;
		L_6 = Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4691));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4692));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_4, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4692));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___T_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4693));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = Matrix4x4_Translate_mF3EDFC59C9E51DC0C0A483F6E44A4930D62E4091(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4693));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4694));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10;
		L_10 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_7, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4694));
		V_0 = L_10;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4695));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 TSRBox_ToMatrix_mCD4D65414C7782A9D4FBB59DC26802A8E1548D85_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TSRBox_tB3C81ACF1D76E965AC8BC787CD2F08D3DD105F74* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TSRBox_tB3C81ACF1D76E965AC8BC787CD2F08D3DD105F74*>(__this + _offset);
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 _returnValue;
	_returnValue = TSRBox_ToMatrix_mCD4D65414C7782A9D4FBB59DC26802A8E1548D85(_thisAdjusted, method);
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
// System.Void UniHumanoid.SkeletonMeshUtility/MeshBuilder::AddBone(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Single,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_AddBone_mCFA6A97CD863C006CB0EA813D42DC0FF7F09781A (MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_head, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_tail, int32_t ___2_boneIndex, float ___3_width, float ___4_height, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___5_xAxis, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_AddBone_mCFA6A97CD863C006CB0EA813D42DC0FF7F09781A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_head), (&___1_tail), (&___2_boneIndex), (&___3_width), (&___4_height), (&___5_xAxis));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MeshBuilder_AddBone_mCFA6A97CD863C006CB0EA813D42DC0FF7F09781A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4696));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4697));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4698));
		// var yAxis = (tail - head).normalized;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4699));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_tail;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_head;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4700));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4700));
		V_2 = L_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4701));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4701));
		V_0 = L_3;
		// var zAxis = Vector3.Cross(xAxis, yAxis);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4702));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___5_xAxis;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4703));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4703));
		V_1 = L_6;
		// xAxis = Vector3.Cross(yAxis, zAxis);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4704));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4705));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_7, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4705));
		___5_xAxis = L_9;
		// AddBox(boneIndex, new TSRBox
		// (
		//     new Vector3(0, 0.5f, 0),
		//     new Vector3(width, (tail - head).magnitude, height),
		//     new Matrix4x4(
		//         xAxis, yAxis, zAxis, new Vector4(0, 0, 0, 1)
		//     ).rotation,
		//     head
		// ));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4706));
		int32_t L_10 = ___2_boneIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4707));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (0.0f), (0.5f), (0.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4707));
		float L_12 = ___3_width;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___1_tail;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___0_head;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4708));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_13, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4708));
		V_2 = L_15;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4709));
		float L_16;
		L_16 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4709));
		float L_17 = ___4_height;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4710));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), L_12, L_16, L_17, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4710));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___5_xAxis;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4711));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20;
		L_20 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4711));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4712));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_22;
		L_22 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4712));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4713));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24;
		L_24 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_23, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4713));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4714));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_25), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4714));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4715));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Matrix4x4__ctor_m6523044D700F15EC6BCD183633A329EE56AA8C99((&L_26), L_20, L_22, L_24, L_25, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4715));
		V_3 = L_26;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4716));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Matrix4x4_get_rotation_m7E2C29FCB2AAFAE4D7B4FBD3563E9EDB53F5A8BB((&V_3), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4716));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___0_head;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4717));
		TSRBox_tB3C81ACF1D76E965AC8BC787CD2F08D3DD105F74 L_29;
		memset((&L_29), 0, sizeof(L_29));
		TSRBox__ctor_m1CF12B88EF9752FF989714EFD2C4188FA701C866((&L_29), L_11, L_18, L_27, L_28, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4717));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4718));
		MeshBuilder_AddBox_m4F53BFE8CAACE15C46AE3D1F45886615AF0A5D00(__this, L_10, L_29, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4718));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4719));
		return;
	}
}
// System.Void UniHumanoid.SkeletonMeshUtility/MeshBuilder::AddBox(System.Int32,UniHumanoid.SkeletonMeshUtility/TSRBox)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_AddBox_m4F53BFE8CAACE15C46AE3D1F45886615AF0A5D00 (MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923* __this, int32_t ___0_boneIndex, TSRBox_tB3C81ACF1D76E965AC8BC787CD2F08D3DD105F74 ___1_box, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_AddBox_m4F53BFE8CAACE15C46AE3D1F45886615AF0A5D00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_boneIndex), (&___1_box));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MeshBuilder_AddBox_m4F53BFE8CAACE15C46AE3D1F45886615AF0A5D00_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4720));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4721));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4722));
		// var m = box.ToMatrix();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4723));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4724));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0;
		L_0 = TSRBox_ToMatrix_mCD4D65414C7782A9D4FBB59DC26802A8E1548D85((&___1_box), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4724));
		V_0 = L_0;
		// var s = 0.5f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4725));
		V_1 = (0.5f);
		// var cube = new Vector3[]
		// {
		//     m.MultiplyPoint(new Vector3(+s, -s, -s)),
		//     m.MultiplyPoint(new Vector3(-s, -s, -s)),
		//     m.MultiplyPoint(new Vector3(-s, +s, -s)),
		//     m.MultiplyPoint(new Vector3(+s, +s, -s)),
		//     m.MultiplyPoint(new Vector3(+s, -s, +s)),
		//     m.MultiplyPoint(new Vector3(-s, -s, +s)),
		//     m.MultiplyPoint(new Vector3(-s, +s, +s)),
		//     m.MultiplyPoint(new Vector3(+s, +s, +s)),
		// };
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4726));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)8);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = L_1;
		float L_3 = V_1;
		float L_4 = V_1;
		float L_5 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4727));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_3, ((-L_4)), ((-L_5)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4727));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4728));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_0), L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4728));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_7);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = L_2;
		float L_9 = V_1;
		float L_10 = V_1;
		float L_11 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4729));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((-L_9)), ((-L_10)), ((-L_11)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4729));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4730));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_0), L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4730));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_13);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = L_8;
		float L_15 = V_1;
		float L_16 = V_1;
		float L_17 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4731));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), ((-L_15)), L_16, ((-L_17)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4731));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4732));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_0), L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4732));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_19);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = L_14;
		float L_21 = V_1;
		float L_22 = V_1;
		float L_23 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4733));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), L_21, L_22, ((-L_23)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4733));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4734));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_0), L_24, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4734));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_25);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = L_20;
		float L_27 = V_1;
		float L_28 = V_1;
		float L_29 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4735));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_30), L_27, ((-L_28)), L_29, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4735));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4736));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_0), L_30, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4736));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_31);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = L_26;
		float L_33 = V_1;
		float L_34 = V_1;
		float L_35 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4737));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), ((-L_33)), ((-L_34)), L_35, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4737));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4738));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_0), L_36, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4738));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_37);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_38 = L_32;
		float L_39 = V_1;
		float L_40 = V_1;
		float L_41 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4739));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((-L_39)), L_40, L_41, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4739));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4740));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_0), L_42, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4740));
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(6), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_43);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_44 = L_38;
		float L_45 = V_1;
		float L_46 = V_1;
		float L_47 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4741));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_48), L_45, L_46, L_47, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4741));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4742));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_0), L_48, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4742));
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_49);
		V_2 = L_44;
		// AddQuad(boneIndex, cube[0], cube[1], cube[2], cube[3]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4743));
		int32_t L_50 = ___0_boneIndex;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_51 = V_2;
		NullCheck(L_51);
		int32_t L_52 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_54 = V_2;
		NullCheck(L_54);
		int32_t L_55 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_57 = V_2;
		NullCheck(L_57);
		int32_t L_58 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_60 = V_2;
		NullCheck(L_60);
		int32_t L_61 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4744));
		MeshBuilder_AddQuad_m420F09BD49072F0C502BA406DBE6B03FCAF78851(__this, L_50, L_53, L_56, L_59, L_62, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4744));
		// AddQuad(boneIndex, cube[1], cube[5], cube[6], cube[2]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4745));
		int32_t L_63 = ___0_boneIndex;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_64 = V_2;
		NullCheck(L_64);
		int32_t L_65 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_67 = V_2;
		NullCheck(L_67);
		int32_t L_68 = 5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_70 = V_2;
		NullCheck(L_70);
		int32_t L_71 = 6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_73 = V_2;
		NullCheck(L_73);
		int32_t L_74 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4746));
		MeshBuilder_AddQuad_m420F09BD49072F0C502BA406DBE6B03FCAF78851(__this, L_63, L_66, L_69, L_72, L_75, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4746));
		// AddQuad(boneIndex, cube[5], cube[4], cube[7], cube[6]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4747));
		int32_t L_76 = ___0_boneIndex;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_77 = V_2;
		NullCheck(L_77);
		int32_t L_78 = 5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_80 = V_2;
		NullCheck(L_80);
		int32_t L_81 = 4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_83 = V_2;
		NullCheck(L_83);
		int32_t L_84 = 7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_86 = V_2;
		NullCheck(L_86);
		int32_t L_87 = 6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4748));
		MeshBuilder_AddQuad_m420F09BD49072F0C502BA406DBE6B03FCAF78851(__this, L_76, L_79, L_82, L_85, L_88, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4748));
		// AddQuad(boneIndex, cube[4], cube[0], cube[3], cube[7]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4749));
		int32_t L_89 = ___0_boneIndex;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_90 = V_2;
		NullCheck(L_90);
		int32_t L_91 = 4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_93 = V_2;
		NullCheck(L_93);
		int32_t L_94 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_96 = V_2;
		NullCheck(L_96);
		int32_t L_97 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_99 = V_2;
		NullCheck(L_99);
		int32_t L_100 = 7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4750));
		MeshBuilder_AddQuad_m420F09BD49072F0C502BA406DBE6B03FCAF78851(__this, L_89, L_92, L_95, L_98, L_101, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4750));
		// AddQuad(boneIndex, cube[3], cube[2], cube[6], cube[7]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4751));
		int32_t L_102 = ___0_boneIndex;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_103 = V_2;
		NullCheck(L_103);
		int32_t L_104 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_106 = V_2;
		NullCheck(L_106);
		int32_t L_107 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_109 = V_2;
		NullCheck(L_109);
		int32_t L_110 = 6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_112 = V_2;
		NullCheck(L_112);
		int32_t L_113 = 7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4752));
		MeshBuilder_AddQuad_m420F09BD49072F0C502BA406DBE6B03FCAF78851(__this, L_102, L_105, L_108, L_111, L_114, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4752));
		// AddQuad(boneIndex, cube[4], cube[5], cube[1], cube[0]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4753));
		int32_t L_115 = ___0_boneIndex;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_116 = V_2;
		NullCheck(L_116);
		int32_t L_117 = 4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_119 = V_2;
		NullCheck(L_119);
		int32_t L_120 = 5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_122 = V_2;
		NullCheck(L_122);
		int32_t L_123 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_125 = V_2;
		NullCheck(L_125);
		int32_t L_126 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4754));
		MeshBuilder_AddQuad_m420F09BD49072F0C502BA406DBE6B03FCAF78851(__this, L_115, L_118, L_121, L_124, L_127, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4754));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4755));
		return;
	}
}
// System.Void UniHumanoid.SkeletonMeshUtility/MeshBuilder::AddQuad(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_AddQuad_m420F09BD49072F0C502BA406DBE6B03FCAF78851 (MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923* __this, int32_t ___0_boneIndex, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_v0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_v1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_v2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___4_v3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC85312B7A900D66882788521C394A8179AA44A60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_AddQuad_m420F09BD49072F0C502BA406DBE6B03FCAF78851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_1;
	memset((&V_1), 0, sizeof(V_1));
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_boneIndex), (&___1_v0), (&___2_v1), (&___3_v2), (&___4_v3));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MeshBuilder_AddQuad_m420F09BD49072F0C502BA406DBE6B03FCAF78851_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4756));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4757));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4758));
		// var i = m_positions.Count;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4759));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___m_positions_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4760));
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_0, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4760));
		V_0 = L_1;
		// m_positions.Add(v0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4761));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = __this->___m_positions_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_v0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4762));
		NullCheck(L_2);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_2, L_3, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4762));
		// m_positions.Add(v1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4763));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_4 = __this->___m_positions_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___2_v1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4764));
		NullCheck(L_4);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_4, L_5, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4764));
		// m_positions.Add(v2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4765));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = __this->___m_positions_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___3_v2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4766));
		NullCheck(L_6);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_6, L_7, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4766));
		// m_positions.Add(v3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4767));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_8 = __this->___m_positions_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___4_v3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4768));
		NullCheck(L_8);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_8, L_9, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4768));
		// var bw = new BoneWeight
		// {
		//     boneIndex0 = boneIndex,
		//     weight0 = 1.0f,
		// };
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4769));
		il2cpp_codegen_initobj((&V_2), sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F));
		int32_t L_10 = ___0_boneIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4770));
		BoneWeight_set_boneIndex0_mC11383D890013A65F158A7D3F81AB2C4A1C6B8FC((&V_2), L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4770));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4771));
		BoneWeight_set_weight0_m8756609C6942EDC04DA03F59A57986D520DB86E7((&V_2), (1.0f), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4771));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_11 = V_2;
		V_1 = L_11;
		// m_boneWeights.Add(bw);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4772));
		List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F* L_12 = __this->___m_boneWeights_2;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_13 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4773));
		NullCheck(L_12);
		List_1_Add_mC85312B7A900D66882788521C394A8179AA44A60_inline(L_12, L_13, List_1_Add_mC85312B7A900D66882788521C394A8179AA44A60_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4773));
		// m_boneWeights.Add(bw);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4774));
		List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F* L_14 = __this->___m_boneWeights_2;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_15 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4775));
		NullCheck(L_14);
		List_1_Add_mC85312B7A900D66882788521C394A8179AA44A60_inline(L_14, L_15, List_1_Add_mC85312B7A900D66882788521C394A8179AA44A60_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4775));
		// m_boneWeights.Add(bw);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4776));
		List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F* L_16 = __this->___m_boneWeights_2;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_17 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4777));
		NullCheck(L_16);
		List_1_Add_mC85312B7A900D66882788521C394A8179AA44A60_inline(L_16, L_17, List_1_Add_mC85312B7A900D66882788521C394A8179AA44A60_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4777));
		// m_boneWeights.Add(bw);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4778));
		List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F* L_18 = __this->___m_boneWeights_2;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_19 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4779));
		NullCheck(L_18);
		List_1_Add_mC85312B7A900D66882788521C394A8179AA44A60_inline(L_18, L_19, List_1_Add_mC85312B7A900D66882788521C394A8179AA44A60_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4779));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4780));
		// m_indices.Add(i);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4781));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_20 = __this->___m_indices_1;
		int32_t L_21 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4782));
		NullCheck(L_20);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_20, L_21, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4782));
		// m_indices.Add(i + 1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4783));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_22 = __this->___m_indices_1;
		int32_t L_23 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4784));
		NullCheck(L_22);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4784));
		// m_indices.Add(i + 2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4785));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_24 = __this->___m_indices_1;
		int32_t L_25 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4786));
		NullCheck(L_24);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_24, ((int32_t)il2cpp_codegen_add(L_25, 2)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4786));
		// m_indices.Add(i + 2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4787));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_26 = __this->___m_indices_1;
		int32_t L_27 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4788));
		NullCheck(L_26);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_26, ((int32_t)il2cpp_codegen_add(L_27, 2)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4788));
		// m_indices.Add(i + 3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4789));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_28 = __this->___m_indices_1;
		int32_t L_29 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4790));
		NullCheck(L_28);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_28, ((int32_t)il2cpp_codegen_add(L_29, 3)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4790));
		// m_indices.Add(i);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4791));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_30 = __this->___m_indices_1;
		int32_t L_31 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4792));
		NullCheck(L_30);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_30, L_31, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4792));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4793));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4794));
		return;
	}
}
// UnityEngine.Mesh UniHumanoid.SkeletonMeshUtility/MeshBuilder::CreateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshBuilder_CreateMesh_m98E1B40C0565A76818BFE79779B576D99BB2069C (MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mE61932ED5F0BE9F3A28DD0F3800A6373A32618DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_CreateMesh_m98E1B40C0565A76818BFE79779B576D99BB2069C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MeshBuilder_CreateMesh_m98E1B40C0565A76818BFE79779B576D99BB2069C_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4795));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4796));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4797));
		// var mesh = new Mesh();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4798));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4799));
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4799));
		V_0 = L_0;
		// mesh.SetVertices(m_positions);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4800));
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = V_0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = __this->___m_positions_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4801));
		NullCheck(L_1);
		Mesh_SetVertices_mCE01139EEEC3D10B4A6CEA1749FD84DABC53599E(L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4801));
		// mesh.boneWeights = m_boneWeights.ToArray();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4802));
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3 = V_0;
		List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F* L_4 = __this->___m_boneWeights_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4803));
		NullCheck(L_4);
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_5;
		L_5 = List_1_ToArray_mE61932ED5F0BE9F3A28DD0F3800A6373A32618DB(L_4, List_1_ToArray_mE61932ED5F0BE9F3A28DD0F3800A6373A32618DB_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4803));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4804));
		NullCheck(L_3);
		Mesh_set_boneWeights_m4924E79620EDC7AAA1D05CFE8B535BB37F0E8FA7(L_3, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4804));
		// mesh.triangles = m_indices.ToArray();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4805));
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = __this->___m_indices_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4806));
		NullCheck(L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8;
		L_8 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_7, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4806));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4807));
		NullCheck(L_6);
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_6, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4807));
		// mesh.RecalculateNormals();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4808));
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4809));
		NullCheck(L_9);
		Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B(L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4809));
		// mesh.RecalculateBounds();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4810));
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4811));
		NullCheck(L_10);
		Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B(L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4811));
		// return mesh;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4812));
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_11 = V_0;
		V_1 = L_11;
		goto IL_004a;
	}

IL_004a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4813));
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_12 = V_1;
		return L_12;
	}
}
// System.Void UniHumanoid.SkeletonMeshUtility/MeshBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder__ctor_m7421490CFA93D231F541839B4683C633291F099D (MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCB4C0FD63BA973934B61CA1EB2700467B5670C97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder__ctor_m7421490CFA93D231F541839B4683C633291F099D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_t832E4D488D11CFCC34382DAA70D0B1ED9D7D7923_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MeshBuilder__ctor_m7421490CFA93D231F541839B4683C633291F099D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4814));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4815));
	{
		// List<Vector3> m_positions = new List<Vector3>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4816));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4817));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4817));
		__this->___m_positions_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_positions_0), (void*)L_0);
		// List<int> m_indices = new List<int>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4818));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4819));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_1, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4819));
		__this->___m_indices_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_indices_1), (void*)L_1);
		// List<BoneWeight> m_boneWeights = new List<BoneWeight>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4820));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4821));
		List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F* L_2 = (List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F*)il2cpp_codegen_object_new(List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCB4C0FD63BA973934B61CA1EB2700467B5670C97(L_2, List_1__ctor_mCB4C0FD63BA973934B61CA1EB2700467B5670C97_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4821));
		__this->___m_boneWeights_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_boneWeights_2), (void*)L_2);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4822));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4822));
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
// System.Void UniHumanoid.SkeletonMeshUtility/BoneHeadTail::.ctor(UnityEngine.HumanBodyBones,UnityEngine.HumanBodyBones,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52* __this, int32_t ___0_head, int32_t ___1_tail, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_xAxis, float ___3_width, float ___4_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_head), (&___1_tail), (&___2_xAxis), (&___3_width), (&___4_height));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4823));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4824));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4825));
		// Head = head;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4826));
		int32_t L_0 = ___0_head;
		__this->___Head_0 = L_0;
		// Tail = tail;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4827));
		int32_t L_1 = ___1_tail;
		__this->___Tail_1 = L_1;
		// TailOffset = Vector3.zero;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4828));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4829));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4829));
		__this->___TailOffset_2 = L_2;
		// XAxis = xAxis;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4830));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___2_xAxis;
		__this->___XAxis_5 = L_3;
		// Width = width;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4831));
		float L_4 = ___3_width;
		__this->___Width_3 = L_4;
		// Height = height;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4832));
		float L_5 = ___4_height;
		__this->___Height_4 = L_5;
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4833));
		return;
	}
}
IL2CPP_EXTERN_C  void BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC_AdjustorThunk (RuntimeObject* __this, int32_t ___0_head, int32_t ___1_tail, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_xAxis, float ___3_width, float ___4_height, const RuntimeMethod* method)
{
	BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52*>(__this + _offset);
	BoneHeadTail__ctor_m1961211302308969E14588D277DE4420449598EC(_thisAdjusted, ___0_head, ___1_tail, ___2_xAxis, ___3_width, ___4_height, method);
}
// System.Void UniHumanoid.SkeletonMeshUtility/BoneHeadTail::.ctor(UnityEngine.HumanBodyBones,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178 (BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52* __this, int32_t ___0_head, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_tailOffset, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_xAxis, float ___3_width, float ___4_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_head), (&___1_tailOffset), (&___2_xAxis), (&___3_width), (&___4_height));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4834));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4835));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4836));
		// Head = head;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4837));
		int32_t L_0 = ___0_head;
		__this->___Head_0 = L_0;
		// Tail = HumanBodyBones.LastBone;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4838));
		__this->___Tail_1 = ((int32_t)55);
		// TailOffset = tailOffset;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4839));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_tailOffset;
		__this->___TailOffset_2 = L_1;
		// XAxis = xAxis;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4840));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___2_xAxis;
		__this->___XAxis_5 = L_2;
		// Width = width;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4841));
		float L_3 = ___3_width;
		__this->___Width_3 = L_3;
		// Height = height;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4842));
		float L_4 = ___4_height;
		__this->___Height_4 = L_4;
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4843));
		return;
	}
}
IL2CPP_EXTERN_C  void BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178_AdjustorThunk (RuntimeObject* __this, int32_t ___0_head, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_tailOffset, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_xAxis, float ___3_width, float ___4_height, const RuntimeMethod* method)
{
	BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoneHeadTail_t25FBF810A37DEC82D1F42F71C63D0ED683822E52*>(__this + _offset);
	BoneHeadTail__ctor_m9454193123B80C00B4B2913CC1A67AC6E82FB178(_thisAdjusted, ___0_head, ___1_tailOffset, ___2_xAxis, ___3_width, ___4_height, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniHumanoid.SkeletonMeshUtility/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mD7B3D177A8F54AC8191793A11E76C90EFEFFF6F3 (U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0__ctor_mD7B3D177A8F54AC8191793A11E76C90EFEFFF6F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass4_0__ctor_mD7B3D177A8F54AC8191793A11E76C90EFEFFF6F3_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Matrix4x4 UniHumanoid.SkeletonMeshUtility/<>c__DisplayClass4_0::<CreateRenderer>b__0(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 U3CU3Ec__DisplayClass4_0_U3CCreateRendererU3Eb__0_m9FD708582CC625B3FFE02B510D960B22B1898B3B (U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CCreateRendererU3Eb__0_m9FD708582CC625B3FFE02B510D960B22B1898B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tFF4235F704F1D3762F62DAB0F46024CCFCD72E7C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass4_0_U3CCreateRendererU3Eb__0_m9FD708582CC625B3FFE02B510D960B22B1898B3B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4844));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 4845));
	{
		// mesh.bindposes = bones.Select(x => x.worldToLocalMatrix * animator.transform.localToWorldMatrix).ToArray();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4846));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_x;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4847));
		NullCheck(L_0);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4847));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4848));
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4848));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4849));
		NullCheck(L_3);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4849));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4850));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_1, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 4850));
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BvhNode_t69ABF425B6902A35367FF490DF3BB35A4F1AF80C* Bvh_get_Root_mB98898C2E5B5E11C4F3A6932F6D0638172833FB9_inline (Bvh_t860215FD572E44D06C2764E255A5129C00A39687* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bvh_get_Root_mB98898C2E5B5E11C4F3A6932F6D0638172833FB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bvh_t860215FD572E44D06C2764E255A5129C00A39687_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Bvh_get_Root_mB98898C2E5B5E11C4F3A6932F6D0638172833FB9_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 1032));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 1033));
	{
		// get;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 1034));
		BvhNode_t69ABF425B6902A35367FF490DF3BB35A4F1AF80C* L_0 = __this->___U3CRootU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BvhNode_get_Name_mDB1AB1CF22C6BF5CC0AD6E0B49638445EB5C50B6_inline (BvhNode_t69ABF425B6902A35367FF490DF3BB35A4F1AF80C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhNode_get_Name_mDB1AB1CF22C6BF5CC0AD6E0B49638445EB5C50B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BvhNode_t69ABF425B6902A35367FF490DF3BB35A4F1AF80C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BvhNode_get_Name_mDB1AB1CF22C6BF5CC0AD6E0B49638445EB5C50B6_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 1513));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniHumanoid + 1514));
	{
		// get;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniHumanoid + 1515));
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7689));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7690));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7691));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7692));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7693));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7729));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7730));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7731));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7732));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7733));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7733));
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7734));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7724));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7725));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7726));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7727));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7728));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x), (&___1_y), (&___2_z));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7560));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7561));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7562));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7563));
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7564));
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7565));
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7566));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7699));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7700));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7701));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7702));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7703));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7719));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7720));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7721));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7722));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7723));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7704));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7705));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7706));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7707));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7708));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7735));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7736));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7737));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7738));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7739));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7739));
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7740));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7614));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7615));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7616));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7617));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7618));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7618));
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7619));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_lhs), (&___1_rhs));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7574));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7575));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7576));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7577));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_lhs;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_rhs;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_lhs;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_rhs;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_lhs;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___1_rhs;
		float L_23 = L_22.___x_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7578));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7578));
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7579));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7655));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7656));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7657));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7658));
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7659));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7659));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7660));
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_v));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7466));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7467));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7468));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7469));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_v;
		float L_5 = L_4.___z_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7470));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7470));
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7471));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x), (&___1_y), (&___2_z), (&___3_w));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7372));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7373));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7374));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7375));
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7376));
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7377));
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7378));
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7379));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_gshared_inline (Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_arg1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7602));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7603));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7604));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7605));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7606));
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7606));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7607));
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7608));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7609));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7610));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7610));
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7611));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7612));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7612));
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7613));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_vector));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7649));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7650));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7651));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7652));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7653));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7653));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7654));
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_d));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7753));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7754));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7755));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7756));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7757));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7757));
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7758));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
