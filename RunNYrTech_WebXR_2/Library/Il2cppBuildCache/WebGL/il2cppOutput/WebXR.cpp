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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct VirtActionInvoker9
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct GenericVirtActionInvoker9
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InterfaceActionInvoker9
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct GenericInterfaceActionInvoker9
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<WebXR.WebXRHandData>
struct Action_1_t5C191254F3AC3B22208FB2C964A1D1BDD3BF3CE6;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B;
// System.Collections.Generic.Dictionary`2<WebXR.WebXRController/ButtonTypes,WebXR.WebXRControllerButton>
struct Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F;
// System.Collections.Generic.IEqualityComparer`1<WebXR.WebXRController/ButtonTypes>
struct IEqualityComparer_1_t7A3B6EF32B6D545A6016243771B93E3D41E42F26;
// System.Collections.Generic.Dictionary`2/KeyCollection<WebXR.WebXRController/ButtonTypes,WebXR.WebXRControllerButton>
struct KeyCollection_t39BEA7A8C91109C3E14BA94B96AEBA029E6AB944;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B;
// System.Collections.Generic.List`1<WebXR.WebXRSubsystemDescriptor>
struct List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0;
// UnityEngine.SubsystemDescriptor`1<System.Object>
struct SubsystemDescriptor_1_tEA7E5F11DBF319514A9F77C9765671DF1A3C8A7A;
// UnityEngine.SubsystemDescriptor`1<WebXR.WebXRSubsystem>
struct SubsystemDescriptor_1_tC313893D232E084BADBC49A01C5BB2D397DD6B6F;
// WebXR.SubsystemLifecycleManager`2<System.Object,System.Object>
struct SubsystemLifecycleManager_2_t5C0D2374317678698CB068F42DEF4E33B8E2A900;
// WebXR.SubsystemLifecycleManager`2<WebXR.WebXRSubsystem,WebXR.WebXRSubsystemDescriptor>
struct SubsystemLifecycleManager_2_tC137F129C0687C80EF6420FC92D442025CDEC55F;
// UnityEngine.Subsystem`1<System.Object>
struct Subsystem_1_t4575204F3B43AA9E23E2950B19B23DDA26158377;
// UnityEngine.Subsystem`1<WebXR.WebXRSubsystemDescriptor>
struct Subsystem_1_t163429EC8FD014939B841046D553AAE4F4B65A7F;
// System.Collections.Generic.Dictionary`2/ValueCollection<WebXR.WebXRController/ButtonTypes,WebXR.WebXRControllerButton>
struct ValueCollection_t039ACF24872051DDDBD50D2254BC88E62C469CEC;
// System.Collections.Generic.Dictionary`2/Entry<WebXR.WebXRController/ButtonTypes,WebXR.WebXRControllerButton>[]
struct EntryU5BU5D_tE5AEEDB148ABF67F4438B9D4B7F7471CB17D06AE;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// WebXR.WebXRControllerButton[]
struct WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A;
// WebXR.WebXRJointData[]
struct WebXRJointDataU5BU5D_tE01BEDB0F1BF89E4192E3F04E7BDA90EEE7C7A76;
// WebXR.WebXRSubsystemDescriptor[]
struct WebXRSubsystemDescriptorU5BU5D_t95846E709E5A7011E5F32525EB4DD4C700A23975;
// UnityEngine.XR.XRDisplaySubsystemDescriptor[]
struct XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642;
// UnityEngine.XR.XRInputSubsystemDescriptor[]
struct XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// System.String
struct String_t;
// UnityEngine.Subsystem
struct Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4;
// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// WebXR.WebXRCamera
struct WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD;
// WebXR.WebXRController
struct WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB;
// WebXR.WebXRControllerButton
struct WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A;
// WebXR.WebXRControllerData
struct WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606;
// WebXR.WebXRControllersProfiles
struct WebXRControllersProfiles_t2D147E1F114FABC0C5415E99EEF169E431A43FCB;
// WebXR.WebXRDisplayCapabilities
struct WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5;
// WebXR.WebXRHandData
struct WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE;
// WebXR.WebXRHitPoseData
struct WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587;
// WebXR.WebXRLoader
struct WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54;
// WebXR.WebXRManager
struct WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80;
// WebXR.WebXRSettings
struct WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E;
// WebXR.WebXRSubsystem
struct WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8;
// WebXR.WebXRSubsystemDescriptor
struct WebXRSubsystemDescriptor_t49D846DE8AA1635F1086FFDF794C244C7E314A71;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// WebXR.WebXRSubsystem/ControllerUpdate
struct ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF;
// WebXR.WebXRSubsystem/EndXREvent
struct EndXREvent_tAEF82376310EE655EF1E985071F2D45794196F5F;
// WebXR.WebXRSubsystem/HandUpdate
struct HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C;
// WebXR.WebXRSubsystem/HeadsetUpdate
struct HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD;
// WebXR.WebXRSubsystem/HitTestUpdate
struct HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35;
// WebXR.WebXRSubsystem/InputProfilesEvent
struct InputProfilesEvent_t88DDB46B55E92BBBC75C03C1EDBD7AB266F240A6;
// WebXR.WebXRSubsystem/StartXREvent
struct StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA;
// WebXR.WebXRSubsystem/VisibilityChange
struct VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6;
// WebXR.WebXRSubsystem/VisibilityChangeEvent
struct VisibilityChangeEvent_t577FC56D660C998476CA4FFB4EB1E7086216016D;
// WebXR.WebXRSubsystem/XRCapabilitiesEvent
struct XRCapabilitiesEvent_t3F5640F3A08933111CC7FE5B43BCE122803DCF7F;
// WebXR.WebXRSubsystem/XRCapabilitiesUpdate
struct XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF;
// WebXR.WebXRSubsystem/XRChange
struct XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndXREvent_tAEF82376310EE655EF1E985071F2D45794196F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputProfilesEvent_t88DDB46B55E92BBBC75C03C1EDBD7AB266F240A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemRegistration_tC119E4E15B2EA84DE58F44840EBED3221FF8CFF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisibilityChangeEvent_t577FC56D660C998476CA4FFB4EB1E7086216016D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRJointDataU5BU5D_tE01BEDB0F1BF89E4192E3F04E7BDA90EEE7C7A76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRState_t4A54A50986B89C88F1AB491420BBD785AE446EF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRSubsystemDescriptor_t49D846DE8AA1635F1086FFDF794C244C7E314A71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRVisibilityState_t10AEE1924E4E1ABDC8DCDC2238AD9F60D0F74686_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRCapabilitiesEvent_t3F5640F3A08933111CC7FE5B43BCE122803DCF7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0491ADD30E5917C8C04A75C1C1EB6BF687A9409A;
IL2CPP_EXTERN_C String_t* _stringLiteral111B20F0F7B41BAAB439CEDD4E3A3BE9E8CB4560;
IL2CPP_EXTERN_C String_t* _stringLiteral1BC205282494EDAD88FEBA407496CDAA04E87325;
IL2CPP_EXTERN_C String_t* _stringLiteral1EBB1A288D1FD2638C9CF918E19C9C00ABEDEC11;
IL2CPP_EXTERN_C String_t* _stringLiteral44A2D1E81273492703A3E72527231CF054E24ED6;
IL2CPP_EXTERN_C String_t* _stringLiteral49FDE991572340057608BB55A3821B9BFA1E6E35;
IL2CPP_EXTERN_C String_t* _stringLiteral58241AA816E08701F7E8CDAA4AE7E1305DD05EAC;
IL2CPP_EXTERN_C String_t* _stringLiteral6B0894ABEAF7E64D2686097C87A687C8FEA277AA;
IL2CPP_EXTERN_C String_t* _stringLiteral87A1893D9F40A4929689F53B0A652425CBADD216;
IL2CPP_EXTERN_C String_t* _stringLiteral8D585C0CF017666D27E62797181776A7A1789937;
IL2CPP_EXTERN_C String_t* _stringLiteralDCD582124812A5577151DA28727D87A7C1AA2DBE;
IL2CPP_EXTERN_C String_t* _stringLiteralE1383DB48A524C3C40C8363BDFBF8E7A18E02222;
IL2CPP_EXTERN_C String_t* _stringLiteralF67A84AA24F72BA4244465A82FF0DAE9F0B01BCD;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m366FFFCEDB7C0D9C7BFDA740C2A0D4EF14DE932A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC8C06E89049D808E9DC0E7C6A0815DCED31A7B85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m968FD5FAC291C05382FB024DCC417F79C14EADDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m51A27FE6D564DE0C0D0B95FB3949D525AE94C30B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mF066975DEB4C3F50E6E39533848F8CE1D965C06E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisWebXRControllersProfiles_t2D147E1F114FABC0C5415E99EEF169E431A43FCB_mE327F9A07CC912CF5670004A9910709331F8BC78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m93C3F7C2F840C50389F14482E14626F47720851E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptor_1__ctor_m91CAA0F47FB4E876A0CAAD65E9F06C00FB029143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_2_Awake_m2C3EDFC728A9C76DE09CE8DBB95688E08F0498BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_2__ctor_mBBA88FFADFF4C94BAE735F6E1CA5E6A4C1B76071_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_2_get_isSubsystemAvailable_m8C932EE292523EE009F248ED2F1552309BA5DB31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Subsystem_1__ctor_m9224C2EEFDB00429F35D5BDA752C2D2F8FA44D2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRCamera_OnHeadsetUpdate_m2C9AA445B591ADBF1E15CE9A7BEED1FE3BEC02AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRCamera_OnXRChange_mDA142651E420EFEAC77C98502765A368826E2BFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRController_OnControllerUpdate_m37536E5068DB7734C49493503E870F2D87D252FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRController_OnHandUpdateInternal_m8464886052D93FC96DB3D3CB342F0F183EAAFBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRSettings_EnumToString_TisReferenceSpaceTypes_tBDD052CAB9B79CAA3BDEED124DD35ED86ABAD653_m3E33645A282964BC1F00C1D0981837F2E884FA34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRSettings_FlagsToString_TisExtraFeatureTypes_tCEFCA040A0A48061BB1AEC424F5D136F2FE76E80_mE719ECF95C8728B88C0B668ED4E0CC19438B44CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRSubsystem_OnEndXR_m619B5F929D1B8F67A360917710695E1474E03F14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRSubsystem_OnInputProfiles_m13B2017F20BC87FB5A6652011A0BA662CFD7F26B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRSubsystem_OnStartAR_mCD56D3757C78CD5745E78516435B8036BFF851B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRSubsystem_OnStartVR_mBD08B936DAEAEF64B167868B8E75F837B6AAFD76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRSubsystem_OnXRCapabilities_mFB0D9BE0B209BB2D46B00B8BDAAA4809D5C2AFFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRSubsystem_UpdateVisibilityState_m315E0A2C9F0B076FE8B18D2898B4BAB50A324D39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisWebXRSubsystemDescriptor_t49D846DE8AA1635F1086FFDF794C244C7E314A71_TisWebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_m316DF412F0D028461B7ABE76A715F1FF83AEEF38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisWebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_mECA11D8D4F9F44BF9DC8B860C29F8C1D97336B31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m6098CB15555B2E45C3BCAB9086012011CB382DAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_mC98D5F7030C574A69D86EA429F90CF769106A5EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5;;
struct WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshaled_pinvoke;
struct WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshaled_pinvoke;;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A;
struct WebXRJointDataU5BU5D_tE01BEDB0F1BF89E4192E3F04E7BDA90EEE7C7A76;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7CD2072ED0B6A135E26D7ECEED92CC66AEBE8D3A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<WebXR.WebXRController/ButtonTypes,WebXR.WebXRControllerButton>
struct Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE5AEEDB148ABF67F4438B9D4B7F7471CB17D06AE* ___entries_1;
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
	KeyCollection_t39BEA7A8C91109C3E14BA94B96AEBA029E6AB944 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t039ACF24872051DDDBD50D2254BC88E62C469CEC * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F, ___entries_1)); }
	inline EntryU5BU5D_tE5AEEDB148ABF67F4438B9D4B7F7471CB17D06AE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE5AEEDB148ABF67F4438B9D4B7F7471CB17D06AE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE5AEEDB148ABF67F4438B9D4B7F7471CB17D06AE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F, ___keys_7)); }
	inline KeyCollection_t39BEA7A8C91109C3E14BA94B96AEBA029E6AB944 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t39BEA7A8C91109C3E14BA94B96AEBA029E6AB944 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t39BEA7A8C91109C3E14BA94B96AEBA029E6AB944 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F, ___values_8)); }
	inline ValueCollection_t039ACF24872051DDDBD50D2254BC88E62C469CEC * get_values_8() const { return ___values_8; }
	inline ValueCollection_t039ACF24872051DDDBD50D2254BC88E62C469CEC ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t039ACF24872051DDDBD50D2254BC88E62C469CEC * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<WebXR.WebXRSubsystemDescriptor>
struct List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WebXRSubsystemDescriptorU5BU5D_t95846E709E5A7011E5F32525EB4DD4C700A23975* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6, ____items_1)); }
	inline WebXRSubsystemDescriptorU5BU5D_t95846E709E5A7011E5F32525EB4DD4C700A23975* get__items_1() const { return ____items_1; }
	inline WebXRSubsystemDescriptorU5BU5D_t95846E709E5A7011E5F32525EB4DD4C700A23975** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WebXRSubsystemDescriptorU5BU5D_t95846E709E5A7011E5F32525EB4DD4C700A23975* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WebXRSubsystemDescriptorU5BU5D_t95846E709E5A7011E5F32525EB4DD4C700A23975* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6_StaticFields, ____emptyArray_5)); }
	inline WebXRSubsystemDescriptorU5BU5D_t95846E709E5A7011E5F32525EB4DD4C700A23975* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WebXRSubsystemDescriptorU5BU5D_t95846E709E5A7011E5F32525EB4DD4C700A23975** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WebXRSubsystemDescriptorU5BU5D_t95846E709E5A7011E5F32525EB4DD4C700A23975* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048, ____items_1)); }
	inline XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* get__items_1() const { return ____items_1; }
	inline XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_StaticFields, ____emptyArray_5)); }
	inline XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____items_1)); }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* get__items_1() const { return ____items_1; }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_StaticFields, ____emptyArray_5)); }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// UnityEngine.Subsystem
struct Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4  : public RuntimeObject
{
public:
	// UnityEngine.ISubsystemDescriptor UnityEngine.Subsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_0;

public:
	inline static int32_t get_offset_of_m_SubsystemDescriptor_0() { return static_cast<int32_t>(offsetof(Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4, ___m_SubsystemDescriptor_0)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_0() const { return ___m_SubsystemDescriptor_0; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_0() { return &___m_SubsystemDescriptor_0; }
	inline void set_m_SubsystemDescriptor_0(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_0), (void*)value);
	}
};


// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245  : public RuntimeObject
{
public:
	// System.String UnityEngine.SubsystemDescriptor::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemDescriptor::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}
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

// WebXR.WebXRControllerButton
struct WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A  : public RuntimeObject
{
public:
	// System.Boolean WebXR.WebXRControllerButton::pressed
	bool ___pressed_0;
	// System.Boolean WebXR.WebXRControllerButton::down
	bool ___down_1;
	// System.Boolean WebXR.WebXRControllerButton::up
	bool ___up_2;
	// System.Single WebXR.WebXRControllerButton::value
	float ___value_3;

public:
	inline static int32_t get_offset_of_pressed_0() { return static_cast<int32_t>(offsetof(WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A, ___pressed_0)); }
	inline bool get_pressed_0() const { return ___pressed_0; }
	inline bool* get_address_of_pressed_0() { return &___pressed_0; }
	inline void set_pressed_0(bool value)
	{
		___pressed_0 = value;
	}

	inline static int32_t get_offset_of_down_1() { return static_cast<int32_t>(offsetof(WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A, ___down_1)); }
	inline bool get_down_1() const { return ___down_1; }
	inline bool* get_address_of_down_1() { return &___down_1; }
	inline void set_down_1(bool value)
	{
		___down_1 = value;
	}

	inline static int32_t get_offset_of_up_2() { return static_cast<int32_t>(offsetof(WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A, ___up_2)); }
	inline bool get_up_2() const { return ___up_2; }
	inline bool* get_address_of_up_2() { return &___up_2; }
	inline void set_up_2(bool value)
	{
		___up_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A, ___value_3)); }
	inline float get_value_3() const { return ___value_3; }
	inline float* get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(float value)
	{
		___value_3 = value;
	}
};


// WebXR.WebXRControllersProfiles
struct WebXRControllersProfiles_t2D147E1F114FABC0C5415E99EEF169E431A43FCB  : public RuntimeObject
{
public:
	// System.String[] WebXR.WebXRControllersProfiles::conrtoller1
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___conrtoller1_0;
	// System.String[] WebXR.WebXRControllersProfiles::conrtoller2
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___conrtoller2_1;

public:
	inline static int32_t get_offset_of_conrtoller1_0() { return static_cast<int32_t>(offsetof(WebXRControllersProfiles_t2D147E1F114FABC0C5415E99EEF169E431A43FCB, ___conrtoller1_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_conrtoller1_0() const { return ___conrtoller1_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_conrtoller1_0() { return &___conrtoller1_0; }
	inline void set_conrtoller1_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___conrtoller1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conrtoller1_0), (void*)value);
	}

	inline static int32_t get_offset_of_conrtoller2_1() { return static_cast<int32_t>(offsetof(WebXRControllersProfiles_t2D147E1F114FABC0C5415E99EEF169E431A43FCB, ___conrtoller2_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_conrtoller2_1() const { return ___conrtoller2_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_conrtoller2_1() { return &___conrtoller2_1; }
	inline void set_conrtoller2_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___conrtoller2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conrtoller2_1), (void*)value);
	}
};


// WebXR.WebXRHandData
struct WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE  : public RuntimeObject
{
public:
	// System.Int32 WebXR.WebXRHandData::frame
	int32_t ___frame_0;
	// System.Boolean WebXR.WebXRHandData::enabled
	bool ___enabled_1;
	// System.Int32 WebXR.WebXRHandData::hand
	int32_t ___hand_2;
	// System.Single WebXR.WebXRHandData::trigger
	float ___trigger_3;
	// System.Single WebXR.WebXRHandData::squeeze
	float ___squeeze_4;
	// WebXR.WebXRJointData[] WebXR.WebXRHandData::joints
	WebXRJointDataU5BU5D_tE01BEDB0F1BF89E4192E3F04E7BDA90EEE7C7A76* ___joints_5;

public:
	inline static int32_t get_offset_of_frame_0() { return static_cast<int32_t>(offsetof(WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE, ___frame_0)); }
	inline int32_t get_frame_0() const { return ___frame_0; }
	inline int32_t* get_address_of_frame_0() { return &___frame_0; }
	inline void set_frame_0(int32_t value)
	{
		___frame_0 = value;
	}

	inline static int32_t get_offset_of_enabled_1() { return static_cast<int32_t>(offsetof(WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE, ___enabled_1)); }
	inline bool get_enabled_1() const { return ___enabled_1; }
	inline bool* get_address_of_enabled_1() { return &___enabled_1; }
	inline void set_enabled_1(bool value)
	{
		___enabled_1 = value;
	}

	inline static int32_t get_offset_of_hand_2() { return static_cast<int32_t>(offsetof(WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE, ___hand_2)); }
	inline int32_t get_hand_2() const { return ___hand_2; }
	inline int32_t* get_address_of_hand_2() { return &___hand_2; }
	inline void set_hand_2(int32_t value)
	{
		___hand_2 = value;
	}

	inline static int32_t get_offset_of_trigger_3() { return static_cast<int32_t>(offsetof(WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE, ___trigger_3)); }
	inline float get_trigger_3() const { return ___trigger_3; }
	inline float* get_address_of_trigger_3() { return &___trigger_3; }
	inline void set_trigger_3(float value)
	{
		___trigger_3 = value;
	}

	inline static int32_t get_offset_of_squeeze_4() { return static_cast<int32_t>(offsetof(WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE, ___squeeze_4)); }
	inline float get_squeeze_4() const { return ___squeeze_4; }
	inline float* get_address_of_squeeze_4() { return &___squeeze_4; }
	inline void set_squeeze_4(float value)
	{
		___squeeze_4 = value;
	}

	inline static int32_t get_offset_of_joints_5() { return static_cast<int32_t>(offsetof(WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE, ___joints_5)); }
	inline WebXRJointDataU5BU5D_tE01BEDB0F1BF89E4192E3F04E7BDA90EEE7C7A76* get_joints_5() const { return ___joints_5; }
	inline WebXRJointDataU5BU5D_tE01BEDB0F1BF89E4192E3F04E7BDA90EEE7C7A76** get_address_of_joints_5() { return &___joints_5; }
	inline void set_joints_5(WebXRJointDataU5BU5D_tE01BEDB0F1BF89E4192E3F04E7BDA90EEE7C7A76* value)
	{
		___joints_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joints_5), (void*)value);
	}
};


// WebXR.WebXRSubsystem/Native
struct Native_tCAF35494EE915B936B5BD8B2C4996E000E5BF984  : public RuntimeObject
{
public:

public:
};


// UnityEngine.SubsystemDescriptor`1<WebXR.WebXRSubsystem>
struct SubsystemDescriptor_1_tC313893D232E084BADBC49A01C5BB2D397DD6B6F  : public SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245
{
public:

public:
};


// UnityEngine.Subsystem`1<WebXR.WebXRSubsystemDescriptor>
struct Subsystem_1_t163429EC8FD014939B841046D553AAE4F4B65A7F  : public Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4
{
public:

public:
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


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
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


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
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


// WebXR.WebXRDisplayCapabilities
struct WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5 
{
public:
	// System.Boolean WebXR.WebXRDisplayCapabilities::canPresentAR
	bool ___canPresentAR_0;
	// System.Boolean WebXR.WebXRDisplayCapabilities::canPresentVR
	bool ___canPresentVR_1;

public:
	inline static int32_t get_offset_of_canPresentAR_0() { return static_cast<int32_t>(offsetof(WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5, ___canPresentAR_0)); }
	inline bool get_canPresentAR_0() const { return ___canPresentAR_0; }
	inline bool* get_address_of_canPresentAR_0() { return &___canPresentAR_0; }
	inline void set_canPresentAR_0(bool value)
	{
		___canPresentAR_0 = value;
	}

	inline static int32_t get_offset_of_canPresentVR_1() { return static_cast<int32_t>(offsetof(WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5, ___canPresentVR_1)); }
	inline bool get_canPresentVR_1() const { return ___canPresentVR_1; }
	inline bool* get_address_of_canPresentVR_1() { return &___canPresentVR_1; }
	inline void set_canPresentVR_1(bool value)
	{
		___canPresentVR_1 = value;
	}
};

// Native definition for P/Invoke marshalling of WebXR.WebXRDisplayCapabilities
struct WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshaled_pinvoke
{
	int32_t ___canPresentAR_0;
	int32_t ___canPresentVR_1;
};
// Native definition for COM marshalling of WebXR.WebXRDisplayCapabilities
struct WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshaled_com
{
	int32_t ___canPresentAR_0;
	int32_t ___canPresentVR_1;
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


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_SubsystemDescriptor_1)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_1() const { return ___m_SubsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_1() { return &___m_SubsystemDescriptor_1; }
	inline void set_m_SubsystemDescriptor_1(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
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


// WebXR.WebXRControllerData
struct WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606  : public RuntimeObject
{
public:
	// System.Int32 WebXR.WebXRControllerData::frame
	int32_t ___frame_0;
	// System.Boolean WebXR.WebXRControllerData::enabled
	bool ___enabled_1;
	// System.Int32 WebXR.WebXRControllerData::hand
	int32_t ___hand_2;
	// UnityEngine.Vector3 WebXR.WebXRControllerData::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	// UnityEngine.Quaternion WebXR.WebXRControllerData::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_4;
	// UnityEngine.Vector3 WebXR.WebXRControllerData::gripPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___gripPosition_5;
	// UnityEngine.Quaternion WebXR.WebXRControllerData::gripRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___gripRotation_6;
	// System.Single WebXR.WebXRControllerData::trigger
	float ___trigger_7;
	// System.Single WebXR.WebXRControllerData::squeeze
	float ___squeeze_8;
	// System.Single WebXR.WebXRControllerData::thumbstick
	float ___thumbstick_9;
	// System.Single WebXR.WebXRControllerData::thumbstickX
	float ___thumbstickX_10;
	// System.Single WebXR.WebXRControllerData::thumbstickY
	float ___thumbstickY_11;
	// System.Single WebXR.WebXRControllerData::touchpad
	float ___touchpad_12;
	// System.Single WebXR.WebXRControllerData::touchpadX
	float ___touchpadX_13;
	// System.Single WebXR.WebXRControllerData::touchpadY
	float ___touchpadY_14;
	// System.Single WebXR.WebXRControllerData::buttonA
	float ___buttonA_15;
	// System.Single WebXR.WebXRControllerData::buttonB
	float ___buttonB_16;
	// System.String[] WebXR.WebXRControllerData::profiles
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___profiles_17;

public:
	inline static int32_t get_offset_of_frame_0() { return static_cast<int32_t>(offsetof(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606, ___frame_0)); }
	inline int32_t get_frame_0() const { return ___frame_0; }
	inline int32_t* get_address_of_frame_0() { return &___frame_0; }
	inline void set_frame_0(int32_t value)
	{
		___frame_0 = value;
	}

	inline static int32_t get_offset_of_enabled_1() { return static_cast<int32_t>(offsetof(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606, ___enabled_1)); }
	inline bool get_enabled_1() const { return ___enabled_1; }
	inline bool* get_address_of_enabled_1() { return &___enabled_1; }
	inline void set_enabled_1(bool value)
	{
		___enabled_1 = value;
	}

	inline static int32_t get_offset_of_hand_2() { return static_cast<int32_t>(offsetof(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606, ___hand_2)); }
	inline int32_t get_hand_2() const { return ___hand_2; }
	inline int32_t* get_address_of_hand_2() { return &___hand_2; }
	inline void set_hand_2(int32_t value)
	{
		___hand_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606, ___position_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_3() const { return ___position_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_rotation_4() { return static_cast<int32_t>(offsetof(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606, ___rotation_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_4() const { return ___rotation_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_4() { return &___rotation_4; }
	inline void set_rotation_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_4 = value;
	}

	inline static int32_t get_offset_of_gripPosition_5() { return static_cast<int32_t>(offsetof(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606, ___gripPosition_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_gripPosition_5() const { return ___gripPosition_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_gripPosition_5() { return &___gripPosition_5; }
	inline void set_gripPosition_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___gripPosition_5 = value;
	}

	inline static int32_t get_offset_of_gripRotation_6() { return static_cast<int32_t>(offsetof(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606, ___gripRotation_6)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_gripRotation_6() const { return ___gripRotation_6; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_gripRotation_6() { return &___gripRotation_6; }
	inline void set_gripRotation_6(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___gripRotation_6 = value;
	}

	inline static int32_t get_offset_of_trigger_7() { return static_cast<int32_t>(offsetof(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606, ___trigger_7)); }
	inline float get_trigger_7() const { return ___trigger_7; }
	inline float* get_address_of_trigger_7() { return &___trigger_7; }
	inline void set_trigger_7(float value)
	{
		___trigger_7 = value;
	}

	inline static int32_t get_offset_of_squeeze_8() { return static_cast<int32_t>(offsetof(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606, ___squeeze_8)); }
	inline float get_squeeze_8() const { return ___squeeze_8; }
	inline float* get_address_of_squeeze_8() { return &___squeeze_8; }
	inline void set_squeeze_8(float value)
	{
		___squeeze_8 = value;
	}

	inline static int32_t get_offset_of_thumbstick_9() { return static_cast<int32_t>(offsetof(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606, ___thumbstick_9)); }
	inline float get_thumbstick_9() const { return ___thumbstick_9; }
	inline float* get_address_of_thumbstick_9() { return &___thumbstick_9; }
	inline void set_thumbstick_9(float value)
	{
		___thumbstick_9 = value;
	}

	inline static int32_t get_offset_of_thumbstickX_10() { return static_cast<int32_t>(offsetof(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606, ___thumbstickX_10)); }
	inline float get_thumbstickX_10() const { return ___thumbstickX_10; }
	inline float* get_address_of_thumbstickX_10() { return &___thumbstickX_10; }
	inline void set_thumbstickX_10(float value)
	{
		___thumbstickX_10 = value;
	}

	inline static int32_t get_offset_of_thumbstickY_11() { return static_cast<int32_t>(offsetof(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606, ___thumbstickY_11)); }
	inline float get_thumbstickY_11() const { return ___thumbstickY_11; }
	inline float* get_address_of_thumbstickY_11() { return &___thumbstickY_11; }
	inline void set_thumbstickY_11(float value)
	{
		___thumbstickY_11 = value;
	}

	inline static int32_t get_offset_of_touchpad_12() { return static_cast<int32_t>(offsetof(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606, ___touchpad_12)); }
	inline float get_touchpad_12() const { return ___touchpad_12; }
	inline float* get_address_of_touchpad_12() { return &___touchpad_12; }
	inline void set_touchpad_12(float value)
	{
		___touchpad_12 = value;
	}

	inline static int32_t get_offset_of_touchpadX_13() { return static_cast<int32_t>(offsetof(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606, ___touchpadX_13)); }
	inline float get_touchpadX_13() const { return ___touchpadX_13; }
	inline float* get_address_of_touchpadX_13() { return &___touchpadX_13; }
	inline void set_touchpadX_13(float value)
	{
		___touchpadX_13 = value;
	}

	inline static int32_t get_offset_of_touchpadY_14() { return static_cast<int32_t>(offsetof(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606, ___touchpadY_14)); }
	inline float get_touchpadY_14() const { return ___touchpadY_14; }
	inline float* get_address_of_touchpadY_14() { return &___touchpadY_14; }
	inline void set_touchpadY_14(float value)
	{
		___touchpadY_14 = value;
	}

	inline static int32_t get_offset_of_buttonA_15() { return static_cast<int32_t>(offsetof(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606, ___buttonA_15)); }
	inline float get_buttonA_15() const { return ___buttonA_15; }
	inline float* get_address_of_buttonA_15() { return &___buttonA_15; }
	inline void set_buttonA_15(float value)
	{
		___buttonA_15 = value;
	}

	inline static int32_t get_offset_of_buttonB_16() { return static_cast<int32_t>(offsetof(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606, ___buttonB_16)); }
	inline float get_buttonB_16() const { return ___buttonB_16; }
	inline float* get_address_of_buttonB_16() { return &___buttonB_16; }
	inline void set_buttonB_16(float value)
	{
		___buttonB_16 = value;
	}

	inline static int32_t get_offset_of_profiles_17() { return static_cast<int32_t>(offsetof(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606, ___profiles_17)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_profiles_17() const { return ___profiles_17; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_profiles_17() { return &___profiles_17; }
	inline void set_profiles_17(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___profiles_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___profiles_17), (void*)value);
	}
};


// WebXR.WebXRControllerHand
struct WebXRControllerHand_tD77C16EB872405CFE9AB3A9E5245F535BABE24BF 
{
public:
	// System.Int32 WebXR.WebXRControllerHand::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebXRControllerHand_tD77C16EB872405CFE9AB3A9E5245F535BABE24BF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebXR.WebXRHandJoint
struct WebXRHandJoint_t3945275BA8708F7573B1C80FCE9C174EB00DA74C 
{
public:
	// System.Int32 WebXR.WebXRHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebXRHandJoint_t3945275BA8708F7573B1C80FCE9C174EB00DA74C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebXR.WebXRHitPoseData
struct WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587  : public RuntimeObject
{
public:
	// System.Int32 WebXR.WebXRHitPoseData::frame
	int32_t ___frame_0;
	// System.Boolean WebXR.WebXRHitPoseData::available
	bool ___available_1;
	// UnityEngine.Vector3 WebXR.WebXRHitPoseData::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_2;
	// UnityEngine.Quaternion WebXR.WebXRHitPoseData::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_3;

public:
	inline static int32_t get_offset_of_frame_0() { return static_cast<int32_t>(offsetof(WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587, ___frame_0)); }
	inline int32_t get_frame_0() const { return ___frame_0; }
	inline int32_t* get_address_of_frame_0() { return &___frame_0; }
	inline void set_frame_0(int32_t value)
	{
		___frame_0 = value;
	}

	inline static int32_t get_offset_of_available_1() { return static_cast<int32_t>(offsetof(WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587, ___available_1)); }
	inline bool get_available_1() const { return ___available_1; }
	inline bool* get_address_of_available_1() { return &___available_1; }
	inline void set_available_1(bool value)
	{
		___available_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587, ___position_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_2() const { return ___position_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587, ___rotation_3)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_3 = value;
	}
};


// WebXR.WebXRJointData
struct WebXRJointData_t6418AA5B45D9C4CB1BF943CECC8516B1955B4DD3 
{
public:
	// UnityEngine.Vector3 WebXR.WebXRJointData::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion WebXR.WebXRJointData::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;
	// System.Single WebXR.WebXRJointData::radius
	float ___radius_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(WebXRJointData_t6418AA5B45D9C4CB1BF943CECC8516B1955B4DD3, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(WebXRJointData_t6418AA5B45D9C4CB1BF943CECC8516B1955B4DD3, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}

	inline static int32_t get_offset_of_radius_2() { return static_cast<int32_t>(offsetof(WebXRJointData_t6418AA5B45D9C4CB1BF943CECC8516B1955B4DD3, ___radius_2)); }
	inline float get_radius_2() const { return ___radius_2; }
	inline float* get_address_of_radius_2() { return &___radius_2; }
	inline void set_radius_2(float value)
	{
		___radius_2 = value;
	}
};


// WebXR.WebXRState
struct WebXRState_t4A54A50986B89C88F1AB491420BBD785AE446EF8 
{
public:
	// System.Int32 WebXR.WebXRState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebXRState_t4A54A50986B89C88F1AB491420BBD785AE446EF8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebXR.WebXRSubsystemDescriptor
struct WebXRSubsystemDescriptor_t49D846DE8AA1635F1086FFDF794C244C7E314A71  : public SubsystemDescriptor_1_tC313893D232E084BADBC49A01C5BB2D397DD6B6F
{
public:

public:
};


// WebXR.WebXRVisibilityState
struct WebXRVisibilityState_t10AEE1924E4E1ABDC8DCDC2238AD9F60D0F74686 
{
public:
	// System.Int32 WebXR.WebXRVisibilityState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebXRVisibilityState_t10AEE1924E4E1ABDC8DCDC2238AD9F60D0F74686, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebXR.WebXRCamera/CameraID
struct CameraID_tB691775C57AE263E7B4B0346A7FFE374DC7B3362 
{
public:
	// System.Int32 WebXR.WebXRCamera/CameraID::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraID_tB691775C57AE263E7B4B0346A7FFE374DC7B3362, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebXR.WebXRController/Axis2DTypes
struct Axis2DTypes_tC1D6F7E283CC9AE67790B96991CB7D1B0F58C258 
{
public:
	// System.Int32 WebXR.WebXRController/Axis2DTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis2DTypes_tC1D6F7E283CC9AE67790B96991CB7D1B0F58C258, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebXR.WebXRController/AxisTypes
struct AxisTypes_t2196C7F6A808B771009672E60803373507D0EE76 
{
public:
	// System.Int32 WebXR.WebXRController/AxisTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisTypes_t2196C7F6A808B771009672E60803373507D0EE76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebXR.WebXRController/ButtonTypes
struct ButtonTypes_t5D01B67979A728A8877B8A816A4B923E0A67FECC 
{
public:
	// System.Int32 WebXR.WebXRController/ButtonTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ButtonTypes_t5D01B67979A728A8877B8A816A4B923E0A67FECC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebXR.WebXRSettings/ExtraFeatureTypes
struct ExtraFeatureTypes_tCEFCA040A0A48061BB1AEC424F5D136F2FE76E80 
{
public:
	// System.Int32 WebXR.WebXRSettings/ExtraFeatureTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExtraFeatureTypes_tCEFCA040A0A48061BB1AEC424F5D136F2FE76E80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebXR.WebXRSettings/ReferenceSpaceTypes
struct ReferenceSpaceTypes_tBDD052CAB9B79CAA3BDEED124DD35ED86ABAD653 
{
public:
	// System.Int32 WebXR.WebXRSettings/ReferenceSpaceTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReferenceSpaceTypes_tBDD052CAB9B79CAA3BDEED124DD35ED86ABAD653, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
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


// WebXR.WebXRSubsystem
struct WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8  : public Subsystem_1_t163429EC8FD014939B841046D553AAE4F4B65A7F
{
public:
	// System.Boolean WebXR.WebXRSubsystem::_running
	bool ____running_1;
	// WebXR.WebXRState WebXR.WebXRSubsystem::xrState
	int32_t ___xrState_3;
	// System.Int32 WebXR.WebXRSubsystem::viewsCount
	int32_t ___viewsCount_4;
	// UnityEngine.Rect WebXR.WebXRSubsystem::leftRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___leftRect_5;
	// UnityEngine.Rect WebXR.WebXRSubsystem::rightRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rightRect_6;
	// System.Boolean WebXR.WebXRSubsystem::reportedXRStateSwitch
	bool ___reportedXRStateSwitch_7;
	// WebXR.WebXRVisibilityState WebXR.WebXRSubsystem::visibilityState
	int32_t ___visibilityState_8;
	// System.Boolean WebXR.WebXRSubsystem::visibilityStateChanged
	bool ___visibilityStateChanged_9;
	// UnityEngine.Matrix4x4 WebXR.WebXRSubsystem::leftProjectionMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___leftProjectionMatrix_17;
	// UnityEngine.Matrix4x4 WebXR.WebXRSubsystem::rightProjectionMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rightProjectionMatrix_18;
	// UnityEngine.Vector3 WebXR.WebXRSubsystem::leftPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftPosition_19;
	// UnityEngine.Vector3 WebXR.WebXRSubsystem::rightPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightPosition_20;
	// UnityEngine.Quaternion WebXR.WebXRSubsystem::leftRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___leftRotation_21;
	// UnityEngine.Quaternion WebXR.WebXRSubsystem::rightRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rightRotation_22;
	// System.Single[] WebXR.WebXRSubsystem::sharedArray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___sharedArray_23;
	// System.Single[] WebXR.WebXRSubsystem::controllersArray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___controllersArray_24;
	// System.Single[] WebXR.WebXRSubsystem::handsArray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___handsArray_25;
	// System.Single[] WebXR.WebXRSubsystem::viewerHitTestPoseArray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___viewerHitTestPoseArray_26;
	// System.Boolean WebXR.WebXRSubsystem::viewerHitTestOn
	bool ___viewerHitTestOn_27;
	// System.Boolean WebXR.WebXRSubsystem::updatedControllersOnEnd
	bool ___updatedControllersOnEnd_28;
	// WebXR.WebXRHandData WebXR.WebXRSubsystem::leftHand
	WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * ___leftHand_29;
	// WebXR.WebXRHandData WebXR.WebXRSubsystem::rightHand
	WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * ___rightHand_30;
	// WebXR.WebXRControllerData WebXR.WebXRSubsystem::controller1
	WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * ___controller1_31;
	// WebXR.WebXRControllerData WebXR.WebXRSubsystem::controller2
	WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * ___controller2_32;
	// WebXR.WebXRHitPoseData WebXR.WebXRSubsystem::viewerHitTestPose
	WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 * ___viewerHitTestPose_33;
	// WebXR.WebXRDisplayCapabilities WebXR.WebXRSubsystem::capabilities
	WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5  ___capabilities_34;

public:
	inline static int32_t get_offset_of__running_1() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ____running_1)); }
	inline bool get__running_1() const { return ____running_1; }
	inline bool* get_address_of__running_1() { return &____running_1; }
	inline void set__running_1(bool value)
	{
		____running_1 = value;
	}

	inline static int32_t get_offset_of_xrState_3() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___xrState_3)); }
	inline int32_t get_xrState_3() const { return ___xrState_3; }
	inline int32_t* get_address_of_xrState_3() { return &___xrState_3; }
	inline void set_xrState_3(int32_t value)
	{
		___xrState_3 = value;
	}

	inline static int32_t get_offset_of_viewsCount_4() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___viewsCount_4)); }
	inline int32_t get_viewsCount_4() const { return ___viewsCount_4; }
	inline int32_t* get_address_of_viewsCount_4() { return &___viewsCount_4; }
	inline void set_viewsCount_4(int32_t value)
	{
		___viewsCount_4 = value;
	}

	inline static int32_t get_offset_of_leftRect_5() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___leftRect_5)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_leftRect_5() const { return ___leftRect_5; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_leftRect_5() { return &___leftRect_5; }
	inline void set_leftRect_5(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___leftRect_5 = value;
	}

	inline static int32_t get_offset_of_rightRect_6() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___rightRect_6)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_rightRect_6() const { return ___rightRect_6; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_rightRect_6() { return &___rightRect_6; }
	inline void set_rightRect_6(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___rightRect_6 = value;
	}

	inline static int32_t get_offset_of_reportedXRStateSwitch_7() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___reportedXRStateSwitch_7)); }
	inline bool get_reportedXRStateSwitch_7() const { return ___reportedXRStateSwitch_7; }
	inline bool* get_address_of_reportedXRStateSwitch_7() { return &___reportedXRStateSwitch_7; }
	inline void set_reportedXRStateSwitch_7(bool value)
	{
		___reportedXRStateSwitch_7 = value;
	}

	inline static int32_t get_offset_of_visibilityState_8() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___visibilityState_8)); }
	inline int32_t get_visibilityState_8() const { return ___visibilityState_8; }
	inline int32_t* get_address_of_visibilityState_8() { return &___visibilityState_8; }
	inline void set_visibilityState_8(int32_t value)
	{
		___visibilityState_8 = value;
	}

	inline static int32_t get_offset_of_visibilityStateChanged_9() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___visibilityStateChanged_9)); }
	inline bool get_visibilityStateChanged_9() const { return ___visibilityStateChanged_9; }
	inline bool* get_address_of_visibilityStateChanged_9() { return &___visibilityStateChanged_9; }
	inline void set_visibilityStateChanged_9(bool value)
	{
		___visibilityStateChanged_9 = value;
	}

	inline static int32_t get_offset_of_leftProjectionMatrix_17() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___leftProjectionMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_leftProjectionMatrix_17() const { return ___leftProjectionMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_leftProjectionMatrix_17() { return &___leftProjectionMatrix_17; }
	inline void set_leftProjectionMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___leftProjectionMatrix_17 = value;
	}

	inline static int32_t get_offset_of_rightProjectionMatrix_18() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___rightProjectionMatrix_18)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_rightProjectionMatrix_18() const { return ___rightProjectionMatrix_18; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_rightProjectionMatrix_18() { return &___rightProjectionMatrix_18; }
	inline void set_rightProjectionMatrix_18(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___rightProjectionMatrix_18 = value;
	}

	inline static int32_t get_offset_of_leftPosition_19() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___leftPosition_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftPosition_19() const { return ___leftPosition_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftPosition_19() { return &___leftPosition_19; }
	inline void set_leftPosition_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftPosition_19 = value;
	}

	inline static int32_t get_offset_of_rightPosition_20() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___rightPosition_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightPosition_20() const { return ___rightPosition_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightPosition_20() { return &___rightPosition_20; }
	inline void set_rightPosition_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightPosition_20 = value;
	}

	inline static int32_t get_offset_of_leftRotation_21() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___leftRotation_21)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_leftRotation_21() const { return ___leftRotation_21; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_leftRotation_21() { return &___leftRotation_21; }
	inline void set_leftRotation_21(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___leftRotation_21 = value;
	}

	inline static int32_t get_offset_of_rightRotation_22() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___rightRotation_22)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rightRotation_22() const { return ___rightRotation_22; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rightRotation_22() { return &___rightRotation_22; }
	inline void set_rightRotation_22(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rightRotation_22 = value;
	}

	inline static int32_t get_offset_of_sharedArray_23() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___sharedArray_23)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_sharedArray_23() const { return ___sharedArray_23; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_sharedArray_23() { return &___sharedArray_23; }
	inline void set_sharedArray_23(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___sharedArray_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedArray_23), (void*)value);
	}

	inline static int32_t get_offset_of_controllersArray_24() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___controllersArray_24)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_controllersArray_24() const { return ___controllersArray_24; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_controllersArray_24() { return &___controllersArray_24; }
	inline void set_controllersArray_24(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___controllersArray_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllersArray_24), (void*)value);
	}

	inline static int32_t get_offset_of_handsArray_25() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___handsArray_25)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_handsArray_25() const { return ___handsArray_25; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_handsArray_25() { return &___handsArray_25; }
	inline void set_handsArray_25(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___handsArray_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handsArray_25), (void*)value);
	}

	inline static int32_t get_offset_of_viewerHitTestPoseArray_26() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___viewerHitTestPoseArray_26)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_viewerHitTestPoseArray_26() const { return ___viewerHitTestPoseArray_26; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_viewerHitTestPoseArray_26() { return &___viewerHitTestPoseArray_26; }
	inline void set_viewerHitTestPoseArray_26(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___viewerHitTestPoseArray_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___viewerHitTestPoseArray_26), (void*)value);
	}

	inline static int32_t get_offset_of_viewerHitTestOn_27() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___viewerHitTestOn_27)); }
	inline bool get_viewerHitTestOn_27() const { return ___viewerHitTestOn_27; }
	inline bool* get_address_of_viewerHitTestOn_27() { return &___viewerHitTestOn_27; }
	inline void set_viewerHitTestOn_27(bool value)
	{
		___viewerHitTestOn_27 = value;
	}

	inline static int32_t get_offset_of_updatedControllersOnEnd_28() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___updatedControllersOnEnd_28)); }
	inline bool get_updatedControllersOnEnd_28() const { return ___updatedControllersOnEnd_28; }
	inline bool* get_address_of_updatedControllersOnEnd_28() { return &___updatedControllersOnEnd_28; }
	inline void set_updatedControllersOnEnd_28(bool value)
	{
		___updatedControllersOnEnd_28 = value;
	}

	inline static int32_t get_offset_of_leftHand_29() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___leftHand_29)); }
	inline WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * get_leftHand_29() const { return ___leftHand_29; }
	inline WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE ** get_address_of_leftHand_29() { return &___leftHand_29; }
	inline void set_leftHand_29(WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * value)
	{
		___leftHand_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftHand_29), (void*)value);
	}

	inline static int32_t get_offset_of_rightHand_30() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___rightHand_30)); }
	inline WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * get_rightHand_30() const { return ___rightHand_30; }
	inline WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE ** get_address_of_rightHand_30() { return &___rightHand_30; }
	inline void set_rightHand_30(WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * value)
	{
		___rightHand_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightHand_30), (void*)value);
	}

	inline static int32_t get_offset_of_controller1_31() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___controller1_31)); }
	inline WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * get_controller1_31() const { return ___controller1_31; }
	inline WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** get_address_of_controller1_31() { return &___controller1_31; }
	inline void set_controller1_31(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * value)
	{
		___controller1_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller1_31), (void*)value);
	}

	inline static int32_t get_offset_of_controller2_32() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___controller2_32)); }
	inline WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * get_controller2_32() const { return ___controller2_32; }
	inline WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** get_address_of_controller2_32() { return &___controller2_32; }
	inline void set_controller2_32(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * value)
	{
		___controller2_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller2_32), (void*)value);
	}

	inline static int32_t get_offset_of_viewerHitTestPose_33() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___viewerHitTestPose_33)); }
	inline WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 * get_viewerHitTestPose_33() const { return ___viewerHitTestPose_33; }
	inline WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 ** get_address_of_viewerHitTestPose_33() { return &___viewerHitTestPose_33; }
	inline void set_viewerHitTestPose_33(WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 * value)
	{
		___viewerHitTestPose_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___viewerHitTestPose_33), (void*)value);
	}

	inline static int32_t get_offset_of_capabilities_34() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8, ___capabilities_34)); }
	inline WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5  get_capabilities_34() const { return ___capabilities_34; }
	inline WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5 * get_address_of_capabilities_34() { return &___capabilities_34; }
	inline void set_capabilities_34(WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5  value)
	{
		___capabilities_34 = value;
	}
};

struct WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields
{
public:
	// WebXR.WebXRSubsystem WebXR.WebXRSubsystem::Instance
	WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * ___Instance_2;
	// WebXR.WebXRSubsystem/XRCapabilitiesUpdate WebXR.WebXRSubsystem::OnXRCapabilitiesUpdate
	XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * ___OnXRCapabilitiesUpdate_10;
	// WebXR.WebXRSubsystem/XRChange WebXR.WebXRSubsystem::OnXRChange
	XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * ___OnXRChange_11;
	// WebXR.WebXRSubsystem/VisibilityChange WebXR.WebXRSubsystem::OnVisibilityChange
	VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * ___OnVisibilityChange_12;
	// WebXR.WebXRSubsystem/HeadsetUpdate WebXR.WebXRSubsystem::OnHeadsetUpdate
	HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * ___OnHeadsetUpdate_13;
	// WebXR.WebXRSubsystem/ControllerUpdate WebXR.WebXRSubsystem::OnControllerUpdate
	ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * ___OnControllerUpdate_14;
	// WebXR.WebXRSubsystem/HandUpdate WebXR.WebXRSubsystem::OnHandUpdate
	HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * ___OnHandUpdate_15;
	// WebXR.WebXRSubsystem/HitTestUpdate WebXR.WebXRSubsystem::OnViewerHitTestUpdate
	HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * ___OnViewerHitTestUpdate_16;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields, ___Instance_2)); }
	inline WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * get_Instance_2() const { return ___Instance_2; }
	inline WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnXRCapabilitiesUpdate_10() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields, ___OnXRCapabilitiesUpdate_10)); }
	inline XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * get_OnXRCapabilitiesUpdate_10() const { return ___OnXRCapabilitiesUpdate_10; }
	inline XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF ** get_address_of_OnXRCapabilitiesUpdate_10() { return &___OnXRCapabilitiesUpdate_10; }
	inline void set_OnXRCapabilitiesUpdate_10(XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * value)
	{
		___OnXRCapabilitiesUpdate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnXRCapabilitiesUpdate_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnXRChange_11() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields, ___OnXRChange_11)); }
	inline XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * get_OnXRChange_11() const { return ___OnXRChange_11; }
	inline XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD ** get_address_of_OnXRChange_11() { return &___OnXRChange_11; }
	inline void set_OnXRChange_11(XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * value)
	{
		___OnXRChange_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnXRChange_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnVisibilityChange_12() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields, ___OnVisibilityChange_12)); }
	inline VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * get_OnVisibilityChange_12() const { return ___OnVisibilityChange_12; }
	inline VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 ** get_address_of_OnVisibilityChange_12() { return &___OnVisibilityChange_12; }
	inline void set_OnVisibilityChange_12(VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * value)
	{
		___OnVisibilityChange_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVisibilityChange_12), (void*)value);
	}

	inline static int32_t get_offset_of_OnHeadsetUpdate_13() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields, ___OnHeadsetUpdate_13)); }
	inline HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * get_OnHeadsetUpdate_13() const { return ___OnHeadsetUpdate_13; }
	inline HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD ** get_address_of_OnHeadsetUpdate_13() { return &___OnHeadsetUpdate_13; }
	inline void set_OnHeadsetUpdate_13(HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * value)
	{
		___OnHeadsetUpdate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHeadsetUpdate_13), (void*)value);
	}

	inline static int32_t get_offset_of_OnControllerUpdate_14() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields, ___OnControllerUpdate_14)); }
	inline ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * get_OnControllerUpdate_14() const { return ___OnControllerUpdate_14; }
	inline ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF ** get_address_of_OnControllerUpdate_14() { return &___OnControllerUpdate_14; }
	inline void set_OnControllerUpdate_14(ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * value)
	{
		___OnControllerUpdate_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnControllerUpdate_14), (void*)value);
	}

	inline static int32_t get_offset_of_OnHandUpdate_15() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields, ___OnHandUpdate_15)); }
	inline HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * get_OnHandUpdate_15() const { return ___OnHandUpdate_15; }
	inline HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C ** get_address_of_OnHandUpdate_15() { return &___OnHandUpdate_15; }
	inline void set_OnHandUpdate_15(HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * value)
	{
		___OnHandUpdate_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHandUpdate_15), (void*)value);
	}

	inline static int32_t get_offset_of_OnViewerHitTestUpdate_16() { return static_cast<int32_t>(offsetof(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields, ___OnViewerHitTestUpdate_16)); }
	inline HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * get_OnViewerHitTestUpdate_16() const { return ___OnViewerHitTestUpdate_16; }
	inline HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 ** get_address_of_OnViewerHitTestUpdate_16() { return &___OnViewerHitTestUpdate_16; }
	inline void set_OnViewerHitTestUpdate_16(HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * value)
	{
		___OnViewerHitTestUpdate_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnViewerHitTestUpdate_16), (void*)value);
	}
};


// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<WebXR.WebXRHandData>
struct Action_1_t5C191254F3AC3B22208FB2C964A1D1BDD3BF3CE6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// WebXR.WebXRSettings
struct WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// WebXR.WebXRSettings/ReferenceSpaceTypes WebXR.WebXRSettings::VRRequiredReferenceSpace
	int32_t ___VRRequiredReferenceSpace_4;
	// WebXR.WebXRSettings/ExtraFeatureTypes WebXR.WebXRSettings::VROptionalFeatures
	int32_t ___VROptionalFeatures_5;
	// WebXR.WebXRSettings/ReferenceSpaceTypes WebXR.WebXRSettings::ARRequiredReferenceSpace
	int32_t ___ARRequiredReferenceSpace_6;
	// WebXR.WebXRSettings/ExtraFeatureTypes WebXR.WebXRSettings::AROptionalFeatures
	int32_t ___AROptionalFeatures_7;

public:
	inline static int32_t get_offset_of_VRRequiredReferenceSpace_4() { return static_cast<int32_t>(offsetof(WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E, ___VRRequiredReferenceSpace_4)); }
	inline int32_t get_VRRequiredReferenceSpace_4() const { return ___VRRequiredReferenceSpace_4; }
	inline int32_t* get_address_of_VRRequiredReferenceSpace_4() { return &___VRRequiredReferenceSpace_4; }
	inline void set_VRRequiredReferenceSpace_4(int32_t value)
	{
		___VRRequiredReferenceSpace_4 = value;
	}

	inline static int32_t get_offset_of_VROptionalFeatures_5() { return static_cast<int32_t>(offsetof(WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E, ___VROptionalFeatures_5)); }
	inline int32_t get_VROptionalFeatures_5() const { return ___VROptionalFeatures_5; }
	inline int32_t* get_address_of_VROptionalFeatures_5() { return &___VROptionalFeatures_5; }
	inline void set_VROptionalFeatures_5(int32_t value)
	{
		___VROptionalFeatures_5 = value;
	}

	inline static int32_t get_offset_of_ARRequiredReferenceSpace_6() { return static_cast<int32_t>(offsetof(WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E, ___ARRequiredReferenceSpace_6)); }
	inline int32_t get_ARRequiredReferenceSpace_6() const { return ___ARRequiredReferenceSpace_6; }
	inline int32_t* get_address_of_ARRequiredReferenceSpace_6() { return &___ARRequiredReferenceSpace_6; }
	inline void set_ARRequiredReferenceSpace_6(int32_t value)
	{
		___ARRequiredReferenceSpace_6 = value;
	}

	inline static int32_t get_offset_of_AROptionalFeatures_7() { return static_cast<int32_t>(offsetof(WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E, ___AROptionalFeatures_7)); }
	inline int32_t get_AROptionalFeatures_7() const { return ___AROptionalFeatures_7; }
	inline int32_t* get_address_of_AROptionalFeatures_7() { return &___AROptionalFeatures_7; }
	inline void set_AROptionalFeatures_7(int32_t value)
	{
		___AROptionalFeatures_7 = value;
	}
};

struct WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E_StaticFields
{
public:
	// WebXR.WebXRSettings WebXR.WebXRSettings::instance
	WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * ___instance_8;

public:
	inline static int32_t get_offset_of_instance_8() { return static_cast<int32_t>(offsetof(WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E_StaticFields, ___instance_8)); }
	inline WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * get_instance_8() const { return ___instance_8; }
	inline WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E ** get_address_of_instance_8() { return &___instance_8; }
	inline void set_instance_8(WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * value)
	{
		___instance_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_8), (void*)value);
	}
};


// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93  : public IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4
{
public:
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___displayFocusChanged_2;

public:
	inline static int32_t get_offset_of_displayFocusChanged_2() { return static_cast<int32_t>(offsetof(XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93, ___displayFocusChanged_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_displayFocusChanged_2() const { return ___displayFocusChanged_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_displayFocusChanged_2() { return &___displayFocusChanged_2; }
	inline void set_displayFocusChanged_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___displayFocusChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFocusChanged_2), (void*)value);
	}
};


// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09  : public IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE
{
public:
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___m_DeviceIdsCache_4;

public:
	inline static int32_t get_offset_of_trackingOriginUpdated_2() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___trackingOriginUpdated_2)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_trackingOriginUpdated_2() const { return ___trackingOriginUpdated_2; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_trackingOriginUpdated_2() { return &___trackingOriginUpdated_2; }
	inline void set_trackingOriginUpdated_2(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___trackingOriginUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingOriginUpdated_2), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryChanged_3() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___boundaryChanged_3)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_boundaryChanged_3() const { return ___boundaryChanged_3; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_boundaryChanged_3() { return &___boundaryChanged_3; }
	inline void set_boundaryChanged_3(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___boundaryChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIdsCache_4() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___m_DeviceIdsCache_4)); }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * get_m_DeviceIdsCache_4() const { return ___m_DeviceIdsCache_4; }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B ** get_address_of_m_DeviceIdsCache_4() { return &___m_DeviceIdsCache_4; }
	inline void set_m_DeviceIdsCache_4(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * value)
	{
		___m_DeviceIdsCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceIdsCache_4), (void*)value);
	}
};


// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// WebXR.WebXRSubsystem/ControllerUpdate
struct ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF  : public MulticastDelegate_t
{
public:

public:
};


// WebXR.WebXRSubsystem/EndXREvent
struct EndXREvent_tAEF82376310EE655EF1E985071F2D45794196F5F  : public MulticastDelegate_t
{
public:

public:
};


// WebXR.WebXRSubsystem/HandUpdate
struct HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C  : public MulticastDelegate_t
{
public:

public:
};


// WebXR.WebXRSubsystem/HeadsetUpdate
struct HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD  : public MulticastDelegate_t
{
public:

public:
};


// WebXR.WebXRSubsystem/HitTestUpdate
struct HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35  : public MulticastDelegate_t
{
public:

public:
};


// WebXR.WebXRSubsystem/InputProfilesEvent
struct InputProfilesEvent_t88DDB46B55E92BBBC75C03C1EDBD7AB266F240A6  : public MulticastDelegate_t
{
public:

public:
};


// WebXR.WebXRSubsystem/StartXREvent
struct StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA  : public MulticastDelegate_t
{
public:

public:
};


// WebXR.WebXRSubsystem/VisibilityChange
struct VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6  : public MulticastDelegate_t
{
public:

public:
};


// WebXR.WebXRSubsystem/VisibilityChangeEvent
struct VisibilityChangeEvent_t577FC56D660C998476CA4FFB4EB1E7086216016D  : public MulticastDelegate_t
{
public:

public:
};


// WebXR.WebXRSubsystem/XRCapabilitiesEvent
struct XRCapabilitiesEvent_t3F5640F3A08933111CC7FE5B43BCE122803DCF7F  : public MulticastDelegate_t
{
public:

public:
};


// WebXR.WebXRSubsystem/XRCapabilitiesUpdate
struct XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF  : public MulticastDelegate_t
{
public:

public:
};


// WebXR.WebXRSubsystem/XRChange
struct XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013  : public XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * ___m_SubsystemInstanceMap_4;

public:
	inline static int32_t get_offset_of_m_SubsystemInstanceMap_4() { return static_cast<int32_t>(offsetof(XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013, ___m_SubsystemInstanceMap_4)); }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * get_m_SubsystemInstanceMap_4() const { return ___m_SubsystemInstanceMap_4; }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B ** get_address_of_m_SubsystemInstanceMap_4() { return &___m_SubsystemInstanceMap_4; }
	inline void set_m_SubsystemInstanceMap_4(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * value)
	{
		___m_SubsystemInstanceMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemInstanceMap_4), (void*)value);
	}
};


// WebXR.SubsystemLifecycleManager`2<System.Object,System.Object>
struct SubsystemLifecycleManager_2_t5C0D2374317678698CB068F42DEF4E33B8E2A900  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem WebXR.SubsystemLifecycleManager`2::<subsystem>k__BackingField
	RuntimeObject * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_t5C0D2374317678698CB068F42DEF4E33B8E2A900, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};


// WebXR.SubsystemLifecycleManager`2<WebXR.WebXRSubsystem,WebXR.WebXRSubsystemDescriptor>
struct SubsystemLifecycleManager_2_tC137F129C0687C80EF6420FC92D442025CDEC55F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem WebXR.SubsystemLifecycleManager`2::<subsystem>k__BackingField
	WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_tC137F129C0687C80EF6420FC92D442025CDEC55F, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};


// WebXR.WebXRCamera
struct WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera WebXR.WebXRCamera::cameraMain
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cameraMain_4;
	// UnityEngine.Camera WebXR.WebXRCamera::cameraL
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cameraL_5;
	// UnityEngine.Camera WebXR.WebXRCamera::cameraR
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cameraR_6;
	// UnityEngine.Camera WebXR.WebXRCamera::cameraARL
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cameraARL_7;
	// UnityEngine.Camera WebXR.WebXRCamera::cameraARR
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cameraARR_8;
	// UnityEngine.Transform WebXR.WebXRCamera::cameraFollower
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___cameraFollower_9;
	// WebXR.WebXRState WebXR.WebXRCamera::xrState
	int32_t ___xrState_10;
	// UnityEngine.Rect WebXR.WebXRCamera::leftRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___leftRect_11;
	// UnityEngine.Rect WebXR.WebXRCamera::rightRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rightRect_12;
	// System.Int32 WebXR.WebXRCamera::viewsCount
	int32_t ___viewsCount_13;
	// System.Boolean WebXR.WebXRCamera::hasFollower
	bool ___hasFollower_14;

public:
	inline static int32_t get_offset_of_cameraMain_4() { return static_cast<int32_t>(offsetof(WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD, ___cameraMain_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cameraMain_4() const { return ___cameraMain_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cameraMain_4() { return &___cameraMain_4; }
	inline void set_cameraMain_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cameraMain_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraMain_4), (void*)value);
	}

	inline static int32_t get_offset_of_cameraL_5() { return static_cast<int32_t>(offsetof(WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD, ___cameraL_5)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cameraL_5() const { return ___cameraL_5; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cameraL_5() { return &___cameraL_5; }
	inline void set_cameraL_5(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cameraL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraL_5), (void*)value);
	}

	inline static int32_t get_offset_of_cameraR_6() { return static_cast<int32_t>(offsetof(WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD, ___cameraR_6)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cameraR_6() const { return ___cameraR_6; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cameraR_6() { return &___cameraR_6; }
	inline void set_cameraR_6(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cameraR_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraR_6), (void*)value);
	}

	inline static int32_t get_offset_of_cameraARL_7() { return static_cast<int32_t>(offsetof(WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD, ___cameraARL_7)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cameraARL_7() const { return ___cameraARL_7; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cameraARL_7() { return &___cameraARL_7; }
	inline void set_cameraARL_7(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cameraARL_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraARL_7), (void*)value);
	}

	inline static int32_t get_offset_of_cameraARR_8() { return static_cast<int32_t>(offsetof(WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD, ___cameraARR_8)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cameraARR_8() const { return ___cameraARR_8; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cameraARR_8() { return &___cameraARR_8; }
	inline void set_cameraARR_8(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cameraARR_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraARR_8), (void*)value);
	}

	inline static int32_t get_offset_of_cameraFollower_9() { return static_cast<int32_t>(offsetof(WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD, ___cameraFollower_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_cameraFollower_9() const { return ___cameraFollower_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_cameraFollower_9() { return &___cameraFollower_9; }
	inline void set_cameraFollower_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___cameraFollower_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraFollower_9), (void*)value);
	}

	inline static int32_t get_offset_of_xrState_10() { return static_cast<int32_t>(offsetof(WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD, ___xrState_10)); }
	inline int32_t get_xrState_10() const { return ___xrState_10; }
	inline int32_t* get_address_of_xrState_10() { return &___xrState_10; }
	inline void set_xrState_10(int32_t value)
	{
		___xrState_10 = value;
	}

	inline static int32_t get_offset_of_leftRect_11() { return static_cast<int32_t>(offsetof(WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD, ___leftRect_11)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_leftRect_11() const { return ___leftRect_11; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_leftRect_11() { return &___leftRect_11; }
	inline void set_leftRect_11(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___leftRect_11 = value;
	}

	inline static int32_t get_offset_of_rightRect_12() { return static_cast<int32_t>(offsetof(WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD, ___rightRect_12)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_rightRect_12() const { return ___rightRect_12; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_rightRect_12() { return &___rightRect_12; }
	inline void set_rightRect_12(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___rightRect_12 = value;
	}

	inline static int32_t get_offset_of_viewsCount_13() { return static_cast<int32_t>(offsetof(WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD, ___viewsCount_13)); }
	inline int32_t get_viewsCount_13() const { return ___viewsCount_13; }
	inline int32_t* get_address_of_viewsCount_13() { return &___viewsCount_13; }
	inline void set_viewsCount_13(int32_t value)
	{
		___viewsCount_13 = value;
	}

	inline static int32_t get_offset_of_hasFollower_14() { return static_cast<int32_t>(offsetof(WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD, ___hasFollower_14)); }
	inline bool get_hasFollower_14() const { return ___hasFollower_14; }
	inline bool* get_address_of_hasFollower_14() { return &___hasFollower_14; }
	inline void set_hasFollower_14(bool value)
	{
		___hasFollower_14 = value;
	}
};


// WebXR.WebXRController
struct WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action`1<System.Boolean> WebXR.WebXRController::OnControllerActive
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___OnControllerActive_4;
	// System.Action`1<System.Boolean> WebXR.WebXRController::OnHandActive
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___OnHandActive_5;
	// System.Action`1<WebXR.WebXRHandData> WebXR.WebXRController::OnHandUpdate
	Action_1_t5C191254F3AC3B22208FB2C964A1D1BDD3BF3CE6 * ___OnHandUpdate_6;
	// System.Action`1<System.Boolean> WebXR.WebXRController::OnAlwaysUseGripChanged
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___OnAlwaysUseGripChanged_7;
	// WebXR.WebXRControllerHand WebXR.WebXRController::hand
	int32_t ___hand_8;
	// System.Single WebXR.WebXRController::trigger
	float ___trigger_9;
	// System.Single WebXR.WebXRController::squeeze
	float ___squeeze_10;
	// System.Single WebXR.WebXRController::thumbstick
	float ___thumbstick_11;
	// System.Single WebXR.WebXRController::thumbstickX
	float ___thumbstickX_12;
	// System.Single WebXR.WebXRController::thumbstickY
	float ___thumbstickY_13;
	// System.Single WebXR.WebXRController::touchpad
	float ___touchpad_14;
	// System.Single WebXR.WebXRController::touchpadX
	float ___touchpadX_15;
	// System.Single WebXR.WebXRController::touchpadY
	float ___touchpadY_16;
	// System.Single WebXR.WebXRController::buttonA
	float ___buttonA_17;
	// System.Single WebXR.WebXRController::buttonB
	float ___buttonB_18;
	// System.Collections.Generic.Dictionary`2<WebXR.WebXRController/ButtonTypes,WebXR.WebXRControllerButton> WebXR.WebXRController::buttonStates
	Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F * ___buttonStates_19;
	// System.Boolean WebXR.WebXRController::controllerActive
	bool ___controllerActive_20;
	// System.Boolean WebXR.WebXRController::handActive
	bool ___handActive_21;
	// System.String[] WebXR.WebXRController::profiles
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___profiles_22;
	// System.Int32 WebXR.WebXRController::oculusLinkBugTest
	int32_t ___oculusLinkBugTest_23;
	// UnityEngine.Quaternion WebXR.WebXRController::oculusOffsetRay
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___oculusOffsetRay_24;
	// UnityEngine.Quaternion WebXR.WebXRController::oculusOffsetGrip
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___oculusOffsetGrip_25;
	// System.Boolean WebXR.WebXRController::alwaysUseGrip
	bool ___alwaysUseGrip_26;
	// UnityEngine.Vector3 WebXR.WebXRController::<gripPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CgripPositionU3Ek__BackingField_27;
	// UnityEngine.Quaternion WebXR.WebXRController::<gripRotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CgripRotationU3Ek__BackingField_28;

public:
	inline static int32_t get_offset_of_OnControllerActive_4() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___OnControllerActive_4)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_OnControllerActive_4() const { return ___OnControllerActive_4; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_OnControllerActive_4() { return &___OnControllerActive_4; }
	inline void set_OnControllerActive_4(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___OnControllerActive_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnControllerActive_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnHandActive_5() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___OnHandActive_5)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_OnHandActive_5() const { return ___OnHandActive_5; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_OnHandActive_5() { return &___OnHandActive_5; }
	inline void set_OnHandActive_5(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___OnHandActive_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHandActive_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnHandUpdate_6() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___OnHandUpdate_6)); }
	inline Action_1_t5C191254F3AC3B22208FB2C964A1D1BDD3BF3CE6 * get_OnHandUpdate_6() const { return ___OnHandUpdate_6; }
	inline Action_1_t5C191254F3AC3B22208FB2C964A1D1BDD3BF3CE6 ** get_address_of_OnHandUpdate_6() { return &___OnHandUpdate_6; }
	inline void set_OnHandUpdate_6(Action_1_t5C191254F3AC3B22208FB2C964A1D1BDD3BF3CE6 * value)
	{
		___OnHandUpdate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHandUpdate_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnAlwaysUseGripChanged_7() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___OnAlwaysUseGripChanged_7)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_OnAlwaysUseGripChanged_7() const { return ___OnAlwaysUseGripChanged_7; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_OnAlwaysUseGripChanged_7() { return &___OnAlwaysUseGripChanged_7; }
	inline void set_OnAlwaysUseGripChanged_7(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___OnAlwaysUseGripChanged_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAlwaysUseGripChanged_7), (void*)value);
	}

	inline static int32_t get_offset_of_hand_8() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___hand_8)); }
	inline int32_t get_hand_8() const { return ___hand_8; }
	inline int32_t* get_address_of_hand_8() { return &___hand_8; }
	inline void set_hand_8(int32_t value)
	{
		___hand_8 = value;
	}

	inline static int32_t get_offset_of_trigger_9() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___trigger_9)); }
	inline float get_trigger_9() const { return ___trigger_9; }
	inline float* get_address_of_trigger_9() { return &___trigger_9; }
	inline void set_trigger_9(float value)
	{
		___trigger_9 = value;
	}

	inline static int32_t get_offset_of_squeeze_10() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___squeeze_10)); }
	inline float get_squeeze_10() const { return ___squeeze_10; }
	inline float* get_address_of_squeeze_10() { return &___squeeze_10; }
	inline void set_squeeze_10(float value)
	{
		___squeeze_10 = value;
	}

	inline static int32_t get_offset_of_thumbstick_11() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___thumbstick_11)); }
	inline float get_thumbstick_11() const { return ___thumbstick_11; }
	inline float* get_address_of_thumbstick_11() { return &___thumbstick_11; }
	inline void set_thumbstick_11(float value)
	{
		___thumbstick_11 = value;
	}

	inline static int32_t get_offset_of_thumbstickX_12() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___thumbstickX_12)); }
	inline float get_thumbstickX_12() const { return ___thumbstickX_12; }
	inline float* get_address_of_thumbstickX_12() { return &___thumbstickX_12; }
	inline void set_thumbstickX_12(float value)
	{
		___thumbstickX_12 = value;
	}

	inline static int32_t get_offset_of_thumbstickY_13() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___thumbstickY_13)); }
	inline float get_thumbstickY_13() const { return ___thumbstickY_13; }
	inline float* get_address_of_thumbstickY_13() { return &___thumbstickY_13; }
	inline void set_thumbstickY_13(float value)
	{
		___thumbstickY_13 = value;
	}

	inline static int32_t get_offset_of_touchpad_14() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___touchpad_14)); }
	inline float get_touchpad_14() const { return ___touchpad_14; }
	inline float* get_address_of_touchpad_14() { return &___touchpad_14; }
	inline void set_touchpad_14(float value)
	{
		___touchpad_14 = value;
	}

	inline static int32_t get_offset_of_touchpadX_15() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___touchpadX_15)); }
	inline float get_touchpadX_15() const { return ___touchpadX_15; }
	inline float* get_address_of_touchpadX_15() { return &___touchpadX_15; }
	inline void set_touchpadX_15(float value)
	{
		___touchpadX_15 = value;
	}

	inline static int32_t get_offset_of_touchpadY_16() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___touchpadY_16)); }
	inline float get_touchpadY_16() const { return ___touchpadY_16; }
	inline float* get_address_of_touchpadY_16() { return &___touchpadY_16; }
	inline void set_touchpadY_16(float value)
	{
		___touchpadY_16 = value;
	}

	inline static int32_t get_offset_of_buttonA_17() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___buttonA_17)); }
	inline float get_buttonA_17() const { return ___buttonA_17; }
	inline float* get_address_of_buttonA_17() { return &___buttonA_17; }
	inline void set_buttonA_17(float value)
	{
		___buttonA_17 = value;
	}

	inline static int32_t get_offset_of_buttonB_18() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___buttonB_18)); }
	inline float get_buttonB_18() const { return ___buttonB_18; }
	inline float* get_address_of_buttonB_18() { return &___buttonB_18; }
	inline void set_buttonB_18(float value)
	{
		___buttonB_18 = value;
	}

	inline static int32_t get_offset_of_buttonStates_19() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___buttonStates_19)); }
	inline Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F * get_buttonStates_19() const { return ___buttonStates_19; }
	inline Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F ** get_address_of_buttonStates_19() { return &___buttonStates_19; }
	inline void set_buttonStates_19(Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F * value)
	{
		___buttonStates_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonStates_19), (void*)value);
	}

	inline static int32_t get_offset_of_controllerActive_20() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___controllerActive_20)); }
	inline bool get_controllerActive_20() const { return ___controllerActive_20; }
	inline bool* get_address_of_controllerActive_20() { return &___controllerActive_20; }
	inline void set_controllerActive_20(bool value)
	{
		___controllerActive_20 = value;
	}

	inline static int32_t get_offset_of_handActive_21() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___handActive_21)); }
	inline bool get_handActive_21() const { return ___handActive_21; }
	inline bool* get_address_of_handActive_21() { return &___handActive_21; }
	inline void set_handActive_21(bool value)
	{
		___handActive_21 = value;
	}

	inline static int32_t get_offset_of_profiles_22() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___profiles_22)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_profiles_22() const { return ___profiles_22; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_profiles_22() { return &___profiles_22; }
	inline void set_profiles_22(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___profiles_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___profiles_22), (void*)value);
	}

	inline static int32_t get_offset_of_oculusLinkBugTest_23() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___oculusLinkBugTest_23)); }
	inline int32_t get_oculusLinkBugTest_23() const { return ___oculusLinkBugTest_23; }
	inline int32_t* get_address_of_oculusLinkBugTest_23() { return &___oculusLinkBugTest_23; }
	inline void set_oculusLinkBugTest_23(int32_t value)
	{
		___oculusLinkBugTest_23 = value;
	}

	inline static int32_t get_offset_of_oculusOffsetRay_24() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___oculusOffsetRay_24)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_oculusOffsetRay_24() const { return ___oculusOffsetRay_24; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_oculusOffsetRay_24() { return &___oculusOffsetRay_24; }
	inline void set_oculusOffsetRay_24(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___oculusOffsetRay_24 = value;
	}

	inline static int32_t get_offset_of_oculusOffsetGrip_25() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___oculusOffsetGrip_25)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_oculusOffsetGrip_25() const { return ___oculusOffsetGrip_25; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_oculusOffsetGrip_25() { return &___oculusOffsetGrip_25; }
	inline void set_oculusOffsetGrip_25(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___oculusOffsetGrip_25 = value;
	}

	inline static int32_t get_offset_of_alwaysUseGrip_26() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___alwaysUseGrip_26)); }
	inline bool get_alwaysUseGrip_26() const { return ___alwaysUseGrip_26; }
	inline bool* get_address_of_alwaysUseGrip_26() { return &___alwaysUseGrip_26; }
	inline void set_alwaysUseGrip_26(bool value)
	{
		___alwaysUseGrip_26 = value;
	}

	inline static int32_t get_offset_of_U3CgripPositionU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___U3CgripPositionU3Ek__BackingField_27)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CgripPositionU3Ek__BackingField_27() const { return ___U3CgripPositionU3Ek__BackingField_27; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CgripPositionU3Ek__BackingField_27() { return &___U3CgripPositionU3Ek__BackingField_27; }
	inline void set_U3CgripPositionU3Ek__BackingField_27(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CgripPositionU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CgripRotationU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB, ___U3CgripRotationU3Ek__BackingField_28)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CgripRotationU3Ek__BackingField_28() const { return ___U3CgripRotationU3Ek__BackingField_28; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CgripRotationU3Ek__BackingField_28() { return &___U3CgripRotationU3Ek__BackingField_28; }
	inline void set_U3CgripRotationU3Ek__BackingField_28(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CgripRotationU3Ek__BackingField_28 = value;
	}
};


// WebXR.WebXRLoader
struct WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54  : public XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013
{
public:

public:
};

struct WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54_StaticFields
{
public:
	// System.Collections.Generic.List`1<WebXR.WebXRSubsystemDescriptor> WebXR.WebXRLoader::sampleSubsystemDescriptors
	List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6 * ___sampleSubsystemDescriptors_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor> WebXR.WebXRLoader::displaySubsystemDescriptors
	List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * ___displaySubsystemDescriptors_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor> WebXR.WebXRLoader::inputSubsystemDescriptors
	List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * ___inputSubsystemDescriptors_7;

public:
	inline static int32_t get_offset_of_sampleSubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54_StaticFields, ___sampleSubsystemDescriptors_5)); }
	inline List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6 * get_sampleSubsystemDescriptors_5() const { return ___sampleSubsystemDescriptors_5; }
	inline List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6 ** get_address_of_sampleSubsystemDescriptors_5() { return &___sampleSubsystemDescriptors_5; }
	inline void set_sampleSubsystemDescriptors_5(List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6 * value)
	{
		___sampleSubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sampleSubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_displaySubsystemDescriptors_6() { return static_cast<int32_t>(offsetof(WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54_StaticFields, ___displaySubsystemDescriptors_6)); }
	inline List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * get_displaySubsystemDescriptors_6() const { return ___displaySubsystemDescriptors_6; }
	inline List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 ** get_address_of_displaySubsystemDescriptors_6() { return &___displaySubsystemDescriptors_6; }
	inline void set_displaySubsystemDescriptors_6(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * value)
	{
		___displaySubsystemDescriptors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displaySubsystemDescriptors_6), (void*)value);
	}

	inline static int32_t get_offset_of_inputSubsystemDescriptors_7() { return static_cast<int32_t>(offsetof(WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54_StaticFields, ___inputSubsystemDescriptors_7)); }
	inline List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * get_inputSubsystemDescriptors_7() const { return ___inputSubsystemDescriptors_7; }
	inline List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 ** get_address_of_inputSubsystemDescriptors_7() { return &___inputSubsystemDescriptors_7; }
	inline void set_inputSubsystemDescriptors_7(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * value)
	{
		___inputSubsystemDescriptors_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSubsystemDescriptors_7), (void*)value);
	}
};


// WebXR.WebXRManager
struct WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80  : public SubsystemLifecycleManager_2_tC137F129C0687C80EF6420FC92D442025CDEC55F
{
public:

public:
};

struct WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80_StaticFields
{
public:
	// WebXR.WebXRManager WebXR.WebXRManager::<Instance>k__BackingField
	WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * ___U3CInstanceU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80_StaticFields, ___U3CInstanceU3Ek__BackingField_5)); }
	inline WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * get_U3CInstanceU3Ek__BackingField_5() const { return ___U3CInstanceU3Ek__BackingField_5; }
	inline WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 ** get_address_of_U3CInstanceU3Ek__BackingField_5() { return &___U3CInstanceU3Ek__BackingField_5; }
	inline void set_U3CInstanceU3Ek__BackingField_5(WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * value)
	{
		___U3CInstanceU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_5), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// WebXR.WebXRControllerButton[]
struct WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * m_Items[1];

public:
	inline WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// WebXR.WebXRJointData[]
struct WebXRJointDataU5BU5D_tE01BEDB0F1BF89E4192E3F04E7BDA90EEE7C7A76  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WebXRJointData_t6418AA5B45D9C4CB1BF943CECC8516B1955B4DD3  m_Items[1];

public:
	inline WebXRJointData_t6418AA5B45D9C4CB1BF943CECC8516B1955B4DD3  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebXRJointData_t6418AA5B45D9C4CB1BF943CECC8516B1955B4DD3 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebXRJointData_t6418AA5B45D9C4CB1BF943CECC8516B1955B4DD3  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WebXRJointData_t6418AA5B45D9C4CB1BF943CECC8516B1955B4DD3  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebXRJointData_t6418AA5B45D9C4CB1BF943CECC8516B1955B4DD3 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebXRJointData_t6418AA5B45D9C4CB1BF943CECC8516B1955B4DD3  value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshal_pinvoke(const WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5& unmarshaled, WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshal_pinvoke_back(const WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshaled_pinvoke& marshaled, WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5& unmarshaled);
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshal_pinvoke_cleanup(WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshaled_pinvoke& marshaled);

// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m938188F524CF90F3CD36418ACC53E194A6B0CB5B_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m169DFA431C9A313350A4A964D24135EFEE0BDC60_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mEA7DC2B06A480A5EC7DE49B6E83C2D121D1962EF_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean WebXR.SubsystemLifecycleManager`2<System.Object,System.Object>::get_isSubsystemAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubsystemLifecycleManager_2_get_isSubsystemAvailable_mAF908491B4369E97BA8056BB84AB4E9DA72F2592_gshared (SubsystemLifecycleManager_2_t5C0D2374317678698CB068F42DEF4E33B8E2A900 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<!!0>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// TSubsystem WebXR.SubsystemLifecycleManager`2<System.Object,System.Object>::get_subsystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_2_get_subsystem_m6033199828EB33992339ED850CA2ACA2A42EB166_gshared_inline (SubsystemLifecycleManager_2_t5C0D2374317678698CB068F42DEF4E33B8E2A900 * __this, const RuntimeMethod* method);
// System.Void WebXR.SubsystemLifecycleManager`2<System.Object,System.Object>::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_Awake_m32454171ABE4D9B5B1BA96C3CA0F1555E24C5539_gshared (SubsystemLifecycleManager_2_t5C0D2374317678698CB068F42DEF4E33B8E2A900 * __this, const RuntimeMethod* method);
// System.Void WebXR.SubsystemLifecycleManager`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2__ctor_m021D847A5DAC03D91369A12222CE47B63CB99B12_gshared (SubsystemLifecycleManager_2_t5C0D2374317678698CB068F42DEF4E33B8E2A900 * __this, const RuntimeMethod* method);
// System.String WebXR.WebXRSettings::EnumToString<System.Int32Enum>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebXRSettings_EnumToString_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m52992C6A76561FA74F8BD9B7D7E2BA1246503879_gshared (WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String WebXR.WebXRSettings::FlagsToString<System.Int32Enum>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebXRSettings_FlagsToString_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m8A6B552AD147CD50CD25EC48718E9F4ED894ACA0_gshared (WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Void UnityEngine.Subsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subsystem_1__ctor_mAEC8690C5CD9191AD10190DAB32C106D3A33CBF7_gshared (Subsystem_1_t4575204F3B43AA9E23E2950B19B23DDA26158377 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptor_1__ctor_m8C6A21CD0D0941472B4E6A7D64BA38ACED08BE83_gshared (SubsystemDescriptor_1_tEA7E5F11DBF319514A9F77C9765671DF1A3C8A7A * __this, const RuntimeMethod* method);

// System.Void WebXR.WebXRCamera::SwitchXRState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_SwitchXRState_m851376F698DB5CE1EF3B5E111CD97FE8892932E7 (WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD * __this, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/XRChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange__ctor_mE5E1EE6F5AB2F9FB6410C9575B6094966E29E3C3 (XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager::add_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnXRChange_m9826052B05551670D191AADBE39D375B5EB31B74 (XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/HeadsetUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate__ctor_m70D77D1665A04E387C3DAE1ED1EE32D156BBC2AF (HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager::add_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnHeadsetUpdate_m0554666BEAA1461DFC7826B2AF0D412D968C3C85 (HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager::remove_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnXRChange_m3A0456774AC5C7C3ADB8F28694B2426563E9C3D2 (XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager::remove_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnHeadsetUpdate_m9651D1FF5CDB1844542ABF24BE72FD449D269D2F (HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRCamera::UpdateFollower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_UpdateFollower_m083BF947DBE0ACAE945BA2D849D1B19CDAB8C01C (WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_rect_m556222CD5D4975EF672DC33D979611405A173F79 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void WebXR.WebXRController::SetButtonState(WebXR.WebXRController/ButtonTypes,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetButtonState_m9D65A5A308B1E0B2515F8DE1053776DDB30AE635 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, int32_t ___action0, bool ___isPressed1, float ___value2, const RuntimeMethod* method);
// System.Void WebXR.WebXRController::TryUpdateButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_TryUpdateButtons_mDBA8F93BD88D1AB12822AA10BEE220A5016655B2 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<WebXR.WebXRController/ButtonTypes,WebXR.WebXRControllerButton>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m968FD5FAC291C05382FB024DCC417F79C14EADDA (Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m938188F524CF90F3CD36418ACC53E194A6B0CB5B_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<WebXR.WebXRController/ButtonTypes,WebXR.WebXRControllerButton>::get_Item(!0)
inline WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * Dictionary_2_get_Item_mF066975DEB4C3F50E6E39533848F8CE1D965C06E (Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * (*) (Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m169DFA431C9A313350A4A964D24135EFEE0BDC60_gshared)(__this, ___key0, method);
}
// System.Void WebXR.WebXRControllerButton::UpdateState(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerButton_UpdateState_m36FC44193D80537364672122C6A49BC64A5A05E7 (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * __this, bool ___isPressed0, float ___buttonValue1, const RuntimeMethod* method);
// System.Void WebXR.WebXRControllerButton::.ctor(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerButton__ctor_m53F9BFF8C394486C4288A0A0600BEEFBD1797452 (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * __this, bool ___isPressed0, float ___buttonValue1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<WebXR.WebXRController/ButtonTypes,WebXR.WebXRControllerButton>::Add(!0,!1)
inline void Dictionary_2_Add_mC8C06E89049D808E9DC0E7C6A0815DCED31A7B85 (Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F * __this, int32_t ___key0, WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F *, int32_t, WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A *, const RuntimeMethod*))Dictionary_2_Add_mEA7DC2B06A480A5EC7DE49B6E83C2D121D1962EF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// System.Void WebXR.WebXRController::SetControllerActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetControllerActive_m25832DF17A30DEC2BA1B1D6A45A568875568305D (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, bool ___active0, const RuntimeMethod* method);
// System.Void WebXR.WebXRController::set_gripRotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebXRController_set_gripRotation_mEE0BDBFC02D71039238A6D9B6D9DF92401ED6976_inline (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRController::set_gripPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebXRController_set_gripPosition_mB4C440FCE6EB76FA9CC7F68F49D8C7171F4E86B2_inline (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// System.Boolean WebXR.WebXRController::CheckOculusLinkBug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_CheckOculusLinkBug_m2231221C4D53E058CDA987CF43F639672DD09685 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, const RuntimeMethod* method);
// System.Void WebXR.WebXRController::HandleOculusLinkBug(WebXR.WebXRControllerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_HandleOculusLinkBug_mEE0EBF0BB9FD48EC66EF992C33A65016B207A663 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * ___controllerData0, const RuntimeMethod* method);
// System.Void WebXR.WebXRController::UpdateButtons(WebXR.WebXRControllerButton[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_UpdateButtons_m507C6C36756B6D7D252EE7B71D8466C79A26527E (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A* ___buttons0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion WebXR.WebXRController::get_gripRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  WebXRController_get_gripRotation_m1E780C719CEB74434BB64E02C91E8A115F8E9016_inline (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, const RuntimeMethod* method);
// System.Void WebXR.WebXRController::SetHandActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetHandActive_m3EDA9B654C6998FF89CE69A7FE7238BC04CE8785 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, bool ___active0, const RuntimeMethod* method);
// System.Void System.Action`1<WebXR.WebXRHandData>::Invoke(!0)
inline void Action_1_Invoke_m366FFFCEDB7C0D9C7BFDA740C2A0D4EF14DE932A (Action_1_t5C191254F3AC3B22208FB2C964A1D1BDD3BF3CE6 * __this, WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5C191254F3AC3B22208FB2C964A1D1BDD3BF3CE6 *, WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// WebXR.WebXRManager WebXR.WebXRManager::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * WebXRManager_get_Instance_m45AD80B206362DE6B312C6A5D39D045DE830A4A1_inline (const RuntimeMethod* method);
// System.Boolean WebXR.SubsystemLifecycleManager`2<WebXR.WebXRSubsystem,WebXR.WebXRSubsystemDescriptor>::get_isSubsystemAvailable()
inline bool SubsystemLifecycleManager_2_get_isSubsystemAvailable_m8C932EE292523EE009F248ED2F1552309BA5DB31 (SubsystemLifecycleManager_2_tC137F129C0687C80EF6420FC92D442025CDEC55F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (SubsystemLifecycleManager_2_tC137F129C0687C80EF6420FC92D442025CDEC55F *, const RuntimeMethod*))SubsystemLifecycleManager_2_get_isSubsystemAvailable_mAF908491B4369E97BA8056BB84AB4E9DA72F2592_gshared)(__this, method);
}
// System.Void WebXR.WebXRManager::HapticPulse(WebXR.WebXRControllerHand,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_HapticPulse_m256A19851FB9AEDC2B7B88BF8B089444F696A160 (WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * __this, int32_t ___hand0, float ___intensity1, float ___duration2, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/ControllerUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate__ctor_m5B5C91658AF1C2E75F59EA686099C186857889D5 (ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager::add_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnControllerUpdate_m8E1887163AF60C45661F317D32E356BCC7269874 (ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/HandUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandUpdate__ctor_m4921443A26826EACCE01DB27B24592E2809422EB (HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager::add_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnHandUpdate_m4C50C44EFC8465D2502322532111CE2E789C8F40 (HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager::remove_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnControllerUpdate_m94013B9462E5D252D406FE1885080A0AA88D8D23 (ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager::remove_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnHandUpdate_m7F3610ECFD98499D77200547D346AF406899EFF1 (HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<WebXR.WebXRController/ButtonTypes,WebXR.WebXRControllerButton>::.ctor()
inline void Dictionary_2__ctor_m51A27FE6D564DE0C0D0B95FB3949D525AE94C30B (Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F *, const RuntimeMethod*))Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// WebXR.WebXRSettings WebXR.WebXRSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * WebXRSettings_get_Instance_m58DCDB1C9960750B6F4518DBA722D92A5B37615A_inline (const RuntimeMethod* method);
// WebXR.WebXRSettings WebXR.WebXRLoader::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * WebXRLoader_GetSettings_mB3538081E5873EF1FB0FADC56970E53A22F5B3D4 (WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String WebXR.WebXRSettings::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebXRSettings_ToJson_m639FCF15396FC26FA766961EFA64A425A28474A4 (WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * __this, const RuntimeMethod* method);
// System.Void WebXR.WebXRLoader::SetWebXRSettings(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRLoader_SetWebXRSettings_m5EF6296865EB731D463EA3F217AADAA28734F157 (String_t* ___settingsJson0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<WebXR.WebXRSubsystemDescriptor,WebXR.WebXRSubsystem>(System.Collections.Generic.List`1<!!0>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisWebXRSubsystemDescriptor_t49D846DE8AA1635F1086FFDF794C244C7E314A71_TisWebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_m316DF412F0D028461B7ABE76A715F1FF83AEEF38 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6 *, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_gshared)(__this, ___descriptors0, ___id1, method);
}
// WebXR.WebXRSubsystem WebXR.WebXRLoader::get_WebXRSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * WebXRLoader_get_WebXRSubsystem_m76DCF04B38551A7A3B1E4F7C4CE972387111AC06 (WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Management.XRLoader::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLoader_Stop_mBEE0CD2B4ADC3D207F286BC1DCDA05FA4CDECC7C (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Subsystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subsystem_Destroy_mDAEF3C8FEE45DEAB90452E998E249CAEAB32A329 (Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Management.XRLoaderHelper::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLoaderHelper_Deinitialize_m618CFFA37B20197EBC745080E4594256877D82B2 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper__ctor_mD27E0396EC4B11E208CF891642475B496CADAC9B (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<WebXR.WebXRSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m93C3F7C2F840C50389F14482E14626F47720851E (List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>::.ctor()
inline void List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00 (List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// TSubsystem WebXR.SubsystemLifecycleManager`2<WebXR.WebXRSubsystem,WebXR.WebXRSubsystemDescriptor>::get_subsystem()
inline WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_inline (SubsystemLifecycleManager_2_tC137F129C0687C80EF6420FC92D442025CDEC55F * __this, const RuntimeMethod* method)
{
	return ((  WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * (*) (SubsystemLifecycleManager_2_tC137F129C0687C80EF6420FC92D442025CDEC55F *, const RuntimeMethod*))SubsystemLifecycleManager_2_get_subsystem_m6033199828EB33992339ED850CA2ACA2A42EB166_gshared_inline)(__this, method);
}
// System.Void WebXR.WebXRSubsystem::add_OnXRCapabilitiesUpdate(WebXR.WebXRSubsystem/XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnXRCapabilitiesUpdate_m9DD666F2A151746B8D9EEB22D4E0690E05F7C74B (XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::remove_OnXRCapabilitiesUpdate(WebXR.WebXRSubsystem/XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnXRCapabilitiesUpdate_m73A33A24BE1933727C60F1BB010611D27A7FA5BE (XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::add_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnXRChange_m21C9DC5B59684D88DE7566668843063E6E50DCD1 (XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::remove_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnXRChange_m3061AADEF1F5AD3665ABA5D2481A403CCFBBE003 (XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::add_OnVisibilityChange(WebXR.WebXRSubsystem/VisibilityChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnVisibilityChange_m4C34677A8BA985205DE59D02743CC96C04636022 (VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::remove_OnVisibilityChange(WebXR.WebXRSubsystem/VisibilityChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnVisibilityChange_m8C7D8AE689494D3B3F6DCA008F96F7FB74205DE3 (VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::add_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnControllerUpdate_mB348C2F8DBC444FEF6C5339D78538F52444532A4 (ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::remove_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnControllerUpdate_m0DE8C4DC9EE90E50A045B510A06AE1D7116425ED (ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::add_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnHandUpdate_mB281E1FE9000518D42344288A92A4082A16E07EA (HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::remove_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnHandUpdate_m3D23BDC60B337800989029A61B3A9DBFBDD34C75 (HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::add_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnHeadsetUpdate_m0E345583924F040F95F7A8FA10C2967C9BFEB00A (HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::remove_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnHeadsetUpdate_m191ADB2EAB38C55856383576F2A2CCAD313486E9 (HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::add_OnViewerHitTestUpdate(WebXR.WebXRSubsystem/HitTestUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnViewerHitTestUpdate_m1C8A778D9684039E5246169B17BCE25A0EED40B2 (HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::remove_OnViewerHitTestUpdate(WebXR.WebXRSubsystem/HitTestUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnViewerHitTestUpdate_mE69313A2AA4A4112E6F89FD4268E37FABEF1BBCD (HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::ToggleAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_ToggleAR_m1071DF7EEFEB3E8B2A588BC205B8D4C9C93E36EA (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::ToggleVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_ToggleVR_mAAA1B626B542EC555F65E16441699A472F353E6A (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::HapticPulse(WebXR.WebXRControllerHand,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_HapticPulse_m721A6DA6AD9A54309DC9435E7308E2787DE9E271 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, int32_t ___hand0, float ___intensity1, float ___duration2, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::StartViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_StartViewerHitTest_mDC9910CAF02F4DDBFC46A79D334D389295F89591 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::StopViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_StopViewerHitTest_m875B6A35A03E9221D623B9442134AD0FA70F00C5 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method);
// System.Void WebXR.SubsystemLifecycleManager`2<WebXR.WebXRSubsystem,WebXR.WebXRSubsystemDescriptor>::Awake()
inline void SubsystemLifecycleManager_2_Awake_m2C3EDFC728A9C76DE09CE8DBB95688E08F0498BC (SubsystemLifecycleManager_2_tC137F129C0687C80EF6420FC92D442025CDEC55F * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemLifecycleManager_2_tC137F129C0687C80EF6420FC92D442025CDEC55F *, const RuntimeMethod*))SubsystemLifecycleManager_2_Awake_m32454171ABE4D9B5B1BA96C3CA0F1555E24C5539_gshared)(__this, method);
}
// System.Void WebXR.WebXRManager::set_Instance(WebXR.WebXRManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebXRManager_set_Instance_m9301DB440D1AA2843392667B985E6A738F7D0A60_inline (WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnUpdate_m2569356A2D18C943D89071BEA4F6E795E5A0D72C (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method);
// System.Void WebXR.SubsystemLifecycleManager`2<WebXR.WebXRSubsystem,WebXR.WebXRSubsystemDescriptor>::.ctor()
inline void SubsystemLifecycleManager_2__ctor_mBBA88FFADFF4C94BAE735F6E1CA5E6A4C1B76071 (SubsystemLifecycleManager_2_tC137F129C0687C80EF6420FC92D442025CDEC55F * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemLifecycleManager_2_tC137F129C0687C80EF6420FC92D442025CDEC55F *, const RuntimeMethod*))SubsystemLifecycleManager_2__ctor_m021D847A5DAC03D91369A12222CE47B63CB99B12_gshared)(__this, method);
}
// System.String WebXR.WebXRSettings::EnumToString<WebXR.WebXRSettings/ReferenceSpaceTypes>(T)
inline String_t* WebXRSettings_EnumToString_TisReferenceSpaceTypes_tBDD052CAB9B79CAA3BDEED124DD35ED86ABAD653_m3E33645A282964BC1F00C1D0981837F2E884FA34 (WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E *, int32_t, const RuntimeMethod*))WebXRSettings_EnumToString_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m52992C6A76561FA74F8BD9B7D7E2BA1246503879_gshared)(__this, ___value0, method);
}
// System.String WebXR.WebXRSettings::FlagsToString<WebXR.WebXRSettings/ExtraFeatureTypes>(T)
inline String_t* WebXRSettings_FlagsToString_TisExtraFeatureTypes_tCEFCA040A0A48061BB1AEC424F5D136F2FE76E80_mE719ECF95C8728B88C0B668ED4E0CC19438B44CC (WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E *, int32_t, const RuntimeMethod*))WebXRSettings_FlagsToString_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m8A6B552AD147CD50CD25EC48718E9F4ED894ACA0_gshared)(__this, ___value0, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::OnXRCapabilities(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnXRCapabilities_mFB0D9BE0B209BB2D46B00B8BDAAA4809D5C2AFFE (bool ___isARSupported0, bool ___isVRSupported1, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::OnInputProfiles(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnInputProfiles_m13B2017F20BC87FB5A6652011A0BA662CFD7F26B (String_t* ___json0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::OnStartAR(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnStartAR_mCD56D3757C78CD5745E78516435B8036BFF851B7 (int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::OnStartVR(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnStartVR_mBD08B936DAEAEF64B167868B8E75F837B6AAFD76 (int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::UpdateVisibilityState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_UpdateVisibilityState_m315E0A2C9F0B076FE8B18D2898B4BAB50A324D39 (int32_t ___visibilityState0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::OnEndXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnEndXR_m619B5F929D1B8F67A360917710695E1474E03F14 (const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystemDescriptor__ctor_m878E85732A9EC0F90E39B1A97C5ECDAE0DE4D4FB (WebXRSubsystemDescriptor_t49D846DE8AA1635F1086FFDF794C244C7E314A71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_id_m3394B5AEBBE25A1924FD34FC0608DD5AACABBE2C_inline (SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_subsystemImplementationType_mAEAE9A52920C64D2A9C5B6316E30353AFA581AA4_inline (SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SubsystemRegistration::CreateDescriptor(UnityEngine.SubsystemDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubsystemRegistration_CreateDescriptor_m6C69D0D80C317F66888FEBF67DFEE327E3462A54 (SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * ___descriptor0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::InternalStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_InternalStart_mBE49CEBAC1AD49D004028D5095F9521C46B5A11F (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method);
// System.Boolean WebXR.WebXRSubsystem::GetHandFromHandsArray(System.Int32,WebXR.WebXRHandData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_GetHandFromHandsArray_m052A2C0FE5BFA262407F2D20472F7A8FAB6770E2 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, int32_t ___handIndex0, WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE ** ___handObject1, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/HandUpdate::Invoke(WebXR.WebXRHandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandUpdate_Invoke_mDC8A5CC9ABD536600DF155F273840341706C8F18 (HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * __this, WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * ___handData0, const RuntimeMethod* method);
// System.Boolean WebXR.WebXRSubsystem::GetGamepadFromControllersArray(System.Int32,WebXR.WebXRControllerData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_GetGamepadFromControllersArray_mEDCCB20F7B8F77FC32AA387F59600C7A5EA82E0C (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, int32_t ___controllerIndex0, WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** ___newControllerData1, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/ControllerUpdate::Invoke(WebXR.WebXRControllerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate_Invoke_m47C5A116DF9BF6CADB431CA95350B25CC19FF1F9 (ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * __this, WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * ___controllerData0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/XRChange::Invoke(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange_Invoke_m0CE326BEE758986F020B1D952BDA978AA7A7DA62 (XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * __this, int32_t ___state0, int32_t ___viewsCount1, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___leftRect2, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rightRect3, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::UpdateControllersOnEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_UpdateControllersOnEnd_mD6D4F8E6ED5F6E89335ED620BE3A6178FB1CCDF0 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/VisibilityChange::Invoke(WebXR.WebXRVisibilityState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChange_Invoke_m13E184A2941E9D486D5A2CCA9FECB6B651AD787E (VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * __this, int32_t ___visibilityState0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::UpdateXRCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_UpdateXRCameras_m2DB00BD7FFC62492F06E9CCB0684846FA72EA802 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method);
// System.Boolean WebXR.WebXRSubsystem::GetHitTestPoseFromViewerHitTestPoseArray(WebXR.WebXRHitPoseData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_GetHitTestPoseFromViewerHitTestPoseArray_m3DB573C079E332FB7FA88467F05E921F39CDF2BE (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 ** ___hitPoseData0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/HitTestUpdate::Invoke(WebXR.WebXRHitPoseData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitTestUpdate_Invoke_m63B55E422D090AA1804F049CE3A3A39DBB6CC689 (HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * __this, WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 * ___hitPoseData0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::GetMatrixFromSharedArray(System.Int32,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_GetMatrixFromSharedArray_mC9A6D744A947C4584B5CECFF762E979FE36D58F3 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, int32_t ___index0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___matrix1, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::GetQuaternionFromSharedArray(System.Int32,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_GetQuaternionFromSharedArray_m77CB741C986343AF26F35EAF80B38BEF9BD8F273 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, int32_t ___index0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___quaternion1, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::GetVector3FromSharedArray(System.Int32,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_GetVector3FromSharedArray_mDE832F656E4E129E1B990D727DF7616E5A1ED827 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___vec31, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/HeadsetUpdate::Invoke(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Quaternion,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate_Invoke_mB71F7BA6F45BA0BD17F09146CBB07D8B18526838 (HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___leftProjectionMatrix0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rightProjectionMatrix1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___leftRotation2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rightRotation3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftPosition4, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightPosition5, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/StartXREvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartXREvent__ctor_m31BB570FD0026812EE1469F08DA63839225D5ECE (StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/VisibilityChangeEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChangeEvent__ctor_mEED0B21C6518EFF14E8E8663B3259BA8B486BE95 (VisibilityChangeEvent_t577FC56D660C998476CA4FFB4EB1E7086216016D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/EndXREvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndXREvent__ctor_mD89719B066CD1121CDE3E3A37A352DDFC9FD43ED (EndXREvent_tAEF82376310EE655EF1E985071F2D45794196F5F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesEvent__ctor_m57D26C946399C393C29345FA518D87488A6B86D5 (XRCapabilitiesEvent_t3F5640F3A08933111CC7FE5B43BCE122803DCF7F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/InputProfilesEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputProfilesEvent__ctor_m7F975C26A400BAE5379C8B8C7A3F4F379144AA64 (InputProfilesEvent_t88DDB46B55E92BBBC75C03C1EDBD7AB266F240A6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/Native::SetWebXREvents(WebXR.WebXRSubsystem/StartXREvent,WebXR.WebXRSubsystem/StartXREvent,WebXR.WebXRSubsystem/VisibilityChangeEvent,WebXR.WebXRSubsystem/EndXREvent,WebXR.WebXRSubsystem/XRCapabilitiesEvent,WebXR.WebXRSubsystem/InputProfilesEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_SetWebXREvents_mCC3698663E68C8C630E4030E82DDD6AB9D94CA0A (StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA * ___on_start_ar0, StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA * ___on_start_vr1, VisibilityChangeEvent_t577FC56D660C998476CA4FFB4EB1E7086216016D * ___on_visibility_change2, EndXREvent_tAEF82376310EE655EF1E985071F2D45794196F5F * ___on_end_xr3, XRCapabilitiesEvent_t3F5640F3A08933111CC7FE5B43BCE122803DCF7F * ___on_xr_capabilities4, InputProfilesEvent_t88DDB46B55E92BBBC75C03C1EDBD7AB266F240A6 * ___on_input_profiles5, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/Native::InitControllersArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_InitControllersArray_m41766AE9F2ADCBC36EDEA22647DAB1186C940304 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___array0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/Native::InitHandsArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_InitHandsArray_mC0A30CADA36195DC99C994095D09DAEA265DD125 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___array0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/Native::InitViewerHitTestPoseArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_InitViewerHitTestPoseArray_mE80389001FFEC9A392EC3405A25BF25BC008246C (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___array0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/Native::InitXRSharedArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_InitXRSharedArray_m04832F3924505F264E4CFB9FD36AE30EA995C5E4 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___array0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::OnXRCapabilities(WebXR.WebXRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnXRCapabilities_m6F3BE670D26343419486F9AD5832EC5B0F916361 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5  ___cap0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<WebXR.WebXRControllersProfiles>(System.String)
inline WebXRControllersProfiles_t2D147E1F114FABC0C5415E99EEF169E431A43FCB * JsonUtility_FromJson_TisWebXRControllersProfiles_t2D147E1F114FABC0C5415E99EEF169E431A43FCB_mE327F9A07CC912CF5670004A9910709331F8BC78 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  WebXRControllersProfiles_t2D147E1F114FABC0C5415E99EEF169E431A43FCB * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void WebXR.WebXRSubsystem::OnInputProfiles(WebXR.WebXRControllersProfiles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnInputProfiles_m3132BDD709B6FCBDBE3F8A354BA381A21F424D32 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, WebXRControllersProfiles_t2D147E1F114FABC0C5415E99EEF169E431A43FCB * ___controllersProfiles0, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesUpdate::Invoke(WebXR.WebXRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate_Invoke_mA6EF652F2201F501B2099F06400913BC5FCBBDC3 (XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * __this, WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5  ___capabilities0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem::setXrState(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_setXrState_m70307D78E47C58DB1DC215A84F40149E6837E6CE (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, int32_t ___state0, int32_t ___viewsCount1, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___leftRect2, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rightRect3, const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/Native::ToggleAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_ToggleAR_mC629D582E399FC953515A0C94A1931A823026607 (const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/Native::ToggleVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_ToggleVR_m47624AA1B8514DB8F4CEA9C46805CF8BDD1E7C1C (const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/Native::ToggleViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_ToggleViewerHitTest_m8C6B83AAFD86E944657908F8A1C0699812B8F05C (const RuntimeMethod* method);
// System.Void WebXR.WebXRSubsystem/Native::ControllerPulse(System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_ControllerPulse_m7E40FB5A6FC2F3BA6A02D10EB0C10AB1BB222195 (int32_t ___controller0, float ___intensity1, float ___duration2, const RuntimeMethod* method);
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_m27BC97EE3093FDADFE0804FB80AFF5CDB03D355B (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void WebXR.WebXRHandData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRHandData__ctor_m999465E053B4589EA723674415F458296F52D544 (WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * __this, const RuntimeMethod* method);
// System.Void WebXR.WebXRControllerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerData__ctor_m8AECA8B8E568D7F42AF05777A6F7A5C646891C55 (WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * __this, const RuntimeMethod* method);
// System.Void WebXR.WebXRHitPoseData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRHitPoseData__ctor_m96631533F5A08773321918A42C3E113BDE4C82BE (WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Subsystem`1<WebXR.WebXRSubsystemDescriptor>::.ctor()
inline void Subsystem_1__ctor_m9224C2EEFDB00429F35D5BDA752C2D2F8FA44D2C (Subsystem_1_t163429EC8FD014939B841046D553AAE4F4B65A7F * __this, const RuntimeMethod* method)
{
	((  void (*) (Subsystem_1_t163429EC8FD014939B841046D553AAE4F4B65A7F *, const RuntimeMethod*))Subsystem_1__ctor_mAEC8690C5CD9191AD10190DAB32C106D3A33CBF7_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemDescriptor`1<WebXR.WebXRSubsystem>::.ctor()
inline void SubsystemDescriptor_1__ctor_m91CAA0F47FB4E876A0CAAD65E9F06C00FB029143 (SubsystemDescriptor_1_tC313893D232E084BADBC49A01C5BB2D397DD6B6F * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptor_1_tC313893D232E084BADBC49A01C5BB2D397DD6B6F *, const RuntimeMethod*))SubsystemDescriptor_1__ctor_m8C6A21CD0D0941472B4E6A7D64BA38ACED08BE83_gshared)(__this, method);
}
IL2CPP_EXTERN_C void DEFAULT_CALL SetWebXRSettings(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL InitXRSharedArray(float*);
IL2CPP_EXTERN_C void DEFAULT_CALL InitControllersArray(float*);
IL2CPP_EXTERN_C void DEFAULT_CALL InitHandsArray(float*);
IL2CPP_EXTERN_C void DEFAULT_CALL InitViewerHitTestPoseArray(float*);
IL2CPP_EXTERN_C void DEFAULT_CALL ToggleAR();
IL2CPP_EXTERN_C void DEFAULT_CALL ToggleVR();
IL2CPP_EXTERN_C void DEFAULT_CALL ToggleViewerHitTest();
IL2CPP_EXTERN_C void DEFAULT_CALL ControllerPulse(int32_t, float, float);
IL2CPP_EXTERN_C void DEFAULT_CALL SetWebXREvents(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
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
// System.Void WebXR.WebXRCamera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_Awake_m9C083949E10ECDF20F6CDCEE3DA6C3533D40C78F (WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD * __this, const RuntimeMethod* method)
{
	{
		// SwitchXRState();
		WebXRCamera_SwitchXRState_m851376F698DB5CE1EF3B5E111CD97FE8892932E7(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_OnEnable_mC8D3B94D3CFD6DAF48BAA3864B2B56AC368F4857 (WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRCamera_OnHeadsetUpdate_m2C9AA445B591ADBF1E15CE9A7BEED1FE3BEC02AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRCamera_OnXRChange_mDA142651E420EFEAC77C98502765A368826E2BFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebXRManager.OnXRChange += OnXRChange;
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_0 = (XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD *)il2cpp_codegen_object_new(XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD_il2cpp_TypeInfo_var);
		XRChange__ctor_mE5E1EE6F5AB2F9FB6410C9575B6094966E29E3C3(L_0, __this, (intptr_t)((intptr_t)WebXRCamera_OnXRChange_mDA142651E420EFEAC77C98502765A368826E2BFA_RuntimeMethod_var), /*hidden argument*/NULL);
		WebXRManager_add_OnXRChange_m9826052B05551670D191AADBE39D375B5EB31B74(L_0, /*hidden argument*/NULL);
		// WebXRManager.OnHeadsetUpdate += OnHeadsetUpdate;
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_1 = (HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD *)il2cpp_codegen_object_new(HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD_il2cpp_TypeInfo_var);
		HeadsetUpdate__ctor_m70D77D1665A04E387C3DAE1ED1EE32D156BBC2AF(L_1, __this, (intptr_t)((intptr_t)WebXRCamera_OnHeadsetUpdate_m2C9AA445B591ADBF1E15CE9A7BEED1FE3BEC02AA_RuntimeMethod_var), /*hidden argument*/NULL);
		WebXRManager_add_OnHeadsetUpdate_m0554666BEAA1461DFC7826B2AF0D412D968C3C85(L_1, /*hidden argument*/NULL);
		// hasFollower = cameraFollower != null;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_cameraFollower_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		__this->set_hasFollower_14(L_3);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_OnDisable_m16E5813AC3697C9C77E7EEF4A7E8D617C7BF67A2 (WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRCamera_OnHeadsetUpdate_m2C9AA445B591ADBF1E15CE9A7BEED1FE3BEC02AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRCamera_OnXRChange_mDA142651E420EFEAC77C98502765A368826E2BFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebXRManager.OnXRChange -= OnXRChange;
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_0 = (XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD *)il2cpp_codegen_object_new(XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD_il2cpp_TypeInfo_var);
		XRChange__ctor_mE5E1EE6F5AB2F9FB6410C9575B6094966E29E3C3(L_0, __this, (intptr_t)((intptr_t)WebXRCamera_OnXRChange_mDA142651E420EFEAC77C98502765A368826E2BFA_RuntimeMethod_var), /*hidden argument*/NULL);
		WebXRManager_remove_OnXRChange_m3A0456774AC5C7C3ADB8F28694B2426563E9C3D2(L_0, /*hidden argument*/NULL);
		// WebXRManager.OnHeadsetUpdate -= OnHeadsetUpdate;
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_1 = (HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD *)il2cpp_codegen_object_new(HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD_il2cpp_TypeInfo_var);
		HeadsetUpdate__ctor_m70D77D1665A04E387C3DAE1ED1EE32D156BBC2AF(L_1, __this, (intptr_t)((intptr_t)WebXRCamera_OnHeadsetUpdate_m2C9AA445B591ADBF1E15CE9A7BEED1FE3BEC02AA_RuntimeMethod_var), /*hidden argument*/NULL);
		WebXRManager_remove_OnHeadsetUpdate_m9651D1FF5CDB1844542ABF24BE72FD449D269D2F(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_Update_m36AE0C922F0D576B3B6C111C948A53A81E2BC184 (WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD * __this, const RuntimeMethod* method)
{
	{
		// UpdateFollower();
		WebXRCamera_UpdateFollower_m083BF947DBE0ACAE945BA2D849D1B19CDAB8C01C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::SwitchXRState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_SwitchXRState_m851376F698DB5CE1EF3B5E111CD97FE8892932E7 (WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// switch (xrState)
		int32_t L_0 = __this->get_xrState_10();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0089;
			}
			case 1:
			{
				goto IL_001a;
			}
			case 2:
			{
				goto IL_00f8;
			}
		}
	}
	{
		return;
	}

IL_001a:
	{
		// cameraMain.enabled = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_cameraMain_4();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)0, /*hidden argument*/NULL);
		// cameraL.enabled = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = __this->get_cameraL_5();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, (bool)0, /*hidden argument*/NULL);
		// cameraR.enabled = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = __this->get_cameraR_6();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_4, (bool)0, /*hidden argument*/NULL);
		// cameraARL.enabled = viewsCount > 0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = __this->get_cameraARL_7();
		int32_t L_6 = __this->get_viewsCount_13();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_5, (bool)((((int32_t)L_6) > ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// cameraARL.rect = leftRect;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7 = __this->get_cameraARL_7();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8 = __this->get_leftRect_11();
		Camera_set_rect_m556222CD5D4975EF672DC33D979611405A173F79(L_7, L_8, /*hidden argument*/NULL);
		// cameraARR.enabled = viewsCount > 1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9 = __this->get_cameraARR_8();
		int32_t L_10 = __this->get_viewsCount_13();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_9, (bool)((((int32_t)L_10) > ((int32_t)1))? 1 : 0), /*hidden argument*/NULL);
		// cameraARR.rect = rightRect;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_11 = __this->get_cameraARR_8();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_12 = __this->get_rightRect_12();
		Camera_set_rect_m556222CD5D4975EF672DC33D979611405A173F79(L_11, L_12, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0089:
	{
		// cameraMain.enabled = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13 = __this->get_cameraMain_4();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_13, (bool)0, /*hidden argument*/NULL);
		// cameraL.enabled = viewsCount > 0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_14 = __this->get_cameraL_5();
		int32_t L_15 = __this->get_viewsCount_13();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_14, (bool)((((int32_t)L_15) > ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// cameraL.rect = leftRect;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_16 = __this->get_cameraL_5();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_17 = __this->get_leftRect_11();
		Camera_set_rect_m556222CD5D4975EF672DC33D979611405A173F79(L_16, L_17, /*hidden argument*/NULL);
		// cameraR.enabled = viewsCount > 1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_18 = __this->get_cameraR_6();
		int32_t L_19 = __this->get_viewsCount_13();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_18, (bool)((((int32_t)L_19) > ((int32_t)1))? 1 : 0), /*hidden argument*/NULL);
		// cameraR.rect = rightRect;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_20 = __this->get_cameraR_6();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_21 = __this->get_rightRect_12();
		Camera_set_rect_m556222CD5D4975EF672DC33D979611405A173F79(L_20, L_21, /*hidden argument*/NULL);
		// cameraARL.enabled = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_22 = __this->get_cameraARL_7();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_22, (bool)0, /*hidden argument*/NULL);
		// cameraARR.enabled = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_23 = __this->get_cameraARR_8();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_23, (bool)0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00f8:
	{
		// cameraMain.enabled = true;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_24 = __this->get_cameraMain_4();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_24, (bool)1, /*hidden argument*/NULL);
		// cameraL.enabled = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_25 = __this->get_cameraL_5();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_25, (bool)0, /*hidden argument*/NULL);
		// cameraR.enabled = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_26 = __this->get_cameraR_6();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_26, (bool)0, /*hidden argument*/NULL);
		// cameraARL.enabled = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_27 = __this->get_cameraARL_7();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_27, (bool)0, /*hidden argument*/NULL);
		// cameraARR.enabled = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_28 = __this->get_cameraARR_8();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_28, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::UpdateFollower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_UpdateFollower_m083BF947DBE0ACAE945BA2D849D1B19CDAB8C01C (WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (!hasFollower)
		bool L_0 = __this->get_hasFollower_14();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// switch (xrState)
		int32_t L_1 = __this->get_xrState_10();
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_00ee;
		}
	}
	{
		// cameraFollower.localRotation = cameraARL.transform.localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_cameraFollower_9();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = __this->get_cameraARL_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_6, /*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_4, L_7, /*hidden argument*/NULL);
		// if (viewsCount > 1)
		int32_t L_8 = __this->get_viewsCount_13();
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_007c;
		}
	}
	{
		// cameraFollower.localPosition = (cameraARL.transform.localPosition + cameraARR.transform.localPosition) * 0.5f;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = __this->get_cameraFollower_9();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_10 = __this->get_cameraARL_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_11, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13 = __this->get_cameraARR_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_16, (0.5f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_9, L_17, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_007c:
	{
		// cameraFollower.localPosition = cameraARL.transform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = __this->get_cameraFollower_9();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19 = __this->get_cameraARL_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_20, /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_18, L_21, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0098:
	{
		// cameraFollower.localRotation = cameraL.transform.localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = __this->get_cameraFollower_9();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_23 = __this->get_cameraL_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_23, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25;
		L_25 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_24, /*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_22, L_25, /*hidden argument*/NULL);
		// cameraFollower.localPosition = (cameraL.transform.localPosition + cameraR.transform.localPosition) * 0.5f;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = __this->get_cameraFollower_9();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_27 = __this->get_cameraL_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_28, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_30 = __this->get_cameraR_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_29, L_32, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_33, (0.5f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_26, L_34, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_00ee:
	{
		// cameraFollower.localRotation = cameraMain.transform.localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35 = __this->get_cameraFollower_9();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_36 = __this->get_cameraMain_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_36, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_38;
		L_38 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_37, /*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_35, L_38, /*hidden argument*/NULL);
		// cameraFollower.localPosition = cameraMain.transform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39 = __this->get_cameraFollower_9();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_40 = __this->get_cameraMain_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_40, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_41, /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_39, L_42, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion WebXR.WebXRCamera::GetLocalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  WebXRCamera_GetLocalRotation_m20E909551036A8901D11D352A42C4196D7D02960 (WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// switch (xrState)
		int32_t L_0 = __this->get_xrState_10();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}
	{
		// return cameraARL.transform.localRotation;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = __this->get_cameraARL_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001f:
	{
		// return cameraL.transform.localRotation;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = __this->get_cameraL_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0030:
	{
		// return cameraMain.transform.localRotation;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9 = __this->get_cameraMain_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Vector3 WebXR.WebXRCamera::GetLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WebXRCamera_GetLocalPosition_m1829D494B6ED1F63C7B0B77C47DB7686CA67CE9D (WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// switch (xrState)
		int32_t L_0 = __this->get_xrState_10();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0088;
		}
	}
	{
		// if (viewsCount > 1)
		int32_t L_3 = __this->get_viewsCount_13();
		if ((((int32_t)L_3) <= ((int32_t)1)))
		{
			goto IL_0047;
		}
	}
	{
		// return (cameraARL.transform.localPosition + cameraARR.transform.localPosition) * 0.5f;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = __this->get_cameraARL_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_5, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7 = __this->get_cameraARR_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, (0.5f), /*hidden argument*/NULL);
		return L_11;
	}

IL_0047:
	{
		// return cameraARL.transform.localPosition;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_12 = __this->get_cameraARL_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0058:
	{
		// return (cameraL.transform.localPosition + cameraR.transform.localPosition) * 0.5f;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15 = __this->get_cameraL_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_16, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_18 = __this->get_cameraR_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_17, L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_21, (0.5f), /*hidden argument*/NULL);
		return L_22;
	}

IL_0088:
	{
		// return cameraMain.transform.localPosition;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_23 = __this->get_cameraMain_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_24, /*hidden argument*/NULL);
		return L_25;
	}
}
// UnityEngine.Camera WebXR.WebXRCamera::GetCamera(WebXR.WebXRCamera/CameraID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * WebXRCamera_GetCamera_m39321E47CAD66406ED5924C2CFBED86D9392679F (WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD * __this, int32_t ___cameraID0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___cameraID0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_001a;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0028;
			}
			case 3:
			{
				goto IL_002f;
			}
		}
	}
	{
		goto IL_0036;
	}

IL_001a:
	{
		// return cameraL;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = __this->get_cameraL_5();
		return L_1;
	}

IL_0021:
	{
		// return cameraR;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_cameraR_6();
		return L_2;
	}

IL_0028:
	{
		// return cameraARL;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = __this->get_cameraARL_7();
		return L_3;
	}

IL_002f:
	{
		// return cameraARR;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = __this->get_cameraARR_8();
		return L_4;
	}

IL_0036:
	{
		// return cameraMain;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = __this->get_cameraMain_4();
		return L_5;
	}
}
// System.Void WebXR.WebXRCamera::OnXRChange(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_OnXRChange_mDA142651E420EFEAC77C98502765A368826E2BFA (WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD * __this, int32_t ___state0, int32_t ___viewsCount1, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___leftRect2, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rightRect3, const RuntimeMethod* method)
{
	{
		// xrState = state;
		int32_t L_0 = ___state0;
		__this->set_xrState_10(L_0);
		// this.viewsCount = viewsCount;
		int32_t L_1 = ___viewsCount1;
		__this->set_viewsCount_13(L_1);
		// this.leftRect = leftRect;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2 = ___leftRect2;
		__this->set_leftRect_11(L_2);
		// this.rightRect = rightRect;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3 = ___rightRect3;
		__this->set_rightRect_12(L_3);
		// SwitchXRState();
		WebXRCamera_SwitchXRState_m851376F698DB5CE1EF3B5E111CD97FE8892932E7(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::OnHeadsetUpdate(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Quaternion,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_OnHeadsetUpdate_m2C9AA445B591ADBF1E15CE9A7BEED1FE3BEC02AA (WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___leftProjectionMatrix0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rightProjectionMatrix1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___leftRotation2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rightRotation3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftPosition4, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightPosition5, const RuntimeMethod* method)
{
	{
		// if (xrState == WebXRState.VR)
		int32_t L_0 = __this->get_xrState_10();
		if (L_0)
		{
			goto IL_0068;
		}
	}
	{
		// cameraL.transform.localPosition = leftPosition;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = __this->get_cameraL_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___leftPosition4;
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_2, L_3, /*hidden argument*/NULL);
		// cameraL.transform.localRotation = leftRotation;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = __this->get_cameraL_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = ___leftRotation2;
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_5, L_6, /*hidden argument*/NULL);
		// cameraL.projectionMatrix = leftProjectionMatrix;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7 = __this->get_cameraL_5();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_8 = ___leftProjectionMatrix0;
		Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328(L_7, L_8, /*hidden argument*/NULL);
		// cameraR.transform.localPosition = rightPosition;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9 = __this->get_cameraR_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___rightPosition5;
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_10, L_11, /*hidden argument*/NULL);
		// cameraR.transform.localRotation = rightRotation;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_12 = __this->get_cameraR_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14 = ___rightRotation3;
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_13, L_14, /*hidden argument*/NULL);
		// cameraR.projectionMatrix = rightProjectionMatrix;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15 = __this->get_cameraR_6();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_16 = ___rightProjectionMatrix1;
		Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328(L_15, L_16, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0068:
	{
		// else if (xrState == WebXRState.AR)
		int32_t L_17 = __this->get_xrState_10();
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_00d0;
		}
	}
	{
		// cameraARL.transform.localPosition = leftPosition;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_18 = __this->get_cameraARL_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___leftPosition4;
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_19, L_20, /*hidden argument*/NULL);
		// cameraARL.transform.localRotation = leftRotation;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_21 = __this->get_cameraARL_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_21, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23 = ___leftRotation2;
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_22, L_23, /*hidden argument*/NULL);
		// cameraARL.projectionMatrix = leftProjectionMatrix;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_24 = __this->get_cameraARL_7();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_25 = ___leftProjectionMatrix0;
		Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328(L_24, L_25, /*hidden argument*/NULL);
		// cameraARR.transform.localPosition = rightPosition;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_26 = __this->get_cameraARR_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = ___rightPosition5;
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_27, L_28, /*hidden argument*/NULL);
		// cameraARR.transform.localRotation = rightRotation;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_29 = __this->get_cameraARR_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_29, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31 = ___rightRotation3;
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_30, L_31, /*hidden argument*/NULL);
		// cameraARR.projectionMatrix = rightProjectionMatrix;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_32 = __this->get_cameraARR_8();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_33 = ___rightProjectionMatrix1;
		Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328(L_32, L_33, /*hidden argument*/NULL);
	}

IL_00d0:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera__ctor_m50533881B263F33899C678571B2AE1602AA9C208 (WebXRCamera_tC2BAE1A6BE706EAEDA5E2E7087BBFCDA07E8E9DD * __this, const RuntimeMethod* method)
{
	{
		// private WebXRState xrState = WebXRState.NORMAL;
		__this->set_xrState_10(2);
		// private int viewsCount = 1;
		__this->set_viewsCount_13(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 WebXR.WebXRController::get_gripPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WebXRController_get_gripPosition_m960DA276F805241613C3ED157C6229D0E7EFCBB8 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 gripPosition { get; private set; } = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CgripPositionU3Ek__BackingField_27();
		return L_0;
	}
}
// System.Void WebXR.WebXRController::set_gripPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_set_gripPosition_mB4C440FCE6EB76FA9CC7F68F49D8C7171F4E86B2 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 gripPosition { get; private set; } = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CgripPositionU3Ek__BackingField_27(L_0);
		return;
	}
}
// UnityEngine.Quaternion WebXR.WebXRController::get_gripRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  WebXRController_get_gripRotation_m1E780C719CEB74434BB64E02C91E8A115F8E9016 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion gripRotation { get; private set; } = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_U3CgripRotationU3Ek__BackingField_28();
		return L_0;
	}
}
// System.Void WebXR.WebXRController::set_gripRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_set_gripRotation_mEE0BDBFC02D71039238A6D9B6D9DF92401ED6976 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion gripRotation { get; private set; } = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___value0;
		__this->set_U3CgripRotationU3Ek__BackingField_28(L_0);
		return;
	}
}
// System.Boolean WebXR.WebXRController::get_isControllerActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_get_isControllerActive_m73D34900A9E59D070FF1219C0647B1B5C3AE8329 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, const RuntimeMethod* method)
{
	{
		// return controllerActive;
		bool L_0 = __this->get_controllerActive_20();
		return L_0;
	}
}
// System.Boolean WebXR.WebXRController::get_isHandActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_get_isHandActive_mD3AF262828737155A39CEA3D00178E866AB63F82 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, const RuntimeMethod* method)
{
	{
		// return handActive;
		bool L_0 = __this->get_handActive_21();
		return L_0;
	}
}
// System.Void WebXR.WebXRController::TryUpdateButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_TryUpdateButtons_mDBA8F93BD88D1AB12822AA10BEE220A5016655B2 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::UpdateButtons(WebXR.WebXRControllerButton[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_UpdateButtons_m507C6C36756B6D7D252EE7B71D8466C79A26527E (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A* ___buttons0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * V_1 = NULL;
	{
		// for (int i = 0; i < buttons.Length; i++)
		V_0 = 0;
		goto IL_001f;
	}

IL_0004:
	{
		// WebXRControllerButton button = buttons[i];
		WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A* L_0 = ___buttons0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		// SetButtonState((ButtonTypes)i, button.pressed, button.value);
		int32_t L_4 = V_0;
		WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * L_5 = V_1;
		bool L_6 = L_5->get_pressed_0();
		WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * L_7 = V_1;
		float L_8 = L_7->get_value_3();
		WebXRController_SetButtonState_m9D65A5A308B1E0B2515F8DE1053776DDB30AE635(__this, L_4, L_6, L_8, /*hidden argument*/NULL);
		// for (int i = 0; i < buttons.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_001f:
	{
		// for (int i = 0; i < buttons.Length; i++)
		int32_t L_10 = V_0;
		WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A* L_11 = ___buttons0;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Single WebXR.WebXRController::GetAxis(WebXR.WebXRController/AxisTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WebXRController_GetAxis_mE63CCCDF7B5FA0364D0A5AF7B731704A9B9CFC06 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, int32_t ___action0, const RuntimeMethod* method)
{
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDBA8F93BD88D1AB12822AA10BEE220A5016655B2(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___action0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___action0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001b;
		}
	}
	{
		// return squeeze;
		float L_2 = __this->get_squeeze_10();
		return L_2;
	}

IL_0014:
	{
		// return trigger;
		float L_3 = __this->get_trigger_9();
		return L_3;
	}

IL_001b:
	{
		// return 0;
		return (0.0f);
	}
}
// UnityEngine.Vector2 WebXR.WebXRController::GetAxis2D(WebXR.WebXRController/Axis2DTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  WebXRController_GetAxis2D_m6A28B9CF97A9EA7942FB8D9FEE2EFB54BA147F86 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, int32_t ___action0, const RuntimeMethod* method)
{
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDBA8F93BD88D1AB12822AA10BEE220A5016655B2(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___action0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___action0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0033;
	}

IL_000f:
	{
		// return new Vector2(thumbstickX, thumbstickY);
		float L_2 = __this->get_thumbstickX_12();
		float L_3 = __this->get_thumbstickY_13();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0021:
	{
		// return new Vector2(touchpadX, touchpadY);
		float L_5 = __this->get_touchpadX_15();
		float L_6 = __this->get_touchpadY_16();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0033:
	{
		// return Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean WebXR.WebXRController::GetButton(WebXR.WebXRController/ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetButton_mE13D42D2839320DE74A42BCE1A92996F56B2CFC2 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, int32_t ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m968FD5FAC291C05382FB024DCC417F79C14EADDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF066975DEB4C3F50E6E39533848F8CE1D965C06E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDBA8F93BD88D1AB12822AA10BEE220A5016655B2(__this, /*hidden argument*/NULL);
		// if (!buttonStates.ContainsKey(action))
		Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F * L_0 = __this->get_buttonStates_19();
		int32_t L_1 = ___action0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m968FD5FAC291C05382FB024DCC417F79C14EADDA(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m968FD5FAC291C05382FB024DCC417F79C14EADDA_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// return buttonStates[action].pressed;
		Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F * L_3 = __this->get_buttonStates_19();
		int32_t L_4 = ___action0;
		WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * L_5;
		L_5 = Dictionary_2_get_Item_mF066975DEB4C3F50E6E39533848F8CE1D965C06E(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mF066975DEB4C3F50E6E39533848F8CE1D965C06E_RuntimeMethod_var);
		bool L_6 = L_5->get_pressed_0();
		return L_6;
	}
}
// System.Void WebXR.WebXRController::SetButtonState(WebXR.WebXRController/ButtonTypes,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetButtonState_m9D65A5A308B1E0B2515F8DE1053776DDB30AE635 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, int32_t ___action0, bool ___isPressed1, float ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC8C06E89049D808E9DC0E7C6A0815DCED31A7B85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m968FD5FAC291C05382FB024DCC417F79C14EADDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF066975DEB4C3F50E6E39533848F8CE1D965C06E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buttonStates.ContainsKey(action))
		Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F * L_0 = __this->get_buttonStates_19();
		int32_t L_1 = ___action0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m968FD5FAC291C05382FB024DCC417F79C14EADDA(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m968FD5FAC291C05382FB024DCC417F79C14EADDA_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// buttonStates[action].UpdateState(isPressed, value);
		Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F * L_3 = __this->get_buttonStates_19();
		int32_t L_4 = ___action0;
		WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * L_5;
		L_5 = Dictionary_2_get_Item_mF066975DEB4C3F50E6E39533848F8CE1D965C06E(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mF066975DEB4C3F50E6E39533848F8CE1D965C06E_RuntimeMethod_var);
		bool L_6 = ___isPressed1;
		float L_7 = ___value2;
		WebXRControllerButton_UpdateState_m36FC44193D80537364672122C6A49BC64A5A05E7(L_5, L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0022:
	{
		// buttonStates.Add(action, new WebXRControllerButton(isPressed, value));
		Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F * L_8 = __this->get_buttonStates_19();
		int32_t L_9 = ___action0;
		bool L_10 = ___isPressed1;
		float L_11 = ___value2;
		WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * L_12 = (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A *)il2cpp_codegen_object_new(WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A_il2cpp_TypeInfo_var);
		WebXRControllerButton__ctor_m53F9BFF8C394486C4288A0A0600BEEFBD1797452(L_12, L_10, L_11, /*hidden argument*/NULL);
		Dictionary_2_Add_mC8C06E89049D808E9DC0E7C6A0815DCED31A7B85(L_8, L_9, L_12, /*hidden argument*/Dictionary_2_Add_mC8C06E89049D808E9DC0E7C6A0815DCED31A7B85_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean WebXR.WebXRController::GetButtonDown(WebXR.WebXRController/ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetButtonDown_mBA721A329EDED21C76789CBCEFBE33957662DDEE (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, int32_t ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m968FD5FAC291C05382FB024DCC417F79C14EADDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF066975DEB4C3F50E6E39533848F8CE1D965C06E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDBA8F93BD88D1AB12822AA10BEE220A5016655B2(__this, /*hidden argument*/NULL);
		// if (!buttonStates.ContainsKey(action))
		Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F * L_0 = __this->get_buttonStates_19();
		int32_t L_1 = ___action0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m968FD5FAC291C05382FB024DCC417F79C14EADDA(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m968FD5FAC291C05382FB024DCC417F79C14EADDA_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// return buttonStates[action].down;
		Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F * L_3 = __this->get_buttonStates_19();
		int32_t L_4 = ___action0;
		WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * L_5;
		L_5 = Dictionary_2_get_Item_mF066975DEB4C3F50E6E39533848F8CE1D965C06E(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mF066975DEB4C3F50E6E39533848F8CE1D965C06E_RuntimeMethod_var);
		bool L_6 = L_5->get_down_1();
		return L_6;
	}
}
// System.Boolean WebXR.WebXRController::GetButtonUp(WebXR.WebXRController/ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetButtonUp_mB01430991CB87B72A9B7000D349291D053B19369 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, int32_t ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m968FD5FAC291C05382FB024DCC417F79C14EADDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF066975DEB4C3F50E6E39533848F8CE1D965C06E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDBA8F93BD88D1AB12822AA10BEE220A5016655B2(__this, /*hidden argument*/NULL);
		// if (!buttonStates.ContainsKey(action))
		Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F * L_0 = __this->get_buttonStates_19();
		int32_t L_1 = ___action0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m968FD5FAC291C05382FB024DCC417F79C14EADDA(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m968FD5FAC291C05382FB024DCC417F79C14EADDA_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// return buttonStates[action].up;
		Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F * L_3 = __this->get_buttonStates_19();
		int32_t L_4 = ___action0;
		WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * L_5;
		L_5 = Dictionary_2_get_Item_mF066975DEB4C3F50E6E39533848F8CE1D965C06E(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mF066975DEB4C3F50E6E39533848F8CE1D965C06E_RuntimeMethod_var);
		bool L_6 = L_5->get_up_2();
		return L_6;
	}
}
// System.Single WebXR.WebXRController::GetButtonIndexValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WebXRController_GetButtonIndexValue_m89B64C2D9F6199A8612CDF315B8512755B218AC2 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDBA8F93BD88D1AB12822AA10BEE220A5016655B2(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_003b;
			}
			case 4:
			{
				goto IL_0042;
			}
			case 5:
			{
				goto IL_0049;
			}
		}
	}
	{
		goto IL_0050;
	}

IL_0026:
	{
		// return trigger;
		float L_1 = __this->get_trigger_9();
		return L_1;
	}

IL_002d:
	{
		// return squeeze;
		float L_2 = __this->get_squeeze_10();
		return L_2;
	}

IL_0034:
	{
		// return touchpad;
		float L_3 = __this->get_touchpad_14();
		return L_3;
	}

IL_003b:
	{
		// return thumbstick;
		float L_4 = __this->get_thumbstick_11();
		return L_4;
	}

IL_0042:
	{
		// return buttonA;
		float L_5 = __this->get_buttonA_17();
		return L_5;
	}

IL_0049:
	{
		// return buttonB;
		float L_6 = __this->get_buttonB_18();
		return L_6;
	}

IL_0050:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Single WebXR.WebXRController::GetAxisIndexValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WebXRController_GetAxisIndexValue_m75A2A72B0E98099870F3252EE7F8B2D9C804335E (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDBA8F93BD88D1AB12822AA10BEE220A5016655B2(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_0025;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0033;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_001e:
	{
		// return touchpadX;
		float L_1 = __this->get_touchpadX_15();
		return L_1;
	}

IL_0025:
	{
		// return touchpadY;
		float L_2 = __this->get_touchpadY_16();
		return L_2;
	}

IL_002c:
	{
		// return thumbstickX;
		float L_3 = __this->get_thumbstickX_12();
		return L_3;
	}

IL_0033:
	{
		// return thumbstickY;
		float L_4 = __this->get_thumbstickY_13();
		return L_4;
	}

IL_003a:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Void WebXR.WebXRController::SetAlwaysUseGrip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetAlwaysUseGrip_mEAFD075771CEA8B84568788998E2B83EA641DD72 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B2_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B1_0 = NULL;
	{
		// alwaysUseGrip = value;
		bool L_0 = ___value0;
		__this->set_alwaysUseGrip_26(L_0);
		// OnAlwaysUseGripChanged?.Invoke(alwaysUseGrip);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = __this->get_OnAlwaysUseGripChanged_7();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		bool L_3 = __this->get_alwaysUseGrip_26();
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(G_B2_0, L_3, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean WebXR.WebXRController::GetAlwaysUseGrip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetAlwaysUseGrip_m4135481EA811EF6151A43C152C80D1618A951C1C (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, const RuntimeMethod* method)
{
	{
		// return alwaysUseGrip;
		bool L_0 = __this->get_alwaysUseGrip_26();
		return L_0;
	}
}
// System.String[] WebXR.WebXRController::GetProfiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* WebXRController_GetProfiles_mCA8BF4D1481905F97ED0F58291EF357DBAF277CF (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, const RuntimeMethod* method)
{
	{
		// return profiles;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_profiles_22();
		return L_0;
	}
}
// System.Void WebXR.WebXRController::OnControllerUpdate(WebXR.WebXRControllerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_OnControllerUpdate_m37536E5068DB7734C49493503E870F2D87D252FB (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * ___controllerData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A* V_0 = NULL;
	{
		// if (controllerData.hand == (int)hand)
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_0 = ___controllerData0;
		int32_t L_1 = L_0->get_hand_2();
		int32_t L_2 = __this->get_hand_8();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0207;
		}
	}
	{
		// if (!controllerData.enabled)
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_3 = ___controllerData0;
		bool L_4 = L_3->get_enabled_1();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		// SetControllerActive(false);
		WebXRController_SetControllerActive_m25832DF17A30DEC2BA1B1D6A45A568875568305D(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0021:
	{
		// profiles = controllerData.profiles;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_5 = ___controllerData0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5->get_profiles_17();
		__this->set_profiles_22(L_6);
		// if (oculusLinkBugTest != 1)
		int32_t L_7 = __this->get_oculusLinkBugTest_23();
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_00d1;
		}
	}
	{
		// gripRotation = controllerData.gripRotation;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_8 = ___controllerData0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = L_8->get_gripRotation_6();
		WebXRController_set_gripRotation_mEE0BDBFC02D71039238A6D9B6D9DF92401ED6976_inline(__this, L_9, /*hidden argument*/NULL);
		// gripPosition = controllerData.gripPosition;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_10 = ___controllerData0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = L_10->get_gripPosition_5();
		WebXRController_set_gripPosition_mB4C440FCE6EB76FA9CC7F68F49D8C7171F4E86B2_inline(__this, L_11, /*hidden argument*/NULL);
		// if (alwaysUseGrip)
		bool L_12 = __this->get_alwaysUseGrip_26();
		if (!L_12)
		{
			goto IL_009e;
		}
	}
	{
		// transform.localRotation = controllerData.rotation * controllerData.gripRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_14 = ___controllerData0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = L_14->get_rotation_4();
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_16 = ___controllerData0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17 = L_16->get_gripRotation_6();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_15, L_17, /*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_13, L_18, /*hidden argument*/NULL);
		// transform.localPosition = controllerData.rotation * (controllerData.position + controllerData.gripPosition);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_20 = ___controllerData0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21 = L_20->get_rotation_4();
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_22 = ___controllerData0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = L_22->get_position_3();
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_24 = ___controllerData0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = L_24->get_gripPosition_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_23, L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_21, L_26, /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_19, L_27, /*hidden argument*/NULL);
		// }
		goto IL_00c0;
	}

IL_009e:
	{
		// transform.localRotation = controllerData.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_29 = ___controllerData0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30 = L_29->get_rotation_4();
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_28, L_30, /*hidden argument*/NULL);
		// transform.localPosition = controllerData.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_32 = ___controllerData0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = L_32->get_position_3();
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_31, L_33, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		// if (CheckOculusLinkBug())
		bool L_34;
		L_34 = WebXRController_CheckOculusLinkBug_m2231221C4D53E058CDA987CF43F639672DD09685(__this, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00d8;
		}
	}
	{
		// HandleOculusLinkBug(controllerData);
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_35 = ___controllerData0;
		WebXRController_HandleOculusLinkBug_mEE0EBF0BB9FD48EC66EF992C33A65016B207A663(__this, L_35, /*hidden argument*/NULL);
		// }
		goto IL_00d8;
	}

IL_00d1:
	{
		// HandleOculusLinkBug(controllerData);
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_36 = ___controllerData0;
		WebXRController_HandleOculusLinkBug_mEE0EBF0BB9FD48EC66EF992C33A65016B207A663(__this, L_36, /*hidden argument*/NULL);
	}

IL_00d8:
	{
		// trigger = controllerData.trigger;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_37 = ___controllerData0;
		float L_38 = L_37->get_trigger_7();
		__this->set_trigger_9(L_38);
		// squeeze = controllerData.squeeze;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_39 = ___controllerData0;
		float L_40 = L_39->get_squeeze_8();
		__this->set_squeeze_10(L_40);
		// thumbstick = controllerData.thumbstick;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_41 = ___controllerData0;
		float L_42 = L_41->get_thumbstick_9();
		__this->set_thumbstick_11(L_42);
		// thumbstickX = controllerData.thumbstickX;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_43 = ___controllerData0;
		float L_44 = L_43->get_thumbstickX_10();
		__this->set_thumbstickX_12(L_44);
		// thumbstickY = controllerData.thumbstickY;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_45 = ___controllerData0;
		float L_46 = L_45->get_thumbstickY_11();
		__this->set_thumbstickY_13(L_46);
		// touchpad = controllerData.touchpad;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_47 = ___controllerData0;
		float L_48 = L_47->get_touchpad_12();
		__this->set_touchpad_14(L_48);
		// touchpadX = controllerData.touchpadX;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_49 = ___controllerData0;
		float L_50 = L_49->get_touchpadX_13();
		__this->set_touchpadX_15(L_50);
		// touchpadY = controllerData.touchpadY;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_51 = ___controllerData0;
		float L_52 = L_51->get_touchpadY_14();
		__this->set_touchpadY_16(L_52);
		// buttonA = controllerData.buttonA;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_53 = ___controllerData0;
		float L_54 = L_53->get_buttonA_15();
		__this->set_buttonA_17(L_54);
		// buttonB = controllerData.buttonB;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_55 = ___controllerData0;
		float L_56 = L_55->get_buttonB_16();
		__this->set_buttonB_18(L_56);
		// WebXRControllerButton[] buttons = new WebXRControllerButton[6];
		WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A* L_57 = (WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A*)(WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A*)SZArrayNew(WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A_il2cpp_TypeInfo_var, (uint32_t)6);
		V_0 = L_57;
		// buttons[(int)ButtonTypes.Trigger] = new WebXRControllerButton(trigger == 1, trigger);
		WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A* L_58 = V_0;
		float L_59 = __this->get_trigger_9();
		float L_60 = __this->get_trigger_9();
		WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * L_61 = (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A *)il2cpp_codegen_object_new(WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A_il2cpp_TypeInfo_var);
		WebXRControllerButton__ctor_m53F9BFF8C394486C4288A0A0600BEEFBD1797452(L_61, (bool)((((float)L_59) == ((float)(1.0f)))? 1 : 0), L_60, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_58, L_61);
		(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A *)L_61);
		// buttons[(int)ButtonTypes.Grip] = new WebXRControllerButton(squeeze == 1, squeeze);
		WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A* L_62 = V_0;
		float L_63 = __this->get_squeeze_10();
		float L_64 = __this->get_squeeze_10();
		WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * L_65 = (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A *)il2cpp_codegen_object_new(WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A_il2cpp_TypeInfo_var);
		WebXRControllerButton__ctor_m53F9BFF8C394486C4288A0A0600BEEFBD1797452(L_65, (bool)((((float)L_63) == ((float)(1.0f)))? 1 : 0), L_64, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A *)L_65);
		// buttons[(int)ButtonTypes.Thumbstick] = new WebXRControllerButton(thumbstick == 1, thumbstick);
		WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A* L_66 = V_0;
		float L_67 = __this->get_thumbstick_11();
		float L_68 = __this->get_thumbstick_11();
		WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * L_69 = (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A *)il2cpp_codegen_object_new(WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A_il2cpp_TypeInfo_var);
		WebXRControllerButton__ctor_m53F9BFF8C394486C4288A0A0600BEEFBD1797452(L_69, (bool)((((float)L_67) == ((float)(1.0f)))? 1 : 0), L_68, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_66, L_69);
		(L_66)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A *)L_69);
		// buttons[(int)ButtonTypes.Touchpad] = new WebXRControllerButton(touchpad == 1, touchpad);
		WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A* L_70 = V_0;
		float L_71 = __this->get_touchpad_14();
		float L_72 = __this->get_touchpad_14();
		WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * L_73 = (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A *)il2cpp_codegen_object_new(WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A_il2cpp_TypeInfo_var);
		WebXRControllerButton__ctor_m53F9BFF8C394486C4288A0A0600BEEFBD1797452(L_73, (bool)((((float)L_71) == ((float)(1.0f)))? 1 : 0), L_72, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_70, L_73);
		(L_70)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A *)L_73);
		// buttons[(int)ButtonTypes.ButtonA] = new WebXRControllerButton(buttonA == 1, buttonA);
		WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A* L_74 = V_0;
		float L_75 = __this->get_buttonA_17();
		float L_76 = __this->get_buttonA_17();
		WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * L_77 = (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A *)il2cpp_codegen_object_new(WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A_il2cpp_TypeInfo_var);
		WebXRControllerButton__ctor_m53F9BFF8C394486C4288A0A0600BEEFBD1797452(L_77, (bool)((((float)L_75) == ((float)(1.0f)))? 1 : 0), L_76, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_74, L_77);
		(L_74)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A *)L_77);
		// buttons[(int)ButtonTypes.ButtonB] = new WebXRControllerButton(buttonB == 1, buttonB);
		WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A* L_78 = V_0;
		float L_79 = __this->get_buttonB_18();
		float L_80 = __this->get_buttonB_18();
		WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * L_81 = (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A *)il2cpp_codegen_object_new(WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A_il2cpp_TypeInfo_var);
		WebXRControllerButton__ctor_m53F9BFF8C394486C4288A0A0600BEEFBD1797452(L_81, (bool)((((float)L_79) == ((float)(1.0f)))? 1 : 0), L_80, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_78, L_81);
		(L_78)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A *)L_81);
		// UpdateButtons(buttons);
		WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A* L_82 = V_0;
		WebXRController_UpdateButtons_m507C6C36756B6D7D252EE7B71D8466C79A26527E(__this, L_82, /*hidden argument*/NULL);
		// SetControllerActive(true);
		WebXRController_SetControllerActive_m25832DF17A30DEC2BA1B1D6A45A568875568305D(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0207:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::HandleOculusLinkBug(WebXR.WebXRControllerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_HandleOculusLinkBug_mEE0EBF0BB9FD48EC66EF992C33A65016B207A663 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * ___controllerData0, const RuntimeMethod* method)
{
	{
		// gripRotation = controllerData.gripRotation * oculusOffsetGrip;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_0 = ___controllerData0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = L_0->get_gripRotation_6();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2 = __this->get_oculusOffsetGrip_25();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_1, L_2, /*hidden argument*/NULL);
		WebXRController_set_gripRotation_mEE0BDBFC02D71039238A6D9B6D9DF92401ED6976_inline(__this, L_3, /*hidden argument*/NULL);
		// gripPosition = controllerData.gripPosition;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_4 = ___controllerData0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = L_4->get_gripPosition_5();
		WebXRController_set_gripPosition_mB4C440FCE6EB76FA9CC7F68F49D8C7171F4E86B2_inline(__this, L_5, /*hidden argument*/NULL);
		// if (alwaysUseGrip)
		bool L_6 = __this->get_alwaysUseGrip_26();
		if (!L_6)
		{
			goto IL_006f;
		}
	}
	{
		// transform.localRotation = controllerData.rotation * controllerData.gripRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_8 = ___controllerData0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = L_8->get_rotation_4();
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_10 = ___controllerData0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = L_10->get_gripRotation_6();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_9, L_11, /*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_7, L_12, /*hidden argument*/NULL);
		// transform.localPosition = controllerData.rotation * (controllerData.position + controllerData.gripPosition);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_14 = ___controllerData0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = L_14->get_rotation_4();
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_16 = ___controllerData0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = L_16->get_position_3();
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_18 = ___controllerData0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = L_18->get_gripPosition_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_17, L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_15, L_20, /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_13, L_21, /*hidden argument*/NULL);
		// }
		return;
	}

IL_006f:
	{
		// transform.localRotation = controllerData.rotation * oculusOffsetRay;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_23 = ___controllerData0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24 = L_23->get_rotation_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25 = __this->get_oculusOffsetRay_24();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
		L_26 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_24, L_25, /*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_22, L_26, /*hidden argument*/NULL);
		// transform.localPosition = controllerData.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_28 = ___controllerData0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = L_28->get_position_3();
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_27, L_29, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean WebXR.WebXRController::CheckOculusLinkBug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_CheckOculusLinkBug_m2231221C4D53E058CDA987CF43F639672DD09685 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49FDE991572340057608BB55A3821B9BFA1E6E35);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (oculusLinkBugTest == 0
		//     && profiles != null && profiles.Length > 0)
		int32_t L_0 = __this->get_oculusLinkBugTest_23();
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_profiles_22();
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = __this->get_profiles_22();
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_004f;
		}
	}
	{
		// if (profiles[0] == "oculus-touch" && gripRotation.x > 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = __this->get_profiles_22();
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral49FDE991572340057608BB55A3821B9BFA1E6E35, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = WebXRController_get_gripRotation_m1E780C719CEB74434BB64E02C91E8A115F8E9016_inline(__this, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_0();
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_0048;
		}
	}
	{
		// oculusLinkBugTest = 1;
		__this->set_oculusLinkBugTest_23(1);
		// return true;
		return (bool)1;
	}

IL_0048:
	{
		// oculusLinkBugTest = 2;
		__this->set_oculusLinkBugTest_23(2);
	}

IL_004f:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void WebXR.WebXRController::OnHandUpdateInternal(WebXR.WebXRHandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_OnHandUpdateInternal_m8464886052D93FC96DB3D3CB342F0F183EAAFBC8 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * ___handData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m366FFFCEDB7C0D9C7BFDA740C2A0D4EF14DE932A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A* V_0 = NULL;
	Action_1_t5C191254F3AC3B22208FB2C964A1D1BDD3BF3CE6 * G_B5_0 = NULL;
	Action_1_t5C191254F3AC3B22208FB2C964A1D1BDD3BF3CE6 * G_B4_0 = NULL;
	{
		// if (handData.hand == (int)hand)
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_0 = ___handData0;
		int32_t L_1 = L_0->get_hand_2();
		int32_t L_2 = __this->get_hand_8();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_00d4;
		}
	}
	{
		// if (!handData.enabled)
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_3 = ___handData0;
		bool L_4 = L_3->get_enabled_1();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		// SetHandActive(false);
		WebXRController_SetHandActive_m3EDA9B654C6998FF89CE69A7FE7238BC04CE8785(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0021:
	{
		// SetControllerActive(false);
		WebXRController_SetControllerActive_m25832DF17A30DEC2BA1B1D6A45A568875568305D(__this, (bool)0, /*hidden argument*/NULL);
		// SetHandActive(true);
		WebXRController_SetHandActive_m3EDA9B654C6998FF89CE69A7FE7238BC04CE8785(__this, (bool)1, /*hidden argument*/NULL);
		// transform.localPosition = handData.joints[0].position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_6 = ___handData0;
		WebXRJointDataU5BU5D_tE01BEDB0F1BF89E4192E3F04E7BDA90EEE7C7A76* L_7 = L_6->get_joints_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)))->get_position_0();
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_5, L_8, /*hidden argument*/NULL);
		// transform.localRotation = handData.joints[0].rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_10 = ___handData0;
		WebXRJointDataU5BU5D_tE01BEDB0F1BF89E4192E3F04E7BDA90EEE7C7A76* L_11 = L_10->get_joints_5();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)))->get_rotation_1();
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_9, L_12, /*hidden argument*/NULL);
		// trigger = handData.trigger;
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_13 = ___handData0;
		float L_14 = L_13->get_trigger_3();
		__this->set_trigger_9(L_14);
		// squeeze = handData.squeeze;
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_15 = ___handData0;
		float L_16 = L_15->get_squeeze_4();
		__this->set_squeeze_10(L_16);
		// WebXRControllerButton[] buttons = new WebXRControllerButton[2];
		WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A* L_17 = (WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A*)(WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A*)SZArrayNew(WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_17;
		// buttons[(int)ButtonTypes.Trigger] = new WebXRControllerButton(trigger == 1, trigger);
		WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A* L_18 = V_0;
		float L_19 = __this->get_trigger_9();
		float L_20 = __this->get_trigger_9();
		WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * L_21 = (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A *)il2cpp_codegen_object_new(WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A_il2cpp_TypeInfo_var);
		WebXRControllerButton__ctor_m53F9BFF8C394486C4288A0A0600BEEFBD1797452(L_21, (bool)((((float)L_19) == ((float)(1.0f)))? 1 : 0), L_20, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A *)L_21);
		// buttons[(int)ButtonTypes.Grip] = new WebXRControllerButton(squeeze == 1, squeeze);
		WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A* L_22 = V_0;
		float L_23 = __this->get_squeeze_10();
		float L_24 = __this->get_squeeze_10();
		WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * L_25 = (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A *)il2cpp_codegen_object_new(WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A_il2cpp_TypeInfo_var);
		WebXRControllerButton__ctor_m53F9BFF8C394486C4288A0A0600BEEFBD1797452(L_25, (bool)((((float)L_23) == ((float)(1.0f)))? 1 : 0), L_24, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A *)L_25);
		// UpdateButtons(buttons);
		WebXRControllerButtonU5BU5D_t9B070DCDDF604DFC4A58E0203E9CD13879D4BA5A* L_26 = V_0;
		WebXRController_UpdateButtons_m507C6C36756B6D7D252EE7B71D8466C79A26527E(__this, L_26, /*hidden argument*/NULL);
		// OnHandUpdate?.Invoke(handData);
		Action_1_t5C191254F3AC3B22208FB2C964A1D1BDD3BF3CE6 * L_27 = __this->get_OnHandUpdate_6();
		Action_1_t5C191254F3AC3B22208FB2C964A1D1BDD3BF3CE6 * L_28 = L_27;
		G_B4_0 = L_28;
		if (L_28)
		{
			G_B5_0 = L_28;
			goto IL_00ce;
		}
	}
	{
		return;
	}

IL_00ce:
	{
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_29 = ___handData0;
		Action_1_Invoke_m366FFFCEDB7C0D9C7BFDA740C2A0D4EF14DE932A(G_B5_0, L_29, /*hidden argument*/Action_1_Invoke_m366FFFCEDB7C0D9C7BFDA740C2A0D4EF14DE932A_RuntimeMethod_var);
	}

IL_00d4:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::SetControllerActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetControllerActive_m25832DF17A30DEC2BA1B1D6A45A568875568305D (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, bool ___active0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B3_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B2_0 = NULL;
	{
		// if (controllerActive != active)
		bool L_0 = __this->get_controllerActive_20();
		bool L_1 = ___active0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0026;
		}
	}
	{
		// controllerActive = active;
		bool L_2 = ___active0;
		__this->set_controllerActive_20(L_2);
		// OnControllerActive?.Invoke(controllerActive);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = __this->get_OnControllerActive_4();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_001b:
	{
		bool L_5 = __this->get_controllerActive_20();
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(G_B3_0, L_5, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::SetHandActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetHandActive_m3EDA9B654C6998FF89CE69A7FE7238BC04CE8785 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, bool ___active0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B4_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B3_0 = NULL;
	{
		// if (handActive == active)
		bool L_0 = __this->get_handActive_21();
		bool L_1 = ___active0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// handActive = active;
		bool L_2 = ___active0;
		__this->set_handActive_21(L_2);
		// OnHandActive?.Invoke(handActive);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = __this->get_OnHandActive_5();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		bool L_5 = __this->get_handActive_21();
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(G_B4_0, L_5, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::Pulse(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_Pulse_mC39B767D60C9B8BAD3DD503CC948BAA387EFA8FD (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, float ___intensity0, float ___durationMilliseconds1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_isSubsystemAvailable_m8C932EE292523EE009F248ED2F1552309BA5DB31_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WebXRManager.Instance.isSubsystemAvailable)
		WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * L_0;
		L_0 = WebXRManager_get_Instance_m45AD80B206362DE6B312C6A5D39D045DE830A4A1_inline(/*hidden argument*/NULL);
		bool L_1;
		L_1 = SubsystemLifecycleManager_2_get_isSubsystemAvailable_m8C932EE292523EE009F248ED2F1552309BA5DB31(L_0, /*hidden argument*/SubsystemLifecycleManager_2_get_isSubsystemAvailable_m8C932EE292523EE009F248ED2F1552309BA5DB31_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// WebXRManager.Instance.HapticPulse(hand, intensity, durationMilliseconds);
		WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * L_2;
		L_2 = WebXRManager_get_Instance_m45AD80B206362DE6B312C6A5D39D045DE830A4A1_inline(/*hidden argument*/NULL);
		int32_t L_3 = __this->get_hand_8();
		float L_4 = ___intensity0;
		float L_5 = ___durationMilliseconds1;
		WebXRManager_HapticPulse_m256A19851FB9AEDC2B7B88BF8B089444F696A160(L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_OnEnable_m7188E530F044DDE511D6B87EFD4F870EDE738FF6 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRController_OnControllerUpdate_m37536E5068DB7734C49493503E870F2D87D252FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRController_OnHandUpdateInternal_m8464886052D93FC96DB3D3CB342F0F183EAAFBC8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebXRManager.OnControllerUpdate += OnControllerUpdate;
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_0 = (ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF *)il2cpp_codegen_object_new(ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF_il2cpp_TypeInfo_var);
		ControllerUpdate__ctor_m5B5C91658AF1C2E75F59EA686099C186857889D5(L_0, __this, (intptr_t)((intptr_t)WebXRController_OnControllerUpdate_m37536E5068DB7734C49493503E870F2D87D252FB_RuntimeMethod_var), /*hidden argument*/NULL);
		WebXRManager_add_OnControllerUpdate_m8E1887163AF60C45661F317D32E356BCC7269874(L_0, /*hidden argument*/NULL);
		// WebXRManager.OnHandUpdate += OnHandUpdateInternal;
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_1 = (HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C *)il2cpp_codegen_object_new(HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C_il2cpp_TypeInfo_var);
		HandUpdate__ctor_m4921443A26826EACCE01DB27B24592E2809422EB(L_1, __this, (intptr_t)((intptr_t)WebXRController_OnHandUpdateInternal_m8464886052D93FC96DB3D3CB342F0F183EAAFBC8_RuntimeMethod_var), /*hidden argument*/NULL);
		WebXRManager_add_OnHandUpdate_m4C50C44EFC8465D2502322532111CE2E789C8F40(L_1, /*hidden argument*/NULL);
		// SetControllerActive(false);
		WebXRController_SetControllerActive_m25832DF17A30DEC2BA1B1D6A45A568875568305D(__this, (bool)0, /*hidden argument*/NULL);
		// SetHandActive(false);
		WebXRController_SetHandActive_m3EDA9B654C6998FF89CE69A7FE7238BC04CE8785(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_OnDisable_m128C9478C9F8302C396737754726FDFBBFDBA39F (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRController_OnControllerUpdate_m37536E5068DB7734C49493503E870F2D87D252FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRController_OnHandUpdateInternal_m8464886052D93FC96DB3D3CB342F0F183EAAFBC8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebXRManager.OnControllerUpdate -= OnControllerUpdate;
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_0 = (ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF *)il2cpp_codegen_object_new(ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF_il2cpp_TypeInfo_var);
		ControllerUpdate__ctor_m5B5C91658AF1C2E75F59EA686099C186857889D5(L_0, __this, (intptr_t)((intptr_t)WebXRController_OnControllerUpdate_m37536E5068DB7734C49493503E870F2D87D252FB_RuntimeMethod_var), /*hidden argument*/NULL);
		WebXRManager_remove_OnControllerUpdate_m94013B9462E5D252D406FE1885080A0AA88D8D23(L_0, /*hidden argument*/NULL);
		// WebXRManager.OnHandUpdate -= OnHandUpdateInternal;
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_1 = (HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C *)il2cpp_codegen_object_new(HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C_il2cpp_TypeInfo_var);
		HandUpdate__ctor_m4921443A26826EACCE01DB27B24592E2809422EB(L_1, __this, (intptr_t)((intptr_t)WebXRController_OnHandUpdateInternal_m8464886052D93FC96DB3D3CB342F0F183EAAFBC8_RuntimeMethod_var), /*hidden argument*/NULL);
		WebXRManager_remove_OnHandUpdate_m7F3610ECFD98499D77200547D346AF406899EFF1(L_1, /*hidden argument*/NULL);
		// SetControllerActive(false);
		WebXRController_SetControllerActive_m25832DF17A30DEC2BA1B1D6A45A568875568305D(__this, (bool)0, /*hidden argument*/NULL);
		// SetHandActive(false);
		WebXRController_SetHandActive_m3EDA9B654C6998FF89CE69A7FE7238BC04CE8785(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController__ctor_m837922E4DA034F4690589F21A408C7BCAB69B282 (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m51A27FE6D564DE0C0D0B95FB3949D525AE94C30B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<ButtonTypes, WebXRControllerButton> buttonStates = new Dictionary<ButtonTypes, WebXRControllerButton>();
		Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F * L_0 = (Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F *)il2cpp_codegen_object_new(Dictionary_2_t88B8DBA5A9B83EE9EF0CC02ACF01057743EFA23F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m51A27FE6D564DE0C0D0B95FB3949D525AE94C30B(L_0, /*hidden argument*/Dictionary_2__ctor_m51A27FE6D564DE0C0D0B95FB3949D525AE94C30B_RuntimeMethod_var);
		__this->set_buttonStates_19(L_0);
		// private Quaternion oculusOffsetRay = Quaternion.Euler(90f, 0, 0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((90.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_oculusOffsetRay_24(L_1);
		// private Quaternion oculusOffsetGrip = Quaternion.Euler(-90f, 0, 0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((-90.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_oculusOffsetGrip_25(L_2);
		// public Vector3 gripPosition { get; private set; } = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_U3CgripPositionU3Ek__BackingField_27(L_3);
		// public Quaternion gripRotation { get; private set; } = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		__this->set_U3CgripRotationU3Ek__BackingField_28(L_4);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void WebXR.WebXRControllerButton::.ctor(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerButton__ctor_m53F9BFF8C394486C4288A0A0600BEEFBD1797452 (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * __this, bool ___isPressed0, float ___buttonValue1, const RuntimeMethod* method)
{
	{
		// public WebXRControllerButton(bool isPressed, float buttonValue)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// down = false;
		__this->set_down_1((bool)0);
		// up = false;
		__this->set_up_2((bool)0);
		// pressed = isPressed;
		bool L_0 = ___isPressed0;
		__this->set_pressed_0(L_0);
		// value = buttonValue;
		float L_1 = ___buttonValue1;
		__this->set_value_3(L_1);
		// }
		return;
	}
}
// System.Void WebXR.WebXRControllerButton::UpdateState(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerButton_UpdateState_m36FC44193D80537364672122C6A49BC64A5A05E7 (WebXRControllerButton_t84C0C28D0ED87A7799082A9FE31C051CF8EBDD9A * __this, bool ___isPressed0, float ___buttonValue1, const RuntimeMethod* method)
{
	{
		// if (isPressed && pressed) // nothing
		bool L_0 = ___isPressed0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		bool L_1 = __this->get_pressed_0();
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// down = false;
		__this->set_down_1((bool)0);
		// up = false;
		__this->set_up_2((bool)0);
		// }
		goto IL_006a;
	}

IL_001b:
	{
		// else if (isPressed && !pressed) // up
		bool L_2 = ___isPressed0;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		bool L_3 = __this->get_pressed_0();
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		// down = true;
		__this->set_down_1((bool)1);
		// up = false;
		__this->set_up_2((bool)0);
		// }
		goto IL_006a;
	}

IL_0036:
	{
		// else if (!isPressed && !pressed) // nothing
		bool L_4 = ___isPressed0;
		if (L_4)
		{
			goto IL_0051;
		}
	}
	{
		bool L_5 = __this->get_pressed_0();
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		// down = false;
		__this->set_down_1((bool)0);
		// up = false;
		__this->set_up_2((bool)0);
		// }
		goto IL_006a;
	}

IL_0051:
	{
		// else if (!isPressed && pressed) // down
		bool L_6 = ___isPressed0;
		if (L_6)
		{
			goto IL_006a;
		}
	}
	{
		bool L_7 = __this->get_pressed_0();
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		// down = false;
		__this->set_down_1((bool)0);
		// up = true;
		__this->set_up_2((bool)1);
	}

IL_006a:
	{
		// pressed = isPressed;
		bool L_8 = ___isPressed0;
		__this->set_pressed_0(L_8);
		// value = buttonValue;
		float L_9 = ___buttonValue1;
		__this->set_value_3(L_9);
		// }
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
// System.Void WebXR.WebXRControllerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerData__ctor_m8AECA8B8E568D7F42AF05777A6F7A5C646891C55 (WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebXR.WebXRControllersProfiles::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllersProfiles__ctor_mBAB0D89E49103092B1AF51C15C779E6616AC8E9F (WebXRControllersProfiles_t2D147E1F114FABC0C5415E99EEF169E431A43FCB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: WebXR.WebXRDisplayCapabilities
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshal_pinvoke(const WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5& unmarshaled, WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshaled_pinvoke& marshaled)
{
	marshaled.___canPresentAR_0 = static_cast<int32_t>(unmarshaled.get_canPresentAR_0());
	marshaled.___canPresentVR_1 = static_cast<int32_t>(unmarshaled.get_canPresentVR_1());
}
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshal_pinvoke_back(const WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshaled_pinvoke& marshaled, WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5& unmarshaled)
{
	bool unmarshaled_canPresentAR_temp_0 = false;
	unmarshaled_canPresentAR_temp_0 = static_cast<bool>(marshaled.___canPresentAR_0);
	unmarshaled.set_canPresentAR_0(unmarshaled_canPresentAR_temp_0);
	bool unmarshaled_canPresentVR_temp_1 = false;
	unmarshaled_canPresentVR_temp_1 = static_cast<bool>(marshaled.___canPresentVR_1);
	unmarshaled.set_canPresentVR_1(unmarshaled_canPresentVR_temp_1);
}
// Conversion method for clean up from marshalling of: WebXR.WebXRDisplayCapabilities
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshal_pinvoke_cleanup(WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: WebXR.WebXRDisplayCapabilities
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshal_com(const WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5& unmarshaled, WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshaled_com& marshaled)
{
	marshaled.___canPresentAR_0 = static_cast<int32_t>(unmarshaled.get_canPresentAR_0());
	marshaled.___canPresentVR_1 = static_cast<int32_t>(unmarshaled.get_canPresentVR_1());
}
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshal_com_back(const WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshaled_com& marshaled, WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5& unmarshaled)
{
	bool unmarshaled_canPresentAR_temp_0 = false;
	unmarshaled_canPresentAR_temp_0 = static_cast<bool>(marshaled.___canPresentAR_0);
	unmarshaled.set_canPresentAR_0(unmarshaled_canPresentAR_temp_0);
	bool unmarshaled_canPresentVR_temp_1 = false;
	unmarshaled_canPresentVR_temp_1 = static_cast<bool>(marshaled.___canPresentVR_1);
	unmarshaled.set_canPresentVR_1(unmarshaled_canPresentVR_temp_1);
}
// Conversion method for clean up from marshalling of: WebXR.WebXRDisplayCapabilities
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshal_com_cleanup(WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshaled_com& marshaled)
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
// System.Void WebXR.WebXRHandData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRHandData__ctor_m999465E053B4589EA723674415F458296F52D544 (WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRJointDataU5BU5D_tE01BEDB0F1BF89E4192E3F04E7BDA90EEE7C7A76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebXRJointData[] joints = new WebXRJointData[25];
		WebXRJointDataU5BU5D_tE01BEDB0F1BF89E4192E3F04E7BDA90EEE7C7A76* L_0 = (WebXRJointDataU5BU5D_tE01BEDB0F1BF89E4192E3F04E7BDA90EEE7C7A76*)(WebXRJointDataU5BU5D_tE01BEDB0F1BF89E4192E3F04E7BDA90EEE7C7A76*)SZArrayNew(WebXRJointDataU5BU5D_tE01BEDB0F1BF89E4192E3F04E7BDA90EEE7C7A76_il2cpp_TypeInfo_var, (uint32_t)((int32_t)25));
		__this->set_joints_5(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebXR.WebXRHitPoseData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRHitPoseData__ctor_m96631533F5A08773321918A42C3E113BDE4C82BE (WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// WebXR.WebXRSubsystem WebXR.WebXRLoader::get_WebXRSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * WebXRLoader_get_WebXRSubsystem_m76DCF04B38551A7A3B1E4F7C4CE972387111AC06 (WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisWebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_mECA11D8D4F9F44BF9DC8B860C29F8C1D97336B31_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebXRSubsystem WebXRSubsystem => GetLoadedSubsystem<WebXRSubsystem>();
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_0;
		L_0 = GenericVirtFuncInvoker0< WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * >::Invoke(XRLoader_GetLoadedSubsystem_TisWebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_mECA11D8D4F9F44BF9DC8B860C29F8C1D97336B31_RuntimeMethod_var, __this);
		return L_0;
	}
}
// UnityEngine.XR.XRDisplaySubsystem WebXR.WebXRLoader::get_XRDisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * WebXRLoader_get_XRDisplaySubsystem_m9C2FCA7169952B5426017A52CD11F7AFFF6139D3 (WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m6098CB15555B2E45C3BCAB9086012011CB382DAA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRDisplaySubsystem XRDisplaySubsystem => GetLoadedSubsystem<XRDisplaySubsystem>();
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_0;
		L_0 = GenericVirtFuncInvoker0< XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * >::Invoke(XRLoader_GetLoadedSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m6098CB15555B2E45C3BCAB9086012011CB382DAA_RuntimeMethod_var, __this);
		return L_0;
	}
}
// UnityEngine.XR.XRInputSubsystem WebXR.WebXRLoader::get_XRInputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * WebXRLoader_get_XRInputSubsystem_m1D49AF6D2597C2E608A3FB7494A45B07E86D33A0 (WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_mC98D5F7030C574A69D86EA429F90CF769106A5EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRInputSubsystem XRInputSubsystem => GetLoadedSubsystem<XRInputSubsystem>();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_0;
		L_0 = GenericVirtFuncInvoker0< XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * >::Invoke(XRLoader_GetLoadedSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_mC98D5F7030C574A69D86EA429F90CF769106A5EB_RuntimeMethod_var, __this);
		return L_0;
	}
}
// System.Void WebXR.WebXRLoader::SetWebXRSettings(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRLoader_SetWebXRSettings_m5EF6296865EB731D463EA3F217AADAA28734F157 (String_t* ___settingsJson0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___settingsJson0' to native representation
	char* ____settingsJson0_marshaled = NULL;
	____settingsJson0_marshaled = il2cpp_codegen_marshal_string(___settingsJson0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SetWebXRSettings)(____settingsJson0_marshaled);

	// Marshaling cleanup of parameter '___settingsJson0' native representation
	il2cpp_codegen_marshal_free(____settingsJson0_marshaled);
	____settingsJson0_marshaled = NULL;

}
// WebXR.WebXRSettings WebXR.WebXRLoader::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * WebXRLoader_GetSettings_mB3538081E5873EF1FB0FADC56970E53A22F5B3D4 (WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings = WebXRSettings.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E_il2cpp_TypeInfo_var);
		WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * L_0;
		L_0 = WebXRSettings_get_Instance_m58DCDB1C9960750B6F4518DBA722D92A5B37615A_inline(/*hidden argument*/NULL);
		// return settings;
		return L_0;
	}
}
// System.Boolean WebXR.WebXRLoader::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRLoader_Initialize_m4ACCE7A2B2A7E9E1FBEAEB6B67DC6530632BA731 (WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisWebXRSubsystemDescriptor_t49D846DE8AA1635F1086FFDF794C244C7E314A71_TisWebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_m316DF412F0D028461B7ABE76A715F1FF83AEEF38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87A1893D9F40A4929689F53B0A652425CBADD216);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D585C0CF017666D27E62797181776A7A1789937);
		s_Il2CppMethodInitialized = true;
	}
	WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * V_0 = NULL;
	{
		// WebXRSettings settings = GetSettings();
		WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * L_0;
		L_0 = WebXRLoader_GetSettings_mB3538081E5873EF1FB0FADC56970E53A22F5B3D4(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (settings != null)
		WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.Log($"Got WebXRSettings");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral87A1893D9F40A4929689F53B0A652425CBADD216, /*hidden argument*/NULL);
		// SetWebXRSettings(settings.ToJson());
		WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * L_3 = V_0;
		String_t* L_4;
		L_4 = WebXRSettings_ToJson_m639FCF15396FC26FA766961EFA64A425A28474A4(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54_il2cpp_TypeInfo_var);
		WebXRLoader_SetWebXRSettings_m5EF6296865EB731D463EA3F217AADAA28734F157(L_4, /*hidden argument*/NULL);
		// Debug.Log($"Sent WebXRSettings");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral8D585C0CF017666D27E62797181776A7A1789937, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// CreateSubsystem<WebXRSubsystemDescriptor, WebXRSubsystem>(sampleSubsystemDescriptors, typeof(WebXRSubsystem).FullName);
		IL2CPP_RUNTIME_CLASS_INIT(WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54_il2cpp_TypeInfo_var);
		List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6 * L_5 = ((WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54_StaticFields*)il2cpp_codegen_static_fields_for(WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54_il2cpp_TypeInfo_var))->get_sampleSubsystemDescriptors_5();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_7);
		XRLoaderHelper_CreateSubsystem_TisWebXRSubsystemDescriptor_t49D846DE8AA1635F1086FFDF794C244C7E314A71_TisWebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_m316DF412F0D028461B7ABE76A715F1FF83AEEF38(__this, L_5, L_8, /*hidden argument*/XRLoaderHelper_CreateSubsystem_TisWebXRSubsystemDescriptor_t49D846DE8AA1635F1086FFDF794C244C7E314A71_TisWebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_m316DF412F0D028461B7ABE76A715F1FF83AEEF38_RuntimeMethod_var);
		// return WebXRSubsystem != null;
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_9;
		L_9 = WebXRLoader_get_WebXRSubsystem_m76DCF04B38551A7A3B1E4F7C4CE972387111AC06(__this, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 *)L_9) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Boolean WebXR.WebXRLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRLoader_Start_mA10969B4DFE0DE62A7B653B834E98928DEAC199D (WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54 * __this, const RuntimeMethod* method)
{
	{
		// WebXRSubsystem.Start();
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_0;
		L_0 = WebXRLoader_get_WebXRSubsystem_m76DCF04B38551A7A3B1E4F7C4CE972387111AC06(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.Subsystem::Start() */, L_0);
		// return true;
		return (bool)1;
	}
}
// System.Boolean WebXR.WebXRLoader::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRLoader_Stop_mE464923A6378B93131E110E8CDC37980C5DD8796 (WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54 * __this, const RuntimeMethod* method)
{
	{
		// WebXRSubsystem.Stop();
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_0;
		L_0 = WebXRLoader_get_WebXRSubsystem_m76DCF04B38551A7A3B1E4F7C4CE972387111AC06(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.Subsystem::Stop() */, L_0);
		// return base.Stop();
		bool L_1;
		L_1 = XRLoader_Stop_mBEE0CD2B4ADC3D207F286BC1DCDA05FA4CDECC7C(__this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean WebXR.WebXRLoader::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRLoader_Deinitialize_m50FDF07D0A9E990308B7D3445ABDA109E3038BC4 (WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54 * __this, const RuntimeMethod* method)
{
	{
		// WebXRSubsystem.Destroy();
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_0;
		L_0 = WebXRLoader_get_WebXRSubsystem_m76DCF04B38551A7A3B1E4F7C4CE972387111AC06(__this, /*hidden argument*/NULL);
		Subsystem_Destroy_mDAEF3C8FEE45DEAB90452E998E249CAEAB32A329(L_0, /*hidden argument*/NULL);
		// return base.Deinitialize();
		bool L_1;
		L_1 = XRLoaderHelper_Deinitialize_m618CFFA37B20197EBC745080E4594256877D82B2(__this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void WebXR.WebXRLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRLoader__ctor_mA2426327B9366E5F34F8A440C7709A72B4C2CFE6 (WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54 * __this, const RuntimeMethod* method)
{
	{
		XRLoaderHelper__ctor_mD27E0396EC4B11E208CF891642475B496CADAC9B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebXR.WebXRLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRLoader__cctor_m13579D35521CE3578F233E622F421A3F2ED37D43 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m93C3F7C2F840C50389F14482E14626F47720851E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly List<WebXRSubsystemDescriptor> sampleSubsystemDescriptors = new List<WebXRSubsystemDescriptor>();
		List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6 * L_0 = (List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6 *)il2cpp_codegen_object_new(List_1_t82F13970A371D861FE63F29EA930EADCDFC7B6D6_il2cpp_TypeInfo_var);
		List_1__ctor_m93C3F7C2F840C50389F14482E14626F47720851E(L_0, /*hidden argument*/List_1__ctor_m93C3F7C2F840C50389F14482E14626F47720851E_RuntimeMethod_var);
		((WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54_StaticFields*)il2cpp_codegen_static_fields_for(WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54_il2cpp_TypeInfo_var))->set_sampleSubsystemDescriptors_5(L_0);
		// static readonly List<XRDisplaySubsystemDescriptor> displaySubsystemDescriptors = new List<XRDisplaySubsystemDescriptor>();
		List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * L_1 = (List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 *)il2cpp_codegen_object_new(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_il2cpp_TypeInfo_var);
		List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00(L_1, /*hidden argument*/List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00_RuntimeMethod_var);
		((WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54_StaticFields*)il2cpp_codegen_static_fields_for(WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54_il2cpp_TypeInfo_var))->set_displaySubsystemDescriptors_6(L_1);
		// static readonly List<XRInputSubsystemDescriptor> inputSubsystemDescriptors = new List<XRInputSubsystemDescriptor>();
		List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * L_2 = (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 *)il2cpp_codegen_object_new(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_il2cpp_TypeInfo_var);
		List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB(L_2, /*hidden argument*/List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB_RuntimeMethod_var);
		((WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54_StaticFields*)il2cpp_codegen_static_fields_for(WebXRLoader_t4AFDFD9A5F9392B8DB7FC9722BEEEE79902C6D54_il2cpp_TypeInfo_var))->set_inputSubsystemDescriptors_7(L_2);
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
// WebXR.WebXRManager WebXR.WebXRManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * WebXRManager_get_Instance_m45AD80B206362DE6B312C6A5D39D045DE830A4A1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WebXRManager Instance { get; private set; }
		WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * L_0 = ((WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void WebXR.WebXRManager::set_Instance(WebXR.WebXRManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_set_Instance_m9301DB440D1AA2843392667B985E6A738F7D0A60 (WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WebXRManager Instance { get; private set; }
		WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * L_0 = ___value0;
		((WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_5(L_0);
		return;
	}
}
// WebXR.WebXRState WebXR.WebXRManager::get_XRState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebXRManager_get_XRState_mF647EB3DCD66E994C7B59576927AF69D52D6F789 (WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebXRState XRState => subsystem.xrState;
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_inline(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		int32_t L_1 = L_0->get_xrState_3();
		return L_1;
	}
}
// System.Void WebXR.WebXRManager::add_OnXRCapabilitiesUpdate(WebXR.WebXRSubsystem/XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnXRCapabilitiesUpdate_m760BE572AD551020C27BF3235BF154683F146DE4 (XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * ___value0, const RuntimeMethod* method)
{
	{
		// add => WebXRSubsystem.OnXRCapabilitiesUpdate += value;
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_0 = ___value0;
		WebXRSubsystem_add_OnXRCapabilitiesUpdate_m9DD666F2A151746B8D9EEB22D4E0690E05F7C74B(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnXRCapabilitiesUpdate(WebXR.WebXRSubsystem/XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnXRCapabilitiesUpdate_m16010D0368660235A19FBC2EACBE7310A935A8F6 (XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * ___value0, const RuntimeMethod* method)
{
	{
		// remove => WebXRSubsystem.OnXRCapabilitiesUpdate -= value;
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_0 = ___value0;
		WebXRSubsystem_remove_OnXRCapabilitiesUpdate_m73A33A24BE1933727C60F1BB010611D27A7FA5BE(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnXRChange_m9826052B05551670D191AADBE39D375B5EB31B74 (XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * ___value0, const RuntimeMethod* method)
{
	{
		// add => WebXRSubsystem.OnXRChange += value;
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_0 = ___value0;
		WebXRSubsystem_add_OnXRChange_m21C9DC5B59684D88DE7566668843063E6E50DCD1(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnXRChange_m3A0456774AC5C7C3ADB8F28694B2426563E9C3D2 (XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * ___value0, const RuntimeMethod* method)
{
	{
		// remove => WebXRSubsystem.OnXRChange -= value;
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_0 = ___value0;
		WebXRSubsystem_remove_OnXRChange_m3061AADEF1F5AD3665ABA5D2481A403CCFBBE003(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnVisibilityChange(WebXR.WebXRSubsystem/VisibilityChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnVisibilityChange_mCBF2914F5ABAA17E6C82257B021DAB9201C5B9C8 (VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * ___value0, const RuntimeMethod* method)
{
	{
		// add => WebXRSubsystem.OnVisibilityChange += value;
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_0 = ___value0;
		WebXRSubsystem_add_OnVisibilityChange_m4C34677A8BA985205DE59D02743CC96C04636022(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnVisibilityChange(WebXR.WebXRSubsystem/VisibilityChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnVisibilityChange_m0F5CC2A0774494DAFD249BA31D55975C69359DD7 (VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * ___value0, const RuntimeMethod* method)
{
	{
		// remove => WebXRSubsystem.OnVisibilityChange -= value;
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_0 = ___value0;
		WebXRSubsystem_remove_OnVisibilityChange_m8C7D8AE689494D3B3F6DCA008F96F7FB74205DE3(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnControllerUpdate_m8E1887163AF60C45661F317D32E356BCC7269874 (ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * ___value0, const RuntimeMethod* method)
{
	{
		// add => WebXRSubsystem.OnControllerUpdate += value;
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_0 = ___value0;
		WebXRSubsystem_add_OnControllerUpdate_mB348C2F8DBC444FEF6C5339D78538F52444532A4(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnControllerUpdate_m94013B9462E5D252D406FE1885080A0AA88D8D23 (ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * ___value0, const RuntimeMethod* method)
{
	{
		// remove => WebXRSubsystem.OnControllerUpdate -= value;
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_0 = ___value0;
		WebXRSubsystem_remove_OnControllerUpdate_m0DE8C4DC9EE90E50A045B510A06AE1D7116425ED(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnHandUpdate_m4C50C44EFC8465D2502322532111CE2E789C8F40 (HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * ___value0, const RuntimeMethod* method)
{
	{
		// add => WebXRSubsystem.OnHandUpdate += value;
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_0 = ___value0;
		WebXRSubsystem_add_OnHandUpdate_mB281E1FE9000518D42344288A92A4082A16E07EA(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnHandUpdate_m7F3610ECFD98499D77200547D346AF406899EFF1 (HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * ___value0, const RuntimeMethod* method)
{
	{
		// remove => WebXRSubsystem.OnHandUpdate -= value;
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_0 = ___value0;
		WebXRSubsystem_remove_OnHandUpdate_m3D23BDC60B337800989029A61B3A9DBFBDD34C75(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnHeadsetUpdate_m0554666BEAA1461DFC7826B2AF0D412D968C3C85 (HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * ___value0, const RuntimeMethod* method)
{
	{
		// add => WebXRSubsystem.OnHeadsetUpdate += value;
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_0 = ___value0;
		WebXRSubsystem_add_OnHeadsetUpdate_m0E345583924F040F95F7A8FA10C2967C9BFEB00A(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnHeadsetUpdate_m9651D1FF5CDB1844542ABF24BE72FD449D269D2F (HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * ___value0, const RuntimeMethod* method)
{
	{
		// remove => WebXRSubsystem.OnHeadsetUpdate -= value;
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_0 = ___value0;
		WebXRSubsystem_remove_OnHeadsetUpdate_m191ADB2EAB38C55856383576F2A2CCAD313486E9(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnViewerHitTestUpdate(WebXR.WebXRSubsystem/HitTestUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnViewerHitTestUpdate_m0535E2526701DE52F3677F30949BACD23E0992F0 (HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * ___value0, const RuntimeMethod* method)
{
	{
		// add => WebXRSubsystem.OnViewerHitTestUpdate += value;
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_0 = ___value0;
		WebXRSubsystem_add_OnViewerHitTestUpdate_m1C8A778D9684039E5246169B17BCE25A0EED40B2(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnViewerHitTestUpdate(WebXR.WebXRSubsystem/HitTestUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnViewerHitTestUpdate_mC21CDA8A3221A7A96EB86F0A8CD3BF0B39CC1CBB (HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * ___value0, const RuntimeMethod* method)
{
	{
		// remove => WebXRSubsystem.OnViewerHitTestUpdate -= value;
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_0 = ___value0;
		WebXRSubsystem_remove_OnViewerHitTestUpdate_mE69313A2AA4A4112E6F89FD4268E37FABEF1BBCD(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WebXR.WebXRManager::get_isSupportedAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRManager_get_isSupportedAR_mC8841153819C0A5F5959A859415E594656098EB9 (WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return subsystem.capabilities.canPresentAR;
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_inline(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5 * L_1 = L_0->get_address_of_capabilities_34();
		bool L_2 = L_1->get_canPresentAR_0();
		return L_2;
	}
}
// System.Boolean WebXR.WebXRManager::get_isSupportedVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRManager_get_isSupportedVR_m4FF1A51CC985B5A95C0FA55855D66971A2280F93 (WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return subsystem.capabilities.canPresentVR;
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_inline(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5 * L_1 = L_0->get_address_of_capabilities_34();
		bool L_2 = L_1->get_canPresentVR_1();
		return L_2;
	}
}
// WebXR.WebXRVisibilityState WebXR.WebXRManager::get_visibilityState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebXRManager_get_visibilityState_m911777336A3697E03DFB104AF3B367E7F3881E27 (WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (subsystem == null)
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_inline(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return WebXRVisibilityState.VISIBLE;
		return (int32_t)(0);
	}

IL_000a:
	{
		// return subsystem.visibilityState;
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_1;
		L_1 = SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_inline(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		int32_t L_2 = L_1->get_visibilityState_8();
		return L_2;
	}
}
// System.Void WebXR.WebXRManager::ToggleAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_ToggleAR_m9D932940B92AC55D94606C46779BC5F2900BB2B2 (WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * G_B2_0 = NULL;
	WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * G_B1_0 = NULL;
	{
		// subsystem?.ToggleAR();
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_inline(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		WebXRSubsystem_ToggleAR_m1071DF7EEFEB3E8B2A588BC205B8D4C9C93E36EA(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::ToggleVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_ToggleVR_m756940CBED577CE76B9EC310E9268139EFEB7690 (WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * G_B2_0 = NULL;
	WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * G_B1_0 = NULL;
	{
		// subsystem?.ToggleVR();
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_inline(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		WebXRSubsystem_ToggleVR_mAAA1B626B542EC555F65E16441699A472F353E6A(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::HapticPulse(WebXR.WebXRControllerHand,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_HapticPulse_m256A19851FB9AEDC2B7B88BF8B089444F696A160 (WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * __this, int32_t ___hand0, float ___intensity1, float ___duration2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * G_B2_0 = NULL;
	WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * G_B1_0 = NULL;
	{
		// subsystem?.HapticPulse(hand, intensity, duration);
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_inline(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_2 = ___hand0;
		float L_3 = ___intensity1;
		float L_4 = ___duration2;
		WebXRSubsystem_HapticPulse_m721A6DA6AD9A54309DC9435E7308E2787DE9E271(G_B2_0, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::StartViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_StartViewerHitTest_m5527C1C132614A5721A7B8F4ECC23264DBBCCDC0 (WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * G_B2_0 = NULL;
	WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * G_B1_0 = NULL;
	{
		// subsystem?.StartViewerHitTest();
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_inline(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		WebXRSubsystem_StartViewerHitTest_mDC9910CAF02F4DDBFC46A79D334D389295F89591(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::StopViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_StopViewerHitTest_m6C88EB77F878A4800B9D06EA258734FE745C9A70 (WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * G_B2_0 = NULL;
	WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * G_B1_0 = NULL;
	{
		// subsystem?.StopViewerHitTest();
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_inline(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		WebXRSubsystem_StopViewerHitTest_m875B6A35A03E9221D623B9442134AD0FA70F00C5(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_Awake_mBD36390A1CC9077D47F38BA85D0AB4FA35752F32 (WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_Awake_m2C3EDFC728A9C76DE09CE8DBB95688E08F0498BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		SubsystemLifecycleManager_2_Awake_m2C3EDFC728A9C76DE09CE8DBB95688E08F0498BC(__this, /*hidden argument*/SubsystemLifecycleManager_2_Awake_m2C3EDFC728A9C76DE09CE8DBB95688E08F0498BC_RuntimeMethod_var);
		// Instance = this;
		WebXRManager_set_Instance_m9301DB440D1AA2843392667B985E6A738F7D0A60_inline(__this, /*hidden argument*/NULL);
		// enabled = subsystem != null;
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_inline(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)((!(((RuntimeObject*)(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_Update_m352767C99A0C551FEC45E8236F159FFF3356A359 (WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// subsystem.OnUpdate();
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_inline(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mF1BEE5C9387727ABD1BA85C624CC1634444E4F85_RuntimeMethod_var);
		WebXRSubsystem_OnUpdate_m2569356A2D18C943D89071BEA4F6E795E5A0D72C(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager__ctor_m1CC931F870CBCB9AAA47F2D6C6FD6DB22D0EC47A (WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2__ctor_mBBA88FFADFF4C94BAE735F6E1CA5E6A4C1B76071_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemLifecycleManager_2__ctor_mBBA88FFADFF4C94BAE735F6E1CA5E6A4C1B76071(__this, /*hidden argument*/SubsystemLifecycleManager_2__ctor_mBBA88FFADFF4C94BAE735F6E1CA5E6A4C1B76071_RuntimeMethod_var);
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
// System.String WebXR.WebXRSettings::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebXRSettings_ToJson_m639FCF15396FC26FA766961EFA64A425A28474A4 (WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSettings_EnumToString_TisReferenceSpaceTypes_tBDD052CAB9B79CAA3BDEED124DD35ED86ABAD653_m3E33645A282964BC1F00C1D0981837F2E884FA34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSettings_FlagsToString_TisExtraFeatureTypes_tCEFCA040A0A48061BB1AEC424F5D136F2FE76E80_mE719ECF95C8728B88C0B668ED4E0CC19438B44CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0491ADD30E5917C8C04A75C1C1EB6BF687A9409A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BC205282494EDAD88FEBA407496CDAA04E87325);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B0894ABEAF7E64D2686097C87A687C8FEA277AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCD582124812A5577151DA28727D87A7C1AA2DBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF67A84AA24F72BA4244465A82FF0DAE9F0B01BCD);
		s_Il2CppMethodInitialized = true;
	}
	{
		//       string result = $@"{{
		//         ""VRRequiredReferenceSpace"": [""{EnumToString(VRRequiredReferenceSpace)}""],
		//         ""VROptionalFeatures"": {FlagsToString(VROptionalFeatures)},
		//         ""ARRequiredReferenceSpace"": [""{EnumToString(ARRequiredReferenceSpace)}""],
		//         ""AROptionalFeatures"": {FlagsToString(AROptionalFeatures)}
		// }}";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteral1BC205282494EDAD88FEBA407496CDAA04E87325);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1BC205282494EDAD88FEBA407496CDAA04E87325);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		int32_t L_3 = __this->get_VRRequiredReferenceSpace_4();
		String_t* L_4;
		L_4 = WebXRSettings_EnumToString_TisReferenceSpaceTypes_tBDD052CAB9B79CAA3BDEED124DD35ED86ABAD653_m3E33645A282964BC1F00C1D0981837F2E884FA34(__this, L_3, /*hidden argument*/WebXRSettings_EnumToString_TisReferenceSpaceTypes_tBDD052CAB9B79CAA3BDEED124DD35ED86ABAD653_m3E33645A282964BC1F00C1D0981837F2E884FA34_RuntimeMethod_var);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_2;
		ArrayElementTypeCheck (L_5, _stringLiteralDCD582124812A5577151DA28727D87A7C1AA2DBE);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDCD582124812A5577151DA28727D87A7C1AA2DBE);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		int32_t L_7 = __this->get_VROptionalFeatures_5();
		String_t* L_8;
		L_8 = WebXRSettings_FlagsToString_TisExtraFeatureTypes_tCEFCA040A0A48061BB1AEC424F5D136F2FE76E80_mE719ECF95C8728B88C0B668ED4E0CC19438B44CC(__this, L_7, /*hidden argument*/WebXRSettings_FlagsToString_TisExtraFeatureTypes_tCEFCA040A0A48061BB1AEC424F5D136F2FE76E80_mE719ECF95C8728B88C0B668ED4E0CC19438B44CC_RuntimeMethod_var);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_6;
		ArrayElementTypeCheck (L_9, _stringLiteralF67A84AA24F72BA4244465A82FF0DAE9F0B01BCD);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralF67A84AA24F72BA4244465A82FF0DAE9F0B01BCD);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		int32_t L_11 = __this->get_ARRequiredReferenceSpace_6();
		String_t* L_12;
		L_12 = WebXRSettings_EnumToString_TisReferenceSpaceTypes_tBDD052CAB9B79CAA3BDEED124DD35ED86ABAD653_m3E33645A282964BC1F00C1D0981837F2E884FA34(__this, L_11, /*hidden argument*/WebXRSettings_EnumToString_TisReferenceSpaceTypes_tBDD052CAB9B79CAA3BDEED124DD35ED86ABAD653_m3E33645A282964BC1F00C1D0981837F2E884FA34_RuntimeMethod_var);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_12);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_10;
		ArrayElementTypeCheck (L_13, _stringLiteral6B0894ABEAF7E64D2686097C87A687C8FEA277AA);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral6B0894ABEAF7E64D2686097C87A687C8FEA277AA);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		int32_t L_15 = __this->get_AROptionalFeatures_7();
		String_t* L_16;
		L_16 = WebXRSettings_FlagsToString_TisExtraFeatureTypes_tCEFCA040A0A48061BB1AEC424F5D136F2FE76E80_mE719ECF95C8728B88C0B668ED4E0CC19438B44CC(__this, L_15, /*hidden argument*/WebXRSettings_FlagsToString_TisExtraFeatureTypes_tCEFCA040A0A48061BB1AEC424F5D136F2FE76E80_mE719ECF95C8728B88C0B668ED4E0CC19438B44CC_RuntimeMethod_var);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_14;
		ArrayElementTypeCheck (L_17, _stringLiteral0491ADD30E5917C8C04A75C1C1EB6BF687A9409A);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral0491ADD30E5917C8C04A75C1C1EB6BF687A9409A);
		String_t* L_18;
		L_18 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_17, /*hidden argument*/NULL);
		// return result;
		return L_18;
	}
}
// WebXR.WebXRSettings WebXR.WebXRSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * WebXRSettings_get_Instance_m58DCDB1C9960750B6F4518DBA722D92A5B37615A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		IL2CPP_RUNTIME_CLASS_INIT(WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E_il2cpp_TypeInfo_var);
		WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * L_0 = ((WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E_il2cpp_TypeInfo_var))->get_instance_8();
		return L_0;
	}
}
// System.Void WebXR.WebXRSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSettings_Awake_m232481211C73CAF031561D76C194E2DD8C53B45E (WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E_il2cpp_TypeInfo_var);
		((WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E_il2cpp_TypeInfo_var))->set_instance_8(__this);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSettings__ctor_mA73A68193DFEF5B8A654AE820D9D0D18CC682F0B (WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * __this, const RuntimeMethod* method)
{
	{
		// public ReferenceSpaceTypes VRRequiredReferenceSpace = ReferenceSpaceTypes.local_floor;
		__this->set_VRRequiredReferenceSpace_4(2);
		// public ExtraFeatureTypes VROptionalFeatures = ExtraFeatureTypes.hand_tracking;
		__this->set_VROptionalFeatures_5(2);
		// public ReferenceSpaceTypes ARRequiredReferenceSpace = ReferenceSpaceTypes.local_floor;
		__this->set_ARRequiredReferenceSpace_6(2);
		// public ExtraFeatureTypes AROptionalFeatures = (ExtraFeatureTypes)(-1);
		__this->set_AROptionalFeatures_7((-1));
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebXR.WebXRSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSettings__cctor_m33DA3F6C99E7B36164CED42FF077610918C00298 (const RuntimeMethod* method)
{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_OnXRCapabilities_mFB0D9BE0B209BB2D46B00B8BDAAA4809D5C2AFFE(int32_t ___isARSupported0, int32_t ___isVRSupported1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebXRSubsystem_OnXRCapabilities_mFB0D9BE0B209BB2D46B00B8BDAAA4809D5C2AFFE(static_cast<bool>(___isARSupported0), static_cast<bool>(___isVRSupported1), NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_OnInputProfiles_m13B2017F20BC87FB5A6652011A0BA662CFD7F26B(char* ___json0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___json0' to managed representation
	String_t* ____json0_unmarshaled = NULL;
	____json0_unmarshaled = il2cpp_codegen_marshal_string_result(___json0);

	// Managed method invocation
	WebXRSubsystem_OnInputProfiles_m13B2017F20BC87FB5A6652011A0BA662CFD7F26B(____json0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_OnStartAR_mCD56D3757C78CD5745E78516435B8036BFF851B7(int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebXRSubsystem_OnStartAR_mCD56D3757C78CD5745E78516435B8036BFF851B7(___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_OnStartVR_mBD08B936DAEAEF64B167868B8E75F837B6AAFD76(int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebXRSubsystem_OnStartVR_mBD08B936DAEAEF64B167868B8E75F837B6AAFD76(___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_UpdateVisibilityState_m315E0A2C9F0B076FE8B18D2898B4BAB50A324D39(int32_t ___visibilityState0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebXRSubsystem_UpdateVisibilityState_m315E0A2C9F0B076FE8B18D2898B4BAB50A324D39(___visibilityState0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_OnEndXR_m619B5F929D1B8F67A360917710695E1474E03F14()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebXRSubsystem_OnEndXR_m619B5F929D1B8F67A360917710695E1474E03F14(NULL);

}
// System.Void WebXR.WebXRSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_RegisterDescriptor_m2BB6F2DE1F67FC300EE8B515C5897021A9B8A27B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemRegistration_tC119E4E15B2EA84DE58F44840EBED3221FF8CFF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystemDescriptor_t49D846DE8AA1635F1086FFDF794C244C7E314A71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44A2D1E81273492703A3E72527231CF054E24ED6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58241AA816E08701F7E8CDAA4AE7E1305DD05EAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var res = SubsystemRegistration.CreateDescriptor(new WebXRSubsystemDescriptor()
		// {
		//   id = typeof(WebXRSubsystem).FullName,
		//   subsystemImplementationType = typeof(WebXRSubsystem)
		// });
		WebXRSubsystemDescriptor_t49D846DE8AA1635F1086FFDF794C244C7E314A71 * L_0 = (WebXRSubsystemDescriptor_t49D846DE8AA1635F1086FFDF794C244C7E314A71 *)il2cpp_codegen_object_new(WebXRSubsystemDescriptor_t49D846DE8AA1635F1086FFDF794C244C7E314A71_il2cpp_TypeInfo_var);
		WebXRSubsystemDescriptor__ctor_m878E85732A9EC0F90E39B1A97C5ECDAE0DE4D4FB(L_0, /*hidden argument*/NULL);
		WebXRSubsystemDescriptor_t49D846DE8AA1635F1086FFDF794C244C7E314A71 * L_1 = L_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_3);
		SubsystemDescriptor_set_id_m3394B5AEBBE25A1924FD34FC0608DD5AACABBE2C_inline(L_1, L_4, /*hidden argument*/NULL);
		WebXRSubsystemDescriptor_t49D846DE8AA1635F1086FFDF794C244C7E314A71 * L_5 = L_1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_0_0_0_var) };
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		SubsystemDescriptor_set_subsystemImplementationType_mAEAE9A52920C64D2A9C5B6316E30353AFA581AA4_inline(L_5, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemRegistration_tC119E4E15B2EA84DE58F44840EBED3221FF8CFF2_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SubsystemRegistration_CreateDescriptor_m6C69D0D80C317F66888FEBF67DFEE327E3462A54(L_5, /*hidden argument*/NULL);
		// if (res)
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		// Debug.Log("Registered " + nameof(WebXRSubsystemDescriptor));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral44A2D1E81273492703A3E72527231CF054E24ED6, /*hidden argument*/NULL);
		return;
	}

IL_003c:
	{
		// else Debug.Log("Failed registering " + nameof(WebXRSubsystemDescriptor));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral58241AA816E08701F7E8CDAA4AE7E1305DD05EAC, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_Start_m9A7EAC25A453E302CF4FC16C21DD76BB0989C267 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral111B20F0F7B41BAAB439CEDD4E3A3BE9E8CB4560);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (running) return;
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.Subsystem::get_running() */, __this);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (running) return;
		return;
	}

IL_0009:
	{
		// Debug.Log("Start " + nameof(WebXRSubsystem));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral111B20F0F7B41BAAB439CEDD4E3A3BE9E8CB4560, /*hidden argument*/NULL);
		// _running = true;
		__this->set__running_1((bool)1);
		// Instance = this;
		((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->set_Instance_2(__this);
		// InternalStart();
		WebXRSubsystem_InternalStart_mBE49CEBAC1AD49D004028D5095F9521C46B5A11F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_Stop_mA1F8BDD521B491BAC1BD9516E80E1999F2636E9D (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EBB1A288D1FD2638C9CF918E19C9C00ABEDEC11);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_running) return;
		bool L_0 = __this->get__running_1();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!_running) return;
		return;
	}

IL_0009:
	{
		// Debug.Log("Stop " + nameof(WebXRSubsystem));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral1EBB1A288D1FD2638C9CF918E19C9C00ABEDEC11, /*hidden argument*/NULL);
		// _running = false;
		__this->set__running_1((bool)0);
		// Instance = null;
		((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->set_Instance_2((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 *)NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnDestroy_m91DFB3523584D846C44FC5DBF4B752E6B766164D (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1383DB48A524C3C40C8363BDFBF8E7A18E02222);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!running) return;
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.Subsystem::get_running() */, __this);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!running) return;
		return;
	}

IL_0009:
	{
		// Debug.Log("Destroy " + nameof(WebXRSubsystem));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE1383DB48A524C3C40C8363BDFBF8E7A18E02222, /*hidden argument*/NULL);
		// _running = false;
		__this->set__running_1((bool)0);
		// Instance = null;
		((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->set_Instance_2((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 *)NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::UpdateControllersOnEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_UpdateControllersOnEnd_mD6D4F8E6ED5F6E89335ED620BE3A6178FB1CCDF0 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * G_B4_0 = NULL;
	HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * G_B3_0 = NULL;
	HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * G_B8_0 = NULL;
	HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * G_B7_0 = NULL;
	ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * G_B13_0 = NULL;
	ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * G_B12_0 = NULL;
	ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * G_B17_0 = NULL;
	ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * G_B16_0 = NULL;
	{
		// if (OnHandUpdate != null)
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnHandUpdate_15();
		if (!L_0)
		{
			goto IL_0051;
		}
	}
	{
		// if (GetHandFromHandsArray(0, ref leftHand))
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE ** L_1 = __this->get_address_of_leftHand_29();
		bool L_2;
		L_2 = WebXRSubsystem_GetHandFromHandsArray_m052A2C0FE5BFA262407F2D20472F7A8FAB6770E2(__this, 0, (WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE **)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// OnHandUpdate?.Invoke(leftHand);
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_3 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnHandUpdate_15();
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0021;
		}
	}
	{
		goto IL_002c;
	}

IL_0021:
	{
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_5 = __this->get_leftHand_29();
		HandUpdate_Invoke_mDC8A5CC9ABD536600DF155F273840341706C8F18(G_B4_0, L_5, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// if (GetHandFromHandsArray(1, ref rightHand))
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE ** L_6 = __this->get_address_of_rightHand_30();
		bool L_7;
		L_7 = WebXRSubsystem_GetHandFromHandsArray_m052A2C0FE5BFA262407F2D20472F7A8FAB6770E2(__this, 1, (WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE **)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		// OnHandUpdate?.Invoke(rightHand);
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_8 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnHandUpdate_15();
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_9 = L_8;
		G_B7_0 = L_9;
		if (L_9)
		{
			G_B8_0 = L_9;
			goto IL_0046;
		}
	}
	{
		goto IL_0051;
	}

IL_0046:
	{
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_10 = __this->get_rightHand_30();
		HandUpdate_Invoke_mDC8A5CC9ABD536600DF155F273840341706C8F18(G_B8_0, L_10, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// if (OnControllerUpdate != null)
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_11 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnControllerUpdate_14();
		if (!L_11)
		{
			goto IL_00a1;
		}
	}
	{
		// if (GetGamepadFromControllersArray(0, ref controller1))
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_12 = __this->get_address_of_controller1_31();
		bool L_13;
		L_13 = WebXRSubsystem_GetGamepadFromControllersArray_mEDCCB20F7B8F77FC32AA387F59600C7A5EA82E0C(__this, 0, (WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_007d;
		}
	}
	{
		// OnControllerUpdate?.Invoke(controller1);
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_14 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnControllerUpdate_14();
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_15 = L_14;
		G_B12_0 = L_15;
		if (L_15)
		{
			G_B13_0 = L_15;
			goto IL_0072;
		}
	}
	{
		goto IL_007d;
	}

IL_0072:
	{
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_16 = __this->get_controller1_31();
		ControllerUpdate_Invoke_m47C5A116DF9BF6CADB431CA95350B25CC19FF1F9(G_B13_0, L_16, /*hidden argument*/NULL);
	}

IL_007d:
	{
		// if (GetGamepadFromControllersArray(1, ref controller2))
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_17 = __this->get_address_of_controller2_32();
		bool L_18;
		L_18 = WebXRSubsystem_GetGamepadFromControllersArray_mEDCCB20F7B8F77FC32AA387F59600C7A5EA82E0C(__this, 1, (WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a1;
		}
	}
	{
		// OnControllerUpdate?.Invoke(controller2);
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_19 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnControllerUpdate_14();
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_20 = L_19;
		G_B16_0 = L_20;
		if (L_20)
		{
			G_B17_0 = L_20;
			goto IL_0096;
		}
	}
	{
		return;
	}

IL_0096:
	{
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_21 = __this->get_controller2_32();
		ControllerUpdate_Invoke_m47C5A116DF9BF6CADB431CA95350B25CC19FF1F9(G_B17_0, L_21, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnUpdate_m2569356A2D18C943D89071BEA4F6E795E5A0D72C (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * G_B3_0 = NULL;
	XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * G_B2_0 = NULL;
	VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * G_B9_0 = NULL;
	VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * G_B8_0 = NULL;
	HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * G_B17_0 = NULL;
	HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * G_B16_0 = NULL;
	HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * G_B21_0 = NULL;
	HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * G_B20_0 = NULL;
	int32_t G_B25_0 = 0;
	ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * G_B32_0 = NULL;
	ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * G_B31_0 = NULL;
	ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * G_B36_0 = NULL;
	ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * G_B35_0 = NULL;
	HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * G_B42_0 = NULL;
	HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * G_B41_0 = NULL;
	{
		// if (!reportedXRStateSwitch)
		bool L_0 = __this->get_reportedXRStateSwitch_7();
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		// reportedXRStateSwitch = true;
		__this->set_reportedXRStateSwitch_7((bool)1);
		// OnXRChange?.Invoke(xrState, viewsCount, leftRect, rightRect);
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_1 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnXRChange_11();
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_001a;
		}
	}
	{
		goto IL_0037;
	}

IL_001a:
	{
		int32_t L_3 = __this->get_xrState_3();
		int32_t L_4 = __this->get_viewsCount_4();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_5 = __this->get_leftRect_5();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_6 = __this->get_rightRect_6();
		XRChange_Invoke_m0CE326BEE758986F020B1D952BDA978AA7A7DA62(G_B3_0, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// if (!updatedControllersOnEnd)
		bool L_7 = __this->get_updatedControllersOnEnd_28();
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		// updatedControllersOnEnd = true;
		__this->set_updatedControllersOnEnd_28((bool)1);
		// UpdateControllersOnEnd();
		WebXRSubsystem_UpdateControllersOnEnd_mD6D4F8E6ED5F6E89335ED620BE3A6178FB1CCDF0(__this, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// if (visibilityStateChanged)
		bool L_8 = __this->get_visibilityStateChanged_9();
		if (!L_8)
		{
			goto IL_0071;
		}
	}
	{
		// visibilityStateChanged = false;
		__this->set_visibilityStateChanged_9((bool)0);
		// OnVisibilityChange?.Invoke(visibilityState);
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_9 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnVisibilityChange_12();
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_10 = L_9;
		G_B8_0 = L_10;
		if (L_10)
		{
			G_B9_0 = L_10;
			goto IL_0066;
		}
	}
	{
		goto IL_0071;
	}

IL_0066:
	{
		int32_t L_11 = __this->get_visibilityState_8();
		VisibilityChange_Invoke_m13E184A2941E9D486D5A2CCA9FECB6B651AD787E(G_B9_0, L_11, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// if (this.xrState == WebXRState.NORMAL)
		int32_t L_12 = __this->get_xrState_3();
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			goto IL_007b;
		}
	}
	{
		// return;
		return;
	}

IL_007b:
	{
		// UpdateXRCameras();
		WebXRSubsystem_UpdateXRCameras_m2DB00BD7FFC62492F06E9CCB0684846FA72EA802(__this, /*hidden argument*/NULL);
		// bool hasHandsData = false;
		V_0 = (bool)0;
		// if (OnHandUpdate != null && this.xrState != WebXRState.NORMAL)
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_13 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnHandUpdate_15();
		if (!L_13)
		{
			goto IL_00f9;
		}
	}
	{
		int32_t L_14 = __this->get_xrState_3();
		if ((((int32_t)L_14) == ((int32_t)2)))
		{
			goto IL_00f9;
		}
	}
	{
		// if (GetHandFromHandsArray(0, ref leftHand))
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE ** L_15 = __this->get_address_of_leftHand_29();
		bool L_16;
		L_16 = WebXRSubsystem_GetHandFromHandsArray_m052A2C0FE5BFA262407F2D20472F7A8FAB6770E2(__this, 0, (WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE **)L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00b8;
		}
	}
	{
		// OnHandUpdate?.Invoke(leftHand);
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_17 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnHandUpdate_15();
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_18 = L_17;
		G_B16_0 = L_18;
		if (L_18)
		{
			G_B17_0 = L_18;
			goto IL_00ad;
		}
	}
	{
		goto IL_00b8;
	}

IL_00ad:
	{
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_19 = __this->get_leftHand_29();
		HandUpdate_Invoke_mDC8A5CC9ABD536600DF155F273840341706C8F18(G_B17_0, L_19, /*hidden argument*/NULL);
	}

IL_00b8:
	{
		// if (GetHandFromHandsArray(1, ref rightHand))
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE ** L_20 = __this->get_address_of_rightHand_30();
		bool L_21;
		L_21 = WebXRSubsystem_GetHandFromHandsArray_m052A2C0FE5BFA262407F2D20472F7A8FAB6770E2(__this, 1, (WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE **)L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00dd;
		}
	}
	{
		// OnHandUpdate?.Invoke(rightHand);
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_22 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnHandUpdate_15();
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_23 = L_22;
		G_B20_0 = L_23;
		if (L_23)
		{
			G_B21_0 = L_23;
			goto IL_00d2;
		}
	}
	{
		goto IL_00dd;
	}

IL_00d2:
	{
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_24 = __this->get_rightHand_30();
		HandUpdate_Invoke_mDC8A5CC9ABD536600DF155F273840341706C8F18(G_B21_0, L_24, /*hidden argument*/NULL);
	}

IL_00dd:
	{
		// hasHandsData = leftHand.enabled || rightHand.enabled;
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_25 = __this->get_leftHand_29();
		bool L_26 = L_25->get_enabled_1();
		if (L_26)
		{
			goto IL_00f7;
		}
	}
	{
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_27 = __this->get_rightHand_30();
		bool L_28 = L_27->get_enabled_1();
		G_B25_0 = ((int32_t)(L_28));
		goto IL_00f8;
	}

IL_00f7:
	{
		G_B25_0 = 1;
	}

IL_00f8:
	{
		V_0 = (bool)G_B25_0;
	}

IL_00f9:
	{
		// if (!hasHandsData && OnControllerUpdate != null && this.xrState != WebXRState.NORMAL)
		bool L_29 = V_0;
		if (L_29)
		{
			goto IL_0156;
		}
	}
	{
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_30 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnControllerUpdate_14();
		if (!L_30)
		{
			goto IL_0156;
		}
	}
	{
		int32_t L_31 = __this->get_xrState_3();
		if ((((int32_t)L_31) == ((int32_t)2)))
		{
			goto IL_0156;
		}
	}
	{
		// if (GetGamepadFromControllersArray(0, ref controller1))
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_32 = __this->get_address_of_controller1_31();
		bool L_33;
		L_33 = WebXRSubsystem_GetGamepadFromControllersArray_mEDCCB20F7B8F77FC32AA387F59600C7A5EA82E0C(__this, 0, (WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0131;
		}
	}
	{
		// OnControllerUpdate?.Invoke(controller1);
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_34 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnControllerUpdate_14();
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_35 = L_34;
		G_B31_0 = L_35;
		if (L_35)
		{
			G_B32_0 = L_35;
			goto IL_0126;
		}
	}
	{
		goto IL_0131;
	}

IL_0126:
	{
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_36 = __this->get_controller1_31();
		ControllerUpdate_Invoke_m47C5A116DF9BF6CADB431CA95350B25CC19FF1F9(G_B32_0, L_36, /*hidden argument*/NULL);
	}

IL_0131:
	{
		// if (GetGamepadFromControllersArray(1, ref controller2))
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_37 = __this->get_address_of_controller2_32();
		bool L_38;
		L_38 = WebXRSubsystem_GetGamepadFromControllersArray_mEDCCB20F7B8F77FC32AA387F59600C7A5EA82E0C(__this, 1, (WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0156;
		}
	}
	{
		// OnControllerUpdate?.Invoke(controller2);
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_39 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnControllerUpdate_14();
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_40 = L_39;
		G_B35_0 = L_40;
		if (L_40)
		{
			G_B36_0 = L_40;
			goto IL_014b;
		}
	}
	{
		goto IL_0156;
	}

IL_014b:
	{
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_41 = __this->get_controller2_32();
		ControllerUpdate_Invoke_m47C5A116DF9BF6CADB431CA95350B25CC19FF1F9(G_B36_0, L_41, /*hidden argument*/NULL);
	}

IL_0156:
	{
		// if (OnViewerHitTestUpdate != null && this.xrState == WebXRState.AR)
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_42 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnViewerHitTestUpdate_16();
		if (!L_42)
		{
			goto IL_0189;
		}
	}
	{
		int32_t L_43 = __this->get_xrState_3();
		if ((!(((uint32_t)L_43) == ((uint32_t)1))))
		{
			goto IL_0189;
		}
	}
	{
		// if (GetHitTestPoseFromViewerHitTestPoseArray(ref viewerHitTestPose))
		WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 ** L_44 = __this->get_address_of_viewerHitTestPose_33();
		bool L_45;
		L_45 = WebXRSubsystem_GetHitTestPoseFromViewerHitTestPoseArray_m3DB573C079E332FB7FA88467F05E921F39CDF2BE(__this, (WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 **)L_44, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0189;
		}
	}
	{
		// OnViewerHitTestUpdate?.Invoke(viewerHitTestPose);
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_46 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnViewerHitTestUpdate_16();
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_47 = L_46;
		G_B41_0 = L_47;
		if (L_47)
		{
			G_B42_0 = L_47;
			goto IL_017e;
		}
	}
	{
		return;
	}

IL_017e:
	{
		WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 * L_48 = __this->get_viewerHitTestPose_33();
		HitTestUpdate_Invoke_m63B55E422D090AA1804F049CE3A3A39DBB6CC689(G_B42_0, L_48, /*hidden argument*/NULL);
	}

IL_0189:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::UpdateXRCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_UpdateXRCameras_m2DB00BD7FFC62492F06E9CCB0684846FA72EA802 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * G_B4_0 = NULL;
	HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * G_B3_0 = NULL;
	{
		// if (OnHeadsetUpdate != null && this.xrState != WebXRState.NORMAL)
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnHeadsetUpdate_13();
		if (!L_0)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_1 = __this->get_xrState_3();
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_009c;
		}
	}
	{
		// GetMatrixFromSharedArray(0, ref leftProjectionMatrix);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_2 = __this->get_address_of_leftProjectionMatrix_17();
		WebXRSubsystem_GetMatrixFromSharedArray_mC9A6D744A947C4584B5CECFF762E979FE36D58F3(__this, 0, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_2, /*hidden argument*/NULL);
		// GetMatrixFromSharedArray(16, ref rightProjectionMatrix);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_3 = __this->get_address_of_rightProjectionMatrix_18();
		WebXRSubsystem_GetMatrixFromSharedArray_mC9A6D744A947C4584B5CECFF762E979FE36D58F3(__this, ((int32_t)16), (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_3, /*hidden argument*/NULL);
		// GetQuaternionFromSharedArray(32, ref leftRotation);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_4 = __this->get_address_of_leftRotation_21();
		WebXRSubsystem_GetQuaternionFromSharedArray_m77CB741C986343AF26F35EAF80B38BEF9BD8F273(__this, ((int32_t)32), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_4, /*hidden argument*/NULL);
		// GetQuaternionFromSharedArray(36, ref rightRotation);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_5 = __this->get_address_of_rightRotation_22();
		WebXRSubsystem_GetQuaternionFromSharedArray_m77CB741C986343AF26F35EAF80B38BEF9BD8F273(__this, ((int32_t)36), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_5, /*hidden argument*/NULL);
		// GetVector3FromSharedArray(40, ref leftPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of_leftPosition_19();
		WebXRSubsystem_GetVector3FromSharedArray_mDE832F656E4E129E1B990D727DF7616E5A1ED827(__this, ((int32_t)40), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_6, /*hidden argument*/NULL);
		// GetVector3FromSharedArray(43, ref rightPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = __this->get_address_of_rightPosition_20();
		WebXRSubsystem_GetVector3FromSharedArray_mDE832F656E4E129E1B990D727DF7616E5A1ED827(__this, ((int32_t)43), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_7, /*hidden argument*/NULL);
		// OnHeadsetUpdate?.Invoke(
		//     leftProjectionMatrix,
		//     rightProjectionMatrix,
		//     leftRotation,
		//     rightRotation,
		//     leftPosition,
		//     rightPosition);
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_8 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnHeadsetUpdate_13();
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_9 = L_8;
		G_B3_0 = L_9;
		if (L_9)
		{
			G_B4_0 = L_9;
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_0073:
	{
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_10 = __this->get_leftProjectionMatrix_17();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_11 = __this->get_rightProjectionMatrix_18();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12 = __this->get_leftRotation_21();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13 = __this->get_rightRotation_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_leftPosition_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = __this->get_rightPosition_20();
		HeadsetUpdate_Invoke_mB71F7BA6F45BA0BD17F09146CBB07D8B18526838(G_B4_0, L_10, L_11, L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Boolean WebXR.WebXRSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_get_running_m598BAF377C07FD16539033D3286CF1F1CAA02577 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method)
{
	{
		// public override bool running => _running;
		bool L_0 = __this->get__running_1();
		return L_0;
	}
}
// System.Void WebXR.WebXRSubsystem::InternalStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_InternalStart_mBE49CEBAC1AD49D004028D5095F9521C46B5A11F (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndXREvent_tAEF82376310EE655EF1E985071F2D45794196F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProfilesEvent_t88DDB46B55E92BBBC75C03C1EDBD7AB266F240A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisibilityChangeEvent_t577FC56D660C998476CA4FFB4EB1E7086216016D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_OnEndXR_m619B5F929D1B8F67A360917710695E1474E03F14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_OnInputProfiles_m13B2017F20BC87FB5A6652011A0BA662CFD7F26B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_OnStartAR_mCD56D3757C78CD5745E78516435B8036BFF851B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_OnStartVR_mBD08B936DAEAEF64B167868B8E75F837B6AAFD76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_OnXRCapabilities_mFB0D9BE0B209BB2D46B00B8BDAAA4809D5C2AFFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_UpdateVisibilityState_m315E0A2C9F0B076FE8B18D2898B4BAB50A324D39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRCapabilitiesEvent_t3F5640F3A08933111CC7FE5B43BCE122803DCF7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Native.SetWebXREvents(OnStartAR, OnStartVR, UpdateVisibilityState, OnEndXR, OnXRCapabilities, OnInputProfiles);
		StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA * L_0 = (StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA *)il2cpp_codegen_object_new(StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA_il2cpp_TypeInfo_var);
		StartXREvent__ctor_m31BB570FD0026812EE1469F08DA63839225D5ECE(L_0, NULL, (intptr_t)((intptr_t)WebXRSubsystem_OnStartAR_mCD56D3757C78CD5745E78516435B8036BFF851B7_RuntimeMethod_var), /*hidden argument*/NULL);
		StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA * L_1 = (StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA *)il2cpp_codegen_object_new(StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA_il2cpp_TypeInfo_var);
		StartXREvent__ctor_m31BB570FD0026812EE1469F08DA63839225D5ECE(L_1, NULL, (intptr_t)((intptr_t)WebXRSubsystem_OnStartVR_mBD08B936DAEAEF64B167868B8E75F837B6AAFD76_RuntimeMethod_var), /*hidden argument*/NULL);
		VisibilityChangeEvent_t577FC56D660C998476CA4FFB4EB1E7086216016D * L_2 = (VisibilityChangeEvent_t577FC56D660C998476CA4FFB4EB1E7086216016D *)il2cpp_codegen_object_new(VisibilityChangeEvent_t577FC56D660C998476CA4FFB4EB1E7086216016D_il2cpp_TypeInfo_var);
		VisibilityChangeEvent__ctor_mEED0B21C6518EFF14E8E8663B3259BA8B486BE95(L_2, NULL, (intptr_t)((intptr_t)WebXRSubsystem_UpdateVisibilityState_m315E0A2C9F0B076FE8B18D2898B4BAB50A324D39_RuntimeMethod_var), /*hidden argument*/NULL);
		EndXREvent_tAEF82376310EE655EF1E985071F2D45794196F5F * L_3 = (EndXREvent_tAEF82376310EE655EF1E985071F2D45794196F5F *)il2cpp_codegen_object_new(EndXREvent_tAEF82376310EE655EF1E985071F2D45794196F5F_il2cpp_TypeInfo_var);
		EndXREvent__ctor_mD89719B066CD1121CDE3E3A37A352DDFC9FD43ED(L_3, NULL, (intptr_t)((intptr_t)WebXRSubsystem_OnEndXR_m619B5F929D1B8F67A360917710695E1474E03F14_RuntimeMethod_var), /*hidden argument*/NULL);
		XRCapabilitiesEvent_t3F5640F3A08933111CC7FE5B43BCE122803DCF7F * L_4 = (XRCapabilitiesEvent_t3F5640F3A08933111CC7FE5B43BCE122803DCF7F *)il2cpp_codegen_object_new(XRCapabilitiesEvent_t3F5640F3A08933111CC7FE5B43BCE122803DCF7F_il2cpp_TypeInfo_var);
		XRCapabilitiesEvent__ctor_m57D26C946399C393C29345FA518D87488A6B86D5(L_4, NULL, (intptr_t)((intptr_t)WebXRSubsystem_OnXRCapabilities_mFB0D9BE0B209BB2D46B00B8BDAAA4809D5C2AFFE_RuntimeMethod_var), /*hidden argument*/NULL);
		InputProfilesEvent_t88DDB46B55E92BBBC75C03C1EDBD7AB266F240A6 * L_5 = (InputProfilesEvent_t88DDB46B55E92BBBC75C03C1EDBD7AB266F240A6 *)il2cpp_codegen_object_new(InputProfilesEvent_t88DDB46B55E92BBBC75C03C1EDBD7AB266F240A6_il2cpp_TypeInfo_var);
		InputProfilesEvent__ctor_m7F975C26A400BAE5379C8B8C7A3F4F379144AA64(L_5, NULL, (intptr_t)((intptr_t)WebXRSubsystem_OnInputProfiles_m13B2017F20BC87FB5A6652011A0BA662CFD7F26B_RuntimeMethod_var), /*hidden argument*/NULL);
		Native_SetWebXREvents_mCC3698663E68C8C630E4030E82DDD6AB9D94CA0A(L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// Native.InitControllersArray(controllersArray);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = __this->get_controllersArray_24();
		Native_InitControllersArray_m41766AE9F2ADCBC36EDEA22647DAB1186C940304(L_6, /*hidden argument*/NULL);
		// Native.InitHandsArray(handsArray);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = __this->get_handsArray_25();
		Native_InitHandsArray_mC0A30CADA36195DC99C994095D09DAEA265DD125(L_7, /*hidden argument*/NULL);
		// Native.InitViewerHitTestPoseArray(viewerHitTestPoseArray);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = __this->get_viewerHitTestPoseArray_26();
		Native_InitViewerHitTestPoseArray_mE80389001FFEC9A392EC3405A25BF25BC008246C(L_8, /*hidden argument*/NULL);
		// Native.InitXRSharedArray(sharedArray);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = __this->get_sharedArray_23();
		Native_InitXRSharedArray_m04832F3924505F264E4CFB9FD36AE30EA995C5E4(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnXRCapabilitiesUpdate(WebXR.WebXRSubsystem/XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnXRCapabilitiesUpdate_m9DD666F2A151746B8D9EEB22D4E0690E05F7C74B (XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * V_0 = NULL;
	XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * V_1 = NULL;
	XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * V_2 = NULL;
	{
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnXRCapabilitiesUpdate_10();
		V_0 = L_0;
	}

IL_0006:
	{
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_1 = V_0;
		V_1 = L_1;
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_2 = V_1;
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF *)CastclassSealed((RuntimeObject*)L_4, XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF_il2cpp_TypeInfo_var));
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_5 = V_2;
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_6 = V_1;
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_7;
		L_7 = InterlockedCompareExchangeImpl<XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF *>((XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF **)(((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_address_of_OnXRCapabilitiesUpdate_10()), L_5, L_6);
		V_0 = L_7;
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_8 = V_0;
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_9 = V_1;
		if ((!(((RuntimeObject*)(XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF *)L_8) == ((RuntimeObject*)(XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnXRCapabilitiesUpdate(WebXR.WebXRSubsystem/XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnXRCapabilitiesUpdate_m73A33A24BE1933727C60F1BB010611D27A7FA5BE (XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * V_0 = NULL;
	XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * V_1 = NULL;
	XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * V_2 = NULL;
	{
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnXRCapabilitiesUpdate_10();
		V_0 = L_0;
	}

IL_0006:
	{
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_1 = V_0;
		V_1 = L_1;
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_2 = V_1;
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF *)CastclassSealed((RuntimeObject*)L_4, XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF_il2cpp_TypeInfo_var));
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_5 = V_2;
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_6 = V_1;
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_7;
		L_7 = InterlockedCompareExchangeImpl<XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF *>((XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF **)(((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_address_of_OnXRCapabilitiesUpdate_10()), L_5, L_6);
		V_0 = L_7;
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_8 = V_0;
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_9 = V_1;
		if ((!(((RuntimeObject*)(XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF *)L_8) == ((RuntimeObject*)(XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnXRChange_m21C9DC5B59684D88DE7566668843063E6E50DCD1 (XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * V_0 = NULL;
	XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * V_1 = NULL;
	XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * V_2 = NULL;
	{
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnXRChange_11();
		V_0 = L_0;
	}

IL_0006:
	{
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_1 = V_0;
		V_1 = L_1;
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_2 = V_1;
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD *)CastclassSealed((RuntimeObject*)L_4, XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD_il2cpp_TypeInfo_var));
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_5 = V_2;
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_6 = V_1;
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_7;
		L_7 = InterlockedCompareExchangeImpl<XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD *>((XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD **)(((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_address_of_OnXRChange_11()), L_5, L_6);
		V_0 = L_7;
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_8 = V_0;
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_9 = V_1;
		if ((!(((RuntimeObject*)(XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD *)L_8) == ((RuntimeObject*)(XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnXRChange_m3061AADEF1F5AD3665ABA5D2481A403CCFBBE003 (XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * V_0 = NULL;
	XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * V_1 = NULL;
	XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * V_2 = NULL;
	{
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnXRChange_11();
		V_0 = L_0;
	}

IL_0006:
	{
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_1 = V_0;
		V_1 = L_1;
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_2 = V_1;
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD *)CastclassSealed((RuntimeObject*)L_4, XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD_il2cpp_TypeInfo_var));
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_5 = V_2;
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_6 = V_1;
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_7;
		L_7 = InterlockedCompareExchangeImpl<XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD *>((XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD **)(((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_address_of_OnXRChange_11()), L_5, L_6);
		V_0 = L_7;
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_8 = V_0;
		XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * L_9 = V_1;
		if ((!(((RuntimeObject*)(XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD *)L_8) == ((RuntimeObject*)(XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnVisibilityChange(WebXR.WebXRSubsystem/VisibilityChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnVisibilityChange_m4C34677A8BA985205DE59D02743CC96C04636022 (VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * V_0 = NULL;
	VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * V_1 = NULL;
	VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * V_2 = NULL;
	{
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnVisibilityChange_12();
		V_0 = L_0;
	}

IL_0006:
	{
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_1 = V_0;
		V_1 = L_1;
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_2 = V_1;
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 *)CastclassSealed((RuntimeObject*)L_4, VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6_il2cpp_TypeInfo_var));
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_5 = V_2;
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_6 = V_1;
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 *>((VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 **)(((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_address_of_OnVisibilityChange_12()), L_5, L_6);
		V_0 = L_7;
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_8 = V_0;
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 *)L_8) == ((RuntimeObject*)(VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnVisibilityChange(WebXR.WebXRSubsystem/VisibilityChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnVisibilityChange_m8C7D8AE689494D3B3F6DCA008F96F7FB74205DE3 (VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * V_0 = NULL;
	VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * V_1 = NULL;
	VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * V_2 = NULL;
	{
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnVisibilityChange_12();
		V_0 = L_0;
	}

IL_0006:
	{
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_1 = V_0;
		V_1 = L_1;
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_2 = V_1;
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 *)CastclassSealed((RuntimeObject*)L_4, VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6_il2cpp_TypeInfo_var));
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_5 = V_2;
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_6 = V_1;
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 *>((VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 **)(((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_address_of_OnVisibilityChange_12()), L_5, L_6);
		V_0 = L_7;
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_8 = V_0;
		VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 *)L_8) == ((RuntimeObject*)(VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnHeadsetUpdate_m0E345583924F040F95F7A8FA10C2967C9BFEB00A (HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * V_0 = NULL;
	HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * V_1 = NULL;
	HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * V_2 = NULL;
	{
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnHeadsetUpdate_13();
		V_0 = L_0;
	}

IL_0006:
	{
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_1 = V_0;
		V_1 = L_1;
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_2 = V_1;
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD *)CastclassSealed((RuntimeObject*)L_4, HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD_il2cpp_TypeInfo_var));
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_5 = V_2;
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_6 = V_1;
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_7;
		L_7 = InterlockedCompareExchangeImpl<HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD *>((HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD **)(((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_address_of_OnHeadsetUpdate_13()), L_5, L_6);
		V_0 = L_7;
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_8 = V_0;
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_9 = V_1;
		if ((!(((RuntimeObject*)(HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD *)L_8) == ((RuntimeObject*)(HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnHeadsetUpdate_m191ADB2EAB38C55856383576F2A2CCAD313486E9 (HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * V_0 = NULL;
	HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * V_1 = NULL;
	HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * V_2 = NULL;
	{
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnHeadsetUpdate_13();
		V_0 = L_0;
	}

IL_0006:
	{
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_1 = V_0;
		V_1 = L_1;
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_2 = V_1;
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD *)CastclassSealed((RuntimeObject*)L_4, HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD_il2cpp_TypeInfo_var));
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_5 = V_2;
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_6 = V_1;
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_7;
		L_7 = InterlockedCompareExchangeImpl<HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD *>((HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD **)(((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_address_of_OnHeadsetUpdate_13()), L_5, L_6);
		V_0 = L_7;
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_8 = V_0;
		HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * L_9 = V_1;
		if ((!(((RuntimeObject*)(HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD *)L_8) == ((RuntimeObject*)(HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnControllerUpdate_mB348C2F8DBC444FEF6C5339D78538F52444532A4 (ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * V_0 = NULL;
	ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * V_1 = NULL;
	ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * V_2 = NULL;
	{
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnControllerUpdate_14();
		V_0 = L_0;
	}

IL_0006:
	{
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_1 = V_0;
		V_1 = L_1;
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_2 = V_1;
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF *)CastclassSealed((RuntimeObject*)L_4, ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF_il2cpp_TypeInfo_var));
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_5 = V_2;
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_6 = V_1;
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_7;
		L_7 = InterlockedCompareExchangeImpl<ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF *>((ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF **)(((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_address_of_OnControllerUpdate_14()), L_5, L_6);
		V_0 = L_7;
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_8 = V_0;
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_9 = V_1;
		if ((!(((RuntimeObject*)(ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF *)L_8) == ((RuntimeObject*)(ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnControllerUpdate_m0DE8C4DC9EE90E50A045B510A06AE1D7116425ED (ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * V_0 = NULL;
	ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * V_1 = NULL;
	ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * V_2 = NULL;
	{
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnControllerUpdate_14();
		V_0 = L_0;
	}

IL_0006:
	{
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_1 = V_0;
		V_1 = L_1;
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_2 = V_1;
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF *)CastclassSealed((RuntimeObject*)L_4, ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF_il2cpp_TypeInfo_var));
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_5 = V_2;
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_6 = V_1;
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_7;
		L_7 = InterlockedCompareExchangeImpl<ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF *>((ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF **)(((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_address_of_OnControllerUpdate_14()), L_5, L_6);
		V_0 = L_7;
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_8 = V_0;
		ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * L_9 = V_1;
		if ((!(((RuntimeObject*)(ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF *)L_8) == ((RuntimeObject*)(ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnHandUpdate_mB281E1FE9000518D42344288A92A4082A16E07EA (HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * V_0 = NULL;
	HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * V_1 = NULL;
	HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * V_2 = NULL;
	{
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnHandUpdate_15();
		V_0 = L_0;
	}

IL_0006:
	{
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_1 = V_0;
		V_1 = L_1;
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_2 = V_1;
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C *)CastclassSealed((RuntimeObject*)L_4, HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C_il2cpp_TypeInfo_var));
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_5 = V_2;
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_6 = V_1;
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_7;
		L_7 = InterlockedCompareExchangeImpl<HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C *>((HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C **)(((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_address_of_OnHandUpdate_15()), L_5, L_6);
		V_0 = L_7;
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_8 = V_0;
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_9 = V_1;
		if ((!(((RuntimeObject*)(HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C *)L_8) == ((RuntimeObject*)(HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnHandUpdate_m3D23BDC60B337800989029A61B3A9DBFBDD34C75 (HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * V_0 = NULL;
	HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * V_1 = NULL;
	HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * V_2 = NULL;
	{
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnHandUpdate_15();
		V_0 = L_0;
	}

IL_0006:
	{
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_1 = V_0;
		V_1 = L_1;
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_2 = V_1;
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C *)CastclassSealed((RuntimeObject*)L_4, HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C_il2cpp_TypeInfo_var));
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_5 = V_2;
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_6 = V_1;
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_7;
		L_7 = InterlockedCompareExchangeImpl<HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C *>((HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C **)(((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_address_of_OnHandUpdate_15()), L_5, L_6);
		V_0 = L_7;
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_8 = V_0;
		HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * L_9 = V_1;
		if ((!(((RuntimeObject*)(HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C *)L_8) == ((RuntimeObject*)(HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnViewerHitTestUpdate(WebXR.WebXRSubsystem/HitTestUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnViewerHitTestUpdate_m1C8A778D9684039E5246169B17BCE25A0EED40B2 (HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * V_0 = NULL;
	HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * V_1 = NULL;
	HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * V_2 = NULL;
	{
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnViewerHitTestUpdate_16();
		V_0 = L_0;
	}

IL_0006:
	{
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_1 = V_0;
		V_1 = L_1;
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_2 = V_1;
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 *)CastclassSealed((RuntimeObject*)L_4, HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35_il2cpp_TypeInfo_var));
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_5 = V_2;
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_6 = V_1;
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_7;
		L_7 = InterlockedCompareExchangeImpl<HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 *>((HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 **)(((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_address_of_OnViewerHitTestUpdate_16()), L_5, L_6);
		V_0 = L_7;
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_8 = V_0;
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_9 = V_1;
		if ((!(((RuntimeObject*)(HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 *)L_8) == ((RuntimeObject*)(HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnViewerHitTestUpdate(WebXR.WebXRSubsystem/HitTestUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnViewerHitTestUpdate_mE69313A2AA4A4112E6F89FD4268E37FABEF1BBCD (HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * V_0 = NULL;
	HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * V_1 = NULL;
	HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * V_2 = NULL;
	{
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnViewerHitTestUpdate_16();
		V_0 = L_0;
	}

IL_0006:
	{
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_1 = V_0;
		V_1 = L_1;
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_2 = V_1;
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 *)CastclassSealed((RuntimeObject*)L_4, HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35_il2cpp_TypeInfo_var));
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_5 = V_2;
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_6 = V_1;
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_7;
		L_7 = InterlockedCompareExchangeImpl<HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 *>((HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 **)(((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_address_of_OnViewerHitTestUpdate_16()), L_5, L_6);
		V_0 = L_7;
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_8 = V_0;
		HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * L_9 = V_1;
		if ((!(((RuntimeObject*)(HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 *)L_8) == ((RuntimeObject*)(HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnXRCapabilities(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnXRCapabilities_mFB0D9BE0B209BB2D46B00B8BDAAA4809D5C2AFFE (bool ___isARSupported0, bool ___isVRSupported1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance.capabilities.canPresentAR = isARSupported;
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_Instance_2();
		WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5 * L_1 = L_0->get_address_of_capabilities_34();
		bool L_2 = ___isARSupported0;
		L_1->set_canPresentAR_0(L_2);
		// Instance.capabilities.canPresentVR = isVRSupported;
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_3 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_Instance_2();
		WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5 * L_4 = L_3->get_address_of_capabilities_34();
		bool L_5 = ___isVRSupported1;
		L_4->set_canPresentVR_1(L_5);
		// Instance.OnXRCapabilities(Instance.capabilities);
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_6 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_Instance_2();
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_7 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_Instance_2();
		WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5  L_8 = L_7->get_capabilities_34();
		WebXRSubsystem_OnXRCapabilities_m6F3BE670D26343419486F9AD5832EC5B0F916361(L_6, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnInputProfiles(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnInputProfiles_m13B2017F20BC87FB5A6652011A0BA662CFD7F26B (String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisWebXRControllersProfiles_t2D147E1F114FABC0C5415E99EEF169E431A43FCB_mE327F9A07CC912CF5670004A9910709331F8BC78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRControllersProfiles_t2D147E1F114FABC0C5415E99EEF169E431A43FCB * V_0 = NULL;
	{
		// WebXRControllersProfiles controllersProfiles = JsonUtility.FromJson<WebXRControllersProfiles>(json);
		String_t* L_0 = ___json0;
		WebXRControllersProfiles_t2D147E1F114FABC0C5415E99EEF169E431A43FCB * L_1;
		L_1 = JsonUtility_FromJson_TisWebXRControllersProfiles_t2D147E1F114FABC0C5415E99EEF169E431A43FCB_mE327F9A07CC912CF5670004A9910709331F8BC78(L_0, /*hidden argument*/JsonUtility_FromJson_TisWebXRControllersProfiles_t2D147E1F114FABC0C5415E99EEF169E431A43FCB_mE327F9A07CC912CF5670004A9910709331F8BC78_RuntimeMethod_var);
		V_0 = L_1;
		// Instance.OnInputProfiles(controllersProfiles);
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_2 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_Instance_2();
		WebXRControllersProfiles_t2D147E1F114FABC0C5415E99EEF169E431A43FCB * L_3 = V_0;
		WebXRSubsystem_OnInputProfiles_m3132BDD709B6FCBDBE3F8A354BA381A21F424D32(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnXRCapabilities(WebXR.WebXRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnXRCapabilities_m6F3BE670D26343419486F9AD5832EC5B0F916361 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5  ___cap0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * G_B2_0 = NULL;
	XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * G_B1_0 = NULL;
	{
		// this.capabilities = cap;
		WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5  L_0 = ___cap0;
		__this->set_capabilities_34(L_0);
		// OnXRCapabilitiesUpdate?.Invoke(cap);
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_1 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_OnXRCapabilitiesUpdate_10();
		XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5  L_3 = ___cap0;
		XRCapabilitiesUpdate_Invoke_mA6EF652F2201F501B2099F06400913BC5FCBBDC3(G_B2_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnInputProfiles(WebXR.WebXRControllersProfiles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnInputProfiles_m3132BDD709B6FCBDBE3F8A354BA381A21F424D32 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, WebXRControllersProfiles_t2D147E1F114FABC0C5415E99EEF169E431A43FCB * ___controllersProfiles0, const RuntimeMethod* method)
{
	{
		// controller1.profiles = controllersProfiles.conrtoller1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_0 = __this->get_controller1_31();
		WebXRControllersProfiles_t2D147E1F114FABC0C5415E99EEF169E431A43FCB * L_1 = ___controllersProfiles0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1->get_conrtoller1_0();
		L_0->set_profiles_17(L_2);
		// controller2.profiles = controllersProfiles.conrtoller2;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_3 = __this->get_controller2_32();
		WebXRControllersProfiles_t2D147E1F114FABC0C5415E99EEF169E431A43FCB * L_4 = ___controllersProfiles0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4->get_conrtoller2_1();
		L_3->set_profiles_17(L_5);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::setXrState(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_setXrState_m70307D78E47C58DB1DC215A84F40149E6837E6CE (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, int32_t ___state0, int32_t ___viewsCount1, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___leftRect2, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rightRect3, const RuntimeMethod* method)
{
	{
		// visibilityState = WebXRVisibilityState.VISIBLE;
		__this->set_visibilityState_8(0);
		// this.xrState = state;
		int32_t L_0 = ___state0;
		__this->set_xrState_3(L_0);
		// this.viewsCount = viewsCount;
		int32_t L_1 = ___viewsCount1;
		__this->set_viewsCount_4(L_1);
		// this.leftRect = leftRect;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2 = ___leftRect2;
		__this->set_leftRect_5(L_2);
		// this.rightRect = rightRect;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3 = ___rightRect3;
		__this->set_rightRect_6(L_3);
		// viewerHitTestOn = false;
		__this->set_viewerHitTestOn_27((bool)0);
		// reportedXRStateSwitch = false;
		__this->set_reportedXRStateSwitch_7((bool)0);
		// if (state != WebXRState.NORMAL)
		int32_t L_4 = ___state0;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_003d;
		}
	}
	{
		// visibilityStateChanged = true;
		__this->set_visibilityStateChanged_9((bool)1);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnStartAR(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnStartAR_mCD56D3757C78CD5745E78516435B8036BFF851B7 (int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance.setXrState(WebXRState.AR, viewsCount,
		//     new Rect(left_x, left_y, left_w, left_h),
		//     new Rect(right_x, right_y, right_w, right_h));
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_Instance_2();
		int32_t L_1 = ___viewsCount0;
		float L_2 = ___left_x1;
		float L_3 = ___left_y2;
		float L_4 = ___left_w3;
		float L_5 = ___left_h4;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_6), L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = ___right_x5;
		float L_8 = ___right_y6;
		float L_9 = ___right_w7;
		float L_10 = ___right_h8;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_11), L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		WebXRSubsystem_setXrState_m70307D78E47C58DB1DC215A84F40149E6837E6CE(L_0, 1, L_1, L_6, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnStartVR(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnStartVR_mBD08B936DAEAEF64B167868B8E75F837B6AAFD76 (int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance.setXrState(WebXRState.VR, viewsCount,
		//     new Rect(left_x, left_y, left_w, left_h),
		//     new Rect(right_x, right_y, right_w, right_h));
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_Instance_2();
		int32_t L_1 = ___viewsCount0;
		float L_2 = ___left_x1;
		float L_3 = ___left_y2;
		float L_4 = ___left_w3;
		float L_5 = ___left_h4;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_6), L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = ___right_x5;
		float L_8 = ___right_y6;
		float L_9 = ___right_w7;
		float L_10 = ___right_h8;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_11), L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		WebXRSubsystem_setXrState_m70307D78E47C58DB1DC215A84F40149E6837E6CE(L_0, 0, L_1, L_6, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::UpdateVisibilityState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_UpdateVisibilityState_m315E0A2C9F0B076FE8B18D2898B4BAB50A324D39 (int32_t ___visibilityState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance.visibilityState != (WebXRVisibilityState)visibilityState)
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_Instance_2();
		int32_t L_1 = L_0->get_visibilityState_8();
		int32_t L_2 = ___visibilityState0;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		// Instance.visibilityState = (WebXRVisibilityState)visibilityState;
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_3 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_Instance_2();
		int32_t L_4 = ___visibilityState0;
		L_3->set_visibilityState_8(L_4);
		// Instance.visibilityStateChanged = true;
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_5 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_Instance_2();
		L_5->set_visibilityStateChanged_9((bool)1);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnEndXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnEndXR_m619B5F929D1B8F67A360917710695E1474E03F14 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Instance.updatedControllersOnEnd = false;
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_0 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_Instance_2();
		L_0->set_updatedControllersOnEnd_28((bool)0);
		// Instance.setXrState(WebXRState.NORMAL, 1, new Rect(), new Rect());
		WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * L_1 = ((WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8_il2cpp_TypeInfo_var))->get_Instance_2();
		il2cpp_codegen_initobj((&V_0), sizeof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 ));
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2 = V_0;
		il2cpp_codegen_initobj((&V_0), sizeof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 ));
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3 = V_0;
		WebXRSubsystem_setXrState_m70307D78E47C58DB1DC215A84F40149E6837E6CE(L_1, 2, 1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::ToggleAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_ToggleAR_m1071DF7EEFEB3E8B2A588BC205B8D4C9C93E36EA (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method)
{
	{
		// if (capabilities.canPresentAR)
		WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5 * L_0 = __this->get_address_of_capabilities_34();
		bool L_1 = L_0->get_canPresentAR_0();
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// Native.ToggleAR();
		Native_ToggleAR_mC629D582E399FC953515A0C94A1931A823026607(/*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::ToggleVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_ToggleVR_mAAA1B626B542EC555F65E16441699A472F353E6A (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method)
{
	{
		// if (capabilities.canPresentVR)
		WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5 * L_0 = __this->get_address_of_capabilities_34();
		bool L_1 = L_0->get_canPresentVR_1();
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// Native.ToggleVR();
		Native_ToggleVR_m47624AA1B8514DB8F4CEA9C46805CF8BDD1E7C1C(/*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::StartViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_StartViewerHitTest_mDC9910CAF02F4DDBFC46A79D334D389295F89591 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method)
{
	{
		// if (xrState == WebXRState.AR && !viewerHitTestOn)
		int32_t L_0 = __this->get_xrState_3();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		bool L_1 = __this->get_viewerHitTestOn_27();
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		// viewerHitTestOn = true;
		__this->set_viewerHitTestOn_27((bool)1);
		// Native.ToggleViewerHitTest();
		Native_ToggleViewerHitTest_m8C6B83AAFD86E944657908F8A1C0699812B8F05C(/*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::StopViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_StopViewerHitTest_m875B6A35A03E9221D623B9442134AD0FA70F00C5 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method)
{
	{
		// if (xrState == WebXRState.AR && viewerHitTestOn)
		int32_t L_0 = __this->get_xrState_3();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		bool L_1 = __this->get_viewerHitTestOn_27();
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// viewerHitTestOn = false;
		__this->set_viewerHitTestOn_27((bool)0);
		// Native.ToggleViewerHitTest();
		Native_ToggleViewerHitTest_m8C6B83AAFD86E944657908F8A1C0699812B8F05C(/*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::HapticPulse(WebXR.WebXRControllerHand,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_HapticPulse_m721A6DA6AD9A54309DC9435E7308E2787DE9E271 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, int32_t ___hand0, float ___intensity1, float ___duration2, const RuntimeMethod* method)
{
	{
		// Native.ControllerPulse((int)hand, intensity, duration);
		int32_t L_0 = ___hand0;
		float L_1 = ___intensity1;
		float L_2 = ___duration2;
		Native_ControllerPulse_m7E40FB5A6FC2F3BA6A02D10EB0C10AB1BB222195(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::GetMatrixFromSharedArray(System.Int32,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_GetMatrixFromSharedArray_mC9A6D744A947C4584B5CECFF762E979FE36D58F3 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, int32_t ___index0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___matrix1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < 16; i++)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// matrix[i] = sharedArray[index + i];
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_0 = ___matrix1;
		int32_t L_1 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = __this->get_sharedArray_23();
		int32_t L_3 = ___index0;
		int32_t L_4 = V_0;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4));
		float L_6 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Matrix4x4_set_Item_m27BC97EE3093FDADFE0804FB80AFF5CDB03D355B((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_0, L_1, L_6, /*hidden argument*/NULL);
		// for (int i = 0; i < 16; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0019:
	{
		// for (int i = 0; i < 16; i++)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)16))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::GetQuaternionFromSharedArray(System.Int32,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_GetQuaternionFromSharedArray_m77CB741C986343AF26F35EAF80B38BEF9BD8F273 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, int32_t ___index0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___quaternion1, const RuntimeMethod* method)
{
	{
		// quaternion.x = sharedArray[index];
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_0 = ___quaternion1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = __this->get_sharedArray_23();
		int32_t L_2 = ___index0;
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		L_0->set_x_0(L_4);
		// quaternion.y = sharedArray[index + 1];
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_5 = ___quaternion1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = __this->get_sharedArray_23();
		int32_t L_7 = ___index0;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		float L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		L_5->set_y_1(L_9);
		// quaternion.z = sharedArray[index + 2];
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_10 = ___quaternion1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = __this->get_sharedArray_23();
		int32_t L_12 = ___index0;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)2));
		float L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		L_10->set_z_2(L_14);
		// quaternion.w = sharedArray[index + 3];
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_15 = ___quaternion1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_16 = __this->get_sharedArray_23();
		int32_t L_17 = ___index0;
		int32_t L_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)3));
		float L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		L_15->set_w_3(L_19);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::GetVector3FromSharedArray(System.Int32,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_GetVector3FromSharedArray_mDE832F656E4E129E1B990D727DF7616E5A1ED827 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___vec31, const RuntimeMethod* method)
{
	{
		// vec3.x = sharedArray[index];
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = ___vec31;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = __this->get_sharedArray_23();
		int32_t L_2 = ___index0;
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		L_0->set_x_2(L_4);
		// vec3.y = sharedArray[index + 1];
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = ___vec31;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = __this->get_sharedArray_23();
		int32_t L_7 = ___index0;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		float L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		L_5->set_y_3(L_9);
		// vec3.z = sharedArray[index + 2];
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = ___vec31;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = __this->get_sharedArray_23();
		int32_t L_12 = ___index0;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)2));
		float L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		L_10->set_z_4(L_14);
		// }
		return;
	}
}
// System.Boolean WebXR.WebXRSubsystem::GetGamepadFromControllersArray(System.Int32,WebXR.WebXRControllerData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_GetGamepadFromControllersArray_mEDCCB20F7B8F77FC32AA387F59600C7A5EA82E0C (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, int32_t ___controllerIndex0, WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** ___newControllerData1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int arrayPosition = controllerIndex * 28;
		int32_t L_0 = ___controllerIndex0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)28)));
		// int frameNumber = (int)controllersArray[arrayPosition++];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = __this->get_controllersArray_24();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		int32_t L_4 = L_3;
		float L_5 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_5);
		// if (newControllerData.frame == frameNumber)
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_6 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_7 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_6);
		int32_t L_8 = L_7->get_frame_0();
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_001f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001f:
	{
		// newControllerData.frame = frameNumber;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_10 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_11 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_10);
		int32_t L_12 = V_1;
		L_11->set_frame_0(L_12);
		// newControllerData.enabled = controllersArray[arrayPosition++] != 0;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_13 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_14 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_13);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_15 = __this->get_controllersArray_24();
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_18 = L_17;
		float L_19 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		L_14->set_enabled_1((bool)((((int32_t)((((float)L_19) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		// newControllerData.hand = (int)controllersArray[arrayPosition++];
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_20 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_21 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_20);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_22 = __this->get_controllersArray_24();
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		int32_t L_25 = L_24;
		float L_26 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		L_21->set_hand_2(il2cpp_codegen_cast_double_to_int<int32_t>(L_26));
		// if (!newControllerData.enabled)
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_27 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_28 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_27);
		bool L_29 = L_28->get_enabled_1();
		if (L_29)
		{
			goto IL_0063;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0063:
	{
		// newControllerData.position = new Vector3(controllersArray[arrayPosition++], controllersArray[arrayPosition++], controllersArray[arrayPosition++]);
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_30 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_31 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_30);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_32 = __this->get_controllersArray_24();
		int32_t L_33 = V_0;
		int32_t L_34 = L_33;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
		int32_t L_35 = L_34;
		float L_36 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_37 = __this->get_controllersArray_24();
		int32_t L_38 = V_0;
		int32_t L_39 = L_38;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		int32_t L_40 = L_39;
		float L_41 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_42 = __this->get_controllersArray_24();
		int32_t L_43 = V_0;
		int32_t L_44 = L_43;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		int32_t L_45 = L_44;
		float L_46 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_47), L_36, L_41, L_46, /*hidden argument*/NULL);
		L_31->set_position_3(L_47);
		// newControllerData.rotation = new Quaternion(controllersArray[arrayPosition++], controllersArray[arrayPosition++], controllersArray[arrayPosition++],
		//     controllersArray[arrayPosition++]);
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_48 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_49 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_48);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_50 = __this->get_controllersArray_24();
		int32_t L_51 = V_0;
		int32_t L_52 = L_51;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		int32_t L_53 = L_52;
		float L_54 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_55 = __this->get_controllersArray_24();
		int32_t L_56 = V_0;
		int32_t L_57 = L_56;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
		int32_t L_58 = L_57;
		float L_59 = (L_55)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_60 = __this->get_controllersArray_24();
		int32_t L_61 = V_0;
		int32_t L_62 = L_61;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
		int32_t L_63 = L_62;
		float L_64 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_63));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_65 = __this->get_controllersArray_24();
		int32_t L_66 = V_0;
		int32_t L_67 = L_66;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		int32_t L_68 = L_67;
		float L_69 = (L_65)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_70;
		memset((&L_70), 0, sizeof(L_70));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_70), L_54, L_59, L_64, L_69, /*hidden argument*/NULL);
		L_49->set_rotation_4(L_70);
		// newControllerData.trigger = controllersArray[arrayPosition++];
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_71 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_72 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_71);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_73 = __this->get_controllersArray_24();
		int32_t L_74 = V_0;
		int32_t L_75 = L_74;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
		int32_t L_76 = L_75;
		float L_77 = (L_73)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		L_72->set_trigger_7(L_77);
		// newControllerData.squeeze = controllersArray[arrayPosition++];
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_78 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_79 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_78);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_80 = __this->get_controllersArray_24();
		int32_t L_81 = V_0;
		int32_t L_82 = L_81;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
		int32_t L_83 = L_82;
		float L_84 = (L_80)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_83));
		L_79->set_squeeze_8(L_84);
		// newControllerData.thumbstick = controllersArray[arrayPosition++];
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_85 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_86 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_85);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_87 = __this->get_controllersArray_24();
		int32_t L_88 = V_0;
		int32_t L_89 = L_88;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1));
		int32_t L_90 = L_89;
		float L_91 = (L_87)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_90));
		L_86->set_thumbstick_9(L_91);
		// newControllerData.thumbstickX = controllersArray[arrayPosition++];
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_92 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_93 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_92);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_94 = __this->get_controllersArray_24();
		int32_t L_95 = V_0;
		int32_t L_96 = L_95;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1));
		int32_t L_97 = L_96;
		float L_98 = (L_94)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_97));
		L_93->set_thumbstickX_10(L_98);
		// newControllerData.thumbstickY = controllersArray[arrayPosition++];
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_99 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_100 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_99);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_101 = __this->get_controllersArray_24();
		int32_t L_102 = V_0;
		int32_t L_103 = L_102;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
		int32_t L_104 = L_103;
		float L_105 = (L_101)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_104));
		L_100->set_thumbstickY_11(L_105);
		// newControllerData.touchpad = controllersArray[arrayPosition++];
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_106 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_107 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_106);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_108 = __this->get_controllersArray_24();
		int32_t L_109 = V_0;
		int32_t L_110 = L_109;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)1));
		int32_t L_111 = L_110;
		float L_112 = (L_108)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_111));
		L_107->set_touchpad_12(L_112);
		// newControllerData.touchpadX = controllersArray[arrayPosition++];
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_113 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_114 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_113);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_115 = __this->get_controllersArray_24();
		int32_t L_116 = V_0;
		int32_t L_117 = L_116;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)1));
		int32_t L_118 = L_117;
		float L_119 = (L_115)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_118));
		L_114->set_touchpadX_13(L_119);
		// newControllerData.touchpadY = controllersArray[arrayPosition++];
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_120 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_121 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_120);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_122 = __this->get_controllersArray_24();
		int32_t L_123 = V_0;
		int32_t L_124 = L_123;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)1));
		int32_t L_125 = L_124;
		float L_126 = (L_122)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_125));
		L_121->set_touchpadY_14(L_126);
		// newControllerData.buttonA = controllersArray[arrayPosition++];
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_127 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_128 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_127);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_129 = __this->get_controllersArray_24();
		int32_t L_130 = V_0;
		int32_t L_131 = L_130;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)1));
		int32_t L_132 = L_131;
		float L_133 = (L_129)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_132));
		L_128->set_buttonA_15(L_133);
		// newControllerData.buttonB = controllersArray[arrayPosition++];
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_134 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_135 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_134);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_136 = __this->get_controllersArray_24();
		int32_t L_137 = V_0;
		int32_t L_138 = L_137;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_138, (int32_t)1));
		int32_t L_139 = L_138;
		float L_140 = (L_136)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_139));
		L_135->set_buttonB_16(L_140);
		// if (controllersArray[arrayPosition] == 1)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_141 = __this->get_controllersArray_24();
		int32_t L_142 = V_0;
		int32_t L_143 = L_142;
		float L_144 = (L_141)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_143));
		if ((!(((float)L_144) == ((float)(1.0f)))))
		{
			goto IL_025d;
		}
	}
	{
		// controllersArray[arrayPosition++] = 2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_145 = __this->get_controllersArray_24();
		int32_t L_146 = V_0;
		int32_t L_147 = L_146;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_147, (int32_t)1));
		(L_145)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_147), (float)(2.0f));
		// newControllerData.gripPosition = new Vector3(controllersArray[arrayPosition++], controllersArray[arrayPosition++], controllersArray[arrayPosition++]);
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_148 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_149 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_148);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_150 = __this->get_controllersArray_24();
		int32_t L_151 = V_0;
		int32_t L_152 = L_151;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)1));
		int32_t L_153 = L_152;
		float L_154 = (L_150)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_153));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_155 = __this->get_controllersArray_24();
		int32_t L_156 = V_0;
		int32_t L_157 = L_156;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_157, (int32_t)1));
		int32_t L_158 = L_157;
		float L_159 = (L_155)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_158));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_160 = __this->get_controllersArray_24();
		int32_t L_161 = V_0;
		int32_t L_162 = L_161;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_162, (int32_t)1));
		int32_t L_163 = L_162;
		float L_164 = (L_160)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_163));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_165;
		memset((&L_165), 0, sizeof(L_165));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_165), L_154, L_159, L_164, /*hidden argument*/NULL);
		L_149->set_gripPosition_5(L_165);
		// newControllerData.gripRotation = new Quaternion(controllersArray[arrayPosition++], controllersArray[arrayPosition++], controllersArray[arrayPosition++],
		//     controllersArray[arrayPosition++]);
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_166 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_167 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_166);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_168 = __this->get_controllersArray_24();
		int32_t L_169 = V_0;
		int32_t L_170 = L_169;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_170, (int32_t)1));
		int32_t L_171 = L_170;
		float L_172 = (L_168)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_171));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_173 = __this->get_controllersArray_24();
		int32_t L_174 = V_0;
		int32_t L_175 = L_174;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_175, (int32_t)1));
		int32_t L_176 = L_175;
		float L_177 = (L_173)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_176));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_178 = __this->get_controllersArray_24();
		int32_t L_179 = V_0;
		int32_t L_180 = L_179;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_180, (int32_t)1));
		int32_t L_181 = L_180;
		float L_182 = (L_178)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_181));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_183 = __this->get_controllersArray_24();
		int32_t L_184 = V_0;
		int32_t L_185 = L_184;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_185, (int32_t)1));
		int32_t L_186 = L_185;
		float L_187 = (L_183)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_186));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_188;
		memset((&L_188), 0, sizeof(L_188));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_188), L_172, L_177, L_182, L_187, /*hidden argument*/NULL);
		L_167->set_gripRotation_6(L_188);
		// Quaternion rotationOffset = Quaternion.Inverse(newControllerData.rotation);
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_189 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_190 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_189);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_191 = L_190->get_rotation_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_192;
		L_192 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_191, /*hidden argument*/NULL);
		V_2 = L_192;
		// newControllerData.gripPosition = rotationOffset * (newControllerData.gripPosition - newControllerData.position);
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_193 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_194 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_193);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_195 = V_2;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_196 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_197 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_196);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_198 = L_197->get_gripPosition_5();
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_199 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_200 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_199);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_201 = L_200->get_position_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_202;
		L_202 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_198, L_201, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_203;
		L_203 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_195, L_202, /*hidden argument*/NULL);
		L_194->set_gripPosition_5(L_203);
		// newControllerData.gripRotation = rotationOffset * newControllerData.gripRotation;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_204 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_205 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_204);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_206 = V_2;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 ** L_207 = ___newControllerData1;
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_208 = *((WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 **)L_207);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_209 = L_208->get_gripRotation_6();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_210;
		L_210 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_206, L_209, /*hidden argument*/NULL);
		L_205->set_gripRotation_6(L_210);
	}

IL_025d:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean WebXR.WebXRSubsystem::GetHandFromHandsArray(System.Int32,WebXR.WebXRHandData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_GetHandFromHandsArray_m052A2C0FE5BFA262407F2D20472F7A8FAB6770E2 (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, int32_t ___handIndex0, WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE ** ___handObject1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int arrayPosition = handIndex * 205;
		int32_t L_0 = ___handIndex0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)205)));
		// int frameNumber = (int)handsArray[arrayPosition++];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = __this->get_handsArray_25();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		int32_t L_4 = L_3;
		float L_5 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_5);
		// if (handObject.frame == frameNumber)
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE ** L_6 = ___handObject1;
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_7 = *((WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE **)L_6);
		int32_t L_8 = L_7->get_frame_0();
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0022;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0022:
	{
		// handObject.frame = frameNumber;
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE ** L_10 = ___handObject1;
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_11 = *((WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE **)L_10);
		int32_t L_12 = V_1;
		L_11->set_frame_0(L_12);
		// handObject.enabled = handsArray[arrayPosition++] != 0;
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE ** L_13 = ___handObject1;
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_14 = *((WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE **)L_13);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_15 = __this->get_handsArray_25();
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_18 = L_17;
		float L_19 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		L_14->set_enabled_1((bool)((((int32_t)((((float)L_19) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		// handObject.hand = (int)handsArray[arrayPosition++];
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE ** L_20 = ___handObject1;
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_21 = *((WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE **)L_20);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_22 = __this->get_handsArray_25();
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		int32_t L_25 = L_24;
		float L_26 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		L_21->set_hand_2(il2cpp_codegen_cast_double_to_int<int32_t>(L_26));
		// handObject.trigger = handsArray[arrayPosition++];
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE ** L_27 = ___handObject1;
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_28 = *((WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE **)L_27);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_29 = __this->get_handsArray_25();
		int32_t L_30 = V_0;
		int32_t L_31 = L_30;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		int32_t L_32 = L_31;
		float L_33 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		L_28->set_trigger_3(L_33);
		// handObject.squeeze = handsArray[arrayPosition++];
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE ** L_34 = ___handObject1;
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_35 = *((WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE **)L_34);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_36 = __this->get_handsArray_25();
		int32_t L_37 = V_0;
		int32_t L_38 = L_37;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		int32_t L_39 = L_38;
		float L_40 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		L_35->set_squeeze_4(L_40);
		// if (!handObject.enabled)
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE ** L_41 = ___handObject1;
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_42 = *((WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE **)L_41);
		bool L_43 = L_42->get_enabled_1();
		if (L_43)
		{
			goto IL_008c;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_008c:
	{
		// for (int i = 0; i <= (int)WebXRHandJoint.pinky_finger_tip; i++)
		V_2 = 0;
		goto IL_0137;
	}

IL_0093:
	{
		// handObject.joints[i].position = new Vector3(handsArray[arrayPosition++], handsArray[arrayPosition++], handsArray[arrayPosition++]);
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE ** L_44 = ___handObject1;
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_45 = *((WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE **)L_44);
		WebXRJointDataU5BU5D_tE01BEDB0F1BF89E4192E3F04E7BDA90EEE7C7A76* L_46 = L_45->get_joints_5();
		int32_t L_47 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_48 = __this->get_handsArray_25();
		int32_t L_49 = V_0;
		int32_t L_50 = L_49;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		int32_t L_51 = L_50;
		float L_52 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_53 = __this->get_handsArray_25();
		int32_t L_54 = V_0;
		int32_t L_55 = L_54;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
		int32_t L_56 = L_55;
		float L_57 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_58 = __this->get_handsArray_25();
		int32_t L_59 = V_0;
		int32_t L_60 = L_59;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
		int32_t L_61 = L_60;
		float L_62 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_63), L_52, L_57, L_62, /*hidden argument*/NULL);
		((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->set_position_0(L_63);
		// handObject.joints[i].rotation = new Quaternion(handsArray[arrayPosition++], handsArray[arrayPosition++], handsArray[arrayPosition++],
		//     handsArray[arrayPosition++]);
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE ** L_64 = ___handObject1;
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_65 = *((WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE **)L_64);
		WebXRJointDataU5BU5D_tE01BEDB0F1BF89E4192E3F04E7BDA90EEE7C7A76* L_66 = L_65->get_joints_5();
		int32_t L_67 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_68 = __this->get_handsArray_25();
		int32_t L_69 = V_0;
		int32_t L_70 = L_69;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
		int32_t L_71 = L_70;
		float L_72 = (L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_71));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_73 = __this->get_handsArray_25();
		int32_t L_74 = V_0;
		int32_t L_75 = L_74;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
		int32_t L_76 = L_75;
		float L_77 = (L_73)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_78 = __this->get_handsArray_25();
		int32_t L_79 = V_0;
		int32_t L_80 = L_79;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1));
		int32_t L_81 = L_80;
		float L_82 = (L_78)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_83 = __this->get_handsArray_25();
		int32_t L_84 = V_0;
		int32_t L_85 = L_84;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
		int32_t L_86 = L_85;
		float L_87 = (L_83)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_86));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_88;
		memset((&L_88), 0, sizeof(L_88));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_88), L_72, L_77, L_82, L_87, /*hidden argument*/NULL);
		((L_66)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_67)))->set_rotation_1(L_88);
		// handObject.joints[i].radius = handsArray[arrayPosition++];
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE ** L_89 = ___handObject1;
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_90 = *((WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE **)L_89);
		WebXRJointDataU5BU5D_tE01BEDB0F1BF89E4192E3F04E7BDA90EEE7C7A76* L_91 = L_90->get_joints_5();
		int32_t L_92 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_93 = __this->get_handsArray_25();
		int32_t L_94 = V_0;
		int32_t L_95 = L_94;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
		int32_t L_96 = L_95;
		float L_97 = (L_93)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_96));
		((L_91)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_92)))->set_radius_2(L_97);
		// for (int i = 0; i <= (int)WebXRHandJoint.pinky_finger_tip; i++)
		int32_t L_98 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
	}

IL_0137:
	{
		// for (int i = 0; i <= (int)WebXRHandJoint.pinky_finger_tip; i++)
		int32_t L_99 = V_2;
		if ((((int32_t)L_99) <= ((int32_t)((int32_t)24))))
		{
			goto IL_0093;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean WebXR.WebXRSubsystem::GetHitTestPoseFromViewerHitTestPoseArray(WebXR.WebXRHitPoseData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_GetHitTestPoseFromViewerHitTestPoseArray_m3DB573C079E332FB7FA88467F05E921F39CDF2BE (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 ** ___hitPoseData0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int arrayPosition = 0;
		V_0 = 0;
		// int frameNumber = (int)viewerHitTestPoseArray[arrayPosition++];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = __this->get_viewerHitTestPoseArray_26();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		int32_t L_3 = L_2;
		float L_4 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_4);
		// if (hitPoseData.frame == frameNumber)
		WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 ** L_5 = ___hitPoseData0;
		WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 * L_6 = *((WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 **)L_5);
		int32_t L_7 = L_6->get_frame_0();
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_001c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001c:
	{
		// hitPoseData.frame = frameNumber;
		WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 ** L_9 = ___hitPoseData0;
		WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 * L_10 = *((WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 **)L_9);
		int32_t L_11 = V_1;
		L_10->set_frame_0(L_11);
		// hitPoseData.available = viewerHitTestPoseArray[arrayPosition++] != 0;
		WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 ** L_12 = ___hitPoseData0;
		WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 * L_13 = *((WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 **)L_12);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = __this->get_viewerHitTestPoseArray_26();
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		int32_t L_17 = L_16;
		float L_18 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		L_13->set_available_1((bool)((((int32_t)((((float)L_18) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		// if (!hitPoseData.available)
		WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 ** L_19 = ___hitPoseData0;
		WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 * L_20 = *((WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 **)L_19);
		bool L_21 = L_20->get_available_1();
		if (L_21)
		{
			goto IL_004c;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_004c:
	{
		// hitPoseData.position = new Vector3(viewerHitTestPoseArray[arrayPosition++], viewerHitTestPoseArray[arrayPosition++],
		//     viewerHitTestPoseArray[arrayPosition++]);
		WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 ** L_22 = ___hitPoseData0;
		WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 * L_23 = *((WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 **)L_22);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_24 = __this->get_viewerHitTestPoseArray_26();
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		int32_t L_27 = L_26;
		float L_28 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_29 = __this->get_viewerHitTestPoseArray_26();
		int32_t L_30 = V_0;
		int32_t L_31 = L_30;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		int32_t L_32 = L_31;
		float L_33 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_34 = __this->get_viewerHitTestPoseArray_26();
		int32_t L_35 = V_0;
		int32_t L_36 = L_35;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		int32_t L_37 = L_36;
		float L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_39), L_28, L_33, L_38, /*hidden argument*/NULL);
		L_23->set_position_2(L_39);
		// hitPoseData.rotation = new Quaternion(viewerHitTestPoseArray[arrayPosition++], viewerHitTestPoseArray[arrayPosition++],
		//     viewerHitTestPoseArray[arrayPosition++], viewerHitTestPoseArray[arrayPosition++]);
		WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 ** L_40 = ___hitPoseData0;
		WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 * L_41 = *((WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 **)L_40);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_42 = __this->get_viewerHitTestPoseArray_26();
		int32_t L_43 = V_0;
		int32_t L_44 = L_43;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		int32_t L_45 = L_44;
		float L_46 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47 = __this->get_viewerHitTestPoseArray_26();
		int32_t L_48 = V_0;
		int32_t L_49 = L_48;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
		int32_t L_50 = L_49;
		float L_51 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_52 = __this->get_viewerHitTestPoseArray_26();
		int32_t L_53 = V_0;
		int32_t L_54 = L_53;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
		int32_t L_55 = L_54;
		float L_56 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_57 = __this->get_viewerHitTestPoseArray_26();
		int32_t L_58 = V_0;
		int32_t L_59 = L_58;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
		int32_t L_60 = L_59;
		float L_61 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_62;
		memset((&L_62), 0, sizeof(L_62));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_62), L_46, L_51, L_56, L_61, /*hidden argument*/NULL);
		L_41->set_rotation_3(L_62);
		// return true;
		return (bool)1;
	}
}
// System.Void WebXR.WebXRSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem__ctor_mE6F88C63640FCAE989C39AE007F69B06A0EDE9BC (WebXRSubsystem_t21C2C5721136843137DBC600C25B271F56047EF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Subsystem_1__ctor_m9224C2EEFDB00429F35D5BDA752C2D2F8FA44D2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal WebXRState xrState = WebXRState.NORMAL;
		__this->set_xrState_3(2);
		// private int viewsCount = 1;
		__this->set_viewsCount_4(1);
		// private bool reportedXRStateSwitch = true;
		__this->set_reportedXRStateSwitch_7((bool)1);
		// private Quaternion leftRotation = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0;
		L_0 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		__this->set_leftRotation_21(L_0);
		// private Quaternion rightRotation = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		__this->set_rightRotation_22(L_1);
		// float[] sharedArray = new float[(2 * 16) + (2 * 7)];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)46));
		__this->set_sharedArray_23(L_2);
		// float[] controllersArray = new float[2 * 28];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)56));
		__this->set_controllersArray_24(L_3);
		// float[] handsArray = new float[2 * (25 * 8 + 5)];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)410));
		__this->set_handsArray_25(L_4);
		// float[] viewerHitTestPoseArray = new float[9];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		__this->set_viewerHitTestPoseArray_26(L_5);
		// private bool updatedControllersOnEnd = true;
		__this->set_updatedControllersOnEnd_28((bool)1);
		// private WebXRHandData leftHand = new WebXRHandData();
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_6 = (WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE *)il2cpp_codegen_object_new(WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE_il2cpp_TypeInfo_var);
		WebXRHandData__ctor_m999465E053B4589EA723674415F458296F52D544(L_6, /*hidden argument*/NULL);
		__this->set_leftHand_29(L_6);
		// private WebXRHandData rightHand = new WebXRHandData();
		WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * L_7 = (WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE *)il2cpp_codegen_object_new(WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE_il2cpp_TypeInfo_var);
		WebXRHandData__ctor_m999465E053B4589EA723674415F458296F52D544(L_7, /*hidden argument*/NULL);
		__this->set_rightHand_30(L_7);
		// private WebXRControllerData controller1 = new WebXRControllerData();
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_8 = (WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 *)il2cpp_codegen_object_new(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606_il2cpp_TypeInfo_var);
		WebXRControllerData__ctor_m8AECA8B8E568D7F42AF05777A6F7A5C646891C55(L_8, /*hidden argument*/NULL);
		__this->set_controller1_31(L_8);
		// private WebXRControllerData controller2 = new WebXRControllerData();
		WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * L_9 = (WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 *)il2cpp_codegen_object_new(WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606_il2cpp_TypeInfo_var);
		WebXRControllerData__ctor_m8AECA8B8E568D7F42AF05777A6F7A5C646891C55(L_9, /*hidden argument*/NULL);
		__this->set_controller2_32(L_9);
		// private WebXRHitPoseData viewerHitTestPose = new WebXRHitPoseData();
		WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 * L_10 = (WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 *)il2cpp_codegen_object_new(WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587_il2cpp_TypeInfo_var);
		WebXRHitPoseData__ctor_m96631533F5A08773321918A42C3E113BDE4C82BE(L_10, /*hidden argument*/NULL);
		__this->set_viewerHitTestPose_33(L_10);
		Subsystem_1__ctor_m9224C2EEFDB00429F35D5BDA752C2D2F8FA44D2C(__this, /*hidden argument*/Subsystem_1__ctor_m9224C2EEFDB00429F35D5BDA752C2D2F8FA44D2C_RuntimeMethod_var);
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
// System.Void WebXR.WebXRSubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystemDescriptor__ctor_m878E85732A9EC0F90E39B1A97C5ECDAE0DE4D4FB (WebXRSubsystemDescriptor_t49D846DE8AA1635F1086FFDF794C244C7E314A71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptor_1__ctor_m91CAA0F47FB4E876A0CAAD65E9F06C00FB029143_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemDescriptor_1__ctor_m91CAA0F47FB4E876A0CAAD65E9F06C00FB029143(__this, /*hidden argument*/SubsystemDescriptor_1__ctor_m91CAA0F47FB4E876A0CAAD65E9F06C00FB029143_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebXR.WebXRSubsystem/ControllerUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate__ctor_m5B5C91658AF1C2E75F59EA686099C186857889D5 (ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WebXR.WebXRSubsystem/ControllerUpdate::Invoke(WebXR.WebXRControllerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate_Invoke_m47C5A116DF9BF6CADB431CA95350B25CC19FF1F9 (ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * __this, WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * ___controllerData0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___controllerData0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___controllerData0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___controllerData0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___controllerData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___controllerData0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___controllerData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___controllerData0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * >::Invoke(targetMethod, targetThis, ___controllerData0);
					else
						GenericVirtActionInvoker1< WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * >::Invoke(targetMethod, targetThis, ___controllerData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___controllerData0);
					else
						VirtActionInvoker1< WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___controllerData0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___controllerData0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___controllerData0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult WebXR.WebXRSubsystem/ControllerUpdate::BeginInvoke(WebXR.WebXRControllerData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ControllerUpdate_BeginInvoke_m869E6C4BAC51D5E64DB4CEFD39DD232729FCCC8B (ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * __this, WebXRControllerData_tEEEC650285371F95A2101EBD7929AE484B7AF606 * ___controllerData0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___controllerData0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void WebXR.WebXRSubsystem/ControllerUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate_EndInvoke_mA808752C3F3B356DFE5287D070D99A9BA0F326AF (ControllerUpdate_tE4153754D29D1DEDD587610A89CB6CDEB813A8AF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EndXREvent_tAEF82376310EE655EF1E985071F2D45794196F5F (EndXREvent_tAEF82376310EE655EF1E985071F2D45794196F5F * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void WebXR.WebXRSubsystem/EndXREvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndXREvent__ctor_mD89719B066CD1121CDE3E3A37A352DDFC9FD43ED (EndXREvent_tAEF82376310EE655EF1E985071F2D45794196F5F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WebXR.WebXRSubsystem/EndXREvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndXREvent_Invoke_m106859F89CA5023D922F235C4F6CBB5E99140318 (EndXREvent_tAEF82376310EE655EF1E985071F2D45794196F5F * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult WebXR.WebXRSubsystem/EndXREvent::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EndXREvent_BeginInvoke_m05FDCDB460C73A68A7ED29BCFBECF6628ECFFDB1 (EndXREvent_tAEF82376310EE655EF1E985071F2D45794196F5F * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void WebXR.WebXRSubsystem/EndXREvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndXREvent_EndInvoke_mE2DCC53EECFD90A6FC8A1F1F67F4F4A369DC655B (EndXREvent_tAEF82376310EE655EF1E985071F2D45794196F5F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void WebXR.WebXRSubsystem/HandUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandUpdate__ctor_m4921443A26826EACCE01DB27B24592E2809422EB (HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WebXR.WebXRSubsystem/HandUpdate::Invoke(WebXR.WebXRHandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandUpdate_Invoke_mDC8A5CC9ABD536600DF155F273840341706C8F18 (HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * __this, WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * ___handData0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handData0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___handData0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___handData0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___handData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___handData0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___handData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handData0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * >::Invoke(targetMethod, targetThis, ___handData0);
					else
						GenericVirtActionInvoker1< WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * >::Invoke(targetMethod, targetThis, ___handData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___handData0);
					else
						VirtActionInvoker1< WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___handData0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___handData0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___handData0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult WebXR.WebXRSubsystem/HandUpdate::BeginInvoke(WebXR.WebXRHandData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandUpdate_BeginInvoke_m9E8310676223C0AC00FA2BDE36FE22A728530292 (HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * __this, WebXRHandData_tAD366BF6A2D66C6601596D953F37737D7A997AAE * ___handData0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___handData0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void WebXR.WebXRSubsystem/HandUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandUpdate_EndInvoke_m5B7BD98CBDA63C78354FD9035141B2DD827CD12A (HandUpdate_t440ED6DBFFB500E2956576BE23E636D8DEF0258C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD (HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___leftProjectionMatrix0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rightProjectionMatrix1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___leftRotation2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rightRotation3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftPosition4, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightPosition5, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___leftProjectionMatrix0, ___rightProjectionMatrix1, ___leftRotation2, ___rightRotation3, ___leftPosition4, ___rightPosition5);

}
// System.Void WebXR.WebXRSubsystem/HeadsetUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate__ctor_m70D77D1665A04E387C3DAE1ED1EE32D156BBC2AF (HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WebXR.WebXRSubsystem/HeadsetUpdate::Invoke(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Quaternion,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate_Invoke_mB71F7BA6F45BA0BD17F09146CBB07D8B18526838 (HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___leftProjectionMatrix0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rightProjectionMatrix1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___leftRotation2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rightRotation3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftPosition4, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightPosition5, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 6)
			{
				// open
				typedef void (*FunctionPointerType) (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___leftProjectionMatrix0, ___rightProjectionMatrix1, ___leftRotation2, ___rightRotation3, ___leftPosition4, ___rightPosition5, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___leftProjectionMatrix0, ___rightProjectionMatrix1, ___leftRotation2, ___rightRotation3, ___leftPosition4, ___rightPosition5, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker6< Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis, ___leftProjectionMatrix0, ___rightProjectionMatrix1, ___leftRotation2, ___rightRotation3, ___leftPosition4, ___rightPosition5);
					else
						GenericVirtActionInvoker6< Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis, ___leftProjectionMatrix0, ___rightProjectionMatrix1, ___leftRotation2, ___rightRotation3, ___leftPosition4, ___rightPosition5);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker6< Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___leftProjectionMatrix0, ___rightProjectionMatrix1, ___leftRotation2, ___rightRotation3, ___leftPosition4, ___rightPosition5);
					else
						VirtActionInvoker6< Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___leftProjectionMatrix0, ___rightProjectionMatrix1, ___leftRotation2, ___rightRotation3, ___leftPosition4, ___rightPosition5);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___leftProjectionMatrix0) - 1), ___rightProjectionMatrix1, ___leftRotation2, ___rightRotation3, ___leftPosition4, ___rightPosition5, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___leftProjectionMatrix0, ___rightProjectionMatrix1, ___leftRotation2, ___rightRotation3, ___leftPosition4, ___rightPosition5, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult WebXR.WebXRSubsystem/HeadsetUpdate::BeginInvoke(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Quaternion,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HeadsetUpdate_BeginInvoke_mF8986B45DC4EFF593257BCDE3B64CC3ED66ED632 (HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___leftProjectionMatrix0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rightProjectionMatrix1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___leftRotation2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rightRotation3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftPosition4, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightPosition5, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback6, RuntimeObject * ___object7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = Box(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_il2cpp_TypeInfo_var, &___leftProjectionMatrix0);
	__d_args[1] = Box(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_il2cpp_TypeInfo_var, &___rightProjectionMatrix1);
	__d_args[2] = Box(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var, &___leftRotation2);
	__d_args[3] = Box(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var, &___rightRotation3);
	__d_args[4] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___leftPosition4);
	__d_args[5] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___rightPosition5);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);;
}
// System.Void WebXR.WebXRSubsystem/HeadsetUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate_EndInvoke_m0787181116268AD95CDD06B46AB27BE2E6648221 (HeadsetUpdate_t579F908DC572BBBEC05234BD089604310ECF05AD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void WebXR.WebXRSubsystem/HitTestUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitTestUpdate__ctor_m48D09212BC735B5F67C80727CBA841F40645ACC3 (HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WebXR.WebXRSubsystem/HitTestUpdate::Invoke(WebXR.WebXRHitPoseData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitTestUpdate_Invoke_m63B55E422D090AA1804F049CE3A3A39DBB6CC689 (HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * __this, WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 * ___hitPoseData0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___hitPoseData0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___hitPoseData0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___hitPoseData0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___hitPoseData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___hitPoseData0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___hitPoseData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___hitPoseData0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 * >::Invoke(targetMethod, targetThis, ___hitPoseData0);
					else
						GenericVirtActionInvoker1< WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 * >::Invoke(targetMethod, targetThis, ___hitPoseData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___hitPoseData0);
					else
						VirtActionInvoker1< WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___hitPoseData0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___hitPoseData0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___hitPoseData0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult WebXR.WebXRSubsystem/HitTestUpdate::BeginInvoke(WebXR.WebXRHitPoseData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HitTestUpdate_BeginInvoke_m15FEE076BB7D38DE51BA431959B7BF17CB13E44E (HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * __this, WebXRHitPoseData_tDD9AC296541BF05DC399C6AD26D553F240735587 * ___hitPoseData0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___hitPoseData0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void WebXR.WebXRSubsystem/HitTestUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitTestUpdate_EndInvoke_m16C58272E711F9647FB02973D412E58032CF15AE (HitTestUpdate_t5074C69FF6A1BCB43D7BB63AD7A7DC01CDA87F35 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_InputProfilesEvent_t88DDB46B55E92BBBC75C03C1EDBD7AB266F240A6 (InputProfilesEvent_t88DDB46B55E92BBBC75C03C1EDBD7AB266F240A6 * __this, String_t* ___json0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___json0' to native representation
	char* ____json0_marshaled = NULL;
	____json0_marshaled = il2cpp_codegen_marshal_string(___json0);

	// Native function invocation
	il2cppPInvokeFunc(____json0_marshaled);

	// Marshaling cleanup of parameter '___json0' native representation
	il2cpp_codegen_marshal_free(____json0_marshaled);
	____json0_marshaled = NULL;

}
// System.Void WebXR.WebXRSubsystem/InputProfilesEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputProfilesEvent__ctor_m7F975C26A400BAE5379C8B8C7A3F4F379144AA64 (InputProfilesEvent_t88DDB46B55E92BBBC75C03C1EDBD7AB266F240A6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WebXR.WebXRSubsystem/InputProfilesEvent::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputProfilesEvent_Invoke_mFA549EE03AD2815D5934DFBC23C3A5D9869751D1 (InputProfilesEvent_t88DDB46B55E92BBBC75C03C1EDBD7AB266F240A6 * __this, String_t* ___json0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___json0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___json0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___json0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___json0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___json0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___json0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___json0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___json0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___json0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___json0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___json0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___json0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___json0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult WebXR.WebXRSubsystem/InputProfilesEvent::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputProfilesEvent_BeginInvoke_m1696532711FBF0F7E42A10ACD214DACDA5BDF217 (InputProfilesEvent_t88DDB46B55E92BBBC75C03C1EDBD7AB266F240A6 * __this, String_t* ___json0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___json0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void WebXR.WebXRSubsystem/InputProfilesEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputProfilesEvent_EndInvoke_mA2FDC3ABF2D1FB14F8532BBC747D40E4FDD61B94 (InputProfilesEvent_t88DDB46B55E92BBBC75C03C1EDBD7AB266F240A6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void WebXR.WebXRSubsystem/Native::InitXRSharedArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_InitXRSharedArray_m04832F3924505F264E4CFB9FD36AE30EA995C5E4 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___array0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*);

	// Marshaling of parameter '___array0' to native representation
	float* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<float*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(InitXRSharedArray)(____array0_marshaled);

}
// System.Void WebXR.WebXRSubsystem/Native::InitControllersArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_InitControllersArray_m41766AE9F2ADCBC36EDEA22647DAB1186C940304 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___array0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*);

	// Marshaling of parameter '___array0' to native representation
	float* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<float*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(InitControllersArray)(____array0_marshaled);

}
// System.Void WebXR.WebXRSubsystem/Native::InitHandsArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_InitHandsArray_mC0A30CADA36195DC99C994095D09DAEA265DD125 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___array0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*);

	// Marshaling of parameter '___array0' to native representation
	float* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<float*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(InitHandsArray)(____array0_marshaled);

}
// System.Void WebXR.WebXRSubsystem/Native::InitViewerHitTestPoseArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_InitViewerHitTestPoseArray_mE80389001FFEC9A392EC3405A25BF25BC008246C (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___array0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*);

	// Marshaling of parameter '___array0' to native representation
	float* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<float*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(InitViewerHitTestPoseArray)(____array0_marshaled);

}
// System.Void WebXR.WebXRSubsystem/Native::ToggleAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_ToggleAR_mC629D582E399FC953515A0C94A1931A823026607 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ToggleAR)();

}
// System.Void WebXR.WebXRSubsystem/Native::ToggleVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_ToggleVR_m47624AA1B8514DB8F4CEA9C46805CF8BDD1E7C1C (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ToggleVR)();

}
// System.Void WebXR.WebXRSubsystem/Native::ToggleViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_ToggleViewerHitTest_m8C6B83AAFD86E944657908F8A1C0699812B8F05C (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ToggleViewerHitTest)();

}
// System.Void WebXR.WebXRSubsystem/Native::ControllerPulse(System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_ControllerPulse_m7E40FB5A6FC2F3BA6A02D10EB0C10AB1BB222195 (int32_t ___controller0, float ___intensity1, float ___duration2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, float, float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ControllerPulse)(___controller0, ___intensity1, ___duration2);

}
// System.Void WebXR.WebXRSubsystem/Native::SetWebXREvents(WebXR.WebXRSubsystem/StartXREvent,WebXR.WebXRSubsystem/StartXREvent,WebXR.WebXRSubsystem/VisibilityChangeEvent,WebXR.WebXRSubsystem/EndXREvent,WebXR.WebXRSubsystem/XRCapabilitiesEvent,WebXR.WebXRSubsystem/InputProfilesEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_SetWebXREvents_mCC3698663E68C8C630E4030E82DDD6AB9D94CA0A (StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA * ___on_start_ar0, StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA * ___on_start_vr1, VisibilityChangeEvent_t577FC56D660C998476CA4FFB4EB1E7086216016D * ___on_visibility_change2, EndXREvent_tAEF82376310EE655EF1E985071F2D45794196F5F * ___on_end_xr3, XRCapabilitiesEvent_t3F5640F3A08933111CC7FE5B43BCE122803DCF7F * ___on_xr_capabilities4, InputProfilesEvent_t88DDB46B55E92BBBC75C03C1EDBD7AB266F240A6 * ___on_input_profiles5, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___on_start_ar0' to native representation
	Il2CppMethodPointer ____on_start_ar0_marshaled = NULL;
	____on_start_ar0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___on_start_ar0));

	// Marshaling of parameter '___on_start_vr1' to native representation
	Il2CppMethodPointer ____on_start_vr1_marshaled = NULL;
	____on_start_vr1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___on_start_vr1));

	// Marshaling of parameter '___on_visibility_change2' to native representation
	Il2CppMethodPointer ____on_visibility_change2_marshaled = NULL;
	____on_visibility_change2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___on_visibility_change2));

	// Marshaling of parameter '___on_end_xr3' to native representation
	Il2CppMethodPointer ____on_end_xr3_marshaled = NULL;
	____on_end_xr3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___on_end_xr3));

	// Marshaling of parameter '___on_xr_capabilities4' to native representation
	Il2CppMethodPointer ____on_xr_capabilities4_marshaled = NULL;
	____on_xr_capabilities4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___on_xr_capabilities4));

	// Marshaling of parameter '___on_input_profiles5' to native representation
	Il2CppMethodPointer ____on_input_profiles5_marshaled = NULL;
	____on_input_profiles5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___on_input_profiles5));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SetWebXREvents)(____on_start_ar0_marshaled, ____on_start_vr1_marshaled, ____on_visibility_change2_marshaled, ____on_end_xr3_marshaled, ____on_xr_capabilities4_marshaled, ____on_input_profiles5_marshaled);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA (StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA * __this, int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, float, float, float, float, float, float, float, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8);

}
// System.Void WebXR.WebXRSubsystem/StartXREvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartXREvent__ctor_m31BB570FD0026812EE1469F08DA63839225D5ECE (StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WebXR.WebXRSubsystem/StartXREvent::Invoke(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartXREvent_Invoke_mD830B3FCFFB72BC762ADE7B63B31FB1FBCE6553E (StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA * __this, int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 9)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, float, float, float, float, float, float, float, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, float, float, float, float, float, float, float, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker9< int32_t, float, float, float, float, float, float, float, float >::Invoke(targetMethod, targetThis, ___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8);
					else
						GenericVirtActionInvoker9< int32_t, float, float, float, float, float, float, float, float >::Invoke(targetMethod, targetThis, ___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker9< int32_t, float, float, float, float, float, float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8);
					else
						VirtActionInvoker9< int32_t, float, float, float, float, float, float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, float, float, float, float, float, float, float, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8, targetMethod);
			}
		}
	}
}
// System.IAsyncResult WebXR.WebXRSubsystem/StartXREvent::BeginInvoke(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartXREvent_BeginInvoke_m0161D4D0C6A07F7CA6F52799374651B6CD339867 (StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA * __this, int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback9, RuntimeObject * ___object10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[10] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___viewsCount0);
	__d_args[1] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___left_x1);
	__d_args[2] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___left_y2);
	__d_args[3] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___left_w3);
	__d_args[4] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___left_h4);
	__d_args[5] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___right_x5);
	__d_args[6] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___right_y6);
	__d_args[7] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___right_w7);
	__d_args[8] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___right_h8);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback9, (RuntimeObject*)___object10);;
}
// System.Void WebXR.WebXRSubsystem/StartXREvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartXREvent_EndInvoke_m55B337BE484747E111941C93897D94F2CBF574EF (StartXREvent_t86858B2EE21A0130648FD5815AC4C43CB25A2CAA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 (VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___visibilityState0);

}
// System.Void WebXR.WebXRSubsystem/VisibilityChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChange__ctor_mC33F0D95FAAAEA1DC3A910C8893DB8C88539A1B0 (VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WebXR.WebXRSubsystem/VisibilityChange::Invoke(WebXR.WebXRVisibilityState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChange_Invoke_m13E184A2941E9D486D5A2CCA9FECB6B651AD787E (VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___visibilityState0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___visibilityState0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___visibilityState0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___visibilityState0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___visibilityState0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___visibilityState0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___visibilityState0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___visibilityState0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult WebXR.WebXRSubsystem/VisibilityChange::BeginInvoke(WebXR.WebXRVisibilityState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisibilityChange_BeginInvoke_mC03D05D254F86244736757D4C6C4C15179C809CB (VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * __this, int32_t ___visibilityState0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRVisibilityState_t10AEE1924E4E1ABDC8DCDC2238AD9F60D0F74686_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(WebXRVisibilityState_t10AEE1924E4E1ABDC8DCDC2238AD9F60D0F74686_il2cpp_TypeInfo_var, &___visibilityState0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void WebXR.WebXRSubsystem/VisibilityChange::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChange_EndInvoke_m0AD5A5FDE5E606CBF825532D031392A41D724BA4 (VisibilityChange_t1FA2103D848C989320C46A27EAF18318E21305D6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_VisibilityChangeEvent_t577FC56D660C998476CA4FFB4EB1E7086216016D (VisibilityChangeEvent_t577FC56D660C998476CA4FFB4EB1E7086216016D * __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___visibilityState0);

}
// System.Void WebXR.WebXRSubsystem/VisibilityChangeEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChangeEvent__ctor_mEED0B21C6518EFF14E8E8663B3259BA8B486BE95 (VisibilityChangeEvent_t577FC56D660C998476CA4FFB4EB1E7086216016D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WebXR.WebXRSubsystem/VisibilityChangeEvent::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChangeEvent_Invoke_m51992CAFF81ABE48E198AAA28AAC0C6A0BBD06D4 (VisibilityChangeEvent_t577FC56D660C998476CA4FFB4EB1E7086216016D * __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___visibilityState0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___visibilityState0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___visibilityState0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___visibilityState0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___visibilityState0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___visibilityState0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___visibilityState0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult WebXR.WebXRSubsystem/VisibilityChangeEvent::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisibilityChangeEvent_BeginInvoke_m96DD1456B8E91B66C3ED52FCBA35DD86D2FCD01E (VisibilityChangeEvent_t577FC56D660C998476CA4FFB4EB1E7086216016D * __this, int32_t ___visibilityState0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___visibilityState0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void WebXR.WebXRSubsystem/VisibilityChangeEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChangeEvent_EndInvoke_m2EC36B2F1E89A92549E8581D4F0136F5E5ABC498 (VisibilityChangeEvent_t577FC56D660C998476CA4FFB4EB1E7086216016D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_XRCapabilitiesEvent_t3F5640F3A08933111CC7FE5B43BCE122803DCF7F (XRCapabilitiesEvent_t3F5640F3A08933111CC7FE5B43BCE122803DCF7F * __this, bool ___isARSupported0, bool ___isVRSupported1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___isARSupported0), static_cast<int32_t>(___isVRSupported1));

}
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesEvent__ctor_m57D26C946399C393C29345FA518D87488A6B86D5 (XRCapabilitiesEvent_t3F5640F3A08933111CC7FE5B43BCE122803DCF7F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesEvent::Invoke(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesEvent_Invoke_m15FEEA337F1DE6FF7D3B60BFCE4243A48957B38A (XRCapabilitiesEvent_t3F5640F3A08933111CC7FE5B43BCE122803DCF7F * __this, bool ___isARSupported0, bool ___isVRSupported1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (bool, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___isARSupported0, ___isVRSupported1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___isARSupported0, ___isVRSupported1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< bool, bool >::Invoke(targetMethod, targetThis, ___isARSupported0, ___isVRSupported1);
					else
						GenericVirtActionInvoker2< bool, bool >::Invoke(targetMethod, targetThis, ___isARSupported0, ___isVRSupported1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< bool, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___isARSupported0, ___isVRSupported1);
					else
						VirtActionInvoker2< bool, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___isARSupported0, ___isVRSupported1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___isARSupported0, ___isVRSupported1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult WebXR.WebXRSubsystem/XRCapabilitiesEvent::BeginInvoke(System.Boolean,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRCapabilitiesEvent_BeginInvoke_m608A12F81D9568101A5372B44D56664EFFE8589D (XRCapabilitiesEvent_t3F5640F3A08933111CC7FE5B43BCE122803DCF7F * __this, bool ___isARSupported0, bool ___isVRSupported1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___isARSupported0);
	__d_args[1] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___isVRSupported1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesEvent_EndInvoke_mF45687F5DD33D3C07C861250A1B06A48A48A8315 (XRCapabilitiesEvent_t3F5640F3A08933111CC7FE5B43BCE122803DCF7F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF (XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * __this, WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5  ___capabilities0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___capabilities0' to native representation
	WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshaled_pinvoke ____capabilities0_marshaled = {};
	WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshal_pinvoke(___capabilities0, ____capabilities0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____capabilities0_marshaled);

	// Marshaling cleanup of parameter '___capabilities0' native representation
	WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_marshal_pinvoke_cleanup(____capabilities0_marshaled);

}
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate__ctor_m82179243E0ABD729AA5632FF105E232FAB341138 (XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesUpdate::Invoke(WebXR.WebXRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate_Invoke_mA6EF652F2201F501B2099F06400913BC5FCBBDC3 (XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * __this, WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5  ___capabilities0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___capabilities0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___capabilities0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5  >::Invoke(targetMethod, targetThis, ___capabilities0);
					else
						GenericVirtActionInvoker1< WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5  >::Invoke(targetMethod, targetThis, ___capabilities0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___capabilities0);
					else
						VirtActionInvoker1< WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___capabilities0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___capabilities0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___capabilities0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult WebXR.WebXRSubsystem/XRCapabilitiesUpdate::BeginInvoke(WebXR.WebXRDisplayCapabilities,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRCapabilitiesUpdate_BeginInvoke_mDB96969DF1DE522F542FA4EF323FCBAC91FEDCF3 (XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * __this, WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5  ___capabilities0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(WebXRDisplayCapabilities_tCED7EB717EE76029D42E8E96ED0A9C1064E030A5_il2cpp_TypeInfo_var, &___capabilities0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate_EndInvoke_mFE217A76995528C11FB0DA36B29AC5CDE76FAF2F (XRCapabilitiesUpdate_tAAD369AE321C8CD5CE2E2E87D93A3B4F587F96DF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD (XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * __this, int32_t ___state0, int32_t ___viewsCount1, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___leftRect2, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rightRect3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___state0, ___viewsCount1, ___leftRect2, ___rightRect3);

}
// System.Void WebXR.WebXRSubsystem/XRChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange__ctor_mE5E1EE6F5AB2F9FB6410C9575B6094966E29E3C3 (XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WebXR.WebXRSubsystem/XRChange::Invoke(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange_Invoke_m0CE326BEE758986F020B1D952BDA978AA7A7DA62 (XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * __this, int32_t ___state0, int32_t ___viewsCount1, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___leftRect2, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rightRect3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, ___viewsCount1, ___leftRect2, ___rightRect3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___viewsCount1, ___leftRect2, ___rightRect3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< int32_t, int32_t, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(targetMethod, targetThis, ___state0, ___viewsCount1, ___leftRect2, ___rightRect3);
					else
						GenericVirtActionInvoker4< int32_t, int32_t, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(targetMethod, targetThis, ___state0, ___viewsCount1, ___leftRect2, ___rightRect3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< int32_t, int32_t, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0, ___viewsCount1, ___leftRect2, ___rightRect3);
					else
						VirtActionInvoker4< int32_t, int32_t, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0, ___viewsCount1, ___leftRect2, ___rightRect3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___state0) - 1), ___viewsCount1, ___leftRect2, ___rightRect3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___viewsCount1, ___leftRect2, ___rightRect3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult WebXR.WebXRSubsystem/XRChange::BeginInvoke(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRChange_BeginInvoke_m024A5D272B36B8C1FFCF58EDB5C9F62F15D447BB (XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * __this, int32_t ___state0, int32_t ___viewsCount1, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___leftRect2, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rightRect3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRState_t4A54A50986B89C88F1AB491420BBD785AE446EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(WebXRState_t4A54A50986B89C88F1AB491420BBD785AE446EF8_il2cpp_TypeInfo_var, &___state0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___viewsCount1);
	__d_args[2] = Box(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_il2cpp_TypeInfo_var, &___leftRect2);
	__d_args[3] = Box(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_il2cpp_TypeInfo_var, &___rightRect3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void WebXR.WebXRSubsystem/XRChange::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange_EndInvoke_m38BF598E08E59C23CB9A8FC1ACE73B45DAD2A0AB (XRChange_t64D2E75B184039F11C9BF18DCDB223B80CC88FCD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebXRController_set_gripRotation_mEE0BDBFC02D71039238A6D9B6D9DF92401ED6976_inline (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion gripRotation { get; private set; } = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___value0;
		__this->set_U3CgripRotationU3Ek__BackingField_28(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebXRController_set_gripPosition_mB4C440FCE6EB76FA9CC7F68F49D8C7171F4E86B2_inline (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 gripPosition { get; private set; } = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CgripPositionU3Ek__BackingField_27(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  WebXRController_get_gripRotation_m1E780C719CEB74434BB64E02C91E8A115F8E9016_inline (WebXRController_t7138D05A6E8EB301AA9D363AF30E8D6AB47571DB * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion gripRotation { get; private set; } = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_U3CgripRotationU3Ek__BackingField_28();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * WebXRManager_get_Instance_m45AD80B206362DE6B312C6A5D39D045DE830A4A1_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WebXRManager Instance { get; private set; }
		WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * L_0 = ((WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * WebXRSettings_get_Instance_m58DCDB1C9960750B6F4518DBA722D92A5B37615A_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		IL2CPP_RUNTIME_CLASS_INIT(WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E_il2cpp_TypeInfo_var);
		WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E * L_0 = ((WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSettings_t21306DEFB09385E29F79CEF781D042B08425961E_il2cpp_TypeInfo_var))->get_instance_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebXRManager_set_Instance_m9301DB440D1AA2843392667B985E6A738F7D0A60_inline (WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WebXRManager Instance { get; private set; }
		WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80 * L_0 = ___value0;
		((WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t23872B6F2628BAB88EB426679AF0A1E1B2F41E80_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_id_m3394B5AEBBE25A1924FD34FC0608DD5AACABBE2C_inline (SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_subsystemImplementationType_mAEAE9A52920C64D2A9C5B6316E30353AFA581AA4_inline (SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_2_get_subsystem_m6033199828EB33992339ED850CA2ACA2A42EB166_gshared_inline (SubsystemLifecycleManager_2_t5C0D2374317678698CB068F42DEF4E33B8E2A900 * __this, const RuntimeMethod* method)
{
	{
		// public TSubsystem subsystem { get; private set; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CsubsystemU3Ek__BackingField_4();
		return (RuntimeObject *)L_0;
	}
}
