#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1Invoker;
template <typename R, typename T1>
struct VirtualFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1Invoker;
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename R>
struct InterfaceFuncInvoker0Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { &p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		R ret;
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3*, T4*, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, p2, p3, p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3, T4, T5, T6*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4, T5 p5, T6* p6)
	{
		R ret;
		void* params[6] = { p1, p2, &p3, &p4, &p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3*, T4*, T5*, T6>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6 p6)
	{
		R ret;
		void* params[6] = { p1, p2, p3, p4, p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2*, T3*, T4, T5, T6, T7*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5 p5, T6 p6, T7* p7)
	{
		R ret;
		void* params[7] = { p1, p2, p3, &p4, &p5, &p6, p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2*, T3*, T4*, T5*, T6*, T7>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7 p7)
	{
		R ret;
		void* params[7] = { p1, p2, p3, p4, p5, p6, &p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerFuncInvoker8;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerFuncInvoker8<R, T1*, T2, T3*, T4*, T5, T6, T7*, T8>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4, T5 p5, T6 p6, T7* p7, T8 p8)
	{
		R ret;
		void* params[8] = { p1, &p2, p3, p4, &p5, &p6, p7, &p8 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct ConstrainedActionInvoker1;
template <typename T1>
struct ConstrainedActionInvoker1<T1*>
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[0]);
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct ConstrainedFuncInvoker2;
template <typename R, typename T1, typename T2>
struct ConstrainedFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

// UnityEngine.UIElements.UQueryState`1/ActionQueryMatcher<System.Object>
struct ActionQueryMatcher_tB76860A856401075A2CF71D45AC72A9C0F1BB99E;
// UnityEngine.UIElements.UQueryState`1/ActionQueryMatcher<UnityEngine.UIElements.VisualElement>
struct ActionQueryMatcher_tBA08813774EDD8920F40BFFC2F27B8329C7923DD;
// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel>
struct Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<UnityEngine.Camera>
struct Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA;
// System.Action`1<System.IAsyncResult>
struct Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780;
// System.Action`1<UnityEngine.UIElements.IPanel>
struct Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6;
// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Action`1<UnityEngine.Material>
struct Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA;
// System.Action`1<UnityEngine.UIElements.MeshGenerationContext>
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Action`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E;
// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>
struct Action_2_t8B3B3F62C8B5EC13D5C0E28B79C6D396133CA816;
// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.ValueTuple`3<System.String,System.Int32,System.Int32>,System.Boolean>
struct ConcurrentDictionary_2_t26E722A13B3E6FC0724A28BEF9B34B72CB8D78C0;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector>
struct Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement>
struct Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct Dictionary_2_t29D782BF5D0A26D11A04865B4306B86575506834;
// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>
struct Dictionary_2_t8B8AC3704119A64857E8D359CB4782C5ECEA90E7;
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UniGLTF.Utils.TransformState>
struct Dictionary_2_t99C61E47200BBFC0575A2E7D12A3A387B728722B;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData>
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
// System.Collections.Generic.Dictionary`2<System.Type,UniGLTF.glTFExtensions/ComponentVec>
struct Dictionary_2_t7C687CB53080A5BE3F3D34D182E1F6DFC564B87A;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StylePropertyAnimationSystem/ElementPropertyPair,System.Int32>
struct Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574;
// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
// System.Func`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB;
// System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9;
// System.Func`2<System.Single,System.Single>
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2;
// System.Func`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Func_2_tDDC415B0A5306A4473D2ADD7C4E25824337698DB;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>
struct Func_2_tED7CA67878EF0FB299872769153413F97964501A;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.String>
struct Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C;
// System.Func`3<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0;
// System.Func`3<System.Type,System.Type[],System.Type>
struct Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5;
// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799;
// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Single,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_4_t2D728D40D290F8C65346C870D314F893B5896872;
// System.Func`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9;
// UnityEngine.UIElements.UIR.Utility/GPUBuffer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct GPUBuffer_1_t59623B2A3B8EFD33FB05C973C4C4EAFCF89ED241;
// System.Reflection.RuntimePropertyInfo/Getter`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.UIElements.StyleSheets.StylePropertyId>
struct IEqualityComparer_1_t341DBC625B94A179D2F2C3E3CF45C76E281F4612;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// UnityEngine.UIElements.IStyleValue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IStyleValue_1_t0807BFB3B6427E5EA21E4D85C41469BE44C00920;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>
struct KeyCollection_tAE1CD1CE327D07F072532A89E6854F2C33EB014A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,UniGLTF.glTFExtensions/ComponentVec>
struct KeyCollection_t7848D04B1987F92859100B0240DA19DF5A50B545;
// System.Collections.Generic.LinkedList`1<UnityEngine.UIElements.UIR.UIRenderDevice/DeviceToFree>
struct LinkedList_1_t09F6FB09C766455615BBF59716D285304C49E0E7;
// UnityEngine.UIElements.UIR.LinkedPool`1<UnityEngine.UIElements.UIR.MeshHandle>
struct LinkedPool_1_tD8A175EE023C8220138E51E722F4A20ACE9CA851;
// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<System.Object,System.Object>
struct ListQueryMatcher_1_t4D10BEF648526B008BEB75C8576A7D1EBFD73A83;
// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<System.Object,UnityEngine.UIElements.VisualElement>
struct ListQueryMatcher_1_tC447E3396770813CE332360F6EECEEFB6B51FA69;
// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VisualElement>
struct ListQueryMatcher_1_t7F21A0BB6BC47F1797366366A8E33731906C2940;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree>>
struct List_1_tB86898E2E533634C35EC58EC5DAE3353038A9210;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate>>
struct List_1_tA79C35FB5E50135962B53960CB758B9262700632;
// System.Collections.Generic.List`1<System.ValueTuple`2<VRMShaders.SubAssetKey,UnityEngine.Object>>
struct List_1_t491E3856BE98663F8A31500DDE5FC3079B04D54C;
// System.Collections.Generic.List`1<UnityEngine.AnimationClip>
struct List_1_t8719F82490DCDF6DB697DBD7FDEFED1F6F7B083E;
// System.Collections.Generic.List`1<System.IDisposable>
struct List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05;
// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler>
struct List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B;
// System.Collections.Generic.List`1<UnityEngine.Mesh>
struct List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4;
// System.Collections.Generic.List`1<UnityEngine.MeshRenderer>
struct List_1_t558592816DA880773C8A60C1EB777F3B092B68EC;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93;
// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher>
struct List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC;
// System.Collections.Generic.List`1<UnityEngine.SkinnedMeshRenderer>
struct List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelector>
struct List_1_tB8CE94A1885E4D10B34A91CC9D21169286DC0A63;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
// System.Collections.Generic.List`1<UnityEngine.Texture>
struct List_1_t6E9F60A9560151988FBFFAE2D966D20615C353FB;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyAnimationSystem/Values>
struct List_1_t491E344573B9D6F61E36AF56132B7412453928C9;
// System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset/AttributeOverride>
struct List_1_t70EE7982F45810D4B024CF720D910E67974A3094;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct ObjectPool_1_t14AD861DB16C1D8128773A1568BD9925E67A9ADB;
// UniGLTF.Pin`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.InheritedData>
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.LayoutData>
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.RareData>
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransformData>
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransitionData>
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.VisualData>
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
// System.Buffers.SpanAction`2<System.Char,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A;
// System.Reflection.RuntimePropertyInfo/StaticGetter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct TaskFactory_1_t3B055CB72CA2D1BEF08BD1C91FFB09DB3268521E;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct TaskFactory_1_t4BEAD6CE2527DBE682C128CEAA0FF2A79483E96C;
// System.Threading.Tasks.TaskFactory`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D;
// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB;
// System.Tuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8;
// System.Tuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB;
// UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>
struct ValueCollection_t04D5F77EBC72D81BB7FE7199D6C9DC65DEB60064;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,UniGLTF.glTFExtensions/ComponentVec>
struct ValueCollection_t782A4079A6DBFF8C30910B7E64BEB610C77C5D5C;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Values_1_tD44BBEC769B1388DCA51C01019802B242F987014;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/EmptyData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct EmptyDataU5BU5D_t4F13631B1440411479135A222DA84C0A8FC754FD;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>[]
struct EntryU5BU5D_t524C33EA8D08013B8734724ABCA925485CF3B799;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,UniGLTF.glTFExtensions/ComponentVec>[]
struct EntryU5BU5D_t87A5E9BCDC32A3E6557F77FD7A24F7288D9692CE;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/StyleData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TimingData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034;
// System.ValueTuple`2<VRMShaders.SubAssetKey,UnityEngine.Object>[]
struct ValueTuple_2U5BU5D_t900F6C67D025EE45AF292E341BFC02AD58008184;
// System.Attribute[]
struct AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.UIElements.ComputedTransitionProperty[]
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.UIElements.StyleSheets.Dimension[]
struct DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.IDisposable[]
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE;
// UnityEngine.UIElements.IVisualTreeUpdater[]
struct IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.TextCore.Text.LineInfo[]
struct LineInfoU5BU5D_t37598F2175B291797270D1161DC29B6296FB169D;
// UnityEngine.TextCore.Text.LinkInfo[]
struct LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51;
// UnityEngine.TextCore.Text.MeshInfo[]
struct MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// UnityEngine.TextCore.Text.PageInfo[]
struct PageInfoU5BU5D_tFEA2CF88695491CFC2F2A2EF6BDCC56E52B0A6D4;
// UnityEngine.UIElements.RuleMatcher[]
struct RuleMatcherU5BU5D_t0135EA06151E72D04414F3EAF9420CB85EE2236C;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// UnityEngine.UIElements.StyleSheets.ScalableImage[]
struct ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIElements.StyleComplexSelector[]
struct StyleComplexSelectorU5BU5D_tF7B5239DE9BF477DECF97EFBA7CB1D71C45DB857;
// UnityEngine.UIElements.StyleSheets.StylePropertyId[]
struct StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359;
// UnityEngine.UIElements.StyleRule[]
struct StyleRuleU5BU5D_t7897A39D88CA043B2BFB5B28C53B41564EBA3AF3;
// UnityEngine.UIElements.StyleSelector[]
struct StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D;
// UnityEngine.UIElements.StyleSelectorPart[]
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
// UnityEngine.TextCore.Text.TextElementInfo[]
struct TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.UIElements.VisualElement[]
struct VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF;
// UnityEngine.TextCore.Text.WordInfo[]
struct WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType[]
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values[]
struct ValuesU5BU5D_t5332999C48416329B2A447FCD8C71113DDB459EA;
// UnityEngine.UIElements.StyleSheet/ImportStruct[]
struct ImportStructU5BU5D_t42D231FD5BB4B620965D7BED87D56D531B4C7AE9;
// System.AccessViolationException
struct AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.UIElements.ContextualMenuManager
struct ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UIElements.UIR.DrawParams
struct DrawParams_t523864F415D78BD8BB14E8B7BD349594D6187443;
// UnityEngine.UIElements.ElementUnderPointer
struct ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.UIElements.EventBase
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UIElements.HierarchyEvent
struct HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.UIElements.ICursorManager
struct ICursorManager_t78B026DED2559C62810B21C54C5F882457073A8B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// UnityEngine.UIElements.IEventHandler
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// UnityEngine.UIElements.IMouseEvent
struct IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E;
// UnityEngine.UIElements.IPanel
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
// UnityEngine.UIElements.IPointerEvent
struct IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7;
// UnityEngine.UIElements.IUxmlAttributes
struct IUxmlAttributes_t9B6679F04874117C59014DE49C35B1841F9A1DDE;
// UnityEngine.UIElements.IVisualTreeUpdater
struct IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t5B384C1DCF0750B44E124D640E4F041DB19B7FD1;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
// System.Threading.Lock
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MonoTypeInfo
struct MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501;
// UniGLTF.NativeArrayManager
struct NativeArrayManager_t3E3943BD412EF76264F6FC8151D43128A0A6F4E2;
// VRMShaders.NextFrameTaskScheduler
struct NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
// UnityEngine.UIElements.UIR.Page
struct Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9;
// UnityEngine.UIElements.PropagationPaths
struct PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5;
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_t33E37F4C07B3A1F415AA97A5C5F7F5A1662A8574;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
// UnityEngine.UIElements.RepaintData
struct RepaintData_t90534752135661579EC254884F550545D001B5EA;
// System.Reflection.RuntimeConstructorInfo
struct RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE;
// UniGLTF.RuntimeGltfInstance
struct RuntimeGltfInstance_tD0A11D889A6319962208144B89CAA3AA055660DD;
// VRMShaders.RuntimeOnlyAwaitCaller
struct RuntimeOnlyAwaitCaller_tCF2855FA690F71FF79CEEC5FB5799E4FE247C455;
// VRMShaders.RuntimeOnlyNoThreadAwaitCaller
struct RuntimeOnlyNoThreadAwaitCaller_t2C6536780914579F61D718A5F72FC0C212576421;
// System.RuntimeType
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UIElements.StyleComplexSelector
struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD;
// UnityEngine.UIElements.StylePropertyAnimationSystem
struct StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718;
// UnityEngine.UIElements.StyleRule
struct StyleRule_t69F0C0989004F85BBD9C72BC7A73F79BFE61651E;
// UnityEngine.UIElements.StyleSelector
struct StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362;
// UnityEngine.UIElements.StyleSheet
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UIElements.UIR.TextureSlotManager
struct TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.UIElements.UIR.UIRenderDevice
struct UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302;
// UnityEngine.UnityException
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067;
// UnityEngine.UIElements.UxmlAttributeDescription
struct UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2;
// UnityEngine.UIElements.UxmlTypeRestriction
struct UxmlTypeRestriction_t2C4CE1ED76502CDF80010880E058AF0582910A92;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// System.Xml.Linq.XContainer
struct XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF;
// System.Xml.Linq.XDeclaration
struct XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990;
// System.Xml.Linq.XDocument
struct XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1;
// System.Xml.Linq.XObject
struct XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29;
// System.Xml.Schema.XmlListConverter
struct XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF;
// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E;
// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345;
// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA;
// System.Reflection.RuntimePropertyInfo/GetterAdapter
struct GetterAdapter_t03939DF178051A4B282ADA9CC4395C34B86D9D2E;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values
struct Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesBackground
struct ValuesBackground_tFF4533C18E78BDA24210ECA0967C209A2FD2FB34;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesColor
struct ValuesColor_tDE4E373E9165A21D96B77B831D7663BE93073904;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFloat
struct ValuesFloat_t79D7FFC3D96EA35AFBCE6E41A84C30186FFFF0C2;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFont
struct ValuesFont_tD9B58EA95F0D99292A54C9C6C879318BBE3B02A4;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFontDefinition
struct ValuesFontDefinition_t4D0C2DECA9435D3EB901FE70837AD878111678F7;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesInt
struct ValuesInt_t2D0093355274C731BB6DF9C8933EEEDA42276367;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesLength
struct ValuesLength_tCE4AE0723109EE10076DBD46F7A853F202AF5915;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesRotate
struct ValuesRotate_t90582D6825FCBEF3C2A68160CCEC275C51217C63;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesScale
struct ValuesScale_t21E6FC5B09789CB4974FC2ED15C3F83B863FCF8A;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTextShadow
struct ValuesTextShadow_t50CB05DF0E7770164252616605C61B37DB4A966C;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTransformOrigin
struct ValuesTransformOrigin_tB46EC0F073E360E1431CCD4E580BA675D716823F;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTranslate
struct ValuesTranslate_tFB5B432755E0DAA7DD8C95E78FDCC78C4885940B;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// UnityEngine.UIElements.VisualElement/CustomStyleAccess
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
// UnityEngine.UIElements.VisualElement/TypeData
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;
// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUniGLTF[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_AndroidJNIModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_TextCoreTextEngineModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UIElementsModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UIElementsNativeModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UI[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsVRMShaders_GLTF_IO_Runtime[];
IL2CPP_EXTERN_C RuntimeClass* AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XNode_t185C922661054AAD14F49676DD6F3CB10D652A30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* glTFExtensions_tC121239197B90BD22976E4CEF235DC6C404F352F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A;
IL2CPP_EXTERN_C String_t* _stringLiteral0A452795E040C66D151B05EE8648BF3F8016F207;
IL2CPP_EXTERN_C String_t* _stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral24CC8D396132365E532646F936DFC8579E2299B2;
IL2CPP_EXTERN_C String_t* _stringLiteral2F9BACDA740D58784E6ACAE19F0F0BC32F753A58;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C;
IL2CPP_EXTERN_C String_t* _stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral600D30633EB082AEF57145338A6373C4D63BA876;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B;
IL2CPP_EXTERN_C String_t* _stringLiteral67D35A10B5C82CF47B3ECDE5B71D1402662B746D;
IL2CPP_EXTERN_C String_t* _stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468;
IL2CPP_EXTERN_C String_t* _stringLiteral7AD319493499620E43634FF644A0CEF1624086AD;
IL2CPP_EXTERN_C String_t* _stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC;
IL2CPP_EXTERN_C String_t* _stringLiteral845A5580D4FF36A92111CBD6F53DACEDA23BA32F;
IL2CPP_EXTERN_C String_t* _stringLiteralA7FBBFFB8EE0FB972E2B09691037C46596893A5A;
IL2CPP_EXTERN_C String_t* _stringLiteralB2EAC54936C480056DBBB5B97FD1CFD1C79B1990;
IL2CPP_EXTERN_C String_t* _stringLiteralB382FDA4B30D0397739E8EC9B987AB66568010F7;
IL2CPP_EXTERN_C String_t* _stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F;
IL2CPP_EXTERN_C String_t* _stringLiteralC472776C9180B19630B6E4112538D935B62E3F35;
IL2CPP_EXTERN_C String_t* _stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775;
IL2CPP_EXTERN_C String_t* _stringLiteralCC69A18A122625D298FE3C7CFABFE409C09A66AE;
IL2CPP_EXTERN_C String_t* _stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62;
IL2CPP_EXTERN_C String_t* _stringLiteralD985867DB1AE2EA38AD3ABEEDC9015E23E27B399;
IL2CPP_EXTERN_C String_t* _stringLiteralE20F5C68116748DD598D9E2EB1ECA7BE49E33C92;
IL2CPP_EXTERN_C String_t* _stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7;
IL2CPP_EXTERN_C String_t* _stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32;
IL2CPP_EXTERN_C String_t* _stringLiteralF704B54D833421164E45E576DFD279921246BCEA;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_mEF96248898C14F3687A5C72B920F841701E4E13C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mDDA0C5A3B6082004767DC2D63623080F9990FF87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE2CB2DBE9CFA9FD3FF4707BB20A9B1FE52C76273_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3E57006B1E4E3BF3DC969B90445C1E58B246619D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA2DB3B33B757C906EBF689F682FD659A191A242B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFDD0FD971CC69FE207D61BEBCA543491A9AAE09A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m71E6FD21D54996DACBC26526FABF5E57B9E4C3B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisIl2CppFullySharedGenericStruct_mE65C843FF57523BD4FDD1642C5D01EE096A9E2E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSliceUnsafeUtility_GetUnsafePtr_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_m3F0318274FE0636367B91558C6673DEF834FB1A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1_get_Length_m2566843C81FEFDDF6407962D4E34F13C3133028D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NoAllocHelpers_ResizeList_TisIl2CppFullySharedGenericAny_m6FFE63174996367F5679DAE93FB5F9C6F2A5B662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionDelegateFactory_CreateGet_TisIl2CppFullySharedGenericAny_m68C74CDF3ABC2AF3B2EF9CB7C08D11E05879B0A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionDelegateFactory_CreateSet_TisIl2CppFullySharedGenericAny_m3C18D69140F526B310E553C1C35B8E57C4CC7FA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeMarshalCopy_CopyArrayToToBytes_TisIl2CppFullySharedGenericStruct_mE7B5ABB436B65B35666C06B70C39E74A57E5031C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeMarshalCopy_CopyBytesToArray_TisIl2CppFullySharedGenericStruct_m3D7D27C6CC60365C0C96A223BAC7C28E3D6D38AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringUtils_ForgivingCaseSensitiveFind_TisIl2CppFullySharedGenericAny_mD725EDE7F863EEED09CA1D0D2908772E8A2B6839_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Create_TisIl2CppFullySharedGenericAny_m9AD9A2FD15EE0B25DC884BEF778D0D414364F9CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToApm_End_TisIl2CppFullySharedGenericAny_m91FFD6A6ED859B8F22E6E190E8D8C9E7E161442D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisIl2CppFullySharedGenericAny_m2223C6E6E1675E311C66C5695E2F0728BED068E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisIl2CppFullySharedGenericAny_m8430FE61464A9242E9DFD47EA2551C8B3F5CD64F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromException_TisIl2CppFullySharedGenericAny_m5424F2AE940D86E928CD58A721AA25BDAF2A7229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisIl2CppFullySharedGenericAny_mF39F8DFD4DC180998B23C404C0030D0856730D6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisIl2CppFullySharedGenericStruct_mDC6FE57DC7D62BAC05E6231541767FA81448490E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadPool_QueueUserWorkItem_TisIl2CppFullySharedGenericAny_m1BF539C01328BDA70BEABD795BFABD5F18D7F8CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIRenderDevice_DrawRanges_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m71F34C7DEDCF897C928FC2BED61084149C5AF648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryBuilder_1__ctor_m841C38F69A30425CCEA1F93525C97AD0B9648486_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryExtensions_Query_TisRuntimeObject_m54F26487B79AE0ECC38A0B9D6615D7FD6B1F56C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxmlAttributeDescription_GetValueFromBag_TisIl2CppFullySharedGenericAny_mAD4F4838D245291B33A0A6819595AAE917FA073A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_m25A39BA9400C61A22CA33A8F59124DD53C929506_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mD6B660A63955117687D6131FC1DB255161D1A2BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetAccessorType_TisIl2CppFullySharedGenericAny_m954E132BC027DCAA35823665232186DEDFA096B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetComponentType_TisIl2CppFullySharedGenericAny_m6DBC7981526F9F84942370E50476CDB3120788A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ComponentVec_tD7B7AA5EB22E95F8F7C4E52B3A5CA4F6B6ABF5B2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Exception_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IntPtrU2A_t919FFA378D2CE7AF74E4F3F877D0EC12DBE7C21D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IntPtr_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArrayManager_t3E3943BD412EF76264F6FC8151D43128A0A6F4E2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeGltfInstance_tD0A11D889A6319962208144B89CAA3AA055660DD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeOnlyAwaitCaller_tCF2855FA690F71FF79CEEC5FB5799E4FE247C455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeOnlyNoThreadAwaitCaller_t2C6536780914579F61D718A5F72FC0C212576421_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringBuilder_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Type_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* glComponentType_t77828D9FADFD98A4C7CF96E191C303861ECFAAFB_0_0_0_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;

struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
struct AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D;
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.StringUtils/<>c__DisplayClass15_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec__DisplayClass15_0_1_tC95F5E1730324ECF95F4CCD18BB4FA6DAF2A9373  : public RuntimeObject
{
	// System.Func`2<TSource,System.String> Newtonsoft.Json.Utilities.StringUtils/<>c__DisplayClass15_0`1::valueSelector
	Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* ___valueSelector_0;
	// System.String Newtonsoft.Json.Utilities.StringUtils/<>c__DisplayClass15_0`1::testValue
	String_t* ___testValue_1;
};

// System.Threading.ThreadPool/<>c__DisplayClass17_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9  : public RuntimeObject
{
	// System.Action`1<TState> System.Threading.ThreadPool/<>c__DisplayClass17_0`1::callBack
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___callBack_0;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>
struct Dictionary_2_t8B8AC3704119A64857E8D359CB4782C5ECEA90E7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t524C33EA8D08013B8734724ABCA925485CF3B799* ____entries_1;
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
	KeyCollection_tAE1CD1CE327D07F072532A89E6854F2C33EB014A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t04D5F77EBC72D81BB7FE7199D6C9DC65DEB60064* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,UniGLTF.glTFExtensions/ComponentVec>
struct Dictionary_2_t7C687CB53080A5BE3F3D34D182E1F6DFC564B87A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t87A5E9BCDC32A3E6557F77FD7A24F7288D9692CE* ____entries_1;
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
	KeyCollection_t7848D04B1987F92859100B0240DA19DF5A50B545* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t782A4079A6DBFF8C30910B7E64BEB610C77C5D5C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};

// UnityEngine.UIElements.UQuery/IsOfType`1<System.Object>
struct IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<System.ValueTuple`2<VRMShaders.SubAssetKey,UnityEngine.Object>>
struct List_1_t491E3856BE98663F8A31500DDE5FC3079B04D54C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_t900F6C67D025EE45AF292E341BFC02AD58008184* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.IDisposable>
struct List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher>
struct List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RuleMatcherU5BU5D_t0135EA06151E72D04414F3EAF9420CB85EE2236C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ____items_1;
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

// System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyAnimationSystem/Values>
struct List_1_t491E344573B9D6F61E36AF56132B7412453928C9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ValuesU5BU5D_t5332999C48416329B2A447FCD8C71113DDB459EA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Tuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8 : public RuntimeObject {};

// System.Tuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB : public RuntimeObject {};

// UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482 : public RuntimeObject {};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.UIElements.CallbackEventHandler
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry_0;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
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
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
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
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.IO.MonoLinqHelper
struct MonoLinqHelper_t4B7F56CAAFAAAA0ABD411D943BA644B0C3BDA1D3  : public RuntimeObject
{
};

// UnityEngine.UIElements.MouseEventsHelper
struct MouseEventsHelper_tCA2B2B4B36A3F80CE118DECAE91AB7658A68437F  : public RuntimeObject
{
};

// UniGLTF.NativeArrayManager
struct NativeArrayManager_t3E3943BD412EF76264F6FC8151D43128A0A6F4E2  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.IDisposable> UniGLTF.NativeArrayManager::m_disposables
	List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* ___m_disposables_0;
};

// Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
struct NativeArrayUnsafeUtility_tB4D8A974D44EE6F4B2C32D5D19861FB081F88FCE  : public RuntimeObject
{
};

// Unity.Collections.NativeSliceExtensions
struct NativeSliceExtensions_tA2B0303180122826FD5887061B8DBA5F342A726B  : public RuntimeObject
{
};

// Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility
struct NativeSliceUnsafeUtility_tA7CBE88BA4246367450DB167A878F2FA408E10CD  : public RuntimeObject
{
};

// UnityEngine.NoAllocHelpers
struct NoAllocHelpers_t5108A9272D2BFBFF50B14D2A1B5330A629180360  : public RuntimeObject
{
};

// UniGLTF.Pin
struct Pin_t2BB7028ECABFCC80C120228623C25B7CDD498D7F  : public RuntimeObject
{
};

// UnityEngine.UIElements.PointerEventsHelper
struct PointerEventsHelper_tBCB1C72023C15955BDC79A319622ADC3F583EE82  : public RuntimeObject
{
};

// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_t33E37F4C07B3A1F415AA97A5C5F7F5A1662A8574  : public RuntimeObject
{
};

// Newtonsoft.Json.Utilities.ReflectionUtils
struct ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02  : public RuntimeObject
{
};

// UnityEngine.Resources
struct Resources_t4745F52065DB80D8880840AEDC45965DE35128E1  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.RuntimeHelpers
struct RuntimeHelpers_t9E6C71E90FD7CAB0987E101A77FBDA52EFDE284C  : public RuntimeObject
{
};

// VRMShaders.RuntimeOnlyAwaitCaller
struct RuntimeOnlyAwaitCaller_tCF2855FA690F71FF79CEEC5FB5799E4FE247C455  : public RuntimeObject
{
	// VRMShaders.NextFrameTaskScheduler VRMShaders.RuntimeOnlyAwaitCaller::_scheduler
	NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D* ____scheduler_0;
	// System.Single VRMShaders.RuntimeOnlyAwaitCaller::_timeOutInSeconds
	float ____timeOutInSeconds_1;
	// System.Single VRMShaders.RuntimeOnlyAwaitCaller::_lastTimeoutBaseTime
	float ____lastTimeoutBaseTime_2;
};

// VRMShaders.RuntimeOnlyNoThreadAwaitCaller
struct RuntimeOnlyNoThreadAwaitCaller_t2C6536780914579F61D718A5F72FC0C212576421  : public RuntimeObject
{
	// VRMShaders.NextFrameTaskScheduler VRMShaders.RuntimeOnlyNoThreadAwaitCaller::_scheduler
	NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D* ____scheduler_0;
	// System.Single VRMShaders.RuntimeOnlyNoThreadAwaitCaller::_timeoutInSeconds
	float ____timeoutInSeconds_1;
	// System.Single VRMShaders.RuntimeOnlyNoThreadAwaitCaller::_lastTimeoutBaseTime
	float ____lastTimeoutBaseTime_2;
};

// UniGLTF.SafeMarshalCopy
struct SafeMarshalCopy_t906EA18AC26F4509E30E7F8992173CE64D56FA10  : public RuntimeObject
{
};

// UnityEngine.UI.SetPropertyUtility
struct SetPropertyUtility_t7A9A8AC1523C59CF066D8802A39FD11F635AE623  : public RuntimeObject
{
};

// System.SpanHelpers
struct SpanHelpers_tCA85E2BE495D0EC31B7D20D20E9FC3309265176A  : public RuntimeObject
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Newtonsoft.Json.Utilities.StringUtils
struct StringUtils_t75109D93154FD28B31CEBBBC5849300A7F7C3842  : public RuntimeObject
{
};

// UnityEngine.UIElements.StyleComplexSelector
struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD  : public RuntimeObject
{
	// System.Int32 UnityEngine.UIElements.StyleComplexSelector::m_Specificity
	int32_t ___m_Specificity_0;
	// UnityEngine.UIElements.StyleRule UnityEngine.UIElements.StyleComplexSelector::<rule>k__BackingField
	StyleRule_t69F0C0989004F85BBD9C72BC7A73F79BFE61651E* ___U3CruleU3Ek__BackingField_1;
	// UnityEngine.UIElements.StyleSelector[] UnityEngine.UIElements.StyleComplexSelector::m_Selectors
	StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* ___m_Selectors_2;
	// System.Int32 UnityEngine.UIElements.StyleComplexSelector::ruleIndex
	int32_t ___ruleIndex_3;
	// UnityEngine.UIElements.StyleComplexSelector UnityEngine.UIElements.StyleComplexSelector::nextInTable
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___nextInTable_4;
	// System.Int32 UnityEngine.UIElements.StyleComplexSelector::orderInStyleSheet
	int32_t ___orderInStyleSheet_5;
};

// UnityEngine.UIElements.StylePropertyAnimationSystem
struct StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718  : public RuntimeObject
{
	// System.Int64 UnityEngine.UIElements.StylePropertyAnimationSystem::m_CurrentTimeMs
	int64_t ___m_CurrentTimeMs_0;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFloat UnityEngine.UIElements.StylePropertyAnimationSystem::m_Floats
	ValuesFloat_t79D7FFC3D96EA35AFBCE6E41A84C30186FFFF0C2* ___m_Floats_1;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesInt UnityEngine.UIElements.StylePropertyAnimationSystem::m_Ints
	ValuesInt_t2D0093355274C731BB6DF9C8933EEEDA42276367* ___m_Ints_2;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesLength UnityEngine.UIElements.StylePropertyAnimationSystem::m_Lengths
	ValuesLength_tCE4AE0723109EE10076DBD46F7A853F202AF5915* ___m_Lengths_3;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesColor UnityEngine.UIElements.StylePropertyAnimationSystem::m_Colors
	ValuesColor_tDE4E373E9165A21D96B77B831D7663BE93073904* ___m_Colors_4;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesBackground UnityEngine.UIElements.StylePropertyAnimationSystem::m_Backgrounds
	ValuesBackground_tFF4533C18E78BDA24210ECA0967C209A2FD2FB34* ___m_Backgrounds_5;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFontDefinition UnityEngine.UIElements.StylePropertyAnimationSystem::m_FontDefinitions
	ValuesFontDefinition_t4D0C2DECA9435D3EB901FE70837AD878111678F7* ___m_FontDefinitions_6;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFont UnityEngine.UIElements.StylePropertyAnimationSystem::m_Fonts
	ValuesFont_tD9B58EA95F0D99292A54C9C6C879318BBE3B02A4* ___m_Fonts_7;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTextShadow UnityEngine.UIElements.StylePropertyAnimationSystem::m_TextShadows
	ValuesTextShadow_t50CB05DF0E7770164252616605C61B37DB4A966C* ___m_TextShadows_8;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesScale UnityEngine.UIElements.StylePropertyAnimationSystem::m_Scale
	ValuesScale_t21E6FC5B09789CB4974FC2ED15C3F83B863FCF8A* ___m_Scale_9;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesRotate UnityEngine.UIElements.StylePropertyAnimationSystem::m_Rotate
	ValuesRotate_t90582D6825FCBEF3C2A68160CCEC275C51217C63* ___m_Rotate_10;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTranslate UnityEngine.UIElements.StylePropertyAnimationSystem::m_Translate
	ValuesTranslate_tFB5B432755E0DAA7DD8C95E78FDCC78C4885940B* ___m_Translate_11;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTransformOrigin UnityEngine.UIElements.StylePropertyAnimationSystem::m_TransformOrigin
	ValuesTransformOrigin_tB46EC0F073E360E1431CCD4E580BA675D716823F* ___m_TransformOrigin_12;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyAnimationSystem/Values> UnityEngine.UIElements.StylePropertyAnimationSystem::m_AllValues
	List_1_t491E344573B9D6F61E36AF56132B7412453928C9* ___m_AllValues_13;
	// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values> UnityEngine.UIElements.StylePropertyAnimationSystem::m_PropertyToValues
	Dictionary_2_t8B8AC3704119A64857E8D359CB4782C5ECEA90E7* ___m_PropertyToValues_14;
};

// UnityEngine.UIElements.StyleSelector
struct StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362  : public RuntimeObject
{
	// UnityEngine.UIElements.StyleSelectorPart[] UnityEngine.UIElements.StyleSelector::m_Parts
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___m_Parts_0;
	// UnityEngine.UIElements.StyleSelectorRelationship UnityEngine.UIElements.StyleSelector::m_PreviousRelationship
	int32_t ___m_PreviousRelationship_1;
	// System.Int32 UnityEngine.UIElements.StyleSelector::pseudoStateMask
	int32_t ___pseudoStateMask_2;
	// System.Int32 UnityEngine.UIElements.StyleSelector::negatedPseudoStateMask
	int32_t ___negatedPseudoStateMask_3;
};

// UnityEngine.UIElements.StyleValueExtensions
struct StyleValueExtensions_t726B74FF15FD6E36DAD4BF0C34078437975FF358  : public RuntimeObject
{
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_2;
};

// System.Threading.Tasks.TaskToApm
struct TaskToApm_t85E4852EFE616610E8B037ECB1926B91DEA7D458  : public RuntimeObject
{
};

// System.Threading.ThreadPool
struct ThreadPool_t1EE413B12D8BD9F25602041645272351A26711FC  : public RuntimeObject
{
};

// System.ThrowHelper
struct ThrowHelper_tDAFF1075E5B21B120EF09F3F2EAD51037DAB6F73  : public RuntimeObject
{
};

// System.Tuple
struct Tuple_tB9DB3180F4853E781BFDDC3093798F56B27AB03F  : public RuntimeObject
{
};

// UniGLTF.UnityExtensions
struct UnityExtensions_t03946B03016FA31B6F2AAC5B4EFA2E8EF7A783F0  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.Unsafe
struct Unsafe_t013486CBD5A88F5F394651AB34F2AC5AE97E71E4  : public RuntimeObject
{
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct UnsafeUtility_tC3E6B7D52A973A81739E8BD97D6E757BA8371D46  : public RuntimeObject
{
};

// UnityEngine.UIElements.UxmlAttributeDescription
struct UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2  : public RuntimeObject
{
	// System.String UnityEngine.UIElements.UxmlAttributeDescription::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String[] UnityEngine.UIElements.UxmlAttributeDescription::m_ObsoleteNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ObsoleteNames_1;
	// System.String UnityEngine.UIElements.UxmlAttributeDescription::<type>k__BackingField
	String_t* ___U3CtypeU3Ek__BackingField_2;
	// System.String UnityEngine.UIElements.UxmlAttributeDescription::<typeNamespace>k__BackingField
	String_t* ___U3CtypeNamespaceU3Ek__BackingField_3;
	// UnityEngine.UIElements.UxmlAttributeDescription/Use UnityEngine.UIElements.UxmlAttributeDescription::<use>k__BackingField
	int32_t ___U3CuseU3Ek__BackingField_4;
	// UnityEngine.UIElements.UxmlTypeRestriction UnityEngine.UIElements.UxmlAttributeDescription::<restriction>k__BackingField
	UxmlTypeRestriction_t2C4CE1ED76502CDF80010880E058AF0582910A92* ___U3CrestrictionU3Ek__BackingField_5;
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

// System.Numerics.Vector
struct Vector_t246EF05F1CA5F494FB8B48AB2724DFCD2C2C5A9A  : public RuntimeObject
{
};

// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9  : public RuntimeObject
{
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualTreeUpdater::m_Panel
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel_0;
	// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray UnityEngine.UIElements.VisualTreeUpdater::m_UpdaterArray
	UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* ___m_UpdaterArray_1;
};

// System.Threading.Volatile
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};

// System.Xml.Linq.XObject
struct XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29  : public RuntimeObject
{
	// System.Xml.Linq.XContainer System.Xml.Linq.XObject::parent
	XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* ___parent_0;
	// System.Object System.Xml.Linq.XObject::annotations
	RuntimeObject* ___annotations_1;
};

// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E  : public RuntimeObject
{
};

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

// UniGLTF.glTFExtensions
struct glTFExtensions_tC121239197B90BD22976E4CEF235DC6C404F352F  : public RuntimeObject
{
};

// UnityEngine.UIElements.StylePropertyAnimationSystem/Values
struct Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24  : public RuntimeObject
{
};

// System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult
struct TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB  : public RuntimeObject
{
	// System.Threading.Tasks.Task System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::Task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___Task_0;
	// System.Object System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::_state
	RuntimeObject* ____state_1;
	// System.Boolean System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::_completedSynchronously
	bool ____completedSynchronously_2;
};

// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449  : public RuntimeObject
{
	// UnityEngine.UIElements.IVisualTreeUpdater[] UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::m_VisualTreeUpdaters
	IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8* ___m_VisualTreeUpdaters_0;
};

// UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2<UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/EmptyData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915 
{
	// UnityEngine.UIElements.VisualElement[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::elements
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___elements_0;
	// UnityEngine.UIElements.StyleSheets.StylePropertyId[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::properties
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___properties_1;
	// TTimingData[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::timing
	EmptyDataU5BU5D_t4F13631B1440411479135A222DA84C0A8FC754FD* ___timing_2;
	// TStyleData[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::style
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___style_3;
	// System.Int32 UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::count
	int32_t ___count_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StylePropertyAnimationSystem/ElementPropertyPair,System.Int32> UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::indices
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___indices_5;
};

// UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2<UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TimingData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/StyleData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450 
{
	// UnityEngine.UIElements.VisualElement[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::elements
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___elements_0;
	// UnityEngine.UIElements.StyleSheets.StylePropertyId[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::properties
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___properties_1;
	// TTimingData[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::timing
	TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* ___timing_2;
	// TStyleData[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::style
	StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A* ___style_3;
	// System.Int32 UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::count
	int32_t ___count_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StylePropertyAnimationSystem/ElementPropertyPair,System.Int32> UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::indices
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___indices_5;
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// System.ArraySegment`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct ArraySegment_1_tB4E8281C954CCD18F080ED0A11252B6246E37280 
{
	// T[] System.ArraySegment`1::_array
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// System.ArraySegment`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 
{
	// T[] System.ArraySegment`1::_array
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.DrawBufferRange>
struct NativeSlice_1_t2E5DBD9A5F77A5044A4160098A0B2A45D3EE8974 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// Unity.Collections.NativeSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData>
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData>
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData>
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData>
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData>
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData>
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};

// UnityEngine.UIElements.UQueryBuilder`1<System.Object>
struct UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 
{
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelector> UnityEngine.UIElements.UQueryBuilder`1::m_StyleSelectors
	List_1_tB8CE94A1885E4D10B34A91CC9D21169286DC0A63* ___m_StyleSelectors_0;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart> UnityEngine.UIElements.UQueryBuilder`1::m_Parts
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___m_Parts_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UQueryBuilder`1::m_Element
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Element_2;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher> UnityEngine.UIElements.UQueryBuilder`1::m_Matchers
	List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* ___m_Matchers_3;
	// UnityEngine.UIElements.StyleSelectorRelationship UnityEngine.UIElements.UQueryBuilder`1::m_Relationship
	int32_t ___m_Relationship_4;
	// System.Int32 UnityEngine.UIElements.UQueryBuilder`1::pseudoStatesMask
	int32_t ___pseudoStatesMask_5;
	// System.Int32 UnityEngine.UIElements.UQueryBuilder`1::negatedPseudoStatesMask
	int32_t ___negatedPseudoStatesMask_6;
};

// UnityEngine.UIElements.UQueryBuilder`1<UnityEngine.UIElements.VisualElement>
struct UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139 
{
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelector> UnityEngine.UIElements.UQueryBuilder`1::m_StyleSelectors
	List_1_tB8CE94A1885E4D10B34A91CC9D21169286DC0A63* ___m_StyleSelectors_0;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart> UnityEngine.UIElements.UQueryBuilder`1::m_Parts
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___m_Parts_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UQueryBuilder`1::m_Element
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Element_2;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher> UnityEngine.UIElements.UQueryBuilder`1::m_Matchers
	List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* ___m_Matchers_3;
	// UnityEngine.UIElements.StyleSelectorRelationship UnityEngine.UIElements.UQueryBuilder`1::m_Relationship
	int32_t ___m_Relationship_4;
	// System.Int32 UnityEngine.UIElements.UQueryBuilder`1::pseudoStatesMask
	int32_t ___pseudoStatesMask_5;
	// System.Int32 UnityEngine.UIElements.UQueryBuilder`1::negatedPseudoStatesMask
	int32_t ___negatedPseudoStatesMask_6;
};

// UnityEngine.UIElements.UQueryState`1<System.Object>
struct UQueryState_1_tDA47936DEF27643350186CA4E1DED7053A3D02B2 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UQueryState`1::m_Element
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Element_1;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher> UnityEngine.UIElements.UQueryState`1::m_Matchers
	List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* ___m_Matchers_2;
};

// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement>
struct UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UQueryState`1::m_Element
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Element_1;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher> UnityEngine.UIElements.UQueryState`1::m_Matchers
	List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* ___m_Matchers_2;
};

// System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829;

// UnityEngine.UIElements.UIR.BMPAlloc
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// UnityEngine.UIElements.UIR.OwnedState UnityEngine.UIElements.UIR.BMPAlloc::ownedState
	uint8_t ___ownedState_4;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.CreationContext::<target>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField_1;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.CreationContext::<visualTreeAsset>k__BackingField
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.CreationContext::<slotInsertionPoints>k__BackingField
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset/AttributeOverride> UnityEngine.UIElements.CreationContext::<attributeOverrides>k__BackingField
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField_1;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField_2;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField_3;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField_1;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField_2;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField_3;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField_4;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// UnityEngine.UIElements.Focusable
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.Focusable::<tabIndex>k__BackingField
	int32_t ___U3CtabIndexU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Focusable::m_DelegatesFocus
	bool ___m_DelegatesFocus_3;
	// System.Boolean UnityEngine.UIElements.Focusable::m_ExcludeFromFocusRing
	bool ___m_ExcludeFromFocusRing_4;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_5;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C 
{
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t* ___parent_0;
	// System.Type System.Reflection.MonoPropertyInfo::declaring_type
	Type_t* ___declaring_type_1;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t* ___get_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t* ___set_method_4;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshaled_pinvoke
{
	Type_t* ___parent_0;
	Type_t* ___declaring_type_1;
	char* ___name_2;
	MethodInfo_t* ___get_method_3;
	MethodInfo_t* ___set_method_4;
	int32_t ___attrs_5;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshaled_com
{
	Type_t* ___parent_0;
	Type_t* ___declaring_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t* ___get_method_3;
	MethodInfo_t* ___set_method_4;
	int32_t ___attrs_5;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Numerics.Register
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte System.Numerics.Register::byte_0
			uint8_t ___byte_0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_1_OffsetPadding[1];
			// System.Byte System.Numerics.Register::byte_1
			uint8_t ___byte_1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_2_OffsetPadding[2];
			// System.Byte System.Numerics.Register::byte_2
			uint8_t ___byte_2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_3_OffsetPadding[3];
			// System.Byte System.Numerics.Register::byte_3
			uint8_t ___byte_3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_4_OffsetPadding[4];
			// System.Byte System.Numerics.Register::byte_4
			uint8_t ___byte_4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_5_OffsetPadding[5];
			// System.Byte System.Numerics.Register::byte_5
			uint8_t ___byte_5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_6_OffsetPadding[6];
			// System.Byte System.Numerics.Register::byte_6
			uint8_t ___byte_6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_7_OffsetPadding[7];
			// System.Byte System.Numerics.Register::byte_7
			uint8_t ___byte_7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_8_OffsetPadding[8];
			// System.Byte System.Numerics.Register::byte_8
			uint8_t ___byte_8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_9_OffsetPadding[9];
			// System.Byte System.Numerics.Register::byte_9
			uint8_t ___byte_9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_10_OffsetPadding[10];
			// System.Byte System.Numerics.Register::byte_10
			uint8_t ___byte_10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_11_OffsetPadding[11];
			// System.Byte System.Numerics.Register::byte_11
			uint8_t ___byte_11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_12_OffsetPadding[12];
			// System.Byte System.Numerics.Register::byte_12
			uint8_t ___byte_12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_13_OffsetPadding[13];
			// System.Byte System.Numerics.Register::byte_13
			uint8_t ___byte_13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_14_OffsetPadding[14];
			// System.Byte System.Numerics.Register::byte_14
			uint8_t ___byte_14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_15_OffsetPadding[15];
			// System.Byte System.Numerics.Register::byte_15
			uint8_t ___byte_15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte System.Numerics.Register::sbyte_0
			int8_t ___sbyte_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_17_OffsetPadding[1];
			// System.SByte System.Numerics.Register::sbyte_1
			int8_t ___sbyte_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_18_OffsetPadding[2];
			// System.SByte System.Numerics.Register::sbyte_2
			int8_t ___sbyte_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_19_OffsetPadding[3];
			// System.SByte System.Numerics.Register::sbyte_3
			int8_t ___sbyte_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_20_OffsetPadding[4];
			// System.SByte System.Numerics.Register::sbyte_4
			int8_t ___sbyte_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_21_OffsetPadding[5];
			// System.SByte System.Numerics.Register::sbyte_5
			int8_t ___sbyte_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_22_OffsetPadding[6];
			// System.SByte System.Numerics.Register::sbyte_6
			int8_t ___sbyte_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_23_OffsetPadding[7];
			// System.SByte System.Numerics.Register::sbyte_7
			int8_t ___sbyte_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_24_OffsetPadding[8];
			// System.SByte System.Numerics.Register::sbyte_8
			int8_t ___sbyte_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_25_OffsetPadding[9];
			// System.SByte System.Numerics.Register::sbyte_9
			int8_t ___sbyte_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_26_OffsetPadding[10];
			// System.SByte System.Numerics.Register::sbyte_10
			int8_t ___sbyte_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_27_OffsetPadding[11];
			// System.SByte System.Numerics.Register::sbyte_11
			int8_t ___sbyte_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_28_OffsetPadding[12];
			// System.SByte System.Numerics.Register::sbyte_12
			int8_t ___sbyte_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_29_OffsetPadding[13];
			// System.SByte System.Numerics.Register::sbyte_13
			int8_t ___sbyte_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_30_OffsetPadding[14];
			// System.SByte System.Numerics.Register::sbyte_14
			int8_t ___sbyte_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_31_OffsetPadding[15];
			// System.SByte System.Numerics.Register::sbyte_15
			int8_t ___sbyte_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 System.Numerics.Register::uint16_0
			uint16_t ___uint16_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_33_OffsetPadding[2];
			// System.UInt16 System.Numerics.Register::uint16_1
			uint16_t ___uint16_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_34_OffsetPadding[4];
			// System.UInt16 System.Numerics.Register::uint16_2
			uint16_t ___uint16_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_35_OffsetPadding[6];
			// System.UInt16 System.Numerics.Register::uint16_3
			uint16_t ___uint16_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_36_OffsetPadding[8];
			// System.UInt16 System.Numerics.Register::uint16_4
			uint16_t ___uint16_4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_37_OffsetPadding[10];
			// System.UInt16 System.Numerics.Register::uint16_5
			uint16_t ___uint16_5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_38_OffsetPadding[12];
			// System.UInt16 System.Numerics.Register::uint16_6
			uint16_t ___uint16_6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_39_OffsetPadding[14];
			// System.UInt16 System.Numerics.Register::uint16_7
			uint16_t ___uint16_7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 System.Numerics.Register::int16_0
			int16_t ___int16_0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_41_OffsetPadding[2];
			// System.Int16 System.Numerics.Register::int16_1
			int16_t ___int16_1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_42_OffsetPadding[4];
			// System.Int16 System.Numerics.Register::int16_2
			int16_t ___int16_2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_43_OffsetPadding[6];
			// System.Int16 System.Numerics.Register::int16_3
			int16_t ___int16_3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_44_OffsetPadding[8];
			// System.Int16 System.Numerics.Register::int16_4
			int16_t ___int16_4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_45_OffsetPadding[10];
			// System.Int16 System.Numerics.Register::int16_5
			int16_t ___int16_5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_46_OffsetPadding[12];
			// System.Int16 System.Numerics.Register::int16_6
			int16_t ___int16_6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_47_OffsetPadding[14];
			// System.Int16 System.Numerics.Register::int16_7
			int16_t ___int16_7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 System.Numerics.Register::uint32_0
			uint32_t ___uint32_0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_49_OffsetPadding[4];
			// System.UInt32 System.Numerics.Register::uint32_1
			uint32_t ___uint32_1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_50_OffsetPadding[8];
			// System.UInt32 System.Numerics.Register::uint32_2
			uint32_t ___uint32_2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_51_OffsetPadding[12];
			// System.UInt32 System.Numerics.Register::uint32_3
			uint32_t ___uint32_3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Numerics.Register::int32_0
			int32_t ___int32_0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_53_OffsetPadding[4];
			// System.Int32 System.Numerics.Register::int32_1
			int32_t ___int32_1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_54_OffsetPadding[8];
			// System.Int32 System.Numerics.Register::int32_2
			int32_t ___int32_2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_55_OffsetPadding[12];
			// System.Int32 System.Numerics.Register::int32_3
			int32_t ___int32_3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Numerics.Register::uint64_0
			uint64_t ___uint64_0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_57_OffsetPadding[8];
			// System.UInt64 System.Numerics.Register::uint64_1
			uint64_t ___uint64_1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 System.Numerics.Register::int64_0
			int64_t ___int64_0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_59_OffsetPadding[8];
			// System.Int64 System.Numerics.Register::int64_1
			int64_t ___int64_1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single System.Numerics.Register::single_0
			float ___single_0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_61_OffsetPadding[4];
			// System.Single System.Numerics.Register::single_1
			float ___single_1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_61_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_62_OffsetPadding[8];
			// System.Single System.Numerics.Register::single_2
			float ___single_2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_62_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_63_OffsetPadding[12];
			// System.Single System.Numerics.Register::single_3
			float ___single_3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_63_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double System.Numerics.Register::double_0
			double ___double_0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_65_OffsetPadding[8];
			// System.Double System.Numerics.Register::double_1
			double ___double_1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_65_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_65_forAlignmentOnly;
		};
	};
};

// UnityEngine.UIElements.RuleMatcher
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E 
{
	// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.RuleMatcher::sheet
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	// UnityEngine.UIElements.StyleComplexSelector UnityEngine.UIElements.RuleMatcher::complexSelector
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.RuleMatcher
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.RuleMatcher
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_1;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	// System.String UnityEngine.UIElements.StyleSelectorPart::m_Value
	String_t* ___m_Value_0;
	// UnityEngine.UIElements.StyleSelectorType UnityEngine.UIElements.StyleSelectorPart::m_Type
	int32_t ___m_Type_1;
	// System.Object UnityEngine.UIElements.StyleSelectorPart::tempData
	RuntimeObject* ___tempData_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};

// UnityEngine.UIElements.StyleValueHandle
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D 
{
	// UnityEngine.UIElements.StyleValueType UnityEngine.UIElements.StyleValueHandle::m_ValueType
	int32_t ___m_ValueType_0;
	// System.Int32 UnityEngine.UIElements.StyleValueHandle::valueIndex
	int32_t ___valueIndex_1;
};

// VRMShaders.SubAssetKey
struct SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB 
{
	// System.Type VRMShaders.SubAssetKey::Type
	Type_t* ___Type_2;
	// System.String VRMShaders.SubAssetKey::Name
	String_t* ___Name_3;
};
// Native definition for P/Invoke marshalling of VRMShaders.SubAssetKey
struct SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_pinvoke
{
	Type_t* ___Type_2;
	char* ___Name_3;
};
// Native definition for COM marshalling of VRMShaders.SubAssetKey
struct SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_com
{
	Type_t* ___Type_2;
	Il2CppChar* ___Name_3;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// System.Threading.Tasks.VoidTaskResult
struct VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC 
{
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC__padding[1];
	};
};

// System.Xml.Linq.XNode
struct XNode_t185C922661054AAD14F49676DD6F3CB10D652A30  : public XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29
{
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::next
	XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* ___next_2;
};

// System.Xml.Schema.XmlBaseConverter
struct XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D  : public XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E
{
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlBaseConverter::schemaType
	XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* ___schemaType_0;
	// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlBaseConverter::typeCode
	int32_t ___typeCode_1;
	// System.Type System.Xml.Schema.XmlBaseConverter::clrTypeDefault
	Type_t* ___clrTypeDefault_2;
};

// UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics
struct DrawStatistics_t4AF06C67CEC7B97509EBAD48E3EE908301598E6F 
{
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::currentFrameIndex
	int32_t ___currentFrameIndex_0;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::totalIndices
	uint32_t ___totalIndices_1;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::commandCount
	uint32_t ___commandCount_2;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::drawCommandCount
	uint32_t ___drawCommandCount_3;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::materialSetCount
	uint32_t ___materialSetCount_4;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::drawRangeCount
	uint32_t ___drawRangeCount_5;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::drawRangeCallCount
	uint32_t ___drawRangeCallCount_6;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::immediateDraws
	uint32_t ___immediateDraws_7;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::stencilRefChanges
	uint32_t ___stencilRefChanges_8;
};

// UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::m_Owner
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};

// System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Volatile/VolatileObject::Value
	RuntimeObject* ___Value_0;
};
// Native definition for P/Invoke marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value_0;
};
// Native definition for COM marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value_0;
};

// UniGLTF.glTFExtensions/ComponentVec
struct ComponentVec_tD7B7AA5EB22E95F8F7C4E52B3A5CA4F6B6ABF5B2 
{
	// UniGLTF.glComponentType UniGLTF.glTFExtensions/ComponentVec::ComponentType
	int32_t ___ComponentType_0;
	// System.Int32 UniGLTF.glTFExtensions/ComponentVec::ElementCount
	int32_t ___ElementCount_1;
};

// System.ByReference`1<System.Char>
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// UnityEngine.UIElements.UIR.Utility/GPUBuffer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct GPUBuffer_1_t59623B2A3B8EFD33FB05C973C4C4EAFCF89ED241  : public RuntimeObject
{
	// System.IntPtr UnityEngine.UIElements.UIR.Utility/GPUBuffer`1::buffer
	intptr_t ___buffer_0;
	// System.Int32 UnityEngine.UIElements.UIR.Utility/GPUBuffer`1::elemCount
	int32_t ___elemCount_1;
	// System.Int32 UnityEngine.UIElements.UIR.Utility/GPUBuffer`1::elemStride
	int32_t ___elemStride_2;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC ___m_result_22;
};

// System.Threading.Tasks.UnwrapPromise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnwrapPromise_1_t056E9AD8CFB7AFD55E9D63549F5F68C2827ABDB1 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};

// System.ValueTuple`2<VRMShaders.SubAssetKey,UnityEngine.Object>
struct ValueTuple_2_t31AC097C4531D2F1E7EEC96FE50B3EF8F84974A1 
{
	// T1 System.ValueTuple`2::Item1
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___Item2_1;
};

// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Values_1_tD44BBEC769B1388DCA51C01019802B242F987014  : public Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24
{
	// System.Int64 UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1::m_CurrentTimeMs
	int64_t ___m_CurrentTimeMs_0;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState<T> UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1::m_CurrentFrameEventsState
	TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* ___m_CurrentFrameEventsState_1;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState<T> UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1::m_NextFrameEventsState
	TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* ___m_NextFrameEventsState_2;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2<UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TimingData<T>,UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/StyleData<T>> UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1::running
	AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450 ___running_3;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2<UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/EmptyData<T>,T> UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1::completed
	AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915 ___completed_4;
};

// System.Numerics.Vector`1<System.UInt64>
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

// System.Numerics.Vector`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData> UnityEngine.UIElements.ComputedStyle::inheritedData
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData> UnityEngine.UIElements.ComputedStyle::layoutData
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData> UnityEngine.UIElements.ComputedStyle::rareData
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData> UnityEngine.UIElements.ComputedStyle::transformData
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData> UnityEngine.UIElements.ComputedStyle::transitionData
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData> UnityEngine.UIElements.ComputedStyle::visualData
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.ComputedStyle::yogaNode
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue> UnityEngine.UIElements.ComputedStyle::customProperties
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	// System.Int64 UnityEngine.UIElements.ComputedStyle::matchingRulesHash
	int64_t ___matchingRulesHash_8;
	// System.Single UnityEngine.UIElements.ComputedStyle::dpiScaling
	float ___dpiScaling_9;
	// UnityEngine.UIElements.ComputedTransitionProperty[] UnityEngine.UIElements.ComputedStyle::computedTransitions
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions_10;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions_10;
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

// UnityEngine.UIElements.EventBase
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C  : public RuntimeObject
{
	// System.Int64 UnityEngine.UIElements.EventBase::<timestamp>k__BackingField
	int64_t ___U3CtimestampU3Ek__BackingField_2;
	// System.UInt64 UnityEngine.UIElements.EventBase::<eventId>k__BackingField
	uint64_t ___U3CeventIdU3Ek__BackingField_3;
	// System.UInt64 UnityEngine.UIElements.EventBase::<triggerEventId>k__BackingField
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField_4;
	// UnityEngine.UIElements.EventBase/EventPropagation UnityEngine.UIElements.EventBase::<propagation>k__BackingField
	int32_t ___U3CpropagationU3Ek__BackingField_5;
	// UnityEngine.UIElements.PropagationPaths UnityEngine.UIElements.EventBase::m_Path
	PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5* ___m_Path_6;
	// UnityEngine.UIElements.EventBase/LifeCycleStatus UnityEngine.UIElements.EventBase::<lifeCycleStatus>k__BackingField
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField_7;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::<leafTarget>k__BackingField
	RuntimeObject* ___U3CleafTargetU3Ek__BackingField_8;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_Target
	RuntimeObject* ___m_Target_9;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler> UnityEngine.UIElements.EventBase::<skipElements>k__BackingField
	List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3* ___U3CskipElementsU3Ek__BackingField_10;
	// UnityEngine.UIElements.PropagationPhase UnityEngine.UIElements.EventBase::<propagationPhase>k__BackingField
	int32_t ___U3CpropagationPhaseU3Ek__BackingField_11;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_CurrentTarget
	RuntimeObject* ___m_CurrentTarget_12;
	// UnityEngine.Event UnityEngine.UIElements.EventBase::m_ImguiEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ImguiEvent_13;
	// UnityEngine.Vector2 UnityEngine.UIElements.EventBase::<originalMousePosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CoriginalMousePositionU3Ek__BackingField_14;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
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

// UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 
{
	// System.Boolean UnityEngine.UIElements.PanelClearSettings::clearDepthStencil
	bool ___clearDepthStencil_0;
	// System.Boolean UnityEngine.UIElements.PanelClearSettings::clearColor
	bool ___clearColor_1;
	// UnityEngine.Color UnityEngine.UIElements.PanelClearSettings::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_pinvoke
{
	int32_t ___clearDepthStencil_0;
	int32_t ___clearColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_com
{
	int32_t ___clearDepthStencil_0;
	int32_t ___clearColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prev
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::next
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::groupTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::boneTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::hierarchyDepth
	int32_t ___hierarchyDepth_6;
	// UnityEngine.UIElements.UIR.RenderDataDirtyTypes UnityEngine.UIElements.UIR.RenderChainVEData::dirtiedValues
	int32_t ___dirtiedValues_7;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChainVEData::dirtyID
	uint32_t ___dirtyID_8;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isInChain
	bool ___isInChain_13;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isHierarchyHidden
	bool ___isHierarchyHidden_14;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localFlipsWinding
	bool ___localFlipsWinding_15;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localTransformScaleZero
	bool ___localTransformScaleZero_16;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::worldFlipsWinding
	bool ___worldFlipsWinding_17;
	// UnityEngine.UIElements.UIR.Implementation.ClipMethod UnityEngine.UIElements.UIR.RenderChainVEData::clipMethod
	int32_t ___clipMethod_18;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenStencilRef
	int32_t ___childrenStencilRef_19;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenMaskDepth
	int32_t ___childrenMaskDepth_20;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::disableNudging
	bool ___disableNudging_21;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesLegacyText
	bool ___usesLegacyText_22;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::data
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_23;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::closingData
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.RenderChainVEData::verticesSpace
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_25;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVStart
	int32_t ___displacementUVStart_26;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVEnd
	int32_t ___displacementUVEnd_27;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::transformID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_28;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::clipRectID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_29;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::opacityID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_30;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::textCoreSettingsID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_31;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_32;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderLeftColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_33;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderTopColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_34;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderRightColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_35;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderBottomColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_36;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::tintColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_37;
	// System.Single UnityEngine.UIElements.UIR.RenderChainVEData::compositeOpacity
	float ___compositeOpacity_38;
	// UnityEngine.Color UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_39;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_40;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_41;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textEntries
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_42;
	// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textures
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_43;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___localTransformScaleZero_16;
	int32_t ___worldFlipsWinding_17;
	int32_t ___clipMethod_18;
	int32_t ___childrenStencilRef_19;
	int32_t ___childrenMaskDepth_20;
	int32_t ___disableNudging_21;
	int32_t ___usesLegacyText_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_23;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_24;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_25;
	int32_t ___displacementUVStart_26;
	int32_t ___displacementUVEnd_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_36;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_37;
	float ___compositeOpacity_38;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_40;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_41;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_42;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_43;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___localTransformScaleZero_16;
	int32_t ___worldFlipsWinding_17;
	int32_t ___clipMethod_18;
	int32_t ___childrenStencilRef_19;
	int32_t ___childrenMaskDepth_20;
	int32_t ___disableNudging_21;
	int32_t ___usesLegacyText_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_23;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_24;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_25;
	int32_t ___displacementUVStart_26;
	int32_t ___displacementUVEnd_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_36;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_37;
	float ___compositeOpacity_38;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_40;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_41;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_42;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_43;
};

// System.Reflection.RuntimePropertyInfo
struct RuntimePropertyInfo_t5F54C4304A36C216127C93BF1553920A8685537D  : public PropertyInfo_t
{
	// System.IntPtr System.Reflection.RuntimePropertyInfo::klass
	intptr_t ___klass_0;
	// System.IntPtr System.Reflection.RuntimePropertyInfo::prop
	intptr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.RuntimePropertyInfo::info
	MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C ___info_2;
	// System.Reflection.PInfo System.Reflection.RuntimePropertyInfo::cached
	int32_t ___cached_3;
	// System.Reflection.RuntimePropertyInfo/GetterAdapter System.Reflection.RuntimePropertyInfo::cached_getter
	GetterAdapter_t03939DF178051A4B282ADA9CC4395C34B86D9D2E* ___cached_getter_4;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0  : public RuntimeObject
{
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory::m_defaultCancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::m_defaultScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;
};

// UnityEngine.TextCore.Text.TextGeneratorUtilities
struct TextGeneratorUtilities_tAD0F329B1A5C7CC27CF63086C11FE092B43FED53  : public RuntimeObject
{
};

// UnityEngine.TextCore.Text.TextInfo
struct TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09  : public RuntimeObject
{
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::characterCount
	int32_t ___characterCount_2;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::spriteCount
	int32_t ___spriteCount_3;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::spaceCount
	int32_t ___spaceCount_4;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::wordCount
	int32_t ___wordCount_5;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::linkCount
	int32_t ___linkCount_6;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::lineCount
	int32_t ___lineCount_7;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::pageCount
	int32_t ___pageCount_8;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::materialCount
	int32_t ___materialCount_9;
	// UnityEngine.TextCore.Text.TextElementInfo[] UnityEngine.TextCore.Text.TextInfo::textElementInfo
	TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E* ___textElementInfo_10;
	// UnityEngine.TextCore.Text.WordInfo[] UnityEngine.TextCore.Text.TextInfo::wordInfo
	WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B* ___wordInfo_11;
	// UnityEngine.TextCore.Text.LinkInfo[] UnityEngine.TextCore.Text.TextInfo::linkInfo
	LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51* ___linkInfo_12;
	// UnityEngine.TextCore.Text.LineInfo[] UnityEngine.TextCore.Text.TextInfo::lineInfo
	LineInfoU5BU5D_t37598F2175B291797270D1161DC29B6296FB169D* ___lineInfo_13;
	// UnityEngine.TextCore.Text.PageInfo[] UnityEngine.TextCore.Text.TextInfo::pageInfo
	PageInfoU5BU5D_tFEA2CF88695491CFC2F2A2EF6BDCC56E52B0A6D4* ___pageInfo_14;
	// UnityEngine.TextCore.Text.MeshInfo[] UnityEngine.TextCore.Text.TextInfo::meshInfo
	MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6* ___meshInfo_15;
	// System.Boolean UnityEngine.TextCore.Text.TextInfo::isDirty
	bool ___isDirty_16;
};

// UnityEngine.UIElements.UQueryExtensions
struct UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426  : public RuntimeObject
{
};

// System.Xml.Linq.XContainer
struct XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF  : public XNode_t185C922661054AAD14F49676DD6F3CB10D652A30
{
	// System.Object System.Xml.Linq.XContainer::content
	RuntimeObject* ___content_3;
};

// System.Xml.Schema.XmlListConverter
struct XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA  : public XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D
{
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlListConverter::atomicConverter
	XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* ___atomicConverter_32;
};

// UniGLTF.Pin`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0  : public RuntimeObject
{
	// System.Runtime.InteropServices.GCHandle UniGLTF.Pin`1::m_pinnedArray
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_pinnedArray_0;
	// System.ArraySegment`1<T> UniGLTF.Pin`1::m_src
	ArraySegment_1_tB4E8281C954CCD18F080ED0A11252B6246E37280 ___m_src_1;
	// System.Boolean UniGLTF.Pin`1::disposedValue
	bool ___disposedValue_2;
};

// System.Span`1<System.Char>
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Span`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303  : public RuntimeObject
{
	// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel> UnityEngine.UIElements.BaseVisualElementPanel::panelDisposed
	Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53* ___panelDisposed_0;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_Scale
	float ___m_Scale_1;
	// UnityEngine.Yoga.YogaConfig UnityEngine.UIElements.BaseVisualElementPanel::yogaConfig
	YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___yogaConfig_2;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_PixelsPerPoint
	float ___m_PixelsPerPoint_3;
	// UnityEngine.UIElements.PanelClearSettings UnityEngine.UIElements.BaseVisualElementPanel::<clearSettings>k__BackingField
	PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 ___U3CclearSettingsU3Ek__BackingField_4;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<duringLayoutPhase>k__BackingField
	bool ___U3CduringLayoutPhaseU3Ek__BackingField_5;
	// UnityEngine.UIElements.RepaintData UnityEngine.UIElements.BaseVisualElementPanel::<repaintData>k__BackingField
	RepaintData_t90534752135661579EC254884F550545D001B5EA* ___U3CrepaintDataU3Ek__BackingField_6;
	// UnityEngine.UIElements.ICursorManager UnityEngine.UIElements.BaseVisualElementPanel::<cursorManager>k__BackingField
	RuntimeObject* ___U3CcursorManagerU3Ek__BackingField_7;
	// UnityEngine.UIElements.ContextualMenuManager UnityEngine.UIElements.BaseVisualElementPanel::<contextualMenuManager>k__BackingField
	ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B* ___U3CcontextualMenuManagerU3Ek__BackingField_8;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_9;
	// UnityEngine.UIElements.ElementUnderPointer UnityEngine.UIElements.BaseVisualElementPanel::m_TopElementUnderPointers
	ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904* ___m_TopElementUnderPointers_10;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardShaderChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardShaderChanged_11;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardWorldSpaceShaderChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardWorldSpaceShaderChanged_12;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::atlasChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___atlasChanged_13;
	// System.Action`1<UnityEngine.Material> UnityEngine.UIElements.BaseVisualElementPanel::updateMaterial
	Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA* ___updateMaterial_14;
	// UnityEngine.UIElements.HierarchyEvent UnityEngine.UIElements.BaseVisualElementPanel::hierarchyChanged
	HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705* ___hierarchyChanged_15;
	// System.Action`1<UnityEngine.UIElements.IPanel> UnityEngine.UIElements.BaseVisualElementPanel::beforeUpdate
	Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6* ___beforeUpdate_16;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.UIElements.UIR.UIRenderDevice
struct UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302  : public RuntimeObject
{
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::m_MockDevice
	bool ___m_MockDevice_0;
	// System.IntPtr UnityEngine.UIElements.UIR.UIRenderDevice::m_DefaultStencilState
	intptr_t ___m_DefaultStencilState_1;
	// System.IntPtr UnityEngine.UIElements.UIR.UIRenderDevice::m_VertexDecl
	intptr_t ___m_VertexDecl_2;
	// UnityEngine.UIElements.UIR.Page UnityEngine.UIElements.UIR.UIRenderDevice::m_FirstPage
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___m_FirstPage_3;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice::m_NextPageVertexCount
	uint32_t ___m_NextPageVertexCount_4;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice::m_LargeMeshVertexCount
	uint32_t ___m_LargeMeshVertexCount_5;
	// System.Single UnityEngine.UIElements.UIR.UIRenderDevice::m_IndexToVertexCountRatio
	float ___m_IndexToVertexCountRatio_6;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree>> UnityEngine.UIElements.UIR.UIRenderDevice::m_DeferredFrees
	List_1_tB86898E2E533634C35EC58EC5DAE3353038A9210* ___m_DeferredFrees_7;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate>> UnityEngine.UIElements.UIR.UIRenderDevice::m_Updates
	List_1_tA79C35FB5E50135962B53960CB758B9262700632* ___m_Updates_8;
	// System.UInt32[] UnityEngine.UIElements.UIR.UIRenderDevice::m_Fences
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Fences_9;
	// UnityEngine.MaterialPropertyBlock UnityEngine.UIElements.UIR.UIRenderDevice::m_StandardMatProps
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___m_StandardMatProps_10;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice::m_FrameIndex
	uint32_t ___m_FrameIndex_11;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice::m_NextUpdateID
	uint32_t ___m_NextUpdateID_12;
	// UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics UnityEngine.UIElements.UIR.UIRenderDevice::m_DrawStats
	DrawStatistics_t4AF06C67CEC7B97509EBAD48E3EE908301598E6F ___m_DrawStats_13;
	// UnityEngine.UIElements.UIR.LinkedPool`1<UnityEngine.UIElements.UIR.MeshHandle> UnityEngine.UIElements.UIR.UIRenderDevice::m_MeshHandles
	LinkedPool_1_tD8A175EE023C8220138E51E722F4A20ACE9CA851* ___m_MeshHandles_14;
	// UnityEngine.UIElements.UIR.DrawParams UnityEngine.UIElements.UIR.UIRenderDevice::m_DrawParams
	DrawParams_t523864F415D78BD8BB14E8B7BD349594D6187443* ___m_DrawParams_15;
	// UnityEngine.UIElements.UIR.TextureSlotManager UnityEngine.UIElements.UIR.UIRenderDevice::m_TextureSlotManager
	TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* ___m_TextureSlotManager_16;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice::<maxVerticesPerPage>k__BackingField
	uint32_t ___U3CmaxVerticesPerPageU3Ek__BackingField_35;
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::<breakBatches>k__BackingField
	bool ___U3CbreakBatchesU3Ek__BackingField_36;
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_39;
};

// UnityEngine.UnityException
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067  : public Exception_t
{
};

// UnityEngine.UIElements.UIR.Utility
struct Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD  : public RuntimeObject
{
};

// UniGLTF.ValidationContext
struct ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7 
{
	// System.Type UniGLTF.ValidationContext::Type
	Type_t* ___Type_0;
	// UnityEngine.Object UniGLTF.ValidationContext::Context
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___Context_1;
	// System.Action UniGLTF.ValidationContext::Extended
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Extended_2;
};
// Native definition for P/Invoke marshalling of UniGLTF.ValidationContext
struct ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7_marshaled_pinvoke
{
	Type_t* ___Type_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___Context_1;
	Il2CppMethodPointer ___Extended_2;
};
// Native definition for COM marshalling of UniGLTF.ValidationContext
struct ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7_marshaled_com
{
	Type_t* ___Type_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___Context_1;
	Il2CppMethodPointer ___Extended_2;
};

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField_7;
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField_8;
	// System.String UnityEngine.UIElements.VisualElement::m_Name
	String_t* ___m_Name_13;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::m_ClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList_14;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>> UnityEngine.UIElements.VisualElement::m_PropertyBag
	List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260* ___m_PropertyBag_15;
	// UnityEngine.UIElements.VisualElementFlags UnityEngine.UIElements.VisualElement::m_Flags
	int32_t ___m_Flags_16;
	// System.String UnityEngine.UIElements.VisualElement::m_ViewDataKey
	String_t* ___m_ViewDataKey_17;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_18;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastLayout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout_19;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastPseudoPadding
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding_20;
	// UnityEngine.UIElements.UIR.RenderChainVEData UnityEngine.UIElements.VisualElement::renderChainData
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData_21;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout_22;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox_23;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache_25;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache_26;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip_27;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup_28;
	// System.Boolean UnityEngine.UIElements.VisualElement::m_WorldClipIsInfinite
	bool ___m_WorldClipIsInfinite_29;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::triggerPseudoMask
	int32_t ___triggerPseudoMask_31;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::dependencyPseudoMask
	int32_t ___dependencyPseudoMask_32;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_33;
	// System.Int32 UnityEngine.UIElements.VisualElement::<containedPointerIds>k__BackingField
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField_34;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_35;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___U3CyogaNodeU3Ek__BackingField_36;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style_37;
	// UnityEngine.UIElements.StyleVariableContext UnityEngine.UIElements.VisualElement::variableContext
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext_38;
	// System.Int32 UnityEngine.UIElements.VisualElement::inheritedStylesHash
	int32_t ___inheritedStylesHash_39;
	// System.UInt32 UnityEngine.UIElements.VisualElement::controlid
	uint32_t ___controlid_40;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_41;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enabledSelf>k__BackingField
	bool ___U3CenabledSelfU3Ek__BackingField_42;
	// System.Action`1<UnityEngine.UIElements.MeshGenerationContext> UnityEngine.UIElements.VisualElement::<generateVisualContent>k__BackingField
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField_43;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElement::k_GenerateVisualContentMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker_44;
	// UnityEngine.UIElements.VisualElement/RenderTargetMode UnityEngine.UIElements.VisualElement::m_SubRenderTargetMode
	int32_t ___m_SubRenderTargetMode_45;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::m_defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial_47;
	// UnityEngine.UIElements.VisualElement/TypeData UnityEngine.UIElements.VisualElement::m_TypeData
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData_49;
	// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField_51;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isRootVisualContainer>k__BackingField
	bool ___U3CisRootVisualContainerU3Ek__BackingField_52;
	// System.Boolean UnityEngine.UIElements.VisualElement::<cacheAsBitmap>k__BackingField
	bool ___U3CcacheAsBitmapU3Ek__BackingField_53;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent_54;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent_55;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children_57;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField_58;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualElement::m_VisualTreeAssetSource
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource_59;
	// UnityEngine.UIElements.InlineStyleAccess UnityEngine.UIElements.VisualElement::inlineStyleAccess
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess_61;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualElement::styleSheetList
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList_62;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElement::m_RunningAnimations
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations_64;
};

// System.Xml.Linq.XDocument
struct XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1  : public XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF
{
	// System.Xml.Linq.XDeclaration System.Xml.Linq.XDocument::_declaration
	XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ____declaration_4;
};

// System.Action`1<System.IAsyncResult>
struct Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E  : public MulticastDelegate_t
{
};

// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>
struct Action_2_t8B3B3F62C8B5EC13D5C0E28B79C6D396133CA816  : public MulticastDelegate_t
{
};

// System.Func`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB  : public MulticastDelegate_t
{
};

// System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431  : public MulticastDelegate_t
{
};

// System.Func`2<System.IAsyncResult,System.Threading.Tasks.VoidTaskResult>
struct Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9  : public MulticastDelegate_t
{
};

// System.Func`2<System.Single,System.Single>
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Func_2_tDDC415B0A5306A4473D2ADD7C4E25824337698DB  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>
struct Func_2_tED7CA67878EF0FB299872769153413F97964501A  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.String>
struct Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C  : public MulticastDelegate_t
{
};

// System.Func`3<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0  : public MulticastDelegate_t
{
};

// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799  : public MulticastDelegate_t
{
};

// System.Func`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9  : public MulticastDelegate_t
{
};

// System.Reflection.RuntimePropertyInfo/Getter`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8  : public MulticastDelegate_t
{
};

// System.Buffers.SpanAction`2<System.Char,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A  : public MulticastDelegate_t
{
};

// System.Reflection.RuntimePropertyInfo/StaticGetter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302  : public MulticastDelegate_t
{
};

// System.AccessViolationException
struct AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_18;
};

// UnityEngine.UIElements.StyleSheet
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.UIElements.StyleSheet::m_ImportedWithErrors
	bool ___m_ImportedWithErrors_4;
	// System.Boolean UnityEngine.UIElements.StyleSheet::m_ImportedWithWarnings
	bool ___m_ImportedWithWarnings_5;
	// UnityEngine.UIElements.StyleRule[] UnityEngine.UIElements.StyleSheet::m_Rules
	StyleRuleU5BU5D_t7897A39D88CA043B2BFB5B28C53B41564EBA3AF3* ___m_Rules_6;
	// UnityEngine.UIElements.StyleComplexSelector[] UnityEngine.UIElements.StyleSheet::m_ComplexSelectors
	StyleComplexSelectorU5BU5D_tF7B5239DE9BF477DECF97EFBA7CB1D71C45DB857* ___m_ComplexSelectors_7;
	// System.Single[] UnityEngine.UIElements.StyleSheet::floats
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___floats_8;
	// UnityEngine.UIElements.StyleSheets.Dimension[] UnityEngine.UIElements.StyleSheet::dimensions
	DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B* ___dimensions_9;
	// UnityEngine.Color[] UnityEngine.UIElements.StyleSheet::colors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colors_10;
	// System.String[] UnityEngine.UIElements.StyleSheet::strings
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___strings_11;
	// UnityEngine.Object[] UnityEngine.UIElements.StyleSheet::assets
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___assets_12;
	// UnityEngine.UIElements.StyleSheet/ImportStruct[] UnityEngine.UIElements.StyleSheet::imports
	ImportStructU5BU5D_t42D231FD5BB4B620965D7BED87D56D531B4C7AE9* ___imports_13;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.StyleSheet::m_FlattenedImportedStyleSheets
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___m_FlattenedImportedStyleSheets_14;
	// System.Int32 UnityEngine.UIElements.StyleSheet::m_ContentHash
	int32_t ___m_ContentHash_15;
	// UnityEngine.UIElements.StyleSheets.ScalableImage[] UnityEngine.UIElements.StyleSheet::scalableImages
	ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52* ___scalableImages_16;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedNameSelectors
	Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F* ___orderedNameSelectors_17;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedTypeSelectors
	Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F* ___orderedTypeSelectors_18;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedClassSelectors
	Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F* ___orderedClassSelectors_19;
	// System.Boolean UnityEngine.UIElements.StyleSheet::m_IsDefaultStyleSheet
	bool ___m_IsDefaultStyleSheet_20;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.RuntimeType
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1  : public TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D
{
	// System.MonoTypeInfo System.RuntimeType::type_info
	MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501* ___type_info_28;
	// System.Object System.RuntimeType::GenericCache
	RuntimeObject* ___GenericCache_29;
	// System.Reflection.RuntimeConstructorInfo System.RuntimeType::m_serializationCtor
	RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE* ___m_serializationCtor_30;
};

// UniGLTF.RuntimeGltfInstance
struct RuntimeGltfInstance_tD0A11D889A6319962208144B89CAA3AA055660DD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Transform> UniGLTF.RuntimeGltfInstance::_nodes
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ____nodes_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UniGLTF.Utils.TransformState> UniGLTF.RuntimeGltfInstance::_initialTransformStates
	Dictionary_2_t99C61E47200BBFC0575A2E7D12A3A387B728722B* ____initialTransformStates_5;
	// System.Collections.Generic.List`1<System.ValueTuple`2<VRMShaders.SubAssetKey,UnityEngine.Object>> UniGLTF.RuntimeGltfInstance::_resources
	List_1_t491E3856BE98663F8A31500DDE5FC3079B04D54C* ____resources_6;
	// System.Collections.Generic.List`1<UnityEngine.Material> UniGLTF.RuntimeGltfInstance::_materials
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ____materials_7;
	// System.Collections.Generic.List`1<UnityEngine.Texture> UniGLTF.RuntimeGltfInstance::_textures
	List_1_t6E9F60A9560151988FBFFAE2D966D20615C353FB* ____textures_8;
	// System.Collections.Generic.List`1<UnityEngine.AnimationClip> UniGLTF.RuntimeGltfInstance::_animationClips
	List_1_t8719F82490DCDF6DB697DBD7FDEFED1F6F7B083E* ____animationClips_9;
	// System.Collections.Generic.List`1<UnityEngine.Mesh> UniGLTF.RuntimeGltfInstance::_meshes
	List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* ____meshes_10;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> UniGLTF.RuntimeGltfInstance::_renderers
	List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ____renderers_11;
	// System.Collections.Generic.List`1<UnityEngine.MeshRenderer> UniGLTF.RuntimeGltfInstance::_meshRenderers
	List_1_t558592816DA880773C8A60C1EB777F3B092B68EC* ____meshRenderers_12;
	// System.Collections.Generic.List`1<UnityEngine.SkinnedMeshRenderer> UniGLTF.RuntimeGltfInstance::_skinnedMeshRenderers
	List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96* ____skinnedMeshRenderers_13;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> UniGLTF.RuntimeGltfInstance::_visibleRenderers
	List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ____visibleRenderers_14;
};

// Newtonsoft.Json.Utilities.StringUtils/<>c__DisplayClass15_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Newtonsoft.Json.Utilities.StringUtils/<>c__DisplayClass15_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.ThreadPool/<>c__DisplayClass17_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.ThreadPool/<>c__DisplayClass17_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>

// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>

// System.Collections.Generic.Dictionary`2<System.Type,UniGLTF.glTFExtensions/ComponentVec>

// System.Collections.Generic.Dictionary`2<System.Type,UniGLTF.glTFExtensions/ComponentVec>

// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// UnityEngine.UIElements.UQuery/IsOfType`1<System.Object>
struct IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4_StaticFields
{
	// UnityEngine.UIElements.UQuery/IsOfType`1<T> UnityEngine.UIElements.UQuery/IsOfType`1::s_Instance
	IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4* ___s_Instance_0;
};

// UnityEngine.UIElements.UQuery/IsOfType`1<System.Object>

// System.Collections.Generic.List`1<System.ValueTuple`2<VRMShaders.SubAssetKey,UnityEngine.Object>>
struct List_1_t491E3856BE98663F8A31500DDE5FC3079B04D54C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ValueTuple_2U5BU5D_t900F6C67D025EE45AF292E341BFC02AD58008184* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.ValueTuple`2<VRMShaders.SubAssetKey,UnityEngine.Object>>

// System.Collections.Generic.List`1<System.IDisposable>
struct List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.IDisposable>

// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher>
struct List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RuleMatcherU5BU5D_t0135EA06151E72D04414F3EAF9420CB85EE2236C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher>

// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyAnimationSystem/Values>
struct List_1_t491E344573B9D6F61E36AF56132B7412453928C9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ValuesU5BU5D_t5332999C48416329B2A447FCD8C71113DDB459EA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyAnimationSystem/Values>

// System.Tuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Tuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Tuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Tuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482_StaticFields
{
	// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.Experimental.ValueAnimation`1<T>> UnityEngine.UIElements.Experimental.ValueAnimation`1::sObjectPool
	ObjectPool_1_t14AD861DB16C1D8128773A1568BD9925E67A9ADB* ___sObjectPool_7;
};

// UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// System.Attribute

// System.Attribute

// UnityEngine.UIElements.CallbackEventHandler

// UnityEngine.UIElements.CallbackEventHandler

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.IO.MonoLinqHelper

// System.IO.MonoLinqHelper

// UnityEngine.UIElements.MouseEventsHelper

// UnityEngine.UIElements.MouseEventsHelper

// UniGLTF.NativeArrayManager

// UniGLTF.NativeArrayManager

// Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility

// Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility

// Unity.Collections.NativeSliceExtensions

// Unity.Collections.NativeSliceExtensions

// Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility

// Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility

// UnityEngine.NoAllocHelpers

// UnityEngine.NoAllocHelpers

// UniGLTF.Pin

// UniGLTF.Pin

// UnityEngine.UIElements.PointerEventsHelper

// UnityEngine.UIElements.PointerEventsHelper

// Newtonsoft.Json.Utilities.ReflectionDelegateFactory

// Newtonsoft.Json.Utilities.ReflectionDelegateFactory

// Newtonsoft.Json.Utilities.ReflectionUtils
struct ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_StaticFields
{
	// System.Type[] Newtonsoft.Json.Utilities.ReflectionUtils::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_0;
};

// Newtonsoft.Json.Utilities.ReflectionUtils

// UnityEngine.Resources

// UnityEngine.Resources

// System.Runtime.CompilerServices.RuntimeHelpers

// System.Runtime.CompilerServices.RuntimeHelpers

// VRMShaders.RuntimeOnlyAwaitCaller

// VRMShaders.RuntimeOnlyAwaitCaller

// VRMShaders.RuntimeOnlyNoThreadAwaitCaller

// VRMShaders.RuntimeOnlyNoThreadAwaitCaller

// UniGLTF.SafeMarshalCopy

// UniGLTF.SafeMarshalCopy

// UnityEngine.UI.SetPropertyUtility

// UnityEngine.UI.SetPropertyUtility

// System.SpanHelpers

// System.SpanHelpers

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// Newtonsoft.Json.Utilities.StringUtils

// Newtonsoft.Json.Utilities.StringUtils

// UnityEngine.UIElements.StyleComplexSelector
struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData> UnityEngine.UIElements.StyleComplexSelector::s_PseudoStates
	Dictionary_2_t29D782BF5D0A26D11A04865B4306B86575506834* ___s_PseudoStates_6;
};

// UnityEngine.UIElements.StyleComplexSelector

// UnityEngine.UIElements.StylePropertyAnimationSystem

// UnityEngine.UIElements.StylePropertyAnimationSystem

// UnityEngine.UIElements.StyleSelector

// UnityEngine.UIElements.StyleSelector

// UnityEngine.UIElements.StyleValueExtensions

// UnityEngine.UIElements.StyleValueExtensions

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler_0;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_1;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException_3;
	// System.Threading.Lock System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject_4;
};

// System.Threading.Tasks.TaskScheduler

// System.Threading.Tasks.TaskToApm

// System.Threading.Tasks.TaskToApm

// System.Threading.ThreadPool

// System.Threading.ThreadPool

// System.ThrowHelper

// System.ThrowHelper

// System.Tuple

// System.Tuple

// UniGLTF.UnityExtensions

// UniGLTF.UnityExtensions

// System.Runtime.CompilerServices.Unsafe

// System.Runtime.CompilerServices.Unsafe

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility

// UnityEngine.UIElements.UxmlAttributeDescription

// UnityEngine.UIElements.UxmlAttributeDescription

// System.Numerics.Vector

// System.Numerics.Vector

// UnityEngine.UIElements.VisualTreeUpdater

// UnityEngine.UIElements.VisualTreeUpdater

// System.Threading.Volatile

// System.Threading.Volatile

// System.Xml.Linq.XObject

// System.Xml.Linq.XObject

// System.Xml.Schema.XmlValueConverter

// System.Xml.Schema.XmlValueConverter

// UnityEngine._AndroidJNIHelper

// UnityEngine._AndroidJNIHelper

// UniGLTF.glTFExtensions
struct glTFExtensions_tC121239197B90BD22976E4CEF235DC6C404F352F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,UniGLTF.glTFExtensions/ComponentVec> UniGLTF.glTFExtensions::ComponentTypeMap
	Dictionary_2_t7C687CB53080A5BE3F3D34D182E1F6DFC564B87A* ___ComponentTypeMap_0;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.ValueTuple`3<System.String,System.Int32,System.Int32>,System.Boolean> UniGLTF.glTFExtensions::s_cache
	ConcurrentDictionary_2_t26E722A13B3E6FC0724A28BEF9B34B72CB8D78C0* ___s_cache_1;
};

// UniGLTF.glTFExtensions

// UnityEngine.UIElements.StylePropertyAnimationSystem/Values

// UnityEngine.UIElements.StylePropertyAnimationSystem/Values

// System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult

// System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult

// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray

// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<System.Byte>

// System.ArraySegment`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct ArraySegment_1_tB4E8281C954CCD18F080ED0A11252B6246E37280_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_tB4E8281C954CCD18F080ED0A11252B6246E37280 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.ArraySegment`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.DrawBufferRange>

// Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.DrawBufferRange>

// Unity.Collections.NativeSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// Unity.Collections.NativeSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t3B055CB72CA2D1BEF08BD1C91FFB09DB3268521E* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.UIElements.UQueryBuilder`1<System.Object>

// UnityEngine.UIElements.UQueryBuilder`1<System.Object>

// UnityEngine.UIElements.UQueryBuilder`1<UnityEngine.UIElements.VisualElement>

// UnityEngine.UIElements.UQueryBuilder`1<UnityEngine.UIElements.VisualElement>

// UnityEngine.UIElements.UQueryState`1<System.Object>
struct UQueryState_1_tDA47936DEF27643350186CA4E1DED7053A3D02B2_StaticFields
{
	// UnityEngine.UIElements.UQueryState`1/ActionQueryMatcher<T> UnityEngine.UIElements.UQueryState`1::s_Action
	ActionQueryMatcher_tB76860A856401075A2CF71D45AC72A9C0F1BB99E* ___s_Action_0;
	// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<T,T> UnityEngine.UIElements.UQueryState`1::s_List
	ListQueryMatcher_1_t4D10BEF648526B008BEB75C8576A7D1EBFD73A83* ___s_List_3;
	// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<T,UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryState`1::s_EnumerationList
	ListQueryMatcher_1_tC447E3396770813CE332360F6EECEEFB6B51FA69* ___s_EnumerationList_4;
};

// UnityEngine.UIElements.UQueryState`1<System.Object>

// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement>
struct UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA_StaticFields
{
	// UnityEngine.UIElements.UQueryState`1/ActionQueryMatcher<T> UnityEngine.UIElements.UQueryState`1::s_Action
	ActionQueryMatcher_tBA08813774EDD8920F40BFFC2F27B8329C7923DD* ___s_Action_0;
	// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<T,T> UnityEngine.UIElements.UQueryState`1::s_List
	ListQueryMatcher_1_t7F21A0BB6BC47F1797366366A8E33731906C2940* ___s_List_3;
	// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<T,UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryState`1::s_EnumerationList
	ListQueryMatcher_1_t7F21A0BB6BC47F1797366366A8E33731906C2940* ___s_EnumerationList_4;
};

// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement>

// System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_StaticFields
{
	// UnityEngine.UIElements.CreationContext UnityEngine.UIElements.CreationContext::Default
	CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___Default_0;
};

// UnityEngine.UIElements.CreationContext

// System.Double

// System.Double

// System.Reflection.FieldInfo

// System.Reflection.FieldInfo

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.PropertyInfo

// System.Reflection.PropertyInfo

// UnityEngine.UIElements.RuleMatcher

// UnityEngine.UIElements.RuleMatcher

// System.SByte

// System.SByte

// System.Single

// System.Single

// UnityEngine.UIElements.StyleSelectorPart

// UnityEngine.UIElements.StyleSelectorPart

// UnityEngine.UIElements.StyleValueHandle

// UnityEngine.UIElements.StyleValueHandle

// VRMShaders.SubAssetKey
struct SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_StaticFields
{
	// System.Type VRMShaders.SubAssetKey::TextureType
	Type_t* ___TextureType_0;
	// System.Type VRMShaders.SubAssetKey::MaterialType
	Type_t* ___MaterialType_1;
};

// VRMShaders.SubAssetKey

// System.UInt64

// System.UInt64

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// System.Void

// System.Void

// System.Xml.Linq.XNode

// System.Xml.Linq.XNode

// UnityEngine.UIElements.VisualElement/Hierarchy

// UnityEngine.UIElements.VisualElement/Hierarchy

// System.Threading.Volatile/VolatileObject

// System.Threading.Volatile/VolatileObject

// UniGLTF.glTFExtensions/ComponentVec

// UniGLTF.glTFExtensions/ComponentVec

// System.ByReference`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.ByReference`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.UIElements.UIR.Utility/GPUBuffer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// UnityEngine.UIElements.UIR.Utility/GPUBuffer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t4BEAD6CE2527DBE682C128CEAA0FF2A79483E96C* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>

// System.Threading.Tasks.UnwrapPromise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.Tasks.UnwrapPromise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.ValueTuple`2<VRMShaders.SubAssetKey,UnityEngine.Object>

// System.ValueTuple`2<VRMShaders.SubAssetKey,UnityEngine.Object>

// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Numerics.Vector`1<System.UInt64>
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes_4;
};

// System.Numerics.Vector`1<System.UInt64>

// System.Numerics.Vector`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_allOnes_4;
};

// System.Numerics.Vector`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// UnityEngine.UIElements.EventBase
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_StaticFields
{
	// System.Int64 UnityEngine.UIElements.EventBase::s_LastTypeId
	int64_t ___s_LastTypeId_0;
	// System.UInt64 UnityEngine.UIElements.EventBase::s_NextEventId
	uint64_t ___s_NextEventId_1;
};

// UnityEngine.UIElements.EventBase

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.MaterialPropertyBlock

// UnityEngine.MaterialPropertyBlock

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.Playables.PlayableHandle

// System.Reflection.RuntimePropertyInfo

// System.Reflection.RuntimePropertyInfo

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Threading.Tasks.TaskFactory

// System.Threading.Tasks.TaskFactory

// UnityEngine.TextCore.Text.TextGeneratorUtilities
struct TextGeneratorUtilities_tAD0F329B1A5C7CC27CF63086C11FE092B43FED53_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.TextCore.Text.TextGeneratorUtilities::largePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___largePositiveVector2_0;
	// UnityEngine.Vector2 UnityEngine.TextCore.Text.TextGeneratorUtilities::largeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___largeNegativeVector2_1;
};

// UnityEngine.TextCore.Text.TextGeneratorUtilities

// UnityEngine.TextCore.Text.TextInfo
struct TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.TextCore.Text.TextInfo::s_InfinityVectorPositive
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___s_InfinityVectorPositive_0;
	// UnityEngine.Vector2 UnityEngine.TextCore.Text.TextInfo::s_InfinityVectorNegative
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___s_InfinityVectorNegative_1;
};

// UnityEngine.TextCore.Text.TextInfo

// UnityEngine.UIElements.UQueryExtensions
struct UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_StaticFields
{
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementEmptyQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementEmptyQuery_0;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementNameQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementNameQuery_1;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementClassQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementClassQuery_2;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementNameAndClassQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementNameAndClassQuery_3;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementTypeQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementTypeQuery_4;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementTypeAndNameQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementTypeAndNameQuery_5;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementTypeAndClassQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementTypeAndClassQuery_6;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementTypeAndNameAndClassQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementTypeAndNameAndClassQuery_7;
};

// UnityEngine.UIElements.UQueryExtensions

// System.Xml.Linq.XContainer

// System.Xml.Linq.XContainer

// System.Xml.Schema.XmlListConverter

// System.Xml.Schema.XmlListConverter

// UniGLTF.Pin`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// UniGLTF.Pin`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.Span`1<System.Char>

// System.Span`1<System.Char>

// System.Span`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Span`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.UIElements.BaseVisualElementPanel

// UnityEngine.UIElements.BaseVisualElementPanel

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// UnityEngine.UIElements.UIR.UIRenderDevice
struct UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302_StaticFields
{
	// System.Collections.Generic.LinkedList`1<UnityEngine.UIElements.UIR.UIRenderDevice/DeviceToFree> UnityEngine.UIElements.UIR.UIRenderDevice::m_DeviceFreeQueue
	LinkedList_1_t09F6FB09C766455615BBF59716D285304C49E0E7* ___m_DeviceFreeQueue_17;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::m_ActiveDeviceCount
	int32_t ___m_ActiveDeviceCount_18;
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::m_SubscribedToNotifications
	bool ___m_SubscribedToNotifications_19;
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::m_SynchronousFree
	bool ___m_SynchronousFree_20;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_FontTexPropID
	int32_t ___s_FontTexPropID_21;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_FontTexSDFScaleID
	int32_t ___s_FontTexSDFScaleID_22;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_GradientSettingsTexID
	int32_t ___s_GradientSettingsTexID_23;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_ShaderInfoTexID
	int32_t ___s_ShaderInfoTexID_24;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_TransformsPropID
	int32_t ___s_TransformsPropID_25;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_ClipRectsPropID
	int32_t ___s_ClipRectsPropID_26;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_ClipSpaceParamsID
	int32_t ___s_ClipSpaceParamsID_27;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.UIRenderDevice::s_MarkerAllocate
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerAllocate_28;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.UIRenderDevice::s_MarkerFree
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerFree_29;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.UIRenderDevice::s_MarkerAdvanceFrame
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerAdvanceFrame_30;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.UIRenderDevice::s_MarkerFence
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerFence_31;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.UIRenderDevice::s_MarkerBeforeDraw
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerBeforeDraw_32;
	// System.Nullable`1<System.Boolean> UnityEngine.UIElements.UIR.UIRenderDevice::s_VertexTexturingIsAvailable
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___s_VertexTexturingIsAvailable_33;
	// System.Nullable`1<System.Boolean> UnityEngine.UIElements.UIR.UIRenderDevice::s_ShaderModelIs35
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___s_ShaderModelIs35_34;
	// UnityEngine.Texture2D UnityEngine.UIElements.UIR.UIRenderDevice::s_DefaultShaderInfoTexFloat
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_DefaultShaderInfoTexFloat_37;
	// UnityEngine.Texture2D UnityEngine.UIElements.UIR.UIRenderDevice::s_DefaultShaderInfoTexARGB8
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_DefaultShaderInfoTexARGB8_38;
};

// UnityEngine.UIElements.UIR.UIRenderDevice

// UnityEngine.UnityException

// UnityEngine.UnityException

// UnityEngine.UIElements.UIR.Utility
struct Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields
{
	// System.Action`1<System.Boolean> UnityEngine.UIElements.UIR.Utility::GraphicsResourcesRecreate
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___GraphicsResourcesRecreate_0;
	// System.Action UnityEngine.UIElements.UIR.Utility::EngineUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___EngineUpdate_1;
	// System.Action UnityEngine.UIElements.UIR.Utility::FlushPendingResources
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___FlushPendingResources_2;
	// System.Action`1<UnityEngine.Camera> UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderers
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* ___RegisterIntermediateRenderers_3;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeAdd
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeAdd_4;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeExecute
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeExecute_5;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeCleanup
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeCleanup_6;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.Utility::s_MarkerRaiseEngineUpdate
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerRaiseEngineUpdate_7;
};

// UnityEngine.UIElements.UIR.Utility

// UniGLTF.ValidationContext

// UniGLTF.ValidationContext

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::tooltipPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey_6;
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextId
	uint32_t ___s_NextId_9;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList_10;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey_11;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_12;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect_30;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::s_runtimeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial_46;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData> UnityEngine.UIElements.VisualElement::s_TypeData
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData_48;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList_56;
	// UnityEngine.UIElements.VisualElement/CustomStyleAccess UnityEngine.UIElements.VisualElement::s_CustomStyleAccess
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess_60;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath_63;
};

// UnityEngine.UIElements.VisualElement

// System.Xml.Linq.XDocument

// System.Xml.Linq.XDocument

// System.Action`1<System.IAsyncResult>

// System.Action`1<System.IAsyncResult>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>

// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>

// System.Func`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.Func`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`2<System.IAsyncResult,System.Threading.Tasks.VoidTaskResult>

// System.Func`2<System.IAsyncResult,System.Threading.Tasks.VoidTaskResult>

// System.Func`2<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`2<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`2<System.Single,System.Single>

// System.Func`2<System.Single,System.Single>

// System.Func`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.String>

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.String>

// System.Func`3<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`3<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.AsyncCallback,System.Object,System.IAsyncResult>

// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.AsyncCallback,System.Object,System.IAsyncResult>

// System.Func`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.AsyncCallback,System.Object,System.IAsyncResult>

// System.Func`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.AsyncCallback,System.Object,System.IAsyncResult>

// System.Reflection.RuntimePropertyInfo/Getter`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Reflection.RuntimePropertyInfo/Getter`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Buffers.SpanAction`2<System.Char,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Buffers.SpanAction`2<System.Char,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Reflection.RuntimePropertyInfo/StaticGetter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Reflection.RuntimePropertyInfo/StaticGetter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.AccessViolationException

// System.AccessViolationException

// System.ArgumentException

// System.ArgumentException

// System.NotImplementedException

// System.NotImplementedException

// System.OperationCanceledException

// System.OperationCanceledException

// UnityEngine.UIElements.StyleSheet
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428_StaticFields
{
	// System.String UnityEngine.UIElements.StyleSheet::kCustomPropertyMarker
	String_t* ___kCustomPropertyMarker_21;
};

// UnityEngine.UIElements.StyleSheet

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// System.Threading.WaitCallback

// System.Threading.WaitCallback

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// System.RuntimeType
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_StaticFields
{
	// System.RuntimeType System.RuntimeType::ValueType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ValueType_11;
	// System.RuntimeType System.RuntimeType::EnumType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___EnumType_12;
	// System.RuntimeType System.RuntimeType::ObjectType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ObjectType_13;
	// System.RuntimeType System.RuntimeType::StringType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___StringType_14;
	// System.RuntimeType System.RuntimeType::DelegateType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___DelegateType_15;
	// System.Type[] System.RuntimeType::s_SICtorParamTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_SICtorParamTypes_16;
	// System.Func`3<System.Type,System.Type[],System.Type> System.RuntimeType::MakeTypeBuilderInstantiation
	Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5* ___MakeTypeBuilderInstantiation_17;
	// System.RuntimeType System.RuntimeType::s_typedRef
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___s_typedRef_27;
};

// System.RuntimeType

// UniGLTF.RuntimeGltfInstance

// UniGLTF.RuntimeGltfInstance
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType[]
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1  : public RuntimeArray
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
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Attribute[]
struct AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1  : public RuntimeArray
{
	ALIGN_FIELD (8) Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* m_Items[1];

	inline Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// UnityEngine.UIElements.StyleSelector[]
struct StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* m_Items[1];

	inline StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UIElements.StyleSelectorPart[]
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 m_Items[1];

	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tempData_2), (void*)NULL);
		#endif
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tempData_2), (void*)NULL);
		#endif
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* m_Items[1];

	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(Unity.Collections.NativeArray`1<T>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(Unity.Collections.NativeSlice`1<T>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_slice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_mD451D40E98D059A4FAC27FDB626B23D1ED00E1B5_gshared (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisIl2CppFullySharedGenericAny_mA4E158678160F1D9713643D243397452502EE932_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_gshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mEF96248898C14F3687A5C72B920F841701E4E13C_gshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_gshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility::GetUnsafePtr<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.NativeSlice`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.UQueryState`1<T> UnityEngine.UIElements.UQueryState`1<System.Object>::RebuildOn(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UQueryState_1_tDA47936DEF27643350186CA4E1DED7053A3D02B2 UQueryState_1_RebuildOn_mF29E43348045B1219A757EBBF43C892C32EEA5DC_gshared (UQueryState_1_tDA47936DEF27643350186CA4E1DED7053A3D02B2* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, const RuntimeMethod* method) ;
// T UnityEngine.UIElements.UQueryState`1<System.Object>::First()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UQueryState_1_First_m19FF1885E9D1D57D0EBA715820CA3C02C2C9C363_gshared (UQueryState_1_tDA47936DEF27643350186CA4E1DED7053A3D02B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UQueryBuilder`1<System.Object>::.ctor(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UQueryBuilder_1__ctor_m9C0EC0A8947CAE0CD99B7FC847861454BE629EF6_gshared (UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_visualElement, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) ;

// UnityEngine.UIElements.IPanel UnityEngine.UIElements.VisualElement::get_panel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::get_hierarchy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4 (Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.EventBase::set_target(UnityEngine.UIElements.IEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElementListPool::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* VisualElementListPool_Get_m99F3D55FC85A740A48A062146D40D59F50107CC2 (int32_t ___0_initialCapacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::Add(T)
inline void List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_inline (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::get_Count()
inline int32_t List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_inline (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::get_Item(System.Int32)
inline VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092 (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.UIElements.VisualElementListPool::Release(System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementListPool_Release_mAF4ED38CC4F9A6E58B06F4B0BD13611F7DECBCFA (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___0_elements, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.IDisposable>::Add(T)
inline void List_1_Add_m3E57006B1E4E3BF3DC969B90445C1E58B246619D_inline (List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void Unity.Collections.NativeSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(Unity.Collections.NativeArray`1<T>,System.Int32,System.Int32)
inline void NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF_gshared)((NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*)__this, ___0_array, ___1_start, ___2_length, method);
}
// System.Void Unity.Collections.NativeSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(Unity.Collections.NativeSlice`1<T>,System.Int32,System.Int32)
inline void NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253 (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_slice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253_gshared)((NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*)__this, ___0_slice, ___1_start, ___2_length, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void UnityEngine.NoAllocHelpers::Internal_ResizeList(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_Internal_ResizeList_mC468D22C6FEE802726262F9B7CFC3DC23A5DD40C (RuntimeObject* ___0_list, int32_t ___1_size, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Object::FindFirstObjectByType(System.Type,UnityEngine.FindObjectsInactive)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_FindFirstObjectByType_mC479B3C54E61550A6A405DC1BCF0CBA2BA8FC66F (Type_t* ___0_type, int32_t ___1_findObjectsInactive, const RuntimeMethod* method) ;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsByType(System.Type,UnityEngine.FindObjectsInactive,UnityEngine.FindObjectsSortMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Object_FindObjectsByType_m2FD4029E94449E11B16018C0A42F53978722D980 (Type_t* ___0_type, int32_t ___1_findObjectsInactive, int32_t ___2_sortMode, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_CheckNullArgument_m4D03BBBD975CCCCB3F9438864E3E8BF54E1E3F26 (RuntimeObject* ___0_arg, String_t* ___1_message, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Internal_CloneSingle_m24ECA1416702930DF5C316EA8B70D575315B636A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_data, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.UnityException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312 (UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(T[])
inline void ArraySegment_1__ctor_m17C06C374D711E7597B12371E664BDCE2DA902D9 (ArraySegment_1_tB4E8281C954CCD18F080ED0A11252B6246E37280* __this, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))ArraySegment_1__ctor_mD451D40E98D059A4FAC27FDB626B23D1ED00E1B5_gshared)((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)__this, (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)___0_array, method);
}
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
inline bool PlayableHandle_IsPlayableOfType_TisIl2CppFullySharedGenericAny_mA4E158678160F1D9713643D243397452502EE932 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisIl2CppFullySharedGenericAny_mA4E158678160F1D9713643D243397452502EE932_gshared)((PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)__this, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5 (String_t* ___0_format, RuntimeObject* ___1_provider, RuntimeObject* ___2_arg0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Attribute[] Newtonsoft.Json.Utilities.ReflectionUtils::GetAttributes(System.Object,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* ReflectionUtils_GetAttributes_m64100872CC4D5F42453CED2620D0790546A34543 (RuntimeObject* ___0_attributeProvider, Type_t* ___1_attributeType, bool ___2_inherit, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_GetBuiltinResource_mD67A5C47BA93B04E0A9398611A735EA1803CAE5B (Type_t* ___0_type, String_t* ___1_path, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33 (String_t* ___0_path, Type_t* ___1_systemTypeInstance, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<VRMShaders.SubAssetKey,UnityEngine.Object>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_m25A39BA9400C61A22CA33A8F59124DD53C929506 (ValueTuple_2_t31AC097C4531D2F1E7EEC96FE50B3EF8F84974A1* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___0_item1, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD_gshared)((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)__this, (Il2CppFullySharedGenericAny)&___0_item1, (Il2CppFullySharedGenericAny)___1_item2, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<VRMShaders.SubAssetKey,UnityEngine.Object>>::Add(T)
inline void List_1_Add_mFDD0FD971CC69FE207D61BEBCA543491A9AAE09A_inline (List_1_t491E3856BE98663F8A31500DDE5FC3079B04D54C* __this, ValueTuple_2_t31AC097C4531D2F1E7EEC96FE50B3EF8F84974A1 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.RuntimeTypeHandle::HasReferences(System.RuntimeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F (RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___0_type, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_gshared_inline)((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)__this, method);
	return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cppRetVal;
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))ArraySegment_1_get_Count_mEF96248898C14F3687A5C72B920F841701E4E13C_gshared_inline)((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)__this, method);
}
// System.Void System.ArgumentNullException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_gshared_inline)((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)__this, method);
}
// System.Void System.AccessViolationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessViolationException__ctor_mC7C8A804506B189383531FC1E1BACE8967D31F67 (AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7 (Type_t* ___0_t, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___0_source, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_destination, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_startIndex, intptr_t ___2_destination, int32_t ___3_length, const RuntimeMethod* method) ;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A (intptr_t ___0_pointer, int32_t ___1_offset, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.String System.String::FastAllocateString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104 (int32_t ___0_length, const RuntimeMethod* method) ;
// System.Char& System.String::GetRawStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline)((Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)__this, (Il2CppFullySharedGenericAny*)___0_ptr, ___1_length, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mE2CB2DBE9CFA9FD3FF4707BB20A9B1FE52C76273 (Dictionary_2_t8B8AC3704119A64857E8D359CB4782C5ECEA90E7* __this, int32_t ___0_key, Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Int64 UnityEngine.UIElements.StylePropertyAnimationSystem::CurrentTimeMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StylePropertyAnimationSystem_CurrentTimeMs_m3B079B6B759368132A67B8F2E6052A270A7A49B6 (StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyAnimationSystem/Values>::Contains(T)
inline bool List_1_Contains_m71E6FD21D54996DACBC26526FABF5E57B9E4C3B4 (List_1_t491E344573B9D6F61E36AF56132B7412453928C9* __this, Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyAnimationSystem/Values>::Add(T)
inline void List_1_Add_mA2DB3B33B757C906EBF689F682FD659A191A242B_inline (List_1_t491E344573B9D6F61E36AF56132B7412453928C9* __this, Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// UnityEngine.UIElements.StyleValueType UnityEngine.UIElements.StyleValueHandle::get_valueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9 (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void VRMShaders.SubAssetKey::.ctor(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubAssetKey__ctor_mC1E0487CAD08419F1FD93EBC2AFB612FA4AAC4D9 (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* __this, Type_t* ___0_type, String_t* ___1_name, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.OperationCanceledException::get_CancellationToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::TrySetCanceled(System.Threading.CancellationToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_tokenToRecord, RuntimeObject* ___1_cancellationException, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::TrySetException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, RuntimeObject* ___0_exceptionObject, const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::get_Default()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline (const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::InternalCurrentIfAttached(System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_InternalCurrentIfAttached_mBF043F869DEB200F3129DB7CE48C64BA0A85B58C (int32_t ___0_creationOptions, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::NextPowerOfTwo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485 (int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.UnityException UnityEngine.Texture::CreateNonReadableException(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* Texture_CreateNonReadableException_m29786CD930E89C281564A9B341FD4088FBC8C94F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_t, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.Texture2D::GetRawImageDataSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Texture2D_GetRawImageDataSize_mBD92C0F2A09A023841785BBB642C2B7696EE7CBE (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// UnityEngine.UnityException UnityEngine.Texture::CreateNativeArrayLengthOverflowException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* Texture_CreateNativeArrayLengthOverflowException_m508BE4928B3768ED618EF1FA10E022F6FF12F870 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Texture2D::GetWritableImageData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture2D_GetWritableImageData_m8E26026A332040F8713E5A2A13C5545797159A5E (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_frame, const RuntimeMethod* method) ;
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItemHelper(System.Threading.WaitCallback,System.Object,System.Threading.StackCrawlMark&,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItemHelper_m5B98C28FB6C9379B8DDD302ABC3D1D1FC1779EDD (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___0_callBack, RuntimeObject* ___1_state, int32_t* ___2_stackMark, bool ___3_compressStack, bool ___4_forceGlobal, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility::GetUnsafePtr<UnityEngine.UIElements.UIR.DrawBufferRange>(Unity.Collections.NativeSlice`1<T>)
inline void* NativeSliceUnsafeUtility_GetUnsafePtr_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_m3F0318274FE0636367B91558C6673DEF834FB1A5 (NativeSlice_1_t2E5DBD9A5F77A5044A4160098A0B2A45D3EE8974 ___0_nativeSlice, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_gshared)(il2cpp_codegen_cast_struct<NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, NativeSlice_1_t2E5DBD9A5F77A5044A4160098A0B2A45D3EE8974>(&___0_nativeSlice), method);
}
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.DrawBufferRange>::get_Length()
inline int32_t NativeSlice_1_get_Length_m2566843C81FEFDDF6407962D4E34F13C3133028D (NativeSlice_1_t2E5DBD9A5F77A5044A4160098A0B2A45D3EE8974* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_gshared)((NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*)__this, method);
}
// System.Void UnityEngine.UIElements.UIR.Utility::DrawRanges(System.IntPtr,System.IntPtr*,System.Int32,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_DrawRanges_m6F5AE31B6A857DB71F66A2662C6EBE1B218B6FF4 (intptr_t ___0_ib, intptr_t* ___1_vertexStreams, int32_t ___2_streamCount, intptr_t ___3_ranges, int32_t ___4_rangeCount, intptr_t ___5_vertexDecl, const RuntimeMethod* method) ;
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UQueryExtensions::Q(UnityEngine.UIElements.VisualElement,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* UQueryExtensions_Q_m95306617BF08AC2853EABB5299786D2095BE631E (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_e, String_t* ___1_name, String_t* ___2_className, const RuntimeMethod* method) ;
// UnityEngine.UIElements.UQueryState`1<T> UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement>::RebuildOn(UnityEngine.UIElements.VisualElement)
inline UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004 (UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, const RuntimeMethod* method)
{
	return ((  UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA (*) (UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))UQueryState_1_RebuildOn_mF29E43348045B1219A757EBBF43C892C32EEA5DC_gshared)(__this, ___0_element, method);
}
// T System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher>::get_Item(System.Int32)
inline RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68 (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.UIElements.StyleSelector[] UnityEngine.UIElements.StyleComplexSelector::get_selectors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02 (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleSelectorPart[] UnityEngine.UIElements.StyleSelector::get_parts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF (StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleSelectorPart UnityEngine.UIElements.StyleSelectorPart::CreatePredicate(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 StyleSelectorPart_CreatePredicate_m9B21A0E45BE2A1EBCA075E7C3EA04216EFB99026 (RuntimeObject* ___0_predicate, const RuntimeMethod* method) ;
// T UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement>::First()
inline VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94 (UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA* __this, const RuntimeMethod* method)
{
	return ((  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* (*) (UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA*, const RuntimeMethod*))UQueryState_1_First_m19FF1885E9D1D57D0EBA715820CA3C02C2C9C363_gshared)(__this, method);
}
// UnityEngine.UIElements.StyleSelectorPart UnityEngine.UIElements.StyleSelectorPart::CreateClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 StyleSelectorPart_CreateClass_m5B7F89D3BE469D181E0887E94F4031B92554656E (String_t* ___0_className, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleSelectorPart UnityEngine.UIElements.StyleSelectorPart::CreateId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 StyleSelectorPart_CreateId_m8C5422E6675A02D0A623D8BB2A1F6704299F0357 (String_t* ___0_Id, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UQueryBuilder`1<UnityEngine.UIElements.VisualElement>::.ctor(UnityEngine.UIElements.VisualElement)
inline void UQueryBuilder_1__ctor_m841C38F69A30425CCEA1F93525C97AD0B9648486 (UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_visualElement, const RuntimeMethod* method)
{
	((  void (*) (UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))UQueryBuilder_1__ctor_m9C0EC0A8947CAE0CD99B7FC847861454BE629EF6_gshared)(__this, ___0_visualElement, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Utility::SetVectorArray(UnityEngine.MaterialPropertyBlock,System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetVectorArray_m36650D854AAE55F689FF622D36CC2AC0B9FD7FB1 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___0_props, int32_t ___1_name, intptr_t ___2_vector4s, int32_t ___3_count, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.UxmlAttributeDescription::TryGetValueFromBagAsString(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, String_t** ___2_value, const RuntimeMethod* method) ;
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::get_Item(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___0_phase, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::set_Item(UnityEngine.UIElements.VisualTreeUpdatePhase,UnityEngine.UIElements.IVisualTreeUpdater)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11 (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___0_phase, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25 (Type_t* ___0_t, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.AndroidJNISafe::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Boolean[] UnityEngine.AndroidJNISafe::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.AndroidJNISafe::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.SByte[] UnityEngine.AndroidJNISafe::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int16[] UnityEngine.AndroidJNISafe::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int64[] UnityEngine.AndroidJNISafe::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Single[] UnityEngine.AndroidJNISafe::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Double[] UnityEngine.AndroidJNISafe::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Char[] UnityEngine.AndroidJNISafe::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE (intptr_t ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNISafe::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849 (intptr_t ___0_str, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094 (intptr_t ___0_localref, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_jobject, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01 (intptr_t ___0_javaClass, String_t* ___1_fieldName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___0_javaClass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UniGLTF.glTFExtensions/ComponentVec>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mDDA0C5A3B6082004767DC2D63623080F9990FF87 (Dictionary_2_t7C687CB53080A5BE3F3D34D182E1F6DFC564B87A* __this, Type_t* ___0_key, ComponentVec_tD7B7AA5EB22E95F8F7C4E52B3A5CA4F6B6ABF5B2* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// T[] System.IO.MonoLinqHelper::ToArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* MonoLinqHelper_ToArray_TisIl2CppFullySharedGenericAny_m330ED1D4140E8C458BB4BB6BD9411C6B71911D0F_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_source;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = InvokerFuncInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.UIElements.MouseEventsHelper::SendEnterLeave<System.Object,System.Object>(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.IMouseEvent,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventsHelper_SendEnterLeave_TisRuntimeObject_TisRuntimeObject_mA9FDCD2BEADD3CCAA145F8A362AC0AF11F7CD58F_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_previousTopElementUnderMouse, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___1_currentTopElementUnderMouse, RuntimeObject* ___2_triggerEvent, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_mousePosition, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_1 = NULL;
	int32_t V_2 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_3 = NULL;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* V_4 = NULL;
	bool V_5 = false;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	int32_t V_14 = 0;
	RuntimeObject* V_15 = NULL;
	bool V_16 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_previousTopElementUnderMouse), (&___1_currentTopElementUnderMouse), (&___2_triggerEvent), (&___3_mousePosition));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_9), (&V_12), (&V_14), (&V_15));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37826));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37827));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37828));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37829));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_previousTopElementUnderMouse;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_previousTopElementUnderMouse;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37830));
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37830));
		G_B3_0 = ((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_5 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37831));
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37832));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37833));
		___0_previousTopElementUnderMouse = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)NULL;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37834));
	}

IL_001b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37835));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37836));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = ___0_previousTopElementUnderMouse;
		V_1 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37837));
		goto IL_0037;
	}

IL_0021:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37838));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37839));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37840));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_6 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37841));
		NullCheck(L_6);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_7;
		L_7 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37841));
		V_6 = L_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37842));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8;
		L_8 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37842));
		V_1 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37843));
	}

IL_0037:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37844));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9 = V_1;
		V_7 = (bool)((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37845));
		bool L_10 = V_7;
		if (L_10)
		{
			goto IL_0021;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37846));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37847));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_11 = ___1_currentTopElementUnderMouse;
		V_3 = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37848));
		goto IL_005d;
	}

IL_0047:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37849));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37850));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37851));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37852));
		NullCheck(L_13);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_14;
		L_14 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37852));
		V_6 = L_14;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37853));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15;
		L_15 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37853));
		V_3 = L_15;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37854));
	}

IL_005d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37855));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_16 = V_3;
		V_8 = (bool)((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_16) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37856));
		bool L_17 = V_8;
		if (L_17)
		{
			goto IL_0047;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37857));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18 = ___0_previousTopElementUnderMouse;
		V_1 = L_18;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37858));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_19 = ___1_currentTopElementUnderMouse;
		V_3 = L_19;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37859));
		goto IL_00c4;
	}

IL_006d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37860));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37861));
		RuntimeObject* L_20 = ___2_triggerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___3_mousePosition;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37862));
		RuntimeObject* L_22;
		L_22 = InvokerFuncInvoker3< RuntimeObject*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_20, L_21, (bool)0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37862));
		V_9 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0098:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37869));
					RuntimeObject* L_23 = V_9;
					if (!L_23)
					{
						goto IL_00ae;
					}
				}
				{
					RuntimeObject* L_24 = V_9;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37870));
					NullCheck((RuntimeObject*)L_24);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_24);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37870));
				}

IL_00ae:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37871));
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37863));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37864));
			RuntimeObject* L_25 = V_9;
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_26 = V_1;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37865));
			NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_25);
			EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_25, (RuntimeObject*)L_26, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37865));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37866));
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_27 = V_1;
			RuntimeObject* L_28 = V_9;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37867));
			NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_27);
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(6 /* System.Void UnityEngine.UIElements.CallbackEventHandler::SendEvent(UnityEngine.UIElements.EventBase) */, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_27, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_28);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37867));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37868));
			goto IL_00af;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00af:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37872));
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37873));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_30 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37874));
		NullCheck(L_30);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_31;
		L_31 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_30, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37874));
		V_6 = L_31;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37875));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_32;
		L_32 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37875));
		V_1 = L_32;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37876));
	}

IL_00c4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37877));
		int32_t L_33 = V_0;
		int32_t L_34 = V_2;
		V_10 = (bool)((((int32_t)L_33) > ((int32_t)L_34))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37878));
		bool L_35 = V_10;
		if (L_35)
		{
			goto IL_006d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37879));
		int32_t L_36 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37880));
		il2cpp_codegen_runtime_class_init_inline(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var);
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_37;
		L_37 = VisualElementListPool_Get_m99F3D55FC85A740A48A062146D40D59F50107CC2(L_36, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37880));
		V_4 = L_37;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37881));
		goto IL_00f7;
	}

IL_00d8:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37882));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37883));
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_38 = V_4;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_39 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37884));
		NullCheck(L_38);
		List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_inline(L_38, L_39, List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37884));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37885));
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37886));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_41 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37887));
		NullCheck(L_41);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_42;
		L_42 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_41, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37887));
		V_6 = L_42;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37888));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_43;
		L_43 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37888));
		V_3 = L_43;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37889));
	}

IL_00f7:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37890));
		int32_t L_44 = V_2;
		int32_t L_45 = V_0;
		V_11 = (bool)((((int32_t)L_44) > ((int32_t)L_45))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37891));
		bool L_46 = V_11;
		if (L_46)
		{
			goto IL_00d8;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37892));
		goto IL_016f;
	}

IL_0103:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37893));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37894));
		RuntimeObject* L_47 = ___2_triggerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = ___3_mousePosition;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37895));
		RuntimeObject* L_49;
		L_49 = InvokerFuncInvoker3< RuntimeObject*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_47, L_48, (bool)0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37895));
		V_12 = L_49;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_012e:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37902));
					RuntimeObject* L_50 = V_12;
					if (!L_50)
					{
						goto IL_0144;
					}
				}
				{
					RuntimeObject* L_51 = V_12;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37903));
					NullCheck((RuntimeObject*)L_51);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_51);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37903));
				}

IL_0144:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37904));
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 1);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37896));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37897));
			RuntimeObject* L_52 = V_12;
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_53 = V_1;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37898));
			NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_52);
			EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_52, (RuntimeObject*)L_53, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37898));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37899));
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_54 = V_1;
			RuntimeObject* L_55 = V_12;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37900));
			NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_54);
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(6 /* System.Void UnityEngine.UIElements.CallbackEventHandler::SendEvent(UnityEngine.UIElements.EventBase) */, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_54, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_55);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37900));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37901));
			goto IL_0145;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0145:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37905));
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_56 = V_4;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_57 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37906));
		NullCheck(L_56);
		List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_inline(L_56, L_57, List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37906));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37907));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_58 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37908));
		NullCheck(L_58);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_59;
		L_59 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_58, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37908));
		V_6 = L_59;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37909));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_60;
		L_60 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37909));
		V_1 = L_60;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37910));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_61 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37911));
		NullCheck(L_61);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_62;
		L_62 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_61, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37911));
		V_6 = L_62;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37912));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_63;
		L_63 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37912));
		V_3 = L_63;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37913));
	}

IL_016f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37914));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_64 = V_1;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_65 = V_3;
		V_13 = (bool)((((int32_t)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_64) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37915));
		bool L_66 = V_13;
		if (L_66)
		{
			goto IL_0103;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37916));
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_67 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37917));
		NullCheck(L_67);
		int32_t L_68;
		L_68 = List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_inline(L_67, List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37917));
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_68, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37918));
		goto IL_01e2;
	}

IL_0189:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37919));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37920));
		RuntimeObject* L_69 = ___2_triggerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70 = ___3_mousePosition;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37921));
		RuntimeObject* L_71;
		L_71 = InvokerFuncInvoker3< RuntimeObject*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_69, L_70, (bool)0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37921));
		V_15 = L_71;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01c4:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37930));
					RuntimeObject* L_72 = V_15;
					if (!L_72)
					{
						goto IL_01da;
					}
				}
				{
					RuntimeObject* L_73 = V_15;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37931));
					NullCheck((RuntimeObject*)L_73);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_73);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37931));
				}

IL_01da:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37932));
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 2);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37922));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37923));
			RuntimeObject* L_74 = V_15;
			List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_75 = V_4;
			int32_t L_76 = V_14;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37924));
			NullCheck(L_75);
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_77;
			L_77 = List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092(L_75, L_76, List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37924));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37925));
			NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_74);
			EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_74, (RuntimeObject*)L_77, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37925));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37926));
			List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_78 = V_4;
			int32_t L_79 = V_14;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37927));
			NullCheck(L_78);
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_80;
			L_80 = List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092(L_78, L_79, List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37927));
			RuntimeObject* L_81 = V_15;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37928));
			NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_80);
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(6 /* System.Void UnityEngine.UIElements.CallbackEventHandler::SendEvent(UnityEngine.UIElements.EventBase) */, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_80, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_81);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37928));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37929));
			goto IL_01db;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01db:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37933));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37934));
		int32_t L_82 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_82, 1));
	}

IL_01e2:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37935));
		int32_t L_83 = V_14;
		V_16 = (bool)((((int32_t)((((int32_t)L_83) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37936));
		bool L_84 = V_16;
		if (L_84)
		{
			goto IL_0189;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37937));
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_85 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37938));
		il2cpp_codegen_runtime_class_init_inline(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var);
		VisualElementListPool_Release_mAF4ED38CC4F9A6E58B06F4B0BD13611F7DECBCFA(L_85, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37938));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37939));
		return;
	}
}
// Unity.Collections.NativeArray`1<TDst> UniGLTF.NativeArrayManager::Convert<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.NativeArray`1<TSrc>,System.Func`2<TSrc,TDst>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayManager_Convert_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m0993A51C2187CBD1B903A8B31DDAAAD416D9AD36_gshared (NativeArrayManager_t3E3943BD412EF76264F6FC8151D43128A0A6F4E2* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, Func_2_tDDC415B0A5306A4473D2ADD7C4E25824337698DB* ___1_convert, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayManager_t3E3943BD412EF76264F6FC8151D43128A0A6F4E2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// TSrc
	// sizeof(TSrc)
	const uint32_t SizeOf_TSrc_t21FA2AB553D0F09520746E862A1F03787D61FA9B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 6));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_TSrc_t21FA2AB553D0F09520746E862A1F03787D61FA9B);
	// TDst
	// sizeof(TDst)
	const uint32_t SizeOf_TDst_t0ECEEE2AC03475B4373DCDC16555F960A4860AD5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_TDst_t0ECEEE2AC03475B4373DCDC16555F960A4860AD5);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_src), (&___1_convert));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23586));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniGLTF + 23587));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23588));
		// var dst = CreateNativeArray<TDst>(src.Length);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23589));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23590));
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (&___0_src));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23590));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23591));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1;
		L_1 = InvokerFuncInvoker1< NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), __this, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23591));
		V_0 = L_1;
		// for (var i = 0; i < src.Length; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23592));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23593));
		goto IL_0030;
	}

IL_0013:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23594));
		// dst[i] = convert(src[i]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23595));
		int32_t L_2 = V_1;
		Func_2_tDDC415B0A5306A4473D2ADD7C4E25824337698DB* L_3 = ___1_convert;
		int32_t L_4 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23596));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), (&___0_src), L_4, (Il2CppFullySharedGenericStruct*)L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23596));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23597));
		NullCheck(L_3);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), L_3, L_5, (Il2CppFullySharedGenericStruct*)L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23597));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23598));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), (&V_0), L_2, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23598));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23599));
		// for (var i = 0; i < src.Length; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23600));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0030:
	{
		// for (var i = 0; i < src.Length; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23601));
		int32_t L_8 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23602));
		int32_t L_9;
		L_9 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (&___0_src));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23602));
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23603));
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0013;
		}
	}
	{
		// return dst;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23604));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_11 = V_0;
		V_3 = L_11;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23605));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_12 = V_3;
		return L_12;
	}
}
// Unity.Collections.NativeArray`1<TDst> UniGLTF.NativeArrayManager::Convert<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Collections.NativeArray`1<TSrc>,System.Func`2<TSrc,TDst>)
// Unity.Collections.NativeArray`1<T> UniGLTF.NativeArrayManager::CreateNativeArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.ArraySegment`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayManager_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m823D8E3F191EF78A13D0E7E57E1124348C62BFBB_gshared (NativeArrayManager_t3E3943BD412EF76264F6FC8151D43128A0A6F4E2* __this, ArraySegment_1_tB4E8281C954CCD18F080ED0A11252B6246E37280 ___0_data, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayManager_t3E3943BD412EF76264F6FC8151D43128A0A6F4E2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23566));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniGLTF + 23567));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23568));
		// var array = CreateNativeArray<T>(data.Count);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23569));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23570));
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (&___0_data));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23570));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23571));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1;
		L_1 = InvokerFuncInvoker1< NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), __this, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23571));
		V_0 = L_1;
		// array.CopyFrom(data.ToArray());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23572));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23573));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_2;
		L_2 = InvokerFuncInvoker0< __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), (&___0_data));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23573));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23574));
		InvokerActionInvoker1< __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), (&V_0), L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23574));
		// return array;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23575));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = V_0;
		V_1 = L_3;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23576));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4 = V_1;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UniGLTF.NativeArrayManager::CreateNativeArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayManager_CreateNativeArray_TisIl2CppFullySharedGenericStruct_mDF410A2D46B5CBE4FF085AD9009CFBC3BB7A8103_gshared (NativeArrayManager_t3E3943BD412EF76264F6FC8151D43128A0A6F4E2* __this, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_data, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayManager_t3E3943BD412EF76264F6FC8151D43128A0A6F4E2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23577));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniGLTF + 23578));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23579));
		// var array = CreateNativeArray<T>(data.Length);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23580));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_0 = ___0_data;
		NullCheck(L_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23581));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1;
		L_1 = InvokerFuncInvoker1< NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, ((int32_t)(((RuntimeArray*)L_0)->max_length)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23581));
		V_0 = L_1;
		// array.CopyFrom(data);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23582));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_2 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23583));
		InvokerActionInvoker1< __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (&V_0), L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23583));
		// return array;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23584));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23585));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4 = V_1;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UniGLTF.NativeArrayManager::CreateNativeArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayManager_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m0D7F25223FCA67A64E5B71F61FE756A7F18421D6_gshared (NativeArrayManager_t3E3943BD412EF76264F6FC8151D43128A0A6F4E2* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3E57006B1E4E3BF3DC969B90445C1E58B246619D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayManager_t3E3943BD412EF76264F6FC8151D43128A0A6F4E2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_size));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23557));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniGLTF + 23558));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23559));
		// var array = new NativeArray<T>(size, Allocator.Persistent);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23560));
		int32_t L_0 = ___0_size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23561));
		InvokerActionInvoker3< int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), (&V_0), L_0, (int32_t)4, (int32_t)1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23561));
		// m_disposables.Add(array);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23562));
		List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* L_1 = (List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05*)__this->___m_disposables_0;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = V_0;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23563));
		NullCheck(L_1);
		List_1_Add_m3E57006B1E4E3BF3DC969B90445C1E58B246619D_inline(L_1, (RuntimeObject*)L_4, List_1_Add_m3E57006B1E4E3BF3DC969B90445C1E58B246619D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23563));
		// return array;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23564));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = V_0;
		V_1 = L_5;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 23565));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6 = V_1;
		return L_6;
	}
}
// Unity.Collections.NativeArray`1<T> UniGLTF.NativeArrayManager::CreateNativeArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.ArraySegment`1<T>)
// Unity.Collections.NativeArray`1<T> UniGLTF.NativeArrayManager::CreateNativeArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[])
// Unity.Collections.NativeArray`1<T> UniGLTF.NativeArrayManager::CreateNativeArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Int32)
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dataPointer), (&___1_length), (&___2_allocator));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 700));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 701));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 702));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 703));
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer_0 = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length_1 = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel_2 = L_2;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = V_1;
		V_0 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 704));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 705));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = V_2;
		return L_5;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	void* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_nativeArray));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 706));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 707));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 708));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 709));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 710));
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	void* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_nativeArray));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 711));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 712));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 713));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 714));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 715));
		void* L_2 = V_0;
		return L_2;
	}
}
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSliceExtensions::Slice<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.NativeArray`1<T>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceExtensions_Slice_TisIl2CppFullySharedGenericStruct_mFB1AE1A459E87B8E3C3986EF14F956E30EAF24A3_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_thisArray), (&___1_start), (&___2_length));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 141));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 142));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 143));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 144));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 145));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF((&L_3), L_0, L_1, L_2, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 145));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 146));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_4 = V_0;
		return L_4;
	}
}
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSliceExtensions::Slice<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.NativeSlice`1<T>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceExtensions_Slice_TisIl2CppFullySharedGenericStruct_m8604EAC32FCFF874A6AA4097703CF1DA1EFA00DE_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_thisSlice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_thisSlice), (&___1_start), (&___2_length));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 147));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 148));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 149));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 150));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_thisSlice;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 151));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253((&L_3), L_0, L_1, L_2, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 151));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 152));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_4 = V_0;
		return L_4;
	}
}
// Unity.Collections.NativeSlice`1<T> Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility::ConvertExistingDataToNativeSlice<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisIl2CppFullySharedGenericStruct_mE65C843FF57523BD4FDD1642C5D01EE096A9E2E0_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_4;
	memset((&V_4), 0, sizeof(V_4));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dataPointer), (&___1_stride), (&___2_length));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 674));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 675));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 676));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 677));
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 678));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 679));
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 680));
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 680));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 681));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 681));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisIl2CppFullySharedGenericStruct_mE65C843FF57523BD4FDD1642C5D01EE096A9E2E0_RuntimeMethod_var)));
	}

IL_0024:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 682));
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 683));
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 684));
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_10);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 685));
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 685));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 686));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 686));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisIl2CppFullySharedGenericStruct_mE65C843FF57523BD4FDD1642C5D01EE096A9E2E0_RuntimeMethod_var)));
	}

IL_0047:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 687));
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride_1 = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer_0 = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length_2 = L_16;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_17 = V_3;
		V_0 = L_17;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 688));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 689));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_19 = V_4;
		return L_19;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility::GetUnsafePtr<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.NativeSlice`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	void* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_nativeSlice));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 690));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 691));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 692));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 693));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = (uint8_t*)L_0.___m_Buffer_0;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 694));
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility::GetUnsafeReadOnlyPtr<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.NativeSlice`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	void* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_nativeSlice));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 695));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 696));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 697));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 698));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = (uint8_t*)L_0.___m_Buffer_0;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 699));
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.NoAllocHelpers::EnsureListElemCount<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisIl2CppFullySharedGenericAny_m28F7CCEFA354ED25B6E156C88890C5D01F5D9B6B_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, int32_t ___1_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list), (&___1_count));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6297));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6298));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6299));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6300));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6301));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6301));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6302));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6303));
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6303));
		int32_t L_3 = ___1_count;
		V_0 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6304));
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6305));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_5 = ___0_list;
		int32_t L_6 = ___1_count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6306));
		NullCheck(L_5);
		InvokerActionInvoker1< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_5, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6306));
	}

IL_001d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6307));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_7 = ___0_list;
		int32_t L_8 = ___1_count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6308));
		InvokerActionInvoker2< List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_7, L_8);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6308));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6309));
		return;
	}
}
// System.Void UnityEngine.NoAllocHelpers::ResizeList<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResizeList_TisIl2CppFullySharedGenericAny_m6FFE63174996367F5679DAE93FB5F9C6F2A5B662_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list), (&___1_size));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6279));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6280));
	int32_t G_B5_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6281));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6282));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		V_0 = (bool)((((RuntimeObject*)(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6283));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6284));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6285));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6285));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoAllocHelpers_ResizeList_TisIl2CppFullySharedGenericAny_m6FFE63174996367F5679DAE93FB5F9C6F2A5B662_RuntimeMethod_var)));
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6286));
		int32_t L_3 = ___1_size;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = ___1_size;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_5 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6287));
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6287));
		G_B5_0 = ((((int32_t)L_4) > ((int32_t)L_6))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 1;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6288));
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6289));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6290));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6290));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoAllocHelpers_ResizeList_TisIl2CppFullySharedGenericAny_m6FFE63174996367F5679DAE93FB5F9C6F2A5B662_RuntimeMethod_var)));
	}

IL_0038:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6291));
		int32_t L_9 = ___1_size;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_10 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6292));
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6292));
		V_2 = (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6293));
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6294));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_13 = ___0_list;
		int32_t L_14 = ___1_size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6295));
		NoAllocHelpers_Internal_ResizeList_mC468D22C6FEE802726262F9B7CFC3DC23A5DD40C((RuntimeObject*)L_13, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6295));
	}

IL_0050:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6296));
		return;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisIl2CppFullySharedGenericAny_mD1DA27D7DEDDDE717B58255E05299BE55E56F095_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_values, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_values));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6316));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6317));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6318));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6319));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = ___0_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6320));
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6320));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6321));
		int32_t L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.Object::FindFirstObjectByType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindFirstObjectByType_TisRuntimeObject_mC5927319EB5B80095EFBA653D414D6F8AA87DC0A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5453));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5454));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5455));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5456));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5457));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5457));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5458));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_FindFirstObjectByType_mC479B3C54E61550A6A405DC1BCF0CBA2BA8FC66F(L_1, (int32_t)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5458));
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5459));
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// T[] UnityEngine.Object::FindObjectsByType<System.Object>(UnityEngine.FindObjectsSortMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsByType_TisRuntimeObject_m9F3B83321CD4E4F4F764805ADCEF338CF2BA8409_gshared (int32_t ___0_sortMode, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_sortMode));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5445));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5446));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5447));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5448));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5449));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5449));
		int32_t L_2 = ___0_sortMode;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5450));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_3;
		L_3 = Object_FindObjectsByType_m2FD4029E94449E11B16018C0A42F53978722D980(L_1, (int32_t)0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5450));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5451));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = InvokerFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5451));
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5452));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		return L_5;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF704B54D833421164E45E576DFD279921246BCEA);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_original));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5417));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5418));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5419));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5420));
		RuntimeObject* L_0 = ___0_original;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5421));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_CheckNullArgument_m4D03BBBD975CCCCB3F9438864E3E8BF54E1E3F26(L_0, _stringLiteralF704B54D833421164E45E576DFD279921246BCEA, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5421));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5422));
		RuntimeObject* L_1 = ___0_original;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5423));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_Internal_CloneSingle_m24ECA1416702930DF5C316EA8B70D575315B636A((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5423));
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5424));
		RuntimeObject* L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5425));
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5425));
		V_1 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5426));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5427));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5428));
		UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* L_6 = (UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5428));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_RuntimeMethod_var)));
	}

IL_003e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5429));
		RuntimeObject* L_7 = V_0;
		V_2 = L_7;
		goto IL_0042;
	}

IL_0042:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5430));
		RuntimeObject* L_8 = V_2;
		return L_8;
	}
}
// UniGLTF.Pin`1<T> UniGLTF.Pin::Create<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.ArraySegment`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0* Pin_Create_TisIl2CppFullySharedGenericStruct_m89FFB14F95416AB4521AF3432A8FA3970CF45C63_gshared (ArraySegment_1_tB4E8281C954CCD18F080ED0A11252B6246E37280 ___0_src, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_src));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5635));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniGLTF + 5636));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5637));
		// return new Pin<T>(src);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5638));
		ArraySegment_1_tB4E8281C954CCD18F080ED0A11252B6246E37280 L_0 = ___0_src;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5639));
		Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0* L_1 = (Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		NullCheck(L_1);
		InvokerActionInvoker1< ArraySegment_1_tB4E8281C954CCD18F080ED0A11252B6246E37280 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5639));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5640));
		Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0* L_2 = V_0;
		return L_2;
	}
}
// UniGLTF.Pin`1<T> UniGLTF.Pin::Create<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0* Pin_Create_TisIl2CppFullySharedGenericStruct_m4358DF2F94552037073EE3C74D26DD8E4048EFDC_gshared (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_src, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_src));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5641));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniGLTF + 5642));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5643));
		// return Create(new ArraySegment<T>(src));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5644));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_0 = ___0_src;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5645));
		ArraySegment_1_tB4E8281C954CCD18F080ED0A11252B6246E37280 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ArraySegment_1__ctor_m17C06C374D711E7597B12371E664BDCE2DA902D9((&L_1), L_0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5645));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5646));
		Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0* L_2;
		L_2 = InvokerFuncInvoker1< Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0*, ArraySegment_1_tB4E8281C954CCD18F080ED0A11252B6246E37280 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5646));
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5647));
		Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisIl2CppFullySharedGenericAny_mA4E158678160F1D9713643D243397452502EE932_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12243));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12244));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12245));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12246));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12247));
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12247));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12248));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12248));
		V_0 = (bool)((((RuntimeObject*)(Type_t*)L_0) == ((RuntimeObject*)(Type_t*)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12249));
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisIl2CppFullySharedGenericAny_mA4E158678160F1D9713643D243397452502EE932_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisIl2CppFullySharedGenericAny_mA4E158678160F1D9713643D243397452502EE932(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.UIElements.PointerEventsHelper::SendEnterLeave<System.Object,System.Object>(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.IPointerEvent,UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventsHelper_SendEnterLeave_TisRuntimeObject_TisRuntimeObject_m1FCE093303CE43483D779A485959EAE6426665EB_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_previousTopElementUnderPointer, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___1_currentTopElementUnderPointer, RuntimeObject* ___2_triggerEvent, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_position, int32_t ___4_pointerId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_1 = NULL;
	int32_t V_2 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_3 = NULL;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* V_4 = NULL;
	bool V_5 = false;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	int32_t V_14 = 0;
	RuntimeObject* V_15 = NULL;
	bool V_16 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_previousTopElementUnderPointer), (&___1_currentTopElementUnderPointer), (&___2_triggerEvent), (&___3_position), (&___4_pointerId));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_9), (&V_12), (&V_14), (&V_15));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37975));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37976));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37977));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37978));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_previousTopElementUnderPointer;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_previousTopElementUnderPointer;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37979));
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37979));
		G_B3_0 = ((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_5 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37980));
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37981));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37982));
		___0_previousTopElementUnderPointer = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)NULL;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37983));
	}

IL_001b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37984));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37985));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = ___0_previousTopElementUnderPointer;
		V_1 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37986));
		goto IL_0037;
	}

IL_0021:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37987));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37988));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37989));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_6 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37990));
		NullCheck(L_6);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_7;
		L_7 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37990));
		V_6 = L_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37991));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8;
		L_8 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37991));
		V_1 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37992));
	}

IL_0037:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37993));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9 = V_1;
		V_7 = (bool)((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37994));
		bool L_10 = V_7;
		if (L_10)
		{
			goto IL_0021;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37995));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37996));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_11 = ___1_currentTopElementUnderPointer;
		V_3 = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37997));
		goto IL_005d;
	}

IL_0047:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37998));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 37999));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38000));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38001));
		NullCheck(L_13);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_14;
		L_14 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38001));
		V_6 = L_14;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38002));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15;
		L_15 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38002));
		V_3 = L_15;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38003));
	}

IL_005d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38004));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_16 = V_3;
		V_8 = (bool)((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_16) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38005));
		bool L_17 = V_8;
		if (L_17)
		{
			goto IL_0047;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38006));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18 = ___0_previousTopElementUnderPointer;
		V_1 = L_18;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38007));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_19 = ___1_currentTopElementUnderPointer;
		V_3 = L_19;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38008));
		goto IL_00c5;
	}

IL_006d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38009));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38010));
		RuntimeObject* L_20 = ___2_triggerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___3_position;
		int32_t L_22 = ___4_pointerId;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38011));
		RuntimeObject* L_23;
		L_23 = InvokerFuncInvoker3< RuntimeObject*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_20, L_21, L_22);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38011));
		V_9 = L_23;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38018));
					RuntimeObject* L_24 = V_9;
					if (!L_24)
					{
						goto IL_00af;
					}
				}
				{
					RuntimeObject* L_25 = V_9;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38019));
					NullCheck((RuntimeObject*)L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_25);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38019));
				}

IL_00af:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38020));
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38012));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38013));
			RuntimeObject* L_26 = V_9;
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_27 = V_1;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38014));
			NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_26);
			EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_26, (RuntimeObject*)L_27, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38014));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38015));
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_28 = V_1;
			RuntimeObject* L_29 = V_9;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38016));
			NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_28);
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(6 /* System.Void UnityEngine.UIElements.CallbackEventHandler::SendEvent(UnityEngine.UIElements.EventBase) */, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_28, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_29);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38016));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38017));
			goto IL_00b0;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b0:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38021));
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38022));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_31 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38023));
		NullCheck(L_31);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_32;
		L_32 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_31, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38023));
		V_6 = L_32;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38024));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_33;
		L_33 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38024));
		V_1 = L_33;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38025));
	}

IL_00c5:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38026));
		int32_t L_34 = V_0;
		int32_t L_35 = V_2;
		V_10 = (bool)((((int32_t)L_34) > ((int32_t)L_35))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38027));
		bool L_36 = V_10;
		if (L_36)
		{
			goto IL_006d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38028));
		int32_t L_37 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38029));
		il2cpp_codegen_runtime_class_init_inline(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var);
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_38;
		L_38 = VisualElementListPool_Get_m99F3D55FC85A740A48A062146D40D59F50107CC2(L_37, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38029));
		V_4 = L_38;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38030));
		goto IL_00f8;
	}

IL_00d9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38031));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38032));
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_39 = V_4;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_40 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38033));
		NullCheck(L_39);
		List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_inline(L_39, L_40, List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38033));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38034));
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38035));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_42 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38036));
		NullCheck(L_42);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_43;
		L_43 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_42, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38036));
		V_6 = L_43;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38037));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_44;
		L_44 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38037));
		V_3 = L_44;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38038));
	}

IL_00f8:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38039));
		int32_t L_45 = V_2;
		int32_t L_46 = V_0;
		V_11 = (bool)((((int32_t)L_45) > ((int32_t)L_46))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38040));
		bool L_47 = V_11;
		if (L_47)
		{
			goto IL_00d9;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38041));
		goto IL_0171;
	}

IL_0104:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38042));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38043));
		RuntimeObject* L_48 = ___2_triggerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = ___3_position;
		int32_t L_50 = ___4_pointerId;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38044));
		RuntimeObject* L_51;
		L_51 = InvokerFuncInvoker3< RuntimeObject*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_48, L_49, L_50);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38044));
		V_12 = L_51;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0130:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38051));
					RuntimeObject* L_52 = V_12;
					if (!L_52)
					{
						goto IL_0146;
					}
				}
				{
					RuntimeObject* L_53 = V_12;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38052));
					NullCheck((RuntimeObject*)L_53);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_53);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38052));
				}

IL_0146:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38053));
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 1);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38045));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38046));
			RuntimeObject* L_54 = V_12;
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_55 = V_1;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38047));
			NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_54);
			EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_54, (RuntimeObject*)L_55, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38047));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38048));
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_56 = V_1;
			RuntimeObject* L_57 = V_12;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38049));
			NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_56);
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(6 /* System.Void UnityEngine.UIElements.CallbackEventHandler::SendEvent(UnityEngine.UIElements.EventBase) */, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_56, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_57);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38049));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38050));
			goto IL_0147;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0147:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38054));
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_58 = V_4;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_59 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38055));
		NullCheck(L_58);
		List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_inline(L_58, L_59, List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38055));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38056));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_60 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38057));
		NullCheck(L_60);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_61;
		L_61 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_60, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38057));
		V_6 = L_61;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38058));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_62;
		L_62 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38058));
		V_1 = L_62;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38059));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_63 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38060));
		NullCheck(L_63);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_64;
		L_64 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_63, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38060));
		V_6 = L_64;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38061));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_65;
		L_65 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38061));
		V_3 = L_65;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38062));
	}

IL_0171:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38063));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_66 = V_1;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_67 = V_3;
		V_13 = (bool)((((int32_t)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_66) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_67))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38064));
		bool L_68 = V_13;
		if (L_68)
		{
			goto IL_0104;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38065));
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_69 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38066));
		NullCheck(L_69);
		int32_t L_70;
		L_70 = List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_inline(L_69, List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38066));
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_70, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38067));
		goto IL_01e5;
	}

IL_018b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38068));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38069));
		RuntimeObject* L_71 = ___2_triggerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = ___3_position;
		int32_t L_73 = ___4_pointerId;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38070));
		RuntimeObject* L_74;
		L_74 = InvokerFuncInvoker3< RuntimeObject*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_71, L_72, L_73);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38070));
		V_15 = L_74;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01c7:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38079));
					RuntimeObject* L_75 = V_15;
					if (!L_75)
					{
						goto IL_01dd;
					}
				}
				{
					RuntimeObject* L_76 = V_15;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38080));
					NullCheck((RuntimeObject*)L_76);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_76);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38080));
				}

IL_01dd:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38081));
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 2);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38071));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38072));
			RuntimeObject* L_77 = V_15;
			List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_78 = V_4;
			int32_t L_79 = V_14;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38073));
			NullCheck(L_78);
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_80;
			L_80 = List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092(L_78, L_79, List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38073));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38074));
			NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_77);
			EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_77, (RuntimeObject*)L_80, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38074));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38075));
			List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_81 = V_4;
			int32_t L_82 = V_14;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38076));
			NullCheck(L_81);
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_83;
			L_83 = List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092(L_81, L_82, List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38076));
			RuntimeObject* L_84 = V_15;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38077));
			NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_83);
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(6 /* System.Void UnityEngine.UIElements.CallbackEventHandler::SendEvent(UnityEngine.UIElements.EventBase) */, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_83, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_84);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38077));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38078));
			goto IL_01de;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01de:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38082));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38083));
		int32_t L_85 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_85, 1));
	}

IL_01e5:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38084));
		int32_t L_86 = V_14;
		V_16 = (bool)((((int32_t)((((int32_t)L_86) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38085));
		bool L_87 = V_16;
		if (L_87)
		{
			goto IL_018b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38086));
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_88 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38087));
		il2cpp_codegen_runtime_class_init_inline(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var);
		VisualElementListPool_Release_mAF4ED38CC4F9A6E58B06F4B0BD13611F7DECBCFA(L_88, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38087));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 38088));
		return;
	}
}
// System.Func`2<T,System.Object> Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateGet<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tED7CA67878EF0FB299872769153413F97964501A* ReflectionDelegateFactory_CreateGet_TisIl2CppFullySharedGenericAny_m68C74CDF3ABC2AF3B2EF9CB7C08D11E05879B0A5_gshared (ReflectionDelegateFactory_t33E37F4C07B3A1F415AA97A5C5F7F5A1662A8574* __this, MemberInfo_t* ___0_memberInfo, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyInfo_t* V_0 = NULL;
	FieldInfo_t* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		MemberInfo_t* L_0 = ___0_memberInfo;
		V_0 = ((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_0, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		PropertyInfo_t* L_2 = V_0;
		Func_2_tED7CA67878EF0FB299872769153413F97964501A* L_3;
		L_3 = GenericVirtualFuncInvoker1Invoker< Func_2_tED7CA67878EF0FB299872769153413F97964501A*, PropertyInfo_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_2);
		return L_3;
	}

IL_0012:
	{
		MemberInfo_t* L_4 = ___0_memberInfo;
		V_1 = ((FieldInfo_t*)IsInstClass((RuntimeObject*)L_4, FieldInfo_t_il2cpp_TypeInfo_var));
		FieldInfo_t* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		FieldInfo_t* L_6 = V_1;
		Func_2_tED7CA67878EF0FB299872769153413F97964501A* L_7;
		L_7 = GenericVirtualFuncInvoker1Invoker< Func_2_tED7CA67878EF0FB299872769153413F97964501A*, FieldInfo_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), __this, L_6);
		return L_7;
	}

IL_0024:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8;
		L_8 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		MemberInfo_t* L_9 = ___0_memberInfo;
		String_t* L_10;
		L_10 = StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7FBBFFB8EE0FB972E2B09691037C46596893A5A)), (RuntimeObject*)L_8, (RuntimeObject*)L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionDelegateFactory_CreateGet_TisIl2CppFullySharedGenericAny_m68C74CDF3ABC2AF3B2EF9CB7C08D11E05879B0A5_RuntimeMethod_var)));
	}
}
// System.Action`2<T,System.Object> Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateSet<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t8B3B3F62C8B5EC13D5C0E28B79C6D396133CA816* ReflectionDelegateFactory_CreateSet_TisIl2CppFullySharedGenericAny_m3C18D69140F526B310E553C1C35B8E57C4CC7FA4_gshared (ReflectionDelegateFactory_t33E37F4C07B3A1F415AA97A5C5F7F5A1662A8574* __this, MemberInfo_t* ___0_memberInfo, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyInfo_t* V_0 = NULL;
	FieldInfo_t* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		MemberInfo_t* L_0 = ___0_memberInfo;
		V_0 = ((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_0, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		PropertyInfo_t* L_2 = V_0;
		Action_2_t8B3B3F62C8B5EC13D5C0E28B79C6D396133CA816* L_3;
		L_3 = GenericVirtualFuncInvoker1Invoker< Action_2_t8B3B3F62C8B5EC13D5C0E28B79C6D396133CA816*, PropertyInfo_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_2);
		return L_3;
	}

IL_0012:
	{
		MemberInfo_t* L_4 = ___0_memberInfo;
		V_1 = ((FieldInfo_t*)IsInstClass((RuntimeObject*)L_4, FieldInfo_t_il2cpp_TypeInfo_var));
		FieldInfo_t* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		FieldInfo_t* L_6 = V_1;
		Action_2_t8B3B3F62C8B5EC13D5C0E28B79C6D396133CA816* L_7;
		L_7 = GenericVirtualFuncInvoker1Invoker< Action_2_t8B3B3F62C8B5EC13D5C0E28B79C6D396133CA816*, FieldInfo_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), __this, L_6);
		return L_7;
	}

IL_0024:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8;
		L_8 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		MemberInfo_t* L_9 = ___0_memberInfo;
		String_t* L_10;
		L_10 = StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F9BACDA740D58784E6ACAE19F0F0BC32F753A58)), (RuntimeObject*)L_8, (RuntimeObject*)L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionDelegateFactory_CreateSet_TisIl2CppFullySharedGenericAny_m3C18D69140F526B310E553C1C35B8E57C4CC7FA4_RuntimeMethod_var)));
	}
}
// T Newtonsoft.Json.Utilities.ReflectionUtils::GetAttribute<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetAttribute_TisRuntimeObject_m929DCC45D06F3FCCCBD5BCEB00BF142F56C7E9D8_gshared (RuntimeObject* ___0_attributeProvider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_attributeProvider;
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, (bool)1);
		return L_1;
	}
}
// T Newtonsoft.Json.Utilities.ReflectionUtils::GetAttribute<System.Object>(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetAttribute_TisRuntimeObject_m14F83A157E83CA41DD365797E2EA7B504A813A8A_gshared (RuntimeObject* ___0_attributeProvider, bool ___1_inherit, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_attributeProvider;
		bool L_1 = ___1_inherit;
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = InvokerFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, RuntimeObject*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1);
		V_0 = L_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_4 = V_1;
		return L_4;
	}

IL_0015:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = InvokerFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, (RuntimeObject*)L_5);
		return L_6;
	}
}
// T[] Newtonsoft.Json.Utilities.ReflectionUtils::GetAttributes<System.Object>(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ReflectionUtils_GetAttributes_TisRuntimeObject_mFEBD58D3D18F47F5EDAE0B1B5B112E3E54350E25_gshared (RuntimeObject* ___0_attributeProvider, bool ___1_inherit, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_attributeProvider;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3 = ___1_inherit;
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_il2cpp_TypeInfo_var);
		AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* L_4;
		L_4 = ReflectionUtils_GetAttributes_m64100872CC4D5F42453CED2620D0790546A34543(L_0, L_2, L_3, NULL);
		V_0 = L_4;
		AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* L_5 = V_0;
		V_1 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 1)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_1;
		if (!L_6)
		{
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_1;
		return L_7;
	}

IL_001e:
	{
		AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = InvokerFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = InvokerFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_9);
		return L_10;
	}
}
// T[] UnityEngine.Resources::ConvertObjects<System.Object>(UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Resources_ConvertObjects_TisRuntimeObject_m20F94D02587DBE09D871BC872CEE50AC6E2DB1B9_gshared (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___0_rawObjects, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	bool V_1 = false;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_rawObjects));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8594));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8595));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8596));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8597));
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_0 = ___0_rawObjects;
		V_1 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8598));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8599));
		V_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
		goto IL_003d;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8600));
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2 = ___0_rawObjects;
		NullCheck(L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_0 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8601));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8602));
		goto IL_002d;
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8603));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = V_3;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_6 = ___0_rawObjects;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 1))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8604));
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8605));
		int32_t L_11 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		NullCheck(L_12);
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8606));
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_001a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8607));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		V_2 = L_14;
		goto IL_003d;
	}

IL_003d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8608));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_2;
		return L_15;
	}
}
// T UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_GetBuiltinResource_TisRuntimeObject_mD1671043430ED893B11348B4C95B5969274DB9B6_gshared (String_t* ___0_path, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_path));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8623));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8624));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8625));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8626));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8627));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8627));
		String_t* L_2 = ___0_path;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8628));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Resources_GetBuiltinResource_mD67A5C47BA93B04E0A9398611A735EA1803CAE5B(L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8628));
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8629));
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_path));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8609));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8610));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8611));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8612));
		String_t* L_0 = ___0_path;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8613));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8613));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8614));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33(L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8614));
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8615));
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Void UniGLTF.RuntimeGltfInstance::AddResource<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeGltfInstance_AddResource_TisRuntimeObject_m26B0C07752CE6FE6EAAB2683409E8B1F55B9501C_gshared (RuntimeGltfInstance_tD0A11D889A6319962208144B89CAA3AA055660DD* __this, RuntimeObject* ___0_resource, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFDD0FD971CC69FE207D61BEBCA543491A9AAE09A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeGltfInstance_tD0A11D889A6319962208144B89CAA3AA055660DD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m25A39BA9400C61A22CA33A8F59124DD53C929506_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_resource));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 25726));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniGLTF + 25727));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 25728));
		// _resources.Add((SubAssetKey.Create(resource), resource));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 25729));
		List_1_t491E3856BE98663F8A31500DDE5FC3079B04D54C* L_0 = (List_1_t491E3856BE98663F8A31500DDE5FC3079B04D54C*)__this->____resources_6;
		RuntimeObject* L_1 = ___0_resource;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 25730));
		il2cpp_codegen_runtime_class_init_inline(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var);
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_2;
		L_2 = InvokerFuncInvoker1< SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 25730));
		RuntimeObject* L_3 = ___0_resource;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 25731));
		ValueTuple_2_t31AC097C4531D2F1E7EEC96FE50B3EF8F84974A1 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ValueTuple_2__ctor_m25A39BA9400C61A22CA33A8F59124DD53C929506((&L_4), L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_3, /*hidden argument*/ValueTuple_2__ctor_m25A39BA9400C61A22CA33A8F59124DD53C929506_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 25731));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 25732));
		NullCheck(L_0);
		List_1_Add_mFDD0FD971CC69FE207D61BEBCA543491A9AAE09A_inline(L_0, L_4, List_1_Add_mFDD0FD971CC69FE207D61BEBCA543491A9AAE09A_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 25732));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 25733));
		return;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisIl2CppFullySharedGenericAny_m36C68BC159395DAE262FAD5EEFC56958D5BCD40C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Threading.Tasks.Task`1<T> VRMShaders.RuntimeOnlyAwaitCaller::Run<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* RuntimeOnlyAwaitCaller_Run_TisIl2CppFullySharedGenericAny_m30BA0C1AFF5BEF5736C2FA9AE2239E7F64E7951F_gshared (RuntimeOnlyAwaitCaller_tCF2855FA690F71FF79CEEC5FB5799E4FE247C455* __this, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___0_action, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeOnlyAwaitCaller_tCF2855FA690F71FF79CEEC5FB5799E4FE247C455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_action));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 230));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 231));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 232));
		// return Task.Run(action);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 233));
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_0 = ___0_action;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 234));
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_1;
		L_1 = InvokerFuncInvoker1< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 234));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 235));
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2 = V_0;
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<T> VRMShaders.RuntimeOnlyNoThreadAwaitCaller::Run<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* RuntimeOnlyNoThreadAwaitCaller_Run_TisIl2CppFullySharedGenericAny_m5CF62EE9E587E828BB94FE5FB330DD7215E0D4FD_gshared (RuntimeOnlyNoThreadAwaitCaller_t2C6536780914579F61D718A5F72FC0C212576421* __this, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___0_action, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeOnlyNoThreadAwaitCaller_t2C6536780914579F61D718A5F72FC0C212576421_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// T
	// sizeof(T)
	const uint32_t SizeOf_T_t4919EEA1A2F327D119E4A7C3DBBF4358FF4ED914 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t4919EEA1A2F327D119E4A7C3DBBF4358FF4ED914);
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_0 = NULL;
	Exception_t* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_action));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 304));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 305));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 306));
	}
	try
	{// begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 307));
		// return Task.FromResult(action());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 308));
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_0 = ___0_action;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 309));
		NullCheck(L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0, (Il2CppFullySharedGenericAny*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 309));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 310));
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2;
		L_2 = InvokerFuncInvoker1< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_1: *(void**)L_1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 310));
		V_0 = L_2;
		goto IL_001b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{// begin catch(System.Exception)
		STORE_TRY_ID(methodExecutionContext, -1);
		// catch (Exception ex)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 311));
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 312));
		// return Task.FromException<T>(ex);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 313));
		Exception_t* L_3 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 314));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var)));
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4;
		L_4 = InvokerFuncInvoker1< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 314));
		V_0 = L_4;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001b;
	}// end catch (depth: 1)

IL_001b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 315));
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_5 = V_0;
		return L_5;
	}
}
// System.Object System.Reflection.RuntimePropertyInfo::GetterAdapterFrame<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Reflection.RuntimePropertyInfo/Getter`2<T,R>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimePropertyInfo_GetterAdapterFrame_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mF0611EDC41DA8F4F03BD135DCF20E262EA42D3E3_gshared (Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* ___0_getter, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// T
	// sizeof(T)
	const uint32_t SizeOf_T_tB9C622C2276378AE187F973C01294BCFE46CCAD2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tB9C622C2276378AE187F973C01294BCFE46CCAD2);
	// R
	// sizeof(R)
	const uint32_t SizeOf_R_t57047839DA9E6A4467E590A6122C95EDC2E901A0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_R_t57047839DA9E6A4467E590A6122C95EDC2E901A0);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* L_0 = ___0_getter;
		RuntimeObject* L_1 = ___1_obj;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->rgctx_data, 1), L_2);
		NullCheck(L_0);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)))), (Il2CppFullySharedGenericAny*)L_4);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), L_4);
		return L_5;
	}
}
// System.Object System.Reflection.RuntimePropertyInfo::StaticGetterAdapterFrame<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Reflection.RuntimePropertyInfo/StaticGetter`1<R>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimePropertyInfo_StaticGetterAdapterFrame_TisIl2CppFullySharedGenericAny_mE4B36707DB7E08FCD6D3A3799C958AB637E8AE64_gshared (StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302* ___0_getter, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// R
	// sizeof(R)
	const uint32_t SizeOf_R_t054D6BF792B1CE1FACA58B447C844553D06992DF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_R_t054D6BF792B1CE1FACA58B447C844553D06992DF);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302* L_0 = ___0_getter;
		NullCheck(L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0, (Il2CppFullySharedGenericAny*)L_1);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_1);
		return L_2;
	}
}
// System.Void UniGLTF.SafeMarshalCopy::CopyArrayToToBytes<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T[],System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeMarshalCopy_CopyArrayToToBytes_TisIl2CppFullySharedGenericStruct_mE7B5ABB436B65B35666C06B70C39E74A57E5031C_gshared (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_src, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___1_dst, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0* V_5 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_src), (&___1_dst));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24555));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniGLTF + 24556));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24557));
		// if (dst.Array == null || src == null || dst.Count == 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24558));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24559));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___1_dst), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24559));
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_1 = ___0_src;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24560));
		int32_t L_2;
		L_2 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___1_dst), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24560));
		G_B4_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
	}

IL_001a:
	{
		V_1 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24561));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24562));
		// throw new System.ArgumentNullException();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24563));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24564));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24564));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SafeMarshalCopy_CopyArrayToToBytes_TisIl2CppFullySharedGenericStruct_mE7B5ABB436B65B35666C06B70C39E74A57E5031C_RuntimeMethod_var)));
	}

IL_0025:
	{
		// if (dst.Offset < 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24565));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24566));
		int32_t L_5;
		L_5 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___1_dst), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24566));
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24567));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24568));
		// throw new System.AccessViolationException("CopyArrayToToBytes: ArraySegment: negative offset");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24569));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24570));
		AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190* L_7 = (AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		AccessViolationException__ctor_mC7C8A804506B189383531FC1E1BACE8967D31F67(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD985867DB1AE2EA38AD3ABEEDC9015E23E27B399)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24570));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SafeMarshalCopy_CopyArrayToToBytes_TisIl2CppFullySharedGenericStruct_mE7B5ABB436B65B35666C06B70C39E74A57E5031C_RuntimeMethod_var)));
	}

IL_003f:
	{
		// if (dst.Offset + dst.Count > dst.Array.Length)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24571));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24572));
		int32_t L_8;
		L_8 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___1_dst), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24572));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24573));
		int32_t L_9;
		L_9 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___1_dst), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24573));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24574));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___1_dst), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24574));
		NullCheck(L_10);
		V_3 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_8, L_9))) > ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24575));
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24576));
		// throw new System.AccessViolationException("CopyArrayToToBytes: ArraySegment: exceed");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24577));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24578));
		AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190* L_12 = (AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		AccessViolationException__ctor_mC7C8A804506B189383531FC1E1BACE8967D31F67(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral600D30633EB082AEF57145338A6373C4D63BA876)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24578));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SafeMarshalCopy_CopyArrayToToBytes_TisIl2CppFullySharedGenericStruct_mE7B5ABB436B65B35666C06B70C39E74A57E5031C_RuntimeMethod_var)));
	}

IL_0069:
	{
		// var srcByteSize = src.Length * Marshal.SizeOf(typeof(T));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24579));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_13 = ___0_src;
		NullCheck(L_13);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24580));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24580));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24581));
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_16;
		L_16 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24581));
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_16));
		// if (srcByteSize > dst.Count)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24582));
		int32_t L_17 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24583));
		int32_t L_18;
		L_18 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___1_dst), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24583));
		V_4 = (bool)((((int32_t)L_17) > ((int32_t)L_18))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24584));
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_0099;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24585));
		// throw new System.AccessViolationException("CopyArrayToToBytes: src > dst");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24586));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24587));
		AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190* L_20 = (AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		AccessViolationException__ctor_mC7C8A804506B189383531FC1E1BACE8967D31F67(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC69A18A122625D298FE3C7CFABFE409C09A66AE)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24587));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SafeMarshalCopy_CopyArrayToToBytes_TisIl2CppFullySharedGenericStruct_mE7B5ABB436B65B35666C06B70C39E74A57E5031C_RuntimeMethod_var)));
	}

IL_0099:
	{
		// using (var pin = Pin.Create(src))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24588));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_21 = ___0_src;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24589));
		Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0* L_22;
		L_22 = InvokerFuncInvoker1< Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0*, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_21);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24589));
		V_5 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c1:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24597));
					Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0* L_23 = V_5;
					if (!L_23)
					{
						goto IL_00cd;
					}
				}
				{
					Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0* L_24 = V_5;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24598));
					NullCheck((RuntimeObject*)L_24);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_24);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24598));
				}

IL_00cd:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24599));
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24590));
			// Marshal.Copy(pin.Ptr, dst.Array, dst.Offset, srcByteSize);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24591));
			Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0* L_25 = V_5;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24592));
			NullCheck(L_25);
			intptr_t L_26;
			L_26 = InvokerFuncInvoker0< intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_25);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24592));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24593));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
			L_27 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___1_dst), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24593));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24594));
			int32_t L_28;
			L_28 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___1_dst), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24594));
			int32_t L_29 = V_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24595));
			il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
			Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_26, L_27, L_28, L_29, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24595));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24596));
			goto IL_00ce;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ce:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24600));
		return;
	}
}
// System.Void UniGLTF.SafeMarshalCopy::CopyBytesToArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.ArraySegment`1<System.Byte>,T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeMarshalCopy_CopyBytesToArray_TisIl2CppFullySharedGenericStruct_m3D7D27C6CC60365C0C96A223BAC7C28E3D6D38AD_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_src, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___1_dst, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0* V_5 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_src), (&___1_dst));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24508));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniGLTF + 24509));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24510));
		// if (src.Array == null || dst == null || src.Count == 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24511));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24512));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___0_src), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24512));
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_1 = ___1_dst;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24513));
		int32_t L_2;
		L_2 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___0_src), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24513));
		G_B4_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
	}

IL_001a:
	{
		V_1 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24514));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24515));
		// throw new System.ArgumentNullException();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24516));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24517));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24517));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SafeMarshalCopy_CopyBytesToArray_TisIl2CppFullySharedGenericStruct_m3D7D27C6CC60365C0C96A223BAC7C28E3D6D38AD_RuntimeMethod_var)));
	}

IL_0025:
	{
		// if (src.Offset < 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24518));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24519));
		int32_t L_5;
		L_5 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___0_src), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24519));
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24520));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24521));
		// throw new System.AccessViolationException("CopyBytesToArray: ArraySegment: negative offset");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24522));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24523));
		AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190* L_7 = (AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		AccessViolationException__ctor_mC7C8A804506B189383531FC1E1BACE8967D31F67(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67D35A10B5C82CF47B3ECDE5B71D1402662B746D)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24523));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SafeMarshalCopy_CopyBytesToArray_TisIl2CppFullySharedGenericStruct_m3D7D27C6CC60365C0C96A223BAC7C28E3D6D38AD_RuntimeMethod_var)));
	}

IL_003f:
	{
		// if ((src.Offset + src.Count) > src.Array.Length)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24524));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24525));
		int32_t L_8;
		L_8 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___0_src), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24525));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24526));
		int32_t L_9;
		L_9 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___0_src), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24526));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24527));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___0_src), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24527));
		NullCheck(L_10);
		V_3 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_8, L_9))) > ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24528));
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24529));
		// throw new System.AccessViolationException("CopyBytesToArray: ArraySegment: exceed");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24530));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24531));
		AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190* L_12 = (AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		AccessViolationException__ctor_mC7C8A804506B189383531FC1E1BACE8967D31F67(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE20F5C68116748DD598D9E2EB1ECA7BE49E33C92)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24531));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SafeMarshalCopy_CopyBytesToArray_TisIl2CppFullySharedGenericStruct_m3D7D27C6CC60365C0C96A223BAC7C28E3D6D38AD_RuntimeMethod_var)));
	}

IL_0069:
	{
		// var dstByteSize = dst.Length * Marshal.SizeOf(typeof(T));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24532));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_13 = ___1_dst;
		NullCheck(L_13);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24533));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24533));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24534));
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_16;
		L_16 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24534));
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_16));
		// if (src.Count > dstByteSize)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24535));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24536));
		int32_t L_17;
		L_17 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___0_src), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24536));
		int32_t L_18 = V_0;
		V_4 = (bool)((((int32_t)L_17) > ((int32_t)L_18))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24537));
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_0099;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24538));
		// throw new System.AccessViolationException("CopyBytesToArray: src > dst");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24539));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24540));
		AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190* L_20 = (AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		AccessViolationException__ctor_mC7C8A804506B189383531FC1E1BACE8967D31F67(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral845A5580D4FF36A92111CBD6F53DACEDA23BA32F)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24540));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SafeMarshalCopy_CopyBytesToArray_TisIl2CppFullySharedGenericStruct_m3D7D27C6CC60365C0C96A223BAC7C28E3D6D38AD_RuntimeMethod_var)));
	}

IL_0099:
	{
		// using (var pin = Pin.Create(dst))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24541));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_21 = ___1_dst;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24542));
		Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0* L_22;
		L_22 = InvokerFuncInvoker1< Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0*, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_21);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24542));
		V_5 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c7:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24551));
					Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0* L_23 = V_5;
					if (!L_23)
					{
						goto IL_00d3;
					}
				}
				{
					Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0* L_24 = V_5;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24552));
					NullCheck((RuntimeObject*)L_24);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_24);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24552));
				}

IL_00d3:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24553));
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24543));
			// Marshal.Copy(src.Array, src.Offset, pin.Ptr, src.Count);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24544));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24545));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
			L_25 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___0_src), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24545));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24546));
			int32_t L_26;
			L_26 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___0_src), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24546));
			Pin_1_tE7A4CAF990F9CB15445E06FDC1F0A81698B955F0* L_27 = V_5;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24547));
			NullCheck(L_27);
			intptr_t L_28;
			L_28 = InvokerFuncInvoker0< intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_27);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24547));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24548));
			int32_t L_29;
			L_29 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___0_src), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24548));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24549));
			il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
			Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_25, L_26, L_28, L_29, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24549));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24550));
			goto IL_00d4;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d4:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 24554));
		return;
	}
}
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5696));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5697));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5698));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5699));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5700));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5700));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5701));
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5701));
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0018;
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5702));
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetClass<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetClass_TisRuntimeObject_m0AB9B5D3D06FCB75E487FA73ADF780D2A90F22DC_gshared (RuntimeObject** ___0_currentValue, RuntimeObject* ___1_newValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_currentValue), (&___1_newValue));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17506));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17507));
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17508));
		// if ((currentValue == null && newValue == null) || (currentValue != null && currentValue.Equals(newValue)))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17509));
		RuntimeObject** L_0 = ___0_currentValue;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_2 = ___1_newValue;
		if (!L_2)
		{
			goto IL_003a;
		}
	}

IL_0016:
	{
		RuntimeObject** L_3 = ___0_currentValue;
		RuntimeObject* L_4 = (*(RuntimeObject**)L_3);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject** L_5 = ___0_currentValue;
		RuntimeObject* L_6 = ___1_newValue;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17510));
		NullCheck((*L_5));
		bool L_7;
		L_7 = VirtualFuncInvoker1Invoker< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (*L_5), L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17510));
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0038;
	}

IL_0037:
	{
		G_B5_0 = 0;
	}

IL_0038:
	{
		G_B7_0 = G_B5_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B7_0 = 1;
	}

IL_003b:
	{
		V_0 = (bool)G_B7_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17511));
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17512));
		V_1 = (bool)0;
		goto IL_004e;
	}

IL_0043:
	{
		// currentValue = newValue;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17513));
		RuntimeObject** L_9 = ___0_currentValue;
		RuntimeObject* L_10 = ___1_newValue;
		*(RuntimeObject**)L_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)L_10);
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17514));
		V_1 = (bool)1;
		goto IL_004e;
	}

IL_004e:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17515));
		bool L_11 = V_1;
		return L_11;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisIl2CppFullySharedGenericStruct_m53D5867BC66A8AE3BF6ED2A7515C83C8EA8DB375_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___0_currentValue, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___1_newValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// T
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740);
	const Il2CppFullySharedGenericStruct L_7 = L_2;
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740);
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_currentValue), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___1_newValue : &___1_newValue));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17495));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17496));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17497));
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17498));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17499));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_0;
		L_0 = InvokerFuncInvoker0< EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17499));
		Il2CppFullySharedGenericStruct* L_1 = ___0_currentValue;
		il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740);
		il2cpp_codegen_memcpy(L_3, ___1_newValue, SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17500));
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Equals(T,T) */, L_0, L_2, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17500));
		V_0 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17501));
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17502));
		V_1 = (bool)0;
		goto IL_0025;
	}

IL_001a:
	{
		// currentValue = newValue;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17503));
		Il2CppFullySharedGenericStruct* L_6 = ___0_currentValue;
		il2cpp_codegen_memcpy(L_7, ___1_newValue, SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_6, L_7, SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericStruct*)L_6, (void*)L_7);
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17504));
		V_1 = (bool)1;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 17505));
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Int32 System.SpanHelpers::IndexOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisIl2CppFullySharedGenericAny_m28DDF4475C9EA0E0C80C0C9A0E6D96CCC3609FB4_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_searchSpace, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_13 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_27 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_34 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_41 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_48 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_55 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_66 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_73 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_80 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_87 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_95 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	// T
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
	const Il2CppFullySharedGenericAny L_12 = L_5;
	const Il2CppFullySharedGenericAny L_19 = L_5;
	const Il2CppFullySharedGenericAny L_26 = L_5;
	const Il2CppFullySharedGenericAny L_33 = L_5;
	const Il2CppFullySharedGenericAny L_40 = L_5;
	const Il2CppFullySharedGenericAny L_47 = L_5;
	const Il2CppFullySharedGenericAny L_54 = L_5;
	const Il2CppFullySharedGenericAny L_65 = L_5;
	const Il2CppFullySharedGenericAny L_72 = L_5;
	const Il2CppFullySharedGenericAny L_79 = L_5;
	const Il2CppFullySharedGenericAny L_86 = L_5;
	const Il2CppFullySharedGenericAny L_94 = L_5;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		CHECK_PAUSE_POINT;
		int32_t L_1 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		Il2CppFullySharedGenericAny* L_2 = ___0_searchSpace;
		intptr_t L_3 = V_0;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_2, L_3);
		il2cpp_codegen_memcpy(L_5, L_4, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_7;
		L_7 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_6, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_5: *(void**)L_5));
		if (L_7)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_8 = ___0_searchSpace;
		intptr_t L_9 = V_0;
		intptr_t L_10;
		L_10 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_9, 1, NULL);
		Il2CppFullySharedGenericAny* L_11;
		L_11 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_8, L_10);
		il2cpp_codegen_memcpy(L_12, L_11, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_14;
		L_14 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_13, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_12: *(void**)L_12));
		if (L_14)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_15 = ___0_searchSpace;
		intptr_t L_16 = V_0;
		intptr_t L_17;
		L_17 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_16, 2, NULL);
		Il2CppFullySharedGenericAny* L_18;
		L_18 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_15, L_17);
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_21;
		L_21 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_20, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_19: *(void**)L_19));
		if (L_21)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_22 = ___0_searchSpace;
		intptr_t L_23 = V_0;
		intptr_t L_24;
		L_24 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_23, 3, NULL);
		Il2CppFullySharedGenericAny* L_25;
		L_25 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_22, L_24);
		il2cpp_codegen_memcpy(L_26, L_25, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_28;
		L_28 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_27, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_26: *(void**)L_26));
		if (L_28)
		{
			goto IL_0226;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_29 = ___0_searchSpace;
		intptr_t L_30 = V_0;
		intptr_t L_31;
		L_31 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_30, 4, NULL);
		Il2CppFullySharedGenericAny* L_32;
		L_32 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_29, L_31);
		il2cpp_codegen_memcpy(L_33, L_32, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_35;
		L_35 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_34, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_33: *(void**)L_33));
		if (L_35)
		{
			goto IL_0234;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_36 = ___0_searchSpace;
		intptr_t L_37 = V_0;
		intptr_t L_38;
		L_38 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_37, 5, NULL);
		Il2CppFullySharedGenericAny* L_39;
		L_39 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_36, L_38);
		il2cpp_codegen_memcpy(L_40, L_39, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_42;
		L_42 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_41, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_40: *(void**)L_40));
		if (L_42)
		{
			goto IL_0242;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_43 = ___0_searchSpace;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 6, NULL);
		Il2CppFullySharedGenericAny* L_46;
		L_46 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_43, L_45);
		il2cpp_codegen_memcpy(L_47, L_46, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_49;
		L_49 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_48, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_47: *(void**)L_47));
		if (L_49)
		{
			goto IL_0250;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_50 = ___0_searchSpace;
		intptr_t L_51 = V_0;
		intptr_t L_52;
		L_52 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_51, 7, NULL);
		Il2CppFullySharedGenericAny* L_53;
		L_53 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_50, L_52);
		il2cpp_codegen_memcpy(L_54, L_53, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_56;
		L_56 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_55, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_54: *(void**)L_54));
		if (L_56)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_57 = V_0;
		intptr_t L_58;
		L_58 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_57, 8, NULL);
		V_0 = L_58;
	}

IL_0133:
	{
		int32_t L_59 = ___2_length;
		if ((((int32_t)L_59) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_60 = ___2_length;
		if ((((int32_t)L_60) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_61 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_61, 4));
		Il2CppFullySharedGenericAny* L_62 = ___0_searchSpace;
		intptr_t L_63 = V_0;
		Il2CppFullySharedGenericAny* L_64;
		L_64 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_62, L_63);
		il2cpp_codegen_memcpy(L_65, L_64, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_67;
		L_67 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_66, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_65: *(void**)L_65));
		if (L_67)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_68 = ___0_searchSpace;
		intptr_t L_69 = V_0;
		intptr_t L_70;
		L_70 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_69, 1, NULL);
		Il2CppFullySharedGenericAny* L_71;
		L_71 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_68, L_70);
		il2cpp_codegen_memcpy(L_72, L_71, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_74;
		L_74 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_73, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_72: *(void**)L_72));
		if (L_74)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_75 = ___0_searchSpace;
		intptr_t L_76 = V_0;
		intptr_t L_77;
		L_77 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_76, 2, NULL);
		Il2CppFullySharedGenericAny* L_78;
		L_78 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_75, L_77);
		il2cpp_codegen_memcpy(L_79, L_78, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_81;
		L_81 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_80, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_79: *(void**)L_79));
		if (L_81)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_82 = ___0_searchSpace;
		intptr_t L_83 = V_0;
		intptr_t L_84;
		L_84 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_83, 3, NULL);
		Il2CppFullySharedGenericAny* L_85;
		L_85 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_82, L_84);
		il2cpp_codegen_memcpy(L_86, L_85, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_88;
		L_88 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_87, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_86: *(void**)L_86));
		if (L_88)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_89 = V_0;
		intptr_t L_90;
		L_90 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_89, 4, NULL);
		V_0 = L_90;
		goto IL_01fc;
	}

IL_01d4:
	{
		CHECK_PAUSE_POINT;
		Il2CppFullySharedGenericAny* L_91 = ___0_searchSpace;
		intptr_t L_92 = V_0;
		Il2CppFullySharedGenericAny* L_93;
		L_93 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_91, L_92);
		il2cpp_codegen_memcpy(L_94, L_93, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_96;
		L_96 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_95, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_94: *(void**)L_94));
		if (L_96)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_97 = V_0;
		intptr_t L_98;
		L_98 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_97, 1, NULL);
		V_0 = L_98;
		int32_t L_99 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
	}

IL_01fc:
	{
		int32_t L_100 = ___2_length;
		if ((((int32_t)L_100) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_101 = V_0;
		void* L_102;
		L_102 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_101, NULL);
		return ((int32_t)(intptr_t)L_102);
	}

IL_020a:
	{
		intptr_t L_103 = V_0;
		intptr_t L_104;
		L_104 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_103, 1, NULL);
		void* L_105;
		L_105 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_104, NULL);
		return ((int32_t)(intptr_t)L_105);
	}

IL_0218:
	{
		intptr_t L_106 = V_0;
		intptr_t L_107;
		L_107 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_106, 2, NULL);
		void* L_108;
		L_108 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_107, NULL);
		return ((int32_t)(intptr_t)L_108);
	}

IL_0226:
	{
		intptr_t L_109 = V_0;
		intptr_t L_110;
		L_110 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_109, 3, NULL);
		void* L_111;
		L_111 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_110, NULL);
		return ((int32_t)(intptr_t)L_111);
	}

IL_0234:
	{
		intptr_t L_112 = V_0;
		intptr_t L_113;
		L_113 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_112, 4, NULL);
		void* L_114;
		L_114 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_113, NULL);
		return ((int32_t)(intptr_t)L_114);
	}

IL_0242:
	{
		intptr_t L_115 = V_0;
		intptr_t L_116;
		L_116 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_115, 5, NULL);
		void* L_117;
		L_117 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_116, NULL);
		return ((int32_t)(intptr_t)L_117);
	}

IL_0250:
	{
		intptr_t L_118 = V_0;
		intptr_t L_119;
		L_119 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_118, 6, NULL);
		void* L_120;
		L_120 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_119, NULL);
		return ((int32_t)(intptr_t)L_120);
	}

IL_025e:
	{
		intptr_t L_121 = V_0;
		intptr_t L_122;
		L_122 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_121, 7, NULL);
		void* L_123;
		L_123 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_122, NULL);
		return ((int32_t)(intptr_t)L_123);
	}
}
// System.Int32 System.SpanHelpers::IndexOfAny<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.Int32,T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOfAny_TisIl2CppFullySharedGenericAny_mD777B4B83B2CBE31F541334C63B38FCAD99CBF5B_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_searchSpace, int32_t ___1_searchSpaceLength, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___2_value, int32_t ___3_valueLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tDED3980AE4777FA42EBCF91BE5CEA41BAFB51B4B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tDED3980AE4777FA42EBCF91BE5CEA41BAFB51B4B);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___3_valueLength;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		CHECK_PAUSE_POINT;
		Il2CppFullySharedGenericAny* L_1 = ___0_searchSpace;
		Il2CppFullySharedGenericAny* L_2 = ___2_value;
		int32_t L_3 = V_1;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_2, L_3);
		il2cpp_codegen_memcpy(L_5, L_4, SizeOf_T_tDED3980AE4777FA42EBCF91BE5CEA41BAFB51B4B);
		int32_t L_6 = ___1_searchSpaceLength;
		int32_t L_7;
		L_7 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6);
		V_2 = L_7;
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_10 = V_2;
		V_0 = L_10;
		int32_t L_11 = V_2;
		___1_searchSpaceLength = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0033;
		}
	}

IL_002b:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_002f:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___3_valueLength;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}

IL_0033:
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.Boolean System.SpanHelpers::SequenceEqual<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisIl2CppFullySharedGenericAny_mEB89EB892E7BFDB9AB968DFE0A5FEF3AAAE1E424_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_first, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_second, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_23 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_34 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_45 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_56 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_67 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_78 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_89 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_103 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_114 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_125 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_136 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_147 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	// T
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
	const Il2CppFullySharedGenericAny L_22 = L_11;
	const Il2CppFullySharedGenericAny L_33 = L_11;
	const Il2CppFullySharedGenericAny L_44 = L_11;
	const Il2CppFullySharedGenericAny L_55 = L_11;
	const Il2CppFullySharedGenericAny L_66 = L_11;
	const Il2CppFullySharedGenericAny L_77 = L_11;
	const Il2CppFullySharedGenericAny L_88 = L_11;
	const Il2CppFullySharedGenericAny L_102 = L_11;
	const Il2CppFullySharedGenericAny L_113 = L_11;
	const Il2CppFullySharedGenericAny L_124 = L_11;
	const Il2CppFullySharedGenericAny L_135 = L_11;
	const Il2CppFullySharedGenericAny L_146 = L_11;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_first;
		Il2CppFullySharedGenericAny* L_1 = ___1_second;
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		if (L_2)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_3;
		goto IL_0191;
	}

IL_0018:
	{
		CHECK_PAUSE_POINT;
		int32_t L_4 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_4, 8));
		Il2CppFullySharedGenericAny* L_5 = ___0_first;
		intptr_t L_6 = V_0;
		Il2CppFullySharedGenericAny* L_7;
		L_7 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_5, L_6);
		Il2CppFullySharedGenericAny* L_8 = ___1_second;
		intptr_t L_9 = V_0;
		Il2CppFullySharedGenericAny* L_10;
		L_10 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_8, L_9);
		il2cpp_codegen_memcpy(L_11, L_10, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_13;
		L_13 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_12, (void*)L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_11: *(void**)L_11));
		if (!L_13)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_14 = ___0_first;
		intptr_t L_15 = V_0;
		intptr_t L_16;
		L_16 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_15, 1, NULL);
		Il2CppFullySharedGenericAny* L_17;
		L_17 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_14, L_16);
		Il2CppFullySharedGenericAny* L_18 = ___1_second;
		intptr_t L_19 = V_0;
		intptr_t L_20;
		L_20 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_19, 1, NULL);
		Il2CppFullySharedGenericAny* L_21;
		L_21 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_18, L_20);
		il2cpp_codegen_memcpy(L_22, L_21, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_24;
		L_24 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_23, (void*)L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_22: *(void**)L_22));
		if (!L_24)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_25 = ___0_first;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_26, 2, NULL);
		Il2CppFullySharedGenericAny* L_28;
		L_28 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_25, L_27);
		Il2CppFullySharedGenericAny* L_29 = ___1_second;
		intptr_t L_30 = V_0;
		intptr_t L_31;
		L_31 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_30, 2, NULL);
		Il2CppFullySharedGenericAny* L_32;
		L_32 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_29, L_31);
		il2cpp_codegen_memcpy(L_33, L_32, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_35;
		L_35 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_34, (void*)L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_33: *(void**)L_33));
		if (!L_35)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_36 = ___0_first;
		intptr_t L_37 = V_0;
		intptr_t L_38;
		L_38 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_37, 3, NULL);
		Il2CppFullySharedGenericAny* L_39;
		L_39 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_36, L_38);
		Il2CppFullySharedGenericAny* L_40 = ___1_second;
		intptr_t L_41 = V_0;
		intptr_t L_42;
		L_42 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_41, 3, NULL);
		Il2CppFullySharedGenericAny* L_43;
		L_43 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_40, L_42);
		il2cpp_codegen_memcpy(L_44, L_43, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_46;
		L_46 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_45, (void*)L_39, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_44: *(void**)L_44));
		if (!L_46)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_47 = ___0_first;
		intptr_t L_48 = V_0;
		intptr_t L_49;
		L_49 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_48, 4, NULL);
		Il2CppFullySharedGenericAny* L_50;
		L_50 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_47, L_49);
		Il2CppFullySharedGenericAny* L_51 = ___1_second;
		intptr_t L_52 = V_0;
		intptr_t L_53;
		L_53 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_52, 4, NULL);
		Il2CppFullySharedGenericAny* L_54;
		L_54 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_51, L_53);
		il2cpp_codegen_memcpy(L_55, L_54, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_57;
		L_57 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_56, (void*)L_50, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_55: *(void**)L_55));
		if (!L_57)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_58 = ___0_first;
		intptr_t L_59 = V_0;
		intptr_t L_60;
		L_60 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_59, 5, NULL);
		Il2CppFullySharedGenericAny* L_61;
		L_61 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_58, L_60);
		Il2CppFullySharedGenericAny* L_62 = ___1_second;
		intptr_t L_63 = V_0;
		intptr_t L_64;
		L_64 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_63, 5, NULL);
		Il2CppFullySharedGenericAny* L_65;
		L_65 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_62, L_64);
		il2cpp_codegen_memcpy(L_66, L_65, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_68;
		L_68 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_67, (void*)L_61, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_66: *(void**)L_66));
		if (!L_68)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_69 = ___0_first;
		intptr_t L_70 = V_0;
		intptr_t L_71;
		L_71 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_70, 6, NULL);
		Il2CppFullySharedGenericAny* L_72;
		L_72 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_69, L_71);
		Il2CppFullySharedGenericAny* L_73 = ___1_second;
		intptr_t L_74 = V_0;
		intptr_t L_75;
		L_75 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_74, 6, NULL);
		Il2CppFullySharedGenericAny* L_76;
		L_76 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_73, L_75);
		il2cpp_codegen_memcpy(L_77, L_76, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_79;
		L_79 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_78, (void*)L_72, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_77: *(void**)L_77));
		if (!L_79)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_80 = ___0_first;
		intptr_t L_81 = V_0;
		intptr_t L_82;
		L_82 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_81, 7, NULL);
		Il2CppFullySharedGenericAny* L_83;
		L_83 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_80, L_82);
		Il2CppFullySharedGenericAny* L_84 = ___1_second;
		intptr_t L_85 = V_0;
		intptr_t L_86;
		L_86 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_85, 7, NULL);
		Il2CppFullySharedGenericAny* L_87;
		L_87 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_84, L_86);
		il2cpp_codegen_memcpy(L_88, L_87, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_90;
		L_90 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_89, (void*)L_83, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_88: *(void**)L_88));
		if (!L_90)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_91 = V_0;
		intptr_t L_92;
		L_92 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_91, 8, NULL);
		V_0 = L_92;
	}

IL_0191:
	{
		int32_t L_93 = ___2_length;
		if ((((int32_t)L_93) >= ((int32_t)8)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_94 = ___2_length;
		if ((((int32_t)L_94) < ((int32_t)4)))
		{
			goto IL_0285;
		}
	}
	{
		int32_t L_95 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_95, 4));
		Il2CppFullySharedGenericAny* L_96 = ___0_first;
		intptr_t L_97 = V_0;
		Il2CppFullySharedGenericAny* L_98;
		L_98 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_96, L_97);
		Il2CppFullySharedGenericAny* L_99 = ___1_second;
		intptr_t L_100 = V_0;
		Il2CppFullySharedGenericAny* L_101;
		L_101 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_99, L_100);
		il2cpp_codegen_memcpy(L_102, L_101, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_104;
		L_104 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_103, (void*)L_98, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_102: *(void**)L_102));
		if (!L_104)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_105 = ___0_first;
		intptr_t L_106 = V_0;
		intptr_t L_107;
		L_107 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_106, 1, NULL);
		Il2CppFullySharedGenericAny* L_108;
		L_108 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_105, L_107);
		Il2CppFullySharedGenericAny* L_109 = ___1_second;
		intptr_t L_110 = V_0;
		intptr_t L_111;
		L_111 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_110, 1, NULL);
		Il2CppFullySharedGenericAny* L_112;
		L_112 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_109, L_111);
		il2cpp_codegen_memcpy(L_113, L_112, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_115;
		L_115 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_114, (void*)L_108, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_113: *(void**)L_113));
		if (!L_115)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_116 = ___0_first;
		intptr_t L_117 = V_0;
		intptr_t L_118;
		L_118 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_117, 2, NULL);
		Il2CppFullySharedGenericAny* L_119;
		L_119 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_116, L_118);
		Il2CppFullySharedGenericAny* L_120 = ___1_second;
		intptr_t L_121 = V_0;
		intptr_t L_122;
		L_122 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_121, 2, NULL);
		Il2CppFullySharedGenericAny* L_123;
		L_123 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_120, L_122);
		il2cpp_codegen_memcpy(L_124, L_123, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_126;
		L_126 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_125, (void*)L_119, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_124: *(void**)L_124));
		if (!L_126)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_127 = ___0_first;
		intptr_t L_128 = V_0;
		intptr_t L_129;
		L_129 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_128, 3, NULL);
		Il2CppFullySharedGenericAny* L_130;
		L_130 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_127, L_129);
		Il2CppFullySharedGenericAny* L_131 = ___1_second;
		intptr_t L_132 = V_0;
		intptr_t L_133;
		L_133 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_132, 3, NULL);
		Il2CppFullySharedGenericAny* L_134;
		L_134 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_131, L_133);
		il2cpp_codegen_memcpy(L_135, L_134, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_137;
		L_137 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_136, (void*)L_130, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_135: *(void**)L_135));
		if (!L_137)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_138 = V_0;
		intptr_t L_139;
		L_139 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_138, 4, NULL);
		V_0 = L_139;
		goto IL_0285;
	}

IL_0258:
	{
		CHECK_PAUSE_POINT;
		Il2CppFullySharedGenericAny* L_140 = ___0_first;
		intptr_t L_141 = V_0;
		Il2CppFullySharedGenericAny* L_142;
		L_142 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_140, L_141);
		Il2CppFullySharedGenericAny* L_143 = ___1_second;
		intptr_t L_144 = V_0;
		Il2CppFullySharedGenericAny* L_145;
		L_145 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_143, L_144);
		il2cpp_codegen_memcpy(L_146, L_145, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_148;
		L_148 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_147, (void*)L_142, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_146: *(void**)L_146));
		if (!L_148)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_149 = V_0;
		intptr_t L_150;
		L_150 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_149, 1, NULL);
		V_0 = L_150;
		int32_t L_151 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_151, 1));
	}

IL_0285:
	{
		int32_t L_152 = ___2_length;
		if ((((int32_t)L_152) > ((int32_t)0)))
		{
			goto IL_0258;
		}
	}

IL_0289:
	{
		return (bool)1;
	}

IL_028b:
	{
		return (bool)0;
	}
}
// System.String System.String::Create<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisIl2CppFullySharedGenericAny_m9AD9A2FD15EE0B25DC884BEF778D0D414364F9CA_gshared (int32_t ___0_length, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_state, SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* ___2_action, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TState)
	const uint32_t SizeOf_TState_tF86514A7FB385D80584CE625C93D41AE0EAEF433 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// TState
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TState_tF86514A7FB385D80584CE625C93D41AE0EAEF433);
	String_t* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* L_0 = ___2_action;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisIl2CppFullySharedGenericAny_m9AD9A2FD15EE0B25DC884BEF778D0D414364F9CA_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___0_length;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___0_length;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisIl2CppFullySharedGenericAny_m9AD9A2FD15EE0B25DC884BEF778D0D414364F9CA_RuntimeMethod_var)));
	}

IL_0026:
	{
		int32_t L_6 = ___0_length;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* L_8 = ___2_action;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___0_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, /*hidden argument*/Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_state : &___1_state), SizeOf_TState_tF86514A7FB385D80584CE625C93D41AE0EAEF433);
		NullCheck(L_8);
		InvokerActionInvoker2< Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_8, L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_13: *(void**)L_13));
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendSpanFormattable<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisIl2CppFullySharedGenericAny_mF50A5C2F631F6F4450B612A08A50CA5E6DC58AEC_gshared (StringBuilder_t* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_2;
		L_2 = ConstrainedFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), L_1, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_value : &___0_value), (String_t*)NULL, (RuntimeObject*)L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_2, NULL);
		return L_3;
	}
}
// TSource Newtonsoft.Json.Utilities.StringUtils::ForgivingCaseSensitiveFind<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringUtils_ForgivingCaseSensitiveFind_TisIl2CppFullySharedGenericAny_mD725EDE7F863EEED09CA1D0D2908772E8A2B6839_gshared (RuntimeObject* ___0_source, Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* ___1_valueSelector, String_t* ___2_testValue, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_t283C5FE5CDAB9497181BC268B30AA11D84A2DF53 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 10));
	// TSource
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_TSource_t283C5FE5CDAB9497181BC268B30AA11D84A2DF53);
	const Il2CppFullySharedGenericAny L_22 = L_17;
	U3CU3Ec__DisplayClass15_0_1_tC95F5E1730324ECF95F4CCD18BB4FA6DAF2A9373* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		U3CU3Ec__DisplayClass15_0_1_tC95F5E1730324ECF95F4CCD18BB4FA6DAF2A9373* L_0 = (U3CU3Ec__DisplayClass15_0_1_tC95F5E1730324ECF95F4CCD18BB4FA6DAF2A9373*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		V_0 = L_0;
		U3CU3Ec__DisplayClass15_0_1_tC95F5E1730324ECF95F4CCD18BB4FA6DAF2A9373* L_1 = V_0;
		Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* L_2 = ___1_valueSelector;
		NullCheck(L_1);
		L_1->___valueSelector_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___valueSelector_0), (void*)L_2);
		U3CU3Ec__DisplayClass15_0_1_tC95F5E1730324ECF95F4CCD18BB4FA6DAF2A9373* L_3 = V_0;
		String_t* L_4 = ___2_testValue;
		NullCheck(L_3);
		L_3->___testValue_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___testValue_1), (void*)L_4);
		RuntimeObject* L_5 = ___0_source;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtils_ForgivingCaseSensitiveFind_TisIl2CppFullySharedGenericAny_mD725EDE7F863EEED09CA1D0D2908772E8A2B6839_RuntimeMethod_var)));
	}

IL_0022:
	{
		U3CU3Ec__DisplayClass15_0_1_tC95F5E1730324ECF95F4CCD18BB4FA6DAF2A9373* L_7 = V_0;
		NullCheck(L_7);
		Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* L_8 = (Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C*)L_7->___valueSelector_0;
		if (L_8)
		{
			goto IL_0035;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2EAC54936C480056DBBB5B97FD1CFD1C79B1990)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtils_ForgivingCaseSensitiveFind_TisIl2CppFullySharedGenericAny_mD725EDE7F863EEED09CA1D0D2908772E8A2B6839_RuntimeMethod_var)));
	}

IL_0035:
	{
		RuntimeObject* L_10 = ___0_source;
		U3CU3Ec__DisplayClass15_0_1_tC95F5E1730324ECF95F4CCD18BB4FA6DAF2A9373* L_11 = V_0;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_12 = (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		NullCheck(L_12);
		InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_12, (RuntimeObject*)L_11, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 4)));
		RuntimeObject* L_13;
		L_13 = InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), NULL, L_10, L_12);
		V_1 = L_13;
		RuntimeObject* L_14 = V_1;
		int32_t L_15;
		L_15 = InvokerFuncInvoker1< int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), NULL, L_14);
		if ((((int32_t)L_15) > ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_16 = V_1;
		InvokerActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), NULL, L_16, (Il2CppFullySharedGenericAny*)L_17);
		il2cpp_codegen_memcpy(il2cppRetVal, L_17, SizeOf_TSource_t283C5FE5CDAB9497181BC268B30AA11D84A2DF53);
		return;
	}

IL_0058:
	{
		RuntimeObject* L_18 = ___0_source;
		U3CU3Ec__DisplayClass15_0_1_tC95F5E1730324ECF95F4CCD18BB4FA6DAF2A9373* L_19 = V_0;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_20 = (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		NullCheck(L_20);
		InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 11)));
		RuntimeObject* L_21;
		L_21 = InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), NULL, L_18, L_20);
		InvokerActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), NULL, L_21, (Il2CppFullySharedGenericAny*)L_22);
		il2cpp_codegen_memcpy(il2cppRetVal, L_22, SizeOf_TSource_t283C5FE5CDAB9497181BC268B30AA11D84A2DF53);
		return;
	}
}
// T UnityEngine.UIElements.StylePropertyAnimationSystem::GetOrCreate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylePropertyAnimationSystem_GetOrCreate_TisIl2CppFullySharedGenericAny_m6AF28A93C46556C2DD21CCE29F1DD629E9A9890F_gshared (StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_values, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	const Il2CppFullySharedGenericAny L_5 = L_1;
	const Il2CppFullySharedGenericAny L_8 = L_1;
	const Il2CppFullySharedGenericAny L_9 = L_1;
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	const Il2CppFullySharedGenericAny L_6 = L_2;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	memset(V_0, 0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	memset(V_1, 0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	memset(V_2, 0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_values));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10374));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10375));
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	memset(G_B3_0, 0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10376));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10377));
		Il2CppFullySharedGenericAny* L_0 = ___0_values;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 1), L_2);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_4 = ___0_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10378));
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (Il2CppFullySharedGenericAny*)L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10378));
		il2cpp_codegen_memcpy(L_6, L_5, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_4, L_6, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_4, (void*)L_6);
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy(G_B3_0, L_7, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		goto IL_0021;
	}

IL_0020:
	{
		il2cpp_codegen_memcpy(L_8, V_0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy(G_B3_0, L_8, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	}

IL_0021:
	{
		il2cpp_codegen_memcpy(V_2, G_B3_0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		goto IL_0024;
	}

IL_0024:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10379));
		il2cpp_codegen_memcpy(L_9, V_2, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.StylePropertyAnimationSystem::StartTransition<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.StyleSheets.StylePropertyId,T,T,System.Int32,System.Int32,System.Func`2<System.Single,System.Single>,UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyAnimationSystem_StartTransition_TisIl2CppFullySharedGenericAny_mE706D3C8BDC81F443721E91FB0FC9F22123F88A7_gshared (StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_startValue, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_endValue, int32_t ___4_durationMs, int32_t ___5_delayMs, Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___6_easingCurve, Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* ___7_values, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE2CB2DBE9CFA9FD3FF4707BB20A9B1FE52C76273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tADE7374A11CEF160DEB0F474A59D11D11DA19992 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tADE7374A11CEF160DEB0F474A59D11D11DA19992);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_tADE7374A11CEF160DEB0F474A59D11D11DA19992);
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_owner), (&___1_prop), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_startValue : &___2_startValue), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___3_endValue : &___3_endValue), (&___4_durationMs), (&___5_delayMs), (&___6_easingCurve), (&___7_values));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10380));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10381));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10382));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10383));
		Dictionary_2_t8B8AC3704119A64857E8D359CB4782C5ECEA90E7* L_0 = (Dictionary_2_t8B8AC3704119A64857E8D359CB4782C5ECEA90E7*)__this->___m_PropertyToValues_14;
		int32_t L_1 = ___1_prop;
		Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* L_2 = ___7_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10384));
		NullCheck(L_0);
		Dictionary_2_set_Item_mE2CB2DBE9CFA9FD3FF4707BB20A9B1FE52C76273(L_0, L_1, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)L_2, Dictionary_2_set_Item_mE2CB2DBE9CFA9FD3FF4707BB20A9B1FE52C76273_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10384));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10385));
		Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* L_3 = ___7_values;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = ___0_owner;
		int32_t L_5 = ___1_prop;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_startValue : &___2_startValue), SizeOf_T_tADE7374A11CEF160DEB0F474A59D11D11DA19992);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___3_endValue : &___3_endValue), SizeOf_T_tADE7374A11CEF160DEB0F474A59D11D11DA19992);
		int32_t L_8 = ___4_durationMs;
		int32_t L_9 = ___5_delayMs;
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_10 = ___6_easingCurve;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10386));
		int64_t L_11;
		L_11 = StylePropertyAnimationSystem_CurrentTimeMs_m3B079B6B759368132A67B8F2E6052A270A7A49B6(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10386));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10387));
		NullCheck(L_3);
		bool L_12;
		L_12 = InvokerFuncInvoker8< bool, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, int32_t, int32_t, Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2*, int64_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_3, L_4, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_7: *(void**)L_7), L_8, L_9, L_10, L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10387));
		V_0 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10388));
		Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* L_13 = ___7_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10389));
		InvokerActionInvoker1< Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), __this, L_13);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10389));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10390));
		bool L_14 = V_0;
		V_1 = L_14;
		goto IL_0036;
	}

IL_0036:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10391));
		bool L_15 = V_1;
		return L_15;
	}
}
// System.Void UnityEngine.UIElements.StylePropertyAnimationSystem::UpdateTracking<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylePropertyAnimationSystem_UpdateTracking_TisIl2CppFullySharedGenericAny_m5B0E6C7002E704D5BFBBD5A22E5E70BE5528639A_gshared (StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718* __this, Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* ___0_values, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA2DB3B33B757C906EBF689F682FD659A191A242B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m71E6FD21D54996DACBC26526FABF5E57B9E4C3B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_values));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10554));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10555));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10556));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10557));
		Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* L_0 = ___0_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10558));
		NullCheck(L_0);
		bool L_1;
		L_1 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10558));
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		List_1_t491E344573B9D6F61E36AF56132B7412453928C9* L_2 = (List_1_t491E344573B9D6F61E36AF56132B7412453928C9*)__this->___m_AllValues_13;
		Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* L_3 = ___0_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10559));
		NullCheck(L_2);
		bool L_4;
		L_4 = List_1_Contains_m71E6FD21D54996DACBC26526FABF5E57B9E4C3B4(L_2, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)L_3, List_1_Contains_m71E6FD21D54996DACBC26526FABF5E57B9E4C3B4_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10559));
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10560));
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10561));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10562));
		List_1_t491E344573B9D6F61E36AF56132B7412453928C9* L_6 = (List_1_t491E344573B9D6F61E36AF56132B7412453928C9*)__this->___m_AllValues_13;
		Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* L_7 = ___0_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10563));
		NullCheck(L_6);
		List_1_Add_mA2DB3B33B757C906EBF689F682FD659A191A242B_inline(L_6, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)L_7, List_1_Add_mA2DB3B33B757C906EBF689F682FD659A191A242B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10563));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10564));
	}

IL_002e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 10565));
		return;
	}
}
// T UnityEngine.UIElements.StyleSheet::CheckAccess<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],UnityEngine.UIElements.StyleValueType,UnityEngine.UIElements.StyleValueHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSheet_CheckAccess_TisIl2CppFullySharedGenericAny_mBA423371D04B57AD1720BC6580B109722EF7085F_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_list, int32_t ___1_type, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___2_handle, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A452795E040C66D151B05EE8648BF3F8016F207);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC472776C9180B19630B6E4112538D935B62E3F35);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
	const Il2CppFullySharedGenericAny L_24 = L_23;
	const Il2CppFullySharedGenericAny L_25 = L_23;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
	memset(V_0, 0, SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
	bool V_1 = false;
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
	memset(V_3, 0, SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list), (&___1_type), (&___2_handle));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43211));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43212));
	int32_t G_B6_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43213));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43214));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43215));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43216));
		int32_t L_0;
		L_0 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9((&___2_handle), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43216));
		int32_t L_1 = ___1_type;
		V_1 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43217));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43218));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43219));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ___1_type;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43220));
		int32_t L_9;
		L_9 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9((&___2_handle), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43220));
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_11);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43221));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral0A452795E040C66D151B05EE8648BF3F8016F207, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43221));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43222));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43223));
		goto IL_0086;
	}

IL_0047:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43224));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_list;
		if (!L_12)
		{
			goto IL_0063;
		}
	}
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_13 = ___2_handle;
		int32_t L_14 = (int32_t)L_13.___valueIndex_1;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_15 = ___2_handle;
		int32_t L_16 = (int32_t)L_15.___valueIndex_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_list;
		NullCheck(L_17);
		G_B6_0 = ((((int32_t)((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0064;
	}

IL_0063:
	{
		G_B6_0 = 1;
	}

IL_0064:
	{
		V_2 = (bool)G_B6_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43225));
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_0077;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43226));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43227));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43228));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)_stringLiteralC472776C9180B19630B6E4112538D935B62E3F35, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43228));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43229));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43230));
		goto IL_0086;
	}

IL_0077:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43231));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43232));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = ___0_list;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_20 = ___2_handle;
		int32_t L_21 = (int32_t)L_20.___valueIndex_1;
		NullCheck(L_19);
		int32_t L_22 = L_21;
		il2cpp_codegen_memcpy(L_23, (L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)), SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
		il2cpp_codegen_memcpy(V_0, L_23, SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43233));
	}

IL_0086:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43234));
		il2cpp_codegen_memcpy(L_24, V_0, SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
		il2cpp_codegen_memcpy(V_3, L_24, SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
		goto IL_008a;
	}

IL_008a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43235));
		il2cpp_codegen_memcpy(L_25, V_3, SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
		il2cpp_codegen_memcpy(il2cppRetVal, L_25, SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheet::TryCheckAccess<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],UnityEngine.UIElements.StyleValueType,UnityEngine.UIElements.StyleValueHandle,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleSheet_TryCheckAccess_TisIl2CppFullySharedGenericAny_m5DD0A68A50BC2755CD75F8326B5D0B171EF37887_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_list, int32_t ___1_type, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___2_handle, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A452795E040C66D151B05EE8648BF3F8016F207);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t820A41803813CA66AC749F0AB944116F7E1DE5CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t820A41803813CA66AC749F0AB944116F7E1DE5CE);
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list), (&___1_type), (&___2_handle), (&___3_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43191));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43192));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43193));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43194));
		V_0 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43195));
		Il2CppFullySharedGenericAny* L_0 = ___3_value;
		il2cpp_codegen_initobj(L_0, SizeOf_T_t820A41803813CA66AC749F0AB944116F7E1DE5CE);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43196));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43197));
		int32_t L_1;
		L_1 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9((&___2_handle), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43197));
		int32_t L_2 = ___1_type;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_002a;
		}
	}
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_3 = ___2_handle;
		int32_t L_4 = (int32_t)L_3.___valueIndex_1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_5 = ___2_handle;
		int32_t L_6 = (int32_t)L_5.___valueIndex_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = ___0_list;
		NullCheck(L_7);
		G_B4_0 = ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 0;
	}

IL_002b:
	{
		V_1 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43198));
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43199));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43200));
		Il2CppFullySharedGenericAny* L_9 = ___3_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_list;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_11 = ___2_handle;
		int32_t L_12 = (int32_t)L_11.___valueIndex_1;
		NullCheck(L_10);
		int32_t L_13 = L_12;
		il2cpp_codegen_memcpy(L_14, (L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), SizeOf_T_t820A41803813CA66AC749F0AB944116F7E1DE5CE);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_9, L_14, SizeOf_T_t820A41803813CA66AC749F0AB944116F7E1DE5CE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_9, (void*)L_14);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43201));
		V_0 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43202));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43203));
		goto IL_0072;
	}

IL_0047:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43204));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43205));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		int32_t L_17 = ___1_type;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_16;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43206));
		int32_t L_21;
		L_21 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9((&___2_handle), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43206));
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_23);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43207));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral0A452795E040C66D151B05EE8648BF3F8016F207, L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43207));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43208));
	}

IL_0072:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43209));
		bool L_24 = V_0;
		V_2 = L_24;
		goto IL_0076;
	}

IL_0076:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 43210));
		bool L_25 = V_2;
		return L_25;
	}
}
// System.Void UnityEngine.UIElements.StyleValueExtensions::CopyFrom<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.List`1<T>,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValueExtensions_CopyFrom_TisIl2CppFullySharedGenericAny_m525481C9A72EF25A9A936C5407EBE9E90DACFF77_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list), (&___1_other));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49564));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49565));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49566));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49567));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49568));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49568));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49569));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = ___0_list;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___1_other;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49570));
		NullCheck(L_1);
		InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (RuntimeObject*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49570));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49571));
		return;
	}
}
// System.String UnityEngine.UIElements.StyleValueExtensions::DebugString<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.IStyleValue`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StyleValueExtensions_DebugString_TisIl2CppFullySharedGenericAny_m32C5B0480E481BAF30480D44F79AC4F15A39FEF6_gshared (RuntimeObject* ___0_styleValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_rgctx_method_init(method);
	}
	// T
	// sizeof(T)
	const uint32_t SizeOf_T_tEA77DD9B0DBAE7651252AA93B6A0D8C50D6493F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tEA77DD9B0DBAE7651252AA93B6A0D8C50D6493F9);
	String_t* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_styleValue));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49453));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49454));
	String_t* G_B3_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49455));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49456));
		RuntimeObject* L_0 = ___0_styleValue;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49457));
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0Invoker< int32_t >::Invoke(1 /* UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.IStyleValue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_keyword() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49457));
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_2 = ___0_styleValue;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49458));
		NullCheck(L_2);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T UnityEngine.UIElements.IStyleValue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_value() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_2, (Il2CppFullySharedGenericAny*)L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49458));
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), L_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49459));
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49459));
		G_B3_0 = L_5;
		goto IL_0035;
	}

IL_0020:
	{
		RuntimeObject* L_6 = ___0_styleValue;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49460));
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0Invoker< int32_t >::Invoke(1 /* UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.IStyleValue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_keyword() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49460));
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705_il2cpp_TypeInfo_var, &L_8);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49461));
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49461));
		G_B3_0 = L_10;
	}

IL_0035:
	{
		V_0 = G_B3_0;
		goto IL_0038;
	}

IL_0038:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 49462));
		String_t* L_11 = V_0;
		return L_11;
	}
}
// VRMShaders.SubAssetKey VRMShaders.SubAssetKey::Create<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB SubAssetKey_Create_TisRuntimeObject_m4CF7E835B7293D1A602BBC7BF254F57AF687A467_gshared (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_obj));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 899));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 900));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 901));
		// return new SubAssetKey(typeof(T), obj.name);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 902));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 903));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 903));
		RuntimeObject* L_2 = ___0_obj;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 904));
		NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 904));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 905));
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_4;
		memset((&L_4), 0, sizeof(L_4));
		SubAssetKey__ctor_mC1E0487CAD08419F1FD93EBC2AFB612FA4AAC4D9((&L_4), L_1, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 905));
		V_0 = L_4;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_GLTF_IO_Runtime + 906));
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_5 = V_0;
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCanceled<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCanceled_TisIl2CppFullySharedGenericAny_m6FA2A9DC4ECF7A21441B961F86A94873F5C015C9_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = ___0_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_1;
		L_1 = InvokerFuncInvoker1< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0);
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCancellation_TisIl2CppFullySharedGenericAny_m8430FE61464A9242E9DFD47EA2551C8B3F5CD64F_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// TResult
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
	memset(V_0, 0, SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___0_cancellationToken), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisIl2CppFullySharedGenericAny_m8430FE61464A9242E9DFD47EA2551C8B3F5CD64F_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___0_cancellationToken;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		NullCheck(L_4);
		InvokerActionInvoker4< bool, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_4, (bool)1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_2: *(void**)L_2), (int32_t)0, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.OperationCanceledException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCancellation_TisIl2CppFullySharedGenericAny_m2223C6E6E1675E311C66C5695E2F0728BED068E5_gshared (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisIl2CppFullySharedGenericAny_m2223C6E6E1675E311C66C5695E2F0728BED068E5_RuntimeMethod_var)));
	}

IL_000e:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_2);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_2);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3 = L_2;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_4 = ___0_exception;
		NullCheck(L_4);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5;
		L_5 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_4, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3);
		bool L_7;
		L_7 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, L_5, (RuntimeObject*)L_6, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromException<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromException_TisIl2CppFullySharedGenericAny_m5424F2AE940D86E928CD58A721AA25BDAF2A7229_gshared (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromException_TisIl2CppFullySharedGenericAny_m5424F2AE940D86E928CD58A721AA25BDAF2A7229_RuntimeMethod_var)));
	}

IL_000e:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_2);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_2);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3 = L_2;
		Exception_t* L_4 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3);
		bool L_5;
		L_5 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, (RuntimeObject*)L_4, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromResult_TisIl2CppFullySharedGenericAny_m829FFC9F5B1DFAC382A3E6ABDED634066EADFB21_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t0BA7C9EB0581C5FFDCC03982969E83426BAAB98E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// TResult
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t0BA7C9EB0581C5FFDCC03982969E83426BAAB98E);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_result : &___0_result), SizeOf_TResult_t0BA7C9EB0581C5FFDCC03982969E83426BAAB98E);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_1 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		NullCheck(L_1);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_0: *(void**)L_0));
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_Run_TisIl2CppFullySharedGenericAny_m9B8B1B2F2FE04689FD7BADCD0E57F38E4B5FBF69_gshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___0_function, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_0 = ___0_function;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_2;
		L_2 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3;
		L_3 = InvokerFuncInvoker6< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL, L_0, L_1, (int32_t)8, (int32_t)0, L_2);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`1<System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_Run_TisIl2CppFullySharedGenericAny_m25FB5A392FEACC714E85A5165A97701C1343B1C0_gshared (Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB* ___0_function, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB* L_0 = ___0_function;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2;
		L_2 = InvokerFuncInvoker2< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`1<System.Threading.Tasks.Task`1<TResult>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_Run_TisIl2CppFullySharedGenericAny_mF39F8DFD4DC180998B23C404C0030D0856730D6C_gshared (Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB* ___0_function, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB* L_0 = ___0_function;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7AD319493499620E43634FF644A0CEF1624086AD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_Run_TisIl2CppFullySharedGenericAny_mF39F8DFD4DC180998B23C404C0030D0856730D6C_RuntimeMethod_var)));
	}

IL_000e:
	{
		bool L_2;
		L_2 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___1_cancellationToken), NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___1_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4;
		L_4 = InvokerFuncInvoker1< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3);
		return L_4;
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_5;
		L_5 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB* L_6 = ___0_function;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ___1_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_8;
		L_8 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		NullCheck(L_5);
		Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266* L_9;
		L_9 = InvokerFuncInvoker4< Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266*, Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_5, L_6, L_7, (int32_t)8, L_8);
		UnwrapPromise_1_t056E9AD8CFB7AFD55E9D63549F5F68C2827ABDB1* L_10 = (UnwrapPromise_1_t056E9AD8CFB7AFD55E9D63549F5F68C2827ABDB1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		NullCheck(L_10);
		InvokerActionInvoker2< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_10, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_9, (bool)1);
		return (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)L_10;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`4<TArg1,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,TArg1,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppFullySharedGenericAny_m04115576E6CC428982884D8F87DD3724A14DBF1A_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_arg1, RuntimeObject* ___3_state, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TArg1)
	const uint32_t SizeOf_TArg1_tB1C103A032CE9BD6E8BC9AC113B2D739B054F785 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// TArg1
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TArg1_tB1C103A032CE9BD6E8BC9AC113B2D739B054F785);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799* L_0 = ___0_beginMethod;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___1_endMethod;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_arg1 : &___2_arg1), SizeOf_TArg1_tB1C103A032CE9BD6E8BC9AC113B2D739B054F785);
		RuntimeObject* L_3 = ___3_state;
		int32_t L_4 = (int32_t)__this->___m_defaultCreationOptions_2;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = InvokerFuncInvoker5< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, Il2CppFullySharedGenericAny, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), __this, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_2: *(void**)L_2), L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`4<TArg1,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,TArg1,System.Object,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppFullySharedGenericAny_m4F65D83940E1B36D36E32537F53DDBD4EF7CDCD7_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_arg1, RuntimeObject* ___3_state, int32_t ___4_creationOptions, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TArg1)
	const uint32_t SizeOf_TArg1_tC08EB94AF45F8297A70909AB081D4BE051B78B49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// TArg1
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TArg1_tC08EB94AF45F8297A70909AB081D4BE051B78B49);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799* L_0 = ___0_beginMethod;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___1_endMethod;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_arg1 : &___2_arg1), SizeOf_TArg1_tC08EB94AF45F8297A70909AB081D4BE051B78B49);
		RuntimeObject* L_3 = ___3_state;
		int32_t L_4 = ___4_creationOptions;
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_5;
		L_5 = InvokerFuncInvoker6< Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*, Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799*, Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, Il2CppFullySharedGenericAny, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, (Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*)NULL, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_2: *(void**)L_2), L_3, L_4);
		return (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`5<TArg1,TArg2,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,TArg1,TArg2,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mDA4D7F2612BE37F888FDEBC6BCC9ABB0DCF93ED7_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_arg1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_arg2, RuntimeObject* ___4_state, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TArg1)
	const uint32_t SizeOf_TArg1_t21F6284D80A35C30C6EBF467D434A5A961962037 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// sizeof(TArg2)
	const uint32_t SizeOf_TArg2_t9DF84619D7F5C64775E8171C1DF9905463073DCB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// TArg1
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TArg1_t21F6284D80A35C30C6EBF467D434A5A961962037);
	// TArg2
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TArg2_t9DF84619D7F5C64775E8171C1DF9905463073DCB);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9* L_0 = ___0_beginMethod;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___1_endMethod;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_arg1 : &___2_arg1), SizeOf_TArg1_t21F6284D80A35C30C6EBF467D434A5A961962037);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___3_arg2 : &___3_arg2), SizeOf_TArg2_t9DF84619D7F5C64775E8171C1DF9905463073DCB);
		RuntimeObject* L_4 = ___4_state;
		int32_t L_5 = (int32_t)__this->___m_defaultCreationOptions_2;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = InvokerFuncInvoker6< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), __this, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_3: *(void**)L_3), L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`5<TArg1,TArg2,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,TArg1,TArg2,System.Object,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m78E42B6911823B51D9AE1A90E071856A3A910D53_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_arg1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_arg2, RuntimeObject* ___4_state, int32_t ___5_creationOptions, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TArg1)
	const uint32_t SizeOf_TArg1_tFF1C5C3E8019C353F9626B4B859583B486C1737B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// sizeof(TArg2)
	const uint32_t SizeOf_TArg2_tBC544DB55DFEFC252830381AE8BEA9A908906E9C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// TArg1
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TArg1_tFF1C5C3E8019C353F9626B4B859583B486C1737B);
	// TArg2
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TArg2_tBC544DB55DFEFC252830381AE8BEA9A908906E9C);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9* L_0 = ___0_beginMethod;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___1_endMethod;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_arg1 : &___2_arg1), SizeOf_TArg1_tFF1C5C3E8019C353F9626B4B859583B486C1737B);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___3_arg2 : &___3_arg2), SizeOf_TArg2_tBC544DB55DFEFC252830381AE8BEA9A908906E9C);
		RuntimeObject* L_4 = ___4_state;
		int32_t L_5 = ___5_creationOptions;
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_6;
		L_6 = InvokerFuncInvoker7< Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*, Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9*, Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, (Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*)NULL, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_3: *(void**)L_3), L_4, L_5);
		return (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_6;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::StartNew<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`1<TResult>,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskFactory_StartNew_TisIl2CppFullySharedGenericAny_m093A8AAFB7FEC0A2D65CEAEBE25DE0EB91469C36_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___0_function, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, int32_t ___2_creationOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___3_scheduler, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_creationOptions;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_InternalCurrentIfAttached_mBF043F869DEB200F3129DB7CE48C64BA0A85B58C(L_0, NULL);
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_2 = ___0_function;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___1_cancellationToken;
		int32_t L_4 = ___2_creationOptions;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = ___3_scheduler;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_6;
		L_6 = InvokerFuncInvoker6< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_1, L_2, L_3, L_4, (int32_t)0, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::StartNew<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`2<System.Object,TResult>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskFactory_StartNew_TisIl2CppFullySharedGenericAny_m76EE5D98B340430C4C47231CDF77B89D3AC194D6_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9* ___0_function, RuntimeObject* ___1_state, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_creationOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___4_scheduler, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___3_creationOptions;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_InternalCurrentIfAttached_mBF043F869DEB200F3129DB7CE48C64BA0A85B58C(L_0, NULL);
		Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9* L_2 = ___0_function;
		RuntimeObject* L_3 = ___1_state;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___2_cancellationToken;
		int32_t L_5 = ___3_creationOptions;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_6 = ___4_scheduler;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_7;
		L_7 = InvokerFuncInvoker7< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_1, L_2, L_3, L_4, L_5, (int32_t)0, L_6);
		return L_7;
	}
}
// TResult System.Threading.Tasks.TaskToApm::End<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToApm_End_TisIl2CppFullySharedGenericAny_m91FFD6A6ED859B8F22E6E190E8D8C9E7E161442D_gshared (RuntimeObject* ___0_asyncResult, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t2939BA84C0BF6524637D8E56EF62BF3F981A5950 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// TResult
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TResult_t2939BA84C0BF6524637D8E56EF62BF3F981A5950);
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_0 = NULL;
	TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* V_1 = NULL;
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		V_1 = ((TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB*)IsInstSealed((RuntimeObject*)L_0, TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var));
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_2 = V_1;
		NullCheck(L_2);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_2->___Task_0;
		V_0 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_001f;
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___0_asyncResult;
		V_0 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_001f:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_5 = V_0;
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskToApm_End_TisIl2CppFullySharedGenericAny_m91FFD6A6ED859B8F22E6E190E8D8C9E7E161442D_RuntimeMethod_var)));
	}

IL_0028:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_7 = V_0;
		NullCheck(L_7);
		TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 L_8;
		L_8 = InvokerFuncInvoker0< TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_7);
		V_2 = L_8;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (&V_2), (Il2CppFullySharedGenericAny*)L_9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_TResult_t2939BA84C0BF6524637D8E56EF62BF3F981A5950);
		return;
	}
}
// System.Void UnityEngine.TextCore.Text.TextGeneratorUtilities::ResizeInternalArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextGeneratorUtilities_ResizeInternalArray_TisIl2CppFullySharedGenericAny_m6DA80337B38B359E2C0ED89B0491833F56AAC546_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9331));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9332));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9333));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9334));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)L_0);
		NullCheck(L_1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9335));
		int32_t L_2;
		L_2 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9335));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9336));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_3 = ___0_array;
		int32_t L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9337));
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9337));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9338));
		return;
	}
}
// System.Void UnityEngine.TextCore.Text.TextInfo::Resize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInfo_Resize_TisIl2CppFullySharedGenericAny_m2C45260716FF60199EEDC9435E8545C1A8AC5E27_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_size, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_size));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9991));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9992));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9993));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9994));
		int32_t L_0 = ___1_size;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___1_size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9995));
		int32_t L_2;
		L_2 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9995));
		G_B3_0 = L_2;
		goto IL_0018;
	}

IL_0011:
	{
		int32_t L_3 = ___1_size;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)256)));
	}

IL_0018:
	{
		V_0 = G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9996));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_4 = ___0_array;
		int32_t L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9997));
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_4, L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9997));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9998));
		return;
	}
}
// System.Void UnityEngine.TextCore.Text.TextInfo::Resize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[]&,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInfo_Resize_TisIl2CppFullySharedGenericAny_m7096ECDB11995E143D4B39166A45E07091C6D15B_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_size, bool ___2_isBlockAllocated, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_size), (&___2_isBlockAllocated));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 9999));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 10000));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 10001));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 10002));
		bool L_0 = ___2_isBlockAllocated;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 10003));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 10004));
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___1_size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 10005));
		int32_t L_4;
		L_4 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 10005));
		G_B4_0 = L_4;
		goto IL_001d;
	}

IL_0016:
	{
		int32_t L_5 = ___1_size;
		G_B4_0 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)256)));
	}

IL_001d:
	{
		___1_size = G_B4_0;
	}

IL_001f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 10006));
		int32_t L_6 = ___1_size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_7 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = *((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)L_7);
		NullCheck(L_8);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 10007));
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_002c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 10008));
		goto IL_0034;
	}

IL_002c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 10009));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_10 = ___0_array;
		int32_t L_11 = ___1_size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 10010));
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_10, L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 10010));
	}

IL_0034:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreTextEngineModule + 10011));
		return;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 Texture2D_GetRawTextureData_TisIl2CppFullySharedGenericStruct_mDC6FE57DC7D62BAC05E6231541767FA81448490E_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_5;
	memset((&V_5), 0, sizeof(V_5));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2114));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2115));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2116));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2117));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2118));
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this);
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.Texture::get_isReadable() */, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2118));
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2119));
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2120));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2121));
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this);
		UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* L_2;
		L_2 = Texture_CreateNonReadableException_m29786CD930E89C281564A9B341FD4088FBC8C94F((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2121));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Texture2D_GetRawTextureData_TisIl2CppFullySharedGenericStruct_mDC6FE57DC7D62BAC05E6231541767FA81448490E_RuntimeMethod_var)));
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2122));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2123));
		int32_t L_3;
		L_3 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2123));
		V_0 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2124));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2125));
		uint64_t L_4;
		L_4 = Texture2D_GetRawImageDataSize_mBD92C0F2A09A023841785BBB642C2B7696EE7CBE(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2125));
		int32_t L_5 = V_0;
		V_1 = (uint64_t)((int64_t)((uint64_t)(int64_t)L_4/(uint64_t)(int64_t)((int64_t)L_5)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2126));
		uint64_t L_6 = V_1;
		V_4 = (bool)((!(((uint64_t)L_6) <= ((uint64_t)((int64_t)((int32_t)2147483647LL)))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2127));
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2128));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2129));
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this);
		UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* L_8;
		L_8 = Texture_CreateNativeArrayLengthOverflowException_m508BE4928B3768ED618EF1FA10E022F6FF12F870((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2129));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Texture2D_GetRawTextureData_TisIl2CppFullySharedGenericStruct_mDC6FE57DC7D62BAC05E6231541767FA81448490E_RuntimeMethod_var)));
	}

IL_003c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2130));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2131));
		intptr_t L_9;
		L_9 = Texture2D_GetWritableImageData_m8E26026A332040F8713E5A2A13C5545797159A5E(__this, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2131));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2132));
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2132));
		uint64_t L_11 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2133));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_12;
		L_12 = InvokerFuncInvoker3< NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, void*, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_10, ((int32_t)L_11), (int32_t)1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2133));
		V_2 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2134));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_13 = V_2;
		V_5 = L_13;
		goto IL_0056;
	}

IL_0056:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2135));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_14 = V_5;
		return L_14;
	}
}
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Action`1<TState>,TState,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_TisIl2CppFullySharedGenericAny_m1BF539C01328BDA70BEABD795BFABD5F18D7F8CE_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___0_callBack, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_state, bool ___2_preferLocal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TState)
	const uint32_t SizeOf_TState_t88AAF175D8D6D417B45F12A19B368FBBE4EABC7F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// TState
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TState_t88AAF175D8D6D417B45F12A19B368FBBE4EABC7F);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* G_B2_0 = NULL;
	U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* G_B1_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* L_0 = (U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* L_1 = L_0;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_2 = ___0_callBack;
		NullCheck(L_1);
		L_1->___callBack_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callBack_0), (void*)L_2);
		U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* L_3 = L_1;
		NullCheck(L_3);
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_4 = (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)L_3->___callBack_0;
		G_B1_0 = L_3;
		if (L_4)
		{
			G_B2_0 = L_3;
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB382FDA4B30D0397739E8EC9B987AB66568010F7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisIl2CppFullySharedGenericAny_m1BF539C01328BDA70BEABD795BFABD5F18D7F8CE_RuntimeMethod_var)));
	}

IL_001f:
	{
		V_0 = (int32_t)1;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_6 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_6, (RuntimeObject*)G_B2_0, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___1_state : &___1_state), SizeOf_TState_t88AAF175D8D6D417B45F12A19B368FBBE4EABC7F);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 4), L_7);
		bool L_9 = ___2_preferLocal;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItemHelper_m5B98C28FB6C9379B8DDD302ABC3D1D1FC1779EDD(L_6, L_8, (&V_0), (bool)1, (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0), NULL);
		return L_10;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppFullySharedGenericAny_mD1546AD31023759C065B096A4FE412E69838164A_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
	memset(V_0, 0, SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_1);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_3, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Tuple`2<T1,T2> System.Tuple::Create<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* Tuple_Create_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mDA77107B30389EA4092249AFF47FFBFFE45BB038_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T1)
	const uint32_t SizeOf_T1_t465A831C1422E7901BD8C9BF81DDBD106225CB8E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// sizeof(T2)
	const uint32_t SizeOf_T2_t6244E4F2C95F4397B9687AD82F4B8C331D01927D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T1
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t465A831C1422E7901BD8C9BF81DDBD106225CB8E);
	// T2
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t6244E4F2C95F4397B9687AD82F4B8C331D01927D);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_t465A831C1422E7901BD8C9BF81DDBD106225CB8E);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_item2 : &___1_item2), SizeOf_T2_t6244E4F2C95F4397B9687AD82F4B8C331D01927D);
		Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* L_2 = (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		NullCheck(L_2);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
// System.Tuple`3<T1,T2,T3> System.Tuple::Create<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* Tuple_Create_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mF23536EC283D2934606FB2245E28DFB4E9638BF9_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_item2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_item3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T1)
	const uint32_t SizeOf_T1_t776085CF94B8744D4D9FD308E39A8142DC0C8334 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// sizeof(T2)
	const uint32_t SizeOf_T2_t45438045FCA6F1CA09F27AD3D628AEB2C340AA76 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t9BD166B938DD605E5E0DC3F4C050FD2B5FBFD72C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T1
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t776085CF94B8744D4D9FD308E39A8142DC0C8334);
	// T2
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t45438045FCA6F1CA09F27AD3D628AEB2C340AA76);
	// T3
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T3_t9BD166B938DD605E5E0DC3F4C050FD2B5FBFD72C);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_t776085CF94B8744D4D9FD308E39A8142DC0C8334);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_item2 : &___1_item2), SizeOf_T2_t45438045FCA6F1CA09F27AD3D628AEB2C340AA76);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_item3 : &___2_item3), SizeOf_T3_t9BD166B938DD605E5E0DC3F4C050FD2B5FBFD72C);
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_3 = (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_3);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_2: *(void**)L_2));
		return L_3;
	}
}
// System.Void UnityEngine.UIElements.UIR.UIRenderDevice::DrawRanges<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(UnityEngine.UIElements.UIR.Utility/GPUBuffer`1<I>,UnityEngine.UIElements.UIR.Utility/GPUBuffer`1<T>,Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.DrawBufferRange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIRenderDevice_DrawRanges_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m71F34C7DEDCF897C928FC2BED61084149C5AF648_gshared (UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302* __this, GPUBuffer_1_t59623B2A3B8EFD33FB05C973C4C4EAFCF89ED241* ___0_ib, GPUBuffer_1_t59623B2A3B8EFD33FB05C973C4C4EAFCF89ED241* ___1_vb, NativeSlice_1_t2E5DBD9A5F77A5044A4160098A0B2A45D3EE8974 ___2_ranges, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU2A_t919FFA378D2CE7AF74E4F3F877D0EC12DBE7C21D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSliceUnsafeUtility_GetUnsafePtr_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_m3F0318274FE0636367B91558C6673DEF834FB1A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_get_Length_m2566843C81FEFDDF6407962D4E34F13C3133028D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRenderDevice_DrawRanges_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m71F34C7DEDCF897C928FC2BED61084149C5AF648_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ib), (&___1_vb), (&___2_ranges));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65791));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65792));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65793));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65794));
		uint32_t L_0 = sizeof(intptr_t);
		if ((uintptr_t)((uintptr_t)1) * (uintptr_t)L_0 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), UIRenderDevice_DrawRanges_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m71F34C7DEDCF897C928FC2BED61084149C5AF648_RuntimeMethod_var);
		intptr_t L_1 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)1), (int32_t)L_0));
		int8_t* L_2 = (int8_t*) (L_1 ? alloca(L_1) : NULL);
		memset(L_2, 0, L_1);
		V_0 = (intptr_t*)(L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65795));
		intptr_t* L_3 = V_0;
		GPUBuffer_1_t59623B2A3B8EFD33FB05C973C4C4EAFCF89ED241* L_4 = ___1_vb;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65796));
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = InvokerFuncInvoker0< intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65796));
		*((intptr_t*)L_3) = (intptr_t)L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65797));
		GPUBuffer_1_t59623B2A3B8EFD33FB05C973C4C4EAFCF89ED241* L_6 = ___0_ib;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65798));
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = InvokerFuncInvoker0< intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65798));
		intptr_t* L_8 = V_0;
		NativeSlice_1_t2E5DBD9A5F77A5044A4160098A0B2A45D3EE8974 L_9 = ___2_ranges;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65799));
		void* L_10;
		L_10 = NativeSliceUnsafeUtility_GetUnsafePtr_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_m3F0318274FE0636367B91558C6673DEF834FB1A5(L_9, NativeSliceUnsafeUtility_GetUnsafePtr_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_m3F0318274FE0636367B91558C6673DEF834FB1A5_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65799));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65800));
		intptr_t L_11;
		memset((&L_11), 0, sizeof(L_11));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_11), L_10, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65800));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65801));
		int32_t L_12;
		L_12 = NativeSlice_1_get_Length_m2566843C81FEFDDF6407962D4E34F13C3133028D((&___2_ranges), NativeSlice_1_get_Length_m2566843C81FEFDDF6407962D4E34F13C3133028D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65801));
		intptr_t L_13 = (intptr_t)__this->___m_VertexDecl_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65802));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Utility_DrawRanges_m6F5AE31B6A857DB71F66A2662C6EBE1B218B6FF4(L_7, L_8, 1, L_11, L_12, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65802));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65803));
		return;
	}
}
// Unity.Collections.NativeSlice`1<T> UnityEngine.UIElements.UIR.UIRenderDevice::PtrToSlice<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 UIRenderDevice_PtrToSlice_TisIl2CppFullySharedGenericStruct_m0EE4C09A713B60EB7E390B5330800B63CEF94BDF_gshared (void* ___0_p, int32_t ___1_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_p), (&___1_count));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65370));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65371));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65372));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65373));
		void* L_0 = ___0_p;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65374));
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65374));
		int32_t L_2 = ___1_count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65375));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_3;
		L_3 = InvokerFuncInvoker3< NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, void*, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65375));
		V_0 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65376));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_4 = V_0;
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 65377));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_5 = V_1;
		return L_5;
	}
}
// T UnityEngine.UIElements.UQueryExtensions::Q<System.Object>(UnityEngine.UIElements.VisualElement,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UQueryExtensions_Q_TisRuntimeObject_mE41C425481646FE357E4650A7CB20F7C3F2CCA40_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_e, String_t* ___1_name, String_t* ___2_className, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_e), (&___1_name), (&___2_className));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16740));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16741));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16742));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16743));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16744));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16744));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16745));
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16745));
		V_1 = (bool)((((RuntimeObject*)(Type_t*)L_1) == ((RuntimeObject*)(Type_t*)L_3))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16746));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16747));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16748));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = ___0_e;
		String_t* L_6 = ___1_name;
		String_t* L_7 = ___2_className;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16749));
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8;
		L_8 = UQueryExtensions_Q_m95306617BF08AC2853EABB5299786D2095BE631E(L_5, L_6, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16749));
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0237;
	}

IL_0034:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16750));
		String_t* L_9 = ___1_name;
		V_3 = (bool)((((RuntimeObject*)(String_t*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16751));
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0114;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16752));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16753));
		String_t* L_11 = ___2_className;
		V_4 = (bool)((((RuntimeObject*)(String_t*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16754));
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_009b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16755));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16756));
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = ___0_e;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16757));
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_14;
		L_14 = UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004((&((UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_StaticFields*)il2cpp_codegen_static_fields_for(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var))->___SingleElementTypeQuery_4), L_13, UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16757));
		V_0 = L_14;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16758));
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_15 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_16 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_15.___m_Matchers_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16759));
		NullCheck(L_16);
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_17;
		L_17 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_16, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16759));
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_18 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_17.___complexSelector_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16760));
		NullCheck(L_18);
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_19;
		L_19 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16760));
		NullCheck(L_19);
		int32_t L_20 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16761));
		NullCheck(L_21);
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_22;
		L_22 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16761));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 3));
		IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4* L_23 = ((IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 3)))->___s_Instance_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16762));
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_24;
		L_24 = StyleSelectorPart_CreatePredicate_m9B21A0E45BE2A1EBCA075E7C3EA04216EFB99026((RuntimeObject*)L_23, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16762));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_24);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16763));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16764));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_25;
		L_25 = UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94((&V_0), UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16764));
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_25, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0237;
	}

IL_009b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16765));
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_26 = ___0_e;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16766));
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_27;
		L_27 = UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004((&((UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_StaticFields*)il2cpp_codegen_static_fields_for(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var))->___SingleElementTypeAndClassQuery_6), L_26, UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16766));
		V_0 = L_27;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16767));
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_28 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_29 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_28.___m_Matchers_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16768));
		NullCheck(L_29);
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_30;
		L_30 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_29, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16768));
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_31 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_30.___complexSelector_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16769));
		NullCheck(L_31);
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_32;
		L_32 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_31, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16769));
		NullCheck(L_32);
		int32_t L_33 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16770));
		NullCheck(L_34);
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_35;
		L_35 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_34, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16770));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 3));
		IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4* L_36 = ((IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 3)))->___s_Instance_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16771));
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_37;
		L_37 = StyleSelectorPart_CreatePredicate_m9B21A0E45BE2A1EBCA075E7C3EA04216EFB99026((RuntimeObject*)L_36, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16771));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_37);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16772));
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_38 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_39 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_38.___m_Matchers_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16773));
		NullCheck(L_39);
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_40;
		L_40 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_39, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16773));
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_41 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_40.___complexSelector_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16774));
		NullCheck(L_41);
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_42;
		L_42 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_41, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16774));
		NullCheck(L_42);
		int32_t L_43 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16775));
		NullCheck(L_44);
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_45;
		L_45 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_44, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16775));
		String_t* L_46 = ___2_className;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16776));
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_47;
		L_47 = StyleSelectorPart_CreateClass_m5B7F89D3BE469D181E0887E94F4031B92554656E(L_46, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16776));
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_47);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16777));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16778));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_48;
		L_48 = UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94((&V_0), UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16778));
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_48, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0237;
	}

IL_0114:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16779));
		String_t* L_49 = ___2_className;
		V_5 = (bool)((((RuntimeObject*)(String_t*)L_49) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16780));
		bool L_50 = V_5;
		if (!L_50)
		{
			goto IL_0198;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16781));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16782));
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_51 = ___0_e;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16783));
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_52;
		L_52 = UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004((&((UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_StaticFields*)il2cpp_codegen_static_fields_for(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var))->___SingleElementTypeAndNameQuery_5), L_51, UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16783));
		V_0 = L_52;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16784));
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_53 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_54 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_53.___m_Matchers_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16785));
		NullCheck(L_54);
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_55;
		L_55 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_54, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16785));
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_56 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_55.___complexSelector_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16786));
		NullCheck(L_56);
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_57;
		L_57 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_56, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16786));
		NullCheck(L_57);
		int32_t L_58 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16787));
		NullCheck(L_59);
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_60;
		L_60 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_59, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16787));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 3));
		IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4* L_61 = ((IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 3)))->___s_Instance_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16788));
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_62;
		L_62 = StyleSelectorPart_CreatePredicate_m9B21A0E45BE2A1EBCA075E7C3EA04216EFB99026((RuntimeObject*)L_61, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16788));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(0), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_62);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16789));
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_63 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_64 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_63.___m_Matchers_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16790));
		NullCheck(L_64);
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_65;
		L_65 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_64, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16790));
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_66 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_65.___complexSelector_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16791));
		NullCheck(L_66);
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_67;
		L_67 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_66, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16791));
		NullCheck(L_67);
		int32_t L_68 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16792));
		NullCheck(L_69);
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_70;
		L_70 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_69, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16792));
		String_t* L_71 = ___1_name;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16793));
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_72;
		L_72 = StyleSelectorPart_CreateId_m8C5422E6675A02D0A623D8BB2A1F6704299F0357(L_71, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16793));
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(1), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_72);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16794));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16795));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_73;
		L_73 = UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94((&V_0), UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16795));
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_73, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0237;
	}

IL_0198:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16796));
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_74 = ___0_e;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16797));
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_75;
		L_75 = UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004((&((UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_StaticFields*)il2cpp_codegen_static_fields_for(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var))->___SingleElementTypeAndNameAndClassQuery_7), L_74, UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16797));
		V_0 = L_75;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16798));
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_76 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_77 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_76.___m_Matchers_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16799));
		NullCheck(L_77);
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_78;
		L_78 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_77, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16799));
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_79 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_78.___complexSelector_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16800));
		NullCheck(L_79);
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_80;
		L_80 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_79, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16800));
		NullCheck(L_80);
		int32_t L_81 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16801));
		NullCheck(L_82);
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_83;
		L_83 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_82, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16801));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 3));
		IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4* L_84 = ((IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 3)))->___s_Instance_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16802));
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_85;
		L_85 = StyleSelectorPart_CreatePredicate_m9B21A0E45BE2A1EBCA075E7C3EA04216EFB99026((RuntimeObject*)L_84, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16802));
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(0), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_85);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16803));
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_86 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_87 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_86.___m_Matchers_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16804));
		NullCheck(L_87);
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_88;
		L_88 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_87, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16804));
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_89 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_88.___complexSelector_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16805));
		NullCheck(L_89);
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_90;
		L_90 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_89, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16805));
		NullCheck(L_90);
		int32_t L_91 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_92 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16806));
		NullCheck(L_92);
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_93;
		L_93 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_92, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16806));
		String_t* L_94 = ___1_name;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16807));
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_95;
		L_95 = StyleSelectorPart_CreateId_m8C5422E6675A02D0A623D8BB2A1F6704299F0357(L_94, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16807));
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(1), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_95);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16808));
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_96 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_97 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_96.___m_Matchers_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16809));
		NullCheck(L_97);
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_98;
		L_98 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_97, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16809));
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_99 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_98.___complexSelector_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16810));
		NullCheck(L_99);
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_100;
		L_100 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_99, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16810));
		NullCheck(L_100);
		int32_t L_101 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16811));
		NullCheck(L_102);
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_103;
		L_103 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_102, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16811));
		String_t* L_104 = ___2_className;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16812));
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_105;
		L_105 = StyleSelectorPart_CreateClass_m5B7F89D3BE469D181E0887E94F4031B92554656E(L_104, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16812));
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(2), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_105);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16813));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16814));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_106;
		L_106 = UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94((&V_0), UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16814));
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_106, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0237;
	}

IL_0237:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16815));
		RuntimeObject* L_107 = V_2;
		return L_107;
	}
}
// UnityEngine.UIElements.UQueryBuilder`1<T> UnityEngine.UIElements.UQueryExtensions::Query<System.Object>(UnityEngine.UIElements.VisualElement,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 UQueryExtensions_Query_TisRuntimeObject_m54F26487B79AE0ECC38A0B9D6615D7FD6B1F56C9_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_e, String_t* ___1_name, String_t* ___2_className, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryBuilder_1__ctor_m841C38F69A30425CCEA1F93525C97AD0B9648486_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_e), (&___1_name), (&___2_className));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16868));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16869));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16870));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16871));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_e;
		V_1 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16872));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16873));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16874));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16874));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UQueryExtensions_Query_TisRuntimeObject_m54F26487B79AE0ECC38A0B9D6615D7FD6B1F56C9_RuntimeMethod_var)));
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16875));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3 = ___0_e;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16876));
		UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139 L_4;
		memset((&L_4), 0, sizeof(L_4));
		UQueryBuilder_1__ctor_m841C38F69A30425CCEA1F93525C97AD0B9648486((&L_4), L_3, /*hidden argument*/UQueryBuilder_1__ctor_m841C38F69A30425CCEA1F93525C97AD0B9648486_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16876));
		V_2 = L_4;
		String_t* L_5 = ___1_name;
		String_t* L_6 = ___2_className;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16877));
		UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 L_7;
		L_7 = InvokerFuncInvoker2< UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2, String_t*, String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), (&V_2), L_5, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16877));
		V_0 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16878));
		UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 L_8 = V_0;
		V_3 = L_8;
		goto IL_0029;
	}

IL_0029:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 16879));
		UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 L_9 = V_3;
		return L_9;
	}
}
// T UniGLTF.UnityExtensions::GetOrAddComponent<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityExtensions_GetOrAddComponent_TisRuntimeObject_m28E896D18D85DBB523500F11122A436A7257350D_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_go));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6896));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniGLTF + 6897));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6898));
		// var c = go.GetComponent<T>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6899));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_go;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6900));
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6900));
		V_0 = L_1;
		// if (c != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6901));
		RuntimeObject* L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6902));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6902));
		V_1 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6903));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6904));
		// return c;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6905));
		RuntimeObject* L_5 = V_0;
		V_2 = L_5;
		goto IL_0026;
	}

IL_001d:
	{
		// return go.AddComponent<T>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6906));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___0_go;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6907));
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6907));
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6908));
		RuntimeObject* L_8 = V_2;
		return L_8;
	}
}
// System.Boolean UniGLTF.UnityExtensions::Has<System.Object>(UnityEngine.Transform,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityExtensions_Has_TisRuntimeObject_m4D69A17CF6E2AE15E7680DAC2C5768A980FFACEC_gshared (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, RuntimeObject* ___1_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_transform), (&___1_t));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6889));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniGLTF + 6890));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6891));
		// return transform.GetComponent<T>() == t;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6892));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6893));
		NullCheck((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_0);
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6893));
		RuntimeObject* L_2 = ___1_t;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6894));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6894));
		V_0 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 6895));
		bool L_4 = V_0;
		return L_4;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mDA4722F94AF13693FCE1583B641A792D2EA47924_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tBE6850158665A8E196430E1D80AEFF9AC121F5F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_tBE6850158665A8E196430E1D80AEFF9AC121F5F9;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mC89D70E498F759E971238CF82E99E44CC68197DA_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_source, intptr_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tEE9E2B0A67EF7877E2DDB454C5066EBB8C09D0DA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		intptr_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_tEE9E2B0A67EF7877E2DDB454C5066EBB8C09D0DA;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::Add<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_Add_TisIl2CppFullySharedGenericAny_m25356A475C0867B15741BD80812E4EBA4394F3C5_gshared (void* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t3ED59D9C3AB22383C6F506D05E4A04928B7130D6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_t3ED59D9C3AB22383C6F506D05E4A04928B7130D6;
		return ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m023762698D869AA8F4D477B66833C0BCFC1EA25C_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		Il2CppFullySharedGenericAny* L_3;
		L_3 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_2);
		return L_3;
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisIl2CppFullySharedGenericAny_mEFCD9F27093DEB04CA603DC1C6F306CE6DCCDC3C_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_left, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_left;
		Il2CppFullySharedGenericAny* L_1 = ___1_right;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
// T System.Runtime.CompilerServices.Unsafe::As<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_As_TisRuntimeObject_mFDA1457944192D987E8EC451CC8BFB2E800D78A1_gshared (RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_o;
		return L_0;
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAF06A659941D15118FC1E4800E3A7A0F262628A4_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisIl2CppFullySharedGenericAny_mE85961ECFFC7310EBEF309E6E67AD0FED2F9030B_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_value;
		return (void*)(((uintptr_t)L_0));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_m088920550101BD3FA6B40E99A5F107C35BE752FA_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		return L_0;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_mD269D4D95DA51D3CF4E4025805638814158802A3_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		void* L_0 = ___0_source;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisIl2CppFullySharedGenericAny_m731B9B0C5A4B349E4545E7AAAB44731B9ADB6597_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_left, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_left;
		Il2CppFullySharedGenericAny* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// T System.Runtime.CompilerServices.Unsafe::Read<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_Read_TisIl2CppFullySharedGenericAny_mF6B28073E683AAE891ED373C5F5F29DA2A0708A2_gshared (void* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		void* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
		return;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_ReadUnaligned_TisIl2CppFullySharedGenericAny_m42C276800437B81F51F1F38619B499B6AAFB0021_gshared (uint8_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		uint8_t* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
		return;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t77C4AF644C0D2AE4F0E9399E7AED3FED3426FBD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		uint32_t L_0 = SizeOf_T_t77C4AF644C0D2AE4F0E9399E7AED3FED3426FBD7;
		return (int32_t)L_0;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Byte&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisIl2CppFullySharedGenericAny_mF9DAA41D685A65A581864DBF65CE23C6F7E72BDF_gshared (uint8_t* ___0_destination, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		uint8_t* L_0 = ___0_destination;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		return;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisIl2CppFullySharedGenericStruct_m8D42BD9F3A34A0C9A6BF4AA6104B9DAE7B629DE7_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___0_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_output));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 638));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 639));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 640));
		Il2CppFullySharedGenericStruct* L_0 = ___0_output;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 641));
		return (void*)(L_0);
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 661));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 662));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 663));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 664));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 665));
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 665));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 666));
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 666));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 667));
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::CopyPtrToStructure<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Void*,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mBE6568C7ECF69CD1E86FDFF4E25D6CB529F76BF3_gshared (void* ___0_ptr, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_output));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 612));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 613));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 614));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 615));
		void* L_0 = ___0_ptr;
		Il2CppFullySharedGenericStruct* L_1 = ___1_output;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 616));
		InvokerActionInvoker2< void*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 616));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 617));
		return;
	}
}
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility::EnumEquals<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_EnumEquals_TisIl2CppFullySharedGenericStruct_m5C481F0B602D350AD1D467266B1FC020AD37D39F_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_lhs, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___1_rhs, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_lhs : &___0_lhs), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_rhs : &___1_rhs));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 657));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 658));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 659));
		il2cpp_codegen_memcpy(L_0, ___0_lhs, SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 660));
		il2cpp_codegen_memcpy(L_1, ___1_rhs, SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
		return (bool)((((int64_t)il2cpp_codegen_conv<int64_t,false,false>(il2cpp_rgctx_data(method->rgctx_data, 0), L_0, NULL)) == ((int64_t)il2cpp_codegen_conv<int64_t,false,false>(il2cpp_rgctx_data(method->rgctx_data, 0), L_1, NULL)))? 1 : 0);
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::EnumToInt<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_EnumToInt_TisIl2CppFullySharedGenericStruct_m3B39C49C6E55DD41CE78BCEBD6E575D640D38B3D_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_enumValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_enumValue : &___0_enumValue));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 645));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 646));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 647));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 648));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 649));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 650));
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct*, int32_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (Il2CppFullySharedGenericStruct*)___0_enumValue, (&V_0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 650));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 651));
		int32_t L_0 = V_0;
		V_1 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 652));
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::InternalCopyPtrToStructure<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Void*,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mD132267FDFD79997EE2A47470E89CE83AC7CA91E_gshared (void* ___0_ptr, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t0AB8BF3DB56DA09FFC797908F6C670B2FB5AD0D6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t0AB8BF3DB56DA09FFC797908F6C670B2FB5AD0D6);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_output));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 618));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 619));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 620));
		Il2CppFullySharedGenericStruct* L_0 = ___1_output;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 621));
		void* L_1 = ___0_ptr;
		il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t0AB8BF3DB56DA09FFC797908F6C670B2FB5AD0D6);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_0, L_2, SizeOf_T_t0AB8BF3DB56DA09FFC797908F6C670B2FB5AD0D6);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericStruct*)L_0, (void*)L_2);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::InternalEnumToInt<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalEnumToInt_TisIl2CppFullySharedGenericAny_mBDCF185E254B9BD3742E154D436B362227EB8F18_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_enumValue, int32_t* ___1_intValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_enumValue), (&___1_intValue));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 653));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 654));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 655));
		int32_t* L_0 = ___1_intValue;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 656));
		Il2CppFullySharedGenericAny* L_1 = ___0_enumValue;
		int32_t L_2 = *((int32_t*)L_1);
		*((int32_t*)L_0) = (int32_t)L_2;
		return;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_gshared (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source), (&___1_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 622));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 623));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 624));
		void* L_0 = ___0_source;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 625));
		int32_t L_1 = ___1_index;
		uint32_t L_2 = SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C;
		il2cpp_codegen_memcpy(L_3, ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		return;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElementWithStride_TisIl2CppFullySharedGenericAny_mA2FA845DC97225E057F01D0D4161C801EECA284F_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source), (&___1_index), (&___2_stride));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 626));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 627));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 628));
		void* L_0 = ___0_source;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 629));
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		il2cpp_codegen_memcpy(L_3, ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
		return;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 642));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 643));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 644));
		uint32_t L_0 = SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2;
		return (int32_t)L_0;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_gshared (void* ___0_destination, int32_t ___1_index, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_destination), (&___1_index), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_value : &___2_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 630));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 631));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 632));
		void* L_0 = ___0_destination;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 633));
		int32_t L_1 = ___1_index;
		uint32_t L_2 = SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_value : &___2_value), SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), L_3, SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisIl2CppFullySharedGenericAny_mD6C17E0F294919C280E583601A298E265D20935A_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_destination), (&___1_index), (&___2_stride), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_value : &___3_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 634));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 635));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 636));
		void* L_0 = ___0_destination;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 637));
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_value : &___3_value), SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), L_3, SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), (void*)L_3);
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetVectorArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(UnityEngine.MaterialPropertyBlock,System.Int32,Unity.Collections.NativeSlice`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetVectorArray_TisIl2CppFullySharedGenericStruct_m81E3635992729EE14FE0F341841167D9B847780B_gshared (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___0_props, int32_t ___1_name, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___2_vector4s, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_props), (&___1_name), (&___2_vector4s));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 964));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 965));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 966));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 967));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 968));
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (&___2_vector4s));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 968));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 969));
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), (&___2_vector4s));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 969));
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, L_1))/((int32_t)16)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 970));
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_2 = ___0_props;
		int32_t L_3 = ___1_name;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_4 = ___2_vector4s;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 971));
		void* L_5;
		L_5 = InvokerFuncInvoker1< void*, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 971));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 972));
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_6), L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 972));
		int32_t L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 973));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Utility_SetVectorArray_m36650D854AAE55F689FF622D36CC2AC0B9FD7FB1(L_2, L_3, L_6, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 973));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsNativeModule + 974));
		return;
	}
}
// T UnityEngine.UIElements.UxmlAttributeDescription::GetValueFromBag<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.Func`3<System.String,T,T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxmlAttributeDescription_GetValueFromBag_TisIl2CppFullySharedGenericAny_mAD4F4838D245291B33A0A6819595AAE917FA073A_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* ___2_converterFunc, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_defaultValue, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	const Il2CppFullySharedGenericAny L_11 = L_9;
	const Il2CppFullySharedGenericAny L_12 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	memset(V_3, 0, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_bag), (&___1_cc), (&___2_converterFunc), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___3_defaultValue : &___3_defaultValue));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19392));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19393));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19394));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19395));
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_0 = ___2_converterFunc;
		V_1 = (bool)((((RuntimeObject*)(Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19396));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19397));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19398));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19399));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19399));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UxmlAttributeDescription_GetValueFromBag_TisIl2CppFullySharedGenericAny_mAD4F4838D245291B33A0A6819595AAE917FA073A_RuntimeMethod_var)));
	}

IL_0015:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19400));
		RuntimeObject* L_3 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___1_cc;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19401));
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19401));
		V_2 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19402));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19403));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19404));
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___3_defaultValue : &___3_defaultValue), SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19405));
		NullCheck(L_7);
		InvokerActionInvoker3< String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_7, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_9: *(void**)L_9), (Il2CppFullySharedGenericAny*)L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19405));
		il2cpp_codegen_memcpy(V_3, L_10, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		goto IL_0035;
	}

IL_0030:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19406));
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___3_defaultValue : &___3_defaultValue), SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		il2cpp_codegen_memcpy(V_3, L_11, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		goto IL_0035;
	}

IL_0035:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19407));
		il2cpp_codegen_memcpy(L_12, V_3, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_12, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.UxmlAttributeDescription::TryGetValueFromBag<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.Func`3<System.String,T,T>,T,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBag_TisIl2CppFullySharedGenericAny_mCED4FA8C9BF02C7E06E00E3C378BF3E04890B72F_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* ___2_converterFunc, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_defaultValue, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___4_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
	const Il2CppFullySharedGenericAny L_12 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_bag), (&___1_cc), (&___2_converterFunc), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___3_defaultValue : &___3_defaultValue), (&___4_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19372));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19373));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19374));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19375));
		RuntimeObject* L_0 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_1 = ___1_cc;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19376));
		bool L_2;
		L_2 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_0, L_1, (&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19376));
		V_1 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19377));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19378));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19379));
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_4 = ___2_converterFunc;
		V_2 = (bool)((!(((RuntimeObject*)(Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19380));
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19381));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19382));
		Il2CppFullySharedGenericAny* L_6 = ___4_value;
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___3_defaultValue : &___3_defaultValue), SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19383));
		NullCheck(L_7);
		InvokerActionInvoker3< String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_7, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_9: *(void**)L_9), (Il2CppFullySharedGenericAny*)L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19383));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_6, L_10, SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_6, (void*)L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19384));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19385));
		goto IL_0037;
	}

IL_002c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19386));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19387));
		Il2CppFullySharedGenericAny* L_11 = ___4_value;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___3_defaultValue : &___3_defaultValue), SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_11, L_12, SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_11, (void*)L_12);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19388));
	}

IL_0037:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19389));
		V_3 = (bool)1;
		goto IL_003f;
	}

IL_003b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19390));
		V_3 = (bool)0;
		goto IL_003f;
	}

IL_003f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 19391));
		bool L_13 = V_3;
		return L_13;
	}
}
// UniGLTF.ValidationContext UniGLTF.ValidationContext::Create<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7 ValidationContext_Create_TisRuntimeObject_m8291677DF0EF734FE1BA131402FDBB83CC3DF862_gshared (RuntimeObject* ___0_c, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_c));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 25871));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniGLTF + 25872));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 25873));
		// return new ValidationContext
		// {
		//     Type = typeof(T),
		//     Context = c,
		// };
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 25874));
		il2cpp_codegen_initobj((&V_0), sizeof(ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 25875));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 25875));
		(&V_0)->___Type_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Type_0), (void*)L_1);
		RuntimeObject* L_2 = ___0_c;
		(&V_0)->___Context_1 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Context_1), (void*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_2);
		ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7 L_3 = V_0;
		V_1 = L_3;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 25876));
		ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7 L_4 = V_1;
		return L_4;
	}
}
// System.Numerics.Vector`1<System.UInt64> System.Numerics.Vector::AsVectorUInt64<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisIl2CppFullySharedGenericStruct_mD3B6243B6DD2F19C7DA294F642D66F699D797811_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = InvokerFuncInvoker1< Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0);
		return L_1;
	}
}
// System.Numerics.Vector`1<T> System.Numerics.Vector::Equals<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Numerics.Vector`1<T>,System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 Vector_Equals_TisIl2CppFullySharedGenericStruct_m589C7C54FDBBA8A38CC7672C2E2734EB16BDFD24_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_left, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_left;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_1 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_2;
		L_2 = InvokerFuncInvoker2< Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		return L_2;
	}
}
// UnityEngine.UIElements.Experimental.ValueAnimation`1<T> UnityEngine.UIElements.VisualElement::StartAnimation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.Experimental.ValueAnimation`1<T>,System.Func`2<UnityEngine.UIElements.VisualElement,T>,T,System.Int32,System.Action`2<UnityEngine.UIElements.VisualElement,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* VisualElement_StartAnimation_TisIl2CppFullySharedGenericAny_m300B910AACD4424D5526A2A5802A0B43DCDDC3A9_gshared (/*UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* ___0_anim, Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C* ___1_fromValueGetter, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_to, int32_t ___3_durationMs, Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E* ___4_onValueChanged, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t57C63BDE4B938B0DA7CC7EDBEC89B668884105BA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t57C63BDE4B938B0DA7CC7EDBEC89B668884105BA);
	ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_anim), (&___1_fromValueGetter), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_to : &___2_to), (&___3_durationMs), (&___4_onValueChanged));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 3502));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 3503));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 3504));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 3505));
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_0 = ___0_anim;
		Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C* L_1 = ___1_fromValueGetter;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 3506));
		NullCheck(L_0);
		InvokerActionInvoker1< Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_0, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 3506));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 3507));
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_2 = ___0_anim;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_to : &___2_to), SizeOf_T_t57C63BDE4B938B0DA7CC7EDBEC89B668884105BA);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 3508));
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_3: *(void**)L_3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 3508));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 3509));
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_4 = ___0_anim;
		int32_t L_5 = ___3_durationMs;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 3510));
		NullCheck(L_4);
		InvokerActionInvoker1< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_4, L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 3510));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 3511));
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_6 = ___0_anim;
		Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E* L_7 = ___4_onValueChanged;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 3512));
		NullCheck(L_6);
		InvokerActionInvoker1< Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), L_6, L_7);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 3512));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 3513));
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_8 = ___0_anim;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 3514));
		NullCheck(L_8);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), L_8);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 3514));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 3515));
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_9 = ___0_anim;
		V_0 = L_9;
		goto IL_002d;
	}

IL_002d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 3516));
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.UIElements.VisualTreeUpdater::SetUpdater<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_SetUpdater_TisIl2CppFullySharedGenericAny_m4EF351A8B23A4EE9E88C20E5398468F5AC304360_gshared (VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9* __this, int32_t ___0_phase, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	memset(V_0, 0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	memset(V_1, 0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_phase));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 5207));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 5208));
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 5209));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 5210));
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_0 = (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449*)__this->___m_UpdaterArray_1;
		int32_t L_1 = ___0_phase;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 5211));
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 5211));
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0013;
		}
	}
	{
		goto IL_0019;
	}

IL_0013:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 5212));
		NullCheck((RuntimeObject*)G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)G_B2_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 5212));
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 5213));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 5214));
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (Il2CppFullySharedGenericAny*)L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 5214));
		il2cpp_codegen_memcpy(V_1, L_4, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_5 = (BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)__this->___m_Panel_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 5215));
		ConstrainedActionInvoker1< BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_6, (void*)(Il2CppFullySharedGenericAny*)V_1, L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 5215));
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		il2cpp_codegen_memcpy(V_0, L_7, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 5216));
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_8 = (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449*)__this->___m_UpdaterArray_1;
		int32_t L_9 = ___0_phase;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_10);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 5217));
		NullCheck(L_8);
		UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11(L_8, L_9, (RuntimeObject*)L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 5217));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 5218));
		return;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Volatile_Read_TisRuntimeObject_mDE75C7462350B2A7FB1546BCE22D13CBD69AC088_gshared (RuntimeObject** ___0_location, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = (RuntimeObject*)L_1->___Value_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_3;
		L_3 = il2cpp_unsafe_as<RuntimeObject*>(L_2);
		return L_3;
	}
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_mBB6C58646958F01615FEBF405DCE2A9926F81962_gshared (RuntimeObject** ___0_location, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = ___1_value;
		il2cpp_codegen_memory_barrier();
		L_1->___Value_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value_0), (void*)L_2);
		return;
	}
}
// T System.Xml.Linq.XDocument::GetFirstNode<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocument_GetFirstNode_TisRuntimeObject_mB6611AFC4A5D605253FE7A3ABB8BFCB6250CA705_gshared (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_t185C922661054AAD14F49676DD6F3CB10D652A30_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = (RuntimeObject*)((XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)__this)->___content_3;
		V_0 = ((XNode_t185C922661054AAD14F49676DD6F3CB10D652A30*)IsInstClass((RuntimeObject*)L_0, XNode_t185C922661054AAD14F49676DD6F3CB10D652A30_il2cpp_TypeInfo_var));
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0035;
		}
	}

IL_000f:
	{
		CHECK_PAUSE_POINT;
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_2 = V_0;
		NullCheck(L_2);
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_3 = (XNode_t185C922661054AAD14F49676DD6F3CB10D652A30*)L_2->___next_2;
		V_0 = L_3;
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_4 = V_0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
	}

IL_002c:
	{
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_7 = V_0;
		RuntimeObject* L_8 = (RuntimeObject*)((XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)__this)->___content_3;
		if ((!(((RuntimeObject*)(XNode_t185C922661054AAD14F49676DD6F3CB10D652A30*)L_7) == ((RuntimeObject*)(RuntimeObject*)L_8))))
		{
			goto IL_000f;
		}
	}

IL_0035:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_2;
		return L_9;
	}
}
// T System.Xml.Linq.XObject::Annotation<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XObject_Annotation_TisRuntimeObject_mA59EF6437D825A65AED4C032B09C4AAEAD53631E_gshared (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___annotations_1;
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___annotations_1;
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___annotations_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_0028:
	{
		V_1 = 0;
		goto IL_004d;
	}

IL_002c:
	{
		CHECK_PAUSE_POINT;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject* L_8 = V_2;
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_9 = V_2;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_10 = V_3;
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeObject* L_11 = V_3;
		return L_11;
	}

IL_0049:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004d:
	{
		int32_t L_13 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_002c;
		}
	}

IL_0053:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
		RuntimeObject* L_15 = V_4;
		return L_15;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* XmlListConverter_ToArray_TisIl2CppFullySharedGenericAny_mE842A5B9F83A5858104C85C66B591AD394929357_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tDC5A1FFD4912C532F838E238130A2E3F50CA030C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_tDC5A1FFD4912C532F838E238130A2E3F50CA030C);
	const Il2CppFullySharedGenericAny L_37 = L_15;
	RuntimeObject* V_0 = NULL;
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_1 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		CHECK_PAUSE_POINT;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		void* L_16 = UnBox_Any(L_14, il2cpp_rgctx_data(method->rgctx_data, 2), L_15);
		NullCheck(L_5);
		il2cpp_codegen_memcpy((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_16))), SizeOf_T_tDC5A1FFD4912C532F838E238130A2E3F50CA030C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_16))));
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0047:
	{
		int32_t L_18 = V_3;
		RuntimeObject* L_19 = V_0;
		NullCheck((RuntimeObject*)L_19);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_001a;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = V_2;
		return L_21;
	}

IL_0052:
	{
		RuntimeObject* L_22 = ___0_list;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_23 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_23);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_23);
		V_1 = L_23;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_22, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_22, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					RuntimeObject* L_25 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_26 = V_6;
					if (!L_26)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_27 = V_6;
					NullCheck(L_27);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				CHECK_PAUSE_POINT;
				RuntimeObject* L_28 = V_4;
				NullCheck(L_28);
				RuntimeObject* L_29;
				L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_28);
				V_5 = L_29;
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_30 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_31 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
				RuntimeObject* L_32 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
				RuntimeObject* L_35 = ___1_nsResolver;
				NullCheck(L_31);
				RuntimeObject* L_36;
				L_36 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_31, L_32, L_34, L_35);
				void* L_38 = UnBox_Any(L_36, il2cpp_rgctx_data(method->rgctx_data, 2), L_37);
				NullCheck(L_30);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_38))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_38)))));
			}

IL_0093_1:
			{
				RuntimeObject* L_39 = V_4;
				NullCheck(L_39);
				bool L_40;
				L_40 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_39);
				if (L_40)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_41 = V_1;
		NullCheck(L_41);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_42;
		L_42 = InvokerFuncInvoker0< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_41);
		return L_42;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mD6B660A63955117687D6131FC1DB255161D1A2BA_gshared (intptr_t ___0_array, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(ArrayType)
	const uint32_t SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// ArrayType
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
	const Il2CppFullySharedGenericAny L_20 = L_12;
	const Il2CppFullySharedGenericAny L_28 = L_12;
	const Il2CppFullySharedGenericAny L_36 = L_12;
	const Il2CppFullySharedGenericAny L_44 = L_12;
	const Il2CppFullySharedGenericAny L_52 = L_12;
	const Il2CppFullySharedGenericAny L_60 = L_12;
	const Il2CppFullySharedGenericAny L_68 = L_12;
	const Il2CppFullySharedGenericAny L_76 = L_12;
	const Il2CppFullySharedGenericAny L_99 = L_12;
	const Il2CppFullySharedGenericAny L_122 = L_12;
	const Il2CppFullySharedGenericAny L_129 = L_12;
	const Il2CppFullySharedGenericAny L_130 = L_12;
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
	memset(V_3, 0, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	Il2CppFullySharedGenericAny V_24 = alloca(SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
	memset(V_24, 0, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_13), (&V_14), (&V_15), (&V_16), (&V_19), (&V_20), (&V_21), (&V_22));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3318));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3319));
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3320));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3321));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3322));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3322));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3323));
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3323));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3324));
		Type_t* L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3325));
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3325));
		V_1 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3326));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3327));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3328));
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3329));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3329));
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3330));
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3331));
		intptr_t L_10 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3332));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3332));
		void* L_13 = UnBox_Any((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1), L_12);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_13))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0041:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3333));
		Type_t* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3334));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3334));
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_14) == ((RuntimeObject*)(Type_t*)L_16))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3335));
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3336));
		intptr_t L_18 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3337));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_19;
		L_19 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3337));
		void* L_21 = UnBox_Any((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 1), L_20);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_21))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0065:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3338));
		Type_t* L_22 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3339));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3339));
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_22) == ((RuntimeObject*)(Type_t*)L_24))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3340));
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_0095;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3341));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3342));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3343));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3343));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3344));
		intptr_t L_26 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3345));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_26, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3345));
		void* L_29 = UnBox_Any((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 1), L_28);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_29))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0095:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3346));
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3347));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3347));
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3348));
		bool L_33 = V_6;
		if (!L_33)
		{
			goto IL_00b9;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3349));
		intptr_t L_34 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3350));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_35;
		L_35 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_34, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3350));
		void* L_37 = UnBox_Any((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1), L_36);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_37))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_00b9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3351));
		Type_t* L_38 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3352));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3352));
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_38) == ((RuntimeObject*)(Type_t*)L_40))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3353));
		bool L_41 = V_7;
		if (!L_41)
		{
			goto IL_00dd;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3354));
		intptr_t L_42 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3355));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_43;
		L_43 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_42, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3355));
		void* L_45 = UnBox_Any((RuntimeObject*)L_43, il2cpp_rgctx_data(method->rgctx_data, 1), L_44);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_45))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_00dd:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3356));
		Type_t* L_46 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3357));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3357));
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_46) == ((RuntimeObject*)(Type_t*)L_48))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3358));
		bool L_49 = V_8;
		if (!L_49)
		{
			goto IL_0101;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3359));
		intptr_t L_50 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3360));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_51;
		L_51 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_50, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3360));
		void* L_53 = UnBox_Any((RuntimeObject*)L_51, il2cpp_rgctx_data(method->rgctx_data, 1), L_52);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_53))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0101:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3361));
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3362));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3362));
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3363));
		bool L_57 = V_9;
		if (!L_57)
		{
			goto IL_0125;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3364));
		intptr_t L_58 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3365));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_59;
		L_59 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_58, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3365));
		void* L_61 = UnBox_Any((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1), L_60);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_61))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0125:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3366));
		Type_t* L_62 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3367));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3367));
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_62) == ((RuntimeObject*)(Type_t*)L_64))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3368));
		bool L_65 = V_10;
		if (!L_65)
		{
			goto IL_0149;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3369));
		intptr_t L_66 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3370));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_67;
		L_67 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_66, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3370));
		void* L_69 = UnBox_Any((RuntimeObject*)L_67, il2cpp_rgctx_data(method->rgctx_data, 1), L_68);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_69))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0149:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3371));
		Type_t* L_70 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3372));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3372));
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_70) == ((RuntimeObject*)(Type_t*)L_72))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3373));
		bool L_73 = V_11;
		if (!L_73)
		{
			goto IL_016d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3374));
		intptr_t L_74 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3375));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_75;
		L_75 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_74, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3375));
		void* L_77 = UnBox_Any((RuntimeObject*)L_75, il2cpp_rgctx_data(method->rgctx_data, 1), L_76);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_77))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_016d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3376));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3377));
		goto IL_0265;
	}

IL_0173:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3378));
		Type_t* L_78 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3379));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3379));
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_78) == ((RuntimeObject*)(Type_t*)L_80))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3380));
		bool L_81 = V_12;
		if (!L_81)
		{
			goto IL_01dc;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3381));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3382));
		intptr_t L_82 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3383));
		int32_t L_83;
		L_83 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_82, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3383));
		V_13 = L_83;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3384));
		int32_t L_84 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_85 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_84);
		V_14 = L_85;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3385));
		V_15 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3386));
		goto IL_01c3;
	}

IL_019d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3387));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3388));
		intptr_t L_86 = ___0_array;
		int32_t L_87 = V_15;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3389));
		intptr_t L_88;
		L_88 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_86, L_87, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3389));
		V_16 = L_88;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3390));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_89 = V_14;
		int32_t L_90 = V_15;
		intptr_t L_91 = V_16;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3391));
		String_t* L_92;
		L_92 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_91, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3391));
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_92);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(L_90), (String_t*)L_92);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3392));
		intptr_t L_93 = V_16;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3393));
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_93, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3393));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3394));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3395));
		int32_t L_94 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_01c3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3396));
		int32_t L_95 = V_15;
		int32_t L_96 = V_13;
		V_17 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3397));
		bool L_97 = V_17;
		if (L_97)
		{
			goto IL_019d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3398));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_98 = V_14;
		void* L_100 = UnBox_Any((RuntimeObject*)L_98, il2cpp_rgctx_data(method->rgctx_data, 1), L_99);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_100))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_01dc:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3399));
		Type_t* L_101 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3400));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3400));
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_101) == ((RuntimeObject*)(Type_t*)L_103))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3401));
		bool L_104 = V_18;
		if (!L_104)
		{
			goto IL_0242;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3402));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3403));
		intptr_t L_105 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3404));
		int32_t L_106;
		L_106 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_105, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3404));
		V_19 = L_106;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3405));
		int32_t L_107 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_108 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_107);
		V_20 = L_108;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3406));
		V_21 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3407));
		goto IL_022c;
	}

IL_0206:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3408));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3409));
		intptr_t L_109 = ___0_array;
		int32_t L_110 = V_21;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3410));
		intptr_t L_111;
		L_111 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_109, L_110, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3410));
		V_22 = L_111;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3411));
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_112 = V_20;
		int32_t L_113 = V_21;
		intptr_t L_114 = V_22;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3412));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_115 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_115);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_115, L_114, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3412));
		NullCheck(L_112);
		ArrayElementTypeCheck (L_112, L_115);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(L_113), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_115);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3413));
		intptr_t L_116 = V_22;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3414));
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_116, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3414));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3415));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3416));
		int32_t L_117 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_117, 1));
	}

IL_022c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3417));
		int32_t L_118 = V_21;
		int32_t L_119 = V_19;
		V_23 = (bool)((((int32_t)L_118) < ((int32_t)L_119))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3418));
		bool L_120 = V_23;
		if (L_120)
		{
			goto IL_0206;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3419));
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_121 = V_20;
		void* L_123 = UnBox_Any((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 1), L_122);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_123))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0242:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3420));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3421));
		Type_t* L_124 = V_0;
		Type_t* L_125 = L_124;
		G_B31_0 = L_125;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_125)
		{
			G_B32_0 = L_125;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3422));
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_126;
		L_126 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3422));
		G_B33_0 = L_126;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3423));
		String_t* L_127;
		L_127 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3423));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3424));
		Exception_t* L_128 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_128);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_128, L_127, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3424));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_128, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mD6B660A63955117687D6131FC1DB255161D1A2BA_RuntimeMethod_var)));
	}

IL_0265:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3425));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_24, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		il2cpp_codegen_memcpy(L_129, V_24, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		il2cpp_codegen_memcpy(V_3, L_129, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0272:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3426));
		il2cpp_codegen_memcpy(L_130, V_3, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_130, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		return;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisIl2CppFullySharedGenericAny_m5714D44FF454CB672C9F04F1316533DAD6C6BCBB_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_jclass), (&___1_fieldName), (&___2_isStatic));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3448));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3449));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3450));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3451));
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3452));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3452));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3453));
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3453));
		bool L_5 = ___2_isStatic;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3454));
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01(L_0, L_1, L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3454));
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3455));
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisIl2CppFullySharedGenericAny_mBB787943D3DB158E741B5FF2B66EFB90237F837C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_jclass), (&___1_methodName), (&___2_args), (&___3_isStatic));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3441));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3442));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3443));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3444));
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3445));
		String_t* L_3;
		L_3 = InvokerFuncInvoker1< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3445));
		bool L_4 = ___3_isStatic;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3446));
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3446));
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3447));
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisIl2CppFullySharedGenericAny_m5BFF8BF215EBBD2B94DB67B384DAB97E221FA134_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_args));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3720));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3721));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3722));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3723));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3724));
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3724));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3725));
		StringBuilder_t* L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3726));
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3726));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3727));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3728));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3729));
		goto IL_002e;
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3730));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3731));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3732));
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3733));
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3733));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3734));
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3734));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3735));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3736));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3737));
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3738));
		StringBuilder_t* L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3739));
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3739));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3740));
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3741));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3741));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3742));
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3742));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3743));
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3743));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3744));
		StringBuilder_t* L_22 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3745));
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3745));
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 3746));
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.Int32 UniGLTF.glTFExtensions::GetAccessorElementCount<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_GetAccessorElementCount_TisIl2CppFullySharedGenericAny_m68161F28C67BF028DFD87A1E519E23B825AD7F20_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentVec_tD7B7AA5EB22E95F8F7C4E52B3A5CA4F6B6ABF5B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mDDA0C5A3B6082004767DC2D63623080F9990FF87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_tC121239197B90BD22976E4CEF235DC6C404F352F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentVec_tD7B7AA5EB22E95F8F7C4E52B3A5CA4F6B6ABF5B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5890));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniGLTF + 5891));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5892));
		// var cv = default(ComponentVec);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5893));
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_tD7B7AA5EB22E95F8F7C4E52B3A5CA4F6B6ABF5B2));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5894));
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_tC121239197B90BD22976E4CEF235DC6C404F352F_il2cpp_TypeInfo_var);
		Dictionary_2_t7C687CB53080A5BE3F3D34D182E1F6DFC564B87A* L_0 = ((glTFExtensions_tC121239197B90BD22976E4CEF235DC6C404F352F_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_tC121239197B90BD22976E4CEF235DC6C404F352F_il2cpp_TypeInfo_var))->___ComponentTypeMap_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5895));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5895));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5896));
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mDDA0C5A3B6082004767DC2D63623080F9990FF87(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mDDA0C5A3B6082004767DC2D63623080F9990FF87_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5896));
		V_1 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5897));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5898));
		// return cv.ElementCount;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5899));
		ComponentVec_tD7B7AA5EB22E95F8F7C4E52B3A5CA4F6B6ABF5B2 L_5 = V_0;
		int32_t L_6 = (int32_t)L_5.___ElementCount_1;
		V_2 = L_6;
		goto IL_0032;
	}

IL_002d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5900));
		// return 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5901));
		V_2 = 1;
		goto IL_0032;
	}

IL_0032:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5902));
		int32_t L_7 = V_2;
		return L_7;
	}
}
// System.String UniGLTF.glTFExtensions::GetAccessorType<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* glTFExtensions_GetAccessorType_TisIl2CppFullySharedGenericAny_m954E132BC027DCAA35823665232186DEDFA096B9_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentVec_tD7B7AA5EB22E95F8F7C4E52B3A5CA4F6B6ABF5B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mDDA0C5A3B6082004767DC2D63623080F9990FF87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_tC121239197B90BD22976E4CEF235DC6C404F352F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentVec_tD7B7AA5EB22E95F8F7C4E52B3A5CA4F6B6ABF5B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5869));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniGLTF + 5870));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5871));
		// var cv = default(ComponentVec);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5872));
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_tD7B7AA5EB22E95F8F7C4E52B3A5CA4F6B6ABF5B2));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5873));
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_tC121239197B90BD22976E4CEF235DC6C404F352F_il2cpp_TypeInfo_var);
		Dictionary_2_t7C687CB53080A5BE3F3D34D182E1F6DFC564B87A* L_0 = ((glTFExtensions_tC121239197B90BD22976E4CEF235DC6C404F352F_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_tC121239197B90BD22976E4CEF235DC6C404F352F_il2cpp_TypeInfo_var))->___ComponentTypeMap_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5874));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5874));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5875));
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mDDA0C5A3B6082004767DC2D63623080F9990FF87(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mDDA0C5A3B6082004767DC2D63623080F9990FF87_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5875));
		V_1 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5876));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0074;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5877));
		// switch (cv.ElementCount)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5878));
		ComponentVec_tD7B7AA5EB22E95F8F7C4E52B3A5CA4F6B6ABF5B2 L_5 = V_0;
		int32_t L_6 = (int32_t)L_5.___ElementCount_1;
		V_3 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5879));
		int32_t L_7 = V_3;
		V_2 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5880));
		int32_t L_8 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract(L_8, 2)))
		{
			case 0:
			{
				goto IL_004a;
			}
			case 1:
			{
				goto IL_0053;
			}
			case 2:
			{
				goto IL_005c;
			}
		}
	}
	{
		goto IL_0043;
	}

IL_0043:
	{
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)16))))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_006e;
	}

IL_004a:
	{
		// case 2: return "VEC2";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5881));
		V_4 = _stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A;
		goto IL_007e;
	}

IL_0053:
	{
		// case 3: return "VEC3";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5882));
		V_4 = _stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636;
		goto IL_007e;
	}

IL_005c:
	{
		// case 4: return "VEC4";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5883));
		V_4 = _stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3;
		goto IL_007e;
	}

IL_0065:
	{
		// case 16: return "MAT4";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5884));
		V_4 = _stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7;
		goto IL_007e;
	}

IL_006e:
	{
		// default: throw new Exception();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5885));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5886));
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5886));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetAccessorType_TisIl2CppFullySharedGenericAny_m954E132BC027DCAA35823665232186DEDFA096B9_RuntimeMethod_var)));
	}

IL_0074:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5887));
		// return "SCALAR";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5888));
		V_4 = _stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC;
		goto IL_007e;
	}

IL_007e:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5889));
		String_t* L_11 = V_4;
		return L_11;
	}
}
// UniGLTF.glComponentType UniGLTF.glTFExtensions::GetComponentType<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_GetComponentType_TisIl2CppFullySharedGenericAny_m6DBC7981526F9F84942370E50476CDB3120788A8_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentVec_tD7B7AA5EB22E95F8F7C4E52B3A5CA4F6B6ABF5B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mDDA0C5A3B6082004767DC2D63623080F9990FF87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glComponentType_t77828D9FADFD98A4C7CF96E191C303861ECFAAFB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_tC121239197B90BD22976E4CEF235DC6C404F352F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentVec_tD7B7AA5EB22E95F8F7C4E52B3A5CA4F6B6ABF5B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5818));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniGLTF + 5819));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5820));
		// var cv = default(ComponentVec);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5821));
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_tD7B7AA5EB22E95F8F7C4E52B3A5CA4F6B6ABF5B2));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5822));
		il2cpp_codegen_runtime_class_init_inline(glTFExtensions_tC121239197B90BD22976E4CEF235DC6C404F352F_il2cpp_TypeInfo_var);
		Dictionary_2_t7C687CB53080A5BE3F3D34D182E1F6DFC564B87A* L_0 = ((glTFExtensions_tC121239197B90BD22976E4CEF235DC6C404F352F_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_tC121239197B90BD22976E4CEF235DC6C404F352F_il2cpp_TypeInfo_var))->___ComponentTypeMap_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5823));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5823));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5824));
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mDDA0C5A3B6082004767DC2D63623080F9990FF87(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mDDA0C5A3B6082004767DC2D63623080F9990FF87_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5824));
		V_1 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5825));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5826));
		// return cv.ComponentType;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5827));
		ComponentVec_tD7B7AA5EB22E95F8F7C4E52B3A5CA4F6B6ABF5B2 L_5 = V_0;
		int32_t L_6 = (int32_t)L_5.___ComponentType_0;
		V_2 = L_6;
		goto IL_0112;
	}

IL_0030:
	{
		// else if (typeof(T) == typeof(sbyte))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5828));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5829));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5829));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5830));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5830));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5831));
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5831));
		V_3 = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5832));
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0059;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5833));
		// return glComponentType.BYTE;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5834));
		V_2 = (int32_t)((int32_t)5120);
		goto IL_0112;
	}

IL_0059:
	{
		// else if (typeof(T) == typeof(byte))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5835));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5836));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5836));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5837));
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5837));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5838));
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5838));
		V_4 = L_17;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5839));
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0084;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5840));
		// return glComponentType.UNSIGNED_BYTE;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5841));
		V_2 = (int32_t)((int32_t)5121);
		goto IL_0112;
	}

IL_0084:
	{
		// else if (typeof(T) == typeof(ushort))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5842));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5843));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5843));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5844));
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5844));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5845));
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5845));
		V_5 = L_23;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5846));
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5847));
		// return glComponentType.UNSIGNED_SHORT;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5848));
		V_2 = (int32_t)((int32_t)5123);
		goto IL_0112;
	}

IL_00ac:
	{
		// else if (typeof(T) == typeof(uint))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5849));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5850));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5850));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5851));
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5851));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5852));
		bool L_29;
		L_29 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_26, L_28, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5852));
		V_6 = L_29;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5853));
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_00d4;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5854));
		// return glComponentType.UNSIGNED_INT;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5855));
		V_2 = (int32_t)((int32_t)5125);
		goto IL_0112;
	}

IL_00d4:
	{
		// else if (typeof(T) == typeof(float))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5856));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5857));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5857));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5858));
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5858));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5859));
		bool L_35;
		L_35 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_32, L_34, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5859));
		V_7 = L_35;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5860));
		bool L_36 = V_7;
		if (!L_36)
		{
			goto IL_00fc;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5861));
		// return glComponentType.FLOAT;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5862));
		V_2 = (int32_t)((int32_t)5126);
		goto IL_0112;
	}

IL_00fc:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5863));
		// throw new NotImplementedException(typeof(T).Name);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5864));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5865));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5865));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5866));
		NullCheck((MemberInfo_t*)L_38);
		String_t* L_39;
		L_39 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_38);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5866));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5867));
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_40 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_40);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_40, L_39, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5867));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetComponentType_TisIl2CppFullySharedGenericAny_m6DBC7981526F9F84942370E50476CDB3120788A8_RuntimeMethod_var)));
	}

IL_0112:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniGLTF + 5868));
		int32_t L_41 = V_2;
		return L_41;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 2651));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 2652));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 2653));
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_0 = __this->___U3ChierarchyU3Ek__BackingField_51;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = __this->____cancellationToken_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var))->___s_defaultTaskScheduler_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CFactoryU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		void* L_0 = ___0_value;
		*__this = ((intptr_t)L_0);
		return;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_gshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____array_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mEF96248898C14F3687A5C72B920F841701E4E13C_gshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mEF96248898C14F3687A5C72B920F841701E4E13C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ArraySegment_1_get_Count_mEF96248898C14F3687A5C72B920F841701E4E13C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_gshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->____offset_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___1_length;
		__this->____length_1 = L_2;
		return;
	}
}
