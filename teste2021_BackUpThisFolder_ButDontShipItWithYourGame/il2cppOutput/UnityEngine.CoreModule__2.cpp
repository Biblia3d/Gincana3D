﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>
struct Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C;
// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>
struct Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3;
// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>
struct List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Camera/RenderRequest[]
struct RenderRequestU5BU5D_tFE888F219954AB94F31C62B8A20A4AC46AD2B940;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// UnityEngine.Rendering.RenderPipeline
struct RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69;
// UnityEngine.Rendering.RenderPipelineAsset
struct RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.Rendering.SortingGroup
struct SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759;
// System.String
struct String_t;
// UnityEngine.Rendering.SupportedRenderingFeatures
struct SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BuiltinRenderTextureType_t3D56813CAC7C6E4AC3B438039BD1CE7E62FE7C4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral180C5DB7272B54061862DF51C798C0FE1E1AB386;
IL2CPP_EXTERN_C String_t* _stringLiteral40603CB9C3C2F0F007BD4C59CEB195FB17927F5C;
IL2CPP_EXTERN_C String_t* _stringLiteral4C6CE5DF96D354231E70A806FC48C28A97F4E4F6;
IL2CPP_EXTERN_C String_t* _stringLiteralBB994086C18AA022E5A2DA0F304A8D5119EDD397;
IL2CPP_EXTERN_C String_t* _stringLiteralC54E787F785B4E40A3D3688157624B421E8D4B05;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF6C79D8FC0E5B72BBAE2C467B674992253BA2B2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RenderPipeline_InternalRenderWithRequests_mA4E809CF43979778D7F5048F79BF506746E82B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RenderPipeline_InternalRender_mCB77395158F4572F348D8227BA9127ABF1C9C5BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>
struct List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RenderRequestU5BU5D_tFE888F219954AB94F31C62B8A20A4AC46AD2B940* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.Rendering.CameraEventUtils
struct CameraEventUtils_t41C52ADAC2A08060550158F8C0846427133D1721  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.Rendering.OnDemandRendering
struct OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E  : public RuntimeObject
{
};

// UnityEngine.Rendering.RenderPipeline
struct RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69  : public RuntimeObject
{
	// System.Boolean UnityEngine.Rendering.RenderPipeline::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_0;
};

// UnityEngine.Rendering.RenderPipelineManager
struct RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB  : public RuntimeObject
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
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

// UnityEngine.Rendering.ShaderTagId
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Rendering.StencilState
struct StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 
{
	// System.Byte UnityEngine.Rendering.StencilState::m_Enabled
	uint8_t ___m_Enabled_0;
	// System.Byte UnityEngine.Rendering.StencilState::m_ReadMask
	uint8_t ___m_ReadMask_1;
	// System.Byte UnityEngine.Rendering.StencilState::m_WriteMask
	uint8_t ___m_WriteMask_2;
	// System.Byte UnityEngine.Rendering.StencilState::m_Padding
	uint8_t ___m_Padding_3;
	// System.Byte UnityEngine.Rendering.StencilState::m_CompareFunctionFront
	uint8_t ___m_CompareFunctionFront_4;
	// System.Byte UnityEngine.Rendering.StencilState::m_PassOperationFront
	uint8_t ___m_PassOperationFront_5;
	// System.Byte UnityEngine.Rendering.StencilState::m_FailOperationFront
	uint8_t ___m_FailOperationFront_6;
	// System.Byte UnityEngine.Rendering.StencilState::m_ZFailOperationFront
	uint8_t ___m_ZFailOperationFront_7;
	// System.Byte UnityEngine.Rendering.StencilState::m_CompareFunctionBack
	uint8_t ___m_CompareFunctionBack_8;
	// System.Byte UnityEngine.Rendering.StencilState::m_PassOperationBack
	uint8_t ___m_PassOperationBack_9;
	// System.Byte UnityEngine.Rendering.StencilState::m_FailOperationBack
	uint8_t ___m_FailOperationBack_10;
	// System.Byte UnityEngine.Rendering.StencilState::m_ZFailOperationBack
	uint8_t ___m_ZFailOperationBack_11;
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

// UnityEngine.Rendering.BuiltinRenderTextureType
struct BuiltinRenderTextureType_t3D56813CAC7C6E4AC3B438039BD1CE7E62FE7C4E 
{
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___2;
};

// UnityEngine.Rendering.CameraEvent
struct CameraEvent_tAB9B803B9C806EC265ADB328417F41AD0FBD10FE 
{
	// System.Int32 UnityEngine.Rendering.CameraEvent::value__
	int32_t ___value___2;
};

// UnityEngine.Rendering.ColorWriteMask
struct ColorWriteMask_tD91EE58294D13F5BA3716FC0ED700F0ED671CF08 
{
	// System.Int32 UnityEngine.Rendering.ColorWriteMask::value__
	int32_t ___value___2;
};

// UnityEngine.Rendering.CommandBufferExecutionFlags
struct CommandBufferExecutionFlags_t7BFA25B0350A84E1C0B34B2C577B22FF921410FC 
{
	// System.Int32 UnityEngine.Rendering.CommandBufferExecutionFlags::value__
	int32_t ___value___2;
};

// UnityEngine.Rendering.CompareFunction
struct CompareFunction_tF4CB32BA795A16A1488DD63D6CF4DC71B20E1518 
{
	// System.Int32 UnityEngine.Rendering.CompareFunction::value__
	int32_t ___value___2;
};

// UnityEngine.CubemapFace
struct CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B 
{
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
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

// UnityEngine.Rendering.GraphicsDeviceType
struct GraphicsDeviceType_t65150C9055D1BC1E377E894972629BF22BA2CBF5 
{
	// System.Int32 UnityEngine.Rendering.GraphicsDeviceType::value__
	int32_t ___value___2;
};

// UnityEngine.Rendering.IndexFormat
struct IndexFormat_tE699D38323B3B0887DF054EAFF0CF035DF28E2BB 
{
	// System.Int32 UnityEngine.Rendering.IndexFormat::value__
	int32_t ___value___2;
};

// UnityEngine.Rendering.LODParameters
struct LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A 
{
	// System.Int32 UnityEngine.Rendering.LODParameters::m_IsOrthographic
	int32_t ___m_IsOrthographic_0;
	// UnityEngine.Vector3 UnityEngine.Rendering.LODParameters::m_CameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CameraPosition_1;
	// System.Single UnityEngine.Rendering.LODParameters::m_FieldOfView
	float ___m_FieldOfView_2;
	// System.Single UnityEngine.Rendering.LODParameters::m_OrthoSize
	float ___m_OrthoSize_3;
	// System.Int32 UnityEngine.Rendering.LODParameters::m_CameraPixelHeight
	int32_t ___m_CameraPixelHeight_4;
};

// UnityEngine.LightmapBakeType
struct LightmapBakeType_tD6FF28E59BAAD80648796C2835AB8DC0B0F8B232 
{
	// System.Int32 UnityEngine.LightmapBakeType::value__
	int32_t ___value___2;
};

// UnityEngine.LightmapsMode
struct LightmapsMode_tFD829E8DA87775D1630F2CADF2D52C758DDA4EBC 
{
	// System.Int32 UnityEngine.LightmapsMode::value__
	int32_t ___value___2;
};

// UnityEngine.Rendering.MeshUpdateFlags
struct MeshUpdateFlags_tCCD32DF7F112AE37CA85E45959DC6CDF64444DF6 
{
	// System.Int32 UnityEngine.Rendering.MeshUpdateFlags::value__
	int32_t ___value___2;
};

// UnityEngine.MixedLightingMode
struct MixedLightingMode_t6B7F0DC1BB531DDE85B2FF98C8BD122840060061 
{
	// System.Int32 UnityEngine.MixedLightingMode::value__
	int32_t ___value___2;
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

// UnityEngine.Rendering.RenderBufferLoadAction
struct RenderBufferLoadAction_t3333B2CABABAC39DA0CDC25602E5E4FD93C2CB0E 
{
	// System.Int32 UnityEngine.Rendering.RenderBufferLoadAction::value__
	int32_t ___value___2;
};

// UnityEngine.Rendering.RenderBufferStoreAction
struct RenderBufferStoreAction_t87683F22C09634E24A574F21F42037C953A2C8B7 
{
	// System.Int32 UnityEngine.Rendering.RenderBufferStoreAction::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Rendering.ScriptableRenderContext
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 
{
	// System.IntPtr UnityEngine.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_1;
};

// UnityEngine.Rendering.ShadowSamplingMode
struct ShadowSamplingMode_t8BE740C4258CFEDDBAC01FDC0438D8EE3F776BA8 
{
	// System.Int32 UnityEngine.Rendering.ShadowSamplingMode::value__
	int32_t ___value___2;
};

// UnityEngine.Rendering.StencilOp
struct StencilOp_t35EB362AF3CF60D7EC63DF5282B8256BF9985436 
{
	// System.Int32 UnityEngine.Rendering.StencilOp::value__
	int32_t ___value___2;
};

// UnityEngine.Rendering.TextureDimension
struct TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642 
{
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;
};

// UnityEngine.Rendering.VertexAttribute
struct VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6 
{
	// System.Int32 UnityEngine.Rendering.VertexAttribute::value__
	int32_t ___value___2;
};

// UnityEngine.Rendering.VertexAttributeFormat
struct VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F 
{
	// System.Int32 UnityEngine.Rendering.VertexAttributeFormat::value__
	int32_t ___value___2;
};

// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes
struct LightmapMixedBakeModes_tA9CBB8FED394CF87363E6013E665FA59267904EF 
{
	// System.Int32 UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes::value__
	int32_t ___value___2;
};

// UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes
struct ReflectionProbeModes_t09C3CE8EDD13F84305A19602D37D51F39E5E3DFC 
{
	// System.Int32 UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Rendering.RenderTargetIdentifier
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_0;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_2;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_3;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_4;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_5;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_6;
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Rendering.SupportedRenderingFeatures
struct SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6  : public RuntimeObject
{
	// UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes UnityEngine.Rendering.SupportedRenderingFeatures::<reflectionProbeModes>k__BackingField
	int32_t ___U3CreflectionProbeModesU3Ek__BackingField_1;
	// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::<defaultMixedLightingModes>k__BackingField
	int32_t ___U3CdefaultMixedLightingModesU3Ek__BackingField_2;
	// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::<mixedLightingModes>k__BackingField
	int32_t ___U3CmixedLightingModesU3Ek__BackingField_3;
	// UnityEngine.LightmapBakeType UnityEngine.Rendering.SupportedRenderingFeatures::<lightmapBakeTypes>k__BackingField
	int32_t ___U3ClightmapBakeTypesU3Ek__BackingField_4;
	// UnityEngine.LightmapsMode UnityEngine.Rendering.SupportedRenderingFeatures::<lightmapsModes>k__BackingField
	int32_t ___U3ClightmapsModesU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<enlightenLightmapper>k__BackingField
	bool ___U3CenlightenLightmapperU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<enlighten>k__BackingField
	bool ___U3CenlightenU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<lightProbeProxyVolumes>k__BackingField
	bool ___U3ClightProbeProxyVolumesU3Ek__BackingField_8;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<motionVectors>k__BackingField
	bool ___U3CmotionVectorsU3Ek__BackingField_9;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<receiveShadows>k__BackingField
	bool ___U3CreceiveShadowsU3Ek__BackingField_10;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<reflectionProbes>k__BackingField
	bool ___U3CreflectionProbesU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<reflectionProbesBlendDistance>k__BackingField
	bool ___U3CreflectionProbesBlendDistanceU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<rendererPriority>k__BackingField
	bool ___U3CrendererPriorityU3Ek__BackingField_13;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<rendersUIOverlay>k__BackingField
	bool ___U3CrendersUIOverlayU3Ek__BackingField_14;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesEnvironmentLighting>k__BackingField
	bool ___U3CoverridesEnvironmentLightingU3Ek__BackingField_15;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesFog>k__BackingField
	bool ___U3CoverridesFogU3Ek__BackingField_16;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesRealtimeReflectionProbes>k__BackingField
	bool ___U3CoverridesRealtimeReflectionProbesU3Ek__BackingField_17;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesOtherLightingSettings>k__BackingField
	bool ___U3CoverridesOtherLightingSettingsU3Ek__BackingField_18;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<editableMaterialRenderQueue>k__BackingField
	bool ___U3CeditableMaterialRenderQueueU3Ek__BackingField_19;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesLODBias>k__BackingField
	bool ___U3CoverridesLODBiasU3Ek__BackingField_20;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesMaximumLODLevel>k__BackingField
	bool ___U3CoverridesMaximumLODLevelU3Ek__BackingField_21;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<rendererProbes>k__BackingField
	bool ___U3CrendererProbesU3Ek__BackingField_22;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<particleSystemInstancing>k__BackingField
	bool ___U3CparticleSystemInstancingU3Ek__BackingField_23;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<autoAmbientProbeBaking>k__BackingField
	bool ___U3CautoAmbientProbeBakingU3Ek__BackingField_24;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<autoDefaultReflectionProbeBaking>k__BackingField
	bool ___U3CautoDefaultReflectionProbeBakingU3Ek__BackingField_25;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesShadowmask>k__BackingField
	bool ___U3CoverridesShadowmaskU3Ek__BackingField_26;
	// System.String UnityEngine.Rendering.SupportedRenderingFeatures::<overrideShadowmaskMessage>k__BackingField
	String_t* ___U3CoverrideShadowmaskMessageU3Ek__BackingField_27;
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

// UnityEngine.Rendering.VertexAttributeDescriptor
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 
{
	// UnityEngine.Rendering.VertexAttribute UnityEngine.Rendering.VertexAttributeDescriptor::<attribute>k__BackingField
	int32_t ___U3CattributeU3Ek__BackingField_0;
	// UnityEngine.Rendering.VertexAttributeFormat UnityEngine.Rendering.VertexAttributeDescriptor::<format>k__BackingField
	int32_t ___U3CformatU3Ek__BackingField_1;
	// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::<stream>k__BackingField
	int32_t ___U3CstreamU3Ek__BackingField_3;
};

// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>
struct Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>
struct Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rendering.RenderPipelineAsset
struct RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// UnityEngine.Rendering.SortingGroup
struct SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Camera>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>
struct List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RenderRequestU5BU5D_tFE888F219954AB94F31C62B8A20A4AC46AD2B940* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>

// UnityEngine.Rendering.CameraEventUtils

// UnityEngine.Rendering.CameraEventUtils

// UnityEngine.Rendering.OnDemandRendering
struct OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_StaticFields
{
	// System.Int32 UnityEngine.Rendering.OnDemandRendering::m_RenderFrameInterval
	int32_t ___m_RenderFrameInterval_0;
};

// UnityEngine.Rendering.OnDemandRendering

// UnityEngine.Rendering.RenderPipeline

// UnityEngine.Rendering.RenderPipeline

// UnityEngine.Rendering.RenderPipelineManager
struct RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields
{
	// UnityEngine.Rendering.RenderPipelineAsset UnityEngine.Rendering.RenderPipelineManager::s_CurrentPipelineAsset
	RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___s_CurrentPipelineAsset_0;
	// System.Collections.Generic.List`1<UnityEngine.Camera> UnityEngine.Rendering.RenderPipelineManager::s_Cameras
	List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___s_Cameras_1;
	// System.String UnityEngine.Rendering.RenderPipelineManager::s_currentPipelineType
	String_t* ___s_currentPipelineType_2;
	// UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineManager::s_currentPipeline
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* ___s_currentPipeline_3;
	// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]> UnityEngine.Rendering.RenderPipelineManager::beginFrameRendering
	Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* ___beginFrameRendering_4;
	// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera> UnityEngine.Rendering.RenderPipelineManager::beginCameraRendering
	Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* ___beginCameraRendering_5;
	// System.Action UnityEngine.Rendering.RenderPipelineManager::activeRenderPipelineTypeChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___activeRenderPipelineTypeChanged_6;
	// System.Action UnityEngine.Rendering.RenderPipelineManager::activeRenderPipelineCreated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___activeRenderPipelineCreated_7;
	// System.Action UnityEngine.Rendering.RenderPipelineManager::activeRenderPipelineDisposed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___activeRenderPipelineDisposed_8;
};

// UnityEngine.Rendering.RenderPipelineManager

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

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

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Rendering.ShaderTagId

// UnityEngine.Rendering.ShaderTagId

// System.Single

// System.Single

// UnityEngine.Rendering.StencilState

// UnityEngine.Rendering.StencilState

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

// System.Void

// System.Void

// UnityEngine.Rendering.BuiltinRenderTextureType

// UnityEngine.Rendering.BuiltinRenderTextureType

// UnityEngine.Rendering.CameraEvent

// UnityEngine.Rendering.CameraEvent

// UnityEngine.Rendering.ColorWriteMask

// UnityEngine.Rendering.ColorWriteMask

// UnityEngine.Rendering.CommandBufferExecutionFlags

// UnityEngine.Rendering.CommandBufferExecutionFlags

// UnityEngine.Rendering.CompareFunction

// UnityEngine.Rendering.CompareFunction

// UnityEngine.CubemapFace

// UnityEngine.CubemapFace

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Rendering.GraphicsDeviceType

// UnityEngine.Rendering.GraphicsDeviceType

// UnityEngine.Rendering.IndexFormat

// UnityEngine.Rendering.IndexFormat

// UnityEngine.Rendering.LODParameters

// UnityEngine.Rendering.LODParameters

// UnityEngine.LightmapBakeType

// UnityEngine.LightmapBakeType

// UnityEngine.LightmapsMode

// UnityEngine.LightmapsMode

// UnityEngine.Rendering.MeshUpdateFlags

// UnityEngine.Rendering.MeshUpdateFlags

// UnityEngine.MixedLightingMode

// UnityEngine.MixedLightingMode

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Rendering.RenderBufferLoadAction

// UnityEngine.Rendering.RenderBufferLoadAction

// UnityEngine.Rendering.RenderBufferStoreAction

// UnityEngine.Rendering.RenderBufferStoreAction

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.Rendering.ScriptableRenderContext
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_StaticFields
{
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ScriptableRenderContext::kRenderTypeTag
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___kRenderTypeTag_0;
};

// UnityEngine.Rendering.ScriptableRenderContext

// UnityEngine.Rendering.ShadowSamplingMode

// UnityEngine.Rendering.ShadowSamplingMode

// UnityEngine.Rendering.StencilOp

// UnityEngine.Rendering.StencilOp

// UnityEngine.Rendering.TextureDimension

// UnityEngine.Rendering.TextureDimension

// UnityEngine.Rendering.VertexAttribute

// UnityEngine.Rendering.VertexAttribute

// UnityEngine.Rendering.VertexAttributeFormat

// UnityEngine.Rendering.VertexAttributeFormat

// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes

// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes

// UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes

// UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Rendering.RenderTargetIdentifier

// UnityEngine.Rendering.RenderTargetIdentifier

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Shader

// UnityEngine.Shader

// UnityEngine.Rendering.SupportedRenderingFeatures
struct SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields
{
	// UnityEngine.Rendering.SupportedRenderingFeatures UnityEngine.Rendering.SupportedRenderingFeatures::s_Active
	SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* ___s_Active_0;
};

// UnityEngine.Rendering.SupportedRenderingFeatures

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

// UnityEngine.Rendering.VertexAttributeDescriptor

// UnityEngine.Rendering.VertexAttributeDescriptor

// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>

// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>

// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>

// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>

// System.Action

// System.Action

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Rendering.RenderPipelineAsset

// UnityEngine.Rendering.RenderPipelineAsset

// UnityEngine.RenderTexture

// UnityEngine.RenderTexture

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// System.ObjectDisposedException

// System.ObjectDisposedException

// UnityEngine.Rendering.SortingGroup

// UnityEngine.Rendering.SortingGroup
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B  : public RuntimeArray
{
	ALIGN_FIELD (8) Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* m_Items[1];

	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// UnityEngine.Rendering.VertexAttribute UnityEngine.Rendering.VertexAttributeDescriptor::get_attribute()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_attribute_m2F7C7084857741A39E9FF0D4BABF98F9C7018AAA_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.VertexAttributeDescriptor::set_attribute(UnityEngine.Rendering.VertexAttribute)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_attribute_m526ED099EEA12DCB2FCB1BC88445FBF921E850A2_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Rendering.VertexAttributeFormat UnityEngine.Rendering.VertexAttributeDescriptor::get_format()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_format_mF8EF98F3E047BC26D177C3A008BCDAF979E52C79_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.VertexAttributeDescriptor::set_format(UnityEngine.Rendering.VertexAttributeFormat)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_format_mCA82263EBD7802621D9ECE42D0F44D4AAECD46C5_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::get_dimension()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_dimension_mAB440DDFA08BF61D717547EC8B9C43C3DFC56FB8_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.VertexAttributeDescriptor::set_dimension(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_dimension_mEF4325AE27221C732B214354A2DEB044ACFC69EE_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::get_stream()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_stream_mAA4D41E2B4B9024161B176700100ADB27855E4FF_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.VertexAttributeDescriptor::set_stream(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_stream_m9A3991AA0365A1DCEDF80A61990F7B48913A1C0A_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.VertexAttributeDescriptor::.ctor(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___0_attribute, int32_t ___1_format, int32_t ___2_dimension, int32_t ___3_stream, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.String UnityEngine.Rendering.VertexAttributeDescriptor::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VertexAttributeDescriptor_ToString_m45F7E7D6715E000C617173246F2C9BE23DF3FC8F (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_GetHashCode_mCB8C5F6AD422FE6A410C5406843FCE4B0ED5F2F8 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.VertexAttributeDescriptor::Equals(UnityEngine.Rendering.VertexAttributeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VertexAttributeDescriptor_Equals_mF328DE139864C201987238048AC79F8925CA435D (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.VertexAttributeDescriptor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VertexAttributeDescriptor_Equals_m6FBFEE42E1BAAAC2D38434EDF0906C5B76D56BE5 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderTargetIdentifier::.ctor(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetIdentifier__ctor_mD6E20FA134EEBCE40A8B5E64C505DE8A0DC96BDF (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_tex, const RuntimeMethod* method) ;
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85 (String_t* ___0_fmt, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.String UnityEngine.Rendering.RenderTargetIdentifier::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RenderTargetIdentifier_ToString_mA0B5CBC27159C4257939A5CAC6CEACE65AA6D36A (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTargetIdentifier_GetHashCode_m255E1EFD7BFC22B1B4464F9EF3346386DA328B86 (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.RenderTargetIdentifier::Equals(UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetIdentifier_Equals_m859988BBC3D58D5C2AEA18C2CCCAF7009A5499D9 (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___0_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.RenderTargetIdentifier::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetIdentifier_Equals_m07E36F91E8966A0E3882EF168F1AE3656BE48E9A (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.OnDemandRendering::get_renderFrameInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OnDemandRendering_get_renderFrameInterval_mC9E8FC6225DCCB074FD3D7BD128734DA321A2CCD (const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Camera>::ToArray()
inline CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* List_1_ToArray_mF6C79D8FC0E5B72BBAE2C467B674992253BA2B2A (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	return ((  CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Boolean UnityEngine.Rendering.RenderPipeline::get_disposed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Camera>::get_Count()
inline int32_t List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_inline (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Camera>::get_Item(System.Int32)
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6 (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipeline::set_disposed(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderPipeline_set_disposed_mB7EC4BD04C80015CBCC0B92A65A6DE615F2828A8_inline (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipelineManager::CleanupRenderPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_CleanupRenderPipeline_m1104AEE59AFE2EC1F1AD15DCF862802230466F99 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipelineManager::PrepareRenderPipeline(UnityEngine.Rendering.RenderPipelineAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_PrepareRenderPipeline_m342C65E962B20B547DB2BAF537EA870457736108 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___0_pipelineAsset, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Type_t* ___0_listType, RuntimeObject* ___1_resultList, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras(System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___0_results, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E (intptr_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::Equals(UnityEngine.Rendering.ScriptableRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_Equals_m99E5A233945DFC3B9A786F2413ECE68E5019AB88 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D (intptr_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.ScriptableRenderContext::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScriptableRenderContext_GetHashCode_mA1EE09239F1ACFC29A2ADB027D5E76E690510207 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_Internal_Injected_mFA0C805805CE2CC5BB6AD8DB0075733BF194FEE7 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, Type_t* ___1_listType, RuntimeObject* ___2_resultList, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ShaderTagId::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineManager::get_currentPipeline()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipeline::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_Dispose_mDF8A62A6B7D3A00128C9341921C036D015C41179 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipelineManager::set_currentPipeline(UnityEngine.Rendering.RenderPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_set_currentPipeline_m1C8CDEC2FD862823D0C4DC007CB57DBAFB1CDB3F (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::set_active(UnityEngine.Rendering.SupportedRenderingFeatures)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_set_active_mB2A1A6137C816592E6526CD3DA7405260EAEA8AE (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Camera>::Clear()
inline void List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_inline (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Rendering.RenderPipeline::InternalRender(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_InternalRender_mCB77395158F4572F348D8227BA9127ABF1C9C5BE (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___1_cameras, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipeline::InternalRenderWithRequests(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_InternalRenderWithRequests_mA4E809CF43979778D7F5048F79BF506746E82B57 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___1_cameras, List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* ___2_renderRequests, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipelineManager::HandleRenderPipelineChange(UnityEngine.Rendering.RenderPipelineAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_HandleRenderPipelineChange_m8B7BA0E0ADC1AD84C4A2E119E08C225EF519482E (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___0_pipelineAsset, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.RenderPipelineManager::IsPipelineRequireCreation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderPipelineManager_IsPipelineRequireCreation_m97B62DE27F930ADB3B8DE6831DDF1185837E826F (const RuntimeMethod* method) ;
// UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineAsset::InternalCreatePipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* RenderPipelineAsset_InternalCreatePipeline_m662E6A3D3B14C19D5318E172A4AF81FEF71C6252 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Camera>::.ctor()
inline void List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681 (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Byte System.Convert::ToByte(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_mC22A7EFFB28AA32D8F797E456E92BA88DBA19A08 (bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_enabled_m6DC861C699D1044E896E833D2DAE69B82F796564 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_readMask(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_readMask_m1BA8F9033413889D4E77DA343DC0029566A9BB9B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_writeMask(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_writeMask_m94471C671E03D42F36DA61436B1068B362375D65 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_compareFunctionFront(UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_passOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_failOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_zFailOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_compareFunctionBack(UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_passOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_failOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_zFailOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.StencilState::Equals(UnityEngine.Rendering.StencilState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.StencilState::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_Equals_mEA45A5D2BF2223B15EE0FB8BCEDBA9CB534ADF4B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Byte::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.StencilState::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Rendering.SupportedRenderingFeatures UnityEngine.Rendering.SupportedRenderingFeatures::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054 (const RuntimeMethod* method) ;
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_defaultMixedLightingModes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_mixedLightingModes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupported(UnityEngine.MixedLightingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsMixedLightingModeSupported_m11E0ADD90300D5396090ED9B2EFD9924524D50AF (int32_t ___0_mixedMode, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef(UnityEngine.MixedLightingMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mE48C26F367ABEC734BDB7A8A66FEB8796A401AAF (int32_t ___0_mixedMode, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupported(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mE8EE2ACBE267FDAEFA6229CD67298C9D3A16C691 (int32_t ___0_bakeType, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef(UnityEngine.LightmapBakeType,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mABE7E2BC06CA25519079DF4EEC89667EB51B8460 (int32_t ___0_bakeType, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) ;
// UnityEngine.LightmapBakeType UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapBakeTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlighten()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// UnityEngine.LightmapsMode UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapsModes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlightenLightmapper()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlightenLightmapper_mF7C756BBD4E605DD047BD502DFF8569C4CEE8F27_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_rendersUIOverlay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_autoAmbientProbeBaking()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoAmbientProbeBaking_m42E98E922511B1CF790FC414C9A85D70DFACA2C8_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_autoDefaultReflectionProbeBaking()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoDefaultReflectionProbeBaking_mFDB934E6645FA5CA95E1F0BEF4A12345A1025207_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::TagToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_TagToID_m5B5214F0AABE47C7465EEA717C78568AE1251FE9 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(UnityEngine.Rendering.ShaderTagId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.ShaderTagId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShaderTagId_GetHashCode_mF5E3A1F96CBDFDCEFABE1B56125EBBA6E3B9EFEF (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) ;
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.LODParameters::Equals(UnityEngine.Rendering.LODParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LODParameters_Equals_mAD45601A9E881620B23A7922D8AA5AFBC91E0B9F (LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* __this, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.LODParameters::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LODParameters_Equals_mF956A067D82497A00AC8234322CD848E6FB7BADE (LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.LODParameters::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LODParameters_GetHashCode_mECFCEAAAC935759A99C30C69BBC99A1148F46F40 (LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
// System.Boolean UnityEngine.Rendering.CameraEventUtils::IsValid(UnityEngine.Rendering.CameraEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraEventUtils_IsValid_m1092B80B3613B7E068926D6750E9C8AEBFFDF67E (int32_t ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_value;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___0_value;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)24)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_2 = V_0;
		return L_2;
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
// UnityEngine.Rendering.VertexAttribute UnityEngine.Rendering.VertexAttributeDescriptor::get_attribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_attribute_m2F7C7084857741A39E9FF0D4BABF98F9C7018AAA (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CattributeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t VertexAttributeDescriptor_get_attribute_m2F7C7084857741A39E9FF0D4BABF98F9C7018AAA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VertexAttributeDescriptor_get_attribute_m2F7C7084857741A39E9FF0D4BABF98F9C7018AAA_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.VertexAttributeDescriptor::set_attribute(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_attribute_m526ED099EEA12DCB2FCB1BC88445FBF921E850A2 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CattributeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void VertexAttributeDescriptor_set_attribute_m526ED099EEA12DCB2FCB1BC88445FBF921E850A2_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	VertexAttributeDescriptor_set_attribute_m526ED099EEA12DCB2FCB1BC88445FBF921E850A2_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Rendering.VertexAttributeFormat UnityEngine.Rendering.VertexAttributeDescriptor::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_format_mF8EF98F3E047BC26D177C3A008BCDAF979E52C79 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CformatU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t VertexAttributeDescriptor_get_format_mF8EF98F3E047BC26D177C3A008BCDAF979E52C79_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VertexAttributeDescriptor_get_format_mF8EF98F3E047BC26D177C3A008BCDAF979E52C79_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.VertexAttributeDescriptor::set_format(UnityEngine.Rendering.VertexAttributeFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_format_mCA82263EBD7802621D9ECE42D0F44D4AAECD46C5 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CformatU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void VertexAttributeDescriptor_set_format_mCA82263EBD7802621D9ECE42D0F44D4AAECD46C5_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	VertexAttributeDescriptor_set_format_mCA82263EBD7802621D9ECE42D0F44D4AAECD46C5_inline(_thisAdjusted, ___0_value, method);
}
// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::get_dimension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_dimension_mAB440DDFA08BF61D717547EC8B9C43C3DFC56FB8 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdimensionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t VertexAttributeDescriptor_get_dimension_mAB440DDFA08BF61D717547EC8B9C43C3DFC56FB8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VertexAttributeDescriptor_get_dimension_mAB440DDFA08BF61D717547EC8B9C43C3DFC56FB8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.VertexAttributeDescriptor::set_dimension(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_dimension_mEF4325AE27221C732B214354A2DEB044ACFC69EE (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CdimensionU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void VertexAttributeDescriptor_set_dimension_mEF4325AE27221C732B214354A2DEB044ACFC69EE_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	VertexAttributeDescriptor_set_dimension_mEF4325AE27221C732B214354A2DEB044ACFC69EE_inline(_thisAdjusted, ___0_value, method);
}
// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::get_stream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_stream_mAA4D41E2B4B9024161B176700100ADB27855E4FF (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CstreamU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t VertexAttributeDescriptor_get_stream_mAA4D41E2B4B9024161B176700100ADB27855E4FF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VertexAttributeDescriptor_get_stream_mAA4D41E2B4B9024161B176700100ADB27855E4FF_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.VertexAttributeDescriptor::set_stream(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_stream_m9A3991AA0365A1DCEDF80A61990F7B48913A1C0A (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CstreamU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void VertexAttributeDescriptor_set_stream_m9A3991AA0365A1DCEDF80A61990F7B48913A1C0A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	VertexAttributeDescriptor_set_stream_m9A3991AA0365A1DCEDF80A61990F7B48913A1C0A_inline(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.VertexAttributeDescriptor::.ctor(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___0_attribute, int32_t ___1_format, int32_t ___2_dimension, int32_t ___3_stream, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_attribute;
		VertexAttributeDescriptor_set_attribute_m526ED099EEA12DCB2FCB1BC88445FBF921E850A2_inline(__this, L_0, NULL);
		int32_t L_1 = ___1_format;
		VertexAttributeDescriptor_set_format_mCA82263EBD7802621D9ECE42D0F44D4AAECD46C5_inline(__this, L_1, NULL);
		int32_t L_2 = ___2_dimension;
		VertexAttributeDescriptor_set_dimension_mEF4325AE27221C732B214354A2DEB044ACFC69EE_inline(__this, L_2, NULL);
		int32_t L_3 = ___3_stream;
		VertexAttributeDescriptor_set_stream_m9A3991AA0365A1DCEDF80A61990F7B48913A1C0A_inline(__this, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_attribute, int32_t ___1_format, int32_t ___2_dimension, int32_t ___3_stream, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A(_thisAdjusted, ___0_attribute, ___1_format, ___2_dimension, ___3_stream, method);
}
// System.String UnityEngine.Rendering.VertexAttributeDescriptor::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VertexAttributeDescriptor_ToString_m45F7E7D6715E000C617173246F2C9BE23DF3FC8F (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40603CB9C3C2F0F007BD4C59CEB195FB17927F5C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int32_t L_2;
		L_2 = VertexAttributeDescriptor_get_attribute_m2F7C7084857741A39E9FF0D4BABF98F9C7018AAA_inline(__this, NULL);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		int32_t L_6;
		L_6 = VertexAttributeDescriptor_get_format_mF8EF98F3E047BC26D177C3A008BCDAF979E52C79_inline(__this, NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t L_10;
		L_10 = VertexAttributeDescriptor_get_dimension_mAB440DDFA08BF61D717547EC8B9C43C3DFC56FB8_inline(__this, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		int32_t L_14;
		L_14 = VertexAttributeDescriptor_get_stream_mAA4D41E2B4B9024161B176700100ADB27855E4FF_inline(__this, NULL);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral40603CB9C3C2F0F007BD4C59CEB195FB17927F5C, L_13, NULL);
		V_0 = L_17;
		goto IL_004c;
	}

IL_004c:
	{
		String_t* L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C  String_t* VertexAttributeDescriptor_ToString_m45F7E7D6715E000C617173246F2C9BE23DF3FC8F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = VertexAttributeDescriptor_ToString_m45F7E7D6715E000C617173246F2C9BE23DF3FC8F(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_GetHashCode_mCB8C5F6AD422FE6A410C5406843FCE4B0ED5F2F8 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		int32_t L_1;
		L_1 = VertexAttributeDescriptor_get_attribute_m2F7C7084857741A39E9FF0D4BABF98F9C7018AAA_inline(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)23))), (int32_t)L_1));
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = VertexAttributeDescriptor_get_format_mF8EF98F3E047BC26D177C3A008BCDAF979E52C79_inline(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)23))), (int32_t)L_3));
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = VertexAttributeDescriptor_get_dimension_mAB440DDFA08BF61D717547EC8B9C43C3DFC56FB8_inline(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)23))), L_5));
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = VertexAttributeDescriptor_get_stream_mAA4D41E2B4B9024161B176700100ADB27855E4FF_inline(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)23))), L_7));
		int32_t L_8 = V_0;
		V_1 = L_8;
		goto IL_0039;
	}

IL_0039:
	{
		int32_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t VertexAttributeDescriptor_GetHashCode_mCB8C5F6AD422FE6A410C5406843FCE4B0ED5F2F8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VertexAttributeDescriptor_GetHashCode_mCB8C5F6AD422FE6A410C5406843FCE4B0ED5F2F8(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.VertexAttributeDescriptor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VertexAttributeDescriptor_Equals_m6FBFEE42E1BAAAC2D38434EDF0906C5B76D56BE5 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = VertexAttributeDescriptor_Equals_mF328DE139864C201987238048AC79F8925CA435D(__this, ((*(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)((VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)UnBox(L_2, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool VertexAttributeDescriptor_Equals_m6FBFEE42E1BAAAC2D38434EDF0906C5B76D56BE5_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	bool _returnValue;
	_returnValue = VertexAttributeDescriptor_Equals_m6FBFEE42E1BAAAC2D38434EDF0906C5B76D56BE5(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.VertexAttributeDescriptor::Equals(UnityEngine.Rendering.VertexAttributeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VertexAttributeDescriptor_Equals_mF328DE139864C201987238048AC79F8925CA435D (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0;
		L_0 = VertexAttributeDescriptor_get_attribute_m2F7C7084857741A39E9FF0D4BABF98F9C7018AAA_inline(__this, NULL);
		int32_t L_1;
		L_1 = VertexAttributeDescriptor_get_attribute_m2F7C7084857741A39E9FF0D4BABF98F9C7018AAA_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_2;
		L_2 = VertexAttributeDescriptor_get_format_mF8EF98F3E047BC26D177C3A008BCDAF979E52C79_inline(__this, NULL);
		int32_t L_3;
		L_3 = VertexAttributeDescriptor_get_format_mF8EF98F3E047BC26D177C3A008BCDAF979E52C79_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_4;
		L_4 = VertexAttributeDescriptor_get_dimension_mAB440DDFA08BF61D717547EC8B9C43C3DFC56FB8_inline(__this, NULL);
		int32_t L_5;
		L_5 = VertexAttributeDescriptor_get_dimension_mAB440DDFA08BF61D717547EC8B9C43C3DFC56FB8_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_6;
		L_6 = VertexAttributeDescriptor_get_stream_mAA4D41E2B4B9024161B176700100ADB27855E4FF_inline(__this, NULL);
		int32_t L_7;
		L_7 = VertexAttributeDescriptor_get_stream_mAA4D41E2B4B9024161B176700100ADB27855E4FF_inline((&___0_other), NULL);
		G_B5_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_0040;
	}

IL_003f:
	{
		G_B5_0 = 0;
	}

IL_0040:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0043;
	}

IL_0043:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C  bool VertexAttributeDescriptor_Equals_mF328DE139864C201987238048AC79F8925CA435D_AdjustorThunk (RuntimeObject* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_other, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	bool _returnValue;
	_returnValue = VertexAttributeDescriptor_Equals_mF328DE139864C201987238048AC79F8925CA435D(_thisAdjusted, ___0_other, method);
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
// System.Void UnityEngine.Rendering.RenderTargetIdentifier::.ctor(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetIdentifier__ctor_mD6E20FA134EEBCE40A8B5E64C505DE8A0DC96BDF (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_tex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* G_B7_0 = NULL;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* G_B8_1 = NULL;
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_tex;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		__this->___m_Type_0 = 0;
		goto IL_0039;
	}

IL_0017:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3 = ___0_tex;
		V_1 = (bool)((!(((RuntimeObject*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)IsInstClass((RuntimeObject*)L_3, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		__this->___m_Type_0 = ((int32_t)-2);
		goto IL_0039;
	}

IL_0030:
	{
		__this->___m_Type_0 = (-1);
	}

IL_0039:
	{
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___m_BufferPointer_3 = L_5;
		__this->___m_NameID_1 = (-1);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = ___0_tex;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		G_B6_0 = __this;
		if (L_7)
		{
			G_B7_0 = __this;
			goto IL_0057;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_0;
		goto IL_005d;
	}

IL_0057:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8 = ___0_tex;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_8, NULL);
		G_B8_0 = L_9;
		G_B8_1 = G_B7_0;
	}

IL_005d:
	{
		G_B8_1->___m_InstanceID_2 = G_B8_0;
		__this->___m_MipLevel_4 = 0;
		__this->___m_CubeFace_5 = (-1);
		__this->___m_DepthSlice_6 = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void RenderTargetIdentifier__ctor_mD6E20FA134EEBCE40A8B5E64C505DE8A0DC96BDF_AdjustorThunk (RuntimeObject* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_tex, const RuntimeMethod* method)
{
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*>(__this + _offset);
	RenderTargetIdentifier__ctor_mD6E20FA134EEBCE40A8B5E64C505DE8A0DC96BDF(_thisAdjusted, ___0_tex, method);
}
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B RenderTargetIdentifier_op_Implicit_mBF13C6AE62DCEDDEFDC1C7305BE646FE99D2F24C (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_tex, const RuntimeMethod* method) 
{
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_tex;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_1;
		memset((&L_1), 0, sizeof(L_1));
		RenderTargetIdentifier__ctor_mD6E20FA134EEBCE40A8B5E64C505DE8A0DC96BDF((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Rendering.RenderTargetIdentifier::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RenderTargetIdentifier_ToString_mA0B5CBC27159C4257939A5CAC6CEACE65AA6D36A (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuiltinRenderTextureType_t3D56813CAC7C6E4AC3B438039BD1CE7E62FE7C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C6CE5DF96D354231E70A806FC48C28A97F4E4F6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int32_t L_2 = __this->___m_Type_0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(BuiltinRenderTextureType_t3D56813CAC7C6E4AC3B438039BD1CE7E62FE7C4E_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		int32_t L_6 = __this->___m_NameID_1;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t L_10 = __this->___m_InstanceID_2;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		intptr_t L_14 = __this->___m_BufferPointer_3;
		intptr_t L_15 = L_14;
		RuntimeObject* L_16 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		int32_t L_18 = __this->___m_MipLevel_4;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		int32_t L_22 = __this->___m_CubeFace_5;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_21;
		int32_t L_26 = __this->___m_DepthSlice_6;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_28);
		String_t* L_29;
		L_29 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(_stringLiteral4C6CE5DF96D354231E70A806FC48C28A97F4E4F6, L_25, NULL);
		V_0 = L_29;
		goto IL_0076;
	}

IL_0076:
	{
		String_t* L_30 = V_0;
		return L_30;
	}
}
IL2CPP_EXTERN_C  String_t* RenderTargetIdentifier_ToString_mA0B5CBC27159C4257939A5CAC6CEACE65AA6D36A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = RenderTargetIdentifier_ToString_mA0B5CBC27159C4257939A5CAC6CEACE65AA6D36A(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTargetIdentifier_GetHashCode_m255E1EFD7BFC22B1B4464F9EF3346386DA328B86 (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = (int32_t*)(&__this->___m_Type_0);
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)L_0, NULL);
		int32_t* L_2 = (int32_t*)(&__this->___m_NameID_1);
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_2, NULL);
		int32_t* L_4 = (int32_t*)(&__this->___m_InstanceID_2);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)23))), L_3)), ((int32_t)23))), L_5));
		goto IL_0033;
	}

IL_0033:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t RenderTargetIdentifier_GetHashCode_m255E1EFD7BFC22B1B4464F9EF3346386DA328B86_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RenderTargetIdentifier_GetHashCode_m255E1EFD7BFC22B1B4464F9EF3346386DA328B86(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.RenderTargetIdentifier::Equals(UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetIdentifier_Equals_m859988BBC3D58D5C2AEA18C2CCCAF7009A5499D9 (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___0_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B8_0 = 0;
	{
		int32_t L_0 = __this->___m_Type_0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_1 = ___0_rhs;
		int32_t L_2 = L_1.___m_Type_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_3 = __this->___m_NameID_1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_4 = ___0_rhs;
		int32_t L_5 = L_4.___m_NameID_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_6 = __this->___m_InstanceID_2;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_7 = ___0_rhs;
		int32_t L_8 = L_7.___m_InstanceID_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_006a;
		}
	}
	{
		intptr_t L_9 = __this->___m_BufferPointer_3;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_10 = ___0_rhs;
		intptr_t L_11 = L_10.___m_BufferPointer_3;
		bool L_12;
		L_12 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_13 = __this->___m_MipLevel_4;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_14 = ___0_rhs;
		int32_t L_15 = L_14.___m_MipLevel_4;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_15))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_16 = __this->___m_CubeFace_5;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_17 = ___0_rhs;
		int32_t L_18 = L_17.___m_CubeFace_5;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_18))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_19 = __this->___m_DepthSlice_6;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_20 = ___0_rhs;
		int32_t L_21 = L_20.___m_DepthSlice_6;
		G_B8_0 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		goto IL_006b;
	}

IL_006a:
	{
		G_B8_0 = 0;
	}

IL_006b:
	{
		V_0 = (bool)G_B8_0;
		goto IL_006e;
	}

IL_006e:
	{
		bool L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C  bool RenderTargetIdentifier_Equals_m859988BBC3D58D5C2AEA18C2CCCAF7009A5499D9_AdjustorThunk (RuntimeObject* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___0_rhs, const RuntimeMethod* method)
{
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*>(__this + _offset);
	bool _returnValue;
	_returnValue = RenderTargetIdentifier_Equals_m859988BBC3D58D5C2AEA18C2CCCAF7009A5499D9(_thisAdjusted, ___0_rhs, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.RenderTargetIdentifier::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetIdentifier_Equals_m07E36F91E8966A0E3882EF168F1AE3656BE48E9A (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_1 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0026;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_obj;
		V_0 = ((*(RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*)((RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*)(RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*)UnBox(L_2, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_il2cpp_TypeInfo_var))));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_3 = V_0;
		bool L_4;
		L_4 = RenderTargetIdentifier_Equals_m859988BBC3D58D5C2AEA18C2CCCAF7009A5499D9(__this, L_3, NULL);
		V_2 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool RenderTargetIdentifier_Equals_m07E36F91E8966A0E3882EF168F1AE3656BE48E9A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*>(__this + _offset);
	bool _returnValue;
	_returnValue = RenderTargetIdentifier_Equals_m07E36F91E8966A0E3882EF168F1AE3656BE48E9A(_thisAdjusted, ___0_obj, method);
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
// System.Int32 UnityEngine.Rendering.OnDemandRendering::get_renderFrameInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OnDemandRendering_get_renderFrameInterval_mC9E8FC6225DCCB074FD3D7BD128734DA321A2CCD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_StaticFields*)il2cpp_codegen_static_fields_for(OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var))->___m_RenderFrameInterval_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Rendering.OnDemandRendering::GetRenderFrameInterval(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDemandRendering_GetRenderFrameInterval_m2E7629CD00648D6DEC5D78E631510ACF1350A931 (int32_t* ___0_frameInterval, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = ___0_frameInterval;
		il2cpp_codegen_runtime_class_init_inline(OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = OnDemandRendering_get_renderFrameInterval_mC9E8FC6225DCCB074FD3D7BD128734DA321A2CCD(NULL);
		*((int32_t*)L_0) = (int32_t)L_1;
		return;
	}
}
// System.Void UnityEngine.Rendering.OnDemandRendering::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDemandRendering__cctor_mED0B1BA868A046D26D214B1DD1C0BAAD6147E9BB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_StaticFields*)il2cpp_codegen_static_fields_for(OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var))->___m_RenderFrameInterval_0 = 1;
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
// System.Void UnityEngine.Rendering.RenderPipeline::ProcessRenderRequests(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_ProcessRenderRequests_m1303438384D0A5857A147C280A1AF0E16E488908 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* ___2_renderRequests, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::Render(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_Render_m41E15C2221365D92636651792FBDAD1A04E8AF1A (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___1_cameras, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF6C79D8FC0E5B72BBAE2C467B674992253BA2B2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_0 = ___0_context;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_1 = ___1_cameras;
		NullCheck(L_1);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_2;
		L_2 = List_1_ToArray_mF6C79D8FC0E5B72BBAE2C467B674992253BA2B2A(L_1, List_1_ToArray_mF6C79D8FC0E5B72BBAE2C467B674992253BA2B2A_RuntimeMethod_var);
		VirtualActionInvoker2< ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36, CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* >::Invoke(4 /* System.Void UnityEngine.Rendering.RenderPipeline::Render(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]) */, __this, L_0, L_2);
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::InternalRender(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_InternalRender_mCB77395158F4572F348D8227BA9127ABF1C9C5BE (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___1_cameras, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2;
		L_2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBB994086C18AA022E5A2DA0F304A8D5119EDD397)), __this, NULL);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RenderPipeline_InternalRender_mCB77395158F4572F348D8227BA9127ABF1C9C5BE_RuntimeMethod_var)));
	}

IL_001c:
	{
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_4 = ___0_context;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_5 = ___1_cameras;
		VirtualActionInvoker2< ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* >::Invoke(6 /* System.Void UnityEngine.Rendering.RenderPipeline::Render(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>) */, __this, L_4, L_5);
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::InternalRenderWithRequests(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_InternalRenderWithRequests_mA4E809CF43979778D7F5048F79BF506746E82B57 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___1_cameras, List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* ___2_renderRequests, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* G_B5_1 = NULL;
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* G_B3_1 = NULL;
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* G_B4_1 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B6_0 = NULL;
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* G_B6_2 = NULL;
	{
		bool L_0;
		L_0 = RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2;
		L_2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBB994086C18AA022E5A2DA0F304A8D5119EDD397)), __this, NULL);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RenderPipeline_InternalRenderWithRequests_mA4E809CF43979778D7F5048F79BF506746E82B57_RuntimeMethod_var)));
	}

IL_001c:
	{
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_4 = ___0_context;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_5 = ___1_cameras;
		G_B3_0 = L_4;
		G_B3_1 = __this;
		if (!L_5)
		{
			G_B5_0 = L_4;
			G_B5_1 = __this;
			goto IL_0032;
		}
	}
	{
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_6 = ___1_cameras;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_inline(L_6, List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_RuntimeMethod_var);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		if (!L_7)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			goto IL_0032;
		}
	}
	{
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_8 = ___1_cameras;
		NullCheck(L_8);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
		L_9 = List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6(L_8, 0, List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6_RuntimeMethod_var);
		G_B6_0 = L_9;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0033;
	}

IL_0032:
	{
		G_B6_0 = ((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)(NULL));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0033:
	{
		List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* L_10 = ___2_renderRequests;
		NullCheck(G_B6_2);
		VirtualActionInvoker3< ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* >::Invoke(5 /* System.Void UnityEngine.Rendering.RenderPipeline::ProcessRenderRequests(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>) */, G_B6_2, G_B6_1, G_B6_0, L_10);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.RenderPipeline::get_disposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposedU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::set_disposed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_set_disposed_mB7EC4BD04C80015CBCC0B92A65A6DE615F2828A8 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CdisposedU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_Dispose_mDF8A62A6B7D3A00128C9341921C036D015C41179 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void UnityEngine.Rendering.RenderPipeline::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		RenderPipeline_set_disposed_mB7EC4BD04C80015CBCC0B92A65A6DE615F2828A8_inline(__this, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_Dispose_m581E2B33EF0CCAF2C3E7BD71AE32B4974D259286 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, bool ___0_disposing, const RuntimeMethod* method) 
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
// UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineAsset::InternalCreatePipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* RenderPipelineAsset_InternalCreatePipeline_m662E6A3D3B14C19D5318E172A4AF81FEF71C6252 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* V_0 = NULL;
	Exception_t* V_1 = NULL;
	bool V_2 = false;
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B6_0 = 0;
	{
		V_0 = (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69*)NULL;
	}
	try
	{// begin try (depth: 1)
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_0;
		L_0 = VirtualFuncInvoker0< RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* >::Invoke(24 /* UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineAsset::CreatePipeline() */, __this);
		V_0 = L_0;
		goto IL_0065;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Exception)
		{
			Exception_t* L_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_1 = L_1;
			Exception_t* L_2 = V_1;
			NullCheck(L_2);
			RuntimeObject* L_3;
			L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.IDictionary System.Exception::get_Data() */, L_2);
			NullCheck(L_3);
			bool L_4;
			L_4 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral180C5DB7272B54061862DF51C798C0FE1E1AB386)));
			if (!L_4)
			{
				goto IL_0056;
			}
		}
		{
			Exception_t* L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.IDictionary System.Exception::get_Data() */, L_5);
			NullCheck(L_6);
			RuntimeObject* L_7;
			L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)), L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral180C5DB7272B54061862DF51C798C0FE1E1AB386)));
			if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_7, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))))
			{
				goto IL_0056;
			}
		}
		{
			Exception_t* L_8 = V_1;
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.IDictionary System.Exception::get_Data() */, L_8);
			NullCheck(L_9);
			RuntimeObject* L_10;
			L_10 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)), L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral180C5DB7272B54061862DF51C798C0FE1E1AB386)));
			G_B6_0 = ((((int32_t)((((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_10, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_0057;
		}

IL_0056:
		{
			G_B6_0 = 1;
		}

IL_0057:
		{
			V_2 = (bool)G_B6_0;
			bool L_11 = V_2;
			if (!L_11)
			{
				goto IL_0062;
			}
		}
		{
			Exception_t* L_12 = V_1;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_12, NULL);
		}

IL_0062:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0065;
		}
	}// end catch (depth: 1)

IL_0065:
	{
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_13 = V_0;
		V_3 = L_13;
		goto IL_0069;
	}

IL_0069:
	{
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_14 = V_3;
		return L_14;
	}
}
// System.String[] UnityEngine.Rendering.RenderPipelineAsset::get_renderingLayerMaskNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* RenderPipelineAsset_get_renderingLayerMaskNames_mC0978F38B2EADD1462593AC6D8395E612CB1329D (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}
}
// System.String[] UnityEngine.Rendering.RenderPipelineAsset::get_prefixedRenderingLayerMaskNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* RenderPipelineAsset_get_prefixedRenderingLayerMaskNames_m89254E02D74CC6FC9320104B8A1748534FE55F6B (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultMaterial_mCF112570E7B47208A0B700BA97B33CAE6713D323 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_autodeskInteractiveShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_autodeskInteractiveShader_m261A0788B4F73AFC5A50953878552BC3BFF8B674 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_autodeskInteractiveTransparentShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_autodeskInteractiveTransparentShader_m6E2A2439FCB378F64DC46CB6DB517A1661A306F8 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_autodeskInteractiveMaskedShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_autodeskInteractiveMaskedShader_m42DB9A70B290E217B91616E9274C9B7E58D54362 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_terrainDetailLitShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_terrainDetailLitShader_m74F2FA112CD18493E7003F6F711AA09A8C930136 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_terrainDetailGrassShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_terrainDetailGrassShader_mBE126045BF9048B59CE56D1BD9C69C3DEB4CDD96 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_terrainDetailGrassBillboardShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_terrainDetailGrassBillboardShader_mE233539926B92ADB7A057C34CBCD7E51823C75A2 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultParticleMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultParticleMaterial_mC68CA6787815E00CF501F268F34DA0B3C83B3013 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultLineMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultLineMaterial_mB4DD122B043417F3810FEAAA74E79B369A26B484 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultTerrainMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultTerrainMaterial_m129D75CFE9689112452AA911C24BEE4939ADB520 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultUIMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultUIMaterial_mBB9F6694EEEB97AC6140C094A48743660A0DAF04 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultUIOverdrawMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultUIOverdrawMaterial_m19832E76629C0AFC18F0D61C5C1CC47533200038 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultUIETC1SupportedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultUIETC1SupportedMaterial_m2D1DC4B89F59283C8AE3101F3DC05D88C10D4C10 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_default2DMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_default2DMaterial_m2418C7E1A0974B2A06CF3BE81590C7B0DF1DB113 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_default2DMaskMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_default2DMaskMaterial_mEE67105F80768BDFD1C93E8709FEBF2D4561E14E (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_defaultShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_defaultShader_m633AD6A97B2D1D436E42920D766B1283C1FED858 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_defaultSpeedTree7Shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_defaultSpeedTree7Shader_mCEF3795C9E36F0A9D9A3CE29824790B172637252 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_defaultSpeedTree8Shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_defaultSpeedTree8Shader_mAEB3D02FC0A0016BAC5C22BC1967827403E5C17A (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineAsset::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineAsset_OnValidate_mD160C7BDEA559BAF3DDA48B4819307E07B377F52 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, __this, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_CleanupRenderPipeline_m1104AEE59AFE2EC1F1AD15DCF862802230466F99(NULL);
		RenderPipelineManager_PrepareRenderPipeline_m342C65E962B20B547DB2BAF537EA870457736108(__this, NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineAsset::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineAsset_OnDisable_mE99CEED707BDC901AD37DC976FA3A3A313E7E00C (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_CleanupRenderPipeline_m1104AEE59AFE2EC1F1AD15DCF862802230466F99(NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineAsset__ctor_mC45BECAED54BEDC4555AF010323EABF49BA7B78A (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void UnityEngine.Rendering.ScriptableRenderContext::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_ptr;
		__this->___m_Ptr_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5_AdjustorThunk (RuntimeObject* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5(_thisAdjusted, ___0_ptr, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras(System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___0_results, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_2 = ___0_results;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8(__this, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189_AdjustorThunk (RuntimeObject* __this, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___0_results, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189(_thisAdjusted, ___0_results, method);
}
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::Equals(UnityEngine.Rendering.ScriptableRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Ptr_1);
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_1 = ___0_other;
		intptr_t L_2 = L_1.___m_Ptr_1;
		intptr_t L_3 = L_2;
		RuntimeObject* L_4 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_3);
		bool L_5;
		L_5 = IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E(L_0, L_4, NULL);
		V_0 = L_5;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D_AdjustorThunk (RuntimeObject* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_other, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	bool _returnValue;
	_returnValue = ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_Equals_m99E5A233945DFC3B9A786F2413ECE68E5019AB88 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D(__this, ((*(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*)((ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*)(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*)UnBox(L_3, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool ScriptableRenderContext_Equals_m99E5A233945DFC3B9A786F2413ECE68E5019AB88_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	bool _returnValue;
	_returnValue = ScriptableRenderContext_Equals_m99E5A233945DFC3B9A786F2413ECE68E5019AB88(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.ScriptableRenderContext::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScriptableRenderContext_GetHashCode_mA1EE09239F1ACFC29A2ADB027D5E76E690510207 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Ptr_1);
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t ScriptableRenderContext_GetHashCode_mA1EE09239F1ACFC29A2ADB027D5E76E690510207_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ScriptableRenderContext_GetHashCode_mA1EE09239F1ACFC29A2ADB027D5E76E690510207(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Type_t* ___0_listType, RuntimeObject* ___1_resultList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_listType;
		RuntimeObject* L_1 = ___1_resultList;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_GetCameras_Internal_Injected_mFA0C805805CE2CC5BB6AD8DB0075733BF194FEE7(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_listType, RuntimeObject* ___1_resultList, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8(_thisAdjusted, ___0_listType, ___1_resultList, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext__cctor_m0C385A2E228FAAEBACE8E912E26F05147525E8B1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B((&L_0), _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4, /*hidden argument*/NULL);
		((ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var))->___kRenderTypeTag_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_Internal_Injected_mFA0C805805CE2CC5BB6AD8DB0075733BF194FEE7 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, Type_t* ___1_listType, RuntimeObject* ___2_resultList, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_GetCameras_Internal_Injected_mFA0C805805CE2CC5BB6AD8DB0075733BF194FEE7_ftn) (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*, Type_t*, RuntimeObject*);
	static ScriptableRenderContext_GetCameras_Internal_Injected_mFA0C805805CE2CC5BB6AD8DB0075733BF194FEE7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_GetCameras_Internal_Injected_mFA0C805805CE2CC5BB6AD8DB0075733BF194FEE7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Type,System.Object)");
	_il2cpp_icall_func(___0__unity_self, ___1_listType, ___2_resultList);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineManager::get_currentPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_3;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::set_currentPipeline(UnityEngine.Rendering.RenderPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_set_currentPipeline_m1C8CDEC2FD862823D0C4DC007CB57DBAFB1CDB3F (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC54E787F785B4E40A3D3688157624B421E8D4B05);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = _stringLiteralC54E787F785B4E40A3D3688157624B421E8D4B05;
		goto IL_0016;
	}

IL_000b:
	{
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_1 = ___0_value;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		G_B3_0 = L_3;
	}

IL_0016:
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipelineType_2 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipelineType_2), (void*)G_B3_0);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_4 = ___0_value;
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_3), (void*)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::add_beginFrameRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_add_beginFrameRendering_m4269C8B1B2B0AB5CA56D91D9C8F10DFD8AABFC92 (Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* V_0 = NULL;
	Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* V_1 = NULL;
	Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___beginFrameRendering_4;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* L_1 = V_0;
		V_1 = L_1;
		Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* L_2 = V_1;
		Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C*)Castclass((RuntimeObject*)L_4, Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* L_5 = V_2;
		Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* L_6 = V_1;
		Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C*>((&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___beginFrameRendering_4), L_5, L_6);
		V_0 = L_7;
		Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* L_8 = V_0;
		Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C*)L_8) == ((RuntimeObject*)(Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::remove_beginFrameRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_remove_beginFrameRendering_mA1AAC84C79565A746AD4FED95ABAA8C1383061E8 (Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* V_0 = NULL;
	Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* V_1 = NULL;
	Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___beginFrameRendering_4;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* L_1 = V_0;
		V_1 = L_1;
		Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* L_2 = V_1;
		Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C*)Castclass((RuntimeObject*)L_4, Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* L_5 = V_2;
		Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* L_6 = V_1;
		Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C*>((&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___beginFrameRendering_4), L_5, L_6);
		V_0 = L_7;
		Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* L_8 = V_0;
		Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C*)L_8) == ((RuntimeObject*)(Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::add_beginCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_add_beginCameraRendering_m44DF94A62BE65F929101983FACE63BA4FE4B584A (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* V_0 = NULL;
	Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* V_1 = NULL;
	Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___beginCameraRendering_5;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_1 = V_0;
		V_1 = L_1;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_2 = V_1;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*)Castclass((RuntimeObject*)L_4, Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_5 = V_2;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_6 = V_1;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*>((&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___beginCameraRendering_5), L_5, L_6);
		V_0 = L_7;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_8 = V_0;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*)L_8) == ((RuntimeObject*)(Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::remove_beginCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_remove_beginCameraRendering_m6A9B576247B531A6C1C715870A37343AC702976E (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* V_0 = NULL;
	Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* V_1 = NULL;
	Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___beginCameraRendering_5;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_1 = V_0;
		V_1 = L_1;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_2 = V_1;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*)Castclass((RuntimeObject*)L_4, Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_5 = V_2;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_6 = V_1;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*>((&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___beginCameraRendering_5), L_5, L_6);
		V_0 = L_7;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_8 = V_0;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*)L_8) == ((RuntimeObject*)(Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::OnActiveRenderPipelineTypeChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_OnActiveRenderPipelineTypeChanged_m7BCA10285B43964387C7DA20EFC7C0C6A47C4E24 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___activeRenderPipelineTypeChanged_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::HandleRenderPipelineChange(UnityEngine.Rendering.RenderPipelineAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_HandleRenderPipelineChange_m8B7BA0E0ADC1AD84C4A2E119E08C225EF519482E (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___0_pipelineAsset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0;
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_1 = ___0_pipelineAsset;
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E*)L_0) == ((RuntimeObject*)(RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E*)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_CleanupRenderPipeline_m1104AEE59AFE2EC1F1AD15DCF862802230466F99(NULL);
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_4 = ___0_pipelineAsset;
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0), (void*)L_4);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::CleanupRenderPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_CleanupRenderPipeline_m1104AEE59AFE2EC1F1AD15DCF862802230466F99 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B6_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B5_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_0;
		L_0 = RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D_inline(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_1;
		L_1 = RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D_inline(NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline(L_1, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___activeRenderPipelineDisposed_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = L_4;
		G_B5_0 = L_5;
		if (L_5)
		{
			G_B6_0 = L_5;
			goto IL_0028;
		}
	}
	{
		goto IL_002e;
	}

IL_0028:
	{
		NullCheck(G_B6_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B6_0, NULL);
	}

IL_002e:
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_6;
		L_6 = RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D_inline(NULL);
		NullCheck(L_6);
		RenderPipeline_Dispose_mDF8A62A6B7D3A00128C9341921C036D015C41179(L_6, NULL);
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0 = (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0), (void*)(RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E*)NULL);
		RenderPipelineManager_set_currentPipeline_m1C8CDEC2FD862823D0C4DC007CB57DBAFB1CDB3F((RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69*)NULL, NULL);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_7 = (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)il2cpp_codegen_object_new(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_set_active_mB2A1A6137C816592E6526CD3DA7405260EAEA8AE(L_7, NULL);
	}

IL_0052:
	{
		return;
	}
}
// System.String UnityEngine.Rendering.RenderPipelineManager::GetCurrentPipelineAssetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RenderPipelineManager_GetCurrentPipelineAssetType_m78BBEBD08F2BCB77FA23BDCD54C10A4102115EF5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		String_t* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipelineType_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::DoRenderLoop_Internal(UnityEngine.Rendering.RenderPipelineAsset,System.IntPtr,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_DoRenderLoop_Internal_m01D54C058082806D20515903AC0558768DA1A0FA (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___0_pipe, intptr_t ___1_loopPtr, List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* ___2_renderRequests, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_0 = ___0_pipe;
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_PrepareRenderPipeline_m342C65E962B20B547DB2BAF537EA870457736108(L_0, NULL);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_1;
		L_1 = RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D_inline(NULL);
		V_1 = (bool)((((RuntimeObject*)(RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		goto IL_006e;
	}

IL_0016:
	{
		intptr_t L_3 = ___1_loopPtr;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5((&V_0), L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_4 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1;
		NullCheck(L_4);
		List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_inline(L_4, List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var);
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_5 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1;
		ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189((&V_0), L_5, NULL);
		List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* L_6 = ___2_renderRequests;
		V_2 = (bool)((((RuntimeObject*)(List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_8;
		L_8 = RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D_inline(NULL);
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_9 = V_0;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_10 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1;
		NullCheck(L_8);
		RenderPipeline_InternalRender_mCB77395158F4572F348D8227BA9127ABF1C9C5BE(L_8, L_9, L_10, NULL);
		goto IL_0063;
	}

IL_0051:
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_11;
		L_11 = RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D_inline(NULL);
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_12 = V_0;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_13 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1;
		List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* L_14 = ___2_renderRequests;
		NullCheck(L_11);
		RenderPipeline_InternalRenderWithRequests_mA4E809CF43979778D7F5048F79BF506746E82B57(L_11, L_12, L_13, L_14, NULL);
	}

IL_0063:
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_15 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1;
		NullCheck(L_15);
		List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_inline(L_15, List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var);
	}

IL_006e:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::PrepareRenderPipeline(UnityEngine.Rendering.RenderPipelineAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_PrepareRenderPipeline_m342C65E962B20B547DB2BAF537EA870457736108 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___0_pipelineAsset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	{
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_0 = ___0_pipelineAsset;
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_HandleRenderPipelineChange_m8B7BA0E0ADC1AD84C4A2E119E08C225EF519482E(L_0, NULL);
		bool L_1;
		L_1 = RenderPipelineManager_IsPipelineRequireCreation_m97B62DE27F930ADB3B8DE6831DDF1185837E826F(NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_3 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0;
		NullCheck(L_3);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_4;
		L_4 = RenderPipelineAsset_InternalCreatePipeline_m662E6A3D3B14C19D5318E172A4AF81FEF71C6252(L_3, NULL);
		RenderPipelineManager_set_currentPipeline_m1C8CDEC2FD862823D0C4DC007CB57DBAFB1CDB3F(L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___activeRenderPipelineCreated_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = L_5;
		G_B2_0 = L_6;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_002d;
		}
	}
	{
		goto IL_0033;
	}

IL_002d:
	{
		NullCheck(G_B3_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B3_0, NULL);
	}

IL_0033:
	{
	}

IL_0034:
	{
		return;
	}
}
// System.Boolean UnityEngine.Rendering.RenderPipelineManager::IsPipelineRequireCreation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderPipelineManager_IsPipelineRequireCreation_m97B62DE27F930ADB3B8DE6831DDF1185837E826F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_2;
		L_2 = RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D_inline(NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_3;
		L_3 = RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D_inline(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline(L_3, NULL);
		G_B4_0 = ((int32_t)(L_4));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 1;
	}

IL_0021:
	{
		G_B6_0 = G_B4_0;
		goto IL_0024;
	}

IL_0023:
	{
		G_B6_0 = 0;
	}

IL_0024:
	{
		return (bool)G_B6_0;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager__cctor_m8A9308C1CD1B4F533F5D9855ECB44D6B71620807 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC54E787F785B4E40A3D3688157624B421E8D4B05);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_0 = (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*)il2cpp_codegen_object_new(List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681(L_0, List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var);
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1), (void*)L_0);
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipelineType_2 = _stringLiteralC54E787F785B4E40A3D3688157624B421E8D4B05;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipelineType_2), (void*)_stringLiteralC54E787F785B4E40A3D3688157624B421E8D4B05);
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_3 = (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_3), (void*)(RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69*)NULL);
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
// System.Void UnityEngine.Rendering.StencilState::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_enabled_m6DC861C699D1044E896E833D2DAE69B82F796564 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint8_t L_1;
		L_1 = Convert_ToByte_mC22A7EFFB28AA32D8F797E456E92BA88DBA19A08(L_0, NULL);
		__this->___m_Enabled_0 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_enabled_m6DC861C699D1044E896E833D2DAE69B82F796564_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_enabled_m6DC861C699D1044E896E833D2DAE69B82F796564(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_readMask(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_readMask_m1BA8F9033413889D4E77DA343DC0029566A9BB9B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___m_ReadMask_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_readMask_m1BA8F9033413889D4E77DA343DC0029566A9BB9B_AdjustorThunk (RuntimeObject* __this, uint8_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_readMask_m1BA8F9033413889D4E77DA343DC0029566A9BB9B(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_writeMask(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_writeMask_m94471C671E03D42F36DA61436B1068B362375D65 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___m_WriteMask_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_writeMask_m94471C671E03D42F36DA61436B1068B362375D65_AdjustorThunk (RuntimeObject* __this, uint8_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_writeMask_m94471C671E03D42F36DA61436B1068B362375D65(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_compareFunctionFront(UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_CompareFunctionFront_4 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_passOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_PassOperationFront_5 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_failOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_FailOperationFront_6 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_zFailOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_ZFailOperationFront_7 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_compareFunctionBack(UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_CompareFunctionBack_8 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_passOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_PassOperationBack_9 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_failOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_FailOperationBack_10 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_zFailOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_ZFailOperationBack_11 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.Rendering.StencilState::Equals(UnityEngine.Rendering.StencilState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B12_0 = 0;
	{
		uint8_t L_0 = __this->___m_Enabled_0;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_1 = ___0_other;
		uint8_t L_2 = L_1.___m_Enabled_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_3 = __this->___m_ReadMask_1;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_4 = ___0_other;
		uint8_t L_5 = L_4.___m_ReadMask_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_6 = __this->___m_WriteMask_2;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_7 = ___0_other;
		uint8_t L_8 = L_7.___m_WriteMask_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_9 = __this->___m_CompareFunctionFront_4;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_10 = ___0_other;
		uint8_t L_11 = L_10.___m_CompareFunctionFront_4;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_12 = __this->___m_PassOperationFront_5;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_13 = ___0_other;
		uint8_t L_14 = L_13.___m_PassOperationFront_5;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_15 = __this->___m_FailOperationFront_6;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_16 = ___0_other;
		uint8_t L_17 = L_16.___m_FailOperationFront_6;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_17))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_18 = __this->___m_ZFailOperationFront_7;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_19 = ___0_other;
		uint8_t L_20 = L_19.___m_ZFailOperationFront_7;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_20))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_21 = __this->___m_CompareFunctionBack_8;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_22 = ___0_other;
		uint8_t L_23 = L_22.___m_CompareFunctionBack_8;
		if ((!(((uint32_t)L_21) == ((uint32_t)L_23))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_24 = __this->___m_PassOperationBack_9;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_25 = ___0_other;
		uint8_t L_26 = L_25.___m_PassOperationBack_9;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_26))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_27 = __this->___m_FailOperationBack_10;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_28 = ___0_other;
		uint8_t L_29 = L_28.___m_FailOperationBack_10;
		if ((!(((uint32_t)L_27) == ((uint32_t)L_29))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_30 = __this->___m_ZFailOperationBack_11;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_31 = ___0_other;
		uint8_t L_32 = L_31.___m_ZFailOperationBack_11;
		G_B12_0 = ((((int32_t)L_30) == ((int32_t)L_32))? 1 : 0);
		goto IL_00a4;
	}

IL_00a3:
	{
		G_B12_0 = 0;
	}

IL_00a4:
	{
		V_0 = (bool)G_B12_0;
		goto IL_00a7;
	}

IL_00a7:
	{
		bool L_33 = V_0;
		return L_33;
	}
}
IL2CPP_EXTERN_C  bool StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051_AdjustorThunk (RuntimeObject* __this, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___0_other, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	bool _returnValue;
	_returnValue = StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.StencilState::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_Equals_mEA45A5D2BF2223B15EE0FB8BCEDBA9CB534ADF4B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___0_obj;
		bool L_4;
		L_4 = StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051(__this, ((*(StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*)((StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*)(StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*)UnBox(L_3, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool StencilState_Equals_mEA45A5D2BF2223B15EE0FB8BCEDBA9CB534ADF4B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	bool _returnValue;
	_returnValue = StencilState_Equals_mEA45A5D2BF2223B15EE0FB8BCEDBA9CB534ADF4B(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.StencilState::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint8_t* L_0 = (uint8_t*)(&__this->___m_Enabled_0);
		int32_t L_1;
		L_1 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		uint8_t* L_3 = (uint8_t*)(&__this->___m_ReadMask_1);
		int32_t L_4;
		L_4 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_3, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)397)))^L_4));
		int32_t L_5 = V_0;
		uint8_t* L_6 = (uint8_t*)(&__this->___m_WriteMask_2);
		int32_t L_7;
		L_7 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)397)))^L_7));
		int32_t L_8 = V_0;
		uint8_t* L_9 = (uint8_t*)(&__this->___m_CompareFunctionFront_4);
		int32_t L_10;
		L_10 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_9, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)397)))^L_10));
		int32_t L_11 = V_0;
		uint8_t* L_12 = (uint8_t*)(&__this->___m_PassOperationFront_5);
		int32_t L_13;
		L_13 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_12, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)397)))^L_13));
		int32_t L_14 = V_0;
		uint8_t* L_15 = (uint8_t*)(&__this->___m_FailOperationFront_6);
		int32_t L_16;
		L_16 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_15, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)397)))^L_16));
		int32_t L_17 = V_0;
		uint8_t* L_18 = (uint8_t*)(&__this->___m_ZFailOperationFront_7);
		int32_t L_19;
		L_19 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_18, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_17, ((int32_t)397)))^L_19));
		int32_t L_20 = V_0;
		uint8_t* L_21 = (uint8_t*)(&__this->___m_CompareFunctionBack_8);
		int32_t L_22;
		L_22 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_21, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)397)))^L_22));
		int32_t L_23 = V_0;
		uint8_t* L_24 = (uint8_t*)(&__this->___m_PassOperationBack_9);
		int32_t L_25;
		L_25 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_24, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_23, ((int32_t)397)))^L_25));
		int32_t L_26 = V_0;
		uint8_t* L_27 = (uint8_t*)(&__this->___m_FailOperationBack_10);
		int32_t L_28;
		L_28 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_27, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_26, ((int32_t)397)))^L_28));
		int32_t L_29 = V_0;
		uint8_t* L_30 = (uint8_t*)(&__this->___m_ZFailOperationBack_11);
		int32_t L_31;
		L_31 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_30, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_29, ((int32_t)397)))^L_31));
		int32_t L_32 = V_0;
		V_1 = L_32;
		goto IL_00da;
	}

IL_00da:
	{
		int32_t L_33 = V_1;
		return L_33;
	}
}
IL2CPP_EXTERN_C  int32_t StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5(_thisAdjusted, method);
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
// UnityEngine.Rendering.SupportedRenderingFeatures UnityEngine.Rendering.SupportedRenderingFeatures::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_0 = ((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0;
		V_0 = (bool)((((RuntimeObject*)(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_2 = (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)il2cpp_codegen_object_new(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0), (void*)L_2);
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3 = ((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0;
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::set_active(UnityEngine.Rendering.SupportedRenderingFeatures)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_set_active_mB2A1A6137C816592E6526CD3DA7405260EAEA8AE (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0), (void*)L_0);
		return;
	}
}
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_defaultMixedLightingModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdefaultMixedLightingModesU3Ek__BackingField_2;
		return L_0;
	}
}
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_mixedLightingModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CmixedLightingModesU3Ek__BackingField_3;
		return L_0;
	}
}
// UnityEngine.LightmapBakeType UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapBakeTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapBakeTypesU3Ek__BackingField_4;
		return L_0;
	}
}
// UnityEngine.LightmapsMode UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapsModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapsModesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlightenLightmapper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlightenLightmapper_mF7C756BBD4E605DD047BD502DFF8569C4CEE8F27 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenLightmapperU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlighten()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_rendersUIOverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrendersUIOverlayU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_autoAmbientProbeBaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoAmbientProbeBaking_m42E98E922511B1CF790FC414C9A85D70DFACA2C8 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CautoAmbientProbeBakingU3Ek__BackingField_24;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_autoDefaultReflectionProbeBaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoDefaultReflectionProbeBaking_mFDB934E6645FA5CA95E1F0BEF4A12345A1025207 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CautoDefaultReflectionProbeBakingU3Ek__BackingField_25;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::FallbackMixedLightingModeByRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_FallbackMixedLightingModeByRef_mEC3BA55F7A145AFCD9762F1FD752CA4D587D0F88 (intptr_t ___0_fallbackModePtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t* V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		intptr_t L_0 = ___0_fallbackModePtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (int32_t*)L_1;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_2;
		L_2 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_4;
		L_4 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_4, NULL);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_6;
		L_6 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_6, NULL);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_8;
		L_8 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_8, NULL);
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_5&(int32_t)L_7))) == ((int32_t)L_9))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B3_0 = 0;
	}

IL_0038:
	{
		V_1 = (bool)G_B3_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_11;
		L_11 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_11, NULL);
		V_3 = L_12;
		int32_t L_13 = V_3;
		V_2 = L_13;
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)2)))
		{
			goto IL_005b;
		}
	}
	{
		goto IL_0050;
	}

IL_0050:
	{
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)4)))
		{
			goto IL_0056;
		}
	}
	{
		goto IL_0060;
	}

IL_0056:
	{
		int32_t* L_16 = V_0;
		*((int32_t*)L_16) = (int32_t)2;
		goto IL_0065;
	}

IL_005b:
	{
		int32_t* L_17 = V_0;
		*((int32_t*)L_17) = (int32_t)1;
		goto IL_0065;
	}

IL_0060:
	{
		int32_t* L_18 = V_0;
		*((int32_t*)L_18) = (int32_t)0;
		goto IL_0065;
	}

IL_0065:
	{
		goto IL_008e;
	}

IL_0067:
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = SupportedRenderingFeatures_IsMixedLightingModeSupported_m11E0ADD90300D5396090ED9B2EFD9924524D50AF(2, NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_0079;
		}
	}
	{
		int32_t* L_21 = V_0;
		*((int32_t*)L_21) = (int32_t)2;
		goto IL_008e;
	}

IL_0079:
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = SupportedRenderingFeatures_IsMixedLightingModeSupported_m11E0ADD90300D5396090ED9B2EFD9924524D50AF(1, NULL);
		V_5 = L_22;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_008b;
		}
	}
	{
		int32_t* L_24 = V_0;
		*((int32_t*)L_24) = (int32_t)1;
		goto IL_008e;
	}

IL_008b:
	{
		int32_t* L_25 = V_0;
		*((int32_t*)L_25) = (int32_t)0;
	}

IL_008e:
	{
		return;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupported(UnityEngine.MixedLightingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsMixedLightingModeSupported_m11E0ADD90300D5396090ED9B2EFD9924524D50AF (int32_t ___0_mixedMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___0_mixedMode;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_1), (void*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mE48C26F367ABEC734BDB7A8A66FEB8796A401AAF(L_0, L_1, NULL);
		bool L_2 = V_0;
		V_1 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef(UnityEngine.MixedLightingMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mE48C26F367ABEC734BDB7A8A66FEB8796A401AAF (int32_t ___0_mixedMode, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	bool V_1 = false;
	bool* G_B4_0 = NULL;
	bool* G_B3_0 = NULL;
	bool* G_B10_0 = NULL;
	bool* G_B6_0 = NULL;
	bool* G_B5_0 = NULL;
	bool* G_B8_0 = NULL;
	bool* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	bool* G_B9_1 = NULL;
	int32_t G_B11_0 = 0;
	bool* G_B11_1 = NULL;
	{
		intptr_t L_0 = ___1_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mE8EE2ACBE267FDAEFA6229CD67298C9D3A16C691(1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		bool* L_4 = V_0;
		*((int8_t*)L_4) = (int8_t)0;
		goto IL_005b;
	}

IL_001b:
	{
		bool* L_5 = V_0;
		int32_t L_6 = ___0_mixedMode;
		G_B3_0 = L_5;
		if (L_6)
		{
			G_B4_0 = L_5;
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_7;
		L_7 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_7, NULL);
		G_B4_0 = G_B3_0;
		if ((((int32_t)((int32_t)((int32_t)L_8&1))) == ((int32_t)1)))
		{
			G_B10_0 = G_B3_0;
			goto IL_0059;
		}
	}

IL_002e:
	{
		int32_t L_9 = ___0_mixedMode;
		G_B5_0 = G_B4_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			G_B6_0 = G_B4_0;
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_10;
		L_10 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_10, NULL);
		G_B6_0 = G_B5_0;
		if ((((int32_t)((int32_t)((int32_t)L_11&2))) == ((int32_t)2)))
		{
			G_B10_0 = G_B5_0;
			goto IL_0059;
		}
	}

IL_0041:
	{
		int32_t L_12 = ___0_mixedMode;
		G_B7_0 = G_B6_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			G_B8_0 = G_B6_0;
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_13;
		L_13 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_13, NULL);
		G_B9_0 = ((((int32_t)((int32_t)((int32_t)L_14&4))) == ((int32_t)4))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_0057;
	}

IL_0056:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0057:
	{
		G_B11_0 = G_B9_0;
		G_B11_1 = G_B9_1;
		goto IL_005a;
	}

IL_0059:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
	}

IL_005a:
	{
		*((int8_t*)G_B11_1) = (int8_t)G_B11_0;
	}

IL_005b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupported(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mE8EE2ACBE267FDAEFA6229CD67298C9D3A16C691 (int32_t ___0_bakeType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___0_bakeType;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_1), (void*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mABE7E2BC06CA25519079DF4EEC89667EB51B8460(L_0, L_1, NULL);
		bool L_2 = V_0;
		V_1 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef(UnityEngine.LightmapBakeType,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mABE7E2BC06CA25519079DF4EEC89667EB51B8460 (int32_t ___0_bakeType, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	{
		intptr_t L_0 = ___1_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		int32_t L_2 = ___0_bakeType;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mE8EE2ACBE267FDAEFA6229CD67298C9D3A16C691(2, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_6;
		L_6 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_6, NULL);
		G_B4_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		V_3 = (bool)G_B4_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		bool* L_9 = V_0;
		*((int8_t*)L_9) = (int8_t)0;
		goto IL_0064;
	}

IL_0035:
	{
	}

IL_0036:
	{
		bool* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_11;
		L_11 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156_inline(L_11, NULL);
		int32_t L_13 = ___0_bakeType;
		int32_t L_14 = ___0_bakeType;
		*((int8_t*)L_10) = (int8_t)((((int32_t)((int32_t)((int32_t)L_12&(int32_t)L_13))) == ((int32_t)L_14))? 1 : 0);
		int32_t L_15 = ___0_bakeType;
		if ((!(((uint32_t)L_15) == ((uint32_t)4))))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_16;
		L_16 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_16);
		bool L_17;
		L_17 = SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6_inline(L_16, NULL);
		G_B10_0 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_005b;
	}

IL_005a:
	{
		G_B10_0 = 0;
	}

IL_005b:
	{
		V_4 = (bool)G_B10_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0064;
		}
	}
	{
		bool* L_19 = V_0;
		*((int8_t*)L_19) = (int8_t)0;
	}

IL_0064:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapsModeSupportedByRef(UnityEngine.LightmapsMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapsModeSupportedByRef_m99BF1104DDA5C0EB37E529F76670E7F10E6319E8 (int32_t ___0_mode, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___1_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38_inline(L_3, NULL);
		int32_t L_5 = ___0_mode;
		int32_t L_6 = ___0_mode;
		*((int8_t*)L_2) = (int8_t)((((int32_t)((int32_t)((int32_t)L_4&(int32_t)L_5))) == ((int32_t)L_6))? 1 : 0);
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapperSupportedByRef(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapperSupportedByRef_m891045E2F4FF9AC667E6FC75F6119D5AB546FBDB (int32_t ___0_lightmapper, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	bool* G_B2_0 = NULL;
	bool* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	bool* G_B3_1 = NULL;
	{
		intptr_t L_0 = ___1_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		int32_t L_3 = ___0_lightmapper;
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_4;
		L_4 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = SupportedRenderingFeatures_get_enlightenLightmapper_mF7C756BBD4E605DD047BD502DFF8569C4CEE8F27_inline(L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		G_B3_1 = G_B1_0;
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0019:
	{
		*((int8_t*)G_B3_1) = (int8_t)G_B3_0;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsUIOverlayRenderedBySRP(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsUIOverlayRenderedBySRP_m15CF763E502A362DC677DEBBEC12A9B45CEEB458 (intptr_t ___0_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___0_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC_inline(L_3, NULL);
		*((int8_t*)L_2) = (int8_t)L_4;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsAutoAmbientProbeBakingSupported(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsAutoAmbientProbeBakingSupported_mBC9E03F60617335C1E8D4DE88FD57F591CDA6C50 (intptr_t ___0_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___0_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SupportedRenderingFeatures_get_autoAmbientProbeBaking_m42E98E922511B1CF790FC414C9A85D70DFACA2C8_inline(L_3, NULL);
		*((int8_t*)L_2) = (int8_t)L_4;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsAutoDefaultReflectionProbeBakingSupported(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsAutoDefaultReflectionProbeBakingSupported_mD59A4D48FC5A6095035739F187C9BCF4D0DC67C5 (intptr_t ___0_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___0_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SupportedRenderingFeatures_get_autoDefaultReflectionProbeBaking_mFDB934E6645FA5CA95E1F0BEF4A12345A1025207_inline(L_3, NULL);
		*((int8_t*)L_2) = (int8_t)L_4;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::FallbackLightmapperByRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_FallbackLightmapperByRef_mBA3E826098F185845769A99830E50C43294304FF (intptr_t ___0_lightmapperPtr, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	{
		intptr_t L_0 = ___0_lightmapperPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (int32_t*)L_1;
		int32_t* L_2 = V_0;
		*((int32_t*)L_2) = (int32_t)1;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CreflectionProbeModesU3Ek__BackingField_1 = 0;
		__this->___U3CdefaultMixedLightingModesU3Ek__BackingField_2 = 0;
		__this->___U3CmixedLightingModesU3Ek__BackingField_3 = 7;
		__this->___U3ClightmapBakeTypesU3Ek__BackingField_4 = 7;
		__this->___U3ClightmapsModesU3Ek__BackingField_5 = 1;
		__this->___U3CenlightenLightmapperU3Ek__BackingField_6 = (bool)1;
		__this->___U3CenlightenU3Ek__BackingField_7 = (bool)1;
		__this->___U3ClightProbeProxyVolumesU3Ek__BackingField_8 = (bool)1;
		__this->___U3CmotionVectorsU3Ek__BackingField_9 = (bool)1;
		__this->___U3CreceiveShadowsU3Ek__BackingField_10 = (bool)1;
		__this->___U3CreflectionProbesU3Ek__BackingField_11 = (bool)1;
		__this->___U3CreflectionProbesBlendDistanceU3Ek__BackingField_12 = (bool)1;
		__this->___U3CrendererPriorityU3Ek__BackingField_13 = (bool)0;
		__this->___U3CoverridesEnvironmentLightingU3Ek__BackingField_15 = (bool)0;
		__this->___U3CoverridesFogU3Ek__BackingField_16 = (bool)0;
		__this->___U3CoverridesRealtimeReflectionProbesU3Ek__BackingField_17 = (bool)0;
		__this->___U3CoverridesOtherLightingSettingsU3Ek__BackingField_18 = (bool)0;
		__this->___U3CeditableMaterialRenderQueueU3Ek__BackingField_19 = (bool)1;
		__this->___U3CoverridesLODBiasU3Ek__BackingField_20 = (bool)0;
		__this->___U3CoverridesMaximumLODLevelU3Ek__BackingField_21 = (bool)0;
		__this->___U3CrendererProbesU3Ek__BackingField_22 = (bool)1;
		__this->___U3CparticleSystemInstancingU3Ek__BackingField_23 = (bool)1;
		__this->___U3CautoAmbientProbeBakingU3Ek__BackingField_24 = (bool)1;
		__this->___U3CautoDefaultReflectionProbeBakingU3Ek__BackingField_25 = (bool)1;
		__this->___U3CoverridesShadowmaskU3Ek__BackingField_26 = (bool)0;
		__this->___U3CoverrideShadowmaskMessageU3Ek__BackingField_27 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoverrideShadowmaskMessageU3Ek__BackingField_27), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__cctor_mD97BB2123C1AC4DAEF2B5D8D1DC8219C31968416 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_0 = (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)il2cpp_codegen_object_new(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED(L_0, NULL);
		((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0), (void*)L_0);
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
// System.Void UnityEngine.Rendering.ShaderTagId::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		int32_t L_1;
		L_1 = Shader_TagToID_m5B5214F0AABE47C7465EEA717C78568AE1251FE9(L_0, NULL);
		__this->___m_Id_0 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B(_thisAdjusted, ___0_name, method);
}
// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0(__this, ((*(ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*)((ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*)(ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*)UnBox(L_1, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	bool _returnValue;
	_returnValue = ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(UnityEngine.Rendering.ShaderTagId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___m_Id_0;
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_1 = ___0_other;
		int32_t L_2 = L_1.___m_Id_0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0_AdjustorThunk (RuntimeObject* __this, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___0_other, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	bool _returnValue;
	_returnValue = ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.ShaderTagId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShaderTagId_GetHashCode_mF5E3A1F96CBDFDCEFABE1B56125EBBA6E3B9EFEF (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int32_t)2079669542);
		int32_t L_0 = V_0;
		int32_t* L_1 = (int32_t*)(&__this->___m_Id_0);
		int32_t L_2;
		L_2 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_1, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)-1521134295))), L_2));
		int32_t L_3 = V_0;
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t ShaderTagId_GetHashCode_mF5E3A1F96CBDFDCEFABE1B56125EBBA6E3B9EFEF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ShaderTagId_GetHashCode_mF5E3A1F96CBDFDCEFABE1B56125EBBA6E3B9EFEF(_thisAdjusted, method);
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
// System.Boolean UnityEngine.Rendering.LODParameters::Equals(UnityEngine.Rendering.LODParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LODParameters_Equals_mAD45601A9E881620B23A7922D8AA5AFBC91E0B9F (LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* __this, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = __this->___m_IsOrthographic_0;
		LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_1 = ___0_other;
		int32_t L_2 = L_1.___m_IsOrthographic_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0058;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___m_CameraPosition_1);
		LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_4 = ___0_other;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4.___m_CameraPosition_1;
		bool L_6;
		L_6 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		float* L_7 = (float*)(&__this->___m_FieldOfView_2);
		LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_8 = ___0_other;
		float L_9 = L_8.___m_FieldOfView_2;
		bool L_10;
		L_10 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		float* L_11 = (float*)(&__this->___m_OrthoSize_3);
		LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_12 = ___0_other;
		float L_13 = L_12.___m_OrthoSize_3;
		bool L_14;
		L_14 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_15 = __this->___m_CameraPixelHeight_4;
		LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_16 = ___0_other;
		int32_t L_17 = L_16.___m_CameraPixelHeight_4;
		G_B6_0 = ((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0);
		goto IL_0059;
	}

IL_0058:
	{
		G_B6_0 = 0;
	}

IL_0059:
	{
		V_0 = (bool)G_B6_0;
		goto IL_005c;
	}

IL_005c:
	{
		bool L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C  bool LODParameters_Equals_mAD45601A9E881620B23A7922D8AA5AFBC91E0B9F_AdjustorThunk (RuntimeObject* __this, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___0_other, const RuntimeMethod* method)
{
	LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*>(__this + _offset);
	bool _returnValue;
	_returnValue = LODParameters_Equals_mAD45601A9E881620B23A7922D8AA5AFBC91E0B9F(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.LODParameters::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LODParameters_Equals_mF956A067D82497A00AC8234322CD848E6FB7BADE (LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___0_obj;
		bool L_4;
		L_4 = LODParameters_Equals_mAD45601A9E881620B23A7922D8AA5AFBC91E0B9F(__this, ((*(LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*)((LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*)(LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*)UnBox(L_3, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool LODParameters_Equals_mF956A067D82497A00AC8234322CD848E6FB7BADE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*>(__this + _offset);
	bool _returnValue;
	_returnValue = LODParameters_Equals_mF956A067D82497A00AC8234322CD848E6FB7BADE(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.LODParameters::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LODParameters_GetHashCode_mECFCEAAAC935759A99C30C69BBC99A1148F46F40 (LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___m_IsOrthographic_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___m_CameraPosition_1);
		int32_t L_3;
		L_3 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline(L_2, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)397)))^L_3));
		int32_t L_4 = V_0;
		float* L_5 = (float*)(&__this->___m_FieldOfView_2);
		int32_t L_6;
		L_6 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_5, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)397)))^L_6));
		int32_t L_7 = V_0;
		float* L_8 = (float*)(&__this->___m_OrthoSize_3);
		int32_t L_9;
		L_9 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_8, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)397)))^L_9));
		int32_t L_10 = V_0;
		int32_t L_11 = __this->___m_CameraPixelHeight_4;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)397)))^L_11));
		int32_t L_12 = V_0;
		V_1 = L_12;
		goto IL_005e;
	}

IL_005e:
	{
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C  int32_t LODParameters_GetHashCode_mECFCEAAAC935759A99C30C69BBC99A1148F46F40_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = LODParameters_GetHashCode_mECFCEAAAC935759A99C30C69BBC99A1148F46F40(_thisAdjusted, method);
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
// System.Int32 UnityEngine.Rendering.SortingGroup::get_invalidSortingGroupID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortingGroup_get_invalidSortingGroupID_mEA453186185B225FA2410988959180BAEC604310 (const RuntimeMethod* method) 
{
	typedef int32_t (*SortingGroup_get_invalidSortingGroupID_mEA453186185B225FA2410988959180BAEC604310_ftn) ();
	static SortingGroup_get_invalidSortingGroupID_mEA453186185B225FA2410988959180BAEC604310_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SortingGroup_get_invalidSortingGroupID_mEA453186185B225FA2410988959180BAEC604310_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SortingGroup::get_invalidSortingGroupID()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// UnityEngine.Rendering.SortingGroup UnityEngine.Rendering.SortingGroup::GetSortingGroupByIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759* SortingGroup_GetSortingGroupByIndex_mC4CFB06D8C4B0EA27FC4BDC60AA05F4E0B28426B (int32_t ___0_index, const RuntimeMethod* method) 
{
	typedef SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759* (*SortingGroup_GetSortingGroupByIndex_mC4CFB06D8C4B0EA27FC4BDC60AA05F4E0B28426B_ftn) (int32_t);
	static SortingGroup_GetSortingGroupByIndex_mC4CFB06D8C4B0EA27FC4BDC60AA05F4E0B28426B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SortingGroup_GetSortingGroupByIndex_mC4CFB06D8C4B0EA27FC4BDC60AA05F4E0B28426B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SortingGroup::GetSortingGroupByIndex(System.Int32)");
	SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759* icallRetVal = _il2cpp_icall_func(___0_index);
	return icallRetVal;
}
// System.Int32 UnityEngine.Rendering.SortingGroup::get_sortingLayerID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortingGroup_get_sortingLayerID_m37C70CEA78DA6E28F405C67EDE95D5C2191F0055 (SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*SortingGroup_get_sortingLayerID_m37C70CEA78DA6E28F405C67EDE95D5C2191F0055_ftn) (SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759*);
	static SortingGroup_get_sortingLayerID_m37C70CEA78DA6E28F405C67EDE95D5C2191F0055_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SortingGroup_get_sortingLayerID_m37C70CEA78DA6E28F405C67EDE95D5C2191F0055_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SortingGroup::get_sortingLayerID()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.Rendering.SortingGroup::get_sortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortingGroup_get_sortingOrder_mC80606E6BB9A6D5E3AB61A0451C48203A0C1AB6A (SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*SortingGroup_get_sortingOrder_mC80606E6BB9A6D5E3AB61A0451C48203A0C1AB6A_ftn) (SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759*);
	static SortingGroup_get_sortingOrder_mC80606E6BB9A6D5E3AB61A0451C48203A0C1AB6A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SortingGroup_get_sortingOrder_mC80606E6BB9A6D5E3AB61A0451C48203A0C1AB6A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SortingGroup::get_sortingOrder()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Rendering.SortingGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingGroup__ctor_m0F2104D49BFE2551466B75F1A75E20EFBD0E350B (SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_attribute_m2F7C7084857741A39E9FF0D4BABF98F9C7018AAA_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CattributeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_attribute_m526ED099EEA12DCB2FCB1BC88445FBF921E850A2_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CattributeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_format_mF8EF98F3E047BC26D177C3A008BCDAF979E52C79_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CformatU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_format_mCA82263EBD7802621D9ECE42D0F44D4AAECD46C5_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CformatU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_dimension_mAB440DDFA08BF61D717547EC8B9C43C3DFC56FB8_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdimensionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_dimension_mEF4325AE27221C732B214354A2DEB044ACFC69EE_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CdimensionU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_stream_mAA4D41E2B4B9024161B176700100ADB27855E4FF_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CstreamU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_stream_m9A3991AA0365A1DCEDF80A61990F7B48913A1C0A_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CstreamU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderPipeline_set_disposed_mB7EC4BD04C80015CBCC0B92A65A6DE615F2828A8_inline (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CdisposedU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdefaultMixedLightingModesU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CmixedLightingModesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_value;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapBakeTypesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapsModesU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlightenLightmapper_mF7C756BBD4E605DD047BD502DFF8569C4CEE8F27_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenLightmapperU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrendersUIOverlayU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoAmbientProbeBaking_m42E98E922511B1CF790FC414C9A85D70DFACA2C8_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CautoAmbientProbeBakingU3Ek__BackingField_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoDefaultReflectionProbeBaking_mFDB934E6645FA5CA95E1F0BEF4A12345A1025207_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CautoDefaultReflectionProbeBakingU3Ek__BackingField_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_other;
		float L_2 = L_1.___x_2;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_other;
		float L_5 = L_4.___y_3;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_other;
		float L_8 = L_7.___z_4;
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (float*)(&__this->___x_2);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (float*)(&__this->___y_3);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (float*)(&__this->___z_4);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		V_0 = ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
