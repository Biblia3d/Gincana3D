﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC;
// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>
struct Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`2<System.Exception,System.Boolean>
struct Func_2_tDDBE08B46BEFDD869DE0B97D023CB9C89674FED6;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`3<System.Int32,System.IntPtr,System.Boolean>
struct Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Event>
struct IEqualityComparer_1_t06A20FCE354CD17FFF4DEB1B07F8862B4B748455;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct KeyCollection_tD8E5051BC856554453D2FC2A3E67590779EEA8C1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct KeyCollection_t31778E37064B20473E234BE4072FB2008963CA04;
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_tD787DE628A7B4562857DC9DC6F9AF03C95D591A7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct ValueCollection_t213820D1291B006215466FC472F2AF2A1295581B;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>[]
struct EntryU5BU5D_tC0539D9A6E36E6322968A3569631DC0564666FCB;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>[]
struct EntryU5BU5D_t78B8E710EE9395C4BF503D2160E92165447499A5;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t941F1370F7FC19F6A28AF10930F940A742232497;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
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
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t4F9AD0F906A21B3318CFA9466B076A467E16305F;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// System.Exception
struct Exception_t;
// UnityEngine.ExitGUIException
struct ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityEngine.GUIScrollGroup
struct GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5;
// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847;
// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngineInternal.GenericStack
struct GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t537BA5EEEDB652AA60A00E4CEA6B73710FBDD806;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ObjectGUIState
struct ObjectGUIState_t7BE88DC8B9C7187A77D63BBCBE9DB7B674863C15;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.ScrollViewState
struct ScrollViewState_t004FCCBFB6795BD76582385D6D308D8F9ECF41B6;
// System.String
struct String_t;
// UnityEngine.TextEditor
struct TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventModifiers_t48244B043FBB42CDD555C6AC43279EC7158777AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUITargetAttribute_t3F08CE7E00D79CB555B94AA7FA1BCB4B144B922B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextEditOp_tE4F97FA51F71D9639293ABF86A39AB430D400B4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral010AFEFEB861AC9FACA8EBF9C6C9CC1C80C4A78A;
IL2CPP_EXTERN_C String_t* _stringLiteral0150AFA3D0411ED67D7C3CBAC0A989FC1A7CEAE3;
IL2CPP_EXTERN_C String_t* _stringLiteral01637B662C860A4FEA1F5B57B9E4049BCA27A92A;
IL2CPP_EXTERN_C String_t* _stringLiteral01FE2A7BAF056155917298D04AE54B7D6AF27894;
IL2CPP_EXTERN_C String_t* _stringLiteral028D7034AFF25D3F9A597A5740013E38DA19D317;
IL2CPP_EXTERN_C String_t* _stringLiteral0A9E6C82A5143ED08E63E500C0978BF5985C84CA;
IL2CPP_EXTERN_C String_t* _stringLiteral0C9DC099BD4ECD04B696BF38FC02346103F2BC97;
IL2CPP_EXTERN_C String_t* _stringLiteral0EF758EF1A06CA13329086B705ED12F47B9F606F;
IL2CPP_EXTERN_C String_t* _stringLiteral102739C5104D902E458722250A3B39AC156B601C;
IL2CPP_EXTERN_C String_t* _stringLiteral10ACE3A0FC4434FF078CBB1C934C7CE2ACEB3EE1;
IL2CPP_EXTERN_C String_t* _stringLiteral13490EE15BBBA5055FAF4DFF43BAF8642B91BD99;
IL2CPP_EXTERN_C String_t* _stringLiteral1388D2C9310312FF15F8415A0A8F63A7EA461B41;
IL2CPP_EXTERN_C String_t* _stringLiteral13CDCE216B91792515C4C64C7FCF5B265C404257;
IL2CPP_EXTERN_C String_t* _stringLiteral16D9C3063FF5F852963147CC12C5C552A5635796;
IL2CPP_EXTERN_C String_t* _stringLiteral1850F725FAEC7FF6559CFDD75BF86B7B6458F564;
IL2CPP_EXTERN_C String_t* _stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305;
IL2CPP_EXTERN_C String_t* _stringLiteral1CD31FFC09BB731749BFAAC984D2EED8E22C771A;
IL2CPP_EXTERN_C String_t* _stringLiteral1DF9EACB3FD057DF42A2784124CCE504D5860AEE;
IL2CPP_EXTERN_C String_t* _stringLiteral20E53EA12D943C14376715D21DAB74E4D73C5751;
IL2CPP_EXTERN_C String_t* _stringLiteral2119843D49FC28C2274616B4EFB48C1D4F29ED02;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral25F5EF17AC725A91FE3F3CE895C16ED6DD9B3499;
IL2CPP_EXTERN_C String_t* _stringLiteral26699342C90E4DB263790E30D55D90081254CB6E;
IL2CPP_EXTERN_C String_t* _stringLiteral26A0821DCB6810F9EE588E7C2AF0FE26E68B99AC;
IL2CPP_EXTERN_C String_t* _stringLiteral2883CBF3427C9821C117DF0C36BE40EE23EC5A70;
IL2CPP_EXTERN_C String_t* _stringLiteral28C03674125DA29250BA73594E6061FD480A3CB7;
IL2CPP_EXTERN_C String_t* _stringLiteral31B33F7B74029BC575D705EC4DF0CD1A761DB7F9;
IL2CPP_EXTERN_C String_t* _stringLiteral34D4B5F20FD7AA47487EDE07001792463720D1CE;
IL2CPP_EXTERN_C String_t* _stringLiteral34F817DA4635C4C22DF5692FF51A196067483534;
IL2CPP_EXTERN_C String_t* _stringLiteral350D3BF828268FA677A331CBD1D40C9DB88673B3;
IL2CPP_EXTERN_C String_t* _stringLiteral36967F33A1482179FE45CD9CCC3AE6241AA43F85;
IL2CPP_EXTERN_C String_t* _stringLiteral3C3D97D6F00F5718D7008966DC8F93F9BB87FA51;
IL2CPP_EXTERN_C String_t* _stringLiteral3D3A00B527F2755AFFF36C8F4AC13A53B5DC81D3;
IL2CPP_EXTERN_C String_t* _stringLiteral3D5EAEDD29399C149223964BD7513C036E82B631;
IL2CPP_EXTERN_C String_t* _stringLiteral3D5EBA7CCD58DABCEC7A4FD33516FBE9E3482887;
IL2CPP_EXTERN_C String_t* _stringLiteral3E5BBD622A1890626F72D09F11351B02F04CD245;
IL2CPP_EXTERN_C String_t* _stringLiteral3E5BD769C75B1966931F7A0F059B152FE79C2619;
IL2CPP_EXTERN_C String_t* _stringLiteral406039EC8806862DC33A11277467F97951546F04;
IL2CPP_EXTERN_C String_t* _stringLiteral4112C4C0070D77562F4AE5B1077F66F430FF4706;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral427F9C39B825298A84F532F59ACB9D4467A1137C;
IL2CPP_EXTERN_C String_t* _stringLiteral43A6F489C4D44800507561D5B432827897F9FF7C;
IL2CPP_EXTERN_C String_t* _stringLiteral46AC1D8C432B177A3C113AD943EB74504A0EB337;
IL2CPP_EXTERN_C String_t* _stringLiteral4718C7000562AF450B2C8B2BD4445A87205F7666;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral4D9134A16EE1AB6C900D14CBC31703F0C1B140F0;
IL2CPP_EXTERN_C String_t* _stringLiteral4E8B350C9F6A421FA80C169857D1523CD21C39B5;
IL2CPP_EXTERN_C String_t* _stringLiteral5031FEC61137D005DAA2BFB10E1404651A112B0B;
IL2CPP_EXTERN_C String_t* _stringLiteral5220DD5A418252356A406067BC43EC0FB773A172;
IL2CPP_EXTERN_C String_t* _stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4;
IL2CPP_EXTERN_C String_t* _stringLiteral544D3EEC62A9634856AD5B296AC23A5284C8530C;
IL2CPP_EXTERN_C String_t* _stringLiteral5514D8BE9E761133A77457A12D3915CB3E07E5AF;
IL2CPP_EXTERN_C String_t* _stringLiteral587448EFC1FDECCCDC2B9C8ED4E29674F7598E89;
IL2CPP_EXTERN_C String_t* _stringLiteral5DACFD2D2C00202C188DA9BBF7B7FDC9BB27DE15;
IL2CPP_EXTERN_C String_t* _stringLiteral623434E618E34EEBE273A4DC2D0558449A41FDA6;
IL2CPP_EXTERN_C String_t* _stringLiteral62F0048B45A8ADBC774F1B00911C9AA337E1F633;
IL2CPP_EXTERN_C String_t* _stringLiteral6458183EA8D5BC1AAE58A98C841058647CCC35DE;
IL2CPP_EXTERN_C String_t* _stringLiteral65E8AF72B6FAEC3075CAD781342983D346E05E2F;
IL2CPP_EXTERN_C String_t* _stringLiteral66976C0DEE9EDAC6B3AEF3749751FE7A3A10BC5C;
IL2CPP_EXTERN_C String_t* _stringLiteral6A29B894463C559DBFBBD12619BBEF4656AFD847;
IL2CPP_EXTERN_C String_t* _stringLiteral6AA217DF0D68B58AB3C3253326CA9B07CE4EC7C5;
IL2CPP_EXTERN_C String_t* _stringLiteral70E962167414B98D1C47009CF2298022592E68D4;
IL2CPP_EXTERN_C String_t* _stringLiteral710CEFF5A6D94EED332EF2BD41342B8B16B45293;
IL2CPP_EXTERN_C String_t* _stringLiteral7174BAC93C4533B5ACC05736AE4D0C900491A008;
IL2CPP_EXTERN_C String_t* _stringLiteral7AADBCDB9D121BC9D88064E31E08A3186262CAE6;
IL2CPP_EXTERN_C String_t* _stringLiteral7BBDDC94A571A1FD7D1FE9C4E3062CB11564D926;
IL2CPP_EXTERN_C String_t* _stringLiteral7DB9363E02344639F4087A15C3DC6D9B47047259;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870;
IL2CPP_EXTERN_C String_t* _stringLiteral7EF39B884F9764078345103493B55121123B1B46;
IL2CPP_EXTERN_C String_t* _stringLiteral81AB3FCA888E7214C2733551168655ABA4D3C65A;
IL2CPP_EXTERN_C String_t* _stringLiteral837B17505EC06BAC0E4AA984798E9DB32B9C3CA0;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral877F6F7B61373508B1123D79708B393A9438C37E;
IL2CPP_EXTERN_C String_t* _stringLiteral87B3094029FCCD239A5B4D34C2785A747B721D3E;
IL2CPP_EXTERN_C String_t* _stringLiteral90859DEB6AC59506D68B2F923373ACE0AD6D837C;
IL2CPP_EXTERN_C String_t* _stringLiteral92A724EB1B2F6C69B890D3B5F5FC04BD603592F2;
IL2CPP_EXTERN_C String_t* _stringLiteral942648654A524F6E984CCA6E5751578BD0E8540E;
IL2CPP_EXTERN_C String_t* _stringLiteral992995A68967F0F220E6B79219D8B8AFD2B64A56;
IL2CPP_EXTERN_C String_t* _stringLiteral9C1E874DA059D22C91283C44117D602D9080875A;
IL2CPP_EXTERN_C String_t* _stringLiteral9C78EED60250BE323A3D97A9C62B6E711125C4C9;
IL2CPP_EXTERN_C String_t* _stringLiteral9FA1FF57F726441CA277BF9734892B299CA3297B;
IL2CPP_EXTERN_C String_t* _stringLiteral9FF3949A2EE199375C9E51BB6ACCD0AE243AF691;
IL2CPP_EXTERN_C String_t* _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA314507B0573B983FD845620D28E0B2F951D0E10;
IL2CPP_EXTERN_C String_t* _stringLiteralA3955ADB3BC69ECFE423744D4F4F597294A20827;
IL2CPP_EXTERN_C String_t* _stringLiteralA545894C0ECE6054328A1F11A0ABB56AEE952619;
IL2CPP_EXTERN_C String_t* _stringLiteralA6B35BC56FF405443673DBCB6226185BD30D1B95;
IL2CPP_EXTERN_C String_t* _stringLiteralA7F97E75A1B9ABE21090F40226508D1F9BFFC36F;
IL2CPP_EXTERN_C String_t* _stringLiteralA8D3437438DB8A85C804DDB64E69721F1D275030;
IL2CPP_EXTERN_C String_t* _stringLiteralA9803D8785C4C6903058FDDDAD15E80DA21A41ED;
IL2CPP_EXTERN_C String_t* _stringLiteralAA7EB40717F1BA8A905AA5B827AAE03AF1D0F2D0;
IL2CPP_EXTERN_C String_t* _stringLiteralADEB4AA857DAD985FCA140205A88361411529CC4;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralB468B2E60F7F60260C2916459A799050DD6D3E85;
IL2CPP_EXTERN_C String_t* _stringLiteralB8AA8F2673947FA36BB764D4DD75961AB3AF723E;
IL2CPP_EXTERN_C String_t* _stringLiteralB8E1418EB9CE2E5CF97CF8246D2776B9F1F33D67;
IL2CPP_EXTERN_C String_t* _stringLiteralBA6BD45D12B4E9306BD7E0CC99FEC1DEEBFBBC58;
IL2CPP_EXTERN_C String_t* _stringLiteralBD26781B489D74246E46948A3CF454478F1000C5;
IL2CPP_EXTERN_C String_t* _stringLiteralC23AFB60D910768AF949135D275BBAE168A46894;
IL2CPP_EXTERN_C String_t* _stringLiteralC581158E993200B82B36A56301468170ADB021DA;
IL2CPP_EXTERN_C String_t* _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC;
IL2CPP_EXTERN_C String_t* _stringLiteralD4FD617CB9624AE5C125D44F10E5B7C346F2E117;
IL2CPP_EXTERN_C String_t* _stringLiteralD552A0898A2992F3A04D422964D70AE596D70B66;
IL2CPP_EXTERN_C String_t* _stringLiteralD91C866DD696C68303515E6926044A10A2ADAB3C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDBA1945CFAADC613DE5170FD5C21296CCFF83615;
IL2CPP_EXTERN_C String_t* _stringLiteralDC732E3A9B0520E01A6AE99A59C55B4519E814DE;
IL2CPP_EXTERN_C String_t* _stringLiteralDEE3B7C6968135436FA4067DED4ED3ECBBC9B8B9;
IL2CPP_EXTERN_C String_t* _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2;
IL2CPP_EXTERN_C String_t* _stringLiteralE18A20FF89E2801DE5C0C60E05D569C3513C48C7;
IL2CPP_EXTERN_C String_t* _stringLiteralE2CCD613C9FC464A9A626816048CDFE16289EF5A;
IL2CPP_EXTERN_C String_t* _stringLiteralE3A68E5474204A05B00919D35DB3E888E3958496;
IL2CPP_EXTERN_C String_t* _stringLiteralE3EADA58476D85227490ACED9D3239769769DFDC;
IL2CPP_EXTERN_C String_t* _stringLiteralE4A22FB5EC2C885FFEF93EC0880562530642E93F;
IL2CPP_EXTERN_C String_t* _stringLiteralE54980410FFB1F28C7512F29E4518058DA986F3F;
IL2CPP_EXTERN_C String_t* _stringLiteralE5A9ADA05CBDBD11A3FDD0576FCE5B1CDA30E940;
IL2CPP_EXTERN_C String_t* _stringLiteralE7B9F94C0B0B71996D09AA98D20E270C100EAB93;
IL2CPP_EXTERN_C String_t* _stringLiteralE844BE1BC8BA23F51EC74943018ABA36BC1A51FF;
IL2CPP_EXTERN_C String_t* _stringLiteralE84F2B479265FAD93BE81E77636775B4B5E83831;
IL2CPP_EXTERN_C String_t* _stringLiteralEA74ED324D4EC0A66FF57C32244629F3B15A2CCF;
IL2CPP_EXTERN_C String_t* _stringLiteralEBB0134202814DB55DAD06EF2F379EECFE656772;
IL2CPP_EXTERN_C String_t* _stringLiteralED5169E4CC70ACFAD5449D117F0423892FBF0C89;
IL2CPP_EXTERN_C String_t* _stringLiteralF0C9BC936D0312C0E117B0CDF6A9FB6F2FE79D1B;
IL2CPP_EXTERN_C String_t* _stringLiteralF1129AA23E2182336739DE1026CACAE451BACE5D;
IL2CPP_EXTERN_C String_t* _stringLiteralF222CF93E01C3342431C7952E8BD62DEFC619783;
IL2CPP_EXTERN_C String_t* _stringLiteralF25B95468DAA02EC9AF41A21C2F589D8847BC27F;
IL2CPP_EXTERN_C String_t* _stringLiteralFA1435556F32329DD212289449459CCFA67730F8;
IL2CPP_EXTERN_C String_t* _stringLiteralFA62FBFE4E50CD6BF703F0C9569D92C185108758;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4C890AEA2FD3BA3DE92C9B54D52C89720AD6F9AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mF6FAFEDDE37A2FE277E1ABFF79B29FD0700A91F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m25295236FCA3F3483154632E7D7193F3A4963070_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m26D30094F62EB94273B024DB6AD146CD142F4202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mDDD3315E43032466AEEDF911F20449DC4096A528_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m457C24C18E42BAE0D0402741FDA0445E939FCB47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m6920FD9D9518E101681E8F562ED9732085222C10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIUtility_CheckOnGUI_mD167632D5D038DF66CC97F231CD45736D1F556D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIUtility_ExitGUI_m9B30B2DFC94CC1C04D1F78358D79E9DAC1231B03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m685E773E1D777772A2633097DD151A2A9E640D72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GUITargetAttribute_t3F08CE7E00D79CB555B94AA7FA1BCB4B144B922B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com;;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke;;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke;;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB500DDB8D220627F9BFAF448763790F027856F11 
{
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tC0539D9A6E36E6322968A3569631DC0564666FCB* ____entries_1;
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
	KeyCollection_tD8E5051BC856554453D2FC2A3E67590779EEA8C1* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD787DE628A7B4562857DC9DC6F9AF03C95D591A7* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t78B8E710EE9395C4BF503D2160E92165447499A5* ____entries_1;
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
	KeyCollection_t31778E37064B20473E234BE4072FB2008963CA04* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t213820D1291B006215466FC472F2AF2A1295581B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GUILayoutEntryU5BU5D_t941F1370F7FC19F6A28AF10930F940A742232497* ____items_1;
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

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.GUI
struct GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A  : public RuntimeObject
{
};

// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2  : public RuntimeObject
{
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};

// UnityEngine.GUILayout
struct GUILayout_tB26F0D6938B9B2AD04633B1DF56A1E52F3E6D177  : public RuntimeObject
{
};

// UnityEngine.GUILayoutUtility
struct GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F  : public RuntimeObject
{
};

// UnityEngine.GUIUtility
struct GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.ScrollViewState
struct ScrollViewState_t004FCCBFB6795BD76582385D6D308D8F9ECF41B6  : public RuntimeObject
{
};

// System.Collections.Stack
struct Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47  : public RuntimeObject
{
	// System.Object[] System.Collections.Stack::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Stack::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Stack::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack::_syncRoot
	RuntimeObject* ____syncRoot_3;
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

// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60  : public RuntimeObject
{
	// System.Int32 UnityEngine.GUILayoutUtility/LayoutCache::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_0;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::topLevel
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* ___topLevel_1;
	// UnityEngineInternal.GenericStack UnityEngine.GUILayoutUtility/LayoutCache::layoutGroups
	GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* ___layoutGroups_2;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::windows
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* ___windows_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
struct Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t4F9AD0F906A21B3318CFA9466B076A467E16305F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// UnityEngine.EventInterests
struct EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8 
{
	// System.Boolean UnityEngine.EventInterests::<wantsMouseMove>k__BackingField
	bool ___U3CwantsMouseMoveU3Ek__BackingField_0;
	// System.Boolean UnityEngine.EventInterests::<wantsMouseEnterLeaveWindow>k__BackingField
	bool ___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1;
	// System.Boolean UnityEngine.EventInterests::<wantsLessLayoutEvents>k__BackingField
	bool ___U3CwantsLessLayoutEventsU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventInterests
struct EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshaled_pinvoke
{
	int32_t ___U3CwantsMouseMoveU3Ek__BackingField_0;
	int32_t ___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1;
	int32_t ___U3CwantsLessLayoutEventsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.EventInterests
struct EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshaled_com
{
	int32_t ___U3CwantsMouseMoveU3Ek__BackingField_0;
	int32_t ___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1;
	int32_t ___U3CwantsLessLayoutEventsU3Ek__BackingField_2;
};

// UnityEngine.GUITargetAttribute
struct GUITargetAttribute_t3F08CE7E00D79CB555B94AA7FA1BCB4B144B922B  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 UnityEngine.GUITargetAttribute::displayMask
	int32_t ___displayMask_0;
};

// UnityEngineInternal.GenericStack
struct GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49  : public Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47
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

// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t537BA5EEEDB652AA60A00E4CEA6B73710FBDD806  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
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

// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventModifiers
struct EventModifiers_t48244B043FBB42CDD555C6AC43279EC7158777AC 
{
	// System.Int32 UnityEngine.EventModifiers::value__
	int32_t ___value___2;
};

// UnityEngine.EventType
struct EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E 
{
	// System.Int32 UnityEngine.EventType::value__
	int32_t ___value___2;
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

// UnityEngine.FocusType
struct FocusType_t1A40441BDB81AB88234A67B0E5B4C353E1618879 
{
	// System.Int32 UnityEngine.FocusType::value__
	int32_t ___value___2;
};

// UnityEngine.FontStyle
struct FontStyle_tDD46734FA9BCB99FB315CD7CAD1137EE536136D1 
{
	// System.Int32 UnityEngine.FontStyle::value__
	int32_t ___value___2;
};

// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F  : public RuntimeObject
{
	// System.Single UnityEngine.GUILayoutEntry::minWidth
	float ___minWidth_0;
	// System.Single UnityEngine.GUILayoutEntry::maxWidth
	float ___maxWidth_1;
	// System.Single UnityEngine.GUILayoutEntry::minHeight
	float ___minHeight_2;
	// System.Single UnityEngine.GUILayoutEntry::maxHeight
	float ___maxHeight_3;
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_4;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchWidth
	int32_t ___stretchWidth_5;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchHeight
	int32_t ___stretchHeight_6;
	// System.Boolean UnityEngine.GUILayoutEntry::consideredForMargin
	bool ___consideredForMargin_7;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::m_Style
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_Style_8;
};

// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com* ___m_SourceStyle_1;
};

// UnityEngine.IMECompositionMode
struct IMECompositionMode_t91425E64935387F2A2686BDE3FA67E047794FCD0 
{
	// System.Int32 UnityEngine.IMECompositionMode::value__
	int32_t ___value___2;
};

// System.Int32Enum
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;
};

// UnityEngine.KeyCode
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
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

// UnityEngine.ObjectGUIState
struct ObjectGUIState_t7BE88DC8B9C7187A77D63BBCBE9DB7B674863C15  : public RuntimeObject
{
	// System.IntPtr UnityEngine.ObjectGUIState::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.OperatingSystemFamily
struct OperatingSystemFamily_tC2354FCC5EAA102CE13F4AA66DB03040F04DADCB 
{
	// System.Int32 UnityEngine.OperatingSystemFamily::value__
	int32_t ___value___2;
};

// UnityEngine.PointerType
struct PointerType_t00C97EE2F8FD5AC50C50F016C12E702344E4F021 
{
	// System.Int32 UnityEngine.PointerType::value__
	int32_t ___value___2;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.ScaleMode
struct ScaleMode_t16AD656758EE54C56B3DA34FE4F2033C9C2EE13D 
{
	// System.Int32 UnityEngine.ScaleMode::value__
	int32_t ___value___2;
};

// UnityEngine.TextAnchor
struct TextAnchor_tA46E794186AC1CD0F22888652F589EBF7DFDF830 
{
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;
};

// UnityEngine.TextClipping
struct TextClipping_t1F96F2BE75725AB66B35C56B06F479BCB1C822AD 
{
	// System.Int32 UnityEngine.TextClipping::value__
	int32_t ___value___2;
};

// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A  : public RuntimeObject
{
	// System.IntPtr UnityEngine.TouchScreenKeyboard::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.GUILayoutOption/Type
struct Type_t94B090894A3B9A5C5AEBD91800DB10688CC00F4A 
{
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___2;
};

// UnityEngine.TextEditor/CharacterType
struct CharacterType_t56875DC2E7F07B91C7B1B702EDAC85F297ECFE92 
{
	// System.Int32 UnityEngine.TextEditor/CharacterType::value__
	int32_t ___value___2;
};

// UnityEngine.TextEditor/DblClickSnapping
struct DblClickSnapping_tF4CBC013607C5AF82265D749DBB341466DEF69D2 
{
	// System.Byte UnityEngine.TextEditor/DblClickSnapping::value__
	uint8_t ___value___2;
};

// UnityEngine.TextEditor/Direction
struct Direction_t970B70A2139252263F1A12C28D2E78DCF5DFBB3C 
{
	// System.Int32 UnityEngine.TextEditor/Direction::value__
	int32_t ___value___2;
};

// UnityEngine.TextEditor/TextEditOp
struct TextEditOp_tE4F97FA51F71D9639293ABF86A39AB430D400B4E 
{
	// System.Int32 UnityEngine.TextEditor/TextEditOp::value__
	int32_t ___value___2;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// UnityEngine.ExitGUIException
struct ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549  : public Exception_t
{
};

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1* ___m_FontTextureRebuildCallback_5;
};

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D  : public GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F
{
	// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry> UnityEngine.GUILayoutGroup::entries
	List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* ___entries_11;
	// System.Boolean UnityEngine.GUILayoutGroup::isVertical
	bool ___isVertical_12;
	// System.Boolean UnityEngine.GUILayoutGroup::resetCoords
	bool ___resetCoords_13;
	// System.Single UnityEngine.GUILayoutGroup::spacing
	float ___spacing_14;
	// System.Boolean UnityEngine.GUILayoutGroup::sameSize
	bool ___sameSize_15;
	// System.Boolean UnityEngine.GUILayoutGroup::isWindow
	bool ___isWindow_16;
	// System.Int32 UnityEngine.GUILayoutGroup::windowID
	int32_t ___windowID_17;
	// System.Int32 UnityEngine.GUILayoutGroup::m_Cursor
	int32_t ___m_Cursor_18;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountX
	int32_t ___m_StretchableCountX_19;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountY
	int32_t ___m_StretchableCountY_20;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedWidth
	bool ___m_UserSpecifiedWidth_21;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedHeight
	bool ___m_UserSpecifiedHeight_22;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinWidth
	float ___m_ChildMinWidth_23;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxWidth
	float ___m_ChildMaxWidth_24;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinHeight
	float ___m_ChildMinHeight_25;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxHeight
	float ___m_ChildMaxHeight_26;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginLeft
	int32_t ___m_MarginLeft_27;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginRight
	int32_t ___m_MarginRight_28;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginTop
	int32_t ___m_MarginTop_29;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginBottom
	int32_t ___m_MarginBottom_30;
};

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
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

// UnityEngine.TextEditor
struct TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27  : public RuntimeObject
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.TextEditor::keyboardOnScreen
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___keyboardOnScreen_0;
	// System.Int32 UnityEngine.TextEditor::controlID
	int32_t ___controlID_1;
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style_2;
	// System.Boolean UnityEngine.TextEditor::multiline
	bool ___multiline_3;
	// System.Boolean UnityEngine.TextEditor::hasHorizontalCursorPos
	bool ___hasHorizontalCursorPos_4;
	// System.Boolean UnityEngine.TextEditor::isPasswordField
	bool ___isPasswordField_5;
	// System.Boolean UnityEngine.TextEditor::m_HasFocus
	bool ___m_HasFocus_6;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scrollOffset_7;
	// UnityEngine.GUIContent UnityEngine.TextEditor::m_Content
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___m_Content_8;
	// UnityEngine.Rect UnityEngine.TextEditor::m_Position
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Position_9;
	// System.Int32 UnityEngine.TextEditor::m_CursorIndex
	int32_t ___m_CursorIndex_10;
	// System.Int32 UnityEngine.TextEditor::m_SelectIndex
	int32_t ___m_SelectIndex_11;
	// System.Boolean UnityEngine.TextEditor::m_RevealCursor
	bool ___m_RevealCursor_12;
	// UnityEngine.Vector2 UnityEngine.TextEditor::graphicalCursorPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___graphicalCursorPos_13;
	// UnityEngine.Vector2 UnityEngine.TextEditor::graphicalSelectCursorPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___graphicalSelectCursorPos_14;
	// System.Boolean UnityEngine.TextEditor::m_MouseDragSelectsWholeWords
	bool ___m_MouseDragSelectsWholeWords_15;
	// System.Int32 UnityEngine.TextEditor::m_DblClickInitPos
	int32_t ___m_DblClickInitPos_16;
	// UnityEngine.TextEditor/DblClickSnapping UnityEngine.TextEditor::m_DblClickSnap
	uint8_t ___m_DblClickSnap_17;
	// System.Boolean UnityEngine.TextEditor::m_bJustSelected
	bool ___m_bJustSelected_18;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos_19;
	// System.String UnityEngine.TextEditor::oldText
	String_t* ___oldText_20;
	// System.Int32 UnityEngine.TextEditor::oldPos
	int32_t ___oldPos_21;
	// System.Int32 UnityEngine.TextEditor::oldSelectPos
	int32_t ___oldSelectPos_22;
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

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Func`2<System.Exception,System.Boolean>
struct Func_2_tDDBE08B46BEFDD869DE0B97D023CB9C89674FED6  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`3<System.Int32,System.IntPtr,System.Boolean>
struct Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.GUIScrollGroup
struct GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5  : public GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D
{
	// System.Single UnityEngine.GUIScrollGroup::calcMinWidth
	float ___calcMinWidth_32;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxWidth
	float ___calcMaxWidth_33;
	// System.Single UnityEngine.GUIScrollGroup::calcMinHeight
	float ___calcMinHeight_34;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxHeight
	float ___calcMaxHeight_35;
	// System.Single UnityEngine.GUIScrollGroup::clientWidth
	float ___clientWidth_36;
	// System.Single UnityEngine.GUIScrollGroup::clientHeight
	float ___clientHeight_37;
	// System.Boolean UnityEngine.GUIScrollGroup::allowHorizontalScroll
	bool ___allowHorizontalScroll_38;
	// System.Boolean UnityEngine.GUIScrollGroup::allowVerticalScroll
	bool ___allowVerticalScroll_39;
	// System.Boolean UnityEngine.GUIScrollGroup::needsHorizontalScrollbar
	bool ___needsHorizontalScrollbar_40;
	// System.Boolean UnityEngine.GUIScrollGroup::needsVerticalScrollbar
	bool ___needsVerticalScrollbar_41;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___horizontalScrollbar_42;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___verticalScrollbar_43;
};

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ___m_Styles_31;
};

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.GUI/WindowFunction
struct WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>

// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GUILayoutEntryU5BU5D_t941F1370F7FC19F6A28AF10930F940A742232497* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Attribute

// System.Attribute

// UnityEngine.GUI
struct GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields
{
	// System.Int32 UnityEngine.GUI::s_HotTextField
	int32_t ___s_HotTextField_0;
	// System.Int32 UnityEngine.GUI::s_BoxHash
	int32_t ___s_BoxHash_1;
	// System.Int32 UnityEngine.GUI::s_ButonHash
	int32_t ___s_ButonHash_2;
	// System.Int32 UnityEngine.GUI::s_RepeatButtonHash
	int32_t ___s_RepeatButtonHash_3;
	// System.Int32 UnityEngine.GUI::s_ToggleHash
	int32_t ___s_ToggleHash_4;
	// System.Int32 UnityEngine.GUI::s_ButtonGridHash
	int32_t ___s_ButtonGridHash_5;
	// System.Int32 UnityEngine.GUI::s_SliderHash
	int32_t ___s_SliderHash_6;
	// System.Int32 UnityEngine.GUI::s_BeginGroupHash
	int32_t ___s_BeginGroupHash_7;
	// System.Int32 UnityEngine.GUI::s_ScrollviewHash
	int32_t ___s_ScrollviewHash_8;
	// System.DateTime UnityEngine.GUI::<nextScrollStepTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CnextScrollStepTimeU3Ek__BackingField_9;
	// UnityEngine.GUISkin UnityEngine.GUI::s_Skin
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___s_Skin_10;
	// UnityEngine.Rect UnityEngine.GUI::s_ToolTipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_ToolTipRect_11;
	// UnityEngineInternal.GenericStack UnityEngine.GUI::<scrollViewStates>k__BackingField
	GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* ___U3CscrollViewStatesU3Ek__BackingField_12;
};

// UnityEngine.GUI

// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields
{
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___none_6;
};

// UnityEngine.GUIContent

// UnityEngine.GUILayout

// UnityEngine.GUILayout

// UnityEngine.GUILayoutUtility
struct GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredLayouts
	Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* ___s_StoredLayouts_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredWindows
	Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* ___s_StoredWindows_1;
	// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::current
	LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* ___current_2;
	// UnityEngine.Rect UnityEngine.GUILayoutUtility::kDummyRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___kDummyRect_3;
};

// UnityEngine.GUILayoutUtility

// UnityEngine.GUIUtility
struct GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields
{
	// System.Int32 UnityEngine.GUIUtility::s_ControlCount
	int32_t ___s_ControlCount_0;
	// System.Int32 UnityEngine.GUIUtility::s_SkinMode
	int32_t ___s_SkinMode_1;
	// System.Int32 UnityEngine.GUIUtility::s_OriginalID
	int32_t ___s_OriginalID_2;
	// System.Action UnityEngine.GUIUtility::takeCapture
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___takeCapture_3;
	// System.Action UnityEngine.GUIUtility::releaseCapture
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___releaseCapture_4;
	// System.Func`3<System.Int32,System.IntPtr,System.Boolean> UnityEngine.GUIUtility::processEvent
	Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C* ___processEvent_5;
	// System.Action UnityEngine.GUIUtility::cleanupRoots
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___cleanupRoots_6;
	// System.Func`2<System.Exception,System.Boolean> UnityEngine.GUIUtility::endContainerGUIFromException
	Func_2_tDDBE08B46BEFDD869DE0B97D023CB9C89674FED6* ___endContainerGUIFromException_7;
	// System.Action UnityEngine.GUIUtility::guiChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___guiChanged_8;
	// System.Boolean UnityEngine.GUIUtility::<guiIsExiting>k__BackingField
	bool ___U3CguiIsExitingU3Ek__BackingField_9;
	// System.Func`1<System.Boolean> UnityEngine.GUIUtility::s_HasCurrentWindowKeyFocusFunc
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___s_HasCurrentWindowKeyFocusFunc_10;
};

// UnityEngine.GUIUtility

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// UnityEngine.ScrollViewState

// UnityEngine.ScrollViewState

// System.Collections.Stack

// System.Collections.Stack

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.GUILayoutUtility/LayoutCache

// UnityEngine.GUILayoutUtility/LayoutCache

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// Microsoft.CodeAnalysis.EmbeddedAttribute

// Microsoft.CodeAnalysis.EmbeddedAttribute

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// UnityEngine.EventInterests

// UnityEngine.EventInterests

// UnityEngine.GUITargetAttribute

// UnityEngine.GUITargetAttribute

// UnityEngineInternal.GenericStack

// UnityEngineInternal.GenericStack

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Runtime.CompilerServices.IsReadOnlyAttribute

// System.Runtime.CompilerServices.IsReadOnlyAttribute

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// System.UInt32

// System.UInt32

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

// System.Reflection.BindingFlags

// System.Reflection.BindingFlags

// System.Delegate

// System.Delegate

// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields
{
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_MasterEvent_2;
};

// UnityEngine.Event

// UnityEngine.EventModifiers

// UnityEngine.EventModifiers

// UnityEngine.EventType

// UnityEngine.EventType

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.FocusType

// UnityEngine.FocusType

// UnityEngine.FontStyle

// UnityEngine.FontStyle

// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_StaticFields
{
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::kDummyRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___kDummyRect_9;
	// System.Int32 UnityEngine.GUILayoutEntry::indent
	int32_t ___indent_10;
};

// UnityEngine.GUILayoutEntry

// UnityEngine.GUIStyleState

// UnityEngine.GUIStyleState

// UnityEngine.IMECompositionMode

// UnityEngine.IMECompositionMode

// System.Int32Enum

// System.Int32Enum

// UnityEngine.KeyCode

// UnityEngine.KeyCode

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.ObjectGUIState

// UnityEngine.ObjectGUIState

// UnityEngine.OperatingSystemFamily

// UnityEngine.OperatingSystemFamily

// UnityEngine.PointerType

// UnityEngine.PointerType

// UnityEngine.RectOffset

// UnityEngine.RectOffset

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.ScaleMode

// UnityEngine.ScaleMode

// UnityEngine.TextAnchor

// UnityEngine.TextAnchor

// UnityEngine.TextClipping

// UnityEngine.TextClipping

// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A_StaticFields
{
	// System.Boolean UnityEngine.TouchScreenKeyboard::<disableInPlaceEditing>k__BackingField
	bool ___U3CdisableInPlaceEditingU3Ek__BackingField_1;
};

// UnityEngine.TouchScreenKeyboard

// UnityEngine.GUILayoutOption/Type

// UnityEngine.GUILayoutOption/Type

// UnityEngine.TextEditor/CharacterType

// UnityEngine.TextEditor/CharacterType

// UnityEngine.TextEditor/DblClickSnapping

// UnityEngine.TextEditor/DblClickSnapping

// UnityEngine.TextEditor/Direction

// UnityEngine.TextEditor/Direction

// UnityEngine.TextEditor/TextEditOp

// UnityEngine.TextEditor/TextEditOp

// UnityEngine.ExitGUIException

// UnityEngine.ExitGUIException

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6_StaticFields
{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___textureRebuilt_4;
};

// UnityEngine.Font

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_StaticFields
{
	// UnityEngine.GUILayoutEntry UnityEngine.GUILayoutGroup::none
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* ___none_31;
};

// UnityEngine.GUILayoutGroup

// UnityEngine.GUILayoutOption

// UnityEngine.GUILayoutOption

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};

// UnityEngine.GUIStyle

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.TextEditor
struct TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27_StaticFields
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp> UnityEngine.TextEditor::s_Keyactions
	Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818* ___s_Keyactions_23;
};

// UnityEngine.TextEditor

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

// System.Func`1<System.Boolean>

// System.Func`1<System.Boolean>

// System.Func`2<System.Exception,System.Boolean>

// System.Func`2<System.Exception,System.Boolean>

// System.Func`2<System.Object,System.Boolean>

// System.Func`2<System.Object,System.Boolean>

// System.Func`3<System.Int32,System.IntPtr,System.Boolean>

// System.Func`3<System.Int32,System.IntPtr,System.Boolean>

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// UnityEngine.GUIScrollGroup

// UnityEngine.GUIScrollGroup

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields
{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___current_33;
};

// UnityEngine.GUISkin

// System.Reflection.TargetInvocationException

// System.Reflection.TargetInvocationException

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.GUI/WindowFunction

// UnityEngine.GUI/WindowFunction
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* m_Items[1];

	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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

IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_back(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_cleanup(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com_back(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com_cleanup(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_back(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_cleanup(GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke(const RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5& unmarshaled, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_back(const RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke& marshaled, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5& unmarshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_cleanup(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com_back(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com_cleanup(GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_com(const RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5& unmarshaled, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com& marshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_com_back(const RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com& marshaled, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5& unmarshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_com_cleanup(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com& marshaled);

// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m480A9507410375C999B20A1E0FA56C7E41489974_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m14B4D7B4BDD73D1A4985E09747AF5B2B6A6444D1_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC0F84089707699016E685213CFF60997BC7CB12B_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE0470880427DED948EF413AD5E9525F41CAF7D1D_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Boolean>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) ;
// TResult System.Func`3<System.Int32,System.IntPtr,System.Boolean>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_mDFA3CD122659AE2902BCCD5F89B3CCCA94E041DF_gshared_inline (Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C* __this, int32_t ___0_arg1, intptr_t ___1_arg2, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_GetWindowRect_Injected_m03328FF57858A53621C5907B345C56FA2C5AF0EC (int32_t ___0_windowID, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___1_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_MoveWindow_Injected_mDFDA2042DAFBDEBD108AC01F6F19E7D0F395B6A7 (int32_t ___0_windowID, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___1_r, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mF6FAFEDDE37A2FE277E1ABFF79B29FD0700A91F8 (Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* __this, int32_t ___0_key, LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598*, int32_t, LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutCache__ctor_m73B4DC62A0A7669976C8444DDB54EF8D55BF3E0B (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* __this, int32_t ___0_instanceID, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m6920FD9D9518E101681E8F562ED9732085222C10 (Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* __this, int32_t ___0_key, LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598*, int32_t, LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___0_key, ___1_value, method);
}
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* GUILayoutUtility_SelectIDList_m601F4AA990B7FD59A779F5375EC55ADDB86927A9 (int32_t ___0_instanceID, bool ___1_isWindow, const RuntimeMethod* method) ;
// UnityEngine.Event UnityEngine.Event::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD (const RuntimeMethod* method) ;
// UnityEngine.EventType UnityEngine.Event::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_set_style_m0A23F7EFF504A581FC6CA86EF3BE753F060AC48A (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIUtility_get_pixelsPerPoint_m13E69FE793E736FA60A61C6756F2FF57BA6C9F31 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFreeGroup_m81D18A1401F6FF7EB4A3C1CC26D9BE80998BBF5C (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* ___0_toplevel, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutSingleGroup_m95E3F31426ACA641C57016A1D1A058366A56AFE8 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* ___0_i, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
inline Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20 (List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 (*) (List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::Dispose()
inline void Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454 (Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::get_Current()
inline GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline (Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53* __this, const RuntimeMethod* method)
{
	return ((  GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* (*) (Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::MoveNext()
inline bool Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13 (Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_ResetCursor_m58C36F1ABC54BE5EFC16D512318BED9EB8918127 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GUILayoutUtility_Internal_GetWindowRect_m4F0CEA512EAD2BF0BBA0218A10B9C820C24D44CE (int32_t ___0_windowID, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_MoveWindow_mAD1ECDE72F3573D2F71B43C5FB8F90C10919C6CF (int32_t ___0_windowID, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_r, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor()
inline void Dictionary_2__ctor_m26D30094F62EB94273B024DB6AD146CD142F4202 (Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Void UnityEngineInternal.GenericStack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericStack__ctor_mD21753D674298C09F3684F19DD42680323055586 (GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::set_id(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LayoutCache_set_id_m532720FF0F65E8039E37D015910E2F1AE1C9F4FB_inline (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutOption::.ctor(UnityEngine.GUILayoutOption/Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutOption__ctor_m4EF826EA43073869166C8D94A1D9EB7898ACC3AA (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* __this, int32_t ___0_type, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUI_set_nextScrollStepTime_mA35BA69E3FDBC961E42F6C9D02BB4E8776926A09_inline (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_CheckOnGUI_mD167632D5D038DF66CC97F231CD45736D1F556D6 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DoSetSkin_mF4C06A8BE59628B6514F7FBF9422214A48BE03B9 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___0_newSkin, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUIUtility_GetDefaultSkin_m3275F31A9D5C3D90A1BCF5135F5B3968D6CD2C33 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUISkin::MakeCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_MakeCurrent_mDB3BB1FBA5BD2FEDDA3F32F11170F47A6444AEED (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.GUIClip::GetMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GUIClip_GetMatrix_mABFDC4C3D2B71C84191EAA109A4373A1D75BD3E1 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIClip::SetMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_SetMatrix_m2C4B22CA0D33E580CBD455CC8E5422C8FF229733 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_m, const RuntimeMethod* method) ;
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* GUIContent_Temp_m4AE3B839AF38DD23ECC1D585C391E1CA43B8EA73 (String_t* ___0_t, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_label_m99E1A8D6D8592F88F581437D24DB1EDE05C63E5E (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mFC6559DAC18FE889F1B94729AED3550374D18089 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DoLabel_mE43FD8B17DE5AF3B9E12E15B548CD6846F4AF27F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_box_m21BE7FC56D903B95BAFAE8890425D330EA88D893 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_m4A53BAE78DC7C6724F50E54D9BEB7135BAA0DA0C (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIUtility::GetControlID(System.Int32,UnityEngine.FocusType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_GetControlID_m2E0F66C8714A84DD5E9BEF4B9B464DAF1C03A9F7 (int32_t ___0_hint, int32_t ___1_focus, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_point, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Draw_mACFC9CE57BD530BB6A9592149DD95108A8014406 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_controlID, bool ___3_on, bool ___4_hover, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_mC05C634998E83DB614858EC020F6A109AA782A93 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIUtility::GetControlID(System.Int32,UnityEngine.FocusType,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_GetControlID_m3AACC1B4BDE62E7C3E5D861A470351FA1BAA752E (int32_t ___0_hint, int32_t ___1_focusType, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___2_rect, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_mF539BB7C1C7D6C46E457F9A830A637D3D2EFDAF6 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, int32_t ___1_id, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___2_content, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___3_style, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_DoButton_m6B5D49C56FD43B570B43D9500AC5AFDE0533E99D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, int32_t ___1_id, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___2_content, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___3_style, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUIUtility::HitTest(UnityEngine.Rect,UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_HitTest_m0312C850D991342F3A7656A959C87466500F2987 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___1_evt, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::GrabMouseControl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_GrabMouseControl_mA4B15F8FC1584E422AAA4FBAA2C8A25FCB70B62A (int32_t ___0_id, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::Use()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Use_mD77A166D8CFEC4997484C58BC55FEB2D288D3453 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Event::get_alt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_alt_m57F7F5C1F5FFCE43EFA6889F83CFA42DCA18A74B (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Event::get_shift()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_shift_mB8409DA839B09DC6137848E131A6DBE70BB9E70A (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Event::get_command()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_command_m202DE2CB0BE0AAB5CDFEC9DA1BBD3B51E8497547 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Event::get_control()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_control_m1E363A7ABA4F2E8CF41C661A48D53D85D635D320 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIUtility::get_keyboardControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_get_keyboardControl_mB0FAC848390B7F163CD2EE0A911FADD5CAD70B1E (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_changed_mBD91A44AFA77D2BF883B3150AF4AE6AC3ED121DC (bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::HasMouseControl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_HasMouseControl_m336734E97742086851F3C78CC9DAB55508AA44FF (int32_t ___0_id, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::ReleaseMouseControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_ReleaseMouseControl_m956B2CF27B6D82677D2960D310D92F043FCEC82B (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Draw_m7B978F5F5B576810CF8546142D23FD9990E002D8 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, bool ___2_isHover, bool ___3_isActive, bool ___4_on, bool ___5_hasKeyboardFocus, const RuntimeMethod* method) ;
// System.String UnityEngine.GUIContent::get_tooltip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIContent_get_tooltip_mC2D07D7B2884A5F5A56F84A7FE6BF39905AB15BD (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.GUIClip::get_visibleRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GUIClip_get_visibleRect_m93F10FF2376C3BBBF3562A67DD7E207240D2F611 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUIStyle::IsTooltipActive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_IsTooltipActive_mAD93F97B98889CA47BF1305F3D4C87D5EE8DD777 (String_t* ___0_tooltip, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_size, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::SetMouseTooltip(System.String,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_SetMouseTooltip_mFF3E22C7330AE180E83AB2929049BCD87B13B21E (String_t* ___0_tooltip, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_screenRect, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::DoControl(UnityEngine.Rect,System.Int32,System.Boolean,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_DoControl_m2E99A053EADA967772D440EDDC745562BDC848D9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, int32_t ___1_id, bool ___2_on, bool ___3_hover, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___4_content, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___5_style, const RuntimeMethod* method) ;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUI_get_skin_m97EC9EB4628B311C0DB7DF9FB19FAD82D6790A1B (const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_window_m760DAF129E72775DFD18CB71720AD306345E91C2 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.GUI::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GUI_DoWindow_mBB14F413BB624C2AC622262DBFE5376A06978433 (int32_t ___0_id, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_clientRect, WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* ___2_func, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___3_title, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___4_style, GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___5_skin, bool ___6_forceRectOnLayout, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.GUI::Internal_DoWindow(System.Int32,System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GUI_Internal_DoWindow_m51C423AD09C2F6AAD8DF42D8D155CCB3C85882CD (int32_t ___0_id, int32_t ___1_instanceID, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___2_clientRect, WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* ___3_func, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___4_title, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___5_style, RuntimeObject* ___6_skin, bool ___7_forceRectOnLayout, const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_Width_m3FADF145F37481F9FEFF0E89E8A466CF5532DCE3 (float ___0_width, const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_Height_m5E1526C541663A21437ED06E233FDDA08A856B91 (float ___0_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_BeginWindow_m99FBC28B305B9C0589BC73138073BE9420C977F5 (int32_t ___0_windowID, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___1_style, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___2_options, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_skin_mD51BAED314B39004AE3FDE74F9895CA19F3E40E5 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_inline (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, int32_t ___0_id, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility::Layout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Layout_mBC6C938DC931B8CABC1FA6C33AA60ECFAC3D9B30 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::get_color_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_get_color_Injected_m7B9A31188627647FDD914FB8A83C32627769D1CA (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_color_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_color_Injected_mF82410FC38D4C12CEC8ADCC9CCCC00F12035CA12 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::get_backgroundColor_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_get_backgroundColor_Injected_m81488D0D17EB867EEA60685182EAD8E0BC7CFB1F (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_backgroundColor_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_backgroundColor_Injected_m16FDF89F7678824BA547AEF70D4EC84615C7D6B8 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::get_contentColor_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_get_contentColor_Injected_mA592670CB3A23833ED6F6FA43D021CA049CB6FAC (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_contentColor_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_contentColor_Injected_mE1EFDCAC30FF6CE60437BF1B8B04488C9A75E2C9 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Internal_DoWindow_Injected(System.Int32,System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,System.Object,System.Boolean,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Internal_DoWindow_Injected_mFE36C291FB59CB9B7E5FB46D95D39203A2C36F21 (int32_t ___0_id, int32_t ___1_instanceID, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___2_clientRect, WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* ___3_func, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___4_title, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___5_style, RuntimeObject* ___6_skin, bool ___7_forceRectOnLayout, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___8_ret, const RuntimeMethod* method) ;
// System.String UnityEngine.GUIContent::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIContent_get_text_mC6D7981351923AD7F802AC659314BA56DF7F3ED6 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::EnsureValidCodePointIndex(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_EnsureValidCodePointIndex_m9C20E36F766CF8DBD87A36606B1FAEED3BE42BB1 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::op_Equality(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Equality_mF2A038255CAF5F1E86079B9EE0FC96DE54307C1F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_lhs, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_UpdateScrollOffset_mD3F056830FF3FFC3461ED965EB0B7E306536FC3B (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.TextEditor::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D TextEditor_get_position_m40763329A82988B1C5D5C1DA9919932061C99E13 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m89AC53A7E9BF9EB9E70297353DEAA6FEC2C800AC (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::set_selectIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::set_cursorIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::SelectAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectAll_mDEBAABE01DF37B1EE8EFDE43E8036B5C2813C685 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextEditor::get_cursorIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_GetCursorPixelPosition_m4FFBD3DC05CE503355DF01E57023AC349032CB2F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_cursorStringIndex, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextEditor::get_selectIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::InitKeyActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_InitKeyActions_m30295CE738738468794A7AE3338BE827B891A0DD (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m4C890AEA2FD3BA3DE92C9B54D52C89720AD6F9AD (Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818* __this, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818*, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*, const RuntimeMethod*))Dictionary_2_ContainsKey_m480A9507410375C999B20A1E0FA56C7E41489974_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_mDDD3315E43032466AEEDF911F20449DC4096A528 (Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818* __this, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818*, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*, const RuntimeMethod*))Dictionary_2_get_Item_m14B4D7B4BDD73D1A4985E09747AF5B2B6A6444D1_gshared)(__this, ___0_key, method);
}
// System.Boolean UnityEngine.TextEditor::PerformOperation(UnityEngine.TextEditor/TextEditOp,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_PerformOperation_m9CC1732A34CF801A0348A4296BDBC9D015AB4014 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_operation, bool ___1_textIsReadOnly, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextEditor::get_hasSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_get_hasSelection_mD63A0ECF990D21515ABCAD26A7974B58A8CECCE9 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_DeleteSelection_m520F49C6269E488DD60BBD4603DA869FC446A788 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.TextEditor::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.String System.String::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68 (String_t* __this, int32_t ___0_startIndex, int32_t ___1_count, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextEditor::FindEndOfPreviousWord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_FindEndOfPreviousWord_mFBDBEABAC6CFE72EF4ED33A3474EF3998E460C00 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_p, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextEditor::FindStartOfNextWord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_FindStartOfNextWord_m07650DF8A35625ED2B3230B6B4C96C730F945B0A (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_p, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextEditor::NextCodePointIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_NextCodePointIndex_mF426772BB6B0CD7A3FC4042070C21902BF576B31 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIUtility_get_systemCopyBuffer_m01E2DF71533C31A4C552B9177D7CBA0C6CA3FC2A (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextEditor::PreviousCodePointIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_PreviousCodePointIndex_mFCCC1034ABF4773A7E1E121D14ACB948FCA116E0 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::ClearCursorPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String System.String::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A (String_t* __this, int32_t ___0_startIndex, String_t* ___1_value, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_ReplaceSelection_m7BBCC70F065AED2C5942127F95234C17897A70C1 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, String_t* ___0_replace, const RuntimeMethod* method) ;
// System.String UnityEngine.TextEditor::get_SelectedText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextEditor_get_SelectedText_mC3562E09B81AB1CB8E6E86B677E2E76A62B742D6 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::DetectFocusChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_DetectFocusChange_mFE7D29EC9391792772129BD80FC236285218464B (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::GrabGraphicalCursorPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_GrabGraphicalCursorPos_m74915B49D9B0D200367FD710A1321C0D2E54B1E4 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIStyle::GetCursorStringIndex(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_GetCursorStringIndex_m9EFA2EC2CF6ACB5B4EAF3E9C4BC356980CBB4515 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_cursorPixelPosition, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIStyle::get_lineHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_lineHeight_mC814199D1ABA3CE38358BA70347562B0CDFEB96E (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_GetGraphicalLineStart_m4503A00148DE73D825654C4DCBFD27E8234A957B (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_p, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_GetGraphicalLineEnd_m3396AC4E6D75FB0F8E8F99C91384064A32F0DF3F (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_p, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4 (String_t* __this, Il2CppChar ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextEditor::IndexOfEndOfLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_IndexOfEndOfLine_mE03CC016EBA2B7AFD72A204D23D64C9F686C057B (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m3EB3F4ECDF6D990ADBACB6B168A8CBD4772B91A7 (String_t* __this, Il2CppChar ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextEditor::FindEndOfClassification(System.Int32,UnityEngine.TextEditor/Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_FindEndOfClassification_m9F20C27BA429FCCDDB9821EB9CE1E55535D44857 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_p, int32_t ___1_dir, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// UnityEngine.TextEditor/CharacterType UnityEngine.TextEditor::ClassifyChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_ClassifyChar_mC2104A64D197D5BE8FA3CB1CA12F0E6AFF50AC77 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextEditor::FindNextSeperator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_FindNextSeperator_mE89483949A16CD41C7A7BDE7ACA89DBAF5039384 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_startPos, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::MoveRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveRight_m568871F86B97196C66A4ADDF335E0ECEBEE18DC1 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::MoveLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveLeft_m3784BAF8F1BF69781ECFA40D8DDAFA6EA9EC58C1 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsWhiteSpace(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m8A6D2951619293FCA4E8F7D3A7190B533A7EDD78 (String_t* ___0_s, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsLetterOrDigit(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsLetterOrDigit_m29DAB6849D892142452C4B53F9A995CEC17E88A8 (String_t* ___0_s, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextEditor::FindPrevSeperator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_FindPrevSeperator_m8619997F12F419286B495A9BA5078634373542CB (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_startPos, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::MoveWordRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveWordRight_mB79E9C0C420ED29EB70CFAB49CBFE6C290ECD074 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::MoveWordLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveWordLeft_mFDC5DE936BBEF1CBAE440BD813107B04F20A2004 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectOffset::Remove(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectOffset_Remove_mC21D85A2BA4D0246FEC0B6C5F3C2D293CD41DB3D (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_top()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_CalcHeight_m57DA8F6020AE71B561ABCBCE74E0E58FD2ECC5E8 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, float ___1_width, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_right_m07C826B0BC79B0CBC01F5FF489D456C553F047BF (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_bottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::MoveUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveUp_mFCC668A7D89E092E588F92DA2FA2B4D03E7C921F (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::MoveDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveDown_m6084C0F493B71485D0D0796D77B4F32F391C7571 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::MoveLineStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveLineStart_mCFB0865ABB2E2B6A6FC98F77FE6E69A8E2578ED0 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::MoveLineEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveLineEnd_m811BAE3ABB333A4CE56C6C80439111CC1FE4450F (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::MoveToStartOfNextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveToStartOfNextWord_m8E6EA22B00CD272176D69786A716B5D125A026E2 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::MoveToEndOfPreviousWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveToEndOfPreviousWord_m2CE9EBD0A0FB0CCBC93912FA856B7628C4B3C3FF (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::MoveTextStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveTextStart_m59D0D8EADF0420DED887A9E6D9E780CBE1A87E16 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::MoveTextEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveTextEnd_m26A12A1C36B56C8D80B1E5C520EA38E670611028 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::MoveParagraphForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveParagraphForward_m5CD556511F7189813865732FDC28FB710ADA8572 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::MoveParagraphBackward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveParagraphBackward_mC64495DC5B520C2D279A03616D0ADDCE0718A510 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::MoveGraphicalLineStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveGraphicalLineStart_m0332C42BCF18CC2AE7024402CDFFD1F24210B3DD (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::MoveGraphicalLineEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveGraphicalLineEnd_m82D882096A9E72C9469F01F5E8882DBEA8DC2C0E (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::SelectLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectLeft_m7473E14B27D0D9503E88FE893B41CD52EA15A39B (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::SelectRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectRight_mC374DDA6EF8A522FF0CF35393EE38C07154FC062 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::SelectUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectUp_mA28D8B3CB2012DE645CC3A027E1168AF2E9BCB3B (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::SelectDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectDown_mC77A384914BA7F3CEC02C20D31CC28A3788B1C15 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::SelectWordRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectWordRight_m65AD5DB10CB51F517DA58E4BD5E11C3842ACC503 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::SelectWordLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectWordLeft_m3E721136E39E2CF679C08538DDD2FDE5D3D8F7E5 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::SelectToEndOfPreviousWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectToEndOfPreviousWord_m5C182936491E07770967753F142C2CCC6BAABB5A (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::SelectToStartOfNextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectToStartOfNextWord_mCC2D52A1AA807D2EDB985CE1FAB18B884A1E549A (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::SelectTextStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectTextStart_m5FAFFEF24723CA29E6DA6631EE80EBF4ADE591C6 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::SelectTextEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectTextEnd_mDCF0E587F42EB91D85850AC5F840E089955D69F4 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_ExpandSelectGraphicalLineStart_m04A641F4217F6F54795103B6819EADCB1AC0495F (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_ExpandSelectGraphicalLineEnd_m77DED153050FD67B42CA570497436192A3E5BA60 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::SelectParagraphForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectParagraphForward_m9531E6CCDFB591A90EC32464858B2280AD3F5772 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::SelectParagraphBackward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectParagraphBackward_m0430E7BC1725DB775D0D817B80C4C1232449AD79 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::SelectGraphicalLineStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectGraphicalLineStart_mDB2EDA9715BCF37692A79301F480C793D540E01A (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::SelectGraphicalLineEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectGraphicalLineEnd_m27A03A2BE9B63F0C294E986B4244942876EB2848 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextEditor::Delete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_Delete_mFE5E2A0C6230CA113C1C64C4F0F5F5D30DF16EEA (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextEditor::Backspace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_Backspace_m3D25240A83DA225BEDC8A5363CC83E9A2966169A (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextEditor::Cut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_Cut_m3B9A748CFEF7633613107C8F4A1CF62255041BFB (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_Copy_m33D7D8DF6A4EE867CF02D15577E8A591C0027DCA (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextEditor::Paste()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_Paste_m1A9AEA3C543B2E7595070DA96D7DBE24066AC9E2 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::SelectNone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectNone_m4EEF86ADCEEF1F445A57947AB7D58ECC0A334B86 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextEditor::DeleteWordBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_DeleteWordBack_m9F0CDF4ADF1A86CB97BD8C60FD52031FCD24A210 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextEditor::DeleteLineBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_DeleteLineBack_m43927B9B9F8AD1CA54CED2C40571F190EBE9792D (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextEditor::DeleteWordForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_DeleteWordForward_mD81B94DA0DE3A3B9A212C3B6AF6C475B39E7A56D (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.String UnityEngine.GUIStyle::Internal_GetSelectedRenderedText(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_Internal_GetSelectedRenderedText_m3F9EF55E4958D2C9DE62AC723DBC99EBB80DD002 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_localPosition, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_mContent, int32_t ___2_selectIndex, int32_t ___3_cursorIndex, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_set_systemCopyBuffer_mD14AE32BFEA4773BDC679205D470A228B8F225E8 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___0_oldChar, Il2CppChar ___1_newChar, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextEditor_ReplaceNewlinesWithSpaces_m050CD5F1C45A59C776C840AC84A1CF1C4AECA47C (String_t* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Event UnityEngine.Event::KeyboardEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* Event_KeyboardEvent_m957733139998C86C7ECA28BA50863EB88B71418E (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m457C24C18E42BAE0D0402741FDA0445E939FCB47 (Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818* __this, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818*, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_mC0F84089707699016E685213CFF60997BC7CB12B_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::.ctor()
inline void Dictionary_2__ctor_m25295236FCA3F3483154632E7D7193F3A4963070 (Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818*, const RuntimeMethod*))Dictionary_2__ctor_mE0470880427DED948EF413AD5E9525F41CAF7D1D_gshared)(__this, method);
}
// System.Void UnityEngine.TextEditor::MapKey(System.String,UnityEngine.TextEditor/TextEditOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B (String_t* ___0_key, int32_t ___1_action, const RuntimeMethod* method) ;
// UnityEngine.OperatingSystemFamily UnityEngine.SystemInfo::get_operatingSystemFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_operatingSystemFamily_mC8B13A7D2F34699EDDA4F7629F117C76F0C865FA (const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::OnLostFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_OnLostFocus_mFDA430398601ABF5BBBF44D0A6CE969AFBED4FC9 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::OnFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_OnFocus_mCD739D81E0F74A3E68A0BB861A3A3BD87DDBEE0A (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextEditor::ClampTextIndex(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_ClampTextIndex_m08BC2F0E9A0599EE71C0632C61187F3F3EAAF4B6 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextEditor::IsValidCodePointIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_IsValidCodePointIndex_m1D01E0B8AA575A60C985B9FC413ED3DDA4EE8097 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsLowSurrogate(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsLowSurrogate_mEE95A617A89CEB99AADAB54E025087D56CAB1BAA (Il2CppChar ___0_c, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.ObjectGUIState::Internal_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ObjectGUIState_Internal_Create_m22F3AED2A44D4D00B478C2626295D432F74383EA (const RuntimeMethod* method) ;
// System.Void UnityEngine.ObjectGUIState::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectGUIState_Destroy_m316F4C75D0C8F18896A69BB9E39D90C0CDBE8726 (ObjectGUIState_t7BE88DC8B9C7187A77D63BBCBE9DB7B674863C15* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ObjectGUIState::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectGUIState_Internal_Destroy_m936A111D9F70932A3030FE851C9E3BD82FD1F425 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Event::Internal_Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Event_Internal_Create_m38519A1960401042CAB57086F9E038116B8D3EAF (int32_t ___0_displayIndex, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Internal_Destroy_m25BA236C0C66CB87A89B81336D7BFB55917127BB (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::CopyFromPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_CopyFromPtr_mC78295EF5861558EC93D3F8691E2A8B50DE84E29 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Internal_SetNativeEvent_mF0C015181EABFE56E2C90CD5C6DCA410C2C42746 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// UnityEngine.PointerType UnityEngine.Event::get_pointerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_pointerType_mFFB3FB3E83412151A66FEC136FA00EBDB563B94B (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_mA5E77C0596952812A96703685523819CF50D71A0 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, int32_t ___0_displayIndex, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::set_type(UnityEngine.EventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_type_m16D35A8AF665F4A73A447F9EE7CA36963F34FEC2 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3791FADF6D0284BCC1AF6156A077038C2AA23055 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::set_character(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m0316ABE916ED60AA2257A464A33A33D544EDEE12 (Type_t* ___0_enumType, String_t* ___1_value, bool ___2_ignoreCase, const RuntimeMethod* method) ;
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85 (String_t* ___0_fmt, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Char UnityEngine.Event::get_character()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Event_get_character_m8F7A92E90EF65B9379C01432B42D6BF818C32A61 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Event::get_isKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_isKey_mDA8FE1CC5E305BAF181E86A727173C9BE9A1B754 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Event::get_isMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_isMouse_mBD11F4FE2996DFAD2648C8A9648E301EDDA51D7A (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_mED8670C0E122B7ED0DAB4C3381ADFF04B75E0B03_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.String UnityEngine.Event::get_commandName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_commandName_m14F2015FA5A9050C3C42AF1BD9D0E85D4FF78C24 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::Internal_Use()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Internal_Use_m303C630AFC4EAE76036545C09C79729E90D81CB9 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::get_mousePosition_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_get_mousePosition_Injected_m003389887CF74AEA0E5FC70326E0BF873CDEDCE6 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::set_mousePosition_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_mousePosition_Injected_mC406AF97621061F7189B9AA9E4FEA7CD16C5C34B (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::get_delta_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_get_delta_Injected_mF0D15F34DC749A9AACD091795AE5DBC2609AE3AC (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::set_delta_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_delta_Injected_m9C70CF005D5B37C1B421C141A42BB53AA70E79B3 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::set_displayIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_displayIndex_m8208F1B0471C0B45C0BB248F9A0178EB40FBE100 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D (Type_t* __this, String_t* ___0_name, int32_t ___1_bindingAttr, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIUtility::Internal_GetControlID_Injected(System.Int32,UnityEngine.FocusType,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_Internal_GetControlID_Injected_m00F0DDAB73176CDD6EB5F19AA64511CF445E1249 (int32_t ___0_hint, int32_t ___1_focusType, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___2_rect, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIUtility::Internal_GetControlID(System.Int32,UnityEngine.FocusType,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_Internal_GetControlID_m9836A3FD9B0629A36F356FD8D4606092B2E2AD21 (int32_t ___0_hint, int32_t ___1_focusType, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___2_rect, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIUtility::set_compositionCursorPos_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_set_compositionCursorPos_Injected_mF035733A0EF9A0258AB44982286A8FFFBF2B09A6 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Rect::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Rect_get_zero_m5341D8B63DEF1F4C308A685EEC8CFEA12A396C8D (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIUtility::Internal_GetHotControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_Internal_GetHotControl_m8230315B3FECDB164C84AFC40C180C2C7B319892 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIUtility::Internal_SetHotControl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_Internal_SetHotControl_m56F3F333B107EFD83C7F3D703DDA48C5A19BFCB8 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIUtility::Internal_GetKeyboardControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_Internal_GetKeyboardControl_mD0783552D4ACDA842F86F126C7A48ADC79340AB8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIUtility::Internal_SetKeyboardControl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_Internal_SetKeyboardControl_mC8401D9C911D310EAA2284161264D2FC9D141418 (int32_t ___0_value, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline)(__this, method);
}
// System.Void UnityEngine.ExitGUIException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitGUIException__ctor_m345D7AD70E401C1AFD46E537CDCEC0F1C8BA342B (ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549* __this, const RuntimeMethod* method) ;
// System.Object UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GUIUtility_Internal_GetDefaultSkin_m86F21D22A34DC2243194B8929A499FD98D26A234 (int32_t ___0_skinMode, const RuntimeMethod* method) ;
// TResult System.Func`3<System.Int32,System.IntPtr,System.Boolean>::Invoke(T1,T2)
inline bool Func_3_Invoke_mDFA3CD122659AE2902BCCD5F89B3CCCA94E041DF_inline (Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C* __this, int32_t ___0_arg1, intptr_t ___1_arg2, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C*, int32_t, intptr_t, const RuntimeMethod*))Func_3_Invoke_mDFA3CD122659AE2902BCCD5F89B3CCCA94E041DF_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Void UnityEngine.GUIUtility::Internal_EndContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_Internal_EndContainer_mCE42BC4D58E684B724B58EC3C901E67BA62F1BF7 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_Internal_ExitGUI_m5B145534F61B8CE2A2915A9297D0F25D771D4459 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIUtility::ResetGlobalState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_ResetGlobalState_mD0A482A31337B6200F644995345CF56849913928 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Begin_m701551F1F833A31A154BFFC9F6F3143A12A33061 (int32_t ___0_instanceID, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFromEditorWindow_m0D41A3D7897D91D4420C722C47502FCBA0352804 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::ClearStaticCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_ClearStaticCache_m36A399D55991F1B5B1C4A20DCDFF415B8636E934 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUIUtility::ShouldRethrowException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_ShouldRethrowException_m60E879B4683840AAD5CD514E8C3BDDCC6403B652 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Exception,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m215465BB041E8F2AE1E7AD0988951D160D8F8324_inline (Func_2_tDDBE08B46BEFDD869DE0B97D023CB9C89674FED6* __this, Exception_t* ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tDDBE08B46BEFDD869DE0B97D023CB9C89674FED6*, Exception_t*, const RuntimeMethod*))Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline)(__this, ___0_arg, method);
}
// System.Void UnityEngine.GUIUtility::set_guiIsExiting(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIUtility_set_guiIsExiting_m0DCDD09CD48330FD781C03D2EA20F973878A2BC5_inline (bool ___0_value, const RuntimeMethod* method) ;
// UnityEngineInternal.GenericStack UnityEngine.GUI::get_scrollViewStates()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* GUI_get_scrollViewStates_m940A384A713B8A7DC67016D1588965A42E561773_inline (const RuntimeMethod* method) ;
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUIUtility::IsExitGUIException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_IsExitGUIException_mB887DAF961E8C1124916777B812FBF2324F5265F (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIUtility::get_guiDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_get_guiDepth_m011B188F7C41DAE079019E64BC064208E618F315 (const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUIUtility::HitTest(UnityEngine.Rect,UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_HitTest_m55D2F9EAC7EA99CA0C490546A6B45DA96F5AB3DA (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_point, int32_t ___2_offset, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Event::get_isDirectManipulationDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_isDirectManipulationDevice_m9A72FB2DF7803E189857D24A65FB568B17533ED0 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUIUtility::HitTest(UnityEngine.Rect,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_HitTest_m8C93A1BFB637176154C02F73038A98D1F616A7C2 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_point, bool ___2_isDirectManipulationDevice, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
inline void List_1__ctor_m685E773E1D777772A2633097DD151A2A9E640D72 (List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry__ctor_m011B3DA69713EEA6BD98D4056B5ADE01F237E5B2 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, float ___0__minWidth, float ___1__maxWidth, float ___2__minHeight, float ___3__maxHeight, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___4__style, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_ApplyOptions_mF024E6CEAAD97888AE293810E01F8431D79456A3 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___0_options, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_ApplyStyleSettings_m2D3679DAF547D104FE48E7D6D8E27B639F6A666B (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_style, const RuntimeMethod* method) ;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
inline int32_t List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline (List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_horizontal_m5C1795C027E4987A8532DC27D88FB3B9FFEC1352 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUILayoutEntry::get_marginHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginHorizontal_m9847FB7747542BB322195F9CF4B75F55339CD7B5 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
inline GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360 (List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* (*) (List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_SetHorizontal_m268577E88A2AE5870C14EFDA9CB88C94CAC2ACE9 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, float ___0_x, float ___1_width, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_vertical_m43E46D9F313BB617044184A65350E6498A0709F0 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_SetVertical_mA20893626441C55001C1940C53A6A100DD22D61F (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, float ___0_y, float ___1_height, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUILayoutEntry::get_marginVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginVertical_mCD309A186E80B22E75DD8F15D2598B9B739C7AD3 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GUILayoutEntry::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUILayoutEntry_ToString_mD3785AC5958EB56ECA6E5D325D166C5F5725E615 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcWidth_mFA744462378028538F1E3AAB39CB6AF0FBB1851B (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_SetHorizontal_m37D01CDDE4FAEDB20E0D469805EF96B878DFB5D5 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, float ___0_x, float ___1_width, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcHeight_mAA9676BD80BAFC48F515ACA00E83FB7E9EE1FC2A (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_SetVertical_m28ADC75A1C5148E22EDD149221535C4B97BC5FE2 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, float ___0_y, float ___1_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GUIStyleState::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyleState_Init_m0D3428E2BA3343F8AC49253DE3AAC54EF07F4873 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState__ctor_m74536B867B0F57F8A7DC74E78018830A948E4555 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_sourceStyle, intptr_t ___1_source, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_value, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Create_m2C5F872F6FE8C423759017DC72267D6AF637BC75 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_self, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_error_mB953A37C8F3296E529190A34E18506C735848C01 (const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GUIStyle::Internal_Copy(UnityEngine.GUIStyle,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Copy_mA4890B0E0133B4494B696F2F42712F393C508FC5 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_self, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___1_other, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Destroy_mD93F2F454B69DB5C534AF9F4F6D847F955A39977 (intptr_t ___0_self, const RuntimeMethod* method) ;
// System.String UnityEngine.GUIStyle::get_rawName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_rawName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_idx, const RuntimeMethod* method) ;
// UnityEngine.GUIStyleState UnityEngine.GUIStyleState::GetGUIStyleState(UnityEngine.GUIStyle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyleState_GetGUIStyleState_m0B273F7909166249E3D98FA410C2D8A72091C7B1 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_sourceStyle, intptr_t ___1_source, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_idx, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectOffset::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset__ctor_m0711AF5DF27B8F3EC6CAF54755CDE46B76C00DBE (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, RuntimeObject* ___0_sourceStyle, intptr_t ___1_source, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::AssignRectOffset(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_AssignRectOffset_m5E532DA0461647A0C0E19345BEFF3B6AA25D204B (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_idx, intptr_t ___1_srcRectOffset, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_Internal_GetLineHeight_m3A90D425C25B10618B8A3D95AEF72FCB1C574B07 (intptr_t ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Draw_m3DBF8DC58719720455DFC818590D77752BA31008 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_controlId, bool ___3_isHover, bool ___4_isActive, bool ___5_on, bool ___6_hasKeyboardFocus, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIUtility::get_hotControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_get_hotControl_m6CD6AD33B46A9AFF2261E2C352DC7BAB4C20B026 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUIUtility::HasKeyFocus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_HasKeyFocus_m6AD234443A7B2AB471E14BE141FC5E8ADD261A0F (int32_t ___0_controlID, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw_mBEFC164F21949135F404FDA678F368FBA8074D50 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_screenRect, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, bool ___2_isHover, bool ___3_isActive, bool ___4_on, bool ___5_hasKeyboardFocus, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_Draw2(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw2_mD1050A7750AAAEEEEFD4EB6C8C8AFB0591B1221D (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_controlID, bool ___3_on, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_Internal_GetCursorPixelPosition_m22C4D9AA182990942EA85B0EA834499EFA0CB0C4 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_cursorStringIndex, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_Internal_GetCursorStringIndex_m88FFC09FCA6FD081C34ADC01F899D435AEFA2CC4 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_cursorPixelPosition, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.GUIStyle::Internal_CalcSize(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_Internal_CalcSize_m6B1D90CF09404B4969678627BE86D43B41C5AF33 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(UnityEngine.GUIContent,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_Internal_CalcHeight_m12AD4C5012F9E237FAB309CC6C84D3CB9145FF76 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, float ___1_width, const RuntimeMethod* method) ;
// System.String UnityEngine.GUIStyle::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_get_name_mDF9EF43C46A0B9431DAF4EB0CE1D18EA32E16B75 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_Draw_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw_Injected_mF4A2332005788106B28CB306FAFF530BE251E09B (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_screenRect, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, bool ___2_isHover, bool ___3_isActive, bool ___4_on, bool ___5_hasKeyboardFocus, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_Draw2_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw2_Injected_m83867C172C18ED83724AA6600EDE59C55277A138 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_controlID, bool ___3_on, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_GetCursorPixelPosition_Injected_m9B676ED0A70FE6CC55EC8795CD7348406A4FD815 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_cursorStringIndex, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___3_ret, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_Internal_GetCursorStringIndex_Injected_m4C0A3DEF8B90D9A866378C24BB3F7E0169CA12C9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___2_cursorPixelPosition, const RuntimeMethod* method) ;
// System.String UnityEngine.GUIStyle::Internal_GetSelectedRenderedText_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_Internal_GetSelectedRenderedText_Injected_m1DE280FF00B670FB04D98786E87A7F18D72940E3 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_localPosition, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_mContent, int32_t ___2_selectIndex, int32_t ___3_cursorIndex, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_CalcSize_Injected(UnityEngine.GUIContent,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_CalcSize_Injected_m19617B2C5FF35B1B10B9D31058ABC1EABD31FF48 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::SetMouseTooltip_Injected(System.String,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_SetMouseTooltip_Injected_m77EC0702533B68489605E0DE76A6761E1253CC71 (String_t* ___0_tooltip, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___1_screenRect, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventInterests::get_wantsMouseMove()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EventInterests_get_wantsMouseMove_m4CE6AE73062DE1E37A138ED365FE4D8C7894B9AA_inline (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventInterests::set_wantsMouseMove(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventInterests_set_wantsMouseMove_mFEA33E053185D63A19F60AA69E385C05CE795F0F_inline (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventInterests::get_wantsMouseEnterLeaveWindow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EventInterests_get_wantsMouseEnterLeaveWindow_m5CC6DB8DAF1DEB0F7E8878B96A856F540E66840F_inline (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventInterests::set_wantsMouseEnterLeaveWindow(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventInterests_set_wantsMouseEnterLeaveWindow_m5D73B54F5855E5BB5FE54AA2366A83A33982D313_inline (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventInterests::get_wantsLessLayoutEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EventInterests_get_wantsLessLayoutEvents_m1BC017D5AC484596A2A9B05BF592B65CE2A00CDE_inline (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventInterests::WantsEvent(UnityEngine.EventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventInterests_WantsEvent_mD34E2AD1F937EE03C9C29882672F400AD3C3E5B6 (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, int32_t ___0_type, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUIUtility::get_textFieldInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_get_textFieldInput_mDB514BD41982E9A309A7E0297270162FA6918EBA (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventInterests::WantsLayoutPass(UnityEngine.EventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventInterests_WantsLayoutPass_m403675D6BA834A05764A2C2558ECBCE90C8D066B (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, int32_t ___0_type, const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m32464F005A899BBFD3A7ED0C42A8301E317034C2 (EmbeddedAttribute_t4F9AD0F906A21B3318CFA9466B076A467E16305F* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m4D550B87505994CE328D4DD1761EC8196DC96C31 (IsReadOnlyAttribute_t537BA5EEEDB652AA60A00E4CEA6B73710FBDD806* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GUILayoutUtility_Internal_GetWindowRect_m4F0CEA512EAD2BF0BBA0218A10B9C820C24D44CE (int32_t ___0_windowID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_windowID;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		GUILayoutUtility_Internal_GetWindowRect_Injected_m03328FF57858A53621C5907B345C56FA2C5AF0EC(L_0, (&V_0), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_MoveWindow_mAD1ECDE72F3573D2F71B43C5FB8F90C10919C6CF (int32_t ___0_windowID, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_windowID;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		GUILayoutUtility_Internal_MoveWindow_Injected_mDFDA2042DAFBDEBD108AC01F6F19E7D0F395B6A7(L_0, (&___1_r), NULL);
		return;
	}
}
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* GUILayoutUtility_SelectIDList_m601F4AA990B7FD59A779F5375EC55ADDB86927A9 (int32_t ___0_instanceID, bool ___1_isWindow, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mF6FAFEDDE37A2FE277E1ABFF79B29FD0700A91F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m6920FD9D9518E101681E8F562ED9732085222C10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* V_0 = NULL;
	LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* V_1 = NULL;
	bool V_2 = false;
	LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* V_3 = NULL;
	Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* G_B3_0 = NULL;
	{
		bool L_0 = ___1_isWindow;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* L_1 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___s_StoredLayouts_0;
		G_B3_0 = L_1;
		goto IL_0010;
	}

IL_000b:
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* L_2 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___s_StoredWindows_1;
		G_B3_0 = L_2;
	}

IL_0010:
	{
		V_0 = G_B3_0;
		Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* L_3 = V_0;
		int32_t L_4 = ___0_instanceID;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_mF6FAFEDDE37A2FE277E1ABFF79B29FD0700A91F8(L_3, L_4, (&V_1), Dictionary_2_TryGetValue_mF6FAFEDDE37A2FE277E1ABFF79B29FD0700A91F8_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = ___0_instanceID;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_8 = (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60*)il2cpp_codegen_object_new(LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		LayoutCache__ctor_m73B4DC62A0A7669976C8444DDB54EF8D55BF3E0B(L_8, L_7, NULL);
		V_1 = L_8;
		Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* L_9 = V_0;
		int32_t L_10 = ___0_instanceID;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_11 = V_1;
		NullCheck(L_9);
		Dictionary_2_set_Item_m6920FD9D9518E101681E8F562ED9732085222C10(L_9, L_10, L_11, Dictionary_2_set_Item_m6920FD9D9518E101681E8F562ED9732085222C10_RuntimeMethod_var);
	}

IL_0033:
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_12 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_13 = V_1;
		NullCheck(L_13);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_14 = L_13->___topLevel_1;
		NullCheck(L_12);
		L_12->___topLevel_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___topLevel_1), (void*)L_14);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_15 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_16 = V_1;
		NullCheck(L_16);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_17 = L_16->___layoutGroups_2;
		NullCheck(L_15);
		L_15->___layoutGroups_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___layoutGroups_2), (void*)L_17);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_18 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_19 = V_1;
		NullCheck(L_19);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_20 = L_19->___windows_3;
		NullCheck(L_18);
		L_18->___windows_3 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___windows_3), (void*)L_20);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_21 = V_1;
		V_3 = L_21;
		goto IL_0067;
	}

IL_0067:
	{
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_22 = V_3;
		return L_22;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Begin_m701551F1F833A31A154BFFC9F6F3143A12A33061 (int32_t ___0_instanceID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* V_0 = NULL;
	bool V_1 = false;
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* V_2 = NULL;
	{
		int32_t L_0 = ___0_instanceID;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_1;
		L_1 = GUILayoutUtility_SelectIDList_m601F4AA990B7FD59A779F5375EC55ADDB86927A9(L_0, (bool)0, NULL);
		V_0 = L_1;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_2;
		L_2 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)8))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_5 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_6 = V_0;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_7 = (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)il2cpp_codegen_object_new(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8(L_7, NULL);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_8 = L_7;
		V_2 = L_8;
		NullCheck(L_6);
		L_6->___topLevel_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___topLevel_1), (void*)L_8);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_9 = V_2;
		NullCheck(L_5);
		L_5->___topLevel_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___topLevel_1), (void*)L_9);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_10 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_10);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_11 = L_10->___layoutGroups_2;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(13 /* System.Void System.Collections.Stack::Clear() */, L_11);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_12 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_12);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_13 = L_12->___layoutGroups_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_14 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_14);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_15 = L_14->___topLevel_1;
		NullCheck(L_13);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(19 /* System.Void System.Collections.Stack::Push(System.Object) */, L_13, L_15);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_16 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_17 = V_0;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_18 = (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)il2cpp_codegen_object_new(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8(L_18, NULL);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_19 = L_18;
		V_2 = L_19;
		NullCheck(L_17);
		L_17->___windows_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___windows_3), (void*)L_19);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_20 = V_2;
		NullCheck(L_16);
		L_16->___windows_3 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___windows_3), (void*)L_20);
		goto IL_00aa;
	}

IL_0078:
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_21 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_22 = V_0;
		NullCheck(L_22);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_23 = L_22->___topLevel_1;
		NullCheck(L_21);
		L_21->___topLevel_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___topLevel_1), (void*)L_23);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_24 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_25 = V_0;
		NullCheck(L_25);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_26 = L_25->___layoutGroups_2;
		NullCheck(L_24);
		L_24->___layoutGroups_2 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___layoutGroups_2), (void*)L_26);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_27 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_28 = V_0;
		NullCheck(L_28);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_29 = L_28->___windows_3;
		NullCheck(L_27);
		L_27->___windows_3 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___windows_3), (void*)L_29);
	}

IL_00aa:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::BeginContainer(UnityEngine.GUILayoutUtility/LayoutCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_BeginContainer_m34C50FF74C76B91E32E1A3575ABC0AA0AE0F3DDB (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* ___0_cache, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_0;
		L_0 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)8))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_3 = ___0_cache;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_4 = (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)il2cpp_codegen_object_new(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8(L_4, NULL);
		NullCheck(L_3);
		L_3->___topLevel_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___topLevel_1), (void*)L_4);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_5 = ___0_cache;
		NullCheck(L_5);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_6 = L_5->___layoutGroups_2;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(13 /* System.Void System.Collections.Stack::Clear() */, L_6);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_7 = ___0_cache;
		NullCheck(L_7);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_8 = L_7->___layoutGroups_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_9 = ___0_cache;
		NullCheck(L_9);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_10 = L_9->___topLevel_1;
		NullCheck(L_8);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(19 /* System.Void System.Collections.Stack::Push(System.Object) */, L_8, L_10);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_11 = ___0_cache;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_12 = (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)il2cpp_codegen_object_new(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8(L_12, NULL);
		NullCheck(L_11);
		L_11->___windows_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___windows_3), (void*)L_12);
	}

IL_0048:
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_13 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_14 = ___0_cache;
		NullCheck(L_14);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_15 = L_14->___topLevel_1;
		NullCheck(L_13);
		L_13->___topLevel_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___topLevel_1), (void*)L_15);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_16 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_17 = ___0_cache;
		NullCheck(L_17);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_18 = L_17->___layoutGroups_2;
		NullCheck(L_16);
		L_16->___layoutGroups_2 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___layoutGroups_2), (void*)L_18);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_19 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_20 = ___0_cache;
		NullCheck(L_20);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_21 = L_20->___windows_3;
		NullCheck(L_19);
		L_19->___windows_3 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___windows_3), (void*)L_21);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_BeginWindow_m99FBC28B305B9C0589BC73138073BE9420C977F5 (int32_t ___0_windowID, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___1_style, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___2_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* V_0 = NULL;
	bool V_1 = false;
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* V_2 = NULL;
	bool V_3 = false;
	{
		int32_t L_0 = ___0_windowID;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_1;
		L_1 = GUILayoutUtility_SelectIDList_m601F4AA990B7FD59A779F5375EC55ADDB86927A9(L_0, (bool)1, NULL);
		V_0 = L_1;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_2;
		L_2 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)8))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00b5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_5 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_6 = V_0;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_7 = (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)il2cpp_codegen_object_new(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8(L_7, NULL);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_8 = L_7;
		V_2 = L_8;
		NullCheck(L_6);
		L_6->___topLevel_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___topLevel_1), (void*)L_8);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_9 = V_2;
		NullCheck(L_5);
		L_5->___topLevel_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___topLevel_1), (void*)L_9);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_10 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_10);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_11 = L_10->___topLevel_1;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_12 = ___1_style;
		NullCheck(L_11);
		GUILayoutEntry_set_style_m0A23F7EFF504A581FC6CA86EF3BE753F060AC48A(L_11, L_12, NULL);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_13 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_13);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_14 = L_13->___topLevel_1;
		int32_t L_15 = ___0_windowID;
		NullCheck(L_14);
		L_14->___windowID_17 = L_15;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_16 = ___2_options;
		V_3 = (bool)((!(((RuntimeObject*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)L_16) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_18 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_18);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_19 = L_18->___topLevel_1;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_20 = ___2_options;
		NullCheck(L_19);
		VirtualActionInvoker1< GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* >::Invoke(13 /* System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[]) */, L_19, L_20);
	}

IL_0070:
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_21 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_21);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_22 = L_21->___layoutGroups_2;
		NullCheck(L_22);
		VirtualActionInvoker0::Invoke(13 /* System.Void System.Collections.Stack::Clear() */, L_22);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_23 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_23);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_24 = L_23->___layoutGroups_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_25 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_25);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_26 = L_25->___topLevel_1;
		NullCheck(L_24);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(19 /* System.Void System.Collections.Stack::Push(System.Object) */, L_24, L_26);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_27 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_28 = V_0;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_29 = (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)il2cpp_codegen_object_new(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8(L_29, NULL);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_30 = L_29;
		V_2 = L_30;
		NullCheck(L_28);
		L_28->___windows_3 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->___windows_3), (void*)L_30);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_31 = V_2;
		NullCheck(L_27);
		L_27->___windows_3 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___windows_3), (void*)L_31);
		goto IL_00e7;
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_32 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_33 = V_0;
		NullCheck(L_33);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_34 = L_33->___topLevel_1;
		NullCheck(L_32);
		L_32->___topLevel_1 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->___topLevel_1), (void*)L_34);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_35 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_36 = V_0;
		NullCheck(L_36);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_37 = L_36->___layoutGroups_2;
		NullCheck(L_35);
		L_35->___layoutGroups_2 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&L_35->___layoutGroups_2), (void*)L_37);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_38 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_39 = V_0;
		NullCheck(L_39);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_40 = L_39->___windows_3;
		NullCheck(L_38);
		L_38->___windows_3 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___windows_3), (void*)L_40);
	}

IL_00e7:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Layout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Layout_mBC6C938DC931B8CABC1FA6C33AA60ECFAC3D9B30 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_0 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_0);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_1 = L_0->___topLevel_1;
		NullCheck(L_1);
		int32_t L_2 = L_1->___windowID_17;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_00b8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_4 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_4);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_5 = L_4->___topLevel_1;
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_5);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_6 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_6);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_7 = L_6->___topLevel_1;
		int32_t L_8;
		L_8 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		float L_9;
		L_9 = GUIUtility_get_pixelsPerPoint_m13E69FE793E736FA60A61C6756F2FF57BA6C9F31(NULL);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_10 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_10);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_11 = L_10->___topLevel_1;
		NullCheck(L_11);
		float L_12 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_11)->___maxWidth_1;
		float L_13;
		L_13 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(((float)(((float)L_8)/L_9)), L_12, NULL);
		NullCheck(L_7);
		VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_7, (0.0f), L_13);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_14 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_14);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_15 = L_14->___topLevel_1;
		NullCheck(L_15);
		VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_15);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_16 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_16);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_17 = L_16->___topLevel_1;
		int32_t L_18;
		L_18 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		float L_19;
		L_19 = GUIUtility_get_pixelsPerPoint_m13E69FE793E736FA60A61C6756F2FF57BA6C9F31(NULL);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_20 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_20);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_21 = L_20->___topLevel_1;
		NullCheck(L_21);
		float L_22 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_21)->___maxHeight_3;
		float L_23;
		L_23 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(((float)(((float)L_18)/L_19)), L_22, NULL);
		NullCheck(L_17);
		VirtualActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_17, (0.0f), L_23);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_24 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_24);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_25 = L_24->___windows_3;
		GUILayoutUtility_LayoutFreeGroup_m81D18A1401F6FF7EB4A3C1CC26D9BE80998BBF5C(L_25, NULL);
		goto IL_00da;
	}

IL_00b8:
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_26 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_26);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_27 = L_26->___topLevel_1;
		GUILayoutUtility_LayoutSingleGroup_m95E3F31426ACA641C57016A1D1A058366A56AFE8(L_27, NULL);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_28 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_28);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_29 = L_28->___windows_3;
		GUILayoutUtility_LayoutFreeGroup_m81D18A1401F6FF7EB4A3C1CC26D9BE80998BBF5C(L_29, NULL);
	}

IL_00da:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFromEditorWindow_m0D41A3D7897D91D4420C722C47502FCBA0352804 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10ACE3A0FC4434FF078CBB1C934C7CE2ACEB3EE1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_0 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_0);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_1 = L_0->___topLevel_1;
		V_0 = (bool)((!(((RuntimeObject*)(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0088;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_3 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_3);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_4 = L_3->___topLevel_1;
		NullCheck(L_4);
		VirtualActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_4);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_5 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_5);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_6 = L_5->___topLevel_1;
		int32_t L_7;
		L_7 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		float L_8;
		L_8 = GUIUtility_get_pixelsPerPoint_m13E69FE793E736FA60A61C6756F2FF57BA6C9F31(NULL);
		NullCheck(L_6);
		VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_6, (0.0f), ((float)(((float)L_7)/L_8)));
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_9 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_9);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_10 = L_9->___topLevel_1;
		NullCheck(L_10);
		VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_10);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_11 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_11);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_12 = L_11->___topLevel_1;
		int32_t L_13;
		L_13 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		float L_14;
		L_14 = GUIUtility_get_pixelsPerPoint_m13E69FE793E736FA60A61C6756F2FF57BA6C9F31(NULL);
		NullCheck(L_12);
		VirtualActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_12, (0.0f), ((float)(((float)L_13)/L_14)));
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_15 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_15);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_16 = L_15->___windows_3;
		GUILayoutUtility_LayoutFreeGroup_m81D18A1401F6FF7EB4A3C1CC26D9BE80998BBF5C(L_16, NULL);
		goto IL_0095;
	}

IL_0088:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral10ACE3A0FC4434FF078CBB1C934C7CE2ACEB3EE1, NULL);
	}

IL_0095:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFromContainer(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFromContainer_m81EC681FE0A88C36CCA8D4382043279F709EE59E (float ___0_w, float ___1_h, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10ACE3A0FC4434FF078CBB1C934C7CE2ACEB3EE1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_0 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_0);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_1 = L_0->___topLevel_1;
		V_0 = (bool)((!(((RuntimeObject*)(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0072;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_3 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_3);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_4 = L_3->___topLevel_1;
		NullCheck(L_4);
		VirtualActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_4);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_5 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_5);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_6 = L_5->___topLevel_1;
		float L_7 = ___0_w;
		NullCheck(L_6);
		VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_6, (0.0f), L_7);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_8 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_8);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_9 = L_8->___topLevel_1;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_9);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_10 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_10);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_11 = L_10->___topLevel_1;
		float L_12 = ___1_h;
		NullCheck(L_11);
		VirtualActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_11, (0.0f), L_12);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_13 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_13);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_14 = L_13->___windows_3;
		GUILayoutUtility_LayoutFreeGroup_m81D18A1401F6FF7EB4A3C1CC26D9BE80998BBF5C(L_14, NULL);
		goto IL_007f;
	}

IL_0072:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral10ACE3A0FC4434FF078CBB1C934C7CE2ACEB3EE1, NULL);
	}

IL_007f:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFreeGroup_m81D18A1401F6FF7EB4A3C1CC26D9BE80998BBF5C (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* ___0_toplevel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* V_1 = NULL;
	{
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_0 = ___0_toplevel;
		NullCheck(L_0);
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_1 = L_0->___entries_11;
		NullCheck(L_1);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_2;
		L_2 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_1, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_0), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_0010_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_3;
				L_3 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_0), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_1 = ((GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)CastclassClass((RuntimeObject*)L_3, GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var));
				GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_4 = V_1;
				il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
				GUILayoutUtility_LayoutSingleGroup_m95E3F31426ACA641C57016A1D1A058366A56AFE8(L_4, NULL);
			}

IL_0026_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_0), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_6 = ___0_toplevel;
		NullCheck(L_6);
		GUILayoutGroup_ResetCursor_m58C36F1ABC54BE5EFC16D512318BED9EB8918127(L_6, NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutSingleGroup_m95E3F31426ACA641C57016A1D1A058366A56AFE8 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_0 = ___0_i;
		NullCheck(L_0);
		bool L_1 = L_0->___isWindow_16;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_007c;
		}
	}
	{
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_3 = ___0_i;
		NullCheck(L_3);
		float L_4 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_3)->___minWidth_0;
		V_1 = L_4;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_5 = ___0_i;
		NullCheck(L_5);
		float L_6 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_5)->___maxWidth_1;
		V_2 = L_6;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_7 = ___0_i;
		NullCheck(L_7);
		VirtualActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_7);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_8 = ___0_i;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_9 = ___0_i;
		NullCheck(L_9);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_10 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_9)->___rect_4);
		float L_11;
		L_11 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_10, NULL);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_12 = ___0_i;
		NullCheck(L_12);
		float L_13 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_12)->___maxWidth_1;
		float L_14 = V_1;
		float L_15 = V_2;
		float L_16;
		L_16 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_13, L_14, L_15, NULL);
		NullCheck(L_8);
		VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_8, L_11, L_16);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_17 = ___0_i;
		NullCheck(L_17);
		float L_18 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_17)->___minHeight_2;
		V_3 = L_18;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_19 = ___0_i;
		NullCheck(L_19);
		float L_20 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_19)->___maxHeight_3;
		V_4 = L_20;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_21 = ___0_i;
		NullCheck(L_21);
		VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_21);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_22 = ___0_i;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_23 = ___0_i;
		NullCheck(L_23);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_24 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_23)->___rect_4);
		float L_25;
		L_25 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_24, NULL);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_26 = ___0_i;
		NullCheck(L_26);
		float L_27 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_26)->___maxHeight_3;
		float L_28 = V_3;
		float L_29 = V_4;
		float L_30;
		L_30 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_27, L_28, L_29, NULL);
		NullCheck(L_22);
		VirtualActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_22, L_25, L_30);
		goto IL_00f7;
	}

IL_007c:
	{
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_31 = ___0_i;
		NullCheck(L_31);
		VirtualActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_31);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_32 = ___0_i;
		NullCheck(L_32);
		int32_t L_33 = L_32->___windowID_17;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_34;
		L_34 = GUILayoutUtility_Internal_GetWindowRect_m4F0CEA512EAD2BF0BBA0218A10B9C820C24D44CE(L_33, NULL);
		V_5 = L_34;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_35 = ___0_i;
		float L_36;
		L_36 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_5), NULL);
		float L_37;
		L_37 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_5), NULL);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_38 = ___0_i;
		NullCheck(L_38);
		float L_39 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_38)->___minWidth_0;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_40 = ___0_i;
		NullCheck(L_40);
		float L_41 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_40)->___maxWidth_1;
		float L_42;
		L_42 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_37, L_39, L_41, NULL);
		NullCheck(L_35);
		VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_35, L_36, L_42);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_43 = ___0_i;
		NullCheck(L_43);
		VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_43);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_44 = ___0_i;
		float L_45;
		L_45 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_5), NULL);
		float L_46;
		L_46 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_5), NULL);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_47 = ___0_i;
		NullCheck(L_47);
		float L_48 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_47)->___minHeight_2;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_49 = ___0_i;
		NullCheck(L_49);
		float L_50 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_49)->___maxHeight_3;
		float L_51;
		L_51 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_46, L_48, L_50, NULL);
		NullCheck(L_44);
		VirtualActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_44, L_45, L_51);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_52 = ___0_i;
		NullCheck(L_52);
		int32_t L_53 = L_52->___windowID_17;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_54 = ___0_i;
		NullCheck(L_54);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_55 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_54)->___rect_4;
		GUILayoutUtility_Internal_MoveWindow_mAD1ECDE72F3573D2F71B43C5FB8F90C10919C6CF(L_53, L_55, NULL);
	}

IL_00f7:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility__cctor_m2CEDA9A8EB23B7D3A5A97825E6B192235954DC48 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m26D30094F62EB94273B024DB6AD146CD142F4202_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* L_0 = (Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598*)il2cpp_codegen_object_new(Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m26D30094F62EB94273B024DB6AD146CD142F4202(L_0, Dictionary_2__ctor_m26D30094F62EB94273B024DB6AD146CD142F4202_RuntimeMethod_var);
		((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___s_StoredLayouts_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___s_StoredLayouts_0), (void*)L_0);
		Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* L_1 = (Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598*)il2cpp_codegen_object_new(Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m26D30094F62EB94273B024DB6AD146CD142F4202(L_1, Dictionary_2__ctor_m26D30094F62EB94273B024DB6AD146CD142F4202_RuntimeMethod_var);
		((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___s_StoredWindows_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___s_StoredWindows_1), (void*)L_1);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_2 = (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60*)il2cpp_codegen_object_new(LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LayoutCache__ctor_m73B4DC62A0A7669976C8444DDB54EF8D55BF3E0B(L_2, (-1), NULL);
		((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2), (void*)L_2);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_3), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___kDummyRect_3 = L_3;
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_GetWindowRect_Injected_m03328FF57858A53621C5907B345C56FA2C5AF0EC (int32_t ___0_windowID, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*GUILayoutUtility_Internal_GetWindowRect_Injected_m03328FF57858A53621C5907B345C56FA2C5AF0EC_ftn) (int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*);
	static GUILayoutUtility_Internal_GetWindowRect_Injected_m03328FF57858A53621C5907B345C56FA2C5AF0EC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_Internal_GetWindowRect_Injected_m03328FF57858A53621C5907B345C56FA2C5AF0EC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.Rect&)");
	_il2cpp_icall_func(___0_windowID, ___1_ret);
}
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_MoveWindow_Injected_mDFDA2042DAFBDEBD108AC01F6F19E7D0F395B6A7 (int32_t ___0_windowID, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___1_r, const RuntimeMethod* method) 
{
	typedef void (*GUILayoutUtility_Internal_MoveWindow_Injected_mDFDA2042DAFBDEBD108AC01F6F19E7D0F395B6A7_ftn) (int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*);
	static GUILayoutUtility_Internal_MoveWindow_Injected_mDFDA2042DAFBDEBD108AC01F6F19E7D0F395B6A7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_Internal_MoveWindow_Injected_mDFDA2042DAFBDEBD108AC01F6F19E7D0F395B6A7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.Rect&)");
	_il2cpp_icall_func(___0_windowID, ___1_r);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::set_id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutCache_set_id_m532720FF0F65E8039E37D015910E2F1AE1C9F4FB (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutCache__ctor_m73B4DC62A0A7669976C8444DDB54EF8D55BF3E0B (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* __this, int32_t ___0_instanceID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_0 = (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)il2cpp_codegen_object_new(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8(L_0, NULL);
		__this->___topLevel_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topLevel_1), (void*)L_0);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_1 = (GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49*)il2cpp_codegen_object_new(GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GenericStack__ctor_mD21753D674298C09F3684F19DD42680323055586(L_1, NULL);
		__this->___layoutGroups_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___layoutGroups_2), (void*)L_1);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_2 = (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)il2cpp_codegen_object_new(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8(L_2, NULL);
		__this->___windows_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___windows_3), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_3 = ___0_instanceID;
		LayoutCache_set_id_m532720FF0F65E8039E37D015910E2F1AE1C9F4FB_inline(__this, L_3, NULL);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_4 = __this->___layoutGroups_2;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_5 = __this->___topLevel_1;
		NullCheck(L_4);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(19 /* System.Void System.Collections.Stack::Push(System.Object) */, L_4, L_5);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::ResetCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutCache_ResetCursor_m728841782E13F82B1AE96E40AF16D6C8EBE6D59A (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_0 = __this->___windows_3;
		NullCheck(L_0);
		GUILayoutGroup_ResetCursor_m58C36F1ABC54BE5EFC16D512318BED9EB8918127(L_0, NULL);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_1 = __this->___topLevel_1;
		NullCheck(L_1);
		GUILayoutGroup_ResetCursor_m58C36F1ABC54BE5EFC16D512318BED9EB8918127(L_1, NULL);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_2 = __this->___layoutGroups_2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* System.Collections.IEnumerator System.Collections.Stack::GetEnumerator() */, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_2;
					if (!L_5)
					{
						goto IL_0056;
					}
				}
				{
					RuntimeObject* L_6 = V_2;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0056:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003b_1;
			}

IL_0028_1:
			{
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_1 = L_8;
				RuntimeObject* L_9 = V_1;
				NullCheck(((GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)CastclassClass((RuntimeObject*)L_9, GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var)));
				GUILayoutGroup_ResetCursor_m58C36F1ABC54BE5EFC16D512318BED9EB8918127(((GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)CastclassClass((RuntimeObject*)L_9, GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var)), NULL);
			}

IL_003b_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_0057;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
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
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_Width_m3FADF145F37481F9FEFF0E89E8A466CF5532DCE3 (float ___0_width, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* V_0 = NULL;
	{
		float L_0 = ___0_width;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_3 = (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)il2cpp_codegen_object_new(GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GUILayoutOption__ctor_m4EF826EA43073869166C8D94A1D9EB7898ACC3AA(L_3, 0, L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_Height_m5E1526C541663A21437ED06E233FDDA08A856B91 (float ___0_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* V_0 = NULL;
	{
		float L_0 = ___0_height;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_3 = (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)il2cpp_codegen_object_new(GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GUILayoutOption__ctor_m4EF826EA43073869166C8D94A1D9EB7898ACC3AA(L_3, 1, L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_4 = V_0;
		return L_4;
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
// System.Void UnityEngine.GUI::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI__cctor_m97D837BF457542B0F7308E8999670A46E465A9E3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26A0821DCB6810F9EE588E7C2AF0FE26E68B99AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65E8AF72B6FAEC3075CAD781342983D346E05E2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6B35BC56FF405443673DBCB6226185BD30D1B95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7F97E75A1B9ABE21090F40226508D1F9BFFC36F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC732E3A9B0520E01A6AE99A59C55B4519E814DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE844BE1BC8BA23F51EC74943018ABA36BC1A51FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_HotTextField_0 = (-1);
		NullCheck(_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_BoxHash_1 = L_0;
		NullCheck(_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_ButonHash_2 = L_1;
		NullCheck(_stringLiteral26A0821DCB6810F9EE588E7C2AF0FE26E68B99AC);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral26A0821DCB6810F9EE588E7C2AF0FE26E68B99AC);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_RepeatButtonHash_3 = L_2;
		NullCheck(_stringLiteralDC732E3A9B0520E01A6AE99A59C55B4519E814DE);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteralDC732E3A9B0520E01A6AE99A59C55B4519E814DE);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_ToggleHash_4 = L_3;
		NullCheck(_stringLiteralE844BE1BC8BA23F51EC74943018ABA36BC1A51FF);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteralE844BE1BC8BA23F51EC74943018ABA36BC1A51FF);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_ButtonGridHash_5 = L_4;
		NullCheck(_stringLiteralA7F97E75A1B9ABE21090F40226508D1F9BFFC36F);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteralA7F97E75A1B9ABE21090F40226508D1F9BFFC36F);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_SliderHash_6 = L_5;
		NullCheck(_stringLiteralA6B35BC56FF405443673DBCB6226185BD30D1B95);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteralA6B35BC56FF405443673DBCB6226185BD30D1B95);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_BeginGroupHash_7 = L_6;
		NullCheck(_stringLiteral65E8AF72B6FAEC3075CAD781342983D346E05E2F);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral65E8AF72B6FAEC3075CAD781342983D346E05E2F);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_ScrollviewHash_8 = L_7;
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_8 = (GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49*)il2cpp_codegen_object_new(GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GenericStack__ctor_mD21753D674298C09F3684F19DD42680323055586(L_8, NULL);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___U3CscrollViewStatesU3Ek__BackingField_12 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___U3CscrollViewStatesU3Ek__BackingField_12), (void*)L_8);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9;
		L_9 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		GUI_set_nextScrollStepTime_mA35BA69E3FDBC961E42F6C9D02BB4E8776926A09_inline(L_9, NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_nextScrollStepTime_mA35BA69E3FDBC961E42F6C9D02BB4E8776926A09 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___U3CnextScrollStepTimeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_skin_mD51BAED314B39004AE3FDE74F9895CA19F3E40E5 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUIUtility_CheckOnGUI_mD167632D5D038DF66CC97F231CD45736D1F556D6(NULL);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DoSetSkin_mF4C06A8BE59628B6514F7FBF9422214A48BE03B9(L_0, NULL);
		return;
	}
}
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUI_get_skin_m97EC9EB4628B311C0DB7DF9FB19FAD82D6790A1B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* V_0 = NULL;
	{
		GUIUtility_CheckOnGUI_mD167632D5D038DF66CC97F231CD45736D1F556D6(NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_0 = ((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_Skin_10;
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DoSetSkin_mF4C06A8BE59628B6514F7FBF9422214A48BE03B9 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___0_newSkin, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_0 = ___0_newSkin;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_3;
		L_3 = GUIUtility_GetDefaultSkin_m3275F31A9D5C3D90A1BCF5135F5B3968D6CD2C33(NULL);
		___0_newSkin = L_3;
	}

IL_0015:
	{
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_4 = ___0_newSkin;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_Skin_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_Skin_10), (void*)L_4);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_5 = ___0_newSkin;
		NullCheck(L_5);
		GUISkin_MakeCurrent_mDB3BB1FBA5BD2FEDDA3F32F11170F47A6444AEED(L_5, NULL);
		return;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.GUI::get_matrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GUI_get_matrix_m3CA02DED0598EE32BD9E66CA533A78EFB0A246FC (const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0;
		L_0 = GUIClip_GetMatrix_mABFDC4C3D2B71C84191EAA109A4373A1D75BD3E1(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUI::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_matrix_m7759FEC96FBCB97E02B1BA44D2EC1B3FEEFA257F (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_value;
		GUIClip_SetMatrix_m2C4B22CA0D33E580CBD455CC8E5422C8FF229733(L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_m4A951E57C7DCCF95A0306240144CA2713F546526 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, String_t* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_position;
		String_t* L_1 = ___1_text;
		il2cpp_codegen_runtime_class_init_inline(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_2;
		L_2 = GUIContent_Temp_m4AE3B839AF38DD23ECC1D585C391E1CA43B8EA73(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_3 = ((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_Skin_10;
		NullCheck(L_3);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4;
		L_4 = GUISkin_get_label_m99E1A8D6D8592F88F581437D24DB1EDE05C63E5E(L_3, NULL);
		GUI_Label_mFC6559DAC18FE889F1B94729AED3550374D18089(L_0, L_2, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_m0D7BA53414421D71010DFF628EAA6CCCB3DE737E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, String_t* ___1_text, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_position;
		String_t* L_1 = ___1_text;
		il2cpp_codegen_runtime_class_init_inline(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_2;
		L_2 = GUIContent_Temp_m4AE3B839AF38DD23ECC1D585C391E1CA43B8EA73(L_1, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = ___2_style;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Label_mFC6559DAC18FE889F1B94729AED3550374D18089(L_0, L_2, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mFC6559DAC18FE889F1B94729AED3550374D18089 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUIUtility_CheckOnGUI_mD167632D5D038DF66CC97F231CD45736D1F556D6(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_position;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = ___1_content;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = ___2_style;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DoLabel_mE43FD8B17DE5AF3B9E12E15B548CD6846F4AF27F(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_mB47BC44807774B77DB8B2BB548D339036544ACC4 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, String_t* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_position;
		String_t* L_1 = ___1_text;
		il2cpp_codegen_runtime_class_init_inline(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_2;
		L_2 = GUIContent_Temp_m4AE3B839AF38DD23ECC1D585C391E1CA43B8EA73(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_3 = ((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_Skin_10;
		NullCheck(L_3);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4;
		L_4 = GUISkin_get_box_m21BE7FC56D903B95BAFAE8890425D330EA88D893(L_3, NULL);
		GUI_Box_m4A53BAE78DC7C6724F50E54D9BEB7135BAA0DA0C(L_0, L_2, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_m4A53BAE78DC7C6724F50E54D9BEB7135BAA0DA0C (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		GUIUtility_CheckOnGUI_mD167632D5D038DF66CC97F231CD45736D1F556D6(NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_BoxHash_1;
		int32_t L_1;
		L_1 = GUIUtility_GetControlID_m2E0F66C8714A84DD5E9BEF4B9B464DAF1C03A9F7(L_0, 2, NULL);
		V_0 = L_1;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_2;
		L_2 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)7))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_5 = ___2_style;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6 = ___0_position;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_7 = ___1_content;
		int32_t L_8 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_9;
		L_9 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(L_9, NULL);
		bool L_11;
		L_11 = Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B((&___0_position), L_10, NULL);
		NullCheck(L_5);
		GUIStyle_Draw_mACFC9CE57BD530BB6A9592149DD95108A8014406(L_5, L_6, L_7, L_8, (bool)0, L_11, NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m26D18B144D3116398B9E9BECB0C4014F57DBE44B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, String_t* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_position;
		String_t* L_1 = ___1_text;
		il2cpp_codegen_runtime_class_init_inline(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_2;
		L_2 = GUIContent_Temp_m4AE3B839AF38DD23ECC1D585C391E1CA43B8EA73(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_3 = ((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_Skin_10;
		NullCheck(L_3);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4;
		L_4 = GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289(L_3, NULL);
		bool L_5;
		L_5 = GUI_Button_mC05C634998E83DB614858EC020F6A109AA782A93(L_0, L_2, L_4, NULL);
		V_0 = L_5;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m62135816B7F4BB45759E10E953926E4E0F24D370 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, String_t* ___1_text, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_position;
		String_t* L_1 = ___1_text;
		il2cpp_codegen_runtime_class_init_inline(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_2;
		L_2 = GUIContent_Temp_m4AE3B839AF38DD23ECC1D585C391E1CA43B8EA73(L_1, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = ___2_style;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = GUI_Button_mC05C634998E83DB614858EC020F6A109AA782A93(L_0, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_mC05C634998E83DB614858EC020F6A109AA782A93 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_ButonHash_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = ___0_position;
		int32_t L_2;
		L_2 = GUIUtility_GetControlID_m3AACC1B4BDE62E7C3E5D861A470351FA1BAA752E(L_0, 2, L_1, NULL);
		V_0 = L_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = ___0_position;
		int32_t L_4 = V_0;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_5 = ___1_content;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_6 = ___2_style;
		bool L_7;
		L_7 = GUI_Button_mF539BB7C1C7D6C46E457F9A830A637D3D2EFDAF6(L_3, L_4, L_5, L_6, NULL);
		V_1 = L_7;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_mF539BB7C1C7D6C46E457F9A830A637D3D2EFDAF6 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, int32_t ___1_id, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___2_content, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___3_style, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		GUIUtility_CheckOnGUI_mD167632D5D038DF66CC97F231CD45736D1F556D6(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_position;
		int32_t L_1 = ___1_id;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_2 = ___2_content;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = ___3_style;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = GUI_DoButton_m6B5D49C56FD43B570B43D9500AC5AFDE0533E99D(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.GUI::DoControl(UnityEngine.Rect,System.Int32,System.Boolean,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_DoControl_m2E99A053EADA967772D440EDDC745562BDC848D9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, int32_t ___1_id, bool ___2_on, bool ___3_hover, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___4_content, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___5_style, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B11_0 = 0;
	int32_t G_B17_0 = 0;
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_0;
		L_0 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		V_0 = L_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_1, NULL);
		V_3 = L_2;
		int32_t L_3 = V_3;
		V_2 = L_3;
		int32_t L_4 = V_2;
		switch (L_4)
		{
			case 0:
			{
				goto IL_004e;
			}
			case 1:
			{
				goto IL_00e0;
			}
			case 2:
			{
				goto IL_012f;
			}
			case 3:
			{
				goto IL_011a;
			}
			case 4:
			{
				goto IL_0070;
			}
			case 5:
			{
				goto IL_012f;
			}
			case 6:
			{
				goto IL_012f;
			}
			case 7:
			{
				goto IL_003b;
			}
		}
	}
	{
		goto IL_012f;
	}

IL_003b:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_5 = ___5_style;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6 = ___0_position;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_7 = ___4_content;
		int32_t L_8 = ___1_id;
		bool L_9 = ___2_on;
		bool L_10 = ___3_hover;
		NullCheck(L_5);
		GUIStyle_Draw_mACFC9CE57BD530BB6A9592149DD95108A8014406(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		goto IL_012f;
	}

IL_004e:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11 = ___0_position;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_12 = V_0;
		bool L_13;
		L_13 = GUIUtility_HitTest_m0312C850D991342F3A7656A959C87466500F2987(L_11, L_12, NULL);
		V_4 = L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_15 = ___1_id;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_GrabMouseControl_mA4B15F8FC1584E422AAA4FBAA2C8A25FCB70B62A(L_15, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_16 = V_0;
		NullCheck(L_16);
		Event_Use_mD77A166D8CFEC4997484C58BC55FEB2D288D3453(L_16, NULL);
	}

IL_006b:
	{
		goto IL_012f;
	}

IL_0070:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_17 = V_0;
		NullCheck(L_17);
		bool L_18;
		L_18 = Event_get_alt_m57F7F5C1F5FFCE43EFA6889F83CFA42DCA18A74B(L_17, NULL);
		if (L_18)
		{
			goto IL_0090;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_19 = V_0;
		NullCheck(L_19);
		bool L_20;
		L_20 = Event_get_shift_mB8409DA839B09DC6137848E131A6DBE70BB9E70A(L_19, NULL);
		if (L_20)
		{
			goto IL_0090;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_21 = V_0;
		NullCheck(L_21);
		bool L_22;
		L_22 = Event_get_command_m202DE2CB0BE0AAB5CDFEC9DA1BBD3B51E8497547(L_21, NULL);
		if (L_22)
		{
			goto IL_0090;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_23 = V_0;
		NullCheck(L_23);
		bool L_24;
		L_24 = Event_get_control_m1E363A7ABA4F2E8CF41C661A48D53D85D635D320(L_23, NULL);
		G_B11_0 = ((int32_t)(L_24));
		goto IL_0091;
	}

IL_0090:
	{
		G_B11_0 = 1;
	}

IL_0091:
	{
		V_1 = (bool)G_B11_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64(L_25, NULL);
		if ((((int32_t)L_26) == ((int32_t)((int32_t)32))))
		{
			goto IL_00b3;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64(L_27, NULL);
		if ((((int32_t)L_28) == ((int32_t)((int32_t)13))))
		{
			goto IL_00b3;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64(L_29, NULL);
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)271)))))
		{
			goto IL_00c0;
		}
	}

IL_00b3:
	{
		bool L_31 = V_1;
		if (L_31)
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_32;
		L_32 = GUIUtility_get_keyboardControl_mB0FAC848390B7F163CD2EE0A911FADD5CAD70B1E(NULL);
		int32_t L_33 = ___1_id;
		G_B17_0 = ((((int32_t)L_32) == ((int32_t)L_33))? 1 : 0);
		goto IL_00c1;
	}

IL_00c0:
	{
		G_B17_0 = 0;
	}

IL_00c1:
	{
		V_5 = (bool)G_B17_0;
		bool L_34 = V_5;
		if (!L_34)
		{
			goto IL_00de;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_35 = V_0;
		NullCheck(L_35);
		Event_Use_mD77A166D8CFEC4997484C58BC55FEB2D288D3453(L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_changed_mBD91A44AFA77D2BF883B3150AF4AE6AC3ED121DC((bool)1, NULL);
		bool L_36 = ___2_on;
		V_6 = (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		goto IL_0134;
	}

IL_00de:
	{
		goto IL_012f;
	}

IL_00e0:
	{
		int32_t L_37 = ___1_id;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = GUI_HasMouseControl_m336734E97742086851F3C78CC9DAB55508AA44FF(L_37, NULL);
		V_7 = L_38;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_0118;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_ReleaseMouseControl_m956B2CF27B6D82677D2960D310D92F043FCEC82B(NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_40 = V_0;
		NullCheck(L_40);
		Event_Use_mD77A166D8CFEC4997484C58BC55FEB2D288D3453(L_40, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_41 = ___0_position;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_42 = V_0;
		bool L_43;
		L_43 = GUIUtility_HitTest_m0312C850D991342F3A7656A959C87466500F2987(L_41, L_42, NULL);
		V_8 = L_43;
		bool L_44 = V_8;
		if (!L_44)
		{
			goto IL_0117;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_changed_mBD91A44AFA77D2BF883B3150AF4AE6AC3ED121DC((bool)1, NULL);
		bool L_45 = ___2_on;
		V_6 = (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		goto IL_0134;
	}

IL_0117:
	{
	}

IL_0118:
	{
		goto IL_012f;
	}

IL_011a:
	{
		int32_t L_46 = ___1_id;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = GUI_HasMouseControl_m336734E97742086851F3C78CC9DAB55508AA44FF(L_46, NULL);
		V_9 = L_47;
		bool L_48 = V_9;
		if (!L_48)
		{
			goto IL_012d;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_49 = V_0;
		NullCheck(L_49);
		Event_Use_mD77A166D8CFEC4997484C58BC55FEB2D288D3453(L_49, NULL);
	}

IL_012d:
	{
		goto IL_012f;
	}

IL_012f:
	{
		bool L_50 = ___2_on;
		V_6 = L_50;
		goto IL_0134;
	}

IL_0134:
	{
		bool L_51 = V_6;
		return L_51;
	}
}
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DoLabel_mE43FD8B17DE5AF3B9E12E15B548CD6846F4AF27F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_0;
		L_0 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		V_0 = L_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_1, NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		goto IL_00a0;
	}

IL_001c:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_4 = V_0;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(L_4, NULL);
		bool L_6;
		L_6 = Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B((&___0_position), L_5, NULL);
		V_1 = L_6;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_7 = ___2_style;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8 = ___0_position;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_9 = ___1_content;
		bool L_10 = V_1;
		NullCheck(L_7);
		GUIStyle_Draw_m7B978F5F5B576810CF8546142D23FD9990E002D8(L_7, L_8, L_9, L_10, (bool)0, (bool)0, (bool)0, NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_11 = ___1_content;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = GUIContent_get_tooltip_mC2D07D7B2884A5F5A56F84A7FE6BF39905AB15BD(L_11, NULL);
		bool L_13;
		L_13 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_12, NULL);
		bool L_14 = V_1;
		if (!((int32_t)(((((int32_t)L_13) == ((int32_t)0))? 1 : 0)&(int32_t)L_14)))
		{
			goto IL_005f;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_15;
		L_15 = GUIClip_get_visibleRect_m93F10FF2376C3BBBF3562A67DD7E207240D2F611(NULL);
		V_4 = L_15;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_16 = V_0;
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(L_16, NULL);
		bool L_18;
		L_18 = Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B((&V_4), L_17, NULL);
		G_B5_0 = ((int32_t)(L_18));
		goto IL_0060;
	}

IL_005f:
	{
		G_B5_0 = 0;
	}

IL_0060:
	{
		V_3 = (bool)G_B5_0;
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_00a0;
		}
	}
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_20 = ___1_content;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = GUIContent_get_tooltip_mC2D07D7B2884A5F5A56F84A7FE6BF39905AB15BD(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = GUIStyle_IsTooltipActive_mAD93F97B98889CA47BF1305F3D4C87D5EE8DD777(L_21, NULL);
		V_5 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_008e;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_24 = V_0;
		NullCheck(L_24);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(L_24, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_27;
		memset((&L_27), 0, sizeof(L_27));
		Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675((&L_27), L_25, L_26, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_ToolTipRect_11 = L_27;
	}

IL_008e:
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_28 = ___1_content;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = GUIContent_get_tooltip_mC2D07D7B2884A5F5A56F84A7FE6BF39905AB15BD(L_28, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_30 = ((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_ToolTipRect_11;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_SetMouseTooltip_mFF3E22C7330AE180E83AB2929049BCD87B13B21E(L_29, L_30, NULL);
	}

IL_00a0:
	{
		return;
	}
}
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_DoButton_m6B5D49C56FD43B570B43D9500AC5AFDE0533E99D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, int32_t ___1_id, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___2_content, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___3_style, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_position;
		int32_t L_1 = ___1_id;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_2;
		L_2 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(L_2, NULL);
		bool L_4;
		L_4 = Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B((&___0_position), L_3, NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_5 = ___2_content;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_6 = ___3_style;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = GUI_DoControl_m2E99A053EADA967772D440EDDC745562BDC848D9(L_0, L_1, (bool)0, L_4, L_5, L_6, NULL);
		V_0 = L_7;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// UnityEngineInternal.GenericStack UnityEngine.GUI::get_scrollViewStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* GUI_get_scrollViewStates_m940A384A713B8A7DC67016D1588965A42E561773 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_0 = ((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___U3CscrollViewStatesU3Ek__BackingField_12;
		return L_0;
	}
}
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GUI_Window_m4D7873DE1D0B9B66CE382BB34CF1C64E54FF97A4 (int32_t ___0_id, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_clientRect, WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* ___2_func, String_t* ___3_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GUIUtility_CheckOnGUI_mD167632D5D038DF66CC97F231CD45736D1F556D6(NULL);
		int32_t L_0 = ___0_id;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = ___1_clientRect;
		WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* L_2 = ___2_func;
		String_t* L_3 = ___3_text;
		il2cpp_codegen_runtime_class_init_inline(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_4;
		L_4 = GUIContent_Temp_m4AE3B839AF38DD23ECC1D585C391E1CA43B8EA73(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_5;
		L_5 = GUI_get_skin_m97EC9EB4628B311C0DB7DF9FB19FAD82D6790A1B(NULL);
		NullCheck(L_5);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_6;
		L_6 = GUISkin_get_window_m760DAF129E72775DFD18CB71720AD306345E91C2(L_5, NULL);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_7;
		L_7 = GUI_get_skin_m97EC9EB4628B311C0DB7DF9FB19FAD82D6790A1B(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		L_8 = GUI_DoWindow_mBB14F413BB624C2AC622262DBFE5376A06978433(L_0, L_1, L_2, L_4, L_6, L_7, (bool)1, NULL);
		V_0 = L_8;
		goto IL_0028;
	}

IL_0028:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Rect UnityEngine.GUI::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GUI_DoWindow_mBB14F413BB624C2AC622262DBFE5376A06978433 (int32_t ___0_id, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_clientRect, WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* ___2_func, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___3_title, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___4_style, GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___5_skin, bool ___6_forceRectOnLayout, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_id;
		int32_t L_1 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___s_OriginalID_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = ___1_clientRect;
		WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* L_3 = ___2_func;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_4 = ___3_title;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_5 = ___4_style;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_6 = ___5_skin;
		bool L_7 = ___6_forceRectOnLayout;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		L_8 = GUI_Internal_DoWindow_m51C423AD09C2F6AAD8DF42D8D155CCB3C85882CD(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		V_0 = L_8;
		goto IL_0018;
	}

IL_0018:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9 = V_0;
		return L_9;
	}
}
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_CallWindowDelegate_m3FC075A6C33D007CBDC6983CDD6515C246E35B3F (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* ___0_func, int32_t ___1_id, int32_t ___2_instanceID, GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___3__skin, int32_t ___4_forceRect, float ___5_width, float ___6_height, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___7_style, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* V_3 = NULL;
	bool V_4 = false;
	{
		int32_t L_0 = ___1_id;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_1;
		L_1 = GUILayoutUtility_SelectIDList_m601F4AA990B7FD59A779F5375EC55ADDB86927A9(L_0, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_2;
		L_2 = GUI_get_skin_m97EC9EB4628B311C0DB7DF9FB19FAD82D6790A1B(NULL);
		V_0 = L_2;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_3;
		L_3 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_3, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)8))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_6 = ___4_forceRect;
		V_2 = (bool)((!(((uint32_t)L_6) <= ((uint32_t)0)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_8 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)2);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_9 = L_8;
		float L_10 = ___5_width;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_11;
		L_11 = GUILayout_Width_m3FADF145F37481F9FEFF0E89E8A466CF5532DCE3(L_10, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_11);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_12 = L_9;
		float L_13 = ___6_height;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_14;
		L_14 = GUILayout_Height_m5E1526C541663A21437ED06E233FDDA08A856B91(L_13, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_14);
		V_3 = L_12;
		int32_t L_15 = ___1_id;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_16 = ___7_style;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_17 = V_3;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_m99FBC28B305B9C0589BC73138073BE9420C977F5(L_15, L_16, L_17, NULL);
		goto IL_005f;
	}

IL_0053:
	{
		int32_t L_18 = ___1_id;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_19 = ___7_style;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_m99FBC28B305B9C0589BC73138073BE9420C977F5(L_18, L_19, (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)NULL, NULL);
	}

IL_005f:
	{
		goto IL_0071;
	}

IL_0062:
	{
		int32_t L_20 = ___1_id;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_21;
		L_21 = GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938(NULL);
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_m99FBC28B305B9C0589BC73138073BE9420C977F5(L_20, L_21, (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)NULL, NULL);
	}

IL_0071:
	{
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_22 = ___3__skin;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_skin_mD51BAED314B39004AE3FDE74F9895CA19F3E40E5(L_22, NULL);
		WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* L_23 = ___0_func;
		if (L_23)
		{
			goto IL_007d;
		}
	}
	{
		goto IL_0085;
	}

IL_007d:
	{
		WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* L_24 = ___0_func;
		int32_t L_25 = ___1_id;
		NullCheck(L_24);
		WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_inline(L_24, L_25, NULL);
	}

IL_0085:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_26;
		L_26 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_26, NULL);
		V_4 = (bool)((((int32_t)L_27) == ((int32_t)8))? 1 : 0);
		bool L_28 = V_4;
		if (!L_28)
		{
			goto IL_00a0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		GUILayoutUtility_Layout_mBC6C938DC931B8CABC1FA6C33AA60ECFAC3D9B30(NULL);
	}

IL_00a0:
	{
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_29 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_skin_mD51BAED314B39004AE3FDE74F9895CA19F3E40E5(L_29, NULL);
		return;
	}
}
// UnityEngine.Color UnityEngine.GUI::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GUI_get_color_m15488B4AD785D10DEB5C66398D0FA9A0C0EA7ABB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_get_color_Injected_m7B9A31188627647FDD914FB8A83C32627769D1CA((&V_0), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_color_mA44927D3F2ACB1E228815F10042A6F62B7645648 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_color_Injected_mF82410FC38D4C12CEC8ADCC9CCCC00F12035CA12((&___0_value), NULL);
		return;
	}
}
// UnityEngine.Color UnityEngine.GUI::get_backgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GUI_get_backgroundColor_mCAA42085DAB8A1B71E2D0C6C8D86F93CD311FA33 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_get_backgroundColor_Injected_m81488D0D17EB867EEA60685182EAD8E0BC7CFB1F((&V_0), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.GUI::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_backgroundColor_m4ED80300A7DE3EAF923E3344E22D6682FA75B264 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_backgroundColor_Injected_m16FDF89F7678824BA547AEF70D4EC84615C7D6B8((&___0_value), NULL);
		return;
	}
}
// UnityEngine.Color UnityEngine.GUI::get_contentColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GUI_get_contentColor_m32B15C8D6BEEFEBCE667ECD3CF664C83224F103F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_get_contentColor_Injected_mA592670CB3A23833ED6F6FA43D021CA049CB6FAC((&V_0), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.GUI::set_contentColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_contentColor_m3CDC4D626AC8B6D487AD19765D79C593B98AEF26 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_contentColor_Injected_mE1EFDCAC30FF6CE60437BF1B8B04488C9A75E2C9((&___0_value), NULL);
		return;
	}
}
// System.Boolean UnityEngine.GUI::get_changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_get_changed_m3473B2964DCE8C2ADE081517093168C171BBE448 (const RuntimeMethod* method) 
{
	typedef bool (*GUI_get_changed_m3473B2964DCE8C2ADE081517093168C171BBE448_ftn) ();
	static GUI_get_changed_m3473B2964DCE8C2ADE081517093168C171BBE448_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_get_changed_m3473B2964DCE8C2ADE081517093168C171BBE448_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::get_changed()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_changed_mBD91A44AFA77D2BF883B3150AF4AE6AC3ED121DC (bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUI_set_changed_mBD91A44AFA77D2BF883B3150AF4AE6AC3ED121DC_ftn) (bool);
	static GUI_set_changed_mBD91A44AFA77D2BF883B3150AF4AE6AC3ED121DC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_set_changed_mBD91A44AFA77D2BF883B3150AF4AE6AC3ED121DC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::set_changed(System.Boolean)");
	_il2cpp_icall_func(___0_value);
}
// System.Boolean UnityEngine.GUI::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_get_enabled_m336E115A84DBD8D18A925D0755B51746B98B516D (const RuntimeMethod* method) 
{
	typedef bool (*GUI_get_enabled_m336E115A84DBD8D18A925D0755B51746B98B516D_ftn) ();
	static GUI_get_enabled_m336E115A84DBD8D18A925D0755B51746B98B516D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_get_enabled_m336E115A84DBD8D18A925D0755B51746B98B516D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::get_enabled()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.GUI::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_enabled_mF2F99A6870ACAFAEFB5E8FF1B69C684951D390C9 (bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUI_set_enabled_mF2F99A6870ACAFAEFB5E8FF1B69C684951D390C9_ftn) (bool);
	static GUI_set_enabled_mF2F99A6870ACAFAEFB5E8FF1B69C684951D390C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_set_enabled_mF2F99A6870ACAFAEFB5E8FF1B69C684951D390C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::set_enabled(System.Boolean)");
	_il2cpp_icall_func(___0_value);
}
// System.Void UnityEngine.GUI::GrabMouseControl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_GrabMouseControl_mA4B15F8FC1584E422AAA4FBAA2C8A25FCB70B62A (int32_t ___0_id, const RuntimeMethod* method) 
{
	typedef void (*GUI_GrabMouseControl_mA4B15F8FC1584E422AAA4FBAA2C8A25FCB70B62A_ftn) (int32_t);
	static GUI_GrabMouseControl_mA4B15F8FC1584E422AAA4FBAA2C8A25FCB70B62A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_GrabMouseControl_mA4B15F8FC1584E422AAA4FBAA2C8A25FCB70B62A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::GrabMouseControl(System.Int32)");
	_il2cpp_icall_func(___0_id);
}
// System.Boolean UnityEngine.GUI::HasMouseControl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_HasMouseControl_m336734E97742086851F3C78CC9DAB55508AA44FF (int32_t ___0_id, const RuntimeMethod* method) 
{
	typedef bool (*GUI_HasMouseControl_m336734E97742086851F3C78CC9DAB55508AA44FF_ftn) (int32_t);
	static GUI_HasMouseControl_m336734E97742086851F3C78CC9DAB55508AA44FF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_HasMouseControl_m336734E97742086851F3C78CC9DAB55508AA44FF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::HasMouseControl(System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(___0_id);
	return icallRetVal;
}
// System.Void UnityEngine.GUI::ReleaseMouseControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_ReleaseMouseControl_m956B2CF27B6D82677D2960D310D92F043FCEC82B (const RuntimeMethod* method) 
{
	typedef void (*GUI_ReleaseMouseControl_m956B2CF27B6D82677D2960D310D92F043FCEC82B_ftn) ();
	static GUI_ReleaseMouseControl_m956B2CF27B6D82677D2960D310D92F043FCEC82B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_ReleaseMouseControl_m956B2CF27B6D82677D2960D310D92F043FCEC82B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::ReleaseMouseControl()");
	_il2cpp_icall_func();
}
// UnityEngine.Rect UnityEngine.GUI::Internal_DoWindow(System.Int32,System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GUI_Internal_DoWindow_m51C423AD09C2F6AAD8DF42D8D155CCB3C85882CD (int32_t ___0_id, int32_t ___1_instanceID, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___2_clientRect, WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* ___3_func, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___4_title, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___5_style, RuntimeObject* ___6_skin, bool ___7_forceRectOnLayout, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_id;
		int32_t L_1 = ___1_instanceID;
		WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* L_2 = ___3_func;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_3 = ___4_title;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4 = ___5_style;
		RuntimeObject* L_5 = ___6_skin;
		bool L_6 = ___7_forceRectOnLayout;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Internal_DoWindow_Injected_mFE36C291FB59CB9B7E5FB46D95D39203A2C36F21(L_0, L_1, (&___2_clientRect), L_2, L_3, L_4, L_5, L_6, (&V_0), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7 = V_0;
		return L_7;
	}
}
// System.Void UnityEngine.GUI::get_color_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_get_color_Injected_m7B9A31188627647FDD914FB8A83C32627769D1CA (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*GUI_get_color_Injected_m7B9A31188627647FDD914FB8A83C32627769D1CA_ftn) (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static GUI_get_color_Injected_m7B9A31188627647FDD914FB8A83C32627769D1CA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_get_color_Injected_m7B9A31188627647FDD914FB8A83C32627769D1CA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::get_color_Injected(UnityEngine.Color&)");
	_il2cpp_icall_func(___0_ret);
}
// System.Void UnityEngine.GUI::set_color_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_color_Injected_mF82410FC38D4C12CEC8ADCC9CCCC00F12035CA12 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUI_set_color_Injected_mF82410FC38D4C12CEC8ADCC9CCCC00F12035CA12_ftn) (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static GUI_set_color_Injected_mF82410FC38D4C12CEC8ADCC9CCCC00F12035CA12_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_set_color_Injected_mF82410FC38D4C12CEC8ADCC9CCCC00F12035CA12_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::set_color_Injected(UnityEngine.Color&)");
	_il2cpp_icall_func(___0_value);
}
// System.Void UnityEngine.GUI::get_backgroundColor_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_get_backgroundColor_Injected_m81488D0D17EB867EEA60685182EAD8E0BC7CFB1F (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*GUI_get_backgroundColor_Injected_m81488D0D17EB867EEA60685182EAD8E0BC7CFB1F_ftn) (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static GUI_get_backgroundColor_Injected_m81488D0D17EB867EEA60685182EAD8E0BC7CFB1F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_get_backgroundColor_Injected_m81488D0D17EB867EEA60685182EAD8E0BC7CFB1F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::get_backgroundColor_Injected(UnityEngine.Color&)");
	_il2cpp_icall_func(___0_ret);
}
// System.Void UnityEngine.GUI::set_backgroundColor_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_backgroundColor_Injected_m16FDF89F7678824BA547AEF70D4EC84615C7D6B8 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUI_set_backgroundColor_Injected_m16FDF89F7678824BA547AEF70D4EC84615C7D6B8_ftn) (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static GUI_set_backgroundColor_Injected_m16FDF89F7678824BA547AEF70D4EC84615C7D6B8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_set_backgroundColor_Injected_m16FDF89F7678824BA547AEF70D4EC84615C7D6B8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::set_backgroundColor_Injected(UnityEngine.Color&)");
	_il2cpp_icall_func(___0_value);
}
// System.Void UnityEngine.GUI::get_contentColor_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_get_contentColor_Injected_mA592670CB3A23833ED6F6FA43D021CA049CB6FAC (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*GUI_get_contentColor_Injected_mA592670CB3A23833ED6F6FA43D021CA049CB6FAC_ftn) (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static GUI_get_contentColor_Injected_mA592670CB3A23833ED6F6FA43D021CA049CB6FAC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_get_contentColor_Injected_mA592670CB3A23833ED6F6FA43D021CA049CB6FAC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::get_contentColor_Injected(UnityEngine.Color&)");
	_il2cpp_icall_func(___0_ret);
}
// System.Void UnityEngine.GUI::set_contentColor_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_contentColor_Injected_mE1EFDCAC30FF6CE60437BF1B8B04488C9A75E2C9 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUI_set_contentColor_Injected_mE1EFDCAC30FF6CE60437BF1B8B04488C9A75E2C9_ftn) (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static GUI_set_contentColor_Injected_mE1EFDCAC30FF6CE60437BF1B8B04488C9A75E2C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_set_contentColor_Injected_mE1EFDCAC30FF6CE60437BF1B8B04488C9A75E2C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::set_contentColor_Injected(UnityEngine.Color&)");
	_il2cpp_icall_func(___0_value);
}
// System.Void UnityEngine.GUI::Internal_DoWindow_Injected(System.Int32,System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,System.Object,System.Boolean,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Internal_DoWindow_Injected_mFE36C291FB59CB9B7E5FB46D95D39203A2C36F21 (int32_t ___0_id, int32_t ___1_instanceID, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___2_clientRect, WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* ___3_func, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___4_title, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___5_style, RuntimeObject* ___6_skin, bool ___7_forceRectOnLayout, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___8_ret, const RuntimeMethod* method) 
{
	typedef void (*GUI_Internal_DoWindow_Injected_mFE36C291FB59CB9B7E5FB46D95D39203A2C36F21_ftn) (int32_t, int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, RuntimeObject*, bool, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*);
	static GUI_Internal_DoWindow_Injected_mFE36C291FB59CB9B7E5FB46D95D39203A2C36F21_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_Internal_DoWindow_Injected_mFE36C291FB59CB9B7E5FB46D95D39203A2C36F21_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::Internal_DoWindow_Injected(System.Int32,System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,System.Object,System.Boolean,UnityEngine.Rect&)");
	_il2cpp_icall_func(___0_id, ___1_instanceID, ___2_clientRect, ___3_func, ___4_title, ___5_style, ___6_skin, ___7_forceRectOnLayout, ___8_ret);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_Multicast(WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* currentDelegate = reinterpret_cast<WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_id, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_OpenInst(WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_id, method);
}
void WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_OpenStatic(WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_id, method);
}
void WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_OpenStaticInvoker(WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_id);
}
void WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_ClosedStaticInvoker(WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_id);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550 (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_id);

}
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction__ctor_m31D7B6C221D9A078AE5C8BA7C3BC0FA406EA7B71 (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_Multicast;
}
// System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85 (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_id, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.TextEditor::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = __this->___m_Content_8;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = GUIContent_get_text_mC6D7981351923AD7F802AC659314BA56DF7F3ED6(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.TextEditor::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_set_text_mB71257AAD99A56AD5EA96DB546B17296E60C4455 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* G_B1_1 = NULL;
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = __this->___m_Content_8;
		String_t* L_1 = ___0_value;
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0011;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B2_0 = L_3;
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		NullCheck(G_B2_1);
		GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F(G_B2_1, G_B2_0, NULL);
		int32_t* L_4 = (int32_t*)(&__this->___m_CursorIndex_10);
		TextEditor_EnsureValidCodePointIndex_m9C20E36F766CF8DBD87A36606B1FAEED3BE42BB1(__this, L_4, NULL);
		int32_t* L_5 = (int32_t*)(&__this->___m_SelectIndex_11);
		TextEditor_EnsureValidCodePointIndex_m9C20E36F766CF8DBD87A36606B1FAEED3BE42BB1(__this, L_5, NULL);
		return;
	}
}
// UnityEngine.Rect UnityEngine.TextEditor::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D TextEditor_get_position_m40763329A82988B1C5D5C1DA9919932061C99E13 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = __this->___m_Position_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TextEditor::set_position(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_set_position_mDD8F5A0BFCE942F8D4403F78D3E1B0EF35D17EA0 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = __this->___m_Position_9;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = ___0_value;
		bool L_2;
		L_2 = Rect_op_Equality_mF2A038255CAF5F1E86079B9EE0FC96DE54307C1F(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_002c;
	}

IL_0013:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___scrollOffset_7 = L_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5 = ___0_value;
		__this->___m_Position_9 = L_5;
		TextEditor_UpdateScrollOffset_mD3F056830FF3FFC3461ED965EB0B7E306536FC3B(__this, NULL);
	}

IL_002c:
	{
		return;
	}
}
// UnityEngine.Rect UnityEngine.TextEditor::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D TextEditor_get_localPosition_mFC726E86A4A79A98813DB9591648E0D82049D01D (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		L_0 = TextEditor_get_position_m40763329A82988B1C5D5C1DA9919932061C99E13(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.TextEditor::get_cursorIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_CursorIndex_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TextEditor::set_cursorIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___m_CursorIndex_10;
		V_0 = L_0;
		int32_t L_1 = ___0_value;
		__this->___m_CursorIndex_10 = L_1;
		int32_t* L_2 = (int32_t*)(&__this->___m_CursorIndex_10);
		TextEditor_EnsureValidCodePointIndex_m9C20E36F766CF8DBD87A36606B1FAEED3BE42BB1(__this, L_2, NULL);
		int32_t L_3 = __this->___m_CursorIndex_10;
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		__this->___m_RevealCursor_12 = (bool)1;
		VirtualActionInvoker0::Invoke(6 /* System.Void UnityEngine.TextEditor::OnCursorIndexChange() */, __this);
	}

IL_003c:
	{
		return;
	}
}
// System.Int32 UnityEngine.TextEditor::get_selectIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_SelectIndex_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TextEditor::set_selectIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___m_SelectIndex_11;
		V_0 = L_0;
		int32_t L_1 = ___0_value;
		__this->___m_SelectIndex_11 = L_1;
		int32_t* L_2 = (int32_t*)(&__this->___m_SelectIndex_11);
		TextEditor_EnsureValidCodePointIndex_m9C20E36F766CF8DBD87A36606B1FAEED3BE42BB1(__this, L_2, NULL);
		int32_t L_3 = __this->___m_SelectIndex_11;
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		VirtualActionInvoker0::Invoke(7 /* System.Void UnityEngine.TextEditor::OnSelectIndexChange() */, __this);
	}

IL_0033:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::ClearCursorPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	{
		__this->___hasHorizontalCursorPos_4 = (bool)0;
		__this->___m_iAltCursorPos_19 = (-1);
		return;
	}
}
// System.Int32 UnityEngine.TextEditor::get_altCursorPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_get_altCursorPosition_mAAC652AAF3E4FFB98980CBA38D1B40F1A271CC13 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_iAltCursorPos_19;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TextEditor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor__ctor_m4AEAC85E4950B709A35F26D1F0DAB3C9D35E3494 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___keyboardOnScreen_0 = (TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keyboardOnScreen_0), (void*)(TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A*)NULL);
		__this->___controlID_1 = 0;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0;
		L_0 = GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938(NULL);
		__this->___style_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___style_2), (void*)L_0);
		__this->___multiline_3 = (bool)0;
		__this->___hasHorizontalCursorPos_4 = (bool)0;
		__this->___isPasswordField_5 = (bool)0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___scrollOffset_7 = L_1;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_2 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GUIContent__ctor_m89AC53A7E9BF9EB9E70297353DEAA6FEC2C800AC(L_2, NULL);
		__this->___m_Content_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Content_8), (void*)L_2);
		__this->___m_CursorIndex_10 = 0;
		__this->___m_SelectIndex_11 = 0;
		__this->___m_RevealCursor_12 = (bool)0;
		__this->___m_MouseDragSelectsWholeWords_15 = (bool)0;
		__this->___m_DblClickInitPos_16 = 0;
		__this->___m_DblClickSnap_17 = 0;
		__this->___m_bJustSelected_18 = (bool)0;
		__this->___m_iAltCursorPos_19 = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_OnFocus_mCD739D81E0F74A3E68A0BB861A3A3BD87DDBEE0A (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->___multiline_3;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = 0;
		V_1 = L_2;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_2, NULL);
		int32_t L_3 = V_1;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_3, NULL);
		goto IL_0026;
	}

IL_001f:
	{
		TextEditor_SelectAll_mDEBAABE01DF37B1EE8EFDE43E8036B5C2813C685(__this, NULL);
	}

IL_0026:
	{
		__this->___m_HasFocus_6 = (bool)1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnLostFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_OnLostFocus_mFDA430398601ABF5BBBF44D0A6CE969AFBED4FC9 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_HasFocus_6 = (bool)0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___scrollOffset_7 = L_0;
		return;
	}
}
// System.Void UnityEngine.TextEditor::GrabGraphicalCursorPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_GrabGraphicalCursorPos_m74915B49D9B0D200367FD710A1321C0D2E54B1E4 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___hasHorizontalCursorPos_4;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = __this->___style_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = VirtualFuncInvoker0< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_4 = __this->___m_Content_8;
		int32_t L_5;
		L_5 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = GUIStyle_GetCursorPixelPosition_m4FFBD3DC05CE503355DF01E57023AC349032CB2F(L_2, L_3, L_4, L_5, NULL);
		__this->___graphicalCursorPos_13 = L_6;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_7 = __this->___style_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		L_8 = VirtualFuncInvoker0< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_9 = __this->___m_Content_8;
		int32_t L_10;
		L_10 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = GUIStyle_GetCursorPixelPosition_m4FFBD3DC05CE503355DF01E57023AC349032CB2F(L_7, L_8, L_9, L_10, NULL);
		__this->___graphicalSelectCursorPos_14 = L_11;
		__this->___hasHorizontalCursorPos_4 = (bool)0;
	}

IL_005d:
	{
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::HandleKeyEvent(UnityEngine.Event,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_HandleKeyEvent_m14D691B63637C1F4CFD0A96F7940C69A9CD6C658 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___0_e, bool ___1_textIsReadOnly, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4C890AEA2FD3BA3DE92C9B54D52C89720AD6F9AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mDDD3315E43032466AEEDF911F20449DC4096A528_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		TextEditor_InitKeyActions_m30295CE738738468794A7AE3338BE827B891A0DD(__this, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_0 = ___0_e;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_0, NULL);
		V_0 = L_1;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_2 = ___0_e;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_3, NULL);
		NullCheck(L_3);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_3, ((int32_t)((int32_t)L_4&((int32_t)-33))), NULL);
		Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818* L_5 = ((TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27_StaticFields*)il2cpp_codegen_static_fields_for(TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27_il2cpp_TypeInfo_var))->___s_Keyactions_23;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_6 = ___0_e;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_m4C890AEA2FD3BA3DE92C9B54D52C89720AD6F9AD(L_5, L_6, Dictionary_2_ContainsKey_m4C890AEA2FD3BA3DE92C9B54D52C89720AD6F9AD_RuntimeMethod_var);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818* L_9 = ((TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27_StaticFields*)il2cpp_codegen_static_fields_for(TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27_il2cpp_TypeInfo_var))->___s_Keyactions_23;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_10 = ___0_e;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = Dictionary_2_get_Item_mDDD3315E43032466AEEDF911F20449DC4096A528(L_9, L_10, Dictionary_2_get_Item_mDDD3315E43032466AEEDF911F20449DC4096A528_RuntimeMethod_var);
		V_2 = L_11;
		int32_t L_12 = V_2;
		bool L_13 = ___1_textIsReadOnly;
		bool L_14;
		L_14 = TextEditor_PerformOperation_m9CC1732A34CF801A0348A4296BDBC9D015AB4014(__this, L_12, L_13, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_15 = ___0_e;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_15, L_16, NULL);
		V_3 = (bool)1;
		goto IL_005c;
	}

IL_0050:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_17 = ___0_e;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_17, L_18, NULL);
		V_3 = (bool)0;
		goto IL_005c;
	}

IL_005c:
	{
		bool L_19 = V_3;
		return L_19;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteLineBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_DeleteLineBack_m43927B9B9F8AD1CA54CED2C40571F190EBE9792D (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	{
		bool L_0;
		L_0 = TextEditor_get_hasSelection_mD63A0ECF990D21515ABCAD26A7974B58A8CECCE9(__this, NULL);
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		bool L_2;
		L_2 = TextEditor_DeleteSelection_m520F49C6269E488DD60BBD4603DA869FC446A788(__this, NULL);
		V_3 = (bool)1;
		goto IL_00ab;
	}

IL_001a:
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		V_1 = L_4;
		goto IL_0042;
	}

IL_0025:
	{
		String_t* L_5;
		L_5 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_4 = (bool)((((int32_t)L_7) == ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_9 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		goto IL_0050;
	}

IL_0042:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		V_5 = (bool)((!(((uint32_t)L_11) <= ((uint32_t)0)))? 1 : 0);
		bool L_12 = V_5;
		if (L_12)
		{
			goto IL_0025;
		}
	}

IL_0050:
	{
		int32_t L_13 = V_1;
		V_6 = (bool)((((int32_t)L_13) == ((int32_t)(-1)))? 1 : 0);
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_005c;
		}
	}
	{
		V_0 = 0;
	}

IL_005c:
	{
		int32_t L_15;
		L_15 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_16 = V_0;
		V_7 = (bool)((((int32_t)((((int32_t)L_15) == ((int32_t)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_00a7;
		}
	}
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_18 = __this->___m_Content_8;
		String_t* L_19;
		L_19 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_22 = V_0;
		NullCheck(L_19);
		String_t* L_23;
		L_23 = String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68(L_19, L_20, ((int32_t)il2cpp_codegen_subtract(L_21, L_22)), NULL);
		NullCheck(L_18);
		GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F(L_18, L_23, NULL);
		int32_t L_24 = V_0;
		int32_t L_25 = L_24;
		V_8 = L_25;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_25, NULL);
		int32_t L_26 = V_8;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_26, NULL);
		V_3 = (bool)1;
		goto IL_00ab;
	}

IL_00a7:
	{
		V_3 = (bool)0;
		goto IL_00ab;
	}

IL_00ab:
	{
		bool L_27 = V_3;
		return L_27;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteWordBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_DeleteWordBack_m9F0CDF4ADF1A86CB97BD8C60FD52031FCD24A210 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		bool L_0;
		L_0 = TextEditor_get_hasSelection_mD63A0ECF990D21515ABCAD26A7974B58A8CECCE9(__this, NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		bool L_2;
		L_2 = TextEditor_DeleteSelection_m520F49C6269E488DD60BBD4603DA869FC446A788(__this, NULL);
		V_2 = (bool)1;
		goto IL_0071;
	}

IL_0017:
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_4;
		L_4 = TextEditor_FindEndOfPreviousWord_mFBDBEABAC6CFE72EF4ED33A3474EF3998E460C00(__this, L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_6 = V_0;
		V_3 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_8 = __this->___m_Content_8;
		String_t* L_9;
		L_9 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_12 = V_0;
		NullCheck(L_9);
		String_t* L_13;
		L_13 = String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68(L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
		NullCheck(L_8);
		GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F(L_8, L_13, NULL);
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		V_4 = L_15;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_15, NULL);
		int32_t L_16 = V_4;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_16, NULL);
		V_2 = (bool)1;
		goto IL_0071;
	}

IL_006d:
	{
		V_2 = (bool)0;
		goto IL_0071;
	}

IL_0071:
	{
		bool L_17 = V_2;
		return L_17;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteWordForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_DeleteWordForward_mD81B94DA0DE3A3B9A212C3B6AF6C475B39E7A56D (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		bool L_0;
		L_0 = TextEditor_get_hasSelection_mD63A0ECF990D21515ABCAD26A7974B58A8CECCE9(__this, NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		bool L_2;
		L_2 = TextEditor_DeleteSelection_m520F49C6269E488DD60BBD4603DA869FC446A788(__this, NULL);
		V_2 = (bool)1;
		goto IL_0069;
	}

IL_0017:
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_4;
		L_4 = TextEditor_FindStartOfNextWord_m07650DF8A35625ED2B3230B6B4C96C730F945B0A(__this, L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		String_t* L_6;
		L_6 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		V_3 = (bool)((((int32_t)L_5) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_9 = __this->___m_Content_8;
		String_t* L_10;
		L_10 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_11;
		L_11 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_12 = V_0;
		int32_t L_13;
		L_13 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		NullCheck(L_10);
		String_t* L_14;
		L_14 = String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68(L_10, L_11, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
		NullCheck(L_9);
		GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F(L_9, L_14, NULL);
		V_2 = (bool)1;
		goto IL_0069;
	}

IL_0065:
	{
		V_2 = (bool)0;
		goto IL_0069;
	}

IL_0069:
	{
		bool L_15 = V_2;
		return L_15;
	}
}
// System.Boolean UnityEngine.TextEditor::Delete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_Delete_mFE5E2A0C6230CA113C1C64C4F0F5F5D30DF16EEA (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = TextEditor_get_hasSelection_mD63A0ECF990D21515ABCAD26A7974B58A8CECCE9(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		bool L_2;
		L_2 = TextEditor_DeleteSelection_m520F49C6269E488DD60BBD4603DA869FC446A788(__this, NULL);
		V_1 = (bool)1;
		goto IL_0067;
	}

IL_0017:
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		String_t* L_4;
		L_4 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0063;
		}
	}
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_7 = __this->___m_Content_8;
		String_t* L_8;
		L_8 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_9;
		L_9 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_10;
		L_10 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_11;
		L_11 = TextEditor_NextCodePointIndex_mF426772BB6B0CD7A3FC4042070C21902BF576B31(__this, L_10, NULL);
		int32_t L_12;
		L_12 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		NullCheck(L_8);
		String_t* L_13;
		L_13 = String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68(L_8, L_9, ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
		NullCheck(L_7);
		GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F(L_7, L_13, NULL);
		V_1 = (bool)1;
		goto IL_0067;
	}

IL_0063:
	{
		V_1 = (bool)0;
		goto IL_0067;
	}

IL_0067:
	{
		bool L_14 = V_1;
		return L_14;
	}
}
// System.Boolean UnityEngine.TextEditor::CanPaste()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_CanPaste_mF08821E76B2BA26200EEE6039C73C49A108237C3 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		String_t* L_0;
		L_0 = GUIUtility_get_systemCopyBuffer_m01E2DF71533C31A4C552B9177D7CBA0C6CA3FC2A(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.TextEditor::Backspace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_Backspace_m3D25240A83DA225BEDC8A5363CC83E9A2966169A (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		bool L_0;
		L_0 = TextEditor_get_hasSelection_mD63A0ECF990D21515ABCAD26A7974B58A8CECCE9(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		bool L_2;
		L_2 = TextEditor_DeleteSelection_m520F49C6269E488DD60BBD4603DA869FC446A788(__this, NULL);
		V_1 = (bool)1;
		goto IL_0075;
	}

IL_0017:
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		V_2 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_5;
		L_5 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_6;
		L_6 = TextEditor_PreviousCodePointIndex_mFCCC1034ABF4773A7E1E121D14ACB948FCA116E0(__this, L_5, NULL);
		V_3 = L_6;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_7 = __this->___m_Content_8;
		String_t* L_8;
		L_8 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_9 = V_3;
		int32_t L_10;
		L_10 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_11 = V_3;
		NullCheck(L_8);
		String_t* L_12;
		L_12 = String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68(L_8, L_9, ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), NULL);
		NullCheck(L_7);
		GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F(L_7, L_12, NULL);
		int32_t L_13 = V_3;
		int32_t L_14 = L_13;
		V_4 = L_14;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_14, NULL);
		int32_t L_15 = V_4;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_15, NULL);
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		V_1 = (bool)1;
		goto IL_0075;
	}

IL_0071:
	{
		V_1 = (bool)0;
		goto IL_0075;
	}

IL_0075:
	{
		bool L_16 = V_1;
		return L_16;
	}
}
// System.Void UnityEngine.TextEditor::SelectAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectAll_mDEBAABE01DF37B1EE8EFDE43E8036B5C2813C685 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	{
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, 0, NULL);
		String_t* L_0;
		L_0 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_1, NULL);
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectNone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectNone_m4EEF86ADCEEF1F445A57947AB7D58ECC0A334B86 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_0, NULL);
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::get_hasSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_get_hasSelection_mD63A0ECF990D21515ABCAD26A7974B58A8CECCE9 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.TextEditor::get_SelectedText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextEditor_get_SelectedText_mC3562E09B81AB1CB8E6E86B677E2E76A62B742D6 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_006f;
	}

IL_001b:
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_4;
		L_4 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_6;
		L_6 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_7;
		L_7 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_8;
		L_8 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		int32_t L_9;
		L_9 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		NullCheck(L_6);
		String_t* L_10;
		L_10 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_8, L_9)), NULL);
		V_1 = L_10;
		goto IL_006f;
	}

IL_004e:
	{
		String_t* L_11;
		L_11 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_12;
		L_12 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		int32_t L_13;
		L_13 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_14;
		L_14 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		NullCheck(L_11);
		String_t* L_15;
		L_15 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		V_1 = L_15;
		goto IL_006f;
	}

IL_006f:
	{
		String_t* L_16 = V_1;
		return L_16;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_DeleteSelection_m520F49C6269E488DD60BBD4603DA869FC446A788 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_00e3;
	}

IL_001a:
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_4;
		L_4 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0083;
		}
	}
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_6 = __this->___m_Content_8;
		String_t* L_7;
		L_7 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_8;
		L_8 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		NullCheck(L_7);
		String_t* L_9;
		L_9 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_7, 0, L_8, NULL);
		String_t* L_10;
		L_10 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_11;
		L_11 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		String_t* L_12;
		L_12 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		int32_t L_14;
		L_14 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		NullCheck(L_10);
		String_t* L_15;
		L_15 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_10, L_11, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, L_15, NULL);
		NullCheck(L_6);
		GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F(L_6, L_16, NULL);
		int32_t L_17;
		L_17 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_17, NULL);
		goto IL_00d8;
	}

IL_0083:
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_18 = __this->___m_Content_8;
		String_t* L_19;
		L_19 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_20;
		L_20 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		NullCheck(L_19);
		String_t* L_21;
		L_21 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_19, 0, L_20, NULL);
		String_t* L_22;
		L_22 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_23;
		L_23 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		String_t* L_24;
		L_24 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_24);
		int32_t L_25;
		L_25 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_24, NULL);
		int32_t L_26;
		L_26 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		NullCheck(L_22);
		String_t* L_27;
		L_27 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_22, L_23, ((int32_t)il2cpp_codegen_subtract(L_25, L_26)), NULL);
		String_t* L_28;
		L_28 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_21, L_27, NULL);
		NullCheck(L_18);
		GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F(L_18, L_28, NULL);
		int32_t L_29;
		L_29 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_29, NULL);
	}

IL_00d8:
	{
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		V_1 = (bool)1;
		goto IL_00e3;
	}

IL_00e3:
	{
		bool L_30 = V_1;
		return L_30;
	}
}
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_ReplaceSelection_m7BBCC70F065AED2C5942127F95234C17897A70C1 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, String_t* ___0_replace, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0;
		L_0 = TextEditor_DeleteSelection_m520F49C6269E488DD60BBD4603DA869FC446A788(__this, NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = __this->___m_Content_8;
		String_t* L_2;
		L_2 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		String_t* L_4 = ___0_replace;
		NullCheck(L_2);
		String_t* L_5;
		L_5 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(L_2, L_3, L_4, NULL);
		NullCheck(L_1);
		GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F(L_1, L_5, NULL);
		int32_t L_6;
		L_6 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		String_t* L_7 = ___0_replace;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_6, L_8));
		V_0 = L_9;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_9, NULL);
		int32_t L_10 = V_0;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_10, NULL);
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::Insert(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_Insert_m7FE4F5EF50CDB90FCD47C93D399996A2149B54AD (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, Il2CppChar ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&___0_c), NULL);
		TextEditor_ReplaceSelection_m7BBCC70F065AED2C5942127F95234C17897A70C1(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveSelectionToAltCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveSelectionToAltCursor_m63FEF3517F6B69BEA3D0AE497A0890CB088528CE (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->___m_iAltCursorPos_19;
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0093;
	}

IL_0013:
	{
		int32_t L_2 = __this->___m_iAltCursorPos_19;
		V_0 = L_2;
		String_t* L_3;
		L_3 = TextEditor_get_SelectedText_mC3562E09B81AB1CB8E6E86B677E2E76A62B742D6(__this, NULL);
		V_1 = L_3;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_4 = __this->___m_Content_8;
		String_t* L_5;
		L_5 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_6 = V_0;
		String_t* L_7 = V_1;
		NullCheck(L_5);
		String_t* L_8;
		L_8 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(L_5, L_6, L_7, NULL);
		NullCheck(L_4);
		GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F(L_4, L_8, NULL);
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_12;
		L_12 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		String_t* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, ((int32_t)il2cpp_codegen_add(L_12, L_14)), NULL);
		int32_t L_15;
		L_15 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		String_t* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, ((int32_t)il2cpp_codegen_add(L_15, L_17)), NULL);
	}

IL_0071:
	{
		bool L_18;
		L_18 = TextEditor_DeleteSelection_m520F49C6269E488DD60BBD4603DA869FC446A788(__this, NULL);
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_4 = L_20;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_20, NULL);
		int32_t L_21 = V_4;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_21, NULL);
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
	}

IL_0093:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveRight_m568871F86B97196C66A4ADDF335E0ECEBEE18DC1 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		int32_t L_0;
		L_0 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_4;
		L_4 = TextEditor_NextCodePointIndex_mF426772BB6B0CD7A3FC4042070C21902BF576B31(__this, L_3, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_4, NULL);
		TextEditor_DetectFocusChange_mFE7D29EC9391792772129BD80FC236285218464B(__this, NULL);
		int32_t L_5;
		L_5 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_5, NULL);
		goto IL_0075;
	}

IL_0045:
	{
		int32_t L_6;
		L_6 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		int32_t L_7;
		L_7 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		V_1 = (bool)((((int32_t)L_6) > ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_9;
		L_9 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_9, NULL);
		goto IL_0074;
	}

IL_0067:
	{
		int32_t L_10;
		L_10 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_10, NULL);
	}

IL_0074:
	{
	}

IL_0075:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveLeft_m3784BAF8F1BF69781ECFA40D8DDAFA6EA9EC58C1 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0;
		L_0 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_4;
		L_4 = TextEditor_PreviousCodePointIndex_mFCCC1034ABF4773A7E1E121D14ACB948FCA116E0(__this, L_3, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_4, NULL);
		int32_t L_5;
		L_5 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_5, NULL);
		goto IL_0067;
	}

IL_0037:
	{
		int32_t L_6;
		L_6 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		int32_t L_7;
		L_7 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		V_1 = (bool)((((int32_t)L_6) > ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_9;
		L_9 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_9, NULL);
		goto IL_0066;
	}

IL_0059:
	{
		int32_t L_10;
		L_10 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_10, NULL);
	}

IL_0066:
	{
	}

IL_0067:
	{
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveUp_mFCC668A7D89E092E588F92DA2FA2B4D03E7C921F (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0;
		L_0 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_3, NULL);
		goto IL_002f;
	}

IL_0022:
	{
		int32_t L_4;
		L_4 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_4, NULL);
	}

IL_002f:
	{
		TextEditor_GrabGraphicalCursorPos_m74915B49D9B0D200367FD710A1321C0D2E54B1E4(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___graphicalCursorPos_13);
		float* L_6 = (float*)(&L_5->___y_1);
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		*((float*)L_7) = (float)((float)il2cpp_codegen_subtract(L_8, (1.0f)));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_9 = __this->___style_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		L_10 = VirtualFuncInvoker0< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_11 = __this->___m_Content_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = __this->___graphicalCursorPos_13;
		NullCheck(L_9);
		int32_t L_13;
		L_13 = GUIStyle_GetCursorStringIndex_m9EFA2EC2CF6ACB5B4EAF3E9C4BC356980CBB4515(L_9, L_10, L_11, L_12, NULL);
		int32_t L_14 = L_13;
		V_1 = L_14;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_14, NULL);
		int32_t L_15 = V_1;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_15, NULL);
		int32_t L_16;
		L_16 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_16) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_008f;
		}
	}
	{
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
	}

IL_008f:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveDown_m6084C0F493B71485D0D0796D77B4F32F391C7571 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0;
		L_0 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_3, NULL);
		goto IL_002f;
	}

IL_0022:
	{
		int32_t L_4;
		L_4 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_4, NULL);
	}

IL_002f:
	{
		TextEditor_GrabGraphicalCursorPos_m74915B49D9B0D200367FD710A1321C0D2E54B1E4(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___graphicalCursorPos_13);
		float* L_6 = (float*)(&L_5->___y_1);
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_9 = __this->___style_2;
		NullCheck(L_9);
		float L_10;
		L_10 = GUIStyle_get_lineHeight_mC814199D1ABA3CE38358BA70347562B0CDFEB96E(L_9, NULL);
		*((float*)L_7) = (float)((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_add(L_10, (5.0f)))));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_11 = __this->___style_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		L_12 = VirtualFuncInvoker0< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_13 = __this->___m_Content_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = __this->___graphicalCursorPos_13;
		NullCheck(L_11);
		int32_t L_15;
		L_15 = GUIStyle_GetCursorStringIndex_m9EFA2EC2CF6ACB5B4EAF3E9C4BC356980CBB4515(L_11, L_12, L_13, L_14, NULL);
		int32_t L_16 = L_15;
		V_1 = L_16;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_16, NULL);
		int32_t L_17 = V_1;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_17, NULL);
		int32_t L_18;
		L_18 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		String_t* L_19;
		L_19 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_19);
		int32_t L_20;
		L_20 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_19, NULL);
		V_2 = (bool)((((int32_t)L_18) == ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_2;
		if (!L_21)
		{
			goto IL_00a2;
		}
	}
	{
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
	}

IL_00a2:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveLineStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveLineStart_mCFB0865ABB2E2B6A6FC98F77FE6E69A8E2578ED0 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2;
		L_2 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		G_B3_0 = L_2;
		goto IL_001d;
	}

IL_0017:
	{
		int32_t L_3;
		L_3 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		G_B3_0 = L_3;
	}

IL_001d:
	{
		V_0 = G_B3_0;
		int32_t L_4 = V_0;
		V_1 = L_4;
		goto IL_004d;
	}

IL_0022:
	{
		String_t* L_5;
		L_5 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		V_3 = L_10;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_10, NULL);
		int32_t L_11 = V_3;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_11, NULL);
		goto IL_006d;
	}

IL_004d:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		V_4 = (bool)((!(((uint32_t)L_13) <= ((uint32_t)0)))? 1 : 0);
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_15 = 0;
		V_3 = L_15;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_15, NULL);
		int32_t L_16 = V_3;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_16, NULL);
	}

IL_006d:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveLineEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveLineEnd_m811BAE3ABB333A4CE56C6C80439111CC1FE4450F (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2;
		L_2 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		G_B3_0 = L_2;
		goto IL_001d;
	}

IL_0017:
	{
		int32_t L_3;
		L_3 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		G_B3_0 = L_3;
	}

IL_001d:
	{
		V_0 = G_B3_0;
		int32_t L_4 = V_0;
		V_1 = L_4;
		String_t* L_5;
		L_5 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = L_6;
		goto IL_005f;
	}

IL_002e:
	{
		String_t* L_7;
		L_7 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, L_8, NULL);
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		V_4 = L_12;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_12, NULL);
		int32_t L_13 = V_4;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_13, NULL);
		goto IL_007d;
	}

IL_005a:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_005f:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = V_2;
		V_5 = (bool)((((int32_t)L_15) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_5;
		if (L_17)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_18 = V_2;
		int32_t L_19 = L_18;
		V_4 = L_19;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_19, NULL);
		int32_t L_20 = V_4;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_20, NULL);
	}

IL_007d:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveGraphicalLineStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveGraphicalLineStart_m0332C42BCF18CC2AE7024402CDFFD1F24210B3DD (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B2_0 = NULL;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B2_1 = NULL;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B2_2 = NULL;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B1_0 = NULL;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B1_1 = NULL;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B3_1 = NULL;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B3_2 = NULL;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B3_3 = NULL;
	{
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		G_B1_0 = __this;
		G_B1_1 = __this;
		G_B1_2 = __this;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			G_B2_0 = __this;
			G_B2_1 = __this;
			G_B2_2 = __this;
			goto IL_001a;
		}
	}
	{
		int32_t L_2;
		L_2 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0020;
	}

IL_001a:
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0020:
	{
		NullCheck(G_B3_1);
		int32_t L_4;
		L_4 = TextEditor_GetGraphicalLineStart_m4503A00148DE73D825654C4DCBFD27E8234A957B(G_B3_1, G_B3_0, NULL);
		int32_t L_5 = L_4;
		V_0 = L_5;
		NullCheck(G_B3_2);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(G_B3_2, L_5, NULL);
		int32_t L_6 = V_0;
		NullCheck(G_B3_3);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(G_B3_3, L_6, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveGraphicalLineEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveGraphicalLineEnd_m82D882096A9E72C9469F01F5E8882DBEA8DC2C0E (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B2_0 = NULL;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B2_1 = NULL;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B2_2 = NULL;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B1_0 = NULL;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B1_1 = NULL;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B3_1 = NULL;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B3_2 = NULL;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B3_3 = NULL;
	{
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		G_B1_0 = __this;
		G_B1_1 = __this;
		G_B1_2 = __this;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			G_B2_0 = __this;
			G_B2_1 = __this;
			G_B2_2 = __this;
			goto IL_001a;
		}
	}
	{
		int32_t L_2;
		L_2 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0020;
	}

IL_001a:
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0020:
	{
		NullCheck(G_B3_1);
		int32_t L_4;
		L_4 = TextEditor_GetGraphicalLineEnd_m3396AC4E6D75FB0F8E8F99C91384064A32F0DF3F(G_B3_1, G_B3_0, NULL);
		int32_t L_5 = L_4;
		V_0 = L_5;
		NullCheck(G_B3_2);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(G_B3_2, L_5, NULL);
		int32_t L_6 = V_0;
		NullCheck(G_B3_3);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(G_B3_3, L_6, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveTextStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveTextStart_m59D0D8EADF0420DED887A9E6D9E780CBE1A87E16 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = 0;
		V_0 = L_0;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_0, NULL);
		int32_t L_1 = V_0;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveTextEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveTextEnd_m26A12A1C36B56C8D80B1E5C520EA38E670611028 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0;
		L_0 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		int32_t L_2 = L_1;
		V_0 = L_2;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_2, NULL);
		int32_t L_3 = V_0;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_3, NULL);
		return;
	}
}
// System.Int32 UnityEngine.TextEditor::IndexOfEndOfLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_IndexOfEndOfLine_mE03CC016EBA2B7AFD72A204D23D64C9F686C057B (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_startIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0;
		L_0 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_1 = ___0_startIndex;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4(L_0, ((int32_t)10), L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_4;
		L_4 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		G_B3_0 = L_5;
		goto IL_0022;
	}

IL_0021:
	{
		int32_t L_6 = V_0;
		G_B3_0 = L_6;
	}

IL_0022:
	{
		V_1 = G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.Void UnityEngine.TextEditor::MoveParagraphForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveParagraphForward_m5CD556511F7189813865732FDC28FB710ADA8572 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B2_0 = NULL;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B3_1 = NULL;
	{
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		int32_t L_2;
		L_2 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_0018:
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		NullCheck(G_B3_1);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(G_B3_1, G_B3_0, NULL);
		int32_t L_4;
		L_4 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		String_t* L_5;
		L_5 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_0 = (bool)((((int32_t)L_4) < ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_8;
		L_8 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_9;
		L_9 = TextEditor_IndexOfEndOfLine_mE03CC016EBA2B7AFD72A204D23D64C9F686C057B(__this, ((int32_t)il2cpp_codegen_add(L_8, 1)), NULL);
		int32_t L_10 = L_9;
		V_1 = L_10;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_10, NULL);
		int32_t L_11 = V_1;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_11, NULL);
	}

IL_005c:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveParagraphBackward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveParagraphBackward_mC64495DC5B520C2D279A03616D0ADDCE0718A510 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B2_0 = NULL;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B3_1 = NULL;
	{
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		int32_t L_2;
		L_2 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_0018:
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		NullCheck(G_B3_1);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(G_B3_1, G_B3_0, NULL);
		int32_t L_4;
		L_4 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		V_0 = (bool)((((int32_t)L_4) > ((int32_t)1))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_6;
		L_6 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_7;
		L_7 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		NullCheck(L_6);
		int32_t L_8;
		L_8 = String_LastIndexOf_m3EB3F4ECDF6D990ADBACB6B168A8CBD4772B91A7(L_6, ((int32_t)10), ((int32_t)il2cpp_codegen_subtract(L_7, 2)), NULL);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		V_1 = L_9;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_9, NULL);
		int32_t L_10 = V_1;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_10, NULL);
		goto IL_006f;
	}

IL_005d:
	{
		int32_t L_11 = 0;
		V_1 = L_11;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_11, NULL);
		int32_t L_12 = V_1;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_12, NULL);
	}

IL_006f:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveCursorToPosition_Internal(UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveCursorToPosition_Internal_m7D1E68A7556DCCB8B6D557BF2E3B2894905B6037 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_cursorPosition, bool ___1_shift, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___style_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = VirtualFuncInvoker0< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_2 = __this->___m_Content_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_cursorPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___scrollOffset_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_3, L_4, NULL);
		NullCheck(L_0);
		int32_t L_6;
		L_6 = GUIStyle_GetCursorStringIndex_m9EFA2EC2CF6ACB5B4EAF3E9C4BC356980CBB4515(L_0, L_1, L_2, L_5, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_6, NULL);
		bool L_7 = ___1_shift;
		V_0 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_9;
		L_9 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_9, NULL);
	}

IL_0042:
	{
		TextEditor_DetectFocusChange_mFE7D29EC9391792772129BD80FC236285218464B(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveAltCursorToPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveAltCursorToPosition_m8A6ABA601E30D89B6C818A6FDC11C3A4B244AC38 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_cursorPosition, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___style_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = VirtualFuncInvoker0< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_2 = __this->___m_Content_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_cursorPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___scrollOffset_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_3, L_4, NULL);
		NullCheck(L_0);
		int32_t L_6;
		L_6 = GUIStyle_GetCursorStringIndex_m9EFA2EC2CF6ACB5B4EAF3E9C4BC356980CBB4515(L_0, L_1, L_2, L_5, NULL);
		V_0 = L_6;
		String_t* L_7;
		L_7 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_8, L_9, NULL);
		__this->___m_iAltCursorPos_19 = L_10;
		TextEditor_DetectFocusChange_mFE7D29EC9391792772129BD80FC236285218464B(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectToPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectToPosition_m406CAD9A7C9B9211A10DFB1FF6FB6E0CF4437ECA (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_cursorPosition, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		bool L_0 = __this->___m_MouseDragSelectsWholeWords_15;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = __this->___style_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = VirtualFuncInvoker0< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_4 = __this->___m_Content_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___0_cursorPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___scrollOffset_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_5, L_6, NULL);
		NullCheck(L_2);
		int32_t L_8;
		L_8 = GUIStyle_GetCursorStringIndex_m9EFA2EC2CF6ACB5B4EAF3E9C4BC356980CBB4515(L_2, L_3, L_4, L_7, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_8, NULL);
		goto IL_01b8;
	}

IL_003d:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_9 = __this->___style_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		L_10 = VirtualFuncInvoker0< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_11 = __this->___m_Content_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___0_cursorPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = __this->___scrollOffset_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_12, L_13, NULL);
		NullCheck(L_9);
		int32_t L_15;
		L_15 = GUIStyle_GetCursorStringIndex_m9EFA2EC2CF6ACB5B4EAF3E9C4BC356980CBB4515(L_9, L_10, L_11, L_14, NULL);
		V_1 = L_15;
		TextEditor_EnsureValidCodePointIndex_m9C20E36F766CF8DBD87A36606B1FAEED3BE42BB1(__this, (&V_1), NULL);
		int32_t* L_16 = (int32_t*)(&__this->___m_DblClickInitPos_16);
		TextEditor_EnsureValidCodePointIndex_m9C20E36F766CF8DBD87A36606B1FAEED3BE42BB1(__this, L_16, NULL);
		uint8_t L_17 = __this->___m_DblClickSnap_17;
		V_2 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_19 = V_1;
		int32_t L_20 = __this->___m_DblClickInitPos_16;
		V_3 = (bool)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_22 = V_1;
		int32_t L_23;
		L_23 = TextEditor_FindEndOfClassification_m9F20C27BA429FCCDDB9821EB9CE1E55535D44857(__this, L_22, 1, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_23, NULL);
		int32_t L_24 = __this->___m_DblClickInitPos_16;
		int32_t L_25;
		L_25 = TextEditor_FindEndOfClassification_m9F20C27BA429FCCDDB9821EB9CE1E55535D44857(__this, L_24, 0, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_25, NULL);
		goto IL_00df;
	}

IL_00ba:
	{
		int32_t L_26 = V_1;
		int32_t L_27;
		L_27 = TextEditor_FindEndOfClassification_m9F20C27BA429FCCDDB9821EB9CE1E55535D44857(__this, L_26, 0, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_27, NULL);
		int32_t L_28 = __this->___m_DblClickInitPos_16;
		int32_t L_29;
		L_29 = TextEditor_FindEndOfClassification_m9F20C27BA429FCCDDB9821EB9CE1E55535D44857(__this, L_28, 1, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_29, NULL);
	}

IL_00df:
	{
		goto IL_01b7;
	}

IL_00e5:
	{
		int32_t L_30 = V_1;
		int32_t L_31 = __this->___m_DblClickInitPos_16;
		V_4 = (bool)((((int32_t)L_30) < ((int32_t)L_31))? 1 : 0);
		bool L_32 = V_4;
		if (!L_32)
		{
			goto IL_0158;
		}
	}
	{
		int32_t L_33 = V_1;
		V_5 = (bool)((((int32_t)L_33) > ((int32_t)0))? 1 : 0);
		bool L_34 = V_5;
		if (!L_34)
		{
			goto IL_0121;
		}
	}
	{
		String_t* L_35;
		L_35 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_36 = V_1;
		int32_t L_37;
		L_37 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(0, ((int32_t)il2cpp_codegen_subtract(L_36, 2)), NULL);
		NullCheck(L_35);
		int32_t L_38;
		L_38 = String_LastIndexOf_m3EB3F4ECDF6D990ADBACB6B168A8CBD4772B91A7(L_35, ((int32_t)10), L_37, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, ((int32_t)il2cpp_codegen_add(L_38, 1)), NULL);
		goto IL_0129;
	}

IL_0121:
	{
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, 0, NULL);
	}

IL_0129:
	{
		String_t* L_39;
		L_39 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		String_t* L_40;
		L_40 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_40);
		int32_t L_41;
		L_41 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_40, NULL);
		int32_t L_42 = __this->___m_DblClickInitPos_16;
		int32_t L_43;
		L_43 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(((int32_t)il2cpp_codegen_subtract(L_41, 1)), L_42, NULL);
		NullCheck(L_39);
		int32_t L_44;
		L_44 = String_LastIndexOf_m3EB3F4ECDF6D990ADBACB6B168A8CBD4772B91A7(L_39, ((int32_t)10), L_43, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_44, NULL);
		goto IL_01b6;
	}

IL_0158:
	{
		int32_t L_45 = V_1;
		String_t* L_46;
		L_46 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		V_6 = (bool)((((int32_t)L_45) < ((int32_t)L_47))? 1 : 0);
		bool L_48 = V_6;
		if (!L_48)
		{
			goto IL_017f;
		}
	}
	{
		int32_t L_49 = V_1;
		int32_t L_50;
		L_50 = TextEditor_IndexOfEndOfLine_mE03CC016EBA2B7AFD72A204D23D64C9F686C057B(__this, L_49, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_50, NULL);
		goto IL_0191;
	}

IL_017f:
	{
		String_t* L_51;
		L_51 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_51);
		int32_t L_52;
		L_52 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_51, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_52, NULL);
	}

IL_0191:
	{
		String_t* L_53;
		L_53 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_54 = __this->___m_DblClickInitPos_16;
		int32_t L_55;
		L_55 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(0, ((int32_t)il2cpp_codegen_subtract(L_54, 2)), NULL);
		NullCheck(L_53);
		int32_t L_56;
		L_56 = String_LastIndexOf_m3EB3F4ECDF6D990ADBACB6B168A8CBD4772B91A7(L_53, ((int32_t)10), L_55, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, ((int32_t)il2cpp_codegen_add(L_56, 1)), NULL);
	}

IL_01b6:
	{
	}

IL_01b7:
	{
	}

IL_01b8:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectLeft_m7473E14B27D0D9503E88FE893B41CD52EA15A39B (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		bool L_0 = __this->___m_bJustSelected_18;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_2;
		L_2 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_3;
		L_3 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		V_1 = (bool)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_5;
		L_5 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		V_2 = L_5;
		int32_t L_6;
		L_6 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_6, NULL);
		int32_t L_7 = V_2;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_7, NULL);
	}

IL_003b:
	{
		__this->___m_bJustSelected_18 = (bool)0;
		int32_t L_8;
		L_8 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_9;
		L_9 = TextEditor_PreviousCodePointIndex_mFCCC1034ABF4773A7E1E121D14ACB948FCA116E0(__this, L_8, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_9, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectRight_mC374DDA6EF8A522FF0CF35393EE38C07154FC062 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		bool L_0 = __this->___m_bJustSelected_18;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_2;
		L_2 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_3;
		L_3 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_5;
		L_5 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		V_2 = L_5;
		int32_t L_6;
		L_6 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_6, NULL);
		int32_t L_7 = V_2;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_7, NULL);
	}

IL_003b:
	{
		__this->___m_bJustSelected_18 = (bool)0;
		int32_t L_8;
		L_8 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_9;
		L_9 = TextEditor_NextCodePointIndex_mF426772BB6B0CD7A3FC4042070C21902BF576B31(__this, L_8, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_9, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectUp_mA28D8B3CB2012DE645CC3A027E1168AF2E9BCB3B (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	{
		TextEditor_GrabGraphicalCursorPos_m74915B49D9B0D200367FD710A1321C0D2E54B1E4(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___graphicalCursorPos_13);
		float* L_1 = (float*)(&L_0->___y_1);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		*((float*)L_2) = (float)((float)il2cpp_codegen_subtract(L_3, (1.0f)));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4 = __this->___style_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = VirtualFuncInvoker0< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_6 = __this->___m_Content_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___graphicalCursorPos_13;
		NullCheck(L_4);
		int32_t L_8;
		L_8 = GUIStyle_GetCursorStringIndex_m9EFA2EC2CF6ACB5B4EAF3E9C4BC356980CBB4515(L_4, L_5, L_6, L_7, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_8, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectDown_mC77A384914BA7F3CEC02C20D31CC28A3788B1C15 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	{
		TextEditor_GrabGraphicalCursorPos_m74915B49D9B0D200367FD710A1321C0D2E54B1E4(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___graphicalCursorPos_13);
		float* L_1 = (float*)(&L_0->___y_1);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4 = __this->___style_2;
		NullCheck(L_4);
		float L_5;
		L_5 = GUIStyle_get_lineHeight_mC814199D1ABA3CE38358BA70347562B0CDFEB96E(L_4, NULL);
		*((float*)L_2) = (float)((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_add(L_5, (5.0f)))));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_6 = __this->___style_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		L_7 = VirtualFuncInvoker0< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_8 = __this->___m_Content_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = __this->___graphicalCursorPos_13;
		NullCheck(L_6);
		int32_t L_10;
		L_10 = GUIStyle_GetCursorStringIndex_m9EFA2EC2CF6ACB5B4EAF3E9C4BC356980CBB4515(L_6, L_7, L_8, L_9, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_10, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectTextEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectTextEnd_mDCF0E587F42EB91D85850AC5F840E089955D69F4 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectTextStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectTextStart_m5FAFFEF24723CA29E6DA6631EE80EBF4ADE591C6 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	{
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, 0, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MouseDragSelectsWholeWords(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MouseDragSelectsWholeWords_mAE66B48954FFFC0F439C4070ED3601CF611A8F3B (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, bool ___0_on, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_on;
		__this->___m_MouseDragSelectsWholeWords_15 = L_0;
		int32_t L_1;
		L_1 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		__this->___m_DblClickInitPos_16 = L_1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::DblClickSnap(UnityEngine.TextEditor/DblClickSnapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_DblClickSnap_m6CF85AA1A22F59BFF0301F54815128CF5EBFD252 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, uint8_t ___0_snapping, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_snapping;
		__this->___m_DblClickSnap_17 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_GetGraphicalLineStart_m4503A00148DE73D825654C4DCBFD27E8234A957B (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_p, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___style_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = VirtualFuncInvoker0< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_2 = __this->___m_Content_8;
		int32_t L_3 = ___0_p;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = GUIStyle_GetCursorPixelPosition_m4FFBD3DC05CE503355DF01E57023AC349032CB2F(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		float* L_5 = (float*)(&(&V_0)->___y_1);
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		float L_8;
		L_8 = GUIUtility_get_pixelsPerPoint_m13E69FE793E736FA60A61C6756F2FF57BA6C9F31(NULL);
		*((float*)L_6) = (float)((float)il2cpp_codegen_add(L_7, ((float)((1.0f)/L_8))));
		(&V_0)->___x_0 = (0.0f);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_9 = __this->___style_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		L_10 = VirtualFuncInvoker0< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_11 = __this->___m_Content_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		NullCheck(L_9);
		int32_t L_13;
		L_13 = GUIStyle_GetCursorStringIndex_m9EFA2EC2CF6ACB5B4EAF3E9C4BC356980CBB4515(L_9, L_10, L_11, L_12, NULL);
		V_1 = L_13;
		goto IL_0057;
	}

IL_0057:
	{
		int32_t L_14 = V_1;
		return L_14;
	}
}
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_GetGraphicalLineEnd_m3396AC4E6D75FB0F8E8F99C91384064A32F0DF3F (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_p, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___style_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = VirtualFuncInvoker0< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_2 = __this->___m_Content_8;
		int32_t L_3 = ___0_p;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = GUIStyle_GetCursorPixelPosition_m4FFBD3DC05CE503355DF01E57023AC349032CB2F(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		float* L_5 = (float*)(&(&V_0)->___y_1);
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		float L_8;
		L_8 = GUIUtility_get_pixelsPerPoint_m13E69FE793E736FA60A61C6756F2FF57BA6C9F31(NULL);
		*((float*)L_6) = (float)((float)il2cpp_codegen_add(L_7, ((float)((1.0f)/L_8))));
		float* L_9 = (float*)(&(&V_0)->___x_0);
		float* L_10 = L_9;
		float L_11 = *((float*)L_10);
		*((float*)L_10) = (float)((float)il2cpp_codegen_add(L_11, (5000.0f)));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_12 = __this->___style_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13;
		L_13 = VirtualFuncInvoker0< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_14 = __this->___m_Content_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		NullCheck(L_12);
		int32_t L_16;
		L_16 = GUIStyle_GetCursorStringIndex_m9EFA2EC2CF6ACB5B4EAF3E9C4BC356980CBB4515(L_12, L_13, L_14, L_15, NULL);
		V_1 = L_16;
		goto IL_005b;
	}

IL_005b:
	{
		int32_t L_17 = V_1;
		return L_17;
	}
}
// System.Int32 UnityEngine.TextEditor::FindNextSeperator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_FindNextSeperator_mE89483949A16CD41C7A7BDE7ACA89DBAF5039384 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_startPos, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	{
		String_t* L_0;
		L_0 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_0018;
	}

IL_000f:
	{
		int32_t L_2 = ___0_startPos;
		int32_t L_3;
		L_3 = TextEditor_NextCodePointIndex_mF426772BB6B0CD7A3FC4042070C21902BF576B31(__this, L_2, NULL);
		___0_startPos = L_3;
	}

IL_0018:
	{
		int32_t L_4 = ___0_startPos;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = ___0_startPos;
		int32_t L_7;
		L_7 = TextEditor_ClassifyChar_mC2104A64D197D5BE8FA3CB1CA12F0E6AFF50AC77(__this, L_6, NULL);
		G_B5_0 = ((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B5_0;
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0038;
	}

IL_002f:
	{
		int32_t L_9 = ___0_startPos;
		int32_t L_10;
		L_10 = TextEditor_NextCodePointIndex_mF426772BB6B0CD7A3FC4042070C21902BF576B31(__this, L_9, NULL);
		___0_startPos = L_10;
	}

IL_0038:
	{
		int32_t L_11 = ___0_startPos;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_13 = ___0_startPos;
		int32_t L_14;
		L_14 = TextEditor_ClassifyChar_mC2104A64D197D5BE8FA3CB1CA12F0E6AFF50AC77(__this, L_13, NULL);
		G_B11_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_0049;
	}

IL_0048:
	{
		G_B11_0 = 0;
	}

IL_0049:
	{
		V_2 = (bool)G_B11_0;
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_16 = ___0_startPos;
		V_3 = L_16;
		goto IL_0051;
	}

IL_0051:
	{
		int32_t L_17 = V_3;
		return L_17;
	}
}
// System.Int32 UnityEngine.TextEditor::FindPrevSeperator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_FindPrevSeperator_m8619997F12F419286B495A9BA5078634373542CB (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_startPos, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B13_0 = 0;
	{
		int32_t L_0 = ___0_startPos;
		int32_t L_1;
		L_1 = TextEditor_PreviousCodePointIndex_mFCCC1034ABF4773A7E1E121D14ACB948FCA116E0(__this, L_0, NULL);
		___0_startPos = L_1;
		goto IL_0015;
	}

IL_000c:
	{
		int32_t L_2 = ___0_startPos;
		int32_t L_3;
		L_3 = TextEditor_PreviousCodePointIndex_mFCCC1034ABF4773A7E1E121D14ACB948FCA116E0(__this, L_2, NULL);
		___0_startPos = L_3;
	}

IL_0015:
	{
		int32_t L_4 = ___0_startPos;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = ___0_startPos;
		int32_t L_6;
		L_6 = TextEditor_ClassifyChar_mC2104A64D197D5BE8FA3CB1CA12F0E6AFF50AC77(__this, L_5, NULL);
		G_B5_0 = ((!(((uint32_t)L_6) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B5_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B5_0;
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_8 = ___0_startPos;
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		V_2 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		goto IL_0041;
	}

IL_0038:
	{
		int32_t L_10 = ___0_startPos;
		int32_t L_11;
		L_11 = TextEditor_PreviousCodePointIndex_mFCCC1034ABF4773A7E1E121D14ACB948FCA116E0(__this, L_10, NULL);
		___0_startPos = L_11;
	}

IL_0041:
	{
		int32_t L_12 = ___0_startPos;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_13 = ___0_startPos;
		int32_t L_14;
		L_14 = TextEditor_ClassifyChar_mC2104A64D197D5BE8FA3CB1CA12F0E6AFF50AC77(__this, L_13, NULL);
		G_B13_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_0052;
	}

IL_0051:
	{
		G_B13_0 = 0;
	}

IL_0052:
	{
		V_3 = (bool)G_B13_0;
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_16 = ___0_startPos;
		int32_t L_17;
		L_17 = TextEditor_ClassifyChar_mC2104A64D197D5BE8FA3CB1CA12F0E6AFF50AC77(__this, L_16, NULL);
		V_4 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_19 = ___0_startPos;
		V_2 = L_19;
		goto IL_0074;
	}

IL_006a:
	{
		int32_t L_20 = ___0_startPos;
		int32_t L_21;
		L_21 = TextEditor_NextCodePointIndex_mF426772BB6B0CD7A3FC4042070C21902BF576B31(__this, L_20, NULL);
		V_2 = L_21;
		goto IL_0074;
	}

IL_0074:
	{
		int32_t L_22 = V_2;
		return L_22;
	}
}
// System.Void UnityEngine.TextEditor::MoveWordRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveWordRight_mB79E9C0C420ED29EB70CFAB49CBFE6C290ECD074 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B2_0 = NULL;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B3_1 = NULL;
	{
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		int32_t L_2;
		L_2 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_0018:
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		NullCheck(G_B3_1);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(G_B3_1, G_B3_0, NULL);
		int32_t L_4;
		L_4 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_5;
		L_5 = TextEditor_FindNextSeperator_mE89483949A16CD41C7A7BDE7ACA89DBAF5039384(__this, L_4, NULL);
		int32_t L_6 = L_5;
		V_0 = L_6;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_6, NULL);
		int32_t L_7 = V_0;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_7, NULL);
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveToStartOfNextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveToStartOfNextWord_m8E6EA22B00CD272176D69786A716B5D125A026E2 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		TextEditor_MoveRight_m568871F86B97196C66A4ADDF335E0ECEBEE18DC1(__this, NULL);
		goto IL_0044;
	}

IL_0027:
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_4;
		L_4 = TextEditor_FindStartOfNextWord_m07650DF8A35625ED2B3230B6B4C96C730F945B0A(__this, L_3, NULL);
		int32_t L_5 = L_4;
		V_1 = L_5;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_5, NULL);
		int32_t L_6 = V_1;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_6, NULL);
	}

IL_0044:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveToEndOfPreviousWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveToEndOfPreviousWord_m2CE9EBD0A0FB0CCBC93912FA856B7628C4B3C3FF (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		TextEditor_MoveLeft_m3784BAF8F1BF69781ECFA40D8DDAFA6EA9EC58C1(__this, NULL);
		goto IL_0044;
	}

IL_0027:
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_4;
		L_4 = TextEditor_FindEndOfPreviousWord_mFBDBEABAC6CFE72EF4ED33A3474EF3998E460C00(__this, L_3, NULL);
		int32_t L_5 = L_4;
		V_1 = L_5;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_5, NULL);
		int32_t L_6 = V_1;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_6, NULL);
	}

IL_0044:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectToStartOfNextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectToStartOfNextWord_mCC2D52A1AA807D2EDB985CE1FAB18B884A1E549A (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	{
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_FindStartOfNextWord_m07650DF8A35625ED2B3230B6B4C96C730F945B0A(__this, L_0, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectToEndOfPreviousWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectToEndOfPreviousWord_m5C182936491E07770967753F142C2CCC6BAABB5A (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	{
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_FindEndOfPreviousWord_mFBDBEABAC6CFE72EF4ED33A3474EF3998E460C00(__this, L_0, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_1, NULL);
		return;
	}
}
// UnityEngine.TextEditor/CharacterType UnityEngine.TextEditor::ClassifyChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_ClassifyChar_mC2104A64D197D5BE8FA3CB1CA12F0E6AFF50AC77 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		String_t* L_0;
		L_0 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_1 = ___0_index;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Char_IsWhiteSpace_m8A6D2951619293FCA4E8F7D3A7190B533A7EDD78(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = 3;
		goto IL_0042;
	}

IL_0015:
	{
		String_t* L_4;
		L_4 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_5 = ___0_index;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Char_IsLetterOrDigit_m29DAB6849D892142452C4B53F9A995CEC17E88A8(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_7;
		L_7 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_8 = ___0_index;
		NullCheck(L_7);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, L_8, NULL);
		G_B5_0 = ((((int32_t)L_9) == ((int32_t)((int32_t)39)))? 1 : 0);
		goto IL_0036;
	}

IL_0035:
	{
		G_B5_0 = 1;
	}

IL_0036:
	{
		V_2 = (bool)G_B5_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_003e;
		}
	}
	{
		V_1 = 0;
		goto IL_0042;
	}

IL_003e:
	{
		V_1 = 1;
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.Int32 UnityEngine.TextEditor::FindStartOfNextWord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_FindStartOfNextWord_m07650DF8A35625ED2B3230B6B4C96C730F945B0A (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_p, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B29_0 = 0;
	{
		String_t* L_0;
		L_0 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___0_p;
		int32_t L_3 = V_0;
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_5 = ___0_p;
		V_3 = L_5;
		goto IL_0111;
	}

IL_001c:
	{
		int32_t L_6 = ___0_p;
		int32_t L_7;
		L_7 = TextEditor_ClassifyChar_mC2104A64D197D5BE8FA3CB1CA12F0E6AFF50AC77(__this, L_6, NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		V_4 = (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_10 = ___0_p;
		int32_t L_11;
		L_11 = TextEditor_NextCodePointIndex_mF426772BB6B0CD7A3FC4042070C21902BF576B31(__this, L_10, NULL);
		___0_p = L_11;
		goto IL_0046;
	}

IL_003d:
	{
		int32_t L_12 = ___0_p;
		int32_t L_13;
		L_13 = TextEditor_NextCodePointIndex_mF426772BB6B0CD7A3FC4042070C21902BF576B31(__this, L_12, NULL);
		___0_p = L_13;
	}

IL_0046:
	{
		int32_t L_14 = ___0_p;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_16 = ___0_p;
		int32_t L_17;
		L_17 = TextEditor_ClassifyChar_mC2104A64D197D5BE8FA3CB1CA12F0E6AFF50AC77(__this, L_16, NULL);
		int32_t L_18 = V_1;
		G_B8_0 = ((((int32_t)L_17) == ((int32_t)L_18))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B8_0 = 0;
	}

IL_0057:
	{
		V_5 = (bool)G_B8_0;
		bool L_19 = V_5;
		if (L_19)
		{
			goto IL_003d;
		}
	}
	{
		goto IL_0095;
	}

IL_0060:
	{
		String_t* L_20;
		L_20 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_21 = ___0_p;
		NullCheck(L_20);
		Il2CppChar L_22;
		L_22 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_20, L_21, NULL);
		if ((((int32_t)L_22) == ((int32_t)((int32_t)9))))
		{
			goto IL_0083;
		}
	}
	{
		String_t* L_23;
		L_23 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_24 = ___0_p;
		NullCheck(L_23);
		Il2CppChar L_25;
		L_25 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_23, L_24, NULL);
		G_B13_0 = ((((int32_t)L_25) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_0084;
	}

IL_0083:
	{
		G_B13_0 = 1;
	}

IL_0084:
	{
		V_6 = (bool)G_B13_0;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_27 = ___0_p;
		int32_t L_28;
		L_28 = TextEditor_NextCodePointIndex_mF426772BB6B0CD7A3FC4042070C21902BF576B31(__this, L_27, NULL);
		V_3 = L_28;
		goto IL_0111;
	}

IL_0094:
	{
	}

IL_0095:
	{
		int32_t L_29 = ___0_p;
		int32_t L_30 = V_0;
		V_7 = (bool)((((int32_t)L_29) == ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_7;
		if (!L_31)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_32 = ___0_p;
		V_3 = L_32;
		goto IL_0111;
	}

IL_00a3:
	{
		String_t* L_33;
		L_33 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_34 = ___0_p;
		NullCheck(L_33);
		Il2CppChar L_35;
		L_35 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_33, L_34, NULL);
		V_8 = (bool)((((int32_t)L_35) == ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_36 = V_8;
		if (!L_36)
		{
			goto IL_00df;
		}
	}
	{
		goto IL_00c5;
	}

IL_00bc:
	{
		int32_t L_37 = ___0_p;
		int32_t L_38;
		L_38 = TextEditor_NextCodePointIndex_mF426772BB6B0CD7A3FC4042070C21902BF576B31(__this, L_37, NULL);
		___0_p = L_38;
	}

IL_00c5:
	{
		int32_t L_39 = ___0_p;
		int32_t L_40 = V_0;
		if ((((int32_t)L_39) >= ((int32_t)L_40)))
		{
			goto IL_00d5;
		}
	}
	{
		int32_t L_41 = ___0_p;
		int32_t L_42;
		L_42 = TextEditor_ClassifyChar_mC2104A64D197D5BE8FA3CB1CA12F0E6AFF50AC77(__this, L_41, NULL);
		G_B24_0 = ((((int32_t)L_42) == ((int32_t)3))? 1 : 0);
		goto IL_00d6;
	}

IL_00d5:
	{
		G_B24_0 = 0;
	}

IL_00d6:
	{
		V_9 = (bool)G_B24_0;
		bool L_43 = V_9;
		if (L_43)
		{
			goto IL_00bc;
		}
	}
	{
		goto IL_010d;
	}

IL_00df:
	{
		String_t* L_44;
		L_44 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_45 = ___0_p;
		NullCheck(L_44);
		Il2CppChar L_46;
		L_46 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_44, L_45, NULL);
		if ((((int32_t)L_46) == ((int32_t)((int32_t)9))))
		{
			goto IL_0101;
		}
	}
	{
		String_t* L_47;
		L_47 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_48 = ___0_p;
		NullCheck(L_47);
		Il2CppChar L_49;
		L_49 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_47, L_48, NULL);
		G_B29_0 = ((((int32_t)L_49) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_0102;
	}

IL_0101:
	{
		G_B29_0 = 1;
	}

IL_0102:
	{
		V_10 = (bool)G_B29_0;
		bool L_50 = V_10;
		if (!L_50)
		{
			goto IL_010d;
		}
	}
	{
		int32_t L_51 = ___0_p;
		V_3 = L_51;
		goto IL_0111;
	}

IL_010d:
	{
		int32_t L_52 = ___0_p;
		V_3 = L_52;
		goto IL_0111;
	}

IL_0111:
	{
		int32_t L_53 = V_3;
		return L_53;
	}
}
// System.Int32 UnityEngine.TextEditor::FindEndOfPreviousWord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_FindEndOfPreviousWord_mFBDBEABAC6CFE72EF4ED33A3474EF3998E460C00 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_p, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B14_0 = 0;
	{
		int32_t L_0 = ___0_p;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___0_p;
		V_2 = L_2;
		goto IL_007f;
	}

IL_000d:
	{
		int32_t L_3 = ___0_p;
		int32_t L_4;
		L_4 = TextEditor_PreviousCodePointIndex_mFCCC1034ABF4773A7E1E121D14ACB948FCA116E0(__this, L_3, NULL);
		___0_p = L_4;
		goto IL_0021;
	}

IL_0018:
	{
		int32_t L_5 = ___0_p;
		int32_t L_6;
		L_6 = TextEditor_PreviousCodePointIndex_mFCCC1034ABF4773A7E1E121D14ACB948FCA116E0(__this, L_5, NULL);
		___0_p = L_6;
	}

IL_0021:
	{
		int32_t L_7 = ___0_p;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_8;
		L_8 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_9 = ___0_p;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_9, NULL);
		G_B7_0 = ((((int32_t)L_10) == ((int32_t)((int32_t)32)))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B7_0 = 0;
	}

IL_0038:
	{
		V_3 = (bool)G_B7_0;
		bool L_11 = V_3;
		if (L_11)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_12 = ___0_p;
		int32_t L_13;
		L_13 = TextEditor_ClassifyChar_mC2104A64D197D5BE8FA3CB1CA12F0E6AFF50AC77(__this, L_12, NULL);
		V_0 = L_13;
		int32_t L_14 = V_0;
		V_4 = (bool)((((int32_t)((((int32_t)L_14) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		goto IL_005d;
	}

IL_0054:
	{
		int32_t L_16 = ___0_p;
		int32_t L_17;
		L_17 = TextEditor_PreviousCodePointIndex_mFCCC1034ABF4773A7E1E121D14ACB948FCA116E0(__this, L_16, NULL);
		___0_p = L_17;
	}

IL_005d:
	{
		int32_t L_18 = ___0_p;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_19 = ___0_p;
		int32_t L_20;
		L_20 = TextEditor_PreviousCodePointIndex_mFCCC1034ABF4773A7E1E121D14ACB948FCA116E0(__this, L_19, NULL);
		int32_t L_21;
		L_21 = TextEditor_ClassifyChar_mC2104A64D197D5BE8FA3CB1CA12F0E6AFF50AC77(__this, L_20, NULL);
		int32_t L_22 = V_0;
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)L_22))? 1 : 0);
		goto IL_0074;
	}

IL_0073:
	{
		G_B14_0 = 0;
	}

IL_0074:
	{
		V_5 = (bool)G_B14_0;
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0054;
		}
	}
	{
	}

IL_007b:
	{
		int32_t L_24 = ___0_p;
		V_2 = L_24;
		goto IL_007f;
	}

IL_007f:
	{
		int32_t L_25 = V_2;
		return L_25;
	}
}
// System.Void UnityEngine.TextEditor::MoveWordLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MoveWordLeft_mFDC5DE936BBEF1CBAE440BD813107B04F20A2004 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B2_0 = NULL;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B3_1 = NULL;
	{
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		int32_t L_2;
		L_2 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_0018:
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		NullCheck(G_B3_1);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(G_B3_1, G_B3_0, NULL);
		int32_t L_4;
		L_4 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_5;
		L_5 = TextEditor_FindPrevSeperator_m8619997F12F419286B495A9BA5078634373542CB(__this, L_4, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_5, NULL);
		int32_t L_6;
		L_6 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_6, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectWordRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectWordRight_m65AD5DB10CB51F517DA58E4BD5E11C3842ACC503 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B3_0 = NULL;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B4_1 = NULL;
	{
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		int32_t L_0;
		L_0 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_2;
		L_2 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_4;
		L_4 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_4, NULL);
		TextEditor_MoveWordRight_mB79E9C0C420ED29EB70CFAB49CBFE6C290ECD074(__this, NULL);
		int32_t L_5 = V_0;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_5, NULL);
		int32_t L_6;
		L_6 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_7;
		L_7 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		G_B2_0 = __this;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			G_B3_0 = __this;
			goto IL_0055;
		}
	}
	{
		int32_t L_8;
		L_8 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		G_B4_0 = L_8;
		G_B4_1 = G_B2_0;
		goto IL_005b;
	}

IL_0055:
	{
		int32_t L_9;
		L_9 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_0;
	}

IL_005b:
	{
		NullCheck(G_B4_1);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(G_B4_1, G_B4_0, NULL);
		goto IL_007f;
	}

IL_0063:
	{
		int32_t L_10;
		L_10 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_10, NULL);
		TextEditor_MoveWordRight_mB79E9C0C420ED29EB70CFAB49CBFE6C290ECD074(__this, NULL);
		int32_t L_11 = V_0;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_11, NULL);
	}

IL_007f:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectWordLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectWordLeft_m3E721136E39E2CF679C08538DDD2FDE5D3D8F7E5 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B3_0 = NULL;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* G_B4_1 = NULL;
	{
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		int32_t L_0;
		L_0 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_2;
		L_2 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_4;
		L_4 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_4, NULL);
		TextEditor_MoveWordLeft_mFDC5DE936BBEF1CBAE440BD813107B04F20A2004(__this, NULL);
		int32_t L_5 = V_0;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_5, NULL);
		int32_t L_6;
		L_6 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_7;
		L_7 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		G_B2_0 = __this;
		if ((((int32_t)L_6) > ((int32_t)L_7)))
		{
			G_B3_0 = __this;
			goto IL_0055;
		}
	}
	{
		int32_t L_8;
		L_8 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		G_B4_0 = L_8;
		G_B4_1 = G_B2_0;
		goto IL_005b;
	}

IL_0055:
	{
		int32_t L_9;
		L_9 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_0;
	}

IL_005b:
	{
		NullCheck(G_B4_1);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(G_B4_1, G_B4_0, NULL);
		goto IL_007f;
	}

IL_0063:
	{
		int32_t L_10;
		L_10 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_10, NULL);
		TextEditor_MoveWordLeft_mFDC5DE936BBEF1CBAE440BD813107B04F20A2004(__this, NULL);
		int32_t L_11 = V_0;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_11, NULL);
	}

IL_007f:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_ExpandSelectGraphicalLineStart_m04A641F4217F6F54795103B6819EADCB1AC0495F (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_4;
		L_4 = TextEditor_GetGraphicalLineStart_m4503A00148DE73D825654C4DCBFD27E8234A957B(__this, L_3, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_4, NULL);
		goto IL_0053;
	}

IL_002f:
	{
		int32_t L_5;
		L_5 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		V_1 = L_5;
		int32_t L_6;
		L_6 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		int32_t L_7;
		L_7 = TextEditor_GetGraphicalLineStart_m4503A00148DE73D825654C4DCBFD27E8234A957B(__this, L_6, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_7, NULL);
		int32_t L_8 = V_1;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_8, NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_ExpandSelectGraphicalLineEnd_m77DED153050FD67B42CA570497436192A3E5BA60 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_3;
		L_3 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_4;
		L_4 = TextEditor_GetGraphicalLineEnd_m3396AC4E6D75FB0F8E8F99C91384064A32F0DF3F(__this, L_3, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_4, NULL);
		goto IL_0053;
	}

IL_002f:
	{
		int32_t L_5;
		L_5 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		V_1 = L_5;
		int32_t L_6;
		L_6 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		int32_t L_7;
		L_7 = TextEditor_GetGraphicalLineEnd_m3396AC4E6D75FB0F8E8F99C91384064A32F0DF3F(__this, L_6, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_7, NULL);
		int32_t L_8 = V_1;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_8, NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectGraphicalLineStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectGraphicalLineStart_mDB2EDA9715BCF37692A79301F480C793D540E01A (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	{
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_GetGraphicalLineStart_m4503A00148DE73D825654C4DCBFD27E8234A957B(__this, L_0, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectGraphicalLineEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectGraphicalLineEnd_m27A03A2BE9B63F0C294E986B4244942876EB2848 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	{
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_GetGraphicalLineEnd_m3396AC4E6D75FB0F8E8F99C91384064A32F0DF3F(__this, L_0, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectParagraphForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectParagraphForward_m9531E6CCDFB591A90EC32464858B2280AD3F5772 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		int32_t L_2;
		L_2 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		String_t* L_3;
		L_3 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_6;
		L_6 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_7;
		L_7 = TextEditor_IndexOfEndOfLine_mE03CC016EBA2B7AFD72A204D23D64C9F686C057B(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_7, NULL);
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_9;
		L_9 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_10;
		L_10 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		G_B4_0 = ((((int32_t)L_9) > ((int32_t)L_10))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B4_0 = 0;
	}

IL_0058:
	{
		V_2 = (bool)G_B4_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_12;
		L_12 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_12, NULL);
	}

IL_0069:
	{
	}

IL_006a:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectParagraphBackward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectParagraphBackward_m0430E7BC1725DB775D0D817B80C4C1232449AD79 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t G_B4_0 = 0;
	{
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		int32_t L_2;
		L_2 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		V_1 = (bool)((((int32_t)L_2) > ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_4;
		L_4 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_5;
		L_5 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		NullCheck(L_4);
		int32_t L_6;
		L_6 = String_LastIndexOf_m3EB3F4ECDF6D990ADBACB6B168A8CBD4772B91A7(L_4, ((int32_t)10), ((int32_t)il2cpp_codegen_subtract(L_5, 2)), NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_8;
		L_8 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_9;
		L_9 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		G_B4_0 = ((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B4_0 = 0;
	}

IL_0057:
	{
		V_2 = (bool)G_B4_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_11;
		L_11 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_11, NULL);
	}

IL_0068:
	{
		goto IL_007d;
	}

IL_006b:
	{
		int32_t L_12 = 0;
		V_3 = L_12;
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_12, NULL);
		int32_t L_13 = V_3;
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_13, NULL);
	}

IL_007d:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectCurrentWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectCurrentWord_m9118CAE842D71A1AB19C90C94FC0ED4C32ABA99D (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_2;
		L_2 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = TextEditor_FindEndOfClassification_m9F20C27BA429FCCDDB9821EB9CE1E55535D44857(__this, L_4, 1, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_5, NULL);
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = TextEditor_FindEndOfClassification_m9F20C27BA429FCCDDB9821EB9CE1E55535D44857(__this, L_6, 0, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_7, NULL);
		goto IL_005c;
	}

IL_003c:
	{
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = TextEditor_FindEndOfClassification_m9F20C27BA429FCCDDB9821EB9CE1E55535D44857(__this, L_8, 0, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, L_9, NULL);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = TextEditor_FindEndOfClassification_m9F20C27BA429FCCDDB9821EB9CE1E55535D44857(__this, L_10, 1, NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, L_11, NULL);
	}

IL_005c:
	{
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		__this->___m_bJustSelected_18 = (bool)1;
		return;
	}
}
// System.Int32 UnityEngine.TextEditor::FindEndOfClassification(System.Int32,UnityEngine.TextEditor/Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_FindEndOfClassification_m9F20C27BA429FCCDDB9821EB9CE1E55535D44857 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_p, int32_t ___1_dir, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B13_0 = 0;
	{
		String_t* L_0;
		L_0 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		V_2 = 0;
		goto IL_00d4;
	}

IL_001a:
	{
		int32_t L_3 = ___0_p;
		String_t* L_4;
		L_4 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		V_3 = (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___0_p;
		int32_t L_8;
		L_8 = TextEditor_PreviousCodePointIndex_mFCCC1034ABF4773A7E1E121D14ACB948FCA116E0(__this, L_7, NULL);
		___0_p = L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___0_p;
		int32_t L_10;
		L_10 = TextEditor_ClassifyChar_mC2104A64D197D5BE8FA3CB1CA12F0E6AFF50AC77(__this, L_9, NULL);
		V_0 = L_10;
	}

IL_003d:
	{
		int32_t L_11 = ___1_dir;
		V_5 = L_11;
		int32_t L_12 = V_5;
		V_4 = L_12;
		int32_t L_13 = V_4;
		if (!L_13)
		{
			goto IL_007e;
		}
	}
	{
		goto IL_004b;
	}

IL_004b:
	{
		int32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_0052;
		}
	}
	{
		goto IL_00ab;
	}

IL_0052:
	{
		int32_t L_15 = ___0_p;
		int32_t L_16;
		L_16 = TextEditor_PreviousCodePointIndex_mFCCC1034ABF4773A7E1E121D14ACB948FCA116E0(__this, L_15, NULL);
		___0_p = L_16;
		int32_t L_17 = ___0_p;
		V_6 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_19;
		L_19 = TextEditor_ClassifyChar_mC2104A64D197D5BE8FA3CB1CA12F0E6AFF50AC77(__this, 0, NULL);
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) == ((int32_t)L_20)))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_21;
		L_21 = TextEditor_NextCodePointIndex_mF426772BB6B0CD7A3FC4042070C21902BF576B31(__this, 0, NULL);
		G_B13_0 = L_21;
		goto IL_0079;
	}

IL_0078:
	{
		G_B13_0 = 0;
	}

IL_0079:
	{
		V_2 = G_B13_0;
		goto IL_00d4;
	}

IL_007c:
	{
		goto IL_00ab;
	}

IL_007e:
	{
		int32_t L_22 = ___0_p;
		int32_t L_23;
		L_23 = TextEditor_NextCodePointIndex_mF426772BB6B0CD7A3FC4042070C21902BF576B31(__this, L_22, NULL);
		___0_p = L_23;
		int32_t L_24 = ___0_p;
		String_t* L_25;
		L_25 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_25, NULL);
		V_7 = (bool)((((int32_t)L_24) == ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00a9;
		}
	}
	{
		String_t* L_28;
		L_28 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_28);
		int32_t L_29;
		L_29 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_28, NULL);
		V_2 = L_29;
		goto IL_00d4;
	}

IL_00a9:
	{
		goto IL_00ab;
	}

IL_00ab:
	{
		int32_t L_30 = ___0_p;
		int32_t L_31;
		L_31 = TextEditor_ClassifyChar_mC2104A64D197D5BE8FA3CB1CA12F0E6AFF50AC77(__this, L_30, NULL);
		int32_t L_32 = V_0;
		V_8 = (bool)((((int32_t)L_31) == ((int32_t)L_32))? 1 : 0);
		bool L_33 = V_8;
		if (L_33)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_34 = ___1_dir;
		V_9 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_9;
		if (!L_35)
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_36 = ___0_p;
		V_2 = L_36;
		goto IL_00d4;
	}

IL_00ca:
	{
		int32_t L_37 = ___0_p;
		int32_t L_38;
		L_38 = TextEditor_NextCodePointIndex_mF426772BB6B0CD7A3FC4042070C21902BF576B31(__this, L_37, NULL);
		V_2 = L_38;
		goto IL_00d4;
	}

IL_00d4:
	{
		int32_t L_39 = V_2;
		return L_39;
	}
}
// System.Void UnityEngine.TextEditor::SelectCurrentParagraph()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SelectCurrentParagraph_m2D569FA93359557D691EB507471594473E419F0C (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		TextEditor_ClearCursorPos_mAE2290DC256C2BB4F1E326187E0662F3BB42B1F6(__this, NULL);
		String_t* L_0;
		L_0 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_5;
		L_5 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		int32_t L_6;
		L_6 = TextEditor_IndexOfEndOfLine_mE03CC016EBA2B7AFD72A204D23D64C9F686C057B(__this, L_5, NULL);
		TextEditor_set_cursorIndex_mF34C100A55F2767E46D07445B04B6DBEB77AF9A1(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
	}

IL_0038:
	{
		int32_t L_7;
		L_7 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		V_2 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_9;
		L_9 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_10;
		L_10 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		NullCheck(L_9);
		int32_t L_11;
		L_11 = String_LastIndexOf_m3EB3F4ECDF6D990ADBACB6B168A8CBD4772B91A7(L_9, ((int32_t)10), ((int32_t)il2cpp_codegen_subtract(L_10, 1)), NULL);
		TextEditor_set_selectIndex_m782BBC95B43A71A1061060BF52959ADEE9AF27ED(__this, ((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
	}

IL_0063:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_UpdateScrollOffset_mD3F056830FF3FFC3461ED965EB0B7E306536FC3B (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B19_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B23_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B22_0 = NULL;
	float G_B24_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B24_1 = NULL;
	{
		int32_t L_0;
		L_0 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		V_0 = L_0;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = __this->___style_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = TextEditor_get_position_m40763329A82988B1C5D5C1DA9919932061C99E13(__this, NULL);
		V_4 = L_2;
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_4), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		L_4 = TextEditor_get_position_m40763329A82988B1C5D5C1DA9919932061C99E13(__this, NULL);
		V_4 = L_4;
		float L_5;
		L_5 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_4), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_6), (0.0f), (0.0f), L_3, L_5, /*hidden argument*/NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_7 = __this->___m_Content_8;
		int32_t L_8 = V_0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = GUIStyle_GetCursorPixelPosition_m4FFBD3DC05CE503355DF01E57023AC349032CB2F(L_1, L_6, L_7, L_8, NULL);
		__this->___graphicalCursorPos_13 = L_9;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_10 = __this->___style_2;
		NullCheck(L_10);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_11;
		L_11 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_10, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		L_12 = TextEditor_get_position_m40763329A82988B1C5D5C1DA9919932061C99E13(__this, NULL);
		NullCheck(L_11);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13;
		L_13 = RectOffset_Remove_mC21D85A2BA4D0246FEC0B6C5F3C2D293CD41DB3D(L_11, L_12, NULL);
		V_1 = L_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = __this->___graphicalCursorPos_13;
		V_2 = L_14;
		float* L_15 = (float*)(&(&V_2)->___x_0);
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_18 = __this->___style_2;
		NullCheck(L_18);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_19;
		L_19 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_18, NULL);
		NullCheck(L_19);
		int32_t L_20;
		L_20 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_19, NULL);
		*((float*)L_16) = (float)((float)il2cpp_codegen_subtract(L_17, ((float)L_20)));
		float* L_21 = (float*)(&(&V_2)->___y_1);
		float* L_22 = L_21;
		float L_23 = *((float*)L_22);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_24 = __this->___style_2;
		NullCheck(L_24);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_25;
		L_25 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_24, NULL);
		NullCheck(L_25);
		int32_t L_26;
		L_26 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_25, NULL);
		*((float*)L_22) = (float)((float)il2cpp_codegen_subtract(L_23, ((float)L_26)));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_27 = __this->___style_2;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_28 = __this->___m_Content_8;
		NullCheck(L_27);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76(L_27, L_28, NULL);
		float L_30 = L_29.___x_0;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_31 = __this->___style_2;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_32 = __this->___m_Content_8;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_33;
		L_33 = TextEditor_get_position_m40763329A82988B1C5D5C1DA9919932061C99E13(__this, NULL);
		V_4 = L_33;
		float L_34;
		L_34 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_4), NULL);
		NullCheck(L_31);
		float L_35;
		L_35 = GUIStyle_CalcHeight_m57DA8F6020AE71B561ABCBCE74E0E58FD2ECC5E8(L_31, L_32, L_34, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), L_30, L_35, NULL);
		float* L_36 = (float*)(&(&V_3)->___x_0);
		float* L_37 = L_36;
		float L_38 = *((float*)L_37);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_39 = __this->___style_2;
		NullCheck(L_39);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_40;
		L_40 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_39, NULL);
		NullCheck(L_40);
		int32_t L_41;
		L_41 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_40, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_42 = __this->___style_2;
		NullCheck(L_42);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_43;
		L_43 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_42, NULL);
		NullCheck(L_43);
		int32_t L_44;
		L_44 = RectOffset_get_right_m07C826B0BC79B0CBC01F5FF489D456C553F047BF(L_43, NULL);
		*((float*)L_37) = (float)((float)il2cpp_codegen_subtract(L_38, ((float)((int32_t)il2cpp_codegen_add(L_41, L_44)))));
		float* L_45 = (float*)(&(&V_3)->___y_1);
		float* L_46 = L_45;
		float L_47 = *((float*)L_46);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_48 = __this->___style_2;
		NullCheck(L_48);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_49;
		L_49 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_48, NULL);
		NullCheck(L_49);
		int32_t L_50;
		L_50 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_49, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_51 = __this->___style_2;
		NullCheck(L_51);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_52;
		L_52 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_51, NULL);
		NullCheck(L_52);
		int32_t L_53;
		L_53 = RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B(L_52, NULL);
		*((float*)L_46) = (float)((float)il2cpp_codegen_subtract(L_47, ((float)((int32_t)il2cpp_codegen_add(L_50, L_53)))));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = V_3;
		float L_55 = L_54.___x_0;
		float L_56;
		L_56 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_1), NULL);
		V_5 = (bool)((((float)L_55) < ((float)L_56))? 1 : 0);
		bool L_57 = V_5;
		if (!L_57)
		{
			goto IL_0163;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_58 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___scrollOffset_7);
		L_58->___x_0 = (0.0f);
		goto IL_01e1;
	}

IL_0163:
	{
		bool L_59 = __this->___m_RevealCursor_12;
		V_6 = L_59;
		bool L_60 = V_6;
		if (!L_60)
		{
			goto IL_01e1;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61 = V_2;
		float L_62 = L_61.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_63 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___scrollOffset_7);
		float L_64 = L_63->___x_0;
		float L_65;
		L_65 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_1), NULL);
		V_7 = (bool)((((float)((float)il2cpp_codegen_add(L_62, (1.0f)))) > ((float)((float)il2cpp_codegen_add(L_64, L_65))))? 1 : 0);
		bool L_66 = V_7;
		if (!L_66)
		{
			goto IL_01b6;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_67 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___scrollOffset_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68 = V_2;
		float L_69 = L_68.___x_0;
		float L_70;
		L_70 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_1), NULL);
		L_67->___x_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_69, L_70)), (1.0f)));
	}

IL_01b6:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71 = V_2;
		float L_72 = L_71.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_73 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___scrollOffset_7);
		float L_74 = L_73->___x_0;
		V_8 = (bool)((((float)L_72) < ((float)L_74))? 1 : 0);
		bool L_75 = V_8;
		if (!L_75)
		{
			goto IL_01e0;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_76 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___scrollOffset_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77 = V_2;
		float L_78 = L_77.___x_0;
		L_76->___x_0 = L_78;
	}

IL_01e0:
	{
	}

IL_01e1:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_3;
		float L_80 = L_79.___y_1;
		float L_81;
		L_81 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_1), NULL);
		V_9 = (bool)((((float)L_80) < ((float)L_81))? 1 : 0);
		bool L_82 = V_9;
		if (!L_82)
		{
			goto IL_020d;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_83 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___scrollOffset_7);
		L_83->___y_1 = (0.0f);
		goto IL_0297;
	}

IL_020d:
	{
		bool L_84 = __this->___m_RevealCursor_12;
		V_10 = L_84;
		bool L_85 = V_10;
		if (!L_85)
		{
			goto IL_0297;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_86 = V_2;
		float L_87 = L_86.___y_1;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_88 = __this->___style_2;
		NullCheck(L_88);
		float L_89;
		L_89 = GUIStyle_get_lineHeight_mC814199D1ABA3CE38358BA70347562B0CDFEB96E(L_88, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_90 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___scrollOffset_7);
		float L_91 = L_90->___y_1;
		float L_92;
		L_92 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_1), NULL);
		V_11 = (bool)((((float)((float)il2cpp_codegen_add(L_87, L_89))) > ((float)((float)il2cpp_codegen_add(L_91, L_92))))? 1 : 0);
		bool L_93 = V_11;
		if (!L_93)
		{
			goto IL_026c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_94 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___scrollOffset_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_95 = V_2;
		float L_96 = L_95.___y_1;
		float L_97;
		L_97 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_1), NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_98 = __this->___style_2;
		NullCheck(L_98);
		float L_99;
		L_99 = GUIStyle_get_lineHeight_mC814199D1ABA3CE38358BA70347562B0CDFEB96E(L_98, NULL);
		L_94->___y_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_96, L_97)), L_99));
	}

IL_026c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_100 = V_2;
		float L_101 = L_100.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_102 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___scrollOffset_7);
		float L_103 = L_102->___y_1;
		V_12 = (bool)((((float)L_101) < ((float)L_103))? 1 : 0);
		bool L_104 = V_12;
		if (!L_104)
		{
			goto IL_0296;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_105 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___scrollOffset_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_106 = V_2;
		float L_107 = L_106.___y_1;
		L_105->___y_1 = L_107;
	}

IL_0296:
	{
	}

IL_0297:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_108 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___scrollOffset_7);
		float L_109 = L_108->___y_1;
		if ((!(((float)L_109) > ((float)(0.0f)))))
		{
			goto IL_02c6;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_110 = V_3;
		float L_111 = L_110.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_112 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___scrollOffset_7);
		float L_113 = L_112->___y_1;
		float L_114;
		L_114 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_1), NULL);
		G_B19_0 = ((((float)((float)il2cpp_codegen_subtract(L_111, L_113))) < ((float)L_114))? 1 : 0);
		goto IL_02c7;
	}

IL_02c6:
	{
		G_B19_0 = 0;
	}

IL_02c7:
	{
		V_13 = (bool)G_B19_0;
		bool L_115 = V_13;
		if (!L_115)
		{
			goto IL_02e6;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_116 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___scrollOffset_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_117 = V_3;
		float L_118 = L_117.___y_1;
		float L_119;
		L_119 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_1), NULL);
		L_116->___y_1 = ((float)il2cpp_codegen_subtract(L_118, L_119));
	}

IL_02e6:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_120 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___scrollOffset_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_121 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___scrollOffset_7);
		float L_122 = L_121->___y_1;
		G_B22_0 = L_120;
		if ((((float)L_122) < ((float)(0.0f))))
		{
			G_B23_0 = L_120;
			goto IL_030b;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_123 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___scrollOffset_7);
		float L_124 = L_123->___y_1;
		G_B24_0 = L_124;
		G_B24_1 = G_B22_0;
		goto IL_0310;
	}

IL_030b:
	{
		G_B24_0 = (0.0f);
		G_B24_1 = G_B23_0;
	}

IL_0310:
	{
		G_B24_1->___y_1 = G_B24_0;
		__this->___m_RevealCursor_12 = (bool)0;
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::PerformOperation(UnityEngine.TextEditor/TextEditOp,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_PerformOperation_m9CC1732A34CF801A0348A4296BDBC9D015AB4014 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_operation, bool ___1_textIsReadOnly, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEditOp_tE4F97FA51F71D9639293ABF86A39AB430D400B4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD26781B489D74246E46948A3CF454478F1000C5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	{
		__this->___m_RevealCursor_12 = (bool)1;
		int32_t L_0 = ___0_operation;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_00cf;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00e7;
			}
			case 3:
			{
				goto IL_00f3;
			}
			case 4:
			{
				goto IL_00ff;
			}
			case 5:
			{
				goto IL_010b;
			}
			case 6:
			{
				goto IL_0147;
			}
			case 7:
			{
				goto IL_0153;
			}
			case 8:
			{
				goto IL_0309;
			}
			case 9:
			{
				goto IL_0309;
			}
			case 10:
			{
				goto IL_0177;
			}
			case 11:
			{
				goto IL_0183;
			}
			case 12:
			{
				goto IL_013b;
			}
			case 13:
			{
				goto IL_0117;
			}
			case 14:
			{
				goto IL_015f;
			}
			case 15:
			{
				goto IL_016b;
			}
			case 16:
			{
				goto IL_0123;
			}
			case 17:
			{
				goto IL_012f;
			}
			case 18:
			{
				goto IL_018f;
			}
			case 19:
			{
				goto IL_019b;
			}
			case 20:
			{
				goto IL_01a7;
			}
			case 21:
			{
				goto IL_01b3;
			}
			case 22:
			{
				goto IL_01ef;
			}
			case 23:
			{
				goto IL_01fb;
			}
			case 24:
			{
				goto IL_0309;
			}
			case 25:
			{
				goto IL_0309;
			}
			case 26:
			{
				goto IL_0207;
			}
			case 27:
			{
				goto IL_0213;
			}
			case 28:
			{
				goto IL_0237;
			}
			case 29:
			{
				goto IL_0243;
			}
			case 30:
			{
				goto IL_01cb;
			}
			case 31:
			{
				goto IL_01bf;
			}
			case 32:
			{
				goto IL_01d7;
			}
			case 33:
			{
				goto IL_01e3;
			}
			case 34:
			{
				goto IL_022b;
			}
			case 35:
			{
				goto IL_021f;
			}
			case 36:
			{
				goto IL_024f;
			}
			case 37:
			{
				goto IL_0267;
			}
			case 38:
			{
				goto IL_02cd;
			}
			case 39:
			{
				goto IL_02f5;
			}
			case 40:
			{
				goto IL_02e1;
			}
			case 41:
			{
				goto IL_0281;
			}
			case 42:
			{
				goto IL_029b;
			}
			case 43:
			{
				goto IL_02a7;
			}
			case 44:
			{
				goto IL_02bb;
			}
			case 45:
			{
				goto IL_02c4;
			}
		}
	}
	{
		goto IL_0309;
	}

IL_00cf:
	{
		TextEditor_MoveLeft_m3784BAF8F1BF69781ECFA40D8DDAFA6EA9EC58C1(__this, NULL);
		goto IL_0328;
	}

IL_00db:
	{
		TextEditor_MoveRight_m568871F86B97196C66A4ADDF335E0ECEBEE18DC1(__this, NULL);
		goto IL_0328;
	}

IL_00e7:
	{
		TextEditor_MoveUp_mFCC668A7D89E092E588F92DA2FA2B4D03E7C921F(__this, NULL);
		goto IL_0328;
	}

IL_00f3:
	{
		TextEditor_MoveDown_m6084C0F493B71485D0D0796D77B4F32F391C7571(__this, NULL);
		goto IL_0328;
	}

IL_00ff:
	{
		TextEditor_MoveLineStart_mCFB0865ABB2E2B6A6FC98F77FE6E69A8E2578ED0(__this, NULL);
		goto IL_0328;
	}

IL_010b:
	{
		TextEditor_MoveLineEnd_m811BAE3ABB333A4CE56C6C80439111CC1FE4450F(__this, NULL);
		goto IL_0328;
	}

IL_0117:
	{
		TextEditor_MoveWordRight_mB79E9C0C420ED29EB70CFAB49CBFE6C290ECD074(__this, NULL);
		goto IL_0328;
	}

IL_0123:
	{
		TextEditor_MoveToStartOfNextWord_m8E6EA22B00CD272176D69786A716B5D125A026E2(__this, NULL);
		goto IL_0328;
	}

IL_012f:
	{
		TextEditor_MoveToEndOfPreviousWord_m2CE9EBD0A0FB0CCBC93912FA856B7628C4B3C3FF(__this, NULL);
		goto IL_0328;
	}

IL_013b:
	{
		TextEditor_MoveWordLeft_mFDC5DE936BBEF1CBAE440BD813107B04F20A2004(__this, NULL);
		goto IL_0328;
	}

IL_0147:
	{
		TextEditor_MoveTextStart_m59D0D8EADF0420DED887A9E6D9E780CBE1A87E16(__this, NULL);
		goto IL_0328;
	}

IL_0153:
	{
		TextEditor_MoveTextEnd_m26A12A1C36B56C8D80B1E5C520EA38E670611028(__this, NULL);
		goto IL_0328;
	}

IL_015f:
	{
		TextEditor_MoveParagraphForward_m5CD556511F7189813865732FDC28FB710ADA8572(__this, NULL);
		goto IL_0328;
	}

IL_016b:
	{
		TextEditor_MoveParagraphBackward_mC64495DC5B520C2D279A03616D0ADDCE0718A510(__this, NULL);
		goto IL_0328;
	}

IL_0177:
	{
		TextEditor_MoveGraphicalLineStart_m0332C42BCF18CC2AE7024402CDFFD1F24210B3DD(__this, NULL);
		goto IL_0328;
	}

IL_0183:
	{
		TextEditor_MoveGraphicalLineEnd_m82D882096A9E72C9469F01F5E8882DBEA8DC2C0E(__this, NULL);
		goto IL_0328;
	}

IL_018f:
	{
		TextEditor_SelectLeft_m7473E14B27D0D9503E88FE893B41CD52EA15A39B(__this, NULL);
		goto IL_0328;
	}

IL_019b:
	{
		TextEditor_SelectRight_mC374DDA6EF8A522FF0CF35393EE38C07154FC062(__this, NULL);
		goto IL_0328;
	}

IL_01a7:
	{
		TextEditor_SelectUp_mA28D8B3CB2012DE645CC3A027E1168AF2E9BCB3B(__this, NULL);
		goto IL_0328;
	}

IL_01b3:
	{
		TextEditor_SelectDown_mC77A384914BA7F3CEC02C20D31CC28A3788B1C15(__this, NULL);
		goto IL_0328;
	}

IL_01bf:
	{
		TextEditor_SelectWordRight_m65AD5DB10CB51F517DA58E4BD5E11C3842ACC503(__this, NULL);
		goto IL_0328;
	}

IL_01cb:
	{
		TextEditor_SelectWordLeft_m3E721136E39E2CF679C08538DDD2FDE5D3D8F7E5(__this, NULL);
		goto IL_0328;
	}

IL_01d7:
	{
		TextEditor_SelectToEndOfPreviousWord_m5C182936491E07770967753F142C2CCC6BAABB5A(__this, NULL);
		goto IL_0328;
	}

IL_01e3:
	{
		TextEditor_SelectToStartOfNextWord_mCC2D52A1AA807D2EDB985CE1FAB18B884A1E549A(__this, NULL);
		goto IL_0328;
	}

IL_01ef:
	{
		TextEditor_SelectTextStart_m5FAFFEF24723CA29E6DA6631EE80EBF4ADE591C6(__this, NULL);
		goto IL_0328;
	}

IL_01fb:
	{
		TextEditor_SelectTextEnd_mDCF0E587F42EB91D85850AC5F840E089955D69F4(__this, NULL);
		goto IL_0328;
	}

IL_0207:
	{
		TextEditor_ExpandSelectGraphicalLineStart_m04A641F4217F6F54795103B6819EADCB1AC0495F(__this, NULL);
		goto IL_0328;
	}

IL_0213:
	{
		TextEditor_ExpandSelectGraphicalLineEnd_m77DED153050FD67B42CA570497436192A3E5BA60(__this, NULL);
		goto IL_0328;
	}

IL_021f:
	{
		TextEditor_SelectParagraphForward_m9531E6CCDFB591A90EC32464858B2280AD3F5772(__this, NULL);
		goto IL_0328;
	}

IL_022b:
	{
		TextEditor_SelectParagraphBackward_m0430E7BC1725DB775D0D817B80C4C1232449AD79(__this, NULL);
		goto IL_0328;
	}

IL_0237:
	{
		TextEditor_SelectGraphicalLineStart_mDB2EDA9715BCF37692A79301F480C793D540E01A(__this, NULL);
		goto IL_0328;
	}

IL_0243:
	{
		TextEditor_SelectGraphicalLineEnd_m27A03A2BE9B63F0C294E986B4244942876EB2848(__this, NULL);
		goto IL_0328;
	}

IL_024f:
	{
		bool L_3 = ___1_textIsReadOnly;
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_025b;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_032c;
	}

IL_025b:
	{
		bool L_5;
		L_5 = TextEditor_Delete_mFE5E2A0C6230CA113C1C64C4F0F5F5D30DF16EEA(__this, NULL);
		V_3 = L_5;
		goto IL_032c;
	}

IL_0267:
	{
		bool L_6 = ___1_textIsReadOnly;
		V_4 = L_6;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0275;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_032c;
	}

IL_0275:
	{
		bool L_8;
		L_8 = TextEditor_Backspace_m3D25240A83DA225BEDC8A5363CC83E9A2966169A(__this, NULL);
		V_3 = L_8;
		goto IL_032c;
	}

IL_0281:
	{
		bool L_9 = ___1_textIsReadOnly;
		V_5 = L_9;
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_028f;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_032c;
	}

IL_028f:
	{
		bool L_11;
		L_11 = TextEditor_Cut_m3B9A748CFEF7633613107C8F4A1CF62255041BFB(__this, NULL);
		V_3 = L_11;
		goto IL_032c;
	}

IL_029b:
	{
		TextEditor_Copy_m33D7D8DF6A4EE867CF02D15577E8A591C0027DCA(__this, NULL);
		goto IL_0328;
	}

IL_02a7:
	{
		bool L_12 = ___1_textIsReadOnly;
		V_6 = L_12;
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_02b2;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_032c;
	}

IL_02b2:
	{
		bool L_14;
		L_14 = TextEditor_Paste_m1A9AEA3C543B2E7595070DA96D7DBE24066AC9E2(__this, NULL);
		V_3 = L_14;
		goto IL_032c;
	}

IL_02bb:
	{
		TextEditor_SelectAll_mDEBAABE01DF37B1EE8EFDE43E8036B5C2813C685(__this, NULL);
		goto IL_0328;
	}

IL_02c4:
	{
		TextEditor_SelectNone_m4EEF86ADCEEF1F445A57947AB7D58ECC0A334B86(__this, NULL);
		goto IL_0328;
	}

IL_02cd:
	{
		bool L_15 = ___1_textIsReadOnly;
		V_7 = L_15;
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_02d8;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_032c;
	}

IL_02d8:
	{
		bool L_17;
		L_17 = TextEditor_DeleteWordBack_m9F0CDF4ADF1A86CB97BD8C60FD52031FCD24A210(__this, NULL);
		V_3 = L_17;
		goto IL_032c;
	}

IL_02e1:
	{
		bool L_18 = ___1_textIsReadOnly;
		V_8 = L_18;
		bool L_19 = V_8;
		if (!L_19)
		{
			goto IL_02ec;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_032c;
	}

IL_02ec:
	{
		bool L_20;
		L_20 = TextEditor_DeleteLineBack_m43927B9B9F8AD1CA54CED2C40571F190EBE9792D(__this, NULL);
		V_3 = L_20;
		goto IL_032c;
	}

IL_02f5:
	{
		bool L_21 = ___1_textIsReadOnly;
		V_9 = L_21;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_0300;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_032c;
	}

IL_0300:
	{
		bool L_23;
		L_23 = TextEditor_DeleteWordForward_mD81B94DA0DE3A3B9A212C3B6AF6C475B39E7A56D(__this, NULL);
		V_3 = L_23;
		goto IL_032c;
	}

IL_0309:
	{
		Il2CppFakeBox<int32_t> L_24(TextEditOp_tE4F97FA51F71D9639293ABF86A39AB430D400B4E_il2cpp_TypeInfo_var, (&___0_operation));
		String_t* L_25;
		L_25 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_24), NULL);
		String_t* L_26;
		L_26 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBD26781B489D74246E46948A3CF454478F1000C5, L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_26, NULL);
		goto IL_0328;
	}

IL_0328:
	{
		V_3 = (bool)0;
		goto IL_032c;
	}

IL_032c:
	{
		bool L_27 = V_3;
		return L_27;
	}
}
// System.Void UnityEngine.TextEditor::SaveBackup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_SaveBackup_m5DA3A7E39B3F28777DD53DC0934CAB46B9ED8151 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		__this->___oldText_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___oldText_20), (void*)L_0);
		int32_t L_1;
		L_1 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		__this->___oldPos_21 = L_1;
		int32_t L_2;
		L_2 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		__this->___oldSelectPos_22 = L_2;
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::Cut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_Cut_m3B9A748CFEF7633613107C8F4A1CF62255041BFB (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = __this->___isPasswordField_5;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_001f;
	}

IL_000f:
	{
		TextEditor_Copy_m33D7D8DF6A4EE867CF02D15577E8A591C0027DCA(__this, NULL);
		bool L_2;
		L_2 = TextEditor_DeleteSelection_m520F49C6269E488DD60BBD4603DA869FC446A788(__this, NULL);
		V_1 = L_2;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.TextEditor::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_Copy_m33D7D8DF6A4EE867CF02D15577E8A591C0027DCA (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0;
		L_0 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		int32_t L_1;
		L_1 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_004c;
	}

IL_0015:
	{
		bool L_3 = __this->___isPasswordField_5;
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_004c;
	}

IL_0021:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_5 = __this->___style_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		L_6 = VirtualFuncInvoker0< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(4 /* UnityEngine.Rect UnityEngine.TextEditor::get_localPosition() */, __this);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_7 = __this->___m_Content_8;
		int32_t L_8;
		L_8 = TextEditor_get_selectIndex_m4DB0C8224B5C82B0F02FFF69E80D3FEA4202A020(__this, NULL);
		int32_t L_9;
		L_9 = TextEditor_get_cursorIndex_m0954904B376E50D89A4CDD82EEE710544D6EF461(__this, NULL);
		NullCheck(L_5);
		String_t* L_10;
		L_10 = GUIStyle_Internal_GetSelectedRenderedText_m3F9EF55E4958D2C9DE62AC723DBC99EBB80DD002(L_5, L_6, L_7, L_8, L_9, NULL);
		V_0 = L_10;
		String_t* L_11 = V_0;
		GUIUtility_set_systemCopyBuffer_mD14AE32BFEA4773BDC679205D470A228B8F225E8(L_11, NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextEditor_ReplaceNewlinesWithSpaces_m050CD5F1C45A59C776C840AC84A1CF1C4AECA47C (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___0_value;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_0, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		___0_value = L_1;
		String_t* L_2 = ___0_value;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_2, ((int32_t)10), ((int32_t)32), NULL);
		___0_value = L_3;
		String_t* L_4 = ___0_value;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_4, ((int32_t)13), ((int32_t)32), NULL);
		___0_value = L_5;
		String_t* L_6 = ___0_value;
		V_0 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		String_t* L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.TextEditor::Paste()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_Paste_m1A9AEA3C543B2E7595070DA96D7DBE24066AC9E2 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		String_t* L_0;
		L_0 = GUIUtility_get_systemCopyBuffer_m01E2DF71533C31A4C552B9177D7CBA0C6CA3FC2A(NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		bool L_4 = __this->___multiline_3;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_6 = V_0;
		String_t* L_7;
		L_7 = TextEditor_ReplaceNewlinesWithSpaces_m050CD5F1C45A59C776C840AC84A1CF1C4AECA47C(L_6, NULL);
		V_0 = L_7;
	}

IL_002b:
	{
		String_t* L_8 = V_0;
		TextEditor_ReplaceSelection_m7BBCC70F065AED2C5942127F95234C17897A70C1(__this, L_8, NULL);
		V_3 = (bool)1;
		goto IL_003b;
	}

IL_0037:
	{
		V_3 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		bool L_9 = V_3;
		return L_9;
	}
}
// System.Void UnityEngine.TextEditor::MapKey(System.String,UnityEngine.TextEditor/TextEditOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B (String_t* ___0_key, int32_t ___1_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m457C24C18E42BAE0D0402741FDA0445E939FCB47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818* L_0 = ((TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27_StaticFields*)il2cpp_codegen_static_fields_for(TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27_il2cpp_TypeInfo_var))->___s_Keyactions_23;
		String_t* L_1 = ___0_key;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_2;
		L_2 = Event_KeyboardEvent_m957733139998C86C7ECA28BA50863EB88B71418E(L_1, NULL);
		int32_t L_3 = ___1_action;
		NullCheck(L_0);
		Dictionary_2_set_Item_m457C24C18E42BAE0D0402741FDA0445E939FCB47(L_0, L_2, L_3, Dictionary_2_set_Item_m457C24C18E42BAE0D0402741FDA0445E939FCB47_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.TextEditor::InitKeyActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_InitKeyActions_m30295CE738738468794A7AE3338BE827B891A0DD (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m25295236FCA3F3483154632E7D7193F3A4963070_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01FE2A7BAF056155917298D04AE54B7D6AF27894);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral028D7034AFF25D3F9A597A5740013E38DA19D317);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C9DC099BD4ECD04B696BF38FC02346103F2BC97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EF758EF1A06CA13329086B705ED12F47B9F606F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13490EE15BBBA5055FAF4DFF43BAF8642B91BD99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1388D2C9310312FF15F8415A0A8F63A7EA461B41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13CDCE216B91792515C4C64C7FCF5B265C404257);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16D9C3063FF5F852963147CC12C5C552A5635796);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CD31FFC09BB731749BFAAC984D2EED8E22C771A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DF9EACB3FD057DF42A2784124CCE504D5860AEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28C03674125DA29250BA73594E6061FD480A3CB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34D4B5F20FD7AA47487EDE07001792463720D1CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34F817DA4635C4C22DF5692FF51A196067483534);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350D3BF828268FA677A331CBD1D40C9DB88673B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C3D97D6F00F5718D7008966DC8F93F9BB87FA51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D3A00B527F2755AFFF36C8F4AC13A53B5DC81D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D5EAEDD29399C149223964BD7513C036E82B631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E5BBD622A1890626F72D09F11351B02F04CD245);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4112C4C0070D77562F4AE5B1077F66F430FF4706);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46AC1D8C432B177A3C113AD943EB74504A0EB337);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4718C7000562AF450B2C8B2BD4445A87205F7666);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5031FEC61137D005DAA2BFB10E1404651A112B0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62F0048B45A8ADBC774F1B00911C9AA337E1F633);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6458183EA8D5BC1AAE58A98C841058647CCC35DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70E962167414B98D1C47009CF2298022592E68D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral710CEFF5A6D94EED332EF2BD41342B8B16B45293);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7174BAC93C4533B5ACC05736AE4D0C900491A008);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AADBCDB9D121BC9D88064E31E08A3186262CAE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BBDDC94A571A1FD7D1FE9C4E3062CB11564D926);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EF39B884F9764078345103493B55121123B1B46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81AB3FCA888E7214C2733551168655ABA4D3C65A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral837B17505EC06BAC0E4AA984798E9DB32B9C3CA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral877F6F7B61373508B1123D79708B393A9438C37E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C1E874DA059D22C91283C44117D602D9080875A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FA1FF57F726441CA277BF9734892B299CA3297B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FF3949A2EE199375C9E51BB6ACCD0AE243AF691);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA314507B0573B983FD845620D28E0B2F951D0E10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3955ADB3BC69ECFE423744D4F4F597294A20827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8D3437438DB8A85C804DDB64E69721F1D275030);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA7EB40717F1BA8A905AA5B827AAE03AF1D0F2D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB468B2E60F7F60260C2916459A799050DD6D3E85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8AA8F2673947FA36BB764D4DD75961AB3AF723E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8E1418EB9CE2E5CF97CF8246D2776B9F1F33D67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA6BD45D12B4E9306BD7E0CC99FEC1DEEBFBBC58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC581158E993200B82B36A56301468170ADB021DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD91C866DD696C68303515E6926044A10A2ADAB3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBA1945CFAADC613DE5170FD5C21296CCFF83615);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE18A20FF89E2801DE5C0C60E05D569C3513C48C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3EADA58476D85227490ACED9D3239769769DFDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7B9F94C0B0B71996D09AA98D20E270C100EAB93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA74ED324D4EC0A66FF57C32244629F3B15A2CCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1129AA23E2182336739DE1026CACAE451BACE5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF222CF93E01C3342431C7952E8BD62DEFC619783);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF25B95468DAA02EC9AF41A21C2F589D8847BC27F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA1435556F32329DD212289449459CCFA67730F8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818* L_0 = ((TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27_StaticFields*)il2cpp_codegen_static_fields_for(TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27_il2cpp_TypeInfo_var))->___s_Keyactions_23;
		V_0 = (bool)((!(((RuntimeObject*)(Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_03ec;
	}

IL_0012:
	{
		Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818* L_2 = (Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818*)il2cpp_codegen_object_new(Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m25295236FCA3F3483154632E7D7193F3A4963070(L_2, Dictionary_2__ctor_m25295236FCA3F3483154632E7D7193F3A4963070_RuntimeMethod_var);
		((TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27_StaticFields*)il2cpp_codegen_static_fields_for(TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27_il2cpp_TypeInfo_var))->___s_Keyactions_23 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27_StaticFields*)il2cpp_codegen_static_fields_for(TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27_il2cpp_TypeInfo_var))->___s_Keyactions_23), (void*)L_2);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, 0, NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, 1, NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305, 2, NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4, 3, NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral4718C7000562AF450B2C8B2BD4445A87205F7666, ((int32_t)18), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralB468B2E60F7F60260C2916459A799050DD6D3E85, ((int32_t)19), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralC581158E993200B82B36A56301468170ADB021DA, ((int32_t)20), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral46AC1D8C432B177A3C113AD943EB74504A0EB337, ((int32_t)21), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral028D7034AFF25D3F9A597A5740013E38DA19D317, ((int32_t)36), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral710CEFF5A6D94EED332EF2BD41342B8B16B45293, ((int32_t)37), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral350D3BF828268FA677A331CBD1D40C9DB88673B3, ((int32_t)37), NULL);
		int32_t L_3;
		L_3 = SystemInfo_get_operatingSystemFamily_mC8B13A7D2F34699EDDA4F7629F117C76F0C865FA(NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0298;
		}
	}
	{
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral01FE2A7BAF056155917298D04AE54B7D6AF27894, ((int32_t)10), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral1DF9EACB3FD057DF42A2784124CCE504D5860AEE, ((int32_t)11), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral1CD31FFC09BB731749BFAAC984D2EED8E22C771A, ((int32_t)12), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral7AADBCDB9D121BC9D88064E31E08A3186262CAE6, ((int32_t)13), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralE18A20FF89E2801DE5C0C60E05D569C3513C48C7, ((int32_t)15), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral9FA1FF57F726441CA277BF9734892B299CA3297B, ((int32_t)14), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral9FF3949A2EE199375C9E51BB6ACCD0AE243AF691, ((int32_t)10), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral70E962167414B98D1C47009CF2298022592E68D4, ((int32_t)11), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral7174BAC93C4533B5ACC05736AE4D0C900491A008, 6, NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralEA74ED324D4EC0A66FF57C32244629F3B15A2CCF, 7, NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralF1129AA23E2182336739DE1026CACAE451BACE5D, ((int32_t)22), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral4112C4C0070D77562F4AE5B1077F66F430FF4706, ((int32_t)23), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralF222CF93E01C3342431C7952E8BD62DEFC619783, ((int32_t)26), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral7BBDDC94A571A1FD7D1FE9C4E3062CB11564D926, ((int32_t)27), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral7EF39B884F9764078345103493B55121123B1B46, ((int32_t)34), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralAA7EB40717F1BA8A905AA5B827AAE03AF1D0F2D0, ((int32_t)35), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralD91C866DD696C68303515E6926044A10A2ADAB3C, ((int32_t)30), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral6458183EA8D5BC1AAE58A98C841058647CCC35DE, ((int32_t)31), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral3D3A00B527F2755AFFF36C8F4AC13A53B5DC81D3, ((int32_t)34), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralE3EADA58476D85227490ACED9D3239769769DFDC, ((int32_t)35), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralA8D3437438DB8A85C804DDB64E69721F1D275030, ((int32_t)26), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralA3955ADB3BC69ECFE423744D4F4F597294A20827, ((int32_t)27), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral28C03674125DA29250BA73594E6061FD480A3CB7, ((int32_t)22), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral34D4B5F20FD7AA47487EDE07001792463720D1CE, ((int32_t)23), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralFA1435556F32329DD212289449459CCFA67730F8, ((int32_t)44), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral13CDCE216B91792515C4C64C7FCF5B265C404257, ((int32_t)41), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralB8AA8F2673947FA36BB764D4DD75961AB3AF723E, ((int32_t)42), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral62F0048B45A8ADBC774F1B00911C9AA337E1F633, ((int32_t)43), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral13490EE15BBBA5055FAF4DFF43BAF8642B91BD99, ((int32_t)36), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral34F817DA4635C4C22DF5692FF51A196067483534, ((int32_t)37), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral3C3D97D6F00F5718D7008966DC8F93F9BB87FA51, 0, NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralB8E1418EB9CE2E5CF97CF8246D2776B9F1F33D67, 1, NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral5031FEC61137D005DAA2BFB10E1404651A112B0B, 4, NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral837B17505EC06BAC0E4AA984798E9DB32B9C3CA0, 5, NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral9C1E874DA059D22C91283C44117D602D9080875A, ((int32_t)39), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral877F6F7B61373508B1123D79708B393A9438C37E, ((int32_t)38), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral81AB3FCA888E7214C2733551168655ABA4D3C65A, ((int32_t)40), NULL);
		goto IL_03ec;
	}

IL_0298:
	{
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral0C9DC099BD4ECD04B696BF38FC02346103F2BC97, ((int32_t)10), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, ((int32_t)11), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral9FF3949A2EE199375C9E51BB6ACCD0AE243AF691, ((int32_t)12), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral70E962167414B98D1C47009CF2298022592E68D4, ((int32_t)13), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral7174BAC93C4533B5ACC05736AE4D0C900491A008, ((int32_t)15), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralEA74ED324D4EC0A66FF57C32244629F3B15A2CCF, ((int32_t)14), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral01FE2A7BAF056155917298D04AE54B7D6AF27894, ((int32_t)17), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral1DF9EACB3FD057DF42A2784124CCE504D5860AEE, ((int32_t)16), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralDBA1945CFAADC613DE5170FD5C21296CCFF83615, ((int32_t)15), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral3E5BBD622A1890626F72D09F11351B02F04CD245, ((int32_t)14), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralF222CF93E01C3342431C7952E8BD62DEFC619783, ((int32_t)32), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral7BBDDC94A571A1FD7D1FE9C4E3062CB11564D926, ((int32_t)33), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral7EF39B884F9764078345103493B55121123B1B46, ((int32_t)34), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralAA7EB40717F1BA8A905AA5B827AAE03AF1D0F2D0, ((int32_t)35), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralF1129AA23E2182336739DE1026CACAE451BACE5D, ((int32_t)28), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral4112C4C0070D77562F4AE5B1077F66F430FF4706, ((int32_t)29), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral3D5EAEDD29399C149223964BD7513C036E82B631, ((int32_t)39), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral1388D2C9310312FF15F8415A0A8F63A7EA461B41, ((int32_t)38), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral81AB3FCA888E7214C2733551168655ABA4D3C65A, ((int32_t)40), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral5031FEC61137D005DAA2BFB10E1404651A112B0B, ((int32_t)44), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralF25B95468DAA02EC9AF41A21C2F589D8847BC27F, ((int32_t)41), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralA314507B0573B983FD845620D28E0B2F951D0E10, ((int32_t)42), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralBA6BD45D12B4E9306BD7E0CC99FEC1DEEBFBBC58, ((int32_t)43), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral16D9C3063FF5F852963147CC12C5C552A5635796, ((int32_t)41), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteral0EF758EF1A06CA13329086B705ED12F47B9F606F, ((int32_t)42), NULL);
		TextEditor_MapKey_m911245BAA919A02A8FDFCC0998CB147A3EE0EC9B(_stringLiteralE7B9F94C0B0B71996D09AA98D20E270C100EAB93, ((int32_t)43), NULL);
	}

IL_03ec:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::DetectFocusChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_DetectFocusChange_mFE7D29EC9391792772129BD80FC236285218464B (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void UnityEngine.TextEditor::OnDetectFocusChange() */, __this);
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnDetectFocusChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_OnDetectFocusChange_m70E412EF53A051067D33711E70BE73C76CB97168 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		bool L_0 = __this->___m_HasFocus_6;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = __this->___controlID_1;
		int32_t L_2;
		L_2 = GUIUtility_get_keyboardControl_mB0FAC848390B7F163CD2EE0A911FADD5CAD70B1E(NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		TextEditor_OnLostFocus_mFDA430398601ABF5BBBF44D0A6CE969AFBED4FC9(__this, NULL);
	}

IL_0027:
	{
		bool L_4 = __this->___m_HasFocus_6;
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_5 = __this->___controlID_1;
		int32_t L_6;
		L_6 = GUIUtility_get_keyboardControl_mB0FAC848390B7F163CD2EE0A911FADD5CAD70B1E(NULL);
		G_B8_0 = ((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B8_0 = 0;
	}

IL_003f:
	{
		V_1 = (bool)G_B8_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		TextEditor_OnFocus_mCD739D81E0F74A3E68A0BB861A3A3BD87DDBEE0A(__this, NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnCursorIndexChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_OnCursorIndexChange_m9B9C472B0F62917E96E5E27F15A76C9E4E493012 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnSelectIndexChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_OnSelectIndexChange_m99E1BBDFC6398F47F3170A6A46C5428F292FEE21 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::ClampTextIndex(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_ClampTextIndex_m08BC2F0E9A0599EE71C0632C61187F3F3EAAF4B6 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_index;
		int32_t* L_1 = ___0_index;
		int32_t L_2 = *((int32_t*)L_1);
		String_t* L_3;
		L_3 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		int32_t L_5;
		L_5 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_2, 0, L_4, NULL);
		*((int32_t*)L_0) = (int32_t)L_5;
		return;
	}
}
// System.Void UnityEngine.TextEditor::EnsureValidCodePointIndex(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor_EnsureValidCodePointIndex_m9C20E36F766CF8DBD87A36606B1FAEED3BE42BB1 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t* L_0 = ___0_index;
		TextEditor_ClampTextIndex_m08BC2F0E9A0599EE71C0632C61187F3F3EAAF4B6(__this, L_0, NULL);
		int32_t* L_1 = ___0_index;
		int32_t L_2 = *((int32_t*)L_1);
		bool L_3;
		L_3 = TextEditor_IsValidCodePointIndex_m1D01E0B8AA575A60C985B9FC413ED3DDA4EE8097(__this, L_2, NULL);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		int32_t* L_5 = ___0_index;
		int32_t* L_6 = ___0_index;
		int32_t L_7 = *((int32_t*)L_6);
		int32_t L_8;
		L_8 = TextEditor_NextCodePointIndex_mF426772BB6B0CD7A3FC4042070C21902BF576B31(__this, L_7, NULL);
		*((int32_t*)L_5) = (int32_t)L_8;
	}

IL_0022:
	{
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::IsValidCodePointIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextEditor_IsValidCodePointIndex_m1D01E0B8AA575A60C985B9FC413ED3DDA4EE8097 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___0_index;
		String_t* L_2;
		L_2 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)L_3))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0051;
	}

IL_001e:
	{
		int32_t L_5 = ___0_index;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_6 = ___0_index;
		String_t* L_7;
		L_7 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		G_B8_0 = ((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
		goto IL_0032;
	}

IL_0031:
	{
		G_B8_0 = 1;
	}

IL_0032:
	{
		V_2 = (bool)G_B8_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0051;
	}

IL_003a:
	{
		String_t* L_10;
		L_10 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_11 = ___0_index;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Char_IsLowSurrogate_mEE95A617A89CEB99AADAB54E025087D56CAB1BAA(L_12, NULL);
		V_1 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		goto IL_0051;
	}

IL_0051:
	{
		bool L_14 = V_1;
		return L_14;
	}
}
// System.Int32 UnityEngine.TextEditor::PreviousCodePointIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_PreviousCodePointIndex_mFCCC1034ABF4773A7E1E121D14ACB948FCA116E0 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = ___0_index;
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = ___0_index;
		___0_index = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
	}

IL_000e:
	{
		goto IL_0015;
	}

IL_0010:
	{
		int32_t L_3 = ___0_index;
		___0_index = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
	}

IL_0015:
	{
		int32_t L_4 = ___0_index;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_5;
		L_5 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_6 = ___0_index;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Char_IsLowSurrogate_mEE95A617A89CEB99AADAB54E025087D56CAB1BAA(L_7, NULL);
		G_B7_0 = ((int32_t)(L_8));
		goto IL_002d;
	}

IL_002c:
	{
		G_B7_0 = 0;
	}

IL_002d:
	{
		V_1 = (bool)G_B7_0;
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_10 = ___0_index;
		V_2 = L_10;
		goto IL_0035;
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		return L_11;
	}
}
// System.Int32 UnityEngine.TextEditor::NextCodePointIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextEditor_NextCodePointIndex_mF426772BB6B0CD7A3FC4042070C21902BF576B31 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = ___0_index;
		String_t* L_1;
		L_1 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_4 = ___0_index;
		___0_index = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		goto IL_001f;
	}

IL_001a:
	{
		int32_t L_5 = ___0_index;
		___0_index = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001f:
	{
		int32_t L_6 = ___0_index;
		String_t* L_7;
		L_7 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_9;
		L_9 = TextEditor_get_text_mB5A19231EF7159855775CF3E9C5BC5346156E168(__this, NULL);
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Char_IsLowSurrogate_mEE95A617A89CEB99AADAB54E025087D56CAB1BAA(L_11, NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0041;
	}

IL_0040:
	{
		G_B7_0 = 0;
	}

IL_0041:
	{
		V_1 = (bool)G_B7_0;
		bool L_13 = V_1;
		if (L_13)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_14 = ___0_index;
		V_2 = L_14;
		goto IL_0049;
	}

IL_0049:
	{
		int32_t L_15 = V_2;
		return L_15;
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
// System.Void UnityEngine.ObjectGUIState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectGUIState__ctor_mA9AB2887ABAF5102164545D7F0CE59BCF05618B4 (ObjectGUIState_t7BE88DC8B9C7187A77D63BBCBE9DB7B674863C15* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0;
		L_0 = ObjectGUIState_Internal_Create_m22F3AED2A44D4D00B478C2626295D432F74383EA(NULL);
		__this->___m_Ptr_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.ObjectGUIState::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectGUIState_Dispose_m156DC13F33DEFB261C8B13EB98A1A3782D182DE8 (ObjectGUIState_t7BE88DC8B9C7187A77D63BBCBE9DB7B674863C15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectGUIState_Destroy_m316F4C75D0C8F18896A69BB9E39D90C0CDBE8726(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.ObjectGUIState::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectGUIState_Finalize_m10310B7E07DB5215C7845BF0F770B587D4F4C1B8 (ObjectGUIState_t7BE88DC8B9C7187A77D63BBCBE9DB7B674863C15* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			ObjectGUIState_Destroy_m316F4C75D0C8F18896A69BB9E39D90C0CDBE8726(__this, NULL);
			goto IL_0013;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.ObjectGUIState::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectGUIState_Destroy_m316F4C75D0C8F18896A69BB9E39D90C0CDBE8726 (ObjectGUIState_t7BE88DC8B9C7187A77D63BBCBE9DB7B674863C15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_4 = __this->___m_Ptr_0;
		ObjectGUIState_Internal_Destroy_m936A111D9F70932A3030FE851C9E3BD82FD1F425(L_4, NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___m_Ptr_0 = L_5;
	}

IL_002e:
	{
		return;
	}
}
// System.IntPtr UnityEngine.ObjectGUIState::Internal_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ObjectGUIState_Internal_Create_m22F3AED2A44D4D00B478C2626295D432F74383EA (const RuntimeMethod* method) 
{
	typedef intptr_t (*ObjectGUIState_Internal_Create_m22F3AED2A44D4D00B478C2626295D432F74383EA_ftn) ();
	static ObjectGUIState_Internal_Create_m22F3AED2A44D4D00B478C2626295D432F74383EA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ObjectGUIState_Internal_Create_m22F3AED2A44D4D00B478C2626295D432F74383EA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ObjectGUIState::Internal_Create()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.ObjectGUIState::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectGUIState_Internal_Destroy_m936A111D9F70932A3030FE851C9E3BD82FD1F425 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef void (*ObjectGUIState_Internal_Destroy_m936A111D9F70932A3030FE851C9E3BD82FD1F425_ftn) (intptr_t);
	static ObjectGUIState_Internal_Destroy_m936A111D9F70932A3030FE851C9E3BD82FD1F425_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ObjectGUIState_Internal_Destroy_m936A111D9F70932A3030FE851C9E3BD82FD1F425_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ObjectGUIState::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___0_ptr);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Event
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke(const Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB& unmarshaled, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke_back(const Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_pinvoke& marshaled, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke_cleanup(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Event
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_com(const Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB& unmarshaled, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_com_back(const Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_com& marshaled, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_com_cleanup(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m14342F32F62A39A8B8032286E2DCC07FEF72BFF4 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0;
		L_0 = Event_Internal_Create_m38519A1960401042CAB57086F9E038116B8D3EAF(0, NULL);
		__this->___m_Ptr_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Event::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_mA5E77C0596952812A96703685523819CF50D71A0 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, int32_t ___0_displayIndex, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_displayIndex;
		intptr_t L_1;
		L_1 = Event_Internal_Create_m38519A1960401042CAB57086F9E038116B8D3EAF(L_0, NULL);
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
// System.Void UnityEngine.Event::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Finalize_m0882CB2E5E0C20C5C9669518C4DB5D95F840DAB7 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				intptr_t L_0 = __this->___m_Ptr_0;
				intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_2;
				L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
				V_0 = L_2;
				bool L_3 = V_0;
				if (!L_3)
				{
					goto IL_002f_1;
				}
			}
			{
				intptr_t L_4 = __this->___m_Ptr_0;
				Event_Internal_Destroy_m25BA236C0C66CB87A89B81336D7BFB55917127BB(L_4, NULL);
				intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				__this->___m_Ptr_0 = L_5;
			}

IL_002f_1:
			{
				goto IL_0039;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		return;
	}
}
// System.Void UnityEngine.Event::CopyFrom(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_CopyFrom_m2F9B9704FBE156C5D58FF630F7968568C19821F5 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___0_e, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_0 = ___0_e;
		NullCheck(L_0);
		intptr_t L_1 = L_0->___m_Ptr_0;
		intptr_t L_2 = __this->___m_Ptr_0;
		bool L_3;
		L_3 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_5 = ___0_e;
		NullCheck(L_5);
		intptr_t L_6 = L_5->___m_Ptr_0;
		Event_CopyFromPtr_mC78295EF5861558EC93D3F8691E2A8B50DE84E29(__this, L_6, NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Boolean UnityEngine.Event::get_shift()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_shift_mB8409DA839B09DC6137848E131A6DBE70BB9E70A (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(__this, NULL);
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Event::get_control()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_control_m1E363A7ABA4F2E8CF41C661A48D53D85D635D320 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(__this, NULL);
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&2))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Event::get_alt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_alt_m57F7F5C1F5FFCE43EFA6889F83CFA42DCA18A74B (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(__this, NULL);
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&4))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Event::get_command()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_command_m202DE2CB0BE0AAB5CDFEC9DA1BBD3B51E8497547 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(__this, NULL);
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&8))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Event UnityEngine.Event::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* V_0 = NULL;
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_0 = ((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_Current_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Event::set_current(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_current_mDB5FE546AFA00DDF6CC23C106CE076EBEF36BCB3 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* G_B2_0 = NULL;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* G_B1_0 = NULL;
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_0 = ___0_value;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_2 = ((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_MasterEvent_2;
		G_B2_0 = L_2;
	}

IL_000b:
	{
		((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_Current_1 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_Current_1), (void*)G_B2_0);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_3 = ((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_Current_1;
		NullCheck(L_3);
		intptr_t L_4 = L_3->___m_Ptr_0;
		Event_Internal_SetNativeEvent_mF0C015181EABFE56E2C90CD5C6DCA410C2C42746(L_4, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Event::get_isKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_isKey_mDA8FE1CC5E305BAF181E86A727173C9BE9A1B754 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)5))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Boolean UnityEngine.Event::get_isMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_isMouse_mBD11F4FE2996DFAD2648C8A9648E301EDDA51D7A (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B8_0 = 0;
	{
		int32_t L_0;
		L_0 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)16))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)20))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_7 = V_0;
		G_B8_0 = ((((int32_t)L_7) == ((int32_t)((int32_t)21)))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B8_0 = 1;
	}

IL_0029:
	{
		V_1 = (bool)G_B8_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean UnityEngine.Event::get_isDirectManipulationDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_isDirectManipulationDevice_m9A72FB2DF7803E189857D24A65FB568B17533ED0 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Event_get_pointerType_mFFB3FB3E83412151A66FEC136FA00EBDB563B94B(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1;
		L_1 = Event_get_pointerType_mFFB3FB3E83412151A66FEC136FA00EBDB563B94B(__this, NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Event UnityEngine.Event::KeyboardEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* Event_KeyboardEvent_m957733139998C86C7ECA28BA50863EB88B71418E (String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010AFEFEB861AC9FACA8EBF9C6C9CC1C80C4A78A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0150AFA3D0411ED67D7C3CBAC0A989FC1A7CEAE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01637B662C860A4FEA1F5B57B9E4049BCA27A92A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral028D7034AFF25D3F9A597A5740013E38DA19D317);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C9DC099BD4ECD04B696BF38FC02346103F2BC97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral102739C5104D902E458722250A3B39AC156B601C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1850F725FAEC7FF6559CFDD75BF86B7B6458F564);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E53EA12D943C14376715D21DAB74E4D73C5751);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25F5EF17AC725A91FE3F3CE895C16ED6DD9B3499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26699342C90E4DB263790E30D55D90081254CB6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2883CBF3427C9821C117DF0C36BE40EE23EC5A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31B33F7B74029BC575D705EC4DF0CD1A761DB7F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36967F33A1482179FE45CD9CCC3AE6241AA43F85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral406039EC8806862DC33A11277467F97951546F04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral544D3EEC62A9634856AD5B296AC23A5284C8530C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5514D8BE9E761133A77457A12D3915CB3E07E5AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral623434E618E34EEBE273A4DC2D0558449A41FDA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A29B894463C559DBFBBD12619BBEF4656AFD847);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AA217DF0D68B58AB3C3253326CA9B07CE4EC7C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral710CEFF5A6D94EED332EF2BD41342B8B16B45293);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DB9363E02344639F4087A15C3DC6D9B47047259);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87B3094029FCCD239A5B4D34C2785A747B721D3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90859DEB6AC59506D68B2F923373ACE0AD6D837C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92A724EB1B2F6C69B890D3B5F5FC04BD603592F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral942648654A524F6E984CCA6E5751578BD0E8540E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral992995A68967F0F220E6B79219D8B8AFD2B64A56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C78EED60250BE323A3D97A9C62B6E711125C4C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA545894C0ECE6054328A1F11A0ABB56AEE952619);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9803D8785C4C6903058FDDDAD15E80DA21A41ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADEB4AA857DAD985FCA140205A88361411529CC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC23AFB60D910768AF949135D275BBAE168A46894);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4FD617CB9624AE5C125D44F10E5B7C346F2E117);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEE3B7C6968135436FA4067DED4ED3ECBBC9B8B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2CCD613C9FC464A9A626816048CDFE16289EF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A68E5474204A05B00919D35DB3E888E3958496);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE54980410FFB1F28C7512F29E4518058DA986F3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A9ADA05CBDBD11A3FDD0576FCE5B1CDA30E940);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE84F2B479265FAD93BE81E77636775B4B5E83831);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBB0134202814DB55DAD06EF2F379EECFE656772);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED5169E4CC70ACFAD5449D117F0423892FBF0C89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0C9BC936D0312C0E117B0CDF6A9FB6F2FE79D1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA62FBFE4E50CD6BF703F0C9569D92C185108758);
		s_Il2CppMethodInitialized = true;
	}
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* V_5 = NULL;
	bool V_6 = false;
	Il2CppChar V_7 = 0x0;
	Il2CppChar V_8 = 0x0;
	bool V_9 = false;
	String_t* V_10 = NULL;
	String_t* V_11 = NULL;
	uint32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_0 = (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*)il2cpp_codegen_object_new(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Event__ctor_mA5E77C0596952812A96703685523819CF50D71A0(L_0, 0, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_1 = L_0;
		NullCheck(L_1);
		Event_set_type_m16D35A8AF665F4A73A447F9EE7CA36963F34FEC2(L_1, 4, NULL);
		V_0 = L_1;
		String_t* L_2 = ___0_key;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		V_4 = L_3;
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_5 = V_0;
		V_5 = L_5;
		goto IL_0efd;
	}

IL_0024:
	{
		V_1 = 0;
		V_2 = (bool)0;
	}

IL_0028:
	{
		V_2 = (bool)1;
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_key;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		V_6 = (bool)((((int32_t)((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_6;
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_00d9;
	}

IL_0045:
	{
		String_t* L_10 = ___0_key;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		V_8 = L_12;
		Il2CppChar L_13 = V_8;
		V_7 = L_13;
		Il2CppChar L_14 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_14, ((int32_t)35))))
		{
			case 0:
			{
				goto IL_00b5;
			}
			case 1:
			{
				goto IL_00ca;
			}
			case 2:
			{
				goto IL_00a0;
			}
			case 3:
			{
				goto IL_0076;
			}
		}
	}
	{
		goto IL_006e;
	}

IL_006e:
	{
		Il2CppChar L_15 = V_7;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)94))))
		{
			goto IL_008b;
		}
	}
	{
		goto IL_00ca;
	}

IL_0076:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_16 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_17, NULL);
		NullCheck(L_17);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_17, ((int32_t)((int32_t)L_18|4)), NULL);
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		goto IL_00ce;
	}

IL_008b:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_20 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_21 = L_20;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_21, NULL);
		NullCheck(L_21);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_21, ((int32_t)((int32_t)L_22|2)), NULL);
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		goto IL_00ce;
	}

IL_00a0:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_24 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_25 = L_24;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_25, NULL);
		NullCheck(L_25);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_25, ((int32_t)((int32_t)L_26|8)), NULL);
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		goto IL_00ce;
	}

IL_00b5:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_28 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_29 = L_28;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_29, NULL);
		NullCheck(L_29);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_29, ((int32_t)((int32_t)L_30|1)), NULL);
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		goto IL_00ce;
	}

IL_00ca:
	{
		V_2 = (bool)0;
		goto IL_00ce;
	}

IL_00ce:
	{
		bool L_32 = V_2;
		V_9 = L_32;
		bool L_33 = V_9;
		if (L_33)
		{
			goto IL_0028;
		}
	}

IL_00d9:
	{
		String_t* L_34 = ___0_key;
		int32_t L_35 = V_1;
		String_t* L_36 = ___0_key;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		int32_t L_38 = V_1;
		NullCheck(L_34);
		String_t* L_39;
		L_39 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_37, L_38)), NULL);
		NullCheck(L_39);
		String_t* L_40;
		L_40 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_39, NULL);
		V_3 = L_40;
		String_t* L_41 = V_3;
		V_11 = L_41;
		String_t* L_42 = V_11;
		V_10 = L_42;
		String_t* L_43 = V_10;
		uint32_t L_44;
		L_44 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3791FADF6D0284BCC1AF6156A077038C2AA23055(L_43, NULL);
		V_12 = L_44;
		uint32_t L_45 = V_12;
		if ((!(((uint32_t)L_45) <= ((uint32_t)((int32_t)2049299002)))))
		{
			goto IL_02b4;
		}
	}
	{
		uint32_t L_46 = V_12;
		if ((!(((uint32_t)L_46) <= ((uint32_t)((int32_t)1035581717)))))
		{
			goto IL_01e5;
		}
	}
	{
		uint32_t L_47 = V_12;
		if ((!(((uint32_t)L_47) <= ((uint32_t)((int32_t)388133425)))))
		{
			goto IL_0182;
		}
	}
	{
		uint32_t L_48 = V_12;
		if ((!(((uint32_t)L_48) <= ((uint32_t)((int32_t)306900080)))))
		{
			goto IL_0155;
		}
	}
	{
		uint32_t L_49 = V_12;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)203579616))))
		{
			goto IL_07d2;
		}
	}
	{
		goto IL_0136;
	}

IL_0136:
	{
		uint32_t L_50 = V_12;
		if ((((int32_t)L_50) == ((int32_t)((int32_t)220357235))))
		{
			goto IL_07bc;
		}
	}
	{
		goto IL_0144;
	}

IL_0144:
	{
		uint32_t L_51 = V_12;
		if ((((int32_t)L_51) == ((int32_t)((int32_t)306900080))))
		{
			goto IL_061a;
		}
	}
	{
		goto IL_0e67;
	}

IL_0155:
	{
		uint32_t L_52 = V_12;
		if ((((int32_t)L_52) == ((int32_t)((int32_t)337800568))))
		{
			goto IL_0722;
		}
	}
	{
		goto IL_0163;
	}

IL_0163:
	{
		uint32_t L_53 = V_12;
		if ((((int32_t)L_53) == ((int32_t)((int32_t)371355806))))
		{
			goto IL_074e;
		}
	}
	{
		goto IL_0171;
	}

IL_0171:
	{
		uint32_t L_54 = V_12;
		if ((((int32_t)L_54) == ((int32_t)((int32_t)388133425))))
		{
			goto IL_0738;
		}
	}
	{
		goto IL_0e67;
	}

IL_0182:
	{
		uint32_t L_55 = V_12;
		if ((!(((uint32_t)L_55) <= ((uint32_t)((int32_t)438466282)))))
		{
			goto IL_01b8;
		}
	}
	{
		uint32_t L_56 = V_12;
		if ((((int32_t)L_56) == ((int32_t)((int32_t)404911044))))
		{
			goto IL_077a;
		}
	}
	{
		goto IL_0199;
	}

IL_0199:
	{
		uint32_t L_57 = V_12;
		if ((((int32_t)L_57) == ((int32_t)((int32_t)421688663))))
		{
			goto IL_0764;
		}
	}
	{
		goto IL_01a7;
	}

IL_01a7:
	{
		uint32_t L_58 = V_12;
		if ((((int32_t)L_58) == ((int32_t)((int32_t)438466282))))
		{
			goto IL_07a6;
		}
	}
	{
		goto IL_0e67;
	}

IL_01b8:
	{
		uint32_t L_59 = V_12;
		if ((((int32_t)L_59) == ((int32_t)((int32_t)455243901))))
		{
			goto IL_0790;
		}
	}
	{
		goto IL_01c6;
	}

IL_01c6:
	{
		uint32_t L_60 = V_12;
		if ((((int32_t)L_60) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_0898;
		}
	}
	{
		goto IL_01d4;
	}

IL_01d4:
	{
		uint32_t L_61 = V_12;
		if ((((int32_t)L_61) == ((int32_t)((int32_t)1035581717))))
		{
			goto IL_0604;
		}
	}
	{
		goto IL_0e67;
	}

IL_01e5:
	{
		uint32_t L_62 = V_12;
		if ((!(((uint32_t)L_62) <= ((uint32_t)((int32_t)1980614408)))))
		{
			goto IL_0251;
		}
	}
	{
		uint32_t L_63 = V_12;
		if ((!(((uint32_t)L_63) <= ((uint32_t)((int32_t)1193063839)))))
		{
			goto IL_0224;
		}
	}
	{
		uint32_t L_64 = V_12;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)1113118030))))
		{
			goto IL_05c2;
		}
	}
	{
		goto IL_0205;
	}

IL_0205:
	{
		uint32_t L_65 = V_12;
		if ((((int32_t)L_65) == ((int32_t)((int32_t)1128467232))))
		{
			goto IL_05ee;
		}
	}
	{
		goto IL_0213;
	}

IL_0213:
	{
		uint32_t L_66 = V_12;
		if ((((int32_t)L_66) == ((int32_t)((int32_t)1193063839))))
		{
			goto IL_069e;
		}
	}
	{
		goto IL_0e67;
	}

IL_0224:
	{
		uint32_t L_67 = V_12;
		if ((((int32_t)L_67) == ((int32_t)((int32_t)1740784714))))
		{
			goto IL_06f6;
		}
	}
	{
		goto IL_0232;
	}

IL_0232:
	{
		uint32_t L_68 = V_12;
		if ((((int32_t)L_68) == ((int32_t)((int32_t)1787721130))))
		{
			goto IL_0672;
		}
	}
	{
		goto IL_0240;
	}

IL_0240:
	{
		uint32_t L_69 = V_12;
		if ((((int32_t)L_69) == ((int32_t)((int32_t)1980614408))))
		{
			goto IL_05ac;
		}
	}
	{
		goto IL_0e67;
	}

IL_0251:
	{
		uint32_t L_70 = V_12;
		if ((!(((uint32_t)L_70) <= ((uint32_t)((int32_t)1981894336)))))
		{
			goto IL_0287;
		}
	}
	{
		uint32_t L_71 = V_12;
		if ((((int32_t)L_71) == ((int32_t)((int32_t)1980761503))))
		{
			goto IL_04a4;
		}
	}
	{
		goto IL_0268;
	}

IL_0268:
	{
		uint32_t L_72 = V_12;
		if ((((int32_t)L_72) == ((int32_t)((int32_t)1981202788))))
		{
			goto IL_048e;
		}
	}
	{
		goto IL_0276;
	}

IL_0276:
	{
		uint32_t L_73 = V_12;
		if ((((int32_t)L_73) == ((int32_t)((int32_t)1981894336))))
		{
			goto IL_04e6;
		}
	}
	{
		goto IL_0e67;
	}

IL_0287:
	{
		uint32_t L_74 = V_12;
		if ((((int32_t)L_74) == ((int32_t)((int32_t)2028154341))))
		{
			goto IL_0630;
		}
	}
	{
		goto IL_0295;
	}

IL_0295:
	{
		uint32_t L_75 = V_12;
		if ((((int32_t)L_75) == ((int32_t)((int32_t)2048857717))))
		{
			goto IL_04d0;
		}
	}
	{
		goto IL_02a3;
	}

IL_02a3:
	{
		uint32_t L_76 = V_12;
		if ((((int32_t)L_76) == ((int32_t)((int32_t)2049299002))))
		{
			goto IL_0596;
		}
	}
	{
		goto IL_0e67;
	}

IL_02b4:
	{
		uint32_t L_77 = V_12;
		if ((!(((uint32_t)L_77) <= ((uint32_t)((int32_t)-1173033511)))))
		{
			goto IL_038f;
		}
	}
	{
		uint32_t L_78 = V_12;
		if ((!(((uint32_t)L_78) <= ((uint32_t)((int32_t)-1241276820)))))
		{
			goto IL_032c;
		}
	}
	{
		uint32_t L_79 = V_12;
		if ((!(((uint32_t)L_79) <= ((uint32_t)((int32_t)-2059638740)))))
		{
			goto IL_02ff;
		}
	}
	{
		uint32_t L_80 = V_12;
		if ((((int32_t)L_80) == ((int32_t)((int32_t)2049990550))))
		{
			goto IL_056a;
		}
	}
	{
		goto IL_02e0;
	}

IL_02e0:
	{
		uint32_t L_81 = V_12;
		if ((((int32_t)L_81) == ((int32_t)((int32_t)2130866490))))
		{
			goto IL_06ca;
		}
	}
	{
		goto IL_02ee;
	}

IL_02ee:
	{
		uint32_t L_82 = V_12;
		if ((((int32_t)L_82) == ((int32_t)((int32_t)-2059638740))))
		{
			goto IL_06e0;
		}
	}
	{
		goto IL_0e67;
	}

IL_02ff:
	{
		uint32_t L_83 = V_12;
		if ((((int32_t)L_83) == ((int32_t)((int32_t)-2047985729))))
		{
			goto IL_0882;
		}
	}
	{
		goto IL_030d;
	}

IL_030d:
	{
		uint32_t L_84 = V_12;
		if ((((int32_t)L_84) == ((int32_t)((int32_t)-1728631220))))
		{
			goto IL_070c;
		}
	}
	{
		goto IL_031b;
	}

IL_031b:
	{
		uint32_t L_85 = V_12;
		if ((((int32_t)L_85) == ((int32_t)((int32_t)-1241276820))))
		{
			goto IL_053e;
		}
	}
	{
		goto IL_0e67;
	}

IL_032c:
	{
		uint32_t L_86 = V_12;
		if ((!(((uint32_t)L_86) <= ((uint32_t)((int32_t)-1238025416)))))
		{
			goto IL_0362;
		}
	}
	{
		uint32_t L_87 = V_12;
		if ((((int32_t)L_87) == ((int32_t)((int32_t)-1239849797))))
		{
			goto IL_04fc;
		}
	}
	{
		goto IL_0343;
	}

IL_0343:
	{
		uint32_t L_88 = V_12;
		if ((((int32_t)L_88) == ((int32_t)((int32_t)-1238569869))))
		{
			goto IL_0554;
		}
	}
	{
		goto IL_0351;
	}

IL_0351:
	{
		uint32_t L_89 = V_12;
		if ((((int32_t)L_89) == ((int32_t)((int32_t)-1238025416))))
		{
			goto IL_0580;
		}
	}
	{
		goto IL_0e67;
	}

IL_0362:
	{
		uint32_t L_90 = V_12;
		if ((((int32_t)L_90) == ((int32_t)((int32_t)-1174313439))))
		{
			goto IL_0528;
		}
	}
	{
		goto IL_0370;
	}

IL_0370:
	{
		uint32_t L_91 = V_12;
		if ((((int32_t)L_91) == ((int32_t)((int32_t)-1173180606))))
		{
			goto IL_04ba;
		}
	}
	{
		goto IL_037e;
	}

IL_037e:
	{
		uint32_t L_92 = V_12;
		if ((((int32_t)L_92) == ((int32_t)((int32_t)-1173033511))))
		{
			goto IL_0478;
		}
	}
	{
		goto IL_0e67;
	}

IL_038f:
	{
		uint32_t L_93 = V_12;
		if ((!(((uint32_t)L_93) <= ((uint32_t)((int32_t)-97384360)))))
		{
			goto IL_03fb;
		}
	}
	{
		uint32_t L_94 = V_12;
		if ((!(((uint32_t)L_94) <= ((uint32_t)((int32_t)-758594930)))))
		{
			goto IL_03ce;
		}
	}
	{
		uint32_t L_95 = V_12;
		if ((((int32_t)L_95) == ((int32_t)((int32_t)-1172592226))))
		{
			goto IL_0512;
		}
	}
	{
		goto IL_03af;
	}

IL_03af:
	{
		uint32_t L_96 = V_12;
		if ((((int32_t)L_96) == ((int32_t)((int32_t)-962357720))))
		{
			goto IL_0646;
		}
	}
	{
		goto IL_03bd;
	}

IL_03bd:
	{
		uint32_t L_97 = V_12;
		if ((((int32_t)L_97) == ((int32_t)((int32_t)-758594930))))
		{
			goto IL_065c;
		}
	}
	{
		goto IL_0e67;
	}

IL_03ce:
	{
		uint32_t L_98 = V_12;
		if ((((int32_t)L_98) == ((int32_t)((int32_t)-388824155))))
		{
			goto IL_0688;
		}
	}
	{
		goto IL_03dc;
	}

IL_03dc:
	{
		uint32_t L_99 = V_12;
		if ((((int32_t)L_99) == ((int32_t)((int32_t)-310534382))))
		{
			goto IL_086c;
		}
	}
	{
		goto IL_03ea;
	}

IL_03ea:
	{
		uint32_t L_100 = V_12;
		if ((((int32_t)L_100) == ((int32_t)((int32_t)-97384360))))
		{
			goto IL_07e8;
		}
	}
	{
		goto IL_0e67;
	}

IL_03fb:
	{
		uint32_t L_101 = V_12;
		if ((!(((uint32_t)L_101) <= ((uint32_t)((int32_t)-67591677)))))
		{
			goto IL_0431;
		}
	}
	{
		uint32_t L_102 = V_12;
		if ((((int32_t)L_102) == ((int32_t)((int32_t)-81952764))))
		{
			goto IL_06b4;
		}
	}
	{
		goto IL_0412;
	}

IL_0412:
	{
		uint32_t L_103 = V_12;
		if ((((int32_t)L_103) == ((int32_t)((int32_t)-80606741))))
		{
			goto IL_07fe;
		}
	}
	{
		goto IL_0420;
	}

IL_0420:
	{
		uint32_t L_104 = V_12;
		if ((((int32_t)L_104) == ((int32_t)((int32_t)-67591677))))
		{
			goto IL_05d8;
		}
	}
	{
		goto IL_0e67;
	}

IL_0431:
	{
		uint32_t L_105 = V_12;
		if ((!(((uint32_t)L_105) <= ((uint32_t)((int32_t)-47051503)))))
		{
			goto IL_0459;
		}
	}
	{
		uint32_t L_106 = V_12;
		if ((((int32_t)L_106) == ((int32_t)((int32_t)-63829122))))
		{
			goto IL_0814;
		}
	}
	{
		goto IL_0448;
	}

IL_0448:
	{
		uint32_t L_107 = V_12;
		if ((((int32_t)L_107) == ((int32_t)((int32_t)-47051503))))
		{
			goto IL_082a;
		}
	}
	{
		goto IL_0e67;
	}

IL_0459:
	{
		uint32_t L_108 = V_12;
		if ((((int32_t)L_108) == ((int32_t)((int32_t)-30273884))))
		{
			goto IL_0840;
		}
	}
	{
		goto IL_0467;
	}

IL_0467:
	{
		uint32_t L_109 = V_12;
		if ((((int32_t)L_109) == ((int32_t)((int32_t)-13496265))))
		{
			goto IL_0856;
		}
	}
	{
		goto IL_0e67;
	}

IL_0478:
	{
		String_t* L_110 = V_10;
		bool L_111;
		L_111 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_110, _stringLiteralF0C9BC936D0312C0E117B0CDF6A9FB6F2FE79D1B, NULL);
		if (L_111)
		{
			goto IL_08ae;
		}
	}
	{
		goto IL_0e67;
	}

IL_048e:
	{
		String_t* L_112 = V_10;
		bool L_113;
		L_113 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_112, _stringLiteral6AA217DF0D68B58AB3C3253326CA9B07CE4EC7C5, NULL);
		if (L_113)
		{
			goto IL_08c8;
		}
	}
	{
		goto IL_0e67;
	}

IL_04a4:
	{
		String_t* L_114 = V_10;
		bool L_115;
		L_115 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_114, _stringLiteralEBB0134202814DB55DAD06EF2F379EECFE656772, NULL);
		if (L_115)
		{
			goto IL_08e2;
		}
	}
	{
		goto IL_0e67;
	}

IL_04ba:
	{
		String_t* L_116 = V_10;
		bool L_117;
		L_117 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_116, _stringLiteral102739C5104D902E458722250A3B39AC156B601C, NULL);
		if (L_117)
		{
			goto IL_08fc;
		}
	}
	{
		goto IL_0e67;
	}

IL_04d0:
	{
		String_t* L_118 = V_10;
		bool L_119;
		L_119 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_118, _stringLiteral7DB9363E02344639F4087A15C3DC6D9B47047259, NULL);
		if (L_119)
		{
			goto IL_0916;
		}
	}
	{
		goto IL_0e67;
	}

IL_04e6:
	{
		String_t* L_120 = V_10;
		bool L_121;
		L_121 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_120, _stringLiteral010AFEFEB861AC9FACA8EBF9C6C9CC1C80C4A78A, NULL);
		if (L_121)
		{
			goto IL_0930;
		}
	}
	{
		goto IL_0e67;
	}

IL_04fc:
	{
		String_t* L_122 = V_10;
		bool L_123;
		L_123 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_122, _stringLiteralE2CCD613C9FC464A9A626816048CDFE16289EF5A, NULL);
		if (L_123)
		{
			goto IL_094a;
		}
	}
	{
		goto IL_0e67;
	}

IL_0512:
	{
		String_t* L_124 = V_10;
		bool L_125;
		L_125 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_124, _stringLiteralD4FD617CB9624AE5C125D44F10E5B7C346F2E117, NULL);
		if (L_125)
		{
			goto IL_0964;
		}
	}
	{
		goto IL_0e67;
	}

IL_0528:
	{
		String_t* L_126 = V_10;
		bool L_127;
		L_127 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_126, _stringLiteral26699342C90E4DB263790E30D55D90081254CB6E, NULL);
		if (L_127)
		{
			goto IL_097e;
		}
	}
	{
		goto IL_0e67;
	}

IL_053e:
	{
		String_t* L_128 = V_10;
		bool L_129;
		L_129 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_128, _stringLiteralA545894C0ECE6054328A1F11A0ABB56AEE952619, NULL);
		if (L_129)
		{
			goto IL_0998;
		}
	}
	{
		goto IL_0e67;
	}

IL_0554:
	{
		String_t* L_130 = V_10;
		bool L_131;
		L_131 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_130, _stringLiteral0150AFA3D0411ED67D7C3CBAC0A989FC1A7CEAE3, NULL);
		if (L_131)
		{
			goto IL_09b2;
		}
	}
	{
		goto IL_0e67;
	}

IL_056a:
	{
		String_t* L_132 = V_10;
		bool L_133;
		L_133 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_132, _stringLiteral31B33F7B74029BC575D705EC4DF0CD1A761DB7F9, NULL);
		if (L_133)
		{
			goto IL_09cc;
		}
	}
	{
		goto IL_0e67;
	}

IL_0580:
	{
		String_t* L_134 = V_10;
		bool L_135;
		L_135 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_134, _stringLiteral1850F725FAEC7FF6559CFDD75BF86B7B6458F564, NULL);
		if (L_135)
		{
			goto IL_09e6;
		}
	}
	{
		goto IL_0e67;
	}

IL_0596:
	{
		String_t* L_136 = V_10;
		bool L_137;
		L_137 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_136, _stringLiteral623434E618E34EEBE273A4DC2D0558449A41FDA6, NULL);
		if (L_137)
		{
			goto IL_0a00;
		}
	}
	{
		goto IL_0e67;
	}

IL_05ac:
	{
		String_t* L_138 = V_10;
		bool L_139;
		L_139 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_138, _stringLiteral6A29B894463C559DBFBBD12619BBEF4656AFD847, NULL);
		if (L_139)
		{
			goto IL_0a1a;
		}
	}
	{
		goto IL_0e67;
	}

IL_05c2:
	{
		String_t* L_140 = V_10;
		bool L_141;
		L_141 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_140, _stringLiteralADEB4AA857DAD985FCA140205A88361411529CC4, NULL);
		if (L_141)
		{
			goto IL_0a34;
		}
	}
	{
		goto IL_0e67;
	}

IL_05d8:
	{
		String_t* L_142 = V_10;
		bool L_143;
		L_143 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_142, _stringLiteral2883CBF3427C9821C117DF0C36BE40EE23EC5A70, NULL);
		if (L_143)
		{
			goto IL_0a4e;
		}
	}
	{
		goto IL_0e67;
	}

IL_05ee:
	{
		String_t* L_144 = V_10;
		bool L_145;
		L_145 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_144, _stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305, NULL);
		if (L_145)
		{
			goto IL_0a68;
		}
	}
	{
		goto IL_0e67;
	}

IL_0604:
	{
		String_t* L_146 = V_10;
		bool L_147;
		L_147 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_146, _stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4, NULL);
		if (L_147)
		{
			goto IL_0a89;
		}
	}
	{
		goto IL_0e67;
	}

IL_061a:
	{
		String_t* L_148 = V_10;
		bool L_149;
		L_149 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_148, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, NULL);
		if (L_149)
		{
			goto IL_0aaa;
		}
	}
	{
		goto IL_0e67;
	}

IL_0630:
	{
		String_t* L_150 = V_10;
		bool L_151;
		L_151 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_150, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, NULL);
		if (L_151)
		{
			goto IL_0acb;
		}
	}
	{
		goto IL_0e67;
	}

IL_0646:
	{
		String_t* L_152 = V_10;
		bool L_153;
		L_153 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_152, _stringLiteral992995A68967F0F220E6B79219D8B8AFD2B64A56, NULL);
		if (L_153)
		{
			goto IL_0aec;
		}
	}
	{
		goto IL_0e67;
	}

IL_065c:
	{
		String_t* L_154 = V_10;
		bool L_155;
		L_155 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_154, _stringLiteral0C9DC099BD4ECD04B696BF38FC02346103F2BC97, NULL);
		if (L_155)
		{
			goto IL_0b0d;
		}
	}
	{
		goto IL_0e67;
	}

IL_0672:
	{
		String_t* L_156 = V_10;
		bool L_157;
		L_157 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_156, _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, NULL);
		if (L_157)
		{
			goto IL_0b2e;
		}
	}
	{
		goto IL_0e67;
	}

IL_0688:
	{
		String_t* L_158 = V_10;
		bool L_159;
		L_159 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_158, _stringLiteralE3A68E5474204A05B00919D35DB3E888E3958496, NULL);
		if (L_159)
		{
			goto IL_0b4f;
		}
	}
	{
		goto IL_0e67;
	}

IL_069e:
	{
		String_t* L_160 = V_10;
		bool L_161;
		L_161 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_160, _stringLiteralDEE3B7C6968135436FA4067DED4ED3ECBBC9B8B9, NULL);
		if (L_161)
		{
			goto IL_0b70;
		}
	}
	{
		goto IL_0e67;
	}

IL_06b4:
	{
		String_t* L_162 = V_10;
		bool L_163;
		L_163 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_162, _stringLiteralA9803D8785C4C6903058FDDDAD15E80DA21A41ED, NULL);
		if (L_163)
		{
			goto IL_0b91;
		}
	}
	{
		goto IL_0e67;
	}

IL_06ca:
	{
		String_t* L_164 = V_10;
		bool L_165;
		L_165 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_164, _stringLiteral90859DEB6AC59506D68B2F923373ACE0AD6D837C, NULL);
		if (L_165)
		{
			goto IL_0bb2;
		}
	}
	{
		goto IL_0e67;
	}

IL_06e0:
	{
		String_t* L_166 = V_10;
		bool L_167;
		L_167 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_166, _stringLiteral710CEFF5A6D94EED332EF2BD41342B8B16B45293, NULL);
		if (L_167)
		{
			goto IL_0bd3;
		}
	}
	{
		goto IL_0e67;
	}

IL_06f6:
	{
		String_t* L_168 = V_10;
		bool L_169;
		L_169 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_168, _stringLiteral028D7034AFF25D3F9A597A5740013E38DA19D317, NULL);
		if (L_169)
		{
			goto IL_0bf0;
		}
	}
	{
		goto IL_0e67;
	}

IL_070c:
	{
		String_t* L_170 = V_10;
		bool L_171;
		L_171 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_170, _stringLiteral87B3094029FCCD239A5B4D34C2785A747B721D3E, NULL);
		if (L_171)
		{
			goto IL_0c0e;
		}
	}
	{
		goto IL_0e67;
	}

IL_0722:
	{
		String_t* L_172 = V_10;
		bool L_173;
		L_173 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_172, _stringLiteral544D3EEC62A9634856AD5B296AC23A5284C8530C, NULL);
		if (L_173)
		{
			goto IL_0c1c;
		}
	}
	{
		goto IL_0e67;
	}

IL_0738:
	{
		String_t* L_174 = V_10;
		bool L_175;
		L_175 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_174, _stringLiteral36967F33A1482179FE45CD9CCC3AE6241AA43F85, NULL);
		if (L_175)
		{
			goto IL_0c3d;
		}
	}
	{
		goto IL_0e67;
	}

IL_074e:
	{
		String_t* L_176 = V_10;
		bool L_177;
		L_177 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_176, _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC, NULL);
		if (L_177)
		{
			goto IL_0c5e;
		}
	}
	{
		goto IL_0e67;
	}

IL_0764:
	{
		String_t* L_178 = V_10;
		bool L_179;
		L_179 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_178, _stringLiteralE5A9ADA05CBDBD11A3FDD0576FCE5B1CDA30E940, NULL);
		if (L_179)
		{
			goto IL_0c7f;
		}
	}
	{
		goto IL_0e67;
	}

IL_077a:
	{
		String_t* L_180 = V_10;
		bool L_181;
		L_181 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_180, _stringLiteralC23AFB60D910768AF949135D275BBAE168A46894, NULL);
		if (L_181)
		{
			goto IL_0ca0;
		}
	}
	{
		goto IL_0e67;
	}

IL_0790:
	{
		String_t* L_182 = V_10;
		bool L_183;
		L_183 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_182, _stringLiteral5514D8BE9E761133A77457A12D3915CB3E07E5AF, NULL);
		if (L_183)
		{
			goto IL_0cc1;
		}
	}
	{
		goto IL_0e67;
	}

IL_07a6:
	{
		String_t* L_184 = V_10;
		bool L_185;
		L_185 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_184, _stringLiteral9C78EED60250BE323A3D97A9C62B6E711125C4C9, NULL);
		if (L_185)
		{
			goto IL_0ce2;
		}
	}
	{
		goto IL_0e67;
	}

IL_07bc:
	{
		String_t* L_186 = V_10;
		bool L_187;
		L_187 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_186, _stringLiteralED5169E4CC70ACFAD5449D117F0423892FBF0C89, NULL);
		if (L_187)
		{
			goto IL_0d03;
		}
	}
	{
		goto IL_0e67;
	}

IL_07d2:
	{
		String_t* L_188 = V_10;
		bool L_189;
		L_189 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_188, _stringLiteralE84F2B479265FAD93BE81E77636775B4B5E83831, NULL);
		if (L_189)
		{
			goto IL_0d24;
		}
	}
	{
		goto IL_0e67;
	}

IL_07e8:
	{
		String_t* L_190 = V_10;
		bool L_191;
		L_191 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_190, _stringLiteral942648654A524F6E984CCA6E5751578BD0E8540E, NULL);
		if (L_191)
		{
			goto IL_0d45;
		}
	}
	{
		goto IL_0e67;
	}

IL_07fe:
	{
		String_t* L_192 = V_10;
		bool L_193;
		L_193 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_192, _stringLiteral01637B662C860A4FEA1F5B57B9E4049BCA27A92A, NULL);
		if (L_193)
		{
			goto IL_0d66;
		}
	}
	{
		goto IL_0e67;
	}

IL_0814:
	{
		String_t* L_194 = V_10;
		bool L_195;
		L_195 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_194, _stringLiteral20E53EA12D943C14376715D21DAB74E4D73C5751, NULL);
		if (L_195)
		{
			goto IL_0d87;
		}
	}
	{
		goto IL_0e67;
	}

IL_082a:
	{
		String_t* L_196 = V_10;
		bool L_197;
		L_197 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_196, _stringLiteral92A724EB1B2F6C69B890D3B5F5FC04BD603592F2, NULL);
		if (L_197)
		{
			goto IL_0da8;
		}
	}
	{
		goto IL_0e67;
	}

IL_0840:
	{
		String_t* L_198 = V_10;
		bool L_199;
		L_199 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_198, _stringLiteralFA62FBFE4E50CD6BF703F0C9569D92C185108758, NULL);
		if (L_199)
		{
			goto IL_0dc9;
		}
	}
	{
		goto IL_0e67;
	}

IL_0856:
	{
		String_t* L_200 = V_10;
		bool L_201;
		L_201 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_200, _stringLiteral406039EC8806862DC33A11277467F97951546F04, NULL);
		if (L_201)
		{
			goto IL_0dea;
		}
	}
	{
		goto IL_0e67;
	}

IL_086c:
	{
		String_t* L_202 = V_10;
		bool L_203;
		L_203 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_202, _stringLiteralE54980410FFB1F28C7512F29E4518058DA986F3F, NULL);
		if (L_203)
		{
			goto IL_0e0b;
		}
	}
	{
		goto IL_0e67;
	}

IL_0882:
	{
		String_t* L_204 = V_10;
		bool L_205;
		L_205 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_204, _stringLiteral25F5EF17AC725A91FE3F3CE895C16ED6DD9B3499, NULL);
		if (L_205)
		{
			goto IL_0e19;
		}
	}
	{
		goto IL_0e67;
	}

IL_0898:
	{
		String_t* L_206 = V_10;
		bool L_207;
		L_207 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_206, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_207)
		{
			goto IL_0e40;
		}
	}
	{
		goto IL_0e67;
	}

IL_08ae:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_208 = V_0;
		NullCheck(L_208);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_208, ((int32_t)48), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_209 = V_0;
		NullCheck(L_209);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_209, ((int32_t)256), NULL);
		goto IL_0ef8;
	}

IL_08c8:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_210 = V_0;
		NullCheck(L_210);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_210, ((int32_t)49), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_211 = V_0;
		NullCheck(L_211);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_211, ((int32_t)257), NULL);
		goto IL_0ef8;
	}

IL_08e2:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_212 = V_0;
		NullCheck(L_212);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_212, ((int32_t)50), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_213 = V_0;
		NullCheck(L_213);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_213, ((int32_t)258), NULL);
		goto IL_0ef8;
	}

IL_08fc:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_214 = V_0;
		NullCheck(L_214);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_214, ((int32_t)51), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_215 = V_0;
		NullCheck(L_215);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_215, ((int32_t)259), NULL);
		goto IL_0ef8;
	}

IL_0916:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_216 = V_0;
		NullCheck(L_216);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_216, ((int32_t)52), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_217 = V_0;
		NullCheck(L_217);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_217, ((int32_t)260), NULL);
		goto IL_0ef8;
	}

IL_0930:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_218 = V_0;
		NullCheck(L_218);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_218, ((int32_t)53), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_219 = V_0;
		NullCheck(L_219);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_219, ((int32_t)261), NULL);
		goto IL_0ef8;
	}

IL_094a:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_220 = V_0;
		NullCheck(L_220);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_220, ((int32_t)54), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_221 = V_0;
		NullCheck(L_221);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_221, ((int32_t)262), NULL);
		goto IL_0ef8;
	}

IL_0964:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_222 = V_0;
		NullCheck(L_222);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_222, ((int32_t)55), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_223 = V_0;
		NullCheck(L_223);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_223, ((int32_t)263), NULL);
		goto IL_0ef8;
	}

IL_097e:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_224 = V_0;
		NullCheck(L_224);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_224, ((int32_t)56), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_225 = V_0;
		NullCheck(L_225);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_225, ((int32_t)264), NULL);
		goto IL_0ef8;
	}

IL_0998:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_226 = V_0;
		NullCheck(L_226);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_226, ((int32_t)57), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_227 = V_0;
		NullCheck(L_227);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_227, ((int32_t)265), NULL);
		goto IL_0ef8;
	}

IL_09b2:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_228 = V_0;
		NullCheck(L_228);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_228, ((int32_t)46), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_229 = V_0;
		NullCheck(L_229);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_229, ((int32_t)266), NULL);
		goto IL_0ef8;
	}

IL_09cc:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_230 = V_0;
		NullCheck(L_230);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_230, ((int32_t)47), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_231 = V_0;
		NullCheck(L_231);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_231, ((int32_t)267), NULL);
		goto IL_0ef8;
	}

IL_09e6:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_232 = V_0;
		NullCheck(L_232);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_232, ((int32_t)45), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_233 = V_0;
		NullCheck(L_233);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_233, ((int32_t)269), NULL);
		goto IL_0ef8;
	}

IL_0a00:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_234 = V_0;
		NullCheck(L_234);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_234, ((int32_t)43), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_235 = V_0;
		NullCheck(L_235);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_235, ((int32_t)270), NULL);
		goto IL_0ef8;
	}

IL_0a1a:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_236 = V_0;
		NullCheck(L_236);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_236, ((int32_t)61), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_237 = V_0;
		NullCheck(L_237);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_237, ((int32_t)272), NULL);
		goto IL_0ef8;
	}

IL_0a34:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_238 = V_0;
		NullCheck(L_238);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_238, ((int32_t)61), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_239 = V_0;
		NullCheck(L_239);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_239, ((int32_t)272), NULL);
		goto IL_0ef8;
	}

IL_0a4e:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_240 = V_0;
		NullCheck(L_240);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_240, ((int32_t)10), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_241 = V_0;
		NullCheck(L_241);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_241, ((int32_t)271), NULL);
		goto IL_0ef8;
	}

IL_0a68:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_242 = V_0;
		NullCheck(L_242);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_242, ((int32_t)273), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_243 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_244 = L_243;
		NullCheck(L_244);
		int32_t L_245;
		L_245 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_244, NULL);
		NullCheck(L_244);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_244, ((int32_t)((int32_t)L_245|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0a89:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_246 = V_0;
		NullCheck(L_246);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_246, ((int32_t)274), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_247 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_248 = L_247;
		NullCheck(L_248);
		int32_t L_249;
		L_249 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_248, NULL);
		NullCheck(L_248);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_248, ((int32_t)((int32_t)L_249|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0aaa:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_250 = V_0;
		NullCheck(L_250);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_250, ((int32_t)276), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_251 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_252 = L_251;
		NullCheck(L_252);
		int32_t L_253;
		L_253 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_252, NULL);
		NullCheck(L_252);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_252, ((int32_t)((int32_t)L_253|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0acb:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_254 = V_0;
		NullCheck(L_254);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_254, ((int32_t)275), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_255 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_256 = L_255;
		NullCheck(L_256);
		int32_t L_257;
		L_257 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_256, NULL);
		NullCheck(L_256);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_256, ((int32_t)((int32_t)L_257|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0aec:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_258 = V_0;
		NullCheck(L_258);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_258, ((int32_t)277), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_259 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_260 = L_259;
		NullCheck(L_260);
		int32_t L_261;
		L_261 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_260, NULL);
		NullCheck(L_260);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_260, ((int32_t)((int32_t)L_261|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0b0d:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_262 = V_0;
		NullCheck(L_262);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_262, ((int32_t)278), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_263 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_264 = L_263;
		NullCheck(L_264);
		int32_t L_265;
		L_265 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_264, NULL);
		NullCheck(L_264);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_264, ((int32_t)((int32_t)L_265|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0b2e:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_266 = V_0;
		NullCheck(L_266);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_266, ((int32_t)279), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_267 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_268 = L_267;
		NullCheck(L_268);
		int32_t L_269;
		L_269 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_268, NULL);
		NullCheck(L_268);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_268, ((int32_t)((int32_t)L_269|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0b4f:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_270 = V_0;
		NullCheck(L_270);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_270, ((int32_t)281), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_271 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_272 = L_271;
		NullCheck(L_272);
		int32_t L_273;
		L_273 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_272, NULL);
		NullCheck(L_272);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_272, ((int32_t)((int32_t)L_273|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0b70:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_274 = V_0;
		NullCheck(L_274);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_274, ((int32_t)280), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_275 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_276 = L_275;
		NullCheck(L_276);
		int32_t L_277;
		L_277 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_276, NULL);
		NullCheck(L_276);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_276, ((int32_t)((int32_t)L_277|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0b91:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_278 = V_0;
		NullCheck(L_278);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_278, ((int32_t)280), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_279 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_280 = L_279;
		NullCheck(L_280);
		int32_t L_281;
		L_281 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_280, NULL);
		NullCheck(L_280);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_280, ((int32_t)((int32_t)L_281|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0bb2:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_282 = V_0;
		NullCheck(L_282);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_282, ((int32_t)281), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_283 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_284 = L_283;
		NullCheck(L_284);
		int32_t L_285;
		L_285 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_284, NULL);
		NullCheck(L_284);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_284, ((int32_t)((int32_t)L_285|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0bd3:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_286 = V_0;
		NullCheck(L_286);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_286, 8, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_287 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_288 = L_287;
		NullCheck(L_288);
		int32_t L_289;
		L_289 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_288, NULL);
		NullCheck(L_288);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_288, ((int32_t)((int32_t)L_289|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0bf0:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_290 = V_0;
		NullCheck(L_290);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_290, ((int32_t)127), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_291 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_292 = L_291;
		NullCheck(L_292);
		int32_t L_293;
		L_293 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_292, NULL);
		NullCheck(L_292);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_292, ((int32_t)((int32_t)L_293|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0c0e:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_294 = V_0;
		NullCheck(L_294);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_294, ((int32_t)9), NULL);
		goto IL_0ef8;
	}

IL_0c1c:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_295 = V_0;
		NullCheck(L_295);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_295, ((int32_t)282), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_296 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_297 = L_296;
		NullCheck(L_297);
		int32_t L_298;
		L_298 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_297, NULL);
		NullCheck(L_297);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_297, ((int32_t)((int32_t)L_298|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0c3d:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_299 = V_0;
		NullCheck(L_299);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_299, ((int32_t)283), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_300 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_301 = L_300;
		NullCheck(L_301);
		int32_t L_302;
		L_302 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_301, NULL);
		NullCheck(L_301);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_301, ((int32_t)((int32_t)L_302|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0c5e:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_303 = V_0;
		NullCheck(L_303);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_303, ((int32_t)284), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_304 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_305 = L_304;
		NullCheck(L_305);
		int32_t L_306;
		L_306 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_305, NULL);
		NullCheck(L_305);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_305, ((int32_t)((int32_t)L_306|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0c7f:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_307 = V_0;
		NullCheck(L_307);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_307, ((int32_t)285), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_308 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_309 = L_308;
		NullCheck(L_309);
		int32_t L_310;
		L_310 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_309, NULL);
		NullCheck(L_309);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_309, ((int32_t)((int32_t)L_310|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0ca0:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_311 = V_0;
		NullCheck(L_311);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_311, ((int32_t)286), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_312 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_313 = L_312;
		NullCheck(L_313);
		int32_t L_314;
		L_314 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_313, NULL);
		NullCheck(L_313);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_313, ((int32_t)((int32_t)L_314|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0cc1:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_315 = V_0;
		NullCheck(L_315);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_315, ((int32_t)287), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_316 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_317 = L_316;
		NullCheck(L_317);
		int32_t L_318;
		L_318 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_317, NULL);
		NullCheck(L_317);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_317, ((int32_t)((int32_t)L_318|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0ce2:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_319 = V_0;
		NullCheck(L_319);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_319, ((int32_t)288), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_320 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_321 = L_320;
		NullCheck(L_321);
		int32_t L_322;
		L_322 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_321, NULL);
		NullCheck(L_321);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_321, ((int32_t)((int32_t)L_322|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0d03:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_323 = V_0;
		NullCheck(L_323);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_323, ((int32_t)289), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_324 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_325 = L_324;
		NullCheck(L_325);
		int32_t L_326;
		L_326 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_325, NULL);
		NullCheck(L_325);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_325, ((int32_t)((int32_t)L_326|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0d24:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_327 = V_0;
		NullCheck(L_327);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_327, ((int32_t)290), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_328 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_329 = L_328;
		NullCheck(L_329);
		int32_t L_330;
		L_330 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_329, NULL);
		NullCheck(L_329);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_329, ((int32_t)((int32_t)L_330|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0d45:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_331 = V_0;
		NullCheck(L_331);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_331, ((int32_t)291), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_332 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_333 = L_332;
		NullCheck(L_333);
		int32_t L_334;
		L_334 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_333, NULL);
		NullCheck(L_333);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_333, ((int32_t)((int32_t)L_334|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0d66:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_335 = V_0;
		NullCheck(L_335);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_335, ((int32_t)292), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_336 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_337 = L_336;
		NullCheck(L_337);
		int32_t L_338;
		L_338 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_337, NULL);
		NullCheck(L_337);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_337, ((int32_t)((int32_t)L_338|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0d87:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_339 = V_0;
		NullCheck(L_339);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_339, ((int32_t)293), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_340 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_341 = L_340;
		NullCheck(L_341);
		int32_t L_342;
		L_342 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_341, NULL);
		NullCheck(L_341);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_341, ((int32_t)((int32_t)L_342|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0da8:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_343 = V_0;
		NullCheck(L_343);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_343, ((int32_t)294), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_344 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_345 = L_344;
		NullCheck(L_345);
		int32_t L_346;
		L_346 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_345, NULL);
		NullCheck(L_345);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_345, ((int32_t)((int32_t)L_346|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0dc9:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_347 = V_0;
		NullCheck(L_347);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_347, ((int32_t)295), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_348 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_349 = L_348;
		NullCheck(L_349);
		int32_t L_350;
		L_350 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_349, NULL);
		NullCheck(L_349);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_349, ((int32_t)((int32_t)L_350|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0dea:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_351 = V_0;
		NullCheck(L_351);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_351, ((int32_t)296), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_352 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_353 = L_352;
		NullCheck(L_353);
		int32_t L_354;
		L_354 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_353, NULL);
		NullCheck(L_353);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_353, ((int32_t)((int32_t)L_354|((int32_t)64))), NULL);
		goto IL_0ef8;
	}

IL_0e0b:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_355 = V_0;
		NullCheck(L_355);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_355, ((int32_t)27), NULL);
		goto IL_0ef8;
	}

IL_0e19:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_356 = V_0;
		NullCheck(L_356);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_356, ((int32_t)10), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_357 = V_0;
		NullCheck(L_357);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_357, ((int32_t)13), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_358 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_359 = L_358;
		NullCheck(L_359);
		int32_t L_360;
		L_360 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_359, NULL);
		NullCheck(L_359);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_359, ((int32_t)((int32_t)L_360&((int32_t)-65))), NULL);
		goto IL_0ef8;
	}

IL_0e40:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_361 = V_0;
		NullCheck(L_361);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_361, ((int32_t)32), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_362 = V_0;
		NullCheck(L_362);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_362, ((int32_t)32), NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_363 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_364 = L_363;
		NullCheck(L_364);
		int32_t L_365;
		L_365 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_364, NULL);
		NullCheck(L_364);
		Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB(L_364, ((int32_t)((int32_t)L_365&((int32_t)-65))), NULL);
		goto IL_0ef8;
	}

IL_0e67:
	{
		String_t* L_366 = V_3;
		NullCheck(L_366);
		int32_t L_367;
		L_367 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_366, NULL);
		V_13 = (bool)((((int32_t)((((int32_t)L_367) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_368 = V_13;
		if (!L_368)
		{
			goto IL_0ebd;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_369 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_370 = { reinterpret_cast<intptr_t> (KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_371;
		L_371 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_370, NULL);
		String_t* L_372 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_373;
		L_373 = Enum_Parse_m0316ABE916ED60AA2257A464A33A33D544EDEE12(L_371, L_372, (bool)1, NULL);
		NullCheck(L_369);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_369, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_373, KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var)))), NULL);
		goto IL_0eba;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0e9b;
		}
		throw e;
	}

CATCH_0e9b:
	{// begin catch(System.ArgumentException)
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_374 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_375 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_376 = L_375;
		String_t* L_377 = V_3;
		NullCheck(L_376);
		ArrayElementTypeCheck (L_376, L_377);
		(L_376)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_377);
		String_t* L_378;
		L_378 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD552A0898A2992F3A04D422964D70AE596D70B66)), L_376, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_378, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0eba;
	}// end catch (depth: 1)

IL_0eba:
	{
		goto IL_0ef6;
	}

IL_0ebd:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_379 = V_0;
		String_t* L_380 = V_3;
		NullCheck(L_380);
		String_t* L_381;
		L_381 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_380, NULL);
		NullCheck(L_381);
		Il2CppChar L_382;
		L_382 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_381, 0, NULL);
		NullCheck(L_379);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_379, L_382, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_383 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_384 = V_0;
		NullCheck(L_384);
		Il2CppChar L_385;
		L_385 = Event_get_character_m8F7A92E90EF65B9379C01432B42D6BF818C32A61(L_384, NULL);
		NullCheck(L_383);
		Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168(L_383, L_385, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_386 = V_0;
		NullCheck(L_386);
		int32_t L_387;
		L_387 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_386, NULL);
		V_14 = (bool)((!(((uint32_t)L_387) <= ((uint32_t)0)))? 1 : 0);
		bool L_388 = V_14;
		if (!L_388)
		{
			goto IL_0ef5;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_389 = V_0;
		NullCheck(L_389);
		Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5(L_389, 0, NULL);
	}

IL_0ef5:
	{
	}

IL_0ef6:
	{
		goto IL_0ef8;
	}

IL_0ef8:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_390 = V_0;
		V_5 = L_390;
		goto IL_0efd;
	}

IL_0efd:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_391 = V_5;
		return L_391;
	}
}
// System.Int32 UnityEngine.Event::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_GetHashCode_m9E93319C0E2A92678BC6B3B9A7B1758DBA605E6E (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		V_0 = 1;
		bool L_0;
		L_0 = Event_get_isKey_mDA8FE1CC5E305BAF181E86A727173C9BE9A1B754(__this, NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2;
		L_2 = Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64(__this, NULL);
		V_0 = ((int32_t)(uint16_t)L_2);
	}

IL_0015:
	{
		bool L_3;
		L_3 = Event_get_isMouse_mBD11F4FE2996DFAD2648C8A9648E301EDDA51D7A(__this, NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(__this, NULL);
		V_3 = L_5;
		int32_t L_6;
		L_6 = Vector2_GetHashCode_mED8670C0E122B7ED0DAB4C3381ADFF04B75E0B03_inline((&V_3), NULL);
		V_0 = L_6;
	}

IL_0034:
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(__this, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)37)))|(int32_t)L_8));
		int32_t L_9 = V_0;
		V_4 = L_9;
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_10 = V_4;
		return L_10;
	}
}
// System.Boolean UnityEngine.Event::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_Equals_mBA8BEAB37AE94F9B42F62D946DD61223E0F1258A (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B9_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_00b4;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_obj;
		V_3 = (bool)((((RuntimeObject*)(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*)__this) == ((RuntimeObject*)(RuntimeObject*)L_2))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_00b4;
	}

IL_001f:
	{
		RuntimeObject* L_4 = ___0_obj;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_4, NULL);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		V_4 = (bool)((((int32_t)((((RuntimeObject*)(Type_t*)L_5) == ((RuntimeObject*)(Type_t*)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_00b4;
	}

IL_003a:
	{
		RuntimeObject* L_8 = ___0_obj;
		V_0 = ((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*)CastclassSealed((RuntimeObject*)L_8, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var));
		int32_t L_9;
		L_9 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_10, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_12;
		L_12 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(__this, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_13, NULL);
		G_B9_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_12&((int32_t)-33)))) == ((int32_t)((int32_t)((int32_t)L_14&((int32_t)-33)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0069;
	}

IL_0068:
	{
		G_B9_0 = 1;
	}

IL_0069:
	{
		V_5 = (bool)G_B9_0;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_00b4;
	}

IL_0073:
	{
		bool L_16;
		L_16 = Event_get_isKey_mDA8FE1CC5E305BAF181E86A727173C9BE9A1B754(__this, NULL);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_18;
		L_18 = Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64(__this, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64(L_19, NULL);
		V_2 = (bool)((((int32_t)L_18) == ((int32_t)L_20))? 1 : 0);
		goto IL_00b4;
	}

IL_0090:
	{
		bool L_21;
		L_21 = Event_get_isMouse_mBD11F4FE2996DFAD2648C8A9648E301EDDA51D7A(__this, NULL);
		V_7 = L_21;
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00b0;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(__this, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_24 = V_0;
		NullCheck(L_24);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(L_24, NULL);
		bool L_26;
		L_26 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_23, L_25, NULL);
		V_2 = L_26;
		goto IL_00b4;
	}

IL_00b0:
	{
		V_2 = (bool)0;
		goto IL_00b4;
	}

IL_00b4:
	{
		bool L_27 = V_2;
		return L_27;
	}
}
// System.String UnityEngine.Event::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_ToString_mB30B330C86407E776E932EC18CF177A4066BA56B (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventModifiers_t48244B043FBB42CDD555C6AC43279EC7158777AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A9E6C82A5143ED08E63E500C0978BF5985C84CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43A6F489C4D44800507561D5B432827897F9FF7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D9134A16EE1AB6C900D14CBC31703F0C1B140F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E8B350C9F6A421FA80C169857D1523CD21C39B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5220DD5A418252356A406067BC43EC0FB773A172);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DACFD2D2C00202C188DA9BBF7B7FDC9BB27DE15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66976C0DEE9EDAC6B3AEF3749751FE7A3A10BC5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B9_0 = 0;
	String_t* G_B13_0 = NULL;
	String_t* G_B12_0 = NULL;
	{
		bool L_0;
		L_0 = Event_get_isKey_mDA8FE1CC5E305BAF181E86A727173C9BE9A1B754(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		Il2CppChar L_2;
		L_2 = Event_get_character_m8F7A92E90EF65B9379C01432B42D6BF818C32A61(__this, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_005c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		int32_t L_6;
		L_6 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t L_10;
		L_10 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(__this, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(EventModifiers_t48244B043FBB42CDD555C6AC43279EC7158777AC_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		int32_t L_14;
		L_14 = Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64(__this, NULL);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(_stringLiteral4E8B350C9F6A421FA80C169857D1523CD21C39B5, L_13, NULL);
		V_2 = L_17;
		goto IL_0196;
	}

IL_005c:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral4D9134A16EE1AB6C900D14CBC31703F0C1B140F0);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4D9134A16EE1AB6C900D14CBC31703F0C1B140F0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		int32_t L_21;
		L_21 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		V_3 = L_21;
		Il2CppFakeBox<int32_t> L_22(EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_23;
		L_23 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_22), NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_20;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral43A6F489C4D44800507561D5B432827897F9FF7C);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral43A6F489C4D44800507561D5B432827897F9FF7C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		Il2CppChar L_26;
		L_26 = Event_get_character_m8F7A92E90EF65B9379C01432B42D6BF818C32A61(__this, NULL);
		V_4 = L_26;
		String_t* L_27;
		L_27 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_27);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_25;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral5220DD5A418252356A406067BC43EC0FB773A172);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5220DD5A418252356A406067BC43EC0FB773A172);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
		int32_t L_30;
		L_30 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(__this, NULL);
		V_5 = L_30;
		Il2CppFakeBox<int32_t> L_31(EventModifiers_t48244B043FBB42CDD555C6AC43279EC7158777AC_il2cpp_TypeInfo_var, (&V_5));
		String_t* L_32;
		L_32 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_31), NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_29;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral66976C0DEE9EDAC6B3AEF3749751FE7A3A10BC5C);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral66976C0DEE9EDAC6B3AEF3749751FE7A3A10BC5C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		int32_t L_35;
		L_35 = Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64(__this, NULL);
		V_6 = L_35;
		Il2CppFakeBox<int32_t> L_36(KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var, (&V_6));
		String_t* L_37;
		L_37 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_36), NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_37);
		String_t* L_38;
		L_38 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_34, NULL);
		V_2 = L_38;
		goto IL_0196;
	}

IL_00e6:
	{
		bool L_39;
		L_39 = Event_get_isMouse_mBD11F4FE2996DFAD2648C8A9648E301EDDA51D7A(__this, NULL);
		V_7 = L_39;
		bool L_40 = V_7;
		if (!L_40)
		{
			goto IL_012f;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = L_41;
		int32_t L_43;
		L_43 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		int32_t L_44 = L_43;
		RuntimeObject* L_45 = Box(EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_45);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = L_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = L_47;
		RuntimeObject* L_49 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_49);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = L_46;
		int32_t L_51;
		L_51 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(__this, NULL);
		int32_t L_52 = L_51;
		RuntimeObject* L_53 = Box(EventModifiers_t48244B043FBB42CDD555C6AC43279EC7158777AC_il2cpp_TypeInfo_var, &L_52);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_53);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_53);
		String_t* L_54;
		L_54 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(_stringLiteral5DACFD2D2C00202C188DA9BBF7B7FDC9BB27DE15, L_50, NULL);
		V_2 = L_54;
		goto IL_0196;
	}

IL_012f:
	{
		int32_t L_55;
		L_55 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		if ((((int32_t)L_55) == ((int32_t)((int32_t)14))))
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_56;
		L_56 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		G_B9_0 = ((((int32_t)L_56) == ((int32_t)((int32_t)13)))? 1 : 0);
		goto IL_0146;
	}

IL_0145:
	{
		G_B9_0 = 1;
	}

IL_0146:
	{
		V_8 = (bool)G_B9_0;
		bool L_57 = V_8;
		if (!L_57)
		{
			goto IL_0176;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_58 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_59 = L_58;
		int32_t L_60;
		L_60 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		int32_t L_61 = L_60;
		RuntimeObject* L_62 = Box(EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var, &L_61);
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_62);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_62);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_63 = L_59;
		String_t* L_64;
		L_64 = Event_get_commandName_m14F2015FA5A9050C3C42AF1BD9D0E85D4FF78C24(__this, NULL);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_64);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_64);
		String_t* L_65;
		L_65 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(_stringLiteral0A9E6C82A5143ED08E63E500C0978BF5985C84CA, L_63, NULL);
		V_2 = L_65;
		goto IL_0196;
	}

IL_0176:
	{
		int32_t L_66;
		L_66 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		V_3 = L_66;
		Il2CppFakeBox<int32_t> L_67(EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_68;
		L_68 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_67), NULL);
		String_t* L_69 = L_68;
		G_B12_0 = L_69;
		if (L_69)
		{
			G_B13_0 = L_69;
			goto IL_0193;
		}
	}
	{
		G_B13_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0193:
	{
		V_2 = G_B13_0;
		goto IL_0196;
	}

IL_0196:
	{
		String_t* L_70 = V_2;
		return L_70;
	}
}
// System.Void UnityEngine.Event::Use()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Use_mD77A166D8CFEC4997484C58BC55FEB2D288D3453 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587448EFC1FDECCCDC2B9C8ED4E29674F7598E89);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)7)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1;
		L_1 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)8))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5;
		L_5 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		String_t* L_8;
		L_8 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(_stringLiteral587448EFC1FDECCCDC2B9C8ED4E29674F7598E89, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_8, NULL);
	}

IL_003e:
	{
		Event_Internal_Use_m303C630AFC4EAE76036545C09C79729E90D81CB9(__this, NULL);
		return;
	}
}
// UnityEngine.EventType UnityEngine.Event::get_rawType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_rawType_mD7CD874F3C8DFD4DFB6237E79A7C3A484B33CE56 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Event_get_rawType_mD7CD874F3C8DFD4DFB6237E79A7C3A484B33CE56_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*);
	static Event_get_rawType_mD7CD874F3C8DFD4DFB6237E79A7C3A484B33CE56_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_rawType_mD7CD874F3C8DFD4DFB6237E79A7C3A484B33CE56_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_rawType()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Event_get_mousePosition_Injected_m003389887CF74AEA0E5FC70326E0BF873CDEDCE6(__this, (&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Event::set_mousePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_mousePosition_m221CDC5C9556DE91E82242A693D9E14FAC371F38 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		Event_set_mousePosition_Injected_mC406AF97621061F7189B9AA9E4FEA7CD16C5C34B(__this, (&___0_value), NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Event::get_delta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Event_get_delta_m1BBF28E2FC379EDD3907DC987E6BD7E6521D69A0 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Event_get_delta_Injected_mF0D15F34DC749A9AACD091795AE5DBC2609AE3AC(__this, (&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Event::set_delta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_delta_mA4F7805B9B53B36C7DAA31735CC9097D363B9F9A (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		Event_set_delta_Injected_m9C70CF005D5B37C1B421C141A42BB53AA70E79B3(__this, (&___0_value), NULL);
		return;
	}
}
// UnityEngine.PointerType UnityEngine.Event::get_pointerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_pointerType_mFFB3FB3E83412151A66FEC136FA00EBDB563B94B (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Event_get_pointerType_mFFB3FB3E83412151A66FEC136FA00EBDB563B94B_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*);
	static Event_get_pointerType_mFFB3FB3E83412151A66FEC136FA00EBDB563B94B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_pointerType_mFFB3FB3E83412151A66FEC136FA00EBDB563B94B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_pointerType()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.Event::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_button_m57F81B5CCB26866E776D0EBD1250C708A3565C08 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Event_get_button_m57F81B5CCB26866E776D0EBD1250C708A3565C08_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*);
	static Event_get_button_m57F81B5CCB26866E776D0EBD1250C708A3565C08_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_button_m57F81B5CCB26866E776D0EBD1250C708A3565C08_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_button()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*);
	static Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_modifiers()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*, int32_t);
	static Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_modifiers_m879319643B5CD23F3223AB8E835C8ABCD3DA72FB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Single UnityEngine.Event::get_pressure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Event_get_pressure_m3E43BF333499DFDCFF2A36258BBC290DDD40D963 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	typedef float (*Event_get_pressure_m3E43BF333499DFDCFF2A36258BBC290DDD40D963_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*);
	static Event_get_pressure_m3E43BF333499DFDCFF2A36258BBC290DDD40D963_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_pressure_m3E43BF333499DFDCFF2A36258BBC290DDD40D963_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_pressure()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.Event::get_clickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_clickCount_mEF418EB4A36318F07E5F3463E4E5E8A4C454DE7D (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Event_get_clickCount_mEF418EB4A36318F07E5F3463E4E5E8A4C454DE7D_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*);
	static Event_get_clickCount_mEF418EB4A36318F07E5F3463E4E5E8A4C454DE7D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_clickCount_mEF418EB4A36318F07E5F3463E4E5E8A4C454DE7D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_clickCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Char UnityEngine.Event::get_character()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Event_get_character_m8F7A92E90EF65B9379C01432B42D6BF818C32A61 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	typedef Il2CppChar (*Event_get_character_m8F7A92E90EF65B9379C01432B42D6BF818C32A61_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*);
	static Event_get_character_m8F7A92E90EF65B9379C01432B42D6BF818C32A61_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_character_m8F7A92E90EF65B9379C01432B42D6BF818C32A61_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_character()");
	Il2CppChar icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Event::set_character(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*, Il2CppChar);
	static Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_character_mA159F1742FD9EA968F32556C5FE1A2401069BAF5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_character(System.Char)");
	_il2cpp_icall_func(__this, ___0_value);
}
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*);
	static Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_keyCode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*, int32_t);
	static Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_keyCode_m698D040F2EE0BE55B1B06A3FD865CC0A5D7B1168_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Int32 UnityEngine.Event::get_displayIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_displayIndex_m7DBF1B18DD9B5E5B4EEA979FCA87351E3E5B16C3 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Event_get_displayIndex_m7DBF1B18DD9B5E5B4EEA979FCA87351E3E5B16C3_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*);
	static Event_get_displayIndex_m7DBF1B18DD9B5E5B4EEA979FCA87351E3E5B16C3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_displayIndex_m7DBF1B18DD9B5E5B4EEA979FCA87351E3E5B16C3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_displayIndex()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Event::set_displayIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_displayIndex_m8208F1B0471C0B45C0BB248F9A0178EB40FBE100 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Event_set_displayIndex_m8208F1B0471C0B45C0BB248F9A0178EB40FBE100_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*, int32_t);
	static Event_set_displayIndex_m8208F1B0471C0B45C0BB248F9A0178EB40FBE100_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_displayIndex_m8208F1B0471C0B45C0BB248F9A0178EB40FBE100_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_displayIndex(System.Int32)");
	_il2cpp_icall_func(__this, ___0_value);
}
// UnityEngine.EventType UnityEngine.Event::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*);
	static Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_type()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Event::set_type(UnityEngine.EventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_type_m16D35A8AF665F4A73A447F9EE7CA36963F34FEC2 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Event_set_type_m16D35A8AF665F4A73A447F9EE7CA36963F34FEC2_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*, int32_t);
	static Event_set_type_m16D35A8AF665F4A73A447F9EE7CA36963F34FEC2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_type_m16D35A8AF665F4A73A447F9EE7CA36963F34FEC2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_type(UnityEngine.EventType)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.String UnityEngine.Event::get_commandName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_commandName_m14F2015FA5A9050C3C42AF1BD9D0E85D4FF78C24 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	typedef String_t* (*Event_get_commandName_m14F2015FA5A9050C3C42AF1BD9D0E85D4FF78C24_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*);
	static Event_get_commandName_m14F2015FA5A9050C3C42AF1BD9D0E85D4FF78C24_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_commandName_m14F2015FA5A9050C3C42AF1BD9D0E85D4FF78C24_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_commandName()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Event::set_commandName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_commandName_m8DA7262E1CD1005911EAB9777DE9FEC2D97504FA (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Event_set_commandName_m8DA7262E1CD1005911EAB9777DE9FEC2D97504FA_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*, String_t*);
	static Event_set_commandName_m8DA7262E1CD1005911EAB9777DE9FEC2D97504FA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_commandName_m8DA7262E1CD1005911EAB9777DE9FEC2D97504FA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_commandName(System.String)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.Event::Internal_Use()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Internal_Use_m303C630AFC4EAE76036545C09C79729E90D81CB9 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	typedef void (*Event_Internal_Use_m303C630AFC4EAE76036545C09C79729E90D81CB9_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*);
	static Event_Internal_Use_m303C630AFC4EAE76036545C09C79729E90D81CB9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_Use_m303C630AFC4EAE76036545C09C79729E90D81CB9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_Use()");
	_il2cpp_icall_func(__this);
}
// System.IntPtr UnityEngine.Event::Internal_Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Event_Internal_Create_m38519A1960401042CAB57086F9E038116B8D3EAF (int32_t ___0_displayIndex, const RuntimeMethod* method) 
{
	typedef intptr_t (*Event_Internal_Create_m38519A1960401042CAB57086F9E038116B8D3EAF_ftn) (int32_t);
	static Event_Internal_Create_m38519A1960401042CAB57086F9E038116B8D3EAF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_Create_m38519A1960401042CAB57086F9E038116B8D3EAF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_Create(System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_displayIndex);
	return icallRetVal;
}
// System.Void UnityEngine.Event::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Internal_Destroy_m25BA236C0C66CB87A89B81336D7BFB55917127BB (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef void (*Event_Internal_Destroy_m25BA236C0C66CB87A89B81336D7BFB55917127BB_ftn) (intptr_t);
	static Event_Internal_Destroy_m25BA236C0C66CB87A89B81336D7BFB55917127BB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_Destroy_m25BA236C0C66CB87A89B81336D7BFB55917127BB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___0_ptr);
}
// System.Void UnityEngine.Event::CopyFromPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_CopyFromPtr_mC78295EF5861558EC93D3F8691E2A8B50DE84E29 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef void (*Event_CopyFromPtr_mC78295EF5861558EC93D3F8691E2A8B50DE84E29_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*, intptr_t);
	static Event_CopyFromPtr_mC78295EF5861558EC93D3F8691E2A8B50DE84E29_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_CopyFromPtr_mC78295EF5861558EC93D3F8691E2A8B50DE84E29_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::CopyFromPtr(System.IntPtr)");
	_il2cpp_icall_func(__this, ___0_ptr);
}
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_PopEvent_mC780BAA7CE4F0E75C8B5C7DC5EB430C278B0D0AE (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___0_outEvent, const RuntimeMethod* method) 
{
	typedef bool (*Event_PopEvent_mC780BAA7CE4F0E75C8B5C7DC5EB430C278B0D0AE_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*);
	static Event_PopEvent_mC780BAA7CE4F0E75C8B5C7DC5EB430C278B0D0AE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_PopEvent_mC780BAA7CE4F0E75C8B5C7DC5EB430C278B0D0AE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::PopEvent(UnityEngine.Event)");
	bool icallRetVal = _il2cpp_icall_func(___0_outEvent);
	return icallRetVal;
}
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Internal_SetNativeEvent_mF0C015181EABFE56E2C90CD5C6DCA410C2C42746 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef void (*Event_Internal_SetNativeEvent_mF0C015181EABFE56E2C90CD5C6DCA410C2C42746_ftn) (intptr_t);
	static Event_Internal_SetNativeEvent_mF0C015181EABFE56E2C90CD5C6DCA410C2C42746_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_SetNativeEvent_mF0C015181EABFE56E2C90CD5C6DCA410C2C42746_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)");
	_il2cpp_icall_func(___0_ptr);
}
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Internal_MakeMasterEventCurrent_m67675F107F56ADDBCF72ECB4C3BE4DCE831C8214 (int32_t ___0_displayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_0 = ((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_MasterEvent_2;
		V_0 = (bool)((((RuntimeObject*)(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = ___0_displayIndex;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_3 = (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*)il2cpp_codegen_object_new(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Event__ctor_mA5E77C0596952812A96703685523819CF50D71A0(L_3, L_2, NULL);
		((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_MasterEvent_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_MasterEvent_2), (void*)L_3);
	}

IL_0018:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_4 = ((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_MasterEvent_2;
		int32_t L_5 = ___0_displayIndex;
		NullCheck(L_4);
		Event_set_displayIndex_m8208F1B0471C0B45C0BB248F9A0178EB40FBE100(L_4, L_5, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_6 = ((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_MasterEvent_2;
		((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_Current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_Current_1), (void*)L_6);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_7 = ((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_MasterEvent_2;
		NullCheck(L_7);
		intptr_t L_8 = L_7->___m_Ptr_0;
		Event_Internal_SetNativeEvent_mF0C015181EABFE56E2C90CD5C6DCA410C2C42746(L_8, NULL);
		return;
	}
}
// System.Int32 UnityEngine.Event::GetDoubleClickTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_GetDoubleClickTime_mF3D10CD927983547C6BF3479083B4155DE693826 (const RuntimeMethod* method) 
{
	typedef int32_t (*Event_GetDoubleClickTime_mF3D10CD927983547C6BF3479083B4155DE693826_ftn) ();
	static Event_GetDoubleClickTime_mF3D10CD927983547C6BF3479083B4155DE693826_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_GetDoubleClickTime_mF3D10CD927983547C6BF3479083B4155DE693826_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::GetDoubleClickTime()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.Event::get_mousePosition_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_get_mousePosition_Injected_m003389887CF74AEA0E5FC70326E0BF873CDEDCE6 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Event_get_mousePosition_Injected_m003389887CF74AEA0E5FC70326E0BF873CDEDCE6_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static Event_get_mousePosition_Injected_m003389887CF74AEA0E5FC70326E0BF873CDEDCE6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_mousePosition_Injected_m003389887CF74AEA0E5FC70326E0BF873CDEDCE6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_mousePosition_Injected(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Event::set_mousePosition_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_mousePosition_Injected_mC406AF97621061F7189B9AA9E4FEA7CD16C5C34B (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Event_set_mousePosition_Injected_mC406AF97621061F7189B9AA9E4FEA7CD16C5C34B_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static Event_set_mousePosition_Injected_mC406AF97621061F7189B9AA9E4FEA7CD16C5C34B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_mousePosition_Injected_mC406AF97621061F7189B9AA9E4FEA7CD16C5C34B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_mousePosition_Injected(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.Event::get_delta_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_get_delta_Injected_mF0D15F34DC749A9AACD091795AE5DBC2609AE3AC (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Event_get_delta_Injected_mF0D15F34DC749A9AACD091795AE5DBC2609AE3AC_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static Event_get_delta_Injected_mF0D15F34DC749A9AACD091795AE5DBC2609AE3AC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_delta_Injected_mF0D15F34DC749A9AACD091795AE5DBC2609AE3AC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_delta_Injected(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Event::set_delta_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_delta_Injected_m9C70CF005D5B37C1B421C141A42BB53AA70E79B3 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Event_set_delta_Injected_m9C70CF005D5B37C1B421C141A42BB53AA70E79B3_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static Event_set_delta_Injected_m9C70CF005D5B37C1B421C141A42BB53AA70E79B3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_delta_Injected_m9C70CF005D5B37C1B421C141A42BB53AA70E79B3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_delta_Injected(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___0_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.GUITargetAttribute::GetGUITargetAttrValue(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUITargetAttribute_GetGUITargetAttrValue_mD0E7A4A7147F6B97077284408283EA380FE040B4 (Type_t* ___0_klass, String_t* ___1_methodName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUITargetAttribute_t3F08CE7E00D79CB555B94AA7FA1BCB4B144B922B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUITargetAttribute_t3F08CE7E00D79CB555B94AA7FA1BCB4B144B922B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	bool V_1 = false;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	GUITargetAttribute_t3F08CE7E00D79CB555B94AA7FA1BCB4B144B922B* V_5 = NULL;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		Type_t* L_0 = ___0_klass;
		String_t* L_1 = ___1_methodName;
		NullCheck(L_0);
		MethodInfo_t* L_2;
		L_2 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D(L_0, L_1, ((int32_t)52), NULL);
		V_0 = L_2;
		MethodInfo_t* L_3 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(MethodInfo_t*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0076;
		}
	}
	{
		MethodInfo_t* L_5 = V_0;
		NullCheck(L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = VirtualFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_5, (bool)1);
		V_2 = L_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0075;
		}
	}
	{
		V_4 = 0;
		goto IL_0067;
	}

IL_002a:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_2;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Type_t* L_13;
		L_13 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (GUITargetAttribute_t3F08CE7E00D79CB555B94AA7FA1BCB4B144B922B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(Type_t*)L_13) == ((RuntimeObject*)(Type_t*)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0061;
	}

IL_004b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = V_2;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_5 = ((GUITargetAttribute_t3F08CE7E00D79CB555B94AA7FA1BCB4B144B922B*)IsInstClass((RuntimeObject*)L_20, GUITargetAttribute_t3F08CE7E00D79CB555B94AA7FA1BCB4B144B922B_il2cpp_TypeInfo_var));
		GUITargetAttribute_t3F08CE7E00D79CB555B94AA7FA1BCB4B144B922B* L_21 = V_5;
		NullCheck(L_21);
		int32_t L_22 = L_21->___displayMask_0;
		V_7 = L_22;
		goto IL_007b;
	}

IL_0061:
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0067:
	{
		int32_t L_24 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = V_2;
		NullCheck(L_25);
		V_8 = (bool)((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))? 1 : 0);
		bool L_26 = V_8;
		if (L_26)
		{
			goto IL_002a;
		}
	}
	{
	}

IL_0075:
	{
	}

IL_0076:
	{
		V_7 = (-1);
		goto IL_007b;
	}

IL_007b:
	{
		int32_t L_27 = V_7;
		return L_27;
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
// System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIUtility_get_pixelsPerPoint_m13E69FE793E736FA60A61C6756F2FF57BA6C9F31 (const RuntimeMethod* method) 
{
	typedef float (*GUIUtility_get_pixelsPerPoint_m13E69FE793E736FA60A61C6756F2FF57BA6C9F31_ftn) ();
	static GUIUtility_get_pixelsPerPoint_m13E69FE793E736FA60A61C6756F2FF57BA6C9F31_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_pixelsPerPoint_m13E69FE793E736FA60A61C6756F2FF57BA6C9F31_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_pixelsPerPoint()");
	float icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Int32 UnityEngine.GUIUtility::get_guiDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_get_guiDepth_m011B188F7C41DAE079019E64BC064208E618F315 (const RuntimeMethod* method) 
{
	typedef int32_t (*GUIUtility_get_guiDepth_m011B188F7C41DAE079019E64BC064208E618F315_ftn) ();
	static GUIUtility_get_guiDepth_m011B188F7C41DAE079019E64BC064208E618F315_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_guiDepth_m011B188F7C41DAE079019E64BC064208E618F315_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_guiDepth()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Boolean UnityEngine.GUIUtility::get_textFieldInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_get_textFieldInput_mDB514BD41982E9A309A7E0297270162FA6918EBA (const RuntimeMethod* method) 
{
	typedef bool (*GUIUtility_get_textFieldInput_mDB514BD41982E9A309A7E0297270162FA6918EBA_ftn) ();
	static GUIUtility_get_textFieldInput_mDB514BD41982E9A309A7E0297270162FA6918EBA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_textFieldInput_mDB514BD41982E9A309A7E0297270162FA6918EBA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_textFieldInput()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIUtility_get_systemCopyBuffer_m01E2DF71533C31A4C552B9177D7CBA0C6CA3FC2A (const RuntimeMethod* method) 
{
	typedef String_t* (*GUIUtility_get_systemCopyBuffer_m01E2DF71533C31A4C552B9177D7CBA0C6CA3FC2A_ftn) ();
	static GUIUtility_get_systemCopyBuffer_m01E2DF71533C31A4C552B9177D7CBA0C6CA3FC2A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_systemCopyBuffer_m01E2DF71533C31A4C552B9177D7CBA0C6CA3FC2A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_systemCopyBuffer()");
	String_t* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_set_systemCopyBuffer_mD14AE32BFEA4773BDC679205D470A228B8F225E8 (String_t* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIUtility_set_systemCopyBuffer_mD14AE32BFEA4773BDC679205D470A228B8F225E8_ftn) (String_t*);
	static GUIUtility_set_systemCopyBuffer_mD14AE32BFEA4773BDC679205D470A228B8F225E8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_set_systemCopyBuffer_mD14AE32BFEA4773BDC679205D470A228B8F225E8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)");
	_il2cpp_icall_func(___0_value);
}
// System.Int32 UnityEngine.GUIUtility::Internal_GetControlID(System.Int32,UnityEngine.FocusType,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_Internal_GetControlID_m9836A3FD9B0629A36F356FD8D4606092B2E2AD21 (int32_t ___0_hint, int32_t ___1_focusType, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___2_rect, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_hint;
		int32_t L_1 = ___1_focusType;
		int32_t L_2;
		L_2 = GUIUtility_Internal_GetControlID_Injected_m00F0DDAB73176CDD6EB5F19AA64511CF445E1249(L_0, L_1, (&___2_rect), NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.GUIUtility::GetControlID(System.Int32,UnityEngine.FocusType,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_GetControlID_m3AACC1B4BDE62E7C3E5D861A470351FA1BAA752E (int32_t ___0_hint, int32_t ___1_focusType, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___2_rect, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___s_ControlCount_0;
		((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___s_ControlCount_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___0_hint;
		int32_t L_2 = ___1_focusType;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = ___2_rect;
		int32_t L_4;
		L_4 = GUIUtility_Internal_GetControlID_m9836A3FD9B0629A36F356FD8D4606092B2E2AD21(L_1, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.GUIUtility::BeginContainerFromOwner(UnityEngine.ScriptableObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_BeginContainerFromOwner_mA895E862C2444F93423836CE4B5F35E2F31B8B28 (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ___0_owner, const RuntimeMethod* method) 
{
	typedef void (*GUIUtility_BeginContainerFromOwner_mA895E862C2444F93423836CE4B5F35E2F31B8B28_ftn) (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A*);
	static GUIUtility_BeginContainerFromOwner_mA895E862C2444F93423836CE4B5F35E2F31B8B28_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_BeginContainerFromOwner_mA895E862C2444F93423836CE4B5F35E2F31B8B28_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::BeginContainerFromOwner(UnityEngine.ScriptableObject)");
	_il2cpp_icall_func(___0_owner);
}
// System.Void UnityEngine.GUIUtility::BeginContainer(UnityEngine.ObjectGUIState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_BeginContainer_m4A0F355072CE2DBCB50F706885EAAB70DB8C7115 (ObjectGUIState_t7BE88DC8B9C7187A77D63BBCBE9DB7B674863C15* ___0_objectGUIState, const RuntimeMethod* method) 
{
	typedef void (*GUIUtility_BeginContainer_m4A0F355072CE2DBCB50F706885EAAB70DB8C7115_ftn) (ObjectGUIState_t7BE88DC8B9C7187A77D63BBCBE9DB7B674863C15*);
	static GUIUtility_BeginContainer_m4A0F355072CE2DBCB50F706885EAAB70DB8C7115_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_BeginContainer_m4A0F355072CE2DBCB50F706885EAAB70DB8C7115_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::BeginContainer(UnityEngine.ObjectGUIState)");
	_il2cpp_icall_func(___0_objectGUIState);
}
// System.Void UnityEngine.GUIUtility::Internal_EndContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_Internal_EndContainer_mCE42BC4D58E684B724B58EC3C901E67BA62F1BF7 (const RuntimeMethod* method) 
{
	typedef void (*GUIUtility_Internal_EndContainer_mCE42BC4D58E684B724B58EC3C901E67BA62F1BF7_ftn) ();
	static GUIUtility_Internal_EndContainer_mCE42BC4D58E684B724B58EC3C901E67BA62F1BF7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_EndContainer_mCE42BC4D58E684B724B58EC3C901E67BA62F1BF7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_EndContainer()");
	_il2cpp_icall_func();
}
// System.Int32 UnityEngine.GUIUtility::CheckForTabEvent(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_CheckForTabEvent_m6AC98E67A89330ACB330CBBC135E3DFBFCAC2C49 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___0_evt, const RuntimeMethod* method) 
{
	typedef int32_t (*GUIUtility_CheckForTabEvent_m6AC98E67A89330ACB330CBBC135E3DFBFCAC2C49_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*);
	static GUIUtility_CheckForTabEvent_m6AC98E67A89330ACB330CBBC135E3DFBFCAC2C49_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_CheckForTabEvent_m6AC98E67A89330ACB330CBBC135E3DFBFCAC2C49_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::CheckForTabEvent(UnityEngine.Event)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_evt);
	return icallRetVal;
}
// System.Void UnityEngine.GUIUtility::SetKeyboardControlToFirstControlId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_SetKeyboardControlToFirstControlId_m02DF215A0F07822021E17AF4153B4C31468287C0 (const RuntimeMethod* method) 
{
	typedef void (*GUIUtility_SetKeyboardControlToFirstControlId_m02DF215A0F07822021E17AF4153B4C31468287C0_ftn) ();
	static GUIUtility_SetKeyboardControlToFirstControlId_m02DF215A0F07822021E17AF4153B4C31468287C0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_SetKeyboardControlToFirstControlId_m02DF215A0F07822021E17AF4153B4C31468287C0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::SetKeyboardControlToFirstControlId()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.GUIUtility::SetKeyboardControlToLastControlId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_SetKeyboardControlToLastControlId_mB7A3C208ADDF009FB9C3C522998459BCD9B107EB (const RuntimeMethod* method) 
{
	typedef void (*GUIUtility_SetKeyboardControlToLastControlId_mB7A3C208ADDF009FB9C3C522998459BCD9B107EB_ftn) ();
	static GUIUtility_SetKeyboardControlToLastControlId_mB7A3C208ADDF009FB9C3C522998459BCD9B107EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_SetKeyboardControlToLastControlId_mB7A3C208ADDF009FB9C3C522998459BCD9B107EB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::SetKeyboardControlToLastControlId()");
	_il2cpp_icall_func();
}
// System.Boolean UnityEngine.GUIUtility::HasFocusableControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_HasFocusableControls_mE149711C5695D4DB44940D8073487992F1ACB883 (const RuntimeMethod* method) 
{
	typedef bool (*GUIUtility_HasFocusableControls_mE149711C5695D4DB44940D8073487992F1ACB883_ftn) ();
	static GUIUtility_HasFocusableControls_mE149711C5695D4DB44940D8073487992F1ACB883_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_HasFocusableControls_mE149711C5695D4DB44940D8073487992F1ACB883_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::HasFocusableControls()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Boolean UnityEngine.GUIUtility::OwnsId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_OwnsId_m46FE01F2CEF3A94173A1DB64A888E4DB1EBC74D2 (int32_t ___0_id, const RuntimeMethod* method) 
{
	typedef bool (*GUIUtility_OwnsId_m46FE01F2CEF3A94173A1DB64A888E4DB1EBC74D2_ftn) (int32_t);
	static GUIUtility_OwnsId_m46FE01F2CEF3A94173A1DB64A888E4DB1EBC74D2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_OwnsId_m46FE01F2CEF3A94173A1DB64A888E4DB1EBC74D2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::OwnsId(System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(___0_id);
	return icallRetVal;
}
// System.String UnityEngine.GUIUtility::get_compositionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIUtility_get_compositionString_mE06412C5CE41311C00BFC4028716D5F03EDD85E9 (const RuntimeMethod* method) 
{
	typedef String_t* (*GUIUtility_get_compositionString_mE06412C5CE41311C00BFC4028716D5F03EDD85E9_ftn) ();
	static GUIUtility_get_compositionString_mE06412C5CE41311C00BFC4028716D5F03EDD85E9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_compositionString_mE06412C5CE41311C00BFC4028716D5F03EDD85E9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_compositionString()");
	String_t* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.GUIUtility::set_imeCompositionMode(UnityEngine.IMECompositionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_set_imeCompositionMode_mE5C0A2391D65DAC056B1752D78B5A832DCB314C7 (int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIUtility_set_imeCompositionMode_mE5C0A2391D65DAC056B1752D78B5A832DCB314C7_ftn) (int32_t);
	static GUIUtility_set_imeCompositionMode_mE5C0A2391D65DAC056B1752D78B5A832DCB314C7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_set_imeCompositionMode_mE5C0A2391D65DAC056B1752D78B5A832DCB314C7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(___0_value);
}
// System.Void UnityEngine.GUIUtility::set_compositionCursorPos(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_set_compositionCursorPos_mECE1139A5660FFE152382DAB2DDBFADB96BB9644 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		GUIUtility_set_compositionCursorPos_Injected_mF035733A0EF9A0258AB44982286A8FFFBF2B09A6((&___0_value), NULL);
		return;
	}
}
// System.Int32 UnityEngine.GUIUtility::Internal_GetHotControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_Internal_GetHotControl_m8230315B3FECDB164C84AFC40C180C2C7B319892 (const RuntimeMethod* method) 
{
	typedef int32_t (*GUIUtility_Internal_GetHotControl_m8230315B3FECDB164C84AFC40C180C2C7B319892_ftn) ();
	static GUIUtility_Internal_GetHotControl_m8230315B3FECDB164C84AFC40C180C2C7B319892_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetHotControl_m8230315B3FECDB164C84AFC40C180C2C7B319892_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetHotControl()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Int32 UnityEngine.GUIUtility::Internal_GetKeyboardControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_Internal_GetKeyboardControl_mD0783552D4ACDA842F86F126C7A48ADC79340AB8 (const RuntimeMethod* method) 
{
	typedef int32_t (*GUIUtility_Internal_GetKeyboardControl_mD0783552D4ACDA842F86F126C7A48ADC79340AB8_ftn) ();
	static GUIUtility_Internal_GetKeyboardControl_mD0783552D4ACDA842F86F126C7A48ADC79340AB8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetKeyboardControl_mD0783552D4ACDA842F86F126C7A48ADC79340AB8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetKeyboardControl()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.GUIUtility::Internal_SetHotControl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_Internal_SetHotControl_m56F3F333B107EFD83C7F3D703DDA48C5A19BFCB8 (int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIUtility_Internal_SetHotControl_m56F3F333B107EFD83C7F3D703DDA48C5A19BFCB8_ftn) (int32_t);
	static GUIUtility_Internal_SetHotControl_m56F3F333B107EFD83C7F3D703DDA48C5A19BFCB8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_SetHotControl_m56F3F333B107EFD83C7F3D703DDA48C5A19BFCB8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_SetHotControl(System.Int32)");
	_il2cpp_icall_func(___0_value);
}
// System.Void UnityEngine.GUIUtility::Internal_SetKeyboardControl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_Internal_SetKeyboardControl_mC8401D9C911D310EAA2284161264D2FC9D141418 (int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIUtility_Internal_SetKeyboardControl_mC8401D9C911D310EAA2284161264D2FC9D141418_ftn) (int32_t);
	static GUIUtility_Internal_SetKeyboardControl_mC8401D9C911D310EAA2284161264D2FC9D141418_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_SetKeyboardControl_mC8401D9C911D310EAA2284161264D2FC9D141418_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_SetKeyboardControl(System.Int32)");
	_il2cpp_icall_func(___0_value);
}
// System.Object UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GUIUtility_Internal_GetDefaultSkin_m86F21D22A34DC2243194B8929A499FD98D26A234 (int32_t ___0_skinMode, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*GUIUtility_Internal_GetDefaultSkin_m86F21D22A34DC2243194B8929A499FD98D26A234_ftn) (int32_t);
	static GUIUtility_Internal_GetDefaultSkin_m86F21D22A34DC2243194B8929A499FD98D26A234_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetDefaultSkin_m86F21D22A34DC2243194B8929A499FD98D26A234_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)");
	RuntimeObject* icallRetVal = _il2cpp_icall_func(___0_skinMode);
	return icallRetVal;
}
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_Internal_ExitGUI_m5B145534F61B8CE2A2915A9297D0F25D771D4459 (const RuntimeMethod* method) 
{
	typedef void (*GUIUtility_Internal_ExitGUI_m5B145534F61B8CE2A2915A9297D0F25D771D4459_ftn) ();
	static GUIUtility_Internal_ExitGUI_m5B145534F61B8CE2A2915A9297D0F25D771D4459_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_ExitGUI_m5B145534F61B8CE2A2915A9297D0F25D771D4459_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_ExitGUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.GUIUtility::MarkGUIChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_MarkGUIChanged_m43158D22AA065483FD91222B898772AEC06809A1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___guiChanged_8;
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
// System.Int32 UnityEngine.GUIUtility::GetControlID(System.Int32,UnityEngine.FocusType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_GetControlID_m2E0F66C8714A84DD5E9BEF4B9B464DAF1C03A9F7 (int32_t ___0_hint, int32_t ___1_focus, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_hint;
		int32_t L_1 = ___1_focus;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = Rect_get_zero_m5341D8B63DEF1F4C308A685EEC8CFEA12A396C8D(NULL);
		int32_t L_3;
		L_3 = GUIUtility_GetControlID_m3AACC1B4BDE62E7C3E5D861A470351FA1BAA752E(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.GUIUtility::set_guiIsExiting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_set_guiIsExiting_m0DCDD09CD48330FD781C03D2EA20F973878A2BC5 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___U3CguiIsExitingU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.GUIUtility::get_hotControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_get_hotControl_m6CD6AD33B46A9AFF2261E2C352DC7BAB4C20B026 (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = GUIUtility_Internal_GetHotControl_m8230315B3FECDB164C84AFC40C180C2C7B319892(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUIUtility::set_hotControl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_set_hotControl_mFBC648186C83874DE776A508C420183ADB527E9A (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		GUIUtility_Internal_SetHotControl_m56F3F333B107EFD83C7F3D703DDA48C5A19BFCB8(L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.GUIUtility::TakeCapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_TakeCapture_mD8AB4A480269628E17877B77A94A6481EFC9763C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___takeCapture_3;
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
// System.Void UnityEngine.GUIUtility::RemoveCapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_RemoveCapture_m295E1BC4B7E1D471AF7C40E3B587B7D525E3D693 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___releaseCapture_4;
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
// System.Int32 UnityEngine.GUIUtility::get_keyboardControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_get_keyboardControl_mB0FAC848390B7F163CD2EE0A911FADD5CAD70B1E (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = GUIUtility_Internal_GetKeyboardControl_mD0783552D4ACDA842F86F126C7A48ADC79340AB8(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUIUtility::set_keyboardControl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_set_keyboardControl_m10F53FE5B292C2DC3C9A55CB504CC0DF36139465 (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		GUIUtility_Internal_SetKeyboardControl_mC8401D9C911D310EAA2284161264D2FC9D141418(L_0, NULL);
		return;
	}
}
// System.Boolean UnityEngine.GUIUtility::HasKeyFocus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_HasKeyFocus_m6AD234443A7B2AB471E14BE141FC5E8ADD261A0F (int32_t ___0_controlID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___0_controlID;
		int32_t L_1;
		L_1 = GUIUtility_get_keyboardControl_mB0FAC848390B7F163CD2EE0A911FADD5CAD70B1E(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_001f;
		}
	}
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_2 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___s_HasCurrentWindowKeyFocusFunc_10;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 1;
		goto IL_001d;
	}

IL_0013:
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_3 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___s_HasCurrentWindowKeyFocusFunc_10;
		NullCheck(L_3);
		bool L_4;
		L_4 = Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline(L_3, NULL);
		G_B4_0 = ((int32_t)(L_4));
	}

IL_001d:
	{
		G_B6_0 = G_B4_0;
		goto IL_0020;
	}

IL_001f:
	{
		G_B6_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B6_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.GUIUtility::ExitGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_ExitGUI_m9B30B2DFC94CC1C04D1F78358D79E9DAC1231B03 (const RuntimeMethod* method) 
{
	{
		ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549* L_0 = (ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		ExitGUIException__ctor_m345D7AD70E401C1AFD46E537CDCEC0F1C8BA342B(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GUIUtility_ExitGUI_m9B30B2DFC94CC1C04D1F78358D79E9DAC1231B03_RuntimeMethod_var)));
	}
}
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUIUtility_GetDefaultSkin_m3275F31A9D5C3D90A1BCF5135F5B3968D6CD2C33 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* V_0 = NULL;
	{
		int32_t L_0 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___s_SkinMode_1;
		RuntimeObject* L_1;
		L_1 = GUIUtility_Internal_GetDefaultSkin_m86F21D22A34DC2243194B8929A499FD98D26A234(L_0, NULL);
		V_0 = ((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9*)IsInstSealed((RuntimeObject*)L_1, GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var));
		goto IL_0013;
	}

IL_0013:
	{
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.GUIUtility::ProcessEvent(System.Int32,System.IntPtr,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_ProcessEvent_m88640934E0C2BFA9BAC544DD2A91112FE8227FE2 (int32_t ___0_instanceID, intptr_t ___1_nativeEventPtr, bool* ___2_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool* L_0 = ___2_result;
		*((int8_t*)L_0) = (int8_t)0;
		Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C* L_1 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___processEvent_5;
		V_0 = (bool)((!(((RuntimeObject*)(Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		bool* L_3 = ___2_result;
		Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C* L_4 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___processEvent_5;
		int32_t L_5 = ___0_instanceID;
		intptr_t L_6 = ___1_nativeEventPtr;
		NullCheck(L_4);
		bool L_7;
		L_7 = Func_3_Invoke_mDFA3CD122659AE2902BCCD5F89B3CCCA94E041DF_inline(L_4, L_5, L_6, NULL);
		*((int8_t*)L_3) = (int8_t)L_7;
	}

IL_001e:
	{
		return;
	}
}
// System.Void UnityEngine.GUIUtility::EndContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_EndContainer_m19D0D5BA46EDAD7AF2D408A34D0141C5E481D963 (const RuntimeMethod* method) 
{
	{
		GUIUtility_Internal_EndContainer_mCE42BC4D58E684B724B58EC3C901E67BA62F1BF7(NULL);
		GUIUtility_Internal_ExitGUI_m5B145534F61B8CE2A2915A9297D0F25D771D4459(NULL);
		return;
	}
}
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_BeginGUI_m05702C560EBBC0B0CA3AD4F1FFBB5BD070DA2E04 (int32_t ___0_skinMode, int32_t ___1_instanceID, int32_t ___2_useGUILayout, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___0_skinMode;
		((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___s_SkinMode_1 = L_0;
		int32_t L_1 = ___1_instanceID;
		((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___s_OriginalID_2 = L_1;
		GUIUtility_ResetGlobalState_mD0A482A31337B6200F644995345CF56849913928(NULL);
		int32_t L_2 = ___2_useGUILayout;
		V_0 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = ___1_instanceID;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		GUILayoutUtility_Begin_m701551F1F833A31A154BFFC9F6F3143A12A33061(L_4, NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_EndGUI_mB34E82D4DD7A0AD22012DBAC207F605A68EA5E2E (int32_t ___0_layoutType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				GUIUtility_Internal_ExitGUI_m5B145534F61B8CE2A2915A9297D0F25D771D4459(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_0;
				L_0 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
				NullCheck(L_0);
				int32_t L_1;
				L_1 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_0, NULL);
				V_0 = (bool)((((int32_t)L_1) == ((int32_t)8))? 1 : 0);
				bool L_2 = V_0;
				if (!L_2)
				{
					goto IL_003f_1;
				}
			}
			{
				int32_t L_3 = ___0_layoutType;
				V_2 = L_3;
				int32_t L_4 = V_2;
				V_1 = L_4;
				int32_t L_5 = V_1;
				switch (L_5)
				{
					case 0:
					{
						goto IL_002c_1;
					}
					case 1:
					{
						goto IL_002e_1;
					}
					case 2:
					{
						goto IL_0036_1;
					}
				}
			}
			{
				goto IL_003e_1;
			}

IL_002c_1:
			{
				goto IL_003e_1;
			}

IL_002e_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
				GUILayoutUtility_Layout_mBC6C938DC931B8CABC1FA6C33AA60ECFAC3D9B30(NULL);
				goto IL_003e_1;
			}

IL_0036_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
				GUILayoutUtility_LayoutFromEditorWindow_m0D41A3D7897D91D4420C722C47502FCBA0352804(NULL);
				goto IL_003e_1;
			}

IL_003e_1:
			{
			}

IL_003f_1:
			{
				int32_t L_6 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___s_OriginalID_2;
				il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
				LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_7;
				L_7 = GUILayoutUtility_SelectIDList_m601F4AA990B7FD59A779F5375EC55ADDB86927A9(L_6, (bool)0, NULL);
				il2cpp_codegen_runtime_class_init_inline(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
				GUIContent_ClearStaticCache_m36A399D55991F1B5B1C4A20DCDFF415B8636E934(NULL);
				goto IL_005d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005d:
	{
		return;
	}
}
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_EndGUIFromException_m9C8B34B811C1E32C1BC818A57817FF5E117EC1B0 (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		GUIUtility_Internal_ExitGUI_m5B145534F61B8CE2A2915A9297D0F25D771D4459(NULL);
		Exception_t* L_0 = ___0_exception;
		bool L_1;
		L_1 = GUIUtility_ShouldRethrowException_m60E879B4683840AAD5CD514E8C3BDDCC6403B652(L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.GUIUtility::EndContainerGUIFromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_EndContainerGUIFromException_mC60505F763292A2C80F7FBC0644F3B4679414DEB (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Func_2_tDDBE08B46BEFDD869DE0B97D023CB9C89674FED6* L_0 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___endContainerGUIFromException_7;
		V_0 = (bool)((!(((RuntimeObject*)(Func_2_tDDBE08B46BEFDD869DE0B97D023CB9C89674FED6*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Func_2_tDDBE08B46BEFDD869DE0B97D023CB9C89674FED6* L_2 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___endContainerGUIFromException_7;
		Exception_t* L_3 = ___0_exception;
		NullCheck(L_2);
		bool L_4;
		L_4 = Func_2_Invoke_m215465BB041E8F2AE1E7AD0988951D160D8F8324_inline(L_2, L_3, NULL);
		V_1 = L_4;
		goto IL_001f;
	}

IL_001b:
	{
		V_1 = (bool)0;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.GUIUtility::ResetGlobalState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_ResetGlobalState_mD0A482A31337B6200F644995345CF56849913928 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_skin_mD51BAED314B39004AE3FDE74F9895CA19F3E40E5((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9*)NULL, NULL);
		GUIUtility_set_guiIsExiting_m0DCDD09CD48330FD781C03D2EA20F973878A2BC5_inline((bool)0, NULL);
		GUI_set_changed_mBD91A44AFA77D2BF883B3150AF4AE6AC3ED121DC((bool)0, NULL);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_0;
		L_0 = GUI_get_scrollViewStates_m940A384A713B8A7DC67016D1588965A42E561773_inline(NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(13 /* System.Void System.Collections.Stack::Clear() */, L_0);
		return;
	}
}
// System.Boolean UnityEngine.GUIUtility::IsExitGUIException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_IsExitGUIException_mB887DAF961E8C1124916777B812FBF2324F5265F (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		goto IL_000b;
	}

IL_0003:
	{
		Exception_t* L_0 = ___0_exception;
		NullCheck(L_0);
		Exception_t* L_1;
		L_1 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_0, NULL);
		___0_exception = L_1;
	}

IL_000b:
	{
		Exception_t* L_2 = ___0_exception;
		if (!((TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2*)IsInstSealed((RuntimeObject*)L_2, TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		Exception_t* L_3 = ___0_exception;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_3, NULL);
		G_B5_0 = ((!(((RuntimeObject*)(Exception_t*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B5_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B5_0;
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0003;
		}
	}
	{
		Exception_t* L_6 = ___0_exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549*)((ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549*)IsInstSealed((RuntimeObject*)L_6, ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_002f;
	}

IL_002f:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Boolean UnityEngine.GUIUtility::ShouldRethrowException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_ShouldRethrowException_m60E879B4683840AAD5CD514E8C3BDDCC6403B652 (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Exception_t* L_0 = ___0_exception;
		bool L_1;
		L_1 = GUIUtility_IsExitGUIException_mB887DAF961E8C1124916777B812FBF2324F5265F(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_CheckOnGUI_mD167632D5D038DF66CC97F231CD45736D1F556D6 (const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = GUIUtility_get_guiDepth_m011B188F7C41DAE079019E64BC064208E618F315(NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3E5BD769C75B1966931F7A0F059B152FE79C2619)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GUIUtility_CheckOnGUI_mD167632D5D038DF66CC97F231CD45736D1F556D6_RuntimeMethod_var)));
	}

IL_001b:
	{
		return;
	}
}
// System.Single UnityEngine.GUIUtility::RoundToPixelGrid(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIUtility_RoundToPixelGrid_m0E594150154A6CCAD942F6B23179FB6886361105 (float ___0_v, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_v;
		float L_1;
		L_1 = GUIUtility_get_pixelsPerPoint_m13E69FE793E736FA60A61C6756F2FF57BA6C9F31(NULL);
		float L_2;
		L_2 = floorf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), (0.479999989f))));
		float L_3;
		L_3 = GUIUtility_get_pixelsPerPoint_m13E69FE793E736FA60A61C6756F2FF57BA6C9F31(NULL);
		V_0 = ((float)(L_2/L_3));
		goto IL_001c;
	}

IL_001c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.GUIUtility::HitTest(UnityEngine.Rect,UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_HitTest_m55D2F9EAC7EA99CA0C490546A6B45DA96F5AB3DA (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_point, int32_t ___2_offset, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___1_point;
		float L_1 = L_0.___x_0;
		float L_2;
		L_2 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___0_rect), NULL);
		int32_t L_3 = ___2_offset;
		if ((!(((float)L_1) >= ((float)((float)il2cpp_codegen_subtract(L_2, ((float)L_3)))))))
		{
			goto IL_004b;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___1_point;
		float L_5 = L_4.___x_0;
		float L_6;
		L_6 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___0_rect), NULL);
		int32_t L_7 = ___2_offset;
		if ((!(((float)L_5) < ((float)((float)il2cpp_codegen_add(L_6, ((float)L_7)))))))
		{
			goto IL_004b;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___1_point;
		float L_9 = L_8.___y_1;
		float L_10;
		L_10 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___0_rect), NULL);
		int32_t L_11 = ___2_offset;
		if ((!(((float)L_9) >= ((float)((float)il2cpp_codegen_subtract(L_10, ((float)L_11)))))))
		{
			goto IL_004b;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___1_point;
		float L_13 = L_12.___y_1;
		float L_14;
		L_14 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___0_rect), NULL);
		int32_t L_15 = ___2_offset;
		G_B5_0 = ((((float)L_13) < ((float)((float)il2cpp_codegen_add(L_14, ((float)L_15)))))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = 0;
	}

IL_004c:
	{
		V_0 = (bool)G_B5_0;
		goto IL_004f;
	}

IL_004f:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Boolean UnityEngine.GUIUtility::HitTest(UnityEngine.Rect,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_HitTest_m8C93A1BFB637176154C02F73038A98D1F616A7C2 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_point, bool ___2_isDirectManipulationDevice, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_rect;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_point;
		int32_t L_2 = V_0;
		bool L_3;
		L_3 = GUIUtility_HitTest_m55D2F9EAC7EA99CA0C490546A6B45DA96F5AB3DA(L_0, L_1, L_2, NULL);
		V_1 = L_3;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.GUIUtility::HitTest(UnityEngine.Rect,UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_HitTest_m0312C850D991342F3A7656A959C87466500F2987 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___1_evt, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_rect;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_1 = ___1_evt;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(L_1, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_3 = ___1_evt;
		NullCheck(L_3);
		bool L_4;
		L_4 = Event_get_isDirectManipulationDevice_m9A72FB2DF7803E189857D24A65FB568B17533ED0(L_3, NULL);
		bool L_5;
		L_5 = GUIUtility_HitTest_m8C93A1BFB637176154C02F73038A98D1F616A7C2(L_0, L_2, L_4, NULL);
		V_0 = L_5;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Int32 UnityEngine.GUIUtility::Internal_GetControlID_Injected(System.Int32,UnityEngine.FocusType,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_Internal_GetControlID_Injected_m00F0DDAB73176CDD6EB5F19AA64511CF445E1249 (int32_t ___0_hint, int32_t ___1_focusType, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___2_rect, const RuntimeMethod* method) 
{
	typedef int32_t (*GUIUtility_Internal_GetControlID_Injected_m00F0DDAB73176CDD6EB5F19AA64511CF445E1249_ftn) (int32_t, int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*);
	static GUIUtility_Internal_GetControlID_Injected_m00F0DDAB73176CDD6EB5F19AA64511CF445E1249_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetControlID_Injected_m00F0DDAB73176CDD6EB5F19AA64511CF445E1249_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetControlID_Injected(System.Int32,UnityEngine.FocusType,UnityEngine.Rect&)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_hint, ___1_focusType, ___2_rect);
	return icallRetVal;
}
// System.Void UnityEngine.GUIUtility::set_compositionCursorPos_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_set_compositionCursorPos_Injected_mF035733A0EF9A0258AB44982286A8FFFBF2B09A6 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIUtility_set_compositionCursorPos_Injected_mF035733A0EF9A0258AB44982286A8FFFBF2B09A6_ftn) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static GUIUtility_set_compositionCursorPos_Injected_mF035733A0EF9A0258AB44982286A8FFFBF2B09A6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_set_compositionCursorPos_Injected_mF035733A0EF9A0258AB44982286A8FFFBF2B09A6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::set_compositionCursorPos_Injected(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___0_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.GUILayoutGroup::get_marginLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutGroup_get_marginLeft_m343D82AA90154850B9B2A97B9E471D5235761EB3 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_MarginLeft_27;
		return L_0;
	}
}
// System.Int32 UnityEngine.GUILayoutGroup::get_marginRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutGroup_get_marginRight_m2710F9CCC1B6D67BC4F9D9487B082B7E143757D0 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_MarginRight_28;
		return L_0;
	}
}
// System.Int32 UnityEngine.GUILayoutGroup::get_marginTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutGroup_get_marginTop_mA61C984665E93EE9E8670753AF919208528C4F87 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_MarginTop_29;
		return L_0;
	}
}
// System.Int32 UnityEngine.GUILayoutGroup::get_marginBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutGroup_get_marginBottom_m1EC579493343750FB013A6F01AD84DFEC8D489BD (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_MarginBottom_30;
		return L_0;
	}
}
// System.Void UnityEngine.GUILayoutGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m685E773E1D777772A2633097DD151A2A9E640D72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_0 = (List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82*)il2cpp_codegen_object_new(List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m685E773E1D777772A2633097DD151A2A9E640D72(L_0, List_1__ctor_m685E773E1D777772A2633097DD151A2A9E640D72_RuntimeMethod_var);
		__this->___entries_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entries_11), (void*)L_0);
		__this->___isVertical_12 = (bool)1;
		__this->___resetCoords_13 = (bool)0;
		__this->___spacing_14 = (0.0f);
		__this->___sameSize_15 = (bool)1;
		__this->___isWindow_16 = (bool)0;
		__this->___windowID_17 = (-1);
		__this->___m_Cursor_18 = 0;
		__this->___m_StretchableCountX_19 = ((int32_t)100);
		__this->___m_StretchableCountY_20 = ((int32_t)100);
		__this->___m_UserSpecifiedWidth_21 = (bool)0;
		__this->___m_UserSpecifiedHeight_22 = (bool)0;
		__this->___m_ChildMinWidth_23 = (100.0f);
		__this->___m_ChildMaxWidth_24 = (100.0f);
		__this->___m_ChildMinHeight_25 = (100.0f);
		__this->___m_ChildMaxHeight_26 = (100.0f);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1;
		L_1 = GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938(NULL);
		il2cpp_codegen_runtime_class_init_inline(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		GUILayoutEntry__ctor_m011B3DA69713EEA6BD98D4056B5ADE01F237E5B2(__this, (0.0f), (0.0f), (0.0f), (0.0f), L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_ApplyOptions_mD4C0BFAC7A90FB32BC6DC99ECA3EEA6C1C9396D2 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___0_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* V_1 = NULL;
	int32_t V_2 = 0;
	GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_0 = ___0_options;
		V_0 = (bool)((((RuntimeObject*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0085;
	}

IL_000b:
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_2 = ___0_options;
		GUILayoutEntry_ApplyOptions_mF024E6CEAAD97888AE293810E01F8431D79456A3(__this, L_2, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_3 = ___0_options;
		V_1 = L_3;
		V_2 = 0;
		goto IL_007f;
	}

IL_001a:
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_8 = V_3;
		NullCheck(L_8);
		int32_t L_9 = L_8->___type_0;
		V_5 = L_9;
		int32_t L_10 = V_5;
		V_4 = L_10;
		int32_t L_11 = V_4;
		switch (L_11)
		{
			case 0:
			{
				goto IL_0054;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_0054;
			}
			case 3:
			{
				goto IL_0054;
			}
			case 4:
			{
				goto IL_005d;
			}
			case 5:
			{
				goto IL_005d;
			}
		}
	}
	{
		goto IL_004c;
	}

IL_004c:
	{
		int32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)13))))
		{
			goto IL_0066;
		}
	}
	{
		goto IL_007a;
	}

IL_0054:
	{
		__this->___m_UserSpecifiedHeight_22 = (bool)1;
		goto IL_007a;
	}

IL_005d:
	{
		__this->___m_UserSpecifiedWidth_21 = (bool)1;
		goto IL_007a;
	}

IL_0066:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_13 = V_3;
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->___value_1;
		__this->___spacing_14 = ((float)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_14, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))));
		goto IL_007a;
	}

IL_007a:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_007f:
	{
		int32_t L_16 = V_2;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_001a;
		}
	}

IL_0085:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_ApplyStyleSettings_m5A88CB0FC11FE81405684C3EFF7EF7DA974D2649 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_style, const RuntimeMethod* method) 
{
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_style;
		GUILayoutEntry_ApplyStyleSettings_m2D3679DAF547D104FE48E7D6D8E27B639F6A666B(__this, L_0, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = ___0_style;
		NullCheck(L_1);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_2;
		L_2 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_1, NULL);
		V_0 = L_2;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_3, NULL);
		__this->___m_MarginLeft_27 = L_4;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = RectOffset_get_right_m07C826B0BC79B0CBC01F5FF489D456C553F047BF(L_5, NULL);
		__this->___m_MarginRight_28 = L_6;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_7, NULL);
		__this->___m_MarginTop_29 = L_8;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B(L_9, NULL);
		__this->___m_MarginBottom_30 = L_10;
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_ResetCursor_m58C36F1ABC54BE5EFC16D512318BED9EB8918127 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_Cursor_18 = 0;
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcWidth_mFA744462378028538F1E3AAB39CB6AF0FBB1851B (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	float V_6 = 0.0f;
	bool V_7 = false;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_8;
	memset((&V_8), 0, sizeof(V_8));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_13;
	memset((&V_13), 0, sizeof(V_13));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_14 = NULL;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	int32_t G_B22_0 = 0;
	int32_t G_B37_0 = 0;
	int32_t G_B43_0 = 0;
	int32_t G_B43_1 = 0;
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* G_B43_2 = NULL;
	int32_t G_B42_0 = 0;
	int32_t G_B42_1 = 0;
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* G_B42_2 = NULL;
	int32_t G_B44_0 = 0;
	int32_t G_B44_1 = 0;
	int32_t G_B44_2 = 0;
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* G_B44_3 = NULL;
	{
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_0 = __this->___entries_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_0, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3;
		L_3 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_3);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_4;
		L_4 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = RectOffset_get_horizontal_m5C1795C027E4987A8532DC27D88FB3B9FFEC1352(L_4, NULL);
		float L_6 = ((float)L_5);
		V_6 = L_6;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = L_6;
		float L_7 = V_6;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = L_7;
		goto IL_043a;
	}

IL_003d:
	{
		V_0 = 0;
		V_1 = 0;
		__this->___m_ChildMinWidth_23 = (0.0f);
		__this->___m_ChildMaxWidth_24 = (0.0f);
		__this->___m_StretchableCountX_19 = 0;
		V_2 = (bool)1;
		bool L_8 = __this->___isVertical_12;
		V_7 = L_8;
		bool L_9 = V_7;
		if (!L_9)
		{
			goto IL_0181;
		}
	}
	{
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_10 = __this->___entries_11;
		NullCheck(L_10);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_11;
		L_11 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_10, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_8 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_014a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_8), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_013c_1;
			}

IL_0083_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_12;
				L_12 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_8), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_9 = L_12;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_13 = V_9;
				NullCheck(L_13);
				VirtualActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_13);
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_14 = V_9;
				NullCheck(L_14);
				bool L_15 = L_14->___consideredForMargin_7;
				V_10 = L_15;
				bool L_16 = V_10;
				if (!L_16)
				{
					goto IL_0127_1;
				}
			}
			{
				bool L_17 = V_2;
				V_11 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
				bool L_18 = V_11;
				if (!L_18)
				{
					goto IL_00d0_1;
				}
			}
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_19 = V_9;
				NullCheck(L_19);
				int32_t L_20;
				L_20 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_19);
				int32_t L_21 = V_0;
				int32_t L_22;
				L_22 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_20, L_21, NULL);
				V_0 = L_22;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_23 = V_9;
				NullCheck(L_23);
				int32_t L_24;
				L_24 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_23);
				int32_t L_25 = V_1;
				int32_t L_26;
				L_26 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_24, L_25, NULL);
				V_1 = L_26;
				goto IL_00e4_1;
			}

IL_00d0_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_27 = V_9;
				NullCheck(L_27);
				int32_t L_28;
				L_28 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_27);
				V_0 = L_28;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_29 = V_9;
				NullCheck(L_29);
				int32_t L_30;
				L_30 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_29);
				V_1 = L_30;
				V_2 = (bool)0;
			}

IL_00e4_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_31 = V_9;
				NullCheck(L_31);
				float L_32 = L_31->___minWidth_0;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_33 = V_9;
				NullCheck(L_33);
				int32_t L_34;
				L_34 = GUILayoutEntry_get_marginHorizontal_m9847FB7747542BB322195F9CF4B75F55339CD7B5(L_33, NULL);
				float L_35 = __this->___m_ChildMinWidth_23;
				float L_36;
				L_36 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_add(L_32, ((float)L_34))), L_35, NULL);
				__this->___m_ChildMinWidth_23 = L_36;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_37 = V_9;
				NullCheck(L_37);
				float L_38 = L_37->___maxWidth_1;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_39 = V_9;
				NullCheck(L_39);
				int32_t L_40;
				L_40 = GUILayoutEntry_get_marginHorizontal_m9847FB7747542BB322195F9CF4B75F55339CD7B5(L_39, NULL);
				float L_41 = __this->___m_ChildMaxWidth_24;
				float L_42;
				L_42 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_add(L_38, ((float)L_40))), L_41, NULL);
				__this->___m_ChildMaxWidth_24 = L_42;
			}

IL_0127_1:
			{
				int32_t L_43 = __this->___m_StretchableCountX_19;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_44 = V_9;
				NullCheck(L_44);
				int32_t L_45 = L_44->___stretchWidth_5;
				__this->___m_StretchableCountX_19 = ((int32_t)il2cpp_codegen_add(L_43, L_45));
			}

IL_013c_1:
			{
				bool L_46;
				L_46 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_8), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_46)
				{
					goto IL_0083_1;
				}
			}
			{
				goto IL_0159;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0159:
	{
		float L_47 = __this->___m_ChildMinWidth_23;
		int32_t L_48 = V_0;
		int32_t L_49 = V_1;
		__this->___m_ChildMinWidth_23 = ((float)il2cpp_codegen_subtract(L_47, ((float)((int32_t)il2cpp_codegen_add(L_48, L_49)))));
		float L_50 = __this->___m_ChildMaxWidth_24;
		int32_t L_51 = V_0;
		int32_t L_52 = V_1;
		__this->___m_ChildMaxWidth_24 = ((float)il2cpp_codegen_subtract(L_50, ((float)((int32_t)il2cpp_codegen_add(L_51, L_52)))));
		goto IL_02fa;
	}

IL_0181:
	{
		V_12 = 0;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_53 = __this->___entries_11;
		NullCheck(L_53);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_54;
		L_54 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_53, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_13 = L_54;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0291:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_13), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0283_1;
			}

IL_0198_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_55;
				L_55 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_13), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_14 = L_55;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_56 = V_14;
				NullCheck(L_56);
				VirtualActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_56);
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_57 = V_14;
				NullCheck(L_57);
				bool L_58 = L_57->___consideredForMargin_7;
				V_16 = L_58;
				bool L_59 = V_16;
				if (!L_59)
				{
					goto IL_0244_1;
				}
			}
			{
				bool L_60 = V_2;
				V_17 = (bool)((((int32_t)L_60) == ((int32_t)0))? 1 : 0);
				bool L_61 = V_17;
				if (!L_61)
				{
					goto IL_01df_1;
				}
			}
			{
				int32_t L_62 = V_12;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_63 = V_14;
				NullCheck(L_63);
				int32_t L_64;
				L_64 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_63);
				if ((((int32_t)L_62) > ((int32_t)L_64)))
				{
					goto IL_01d9_1;
				}
			}
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_65 = V_14;
				NullCheck(L_65);
				int32_t L_66;
				L_66 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_65);
				G_B22_0 = L_66;
				goto IL_01db_1;
			}

IL_01d9_1:
			{
				int32_t L_67 = V_12;
				G_B22_0 = L_67;
			}

IL_01db_1:
			{
				V_15 = G_B22_0;
				goto IL_01e6_1;
			}

IL_01df_1:
			{
				V_15 = 0;
				V_2 = (bool)0;
			}

IL_01e6_1:
			{
				float L_68 = __this->___m_ChildMinWidth_23;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_69 = V_14;
				NullCheck(L_69);
				float L_70 = L_69->___minWidth_0;
				float L_71 = __this->___spacing_14;
				int32_t L_72 = V_15;
				__this->___m_ChildMinWidth_23 = ((float)il2cpp_codegen_add(L_68, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_70, L_71)), ((float)L_72)))));
				float L_73 = __this->___m_ChildMaxWidth_24;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_74 = V_14;
				NullCheck(L_74);
				float L_75 = L_74->___maxWidth_1;
				float L_76 = __this->___spacing_14;
				int32_t L_77 = V_15;
				__this->___m_ChildMaxWidth_24 = ((float)il2cpp_codegen_add(L_73, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_75, L_76)), ((float)L_77)))));
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_78 = V_14;
				NullCheck(L_78);
				int32_t L_79;
				L_79 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_78);
				V_12 = L_79;
				int32_t L_80 = __this->___m_StretchableCountX_19;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_81 = V_14;
				NullCheck(L_81);
				int32_t L_82 = L_81->___stretchWidth_5;
				__this->___m_StretchableCountX_19 = ((int32_t)il2cpp_codegen_add(L_80, L_82));
				goto IL_0282_1;
			}

IL_0244_1:
			{
				float L_83 = __this->___m_ChildMinWidth_23;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_84 = V_14;
				NullCheck(L_84);
				float L_85 = L_84->___minWidth_0;
				__this->___m_ChildMinWidth_23 = ((float)il2cpp_codegen_add(L_83, L_85));
				float L_86 = __this->___m_ChildMaxWidth_24;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_87 = V_14;
				NullCheck(L_87);
				float L_88 = L_87->___maxWidth_1;
				__this->___m_ChildMaxWidth_24 = ((float)il2cpp_codegen_add(L_86, L_88));
				int32_t L_89 = __this->___m_StretchableCountX_19;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_90 = V_14;
				NullCheck(L_90);
				int32_t L_91 = L_90->___stretchWidth_5;
				__this->___m_StretchableCountX_19 = ((int32_t)il2cpp_codegen_add(L_89, L_91));
			}

IL_0282_1:
			{
			}

IL_0283_1:
			{
				bool L_92;
				L_92 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_13), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_92)
				{
					goto IL_0198_1;
				}
			}
			{
				goto IL_02a0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02a0:
	{
		float L_93 = __this->___m_ChildMinWidth_23;
		float L_94 = __this->___spacing_14;
		__this->___m_ChildMinWidth_23 = ((float)il2cpp_codegen_subtract(L_93, L_94));
		float L_95 = __this->___m_ChildMaxWidth_24;
		float L_96 = __this->___spacing_14;
		__this->___m_ChildMaxWidth_24 = ((float)il2cpp_codegen_subtract(L_95, L_96));
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_97 = __this->___entries_11;
		NullCheck(L_97);
		int32_t L_98;
		L_98 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_97, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		V_18 = (bool)((!(((uint32_t)L_98) <= ((uint32_t)0)))? 1 : 0);
		bool L_99 = V_18;
		if (!L_99)
		{
			goto IL_02f3;
		}
	}
	{
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_100 = __this->___entries_11;
		NullCheck(L_100);
		GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_101;
		L_101 = List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360(L_100, 0, List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var);
		NullCheck(L_101);
		int32_t L_102;
		L_102 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_101);
		V_0 = L_102;
		int32_t L_103 = V_12;
		V_1 = L_103;
		goto IL_02f9;
	}

IL_02f3:
	{
		int32_t L_104 = 0;
		V_1 = L_104;
		V_0 = L_104;
	}

IL_02f9:
	{
	}

IL_02fa:
	{
		V_3 = (0.0f);
		V_4 = (0.0f);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_105;
		L_105 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_106;
		L_106 = GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938(NULL);
		if ((!(((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_105) == ((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_106))))
		{
			goto IL_031c;
		}
	}
	{
		bool L_107 = __this->___m_UserSpecifiedWidth_21;
		G_B37_0 = ((int32_t)(L_107));
		goto IL_031d;
	}

IL_031c:
	{
		G_B37_0 = 1;
	}

IL_031d:
	{
		V_19 = (bool)G_B37_0;
		bool L_108 = V_19;
		if (!L_108)
		{
			goto IL_0358;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_109;
		L_109 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_109);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_110;
		L_110 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_109, NULL);
		NullCheck(L_110);
		int32_t L_111;
		L_111 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_110, NULL);
		int32_t L_112 = V_0;
		int32_t L_113;
		L_113 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_111, L_112, NULL);
		V_3 = ((float)L_113);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_114;
		L_114 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_114);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_115;
		L_115 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_114, NULL);
		NullCheck(L_115);
		int32_t L_116;
		L_116 = RectOffset_get_right_m07C826B0BC79B0CBC01F5FF489D456C553F047BF(L_115, NULL);
		int32_t L_117 = V_1;
		int32_t L_118;
		L_118 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_116, L_117, NULL);
		V_4 = ((float)L_118);
		goto IL_0371;
	}

IL_0358:
	{
		int32_t L_119 = V_0;
		__this->___m_MarginLeft_27 = L_119;
		int32_t L_120 = V_1;
		__this->___m_MarginRight_28 = L_120;
		float L_121 = (0.0f);
		V_4 = L_121;
		V_3 = L_121;
	}

IL_0371:
	{
		float L_122 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0;
		float L_123 = __this->___m_ChildMinWidth_23;
		float L_124 = V_3;
		float L_125 = V_4;
		float L_126;
		L_126 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_122, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_123, L_124)), L_125)), NULL);
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = L_126;
		float L_127 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1;
		V_20 = (bool)((((float)L_127) == ((float)(0.0f)))? 1 : 0);
		bool L_128 = V_20;
		if (!L_128)
		{
			goto IL_03da;
		}
	}
	{
		int32_t L_129 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___stretchWidth_5;
		int32_t L_130 = __this->___m_StretchableCountX_19;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_131;
		L_131 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_131);
		bool L_132;
		L_132 = GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37(L_131, NULL);
		G_B42_0 = L_130;
		G_B42_1 = L_129;
		G_B42_2 = __this;
		if (L_132)
		{
			G_B43_0 = L_130;
			G_B43_1 = L_129;
			G_B43_2 = __this;
			goto IL_03be;
		}
	}
	{
		G_B44_0 = 0;
		G_B44_1 = G_B42_0;
		G_B44_2 = G_B42_1;
		G_B44_3 = G_B42_2;
		goto IL_03bf;
	}

IL_03be:
	{
		G_B44_0 = 1;
		G_B44_1 = G_B43_0;
		G_B44_2 = G_B43_1;
		G_B44_3 = G_B43_2;
	}

IL_03bf:
	{
		NullCheck(G_B44_3);
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)G_B44_3)->___stretchWidth_5 = ((int32_t)il2cpp_codegen_add(G_B44_2, ((int32_t)il2cpp_codegen_add(G_B44_1, G_B44_0))));
		float L_133 = __this->___m_ChildMaxWidth_24;
		float L_134 = V_3;
		float L_135 = V_4;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_133, L_134)), L_135));
		goto IL_03e3;
	}

IL_03da:
	{
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___stretchWidth_5 = 0;
	}

IL_03e3:
	{
		float L_136 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1;
		float L_137 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0;
		float L_138;
		L_138 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_136, L_137, NULL);
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = L_138;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_139;
		L_139 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_139);
		float L_140;
		L_140 = GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8(L_139, NULL);
		V_21 = (bool)((((int32_t)((((float)L_140) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_141 = V_21;
		if (!L_141)
		{
			goto IL_043a;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_142;
		L_142 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_142);
		float L_143;
		L_143 = GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8(L_142, NULL);
		float L_144 = L_143;
		V_6 = L_144;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = L_144;
		float L_145 = V_6;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = L_145;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___stretchWidth_5 = 0;
	}

IL_043a:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_SetHorizontal_m37D01CDDE4FAEDB20E0D469805EF96B878DFB5D5 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, float ___0_x, float ___1_width, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_4;
	memset((&V_4), 0, sizeof(V_4));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	bool V_9 = false;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_12;
	memset((&V_12), 0, sizeof(V_12));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_13 = NULL;
	bool V_14 = false;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	int32_t V_18 = 0;
	bool V_19 = false;
	bool V_20 = false;
	float V_21 = 0.0f;
	float V_22 = 0.0f;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_27;
	memset((&V_27), 0, sizeof(V_27));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_28 = NULL;
	float V_29 = 0.0f;
	bool V_30 = false;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	bool V_33 = false;
	int32_t G_B43_0 = 0;
	{
		float L_0 = ___0_x;
		float L_1 = ___1_width;
		GUILayoutEntry_SetHorizontal_m268577E88A2AE5870C14EFDA9CB88C94CAC2ACE9(__this, L_0, L_1, NULL);
		bool L_2 = __this->___resetCoords_13;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		___0_x = (0.0f);
	}

IL_001b:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4;
		L_4 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_4);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_5;
		L_5 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_4, NULL);
		V_0 = L_5;
		bool L_6 = __this->___isVertical_12;
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_01b3;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8;
		L_8 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_9;
		L_9 = GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938(NULL);
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_8) == ((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00fd;
		}
	}
	{
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_11 = __this->___entries_11;
		NullCheck(L_11);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_12;
		L_12 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_11, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_4 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e8:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_4), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00da_1;
			}

IL_005d_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_13;
				L_13 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_4), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_5 = L_13;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_14 = V_5;
				NullCheck(L_14);
				int32_t L_15;
				L_15 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_14);
				RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_16 = V_0;
				NullCheck(L_16);
				int32_t L_17;
				L_17 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_16, NULL);
				int32_t L_18;
				L_18 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_15, L_17, NULL);
				V_6 = ((float)L_18);
				float L_19 = ___0_x;
				float L_20 = V_6;
				V_7 = ((float)il2cpp_codegen_add(L_19, L_20));
				float L_21 = ___1_width;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_22 = V_5;
				NullCheck(L_22);
				int32_t L_23;
				L_23 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_22);
				RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_24 = V_0;
				NullCheck(L_24);
				int32_t L_25;
				L_25 = RectOffset_get_right_m07C826B0BC79B0CBC01F5FF489D456C553F047BF(L_24, NULL);
				int32_t L_26;
				L_26 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_23, L_25, NULL);
				float L_27 = V_6;
				V_8 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_21, ((float)L_26))), L_27));
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_28 = V_5;
				NullCheck(L_28);
				int32_t L_29 = L_28->___stretchWidth_5;
				V_9 = (bool)((!(((uint32_t)L_29) <= ((uint32_t)0)))? 1 : 0);
				bool L_30 = V_9;
				if (!L_30)
				{
					goto IL_00ba_1;
				}
			}
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_31 = V_5;
				float L_32 = V_7;
				float L_33 = V_8;
				NullCheck(L_31);
				VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_31, L_32, L_33);
				goto IL_00d9_1;
			}

IL_00ba_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_34 = V_5;
				float L_35 = V_7;
				float L_36 = V_8;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_37 = V_5;
				NullCheck(L_37);
				float L_38 = L_37->___minWidth_0;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_39 = V_5;
				NullCheck(L_39);
				float L_40 = L_39->___maxWidth_1;
				float L_41;
				L_41 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_36, L_38, L_40, NULL);
				NullCheck(L_34);
				VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_34, L_35, L_41);
			}

IL_00d9_1:
			{
			}

IL_00da_1:
			{
				bool L_42;
				L_42 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_4), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_005d_1;
				}
			}
			{
				goto IL_00f7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f7:
	{
		goto IL_01ad;
	}

IL_00fd:
	{
		float L_43 = ___0_x;
		int32_t L_44;
		L_44 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, __this);
		V_10 = ((float)il2cpp_codegen_subtract(L_43, ((float)L_44)));
		float L_45 = ___1_width;
		int32_t L_46;
		L_46 = GUILayoutEntry_get_marginHorizontal_m9847FB7747542BB322195F9CF4B75F55339CD7B5(__this, NULL);
		V_11 = ((float)il2cpp_codegen_add(L_45, ((float)L_46)));
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_47 = __this->___entries_11;
		NullCheck(L_47);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_48;
		L_48 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_47, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_12 = L_48;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_019d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_12), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0192_1;
			}

IL_0124_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_49;
				L_49 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_12), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_13 = L_49;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_50 = V_13;
				NullCheck(L_50);
				int32_t L_51 = L_50->___stretchWidth_5;
				V_14 = (bool)((!(((uint32_t)L_51) <= ((uint32_t)0)))? 1 : 0);
				bool L_52 = V_14;
				if (!L_52)
				{
					goto IL_0160_1;
				}
			}
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_53 = V_13;
				float L_54 = V_10;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_55 = V_13;
				NullCheck(L_55);
				int32_t L_56;
				L_56 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_55);
				float L_57 = V_11;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_58 = V_13;
				NullCheck(L_58);
				int32_t L_59;
				L_59 = GUILayoutEntry_get_marginHorizontal_m9847FB7747542BB322195F9CF4B75F55339CD7B5(L_58, NULL);
				NullCheck(L_53);
				VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_53, ((float)il2cpp_codegen_add(L_54, ((float)L_56))), ((float)il2cpp_codegen_subtract(L_57, ((float)L_59))));
				goto IL_0191_1;
			}

IL_0160_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_60 = V_13;
				float L_61 = V_10;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_62 = V_13;
				NullCheck(L_62);
				int32_t L_63;
				L_63 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_62);
				float L_64 = V_11;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_65 = V_13;
				NullCheck(L_65);
				int32_t L_66;
				L_66 = GUILayoutEntry_get_marginHorizontal_m9847FB7747542BB322195F9CF4B75F55339CD7B5(L_65, NULL);
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_67 = V_13;
				NullCheck(L_67);
				float L_68 = L_67->___minWidth_0;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_69 = V_13;
				NullCheck(L_69);
				float L_70 = L_69->___maxWidth_1;
				float L_71;
				L_71 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_64, ((float)L_66))), L_68, L_70, NULL);
				NullCheck(L_60);
				VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_60, ((float)il2cpp_codegen_add(L_61, ((float)L_63))), L_71);
			}

IL_0191_1:
			{
			}

IL_0192_1:
			{
				bool L_72;
				L_72 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_12), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_72)
				{
					goto IL_0124_1;
				}
			}
			{
				goto IL_01ac;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01ac:
	{
	}

IL_01ad:
	{
		goto IL_03b2;
	}

IL_01b3:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_73;
		L_73 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_74;
		L_74 = GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938(NULL);
		V_20 = (bool)((((int32_t)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_73) == ((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_74))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_75 = V_20;
		if (!L_75)
		{
			goto IL_0245;
		}
	}
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_76 = V_0;
		NullCheck(L_76);
		int32_t L_77;
		L_77 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_76, NULL);
		V_21 = ((float)L_77);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_78 = V_0;
		NullCheck(L_78);
		int32_t L_79;
		L_79 = RectOffset_get_right_m07C826B0BC79B0CBC01F5FF489D456C553F047BF(L_78, NULL);
		V_22 = ((float)L_79);
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_80 = __this->___entries_11;
		NullCheck(L_80);
		int32_t L_81;
		L_81 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_80, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		V_23 = (bool)((!(((uint32_t)L_81) <= ((uint32_t)0)))? 1 : 0);
		bool L_82 = V_23;
		if (!L_82)
		{
			goto IL_0235;
		}
	}
	{
		float L_83 = V_21;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_84 = __this->___entries_11;
		NullCheck(L_84);
		GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_85;
		L_85 = List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360(L_84, 0, List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var);
		NullCheck(L_85);
		int32_t L_86;
		L_86 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_85);
		float L_87;
		L_87 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_83, ((float)L_86), NULL);
		V_21 = L_87;
		float L_88 = V_22;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_89 = __this->___entries_11;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_90 = __this->___entries_11;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_90, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		NullCheck(L_89);
		GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_92;
		L_92 = List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360(L_89, ((int32_t)il2cpp_codegen_subtract(L_91, 1)), List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var);
		NullCheck(L_92);
		int32_t L_93;
		L_93 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_92);
		float L_94;
		L_94 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_88, ((float)L_93), NULL);
		V_22 = L_94;
	}

IL_0235:
	{
		float L_95 = ___0_x;
		float L_96 = V_21;
		___0_x = ((float)il2cpp_codegen_add(L_95, L_96));
		float L_97 = ___1_width;
		float L_98 = V_22;
		float L_99 = V_21;
		___1_width = ((float)il2cpp_codegen_subtract(L_97, ((float)il2cpp_codegen_add(L_98, L_99))));
	}

IL_0245:
	{
		float L_100 = ___1_width;
		float L_101 = __this->___spacing_14;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_102 = __this->___entries_11;
		NullCheck(L_102);
		int32_t L_103;
		L_103 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_102, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		V_15 = ((float)il2cpp_codegen_subtract(L_100, ((float)il2cpp_codegen_multiply(L_101, ((float)((int32_t)il2cpp_codegen_subtract(L_103, 1)))))));
		V_16 = (0.0f);
		float L_104 = __this->___m_ChildMinWidth_23;
		float L_105 = __this->___m_ChildMaxWidth_24;
		V_24 = (bool)((((int32_t)((((float)L_104) == ((float)L_105))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_106 = V_24;
		if (!L_106)
		{
			goto IL_02a4;
		}
	}
	{
		float L_107 = V_15;
		float L_108 = __this->___m_ChildMinWidth_23;
		float L_109 = __this->___m_ChildMaxWidth_24;
		float L_110 = __this->___m_ChildMinWidth_23;
		float L_111;
		L_111 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(((float)il2cpp_codegen_subtract(L_107, L_108))/((float)il2cpp_codegen_subtract(L_109, L_110)))), (0.0f), (1.0f), NULL);
		V_16 = L_111;
	}

IL_02a4:
	{
		V_17 = (0.0f);
		float L_112 = V_15;
		float L_113 = __this->___m_ChildMaxWidth_24;
		V_25 = (bool)((((float)L_112) > ((float)L_113))? 1 : 0);
		bool L_114 = V_25;
		if (!L_114)
		{
			goto IL_02e1;
		}
	}
	{
		int32_t L_115 = __this->___m_StretchableCountX_19;
		V_26 = (bool)((((int32_t)L_115) > ((int32_t)0))? 1 : 0);
		bool L_116 = V_26;
		if (!L_116)
		{
			goto IL_02e0;
		}
	}
	{
		float L_117 = V_15;
		float L_118 = __this->___m_ChildMaxWidth_24;
		int32_t L_119 = __this->___m_StretchableCountX_19;
		V_17 = ((float)(((float)il2cpp_codegen_subtract(L_117, L_118))/((float)L_119)));
	}

IL_02e0:
	{
	}

IL_02e1:
	{
		V_18 = 0;
		V_19 = (bool)1;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_120 = __this->___entries_11;
		NullCheck(L_120);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_121;
		L_121 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_120, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_27 = L_121;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03a2:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_27), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0394_1;
			}

IL_02fa_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_122;
				L_122 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_27), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_28 = L_122;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_123 = V_28;
				NullCheck(L_123);
				float L_124 = L_123->___minWidth_0;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_125 = V_28;
				NullCheck(L_125);
				float L_126 = L_125->___maxWidth_1;
				float L_127 = V_16;
				float L_128;
				L_128 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_124, L_126, L_127, NULL);
				V_29 = L_128;
				float L_129 = V_29;
				float L_130 = V_17;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_131 = V_28;
				NullCheck(L_131);
				int32_t L_132 = L_131->___stretchWidth_5;
				V_29 = ((float)il2cpp_codegen_add(L_129, ((float)il2cpp_codegen_multiply(L_130, ((float)L_132)))));
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_133 = V_28;
				NullCheck(L_133);
				bool L_134 = L_133->___consideredForMargin_7;
				V_30 = L_134;
				bool L_135 = V_30;
				if (!L_135)
				{
					goto IL_0371_1;
				}
			}
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_136 = V_28;
				NullCheck(L_136);
				int32_t L_137;
				L_137 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_136);
				V_31 = L_137;
				bool L_138 = V_19;
				V_33 = L_138;
				bool L_139 = V_33;
				if (!L_139)
				{
					goto IL_0352_1;
				}
			}
			{
				V_31 = 0;
				V_19 = (bool)0;
			}

IL_0352_1:
			{
				int32_t L_140 = V_18;
				int32_t L_141 = V_31;
				if ((((int32_t)L_140) > ((int32_t)L_141)))
				{
					goto IL_035c_1;
				}
			}
			{
				int32_t L_142 = V_31;
				G_B43_0 = L_142;
				goto IL_035e_1;
			}

IL_035c_1:
			{
				int32_t L_143 = V_18;
				G_B43_0 = L_143;
			}

IL_035e_1:
			{
				V_32 = G_B43_0;
				float L_144 = ___0_x;
				int32_t L_145 = V_32;
				___0_x = ((float)il2cpp_codegen_add(L_144, ((float)L_145)));
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_146 = V_28;
				NullCheck(L_146);
				int32_t L_147;
				L_147 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_146);
				V_18 = L_147;
			}

IL_0371_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_148 = V_28;
				float L_149 = ___0_x;
				float L_150;
				L_150 = bankers_roundf(L_149);
				float L_151 = V_29;
				float L_152;
				L_152 = bankers_roundf(L_151);
				NullCheck(L_148);
				VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_148, L_150, L_152);
				float L_153 = ___0_x;
				float L_154 = V_29;
				float L_155 = __this->___spacing_14;
				___0_x = ((float)il2cpp_codegen_add(L_153, ((float)il2cpp_codegen_add(L_154, L_155))));
			}

IL_0394_1:
			{
				bool L_156;
				L_156 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_27), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_156)
				{
					goto IL_02fa_1;
				}
			}
			{
				goto IL_03b1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03b1:
	{
	}

IL_03b2:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcHeight_mAA9676BD80BAFC48F515ACA00E83FB7E9EE1FC2A (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	float V_5 = 0.0f;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_9;
	memset((&V_9), 0, sizeof(V_9));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_10 = NULL;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_16;
	memset((&V_16), 0, sizeof(V_16));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_17 = NULL;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	int32_t G_B34_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B40_1 = 0;
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* G_B40_2 = NULL;
	int32_t G_B39_0 = 0;
	int32_t G_B39_1 = 0;
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* G_B39_2 = NULL;
	int32_t G_B41_0 = 0;
	int32_t G_B41_1 = 0;
	int32_t G_B41_2 = 0;
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* G_B41_3 = NULL;
	{
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_0 = __this->___entries_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_0, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3;
		L_3 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_3);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_4;
		L_4 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = RectOffset_get_vertical_m43E46D9F313BB617044184A65350E6498A0709F0(L_4, NULL);
		float L_6 = ((float)L_5);
		V_5 = L_6;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_6;
		float L_7 = V_5;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_7;
		goto IL_03fe;
	}

IL_003d:
	{
		V_0 = 0;
		V_1 = 0;
		__this->___m_ChildMinHeight_25 = (0.0f);
		__this->___m_ChildMaxHeight_26 = (0.0f);
		__this->___m_StretchableCountY_20 = 0;
		bool L_8 = __this->___isVertical_12;
		V_6 = L_8;
		bool L_9 = V_6;
		if (!L_9)
		{
			goto IL_01e8;
		}
	}
	{
		V_7 = 0;
		V_8 = (bool)1;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_10 = __this->___entries_11;
		NullCheck(L_10);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_11;
		L_11 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_10, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_9 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_017a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_9), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_016c_1;
			}

IL_0087_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_12;
				L_12 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_9), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_10 = L_12;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_13 = V_10;
				NullCheck(L_13);
				VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_13);
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_14 = V_10;
				NullCheck(L_14);
				bool L_15 = L_14->___consideredForMargin_7;
				V_12 = L_15;
				bool L_16 = V_12;
				if (!L_16)
				{
					goto IL_012d_1;
				}
			}
			{
				bool L_17 = V_8;
				V_13 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
				bool L_18 = V_13;
				if (!L_18)
				{
					goto IL_00c7_1;
				}
			}
			{
				int32_t L_19 = V_7;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_20 = V_10;
				NullCheck(L_20);
				int32_t L_21;
				L_21 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_20);
				int32_t L_22;
				L_22 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_19, L_21, NULL);
				V_11 = L_22;
				goto IL_00cf_1;
			}

IL_00c7_1:
			{
				V_11 = 0;
				V_8 = (bool)0;
			}

IL_00cf_1:
			{
				float L_23 = __this->___m_ChildMinHeight_25;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_24 = V_10;
				NullCheck(L_24);
				float L_25 = L_24->___minHeight_2;
				float L_26 = __this->___spacing_14;
				int32_t L_27 = V_11;
				__this->___m_ChildMinHeight_25 = ((float)il2cpp_codegen_add(L_23, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_25, L_26)), ((float)L_27)))));
				float L_28 = __this->___m_ChildMaxHeight_26;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_29 = V_10;
				NullCheck(L_29);
				float L_30 = L_29->___maxHeight_3;
				float L_31 = __this->___spacing_14;
				int32_t L_32 = V_11;
				__this->___m_ChildMaxHeight_26 = ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_30, L_31)), ((float)L_32)))));
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_33 = V_10;
				NullCheck(L_33);
				int32_t L_34;
				L_34 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_33);
				V_7 = L_34;
				int32_t L_35 = __this->___m_StretchableCountY_20;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_36 = V_10;
				NullCheck(L_36);
				int32_t L_37 = L_36->___stretchHeight_6;
				__this->___m_StretchableCountY_20 = ((int32_t)il2cpp_codegen_add(L_35, L_37));
				goto IL_016b_1;
			}

IL_012d_1:
			{
				float L_38 = __this->___m_ChildMinHeight_25;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_39 = V_10;
				NullCheck(L_39);
				float L_40 = L_39->___minHeight_2;
				__this->___m_ChildMinHeight_25 = ((float)il2cpp_codegen_add(L_38, L_40));
				float L_41 = __this->___m_ChildMaxHeight_26;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_42 = V_10;
				NullCheck(L_42);
				float L_43 = L_42->___maxHeight_3;
				__this->___m_ChildMaxHeight_26 = ((float)il2cpp_codegen_add(L_41, L_43));
				int32_t L_44 = __this->___m_StretchableCountY_20;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_45 = V_10;
				NullCheck(L_45);
				int32_t L_46 = L_45->___stretchHeight_6;
				__this->___m_StretchableCountY_20 = ((int32_t)il2cpp_codegen_add(L_44, L_46));
			}

IL_016b_1:
			{
			}

IL_016c_1:
			{
				bool L_47;
				L_47 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_9), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_47)
				{
					goto IL_0087_1;
				}
			}
			{
				goto IL_0189;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0189:
	{
		float L_48 = __this->___m_ChildMinHeight_25;
		float L_49 = __this->___spacing_14;
		__this->___m_ChildMinHeight_25 = ((float)il2cpp_codegen_subtract(L_48, L_49));
		float L_50 = __this->___m_ChildMaxHeight_26;
		float L_51 = __this->___spacing_14;
		__this->___m_ChildMaxHeight_26 = ((float)il2cpp_codegen_subtract(L_50, L_51));
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_52 = __this->___entries_11;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_52, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		V_14 = (bool)((!(((uint32_t)L_53) <= ((uint32_t)0)))? 1 : 0);
		bool L_54 = V_14;
		if (!L_54)
		{
			goto IL_01dc;
		}
	}
	{
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_55 = __this->___entries_11;
		NullCheck(L_55);
		GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_56;
		L_56 = List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360(L_55, 0, List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var);
		NullCheck(L_56);
		int32_t L_57;
		L_57 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_56);
		V_0 = L_57;
		int32_t L_58 = V_7;
		V_1 = L_58;
		goto IL_01e2;
	}

IL_01dc:
	{
		int32_t L_59 = 0;
		V_0 = L_59;
		V_1 = L_59;
	}

IL_01e2:
	{
		goto IL_02c3;
	}

IL_01e8:
	{
		V_15 = (bool)1;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_60 = __this->___entries_11;
		NullCheck(L_60);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_61;
		L_61 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_60, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_16 = L_61;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02b3:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_16), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_02a5_1;
			}

IL_01ff_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_62;
				L_62 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_16), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_17 = L_62;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_63 = V_17;
				NullCheck(L_63);
				VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_63);
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_64 = V_17;
				NullCheck(L_64);
				bool L_65 = L_64->___consideredForMargin_7;
				V_18 = L_65;
				bool L_66 = V_18;
				if (!L_66)
				{
					goto IL_0290_1;
				}
			}
			{
				bool L_67 = V_15;
				V_19 = (bool)((((int32_t)L_67) == ((int32_t)0))? 1 : 0);
				bool L_68 = V_19;
				if (!L_68)
				{
					goto IL_024a_1;
				}
			}
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_69 = V_17;
				NullCheck(L_69);
				int32_t L_70;
				L_70 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_69);
				int32_t L_71 = V_0;
				int32_t L_72;
				L_72 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_70, L_71, NULL);
				V_0 = L_72;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_73 = V_17;
				NullCheck(L_73);
				int32_t L_74;
				L_74 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_73);
				int32_t L_75 = V_1;
				int32_t L_76;
				L_76 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_74, L_75, NULL);
				V_1 = L_76;
				goto IL_025f_1;
			}

IL_024a_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_77 = V_17;
				NullCheck(L_77);
				int32_t L_78;
				L_78 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_77);
				V_0 = L_78;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_79 = V_17;
				NullCheck(L_79);
				int32_t L_80;
				L_80 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_79);
				V_1 = L_80;
				V_15 = (bool)0;
			}

IL_025f_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_81 = V_17;
				NullCheck(L_81);
				float L_82 = L_81->___minHeight_2;
				float L_83 = __this->___m_ChildMinHeight_25;
				float L_84;
				L_84 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_82, L_83, NULL);
				__this->___m_ChildMinHeight_25 = L_84;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_85 = V_17;
				NullCheck(L_85);
				float L_86 = L_85->___maxHeight_3;
				float L_87 = __this->___m_ChildMaxHeight_26;
				float L_88;
				L_88 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_86, L_87, NULL);
				__this->___m_ChildMaxHeight_26 = L_88;
			}

IL_0290_1:
			{
				int32_t L_89 = __this->___m_StretchableCountY_20;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_90 = V_17;
				NullCheck(L_90);
				int32_t L_91 = L_90->___stretchHeight_6;
				__this->___m_StretchableCountY_20 = ((int32_t)il2cpp_codegen_add(L_89, L_91));
			}

IL_02a5_1:
			{
				bool L_92;
				L_92 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_16), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_92)
				{
					goto IL_01ff_1;
				}
			}
			{
				goto IL_02c2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02c2:
	{
	}

IL_02c3:
	{
		V_2 = (0.0f);
		V_3 = (0.0f);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_93;
		L_93 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_94;
		L_94 = GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938(NULL);
		if ((!(((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_93) == ((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_94))))
		{
			goto IL_02e4;
		}
	}
	{
		bool L_95 = __this->___m_UserSpecifiedHeight_22;
		G_B34_0 = ((int32_t)(L_95));
		goto IL_02e5;
	}

IL_02e4:
	{
		G_B34_0 = 1;
	}

IL_02e5:
	{
		V_20 = (bool)G_B34_0;
		bool L_96 = V_20;
		if (!L_96)
		{
			goto IL_031f;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_97;
		L_97 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_97);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_98;
		L_98 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_97, NULL);
		NullCheck(L_98);
		int32_t L_99;
		L_99 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_98, NULL);
		int32_t L_100 = V_0;
		int32_t L_101;
		L_101 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_99, L_100, NULL);
		V_2 = ((float)L_101);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_102;
		L_102 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_102);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_103;
		L_103 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_102, NULL);
		NullCheck(L_103);
		int32_t L_104;
		L_104 = RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B(L_103, NULL);
		int32_t L_105 = V_1;
		int32_t L_106;
		L_106 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_104, L_105, NULL);
		V_3 = ((float)L_106);
		goto IL_0337;
	}

IL_031f:
	{
		int32_t L_107 = V_0;
		__this->___m_MarginTop_29 = L_107;
		int32_t L_108 = V_1;
		__this->___m_MarginBottom_30 = L_108;
		float L_109 = (0.0f);
		V_3 = L_109;
		V_2 = L_109;
	}

IL_0337:
	{
		float L_110 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		float L_111 = __this->___m_ChildMinHeight_25;
		float L_112 = V_2;
		float L_113 = V_3;
		float L_114;
		L_114 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_110, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_111, L_112)), L_113)), NULL);
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_114;
		float L_115 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		V_21 = (bool)((((float)L_115) == ((float)(0.0f)))? 1 : 0);
		bool L_116 = V_21;
		if (!L_116)
		{
			goto IL_039e;
		}
	}
	{
		int32_t L_117 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___stretchHeight_6;
		int32_t L_118 = __this->___m_StretchableCountY_20;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_119;
		L_119 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_119);
		bool L_120;
		L_120 = GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F(L_119, NULL);
		G_B39_0 = L_118;
		G_B39_1 = L_117;
		G_B39_2 = __this;
		if (L_120)
		{
			G_B40_0 = L_118;
			G_B40_1 = L_117;
			G_B40_2 = __this;
			goto IL_0383;
		}
	}
	{
		G_B41_0 = 0;
		G_B41_1 = G_B39_0;
		G_B41_2 = G_B39_1;
		G_B41_3 = G_B39_2;
		goto IL_0384;
	}

IL_0383:
	{
		G_B41_0 = 1;
		G_B41_1 = G_B40_0;
		G_B41_2 = G_B40_1;
		G_B41_3 = G_B40_2;
	}

IL_0384:
	{
		NullCheck(G_B41_3);
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)G_B41_3)->___stretchHeight_6 = ((int32_t)il2cpp_codegen_add(G_B41_2, ((int32_t)il2cpp_codegen_add(G_B41_1, G_B41_0))));
		float L_121 = __this->___m_ChildMaxHeight_26;
		float L_122 = V_2;
		float L_123 = V_3;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_121, L_122)), L_123));
		goto IL_03a7;
	}

IL_039e:
	{
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___stretchHeight_6 = 0;
	}

IL_03a7:
	{
		float L_124 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		float L_125 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		float L_126;
		L_126 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_124, L_125, NULL);
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_126;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_127;
		L_127 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_127);
		float L_128;
		L_128 = GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A(L_127, NULL);
		V_22 = (bool)((((int32_t)((((float)L_128) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_129 = V_22;
		if (!L_129)
		{
			goto IL_03fe;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_130;
		L_130 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_130);
		float L_131;
		L_131 = GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A(L_130, NULL);
		float L_132 = L_131;
		V_5 = L_132;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_132;
		float L_133 = V_5;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_133;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___stretchHeight_6 = 0;
	}

IL_03fe:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_SetVertical_m28ADC75A1C5148E22EDD149221535C4B97BC5FE2 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, float ___0_y, float ___1_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_16;
	memset((&V_16), 0, sizeof(V_16));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_17 = NULL;
	float V_18 = 0.0f;
	bool V_19 = false;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	bool V_22 = false;
	bool V_23 = false;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_24;
	memset((&V_24), 0, sizeof(V_24));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_25 = NULL;
	float V_26 = 0.0f;
	float V_27 = 0.0f;
	float V_28 = 0.0f;
	bool V_29 = false;
	float V_30 = 0.0f;
	float V_31 = 0.0f;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_32;
	memset((&V_32), 0, sizeof(V_32));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_33 = NULL;
	bool V_34 = false;
	int32_t G_B23_0 = 0;
	{
		float L_0 = ___0_y;
		float L_1 = ___1_height;
		GUILayoutEntry_SetVertical_mA20893626441C55001C1940C53A6A100DD22D61F(__this, L_0, L_1, NULL);
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_2 = __this->___entries_11;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_2, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_03c7;
	}

IL_0021:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_5;
		L_5 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_5);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_6;
		L_6 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_5, NULL);
		V_0 = L_6;
		bool L_7 = __this->___resetCoords_13;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		___0_y = (0.0f);
	}

IL_003e:
	{
		bool L_9 = __this->___isVertical_12;
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_024d;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_11;
		L_11 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_12;
		L_12 = GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938(NULL);
		V_9 = (bool)((((int32_t)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_11) == ((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_9;
		if (!L_13)
		{
			goto IL_00dd;
		}
	}
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_14, NULL);
		V_10 = ((float)L_15);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B(L_16, NULL);
		V_11 = ((float)L_17);
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_18 = __this->___entries_11;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_18, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		V_12 = (bool)((!(((uint32_t)L_19) <= ((uint32_t)0)))? 1 : 0);
		bool L_20 = V_12;
		if (!L_20)
		{
			goto IL_00cd;
		}
	}
	{
		float L_21 = V_10;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_22 = __this->___entries_11;
		NullCheck(L_22);
		GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_23;
		L_23 = List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360(L_22, 0, List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_23);
		float L_25;
		L_25 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_21, ((float)L_24), NULL);
		V_10 = L_25;
		float L_26 = V_11;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_27 = __this->___entries_11;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_28 = __this->___entries_11;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_28, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		NullCheck(L_27);
		GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_30;
		L_30 = List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360(L_27, ((int32_t)il2cpp_codegen_subtract(L_29, 1)), List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_30);
		float L_32;
		L_32 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_26, ((float)L_31), NULL);
		V_11 = L_32;
	}

IL_00cd:
	{
		float L_33 = ___0_y;
		float L_34 = V_10;
		___0_y = ((float)il2cpp_codegen_add(L_33, L_34));
		float L_35 = ___1_height;
		float L_36 = V_11;
		float L_37 = V_10;
		___1_height = ((float)il2cpp_codegen_subtract(L_35, ((float)il2cpp_codegen_add(L_36, L_37))));
	}

IL_00dd:
	{
		float L_38 = ___1_height;
		float L_39 = __this->___spacing_14;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_40 = __this->___entries_11;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_40, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		V_4 = ((float)il2cpp_codegen_subtract(L_38, ((float)il2cpp_codegen_multiply(L_39, ((float)((int32_t)il2cpp_codegen_subtract(L_41, 1)))))));
		V_5 = (0.0f);
		float L_42 = __this->___m_ChildMinHeight_25;
		float L_43 = __this->___m_ChildMaxHeight_26;
		V_13 = (bool)((((int32_t)((((float)L_42) == ((float)L_43))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_13;
		if (!L_44)
		{
			goto IL_013c;
		}
	}
	{
		float L_45 = V_4;
		float L_46 = __this->___m_ChildMinHeight_25;
		float L_47 = __this->___m_ChildMaxHeight_26;
		float L_48 = __this->___m_ChildMinHeight_25;
		float L_49;
		L_49 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(((float)il2cpp_codegen_subtract(L_45, L_46))/((float)il2cpp_codegen_subtract(L_47, L_48)))), (0.0f), (1.0f), NULL);
		V_5 = L_49;
	}

IL_013c:
	{
		V_6 = (0.0f);
		float L_50 = V_4;
		float L_51 = __this->___m_ChildMaxHeight_26;
		V_14 = (bool)((((float)L_50) > ((float)L_51))? 1 : 0);
		bool L_52 = V_14;
		if (!L_52)
		{
			goto IL_0177;
		}
	}
	{
		int32_t L_53 = __this->___m_StretchableCountY_20;
		V_15 = (bool)((((int32_t)L_53) > ((int32_t)0))? 1 : 0);
		bool L_54 = V_15;
		if (!L_54)
		{
			goto IL_0176;
		}
	}
	{
		float L_55 = V_4;
		float L_56 = __this->___m_ChildMaxHeight_26;
		int32_t L_57 = __this->___m_StretchableCountY_20;
		V_6 = ((float)(((float)il2cpp_codegen_subtract(L_55, L_56))/((float)L_57)));
	}

IL_0176:
	{
	}

IL_0177:
	{
		V_7 = 0;
		V_8 = (bool)1;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_58 = __this->___entries_11;
		NullCheck(L_58);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_59;
		L_59 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_58, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_16 = L_59;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0238:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_16), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_022a_1;
			}

IL_0190_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_60;
				L_60 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_16), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_17 = L_60;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_61 = V_17;
				NullCheck(L_61);
				float L_62 = L_61->___minHeight_2;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_63 = V_17;
				NullCheck(L_63);
				float L_64 = L_63->___maxHeight_3;
				float L_65 = V_5;
				float L_66;
				L_66 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_62, L_64, L_65, NULL);
				V_18 = L_66;
				float L_67 = V_18;
				float L_68 = V_6;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_69 = V_17;
				NullCheck(L_69);
				int32_t L_70 = L_69->___stretchHeight_6;
				V_18 = ((float)il2cpp_codegen_add(L_67, ((float)il2cpp_codegen_multiply(L_68, ((float)L_70)))));
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_71 = V_17;
				NullCheck(L_71);
				bool L_72 = L_71->___consideredForMargin_7;
				V_19 = L_72;
				bool L_73 = V_19;
				if (!L_73)
				{
					goto IL_0207_1;
				}
			}
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_74 = V_17;
				NullCheck(L_74);
				int32_t L_75;
				L_75 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_74);
				V_20 = L_75;
				bool L_76 = V_8;
				V_22 = L_76;
				bool L_77 = V_22;
				if (!L_77)
				{
					goto IL_01e8_1;
				}
			}
			{
				V_20 = 0;
				V_8 = (bool)0;
			}

IL_01e8_1:
			{
				int32_t L_78 = V_7;
				int32_t L_79 = V_20;
				if ((((int32_t)L_78) > ((int32_t)L_79)))
				{
					goto IL_01f2_1;
				}
			}
			{
				int32_t L_80 = V_20;
				G_B23_0 = L_80;
				goto IL_01f4_1;
			}

IL_01f2_1:
			{
				int32_t L_81 = V_7;
				G_B23_0 = L_81;
			}

IL_01f4_1:
			{
				V_21 = G_B23_0;
				float L_82 = ___0_y;
				int32_t L_83 = V_21;
				___0_y = ((float)il2cpp_codegen_add(L_82, ((float)L_83)));
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_84 = V_17;
				NullCheck(L_84);
				int32_t L_85;
				L_85 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_84);
				V_7 = L_85;
			}

IL_0207_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_86 = V_17;
				float L_87 = ___0_y;
				float L_88;
				L_88 = bankers_roundf(L_87);
				float L_89 = V_18;
				float L_90;
				L_90 = bankers_roundf(L_89);
				NullCheck(L_86);
				VirtualActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_86, L_88, L_90);
				float L_91 = ___0_y;
				float L_92 = V_18;
				float L_93 = __this->___spacing_14;
				___0_y = ((float)il2cpp_codegen_add(L_91, ((float)il2cpp_codegen_add(L_92, L_93))));
			}

IL_022a_1:
			{
				bool L_94;
				L_94 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_16), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_94)
				{
					goto IL_0190_1;
				}
			}
			{
				goto IL_0247;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0247:
	{
		goto IL_03c7;
	}

IL_024d:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_95;
		L_95 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_96;
		L_96 = GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938(NULL);
		V_23 = (bool)((((int32_t)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_95) == ((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_96))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_97 = V_23;
		if (!L_97)
		{
			goto IL_0318;
		}
	}
	{
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_98 = __this->___entries_11;
		NullCheck(L_98);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_99;
		L_99 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_98, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_24 = L_99;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0303:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_24), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_02f5_1;
			}

IL_0278_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_100;
				L_100 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_24), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_25 = L_100;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_101 = V_25;
				NullCheck(L_101);
				int32_t L_102;
				L_102 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_101);
				RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_103 = V_0;
				NullCheck(L_103);
				int32_t L_104;
				L_104 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_103, NULL);
				int32_t L_105;
				L_105 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_102, L_104, NULL);
				V_26 = ((float)L_105);
				float L_106 = ___0_y;
				float L_107 = V_26;
				V_27 = ((float)il2cpp_codegen_add(L_106, L_107));
				float L_108 = ___1_height;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_109 = V_25;
				NullCheck(L_109);
				int32_t L_110;
				L_110 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_109);
				RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_111 = V_0;
				NullCheck(L_111);
				int32_t L_112;
				L_112 = RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B(L_111, NULL);
				int32_t L_113;
				L_113 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_110, L_112, NULL);
				float L_114 = V_26;
				V_28 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_108, ((float)L_113))), L_114));
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_115 = V_25;
				NullCheck(L_115);
				int32_t L_116 = L_115->___stretchHeight_6;
				V_29 = (bool)((!(((uint32_t)L_116) <= ((uint32_t)0)))? 1 : 0);
				bool L_117 = V_29;
				if (!L_117)
				{
					goto IL_02d5_1;
				}
			}
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_118 = V_25;
				float L_119 = V_27;
				float L_120 = V_28;
				NullCheck(L_118);
				VirtualActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_118, L_119, L_120);
				goto IL_02f4_1;
			}

IL_02d5_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_121 = V_25;
				float L_122 = V_27;
				float L_123 = V_28;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_124 = V_25;
				NullCheck(L_124);
				float L_125 = L_124->___minHeight_2;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_126 = V_25;
				NullCheck(L_126);
				float L_127 = L_126->___maxHeight_3;
				float L_128;
				L_128 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_123, L_125, L_127, NULL);
				NullCheck(L_121);
				VirtualActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_121, L_122, L_128);
			}

IL_02f4_1:
			{
			}

IL_02f5_1:
			{
				bool L_129;
				L_129 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_24), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_129)
				{
					goto IL_0278_1;
				}
			}
			{
				goto IL_0312;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0312:
	{
		goto IL_03c6;
	}

IL_0318:
	{
		float L_130 = ___0_y;
		int32_t L_131;
		L_131 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, __this);
		V_30 = ((float)il2cpp_codegen_subtract(L_130, ((float)L_131)));
		float L_132 = ___1_height;
		int32_t L_133;
		L_133 = GUILayoutEntry_get_marginVertical_mCD309A186E80B22E75DD8F15D2598B9B739C7AD3(__this, NULL);
		V_31 = ((float)il2cpp_codegen_add(L_132, ((float)L_133)));
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_134 = __this->___entries_11;
		NullCheck(L_134);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_135;
		L_135 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_134, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_32 = L_135;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03b6:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_32), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_03ab_1;
			}

IL_033f_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_136;
				L_136 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_32), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_33 = L_136;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_137 = V_33;
				NullCheck(L_137);
				int32_t L_138 = L_137->___stretchHeight_6;
				V_34 = (bool)((!(((uint32_t)L_138) <= ((uint32_t)0)))? 1 : 0);
				bool L_139 = V_34;
				if (!L_139)
				{
					goto IL_0379_1;
				}
			}
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_140 = V_33;
				float L_141 = V_30;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_142 = V_33;
				NullCheck(L_142);
				int32_t L_143;
				L_143 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_142);
				float L_144 = V_31;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_145 = V_33;
				NullCheck(L_145);
				int32_t L_146;
				L_146 = GUILayoutEntry_get_marginVertical_mCD309A186E80B22E75DD8F15D2598B9B739C7AD3(L_145, NULL);
				NullCheck(L_140);
				VirtualActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_140, ((float)il2cpp_codegen_add(L_141, ((float)L_143))), ((float)il2cpp_codegen_subtract(L_144, ((float)L_146))));
				goto IL_03aa_1;
			}

IL_0379_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_147 = V_33;
				float L_148 = V_30;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_149 = V_33;
				NullCheck(L_149);
				int32_t L_150;
				L_150 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_149);
				float L_151 = V_31;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_152 = V_33;
				NullCheck(L_152);
				int32_t L_153;
				L_153 = GUILayoutEntry_get_marginVertical_mCD309A186E80B22E75DD8F15D2598B9B739C7AD3(L_152, NULL);
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_154 = V_33;
				NullCheck(L_154);
				float L_155 = L_154->___minHeight_2;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_156 = V_33;
				NullCheck(L_156);
				float L_157 = L_156->___maxHeight_3;
				float L_158;
				L_158 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_151, ((float)L_153))), L_155, L_157, NULL);
				NullCheck(L_147);
				VirtualActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_147, ((float)il2cpp_codegen_add(L_148, ((float)L_150))), L_158);
			}

IL_03aa_1:
			{
			}

IL_03ab_1:
			{
				bool L_159;
				L_159 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_32), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_159)
				{
					goto IL_033f_1;
				}
			}
			{
				goto IL_03c5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03c5:
	{
	}

IL_03c6:
	{
	}

IL_03c7:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutGroup::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUILayoutGroup_ToString_m7859D80D5D81B23684C4309DA0565D4CE1D2680C (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2119843D49FC28C2274616B4EFB48C1D4F29ED02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4A22FB5EC2C885FFEF93EC0880562530642E93F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_4;
	memset((&V_4), 0, sizeof(V_4));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_5 = NULL;
	String_t* V_6 = NULL;
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_2 = 0;
		goto IL_0021;
	}

IL_0011:
	{
		String_t* L_0 = V_1;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_1 = L_1;
		int32_t L_2 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0021:
	{
		int32_t L_3 = V_2;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		int32_t L_4 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var))->___indent_10;
		V_3 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_3;
		if (L_5)
		{
			goto IL_0011;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		String_t* L_10;
		L_10 = GUILayoutEntry_ToString_mD3785AC5958EB56ECA6E5D325D166C5F5725E615(__this, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralE4A22FB5EC2C885FFEF93EC0880562530642E93F);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralE4A22FB5EC2C885FFEF93EC0880562530642E93F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		float* L_13 = (float*)(&__this->___m_ChildMinHeight_25);
		String_t* L_14;
		L_14 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_13, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral2119843D49FC28C2274616B4EFB48C1D4F29ED02);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2119843D49FC28C2274616B4EFB48C1D4F29ED02);
		String_t* L_16;
		L_16 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_15, NULL);
		V_0 = L_16;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		int32_t L_17 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var))->___indent_10;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var))->___indent_10 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_18 = __this->___entries_11;
		NullCheck(L_18);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_19;
		L_19 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_18, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_4 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_4), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0080_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_20;
				L_20 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_4), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_5 = L_20;
				String_t* L_21 = V_0;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_22 = V_5;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_23 = L_22;
				G_B6_0 = L_23;
				G_B6_1 = L_21;
				if (L_23)
				{
					G_B7_0 = L_23;
					G_B7_1 = L_21;
					goto IL_0094_1;
				}
			}
			{
				G_B8_0 = ((String_t*)(NULL));
				G_B8_1 = G_B6_1;
				goto IL_0099_1;
			}

IL_0094_1:
			{
				NullCheck(G_B7_0);
				String_t* L_24;
				L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B7_0);
				G_B8_0 = L_24;
				G_B8_1 = G_B7_1;
			}

IL_0099_1:
			{
				String_t* L_25;
				L_25 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B8_1, G_B8_0, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
				V_0 = L_25;
			}

IL_00a5_1:
			{
				bool L_26;
				L_26 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_4), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_0080_1;
				}
			}
			{
				goto IL_00bf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bf:
	{
		String_t* L_27 = V_0;
		String_t* L_28 = V_1;
		String_t* L_29;
		L_29 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_27, L_28, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		V_0 = L_29;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		int32_t L_30 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var))->___indent_10;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var))->___indent_10 = ((int32_t)il2cpp_codegen_subtract(L_30, 4));
		String_t* L_31 = V_0;
		V_6 = L_31;
		goto IL_00dd;
	}

IL_00dd:
	{
		String_t* L_32 = V_6;
		return L_32;
	}
}
// System.Void UnityEngine.GUILayoutGroup::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup__cctor_m9214FACB657F5C28173EDCF59DAD85F14E7E2800 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0;
		L_0 = GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938(NULL);
		GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_1 = (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)il2cpp_codegen_object_new(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		il2cpp_codegen_runtime_class_init_inline(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		GUILayoutEntry__ctor_m011B3DA69713EEA6BD98D4056B5ADE01F237E5B2(L_1, (0.0f), (1.0f), (0.0f), (1.0f), L_0, NULL);
		((GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var))->___none_31 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var))->___none_31), (void*)L_1);
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
// System.Void UnityEngine.GUIScrollGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup__ctor_m95351A883B27B71698A4B84815CEA687D109F3FB (GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___allowHorizontalScroll_38 = (bool)1;
		__this->___allowVerticalScroll_39 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup_CalcWidth_m6B927DBF94A8940301A9FB64190403E5667712CE (GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		float L_0 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0;
		V_0 = L_0;
		float L_1 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1;
		V_1 = L_1;
		bool L_2 = __this->___allowHorizontalScroll_38;
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = (0.0f);
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = (0.0f);
	}

IL_0031:
	{
		GUILayoutGroup_CalcWidth_mFA744462378028538F1E3AAB39CB6AF0FBB1851B(__this, NULL);
		float L_4 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0;
		__this->___calcMinWidth_32 = L_4;
		float L_5 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1;
		__this->___calcMaxWidth_33 = L_5;
		bool L_6 = __this->___allowHorizontalScroll_38;
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_00b3;
		}
	}
	{
		float L_8 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0;
		V_4 = (bool)((((float)L_8) > ((float)(32.0f)))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0079;
		}
	}
	{
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = (32.0f);
	}

IL_0079:
	{
		float L_10 = V_0;
		V_5 = (bool)((((int32_t)((((float)L_10) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0091;
		}
	}
	{
		float L_12 = V_0;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = L_12;
	}

IL_0091:
	{
		float L_13 = V_1;
		V_6 = (bool)((((int32_t)((((float)L_13) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_00b2;
		}
	}
	{
		float L_15 = V_1;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = L_15;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___stretchWidth_5 = 0;
	}

IL_00b2:
	{
	}

IL_00b3:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetHorizontal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup_SetHorizontal_m31FCDD252E67D51FC954C8E2C358BA0EB3AD7601 (GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5* __this, float ___0_x, float ___1_width, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	float G_B3_0 = 0.0f;
	int32_t G_B6_0 = 0;
	{
		bool L_0 = __this->___needsVerticalScrollbar_41;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		float L_1 = ___1_width;
		G_B3_0 = L_1;
		goto IL_002b;
	}

IL_000c:
	{
		float L_2 = ___1_width;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = __this->___verticalScrollbar_43;
		NullCheck(L_3);
		float L_4;
		L_4 = GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8(L_3, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_5 = __this->___verticalScrollbar_43;
		NullCheck(L_5);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_6;
		L_6 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_6, NULL);
		G_B3_0 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_2, L_4)), ((float)L_7)));
	}

IL_002b:
	{
		V_0 = G_B3_0;
		bool L_8 = __this->___allowHorizontalScroll_38;
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = __this->___calcMinWidth_32;
		G_B6_0 = ((((float)L_9) < ((float)L_10))? 1 : 0);
		goto IL_0040;
	}

IL_003f:
	{
		G_B6_0 = 0;
	}

IL_0040:
	{
		V_1 = (bool)G_B6_0;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_008e;
		}
	}
	{
		__this->___needsHorizontalScrollbar_40 = (bool)1;
		float L_12 = __this->___calcMinWidth_32;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = L_12;
		float L_13 = __this->___calcMaxWidth_33;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = L_13;
		float L_14 = ___0_x;
		float L_15 = __this->___calcMinWidth_32;
		GUILayoutGroup_SetHorizontal_m37D01CDDE4FAEDB20E0D469805EF96B878DFB5D5(__this, L_14, L_15, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_16 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_17 = ___1_width;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_16, L_17, NULL);
		float L_18 = __this->___calcMinWidth_32;
		__this->___clientWidth_36 = L_18;
		goto IL_00d8;
	}

IL_008e:
	{
		__this->___needsHorizontalScrollbar_40 = (bool)0;
		bool L_19 = __this->___allowHorizontalScroll_38;
		V_2 = L_19;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_00ba;
		}
	}
	{
		float L_21 = __this->___calcMinWidth_32;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = L_21;
		float L_22 = __this->___calcMaxWidth_33;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = L_22;
	}

IL_00ba:
	{
		float L_23 = ___0_x;
		float L_24 = V_0;
		GUILayoutGroup_SetHorizontal_m37D01CDDE4FAEDB20E0D469805EF96B878DFB5D5(__this, L_23, L_24, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_25 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_26 = ___1_width;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_25, L_26, NULL);
		float L_27 = V_0;
		__this->___clientWidth_36 = L_27;
	}

IL_00d8:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup_CalcHeight_mCB0CEC4871F6540145949E4CE8242172A75B2E5F (GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		float L_0 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		V_0 = L_0;
		float L_1 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		V_1 = L_1;
		bool L_2 = __this->___allowVerticalScroll_39;
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = (0.0f);
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = (0.0f);
	}

IL_0031:
	{
		GUILayoutGroup_CalcHeight_mAA9676BD80BAFC48F515ACA00E83FB7E9EE1FC2A(__this, NULL);
		float L_4 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		__this->___calcMinHeight_34 = L_4;
		float L_5 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		__this->___calcMaxHeight_35 = L_5;
		bool L_6 = __this->___needsHorizontalScrollbar_40;
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0099;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8 = __this->___horizontalScrollbar_42;
		NullCheck(L_8);
		float L_9;
		L_9 = GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A(L_8, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_10 = __this->___horizontalScrollbar_42;
		NullCheck(L_10);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_11;
		L_11 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_10, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_11, NULL);
		V_4 = ((float)il2cpp_codegen_add(L_9, ((float)L_12)));
		float L_13 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		float L_14 = V_4;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = ((float)il2cpp_codegen_add(L_13, L_14));
		float L_15 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		float L_16 = V_4;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = ((float)il2cpp_codegen_add(L_15, L_16));
	}

IL_0099:
	{
		bool L_17 = __this->___allowVerticalScroll_39;
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00fe;
		}
	}
	{
		float L_19 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		V_6 = (bool)((((float)L_19) > ((float)(32.0f)))? 1 : 0);
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_00c4;
		}
	}
	{
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = (32.0f);
	}

IL_00c4:
	{
		float L_21 = V_0;
		V_7 = (bool)((((int32_t)((((float)L_21) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00dc;
		}
	}
	{
		float L_23 = V_0;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_23;
	}

IL_00dc:
	{
		float L_24 = V_1;
		V_8 = (bool)((((int32_t)((((float)L_24) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_00fd;
		}
	}
	{
		float L_26 = V_1;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_26;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___stretchHeight_6 = 0;
	}

IL_00fd:
	{
	}

IL_00fe:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetVertical(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup_SetVertical_m8609CD909413A7364781818DDE37A314D8795FD6 (GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5* __this, float ___0_y, float ___1_height, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	float V_6 = 0.0f;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B9_0 = 0;
	{
		float L_0 = ___1_height;
		V_0 = L_0;
		bool L_1 = __this->___needsHorizontalScrollbar_40;
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = V_0;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4 = __this->___horizontalScrollbar_42;
		NullCheck(L_4);
		float L_5;
		L_5 = GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A(L_4, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_6 = __this->___horizontalScrollbar_42;
		NullCheck(L_6);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_7;
		L_7 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_6, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_7, NULL);
		V_0 = ((float)il2cpp_codegen_subtract(L_3, ((float)il2cpp_codegen_add(L_5, ((float)L_8)))));
	}

IL_002d:
	{
		bool L_9 = __this->___allowVerticalScroll_39;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		float L_10 = V_0;
		float L_11 = __this->___calcMinHeight_34;
		G_B5_0 = ((((float)L_10) < ((float)L_11))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B5_0 = 0;
	}

IL_0041:
	{
		V_2 = (bool)G_B5_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0151;
		}
	}
	{
		bool L_13 = __this->___needsHorizontalScrollbar_40;
		if (L_13)
		{
			goto IL_005c;
		}
	}
	{
		bool L_14 = __this->___needsVerticalScrollbar_41;
		G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B9_0 = 0;
	}

IL_005d:
	{
		V_5 = (bool)G_B9_0;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_00f1;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_16 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_17;
		L_17 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_16, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_18 = __this->___verticalScrollbar_43;
		NullCheck(L_18);
		float L_19;
		L_19 = GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8(L_18, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_20 = __this->___verticalScrollbar_43;
		NullCheck(L_20);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_21;
		L_21 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_20, NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_21, NULL);
		__this->___clientWidth_36 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_17, L_19)), ((float)L_22)));
		float L_23 = __this->___clientWidth_36;
		float L_24 = __this->___calcMinWidth_32;
		V_7 = (bool)((((float)L_23) < ((float)L_24))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00b6;
		}
	}
	{
		float L_26 = __this->___calcMinWidth_32;
		__this->___clientWidth_36 = L_26;
	}

IL_00b6:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_27 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_28;
		L_28 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_27, NULL);
		V_6 = L_28;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_29 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_30;
		L_30 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_29, NULL);
		float L_31 = __this->___clientWidth_36;
		VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, __this, L_30, L_31);
		VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, __this);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_32 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_33 = V_6;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_32, L_33, NULL);
	}

IL_00f1:
	{
		float L_34 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		V_3 = L_34;
		float L_35 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		V_4 = L_35;
		float L_36 = __this->___calcMinHeight_34;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_36;
		float L_37 = __this->___calcMaxHeight_35;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_37;
		float L_38 = ___0_y;
		float L_39 = __this->___calcMinHeight_34;
		GUILayoutGroup_SetVertical_m28ADC75A1C5148E22EDD149221535C4B97BC5FE2(__this, L_38, L_39, NULL);
		float L_40 = V_3;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_40;
		float L_41 = V_4;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_41;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_42 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_43 = ___1_height;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_42, L_43, NULL);
		float L_44 = __this->___calcMinHeight_34;
		__this->___clientHeight_37 = L_44;
		goto IL_0196;
	}

IL_0151:
	{
		bool L_45 = __this->___allowVerticalScroll_39;
		V_8 = L_45;
		bool L_46 = V_8;
		if (!L_46)
		{
			goto IL_0178;
		}
	}
	{
		float L_47 = __this->___calcMinHeight_34;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_47;
		float L_48 = __this->___calcMaxHeight_35;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_48;
	}

IL_0178:
	{
		float L_49 = ___0_y;
		float L_50 = V_0;
		GUILayoutGroup_SetVertical_m28ADC75A1C5148E22EDD149221535C4B97BC5FE2(__this, L_49, L_50, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_51 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_52 = ___1_height;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_51, L_52, NULL);
		float L_53 = V_0;
		__this->___clientHeight_37 = L_53;
	}

IL_0196:
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
// System.Void UnityEngine.ScrollViewState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollViewState__ctor_m9619262C4C72300A8B26011F627C68DF67425E53 (ScrollViewState_t004FCCBFB6795BD76582385D6D308D8F9ECF41B6* __this, const RuntimeMethod* method) 
{
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


// Conversion methods for marshalling of: UnityEngine.GUIStyleState
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_back(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyleState
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_cleanup(GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.GUIStyleState
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com_back(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyleState
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com_cleanup(GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.GUIStyleState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState__ctor_mD47FE21F7FD8D786F7E8E4E8C3DCA224F9237AD7 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0;
		L_0 = GUIStyleState_Init_m0D3428E2BA3343F8AC49253DE3AAC54EF07F4873(NULL);
		__this->___m_Ptr_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState__ctor_m74536B867B0F57F8A7DC74E78018830A948E4555 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_sourceStyle, intptr_t ___1_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_sourceStyle;
		__this->___m_SourceStyle_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SourceStyle_1), (void*)L_0);
		intptr_t L_1 = ___1_source;
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
// UnityEngine.GUIStyleState UnityEngine.GUIStyleState::GetGUIStyleState(UnityEngine.GUIStyle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyleState_GetGUIStyleState_m0B273F7909166249E3D98FA410C2D8A72091C7B1 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_sourceStyle, intptr_t ___1_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* V_0 = NULL;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* V_1 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_sourceStyle;
		intptr_t L_1 = ___1_source;
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_2 = (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95*)il2cpp_codegen_object_new(GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GUIStyleState__ctor_m74536B867B0F57F8A7DC74E78018830A948E4555(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_3 = V_0;
		V_1 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.GUIStyleState::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_Finalize_m5CC6FBD8C44AF1091CACD6F7032E73B1114765B2 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_SourceStyle_1;
				V_0 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_1 = V_0;
				if (!L_1)
				{
					goto IL_0023_1;
				}
			}
			{
				GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826(__this, NULL);
				intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				__this->___m_Ptr_0 = L_2;
			}

IL_0023_1:
			{
				goto IL_002d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_background_mD92FC76F8956A8EBB022C3E8EA02822D79F451C4 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyleState_set_background_mD92FC76F8956A8EBB022C3E8EA02822D79F451C4_ftn) (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*);
	static GUIStyleState_set_background_mD92FC76F8956A8EBB022C3E8EA02822D79F451C4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_set_background_mD92FC76F8956A8EBB022C3E8EA02822D79F451C4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184(__this, (&___0_value), NULL);
		return;
	}
}
// System.IntPtr UnityEngine.GUIStyleState::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyleState_Init_m0D3428E2BA3343F8AC49253DE3AAC54EF07F4873 (const RuntimeMethod* method) 
{
	typedef intptr_t (*GUIStyleState_Init_m0D3428E2BA3343F8AC49253DE3AAC54EF07F4873_ftn) ();
	static GUIStyleState_Init_m0D3428E2BA3343F8AC49253DE3AAC54EF07F4873_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Init_m0D3428E2BA3343F8AC49253DE3AAC54EF07F4873_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Init()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyleState::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, const RuntimeMethod* method) 
{
	typedef void (*GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826_ftn) (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95*);
	static GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184_ftn) (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___0_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
























// Conversion methods for marshalling of: UnityEngine.GUIStyle
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_back(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyle
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_cleanup(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled)
{
}
























// Conversion methods for marshalling of: UnityEngine.GUIStyle
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com_back(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyle
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com_cleanup(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = GUIStyle_Internal_Create_m2C5F872F6FE8C423759017DC72267D6AF637BC75(__this, NULL);
		__this->___m_Ptr_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral427F9C39B825298A84F532F59ACB9D4467A1137C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_other;
		V_0 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral427F9C39B825298A84F532F59ACB9D4467A1137C, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2;
		L_2 = GUISkin_get_error_mB953A37C8F3296E529190A34E18506C735848C01(NULL);
		___0_other = L_2;
	}

IL_0024:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = ___0_other;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = GUIStyle_Internal_Copy_mA4890B0E0133B4494B696F2F42712F393C508FC5(__this, L_3, NULL);
		__this->___m_Ptr_0 = L_4;
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Finalize_mFF6A6FBA538B711A6ED369DD83A41F25DE6EEE85 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				intptr_t L_0 = __this->___m_Ptr_0;
				intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_2;
				L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
				V_0 = L_2;
				bool L_3 = V_0;
				if (!L_3)
				{
					goto IL_002f_1;
				}
			}
			{
				intptr_t L_4 = __this->___m_Ptr_0;
				il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
				GUIStyle_Internal_Destroy_mD93F2F454B69DB5C534AF9F4F6D847F955A39977(L_4, NULL);
				intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				__this->___m_Ptr_0 = L_5;
			}

IL_002f_1:
			{
				goto IL_0039;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		return;
	}
}
// System.String UnityEngine.GUIStyle::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_get_name_mDF9EF43C46A0B9431DAF4EB0CE1D18EA32E16B75 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = __this->___m_Name_13;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001a;
		}
	}
	{
		String_t* L_2;
		L_2 = GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782(__this, NULL);
		String_t* L_3 = L_2;
		V_0 = L_3;
		__this->___m_Name_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Name_13), (void*)L_3);
		String_t* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_001a:
	{
		V_1 = G_B2_0;
		goto IL_001d;
	}

IL_001d:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.GUIStyle::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___m_Name_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Name_13), (void*)L_0);
		String_t* L_1 = ___0_value;
		GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6(__this, L_1, NULL);
		return;
	}
}
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* V_0 = NULL;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* V_1 = NULL;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* G_B2_0 = NULL;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* G_B1_0 = NULL;
	{
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_0 = __this->___m_Normal_1;
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		intptr_t L_2;
		L_2 = GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB(__this, 0, NULL);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_3;
		L_3 = GUIStyleState_GetGUIStyleState_m0B273F7909166249E3D98FA410C2D8A72091C7B1(__this, L_2, NULL);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_4 = L_3;
		V_0 = L_4;
		__this->___m_Normal_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Normal_1), (void*)L_4);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0021:
	{
		V_1 = G_B2_0;
		goto IL_0024;
	}

IL_0024:
	{
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_border()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* GUIStyle_get_border_m0155A8D115DB5A640D0FC53E45D7B618F27CFDED (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_1 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B2_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B1_0 = NULL;
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_0 = __this->___m_Border_9;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		intptr_t L_2;
		L_2 = GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593(__this, 0, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_3 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RectOffset__ctor_m0711AF5DF27B8F3EC6CAF54755CDE46B76C00DBE(L_3, __this, L_2, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_4 = L_3;
		V_0 = L_4;
		__this->___m_Border_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Border_9), (void*)L_4);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0021:
	{
		V_1 = G_B2_0;
		goto IL_0024;
	}

IL_0024:
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_1 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B2_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B1_0 = NULL;
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_0 = __this->___m_Margin_11;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		intptr_t L_2;
		L_2 = GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593(__this, 1, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_3 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RectOffset__ctor_m0711AF5DF27B8F3EC6CAF54755CDE46B76C00DBE(L_3, __this, L_2, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_4 = L_3;
		V_0 = L_4;
		__this->___m_Margin_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Margin_11), (void*)L_4);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0021:
	{
		V_1 = G_B2_0;
		goto IL_0024;
	}

IL_0024:
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_1 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B2_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B1_0 = NULL;
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_0 = __this->___m_Padding_10;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		intptr_t L_2;
		L_2 = GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593(__this, 2, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_3 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RectOffset__ctor_m0711AF5DF27B8F3EC6CAF54755CDE46B76C00DBE(L_3, __this, L_2, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_4 = L_3;
		V_0 = L_4;
		__this->___m_Padding_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Padding_10), (void*)L_4);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0021:
	{
		V_1 = G_B2_0;
		goto IL_0024;
	}

IL_0024:
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_padding_m0C69415588C6032B372A48B1A1366CF43A083E14 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___0_value, const RuntimeMethod* method) 
{
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_0 = ___0_value;
		NullCheck(L_0);
		intptr_t L_1 = L_0->___m_Ptr_0;
		GUIStyle_AssignRectOffset_m5E532DA0461647A0C0E19345BEFF3B6AA25D204B(__this, 2, L_1, NULL);
		return;
	}
}
// System.Single UnityEngine.GUIStyle::get_lineHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_lineHeight_mC814199D1ABA3CE38358BA70347562B0CDFEB96E (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = GUIStyle_Internal_GetLineHeight_m3A90D425C25B10618B8A3D95AEF72FCB1C574B07(L_0, NULL);
		float L_2;
		L_2 = bankers_roundf(L_1);
		return L_2;
	}
}
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Draw_m7B978F5F5B576810CF8546142D23FD9990E002D8 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, bool ___2_isHover, bool ___3_isActive, bool ___4_on, bool ___5_hasKeyboardFocus, const RuntimeMethod* method) 
{
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_position;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = ___1_content;
		bool L_2 = ___2_isHover;
		bool L_3 = ___3_isActive;
		bool L_4 = ___4_on;
		bool L_5 = ___5_hasKeyboardFocus;
		GUIStyle_Draw_m3DBF8DC58719720455DFC818590D77752BA31008(__this, L_0, L_1, (-1), L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Draw_mACFC9CE57BD530BB6A9592149DD95108A8014406 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_controlID, bool ___3_on, bool ___4_hover, const RuntimeMethod* method) 
{
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_position;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = ___1_content;
		int32_t L_2 = ___2_controlID;
		bool L_3 = ___4_hover;
		int32_t L_4;
		L_4 = GUIUtility_get_hotControl_m6CD6AD33B46A9AFF2261E2C352DC7BAB4C20B026(NULL);
		int32_t L_5 = ___2_controlID;
		bool L_6 = ___3_on;
		int32_t L_7 = ___2_controlID;
		bool L_8;
		L_8 = GUIUtility_HasKeyFocus_m6AD234443A7B2AB471E14BE141FC5E8ADD261A0F(L_7, NULL);
		GUIStyle_Draw_m3DBF8DC58719720455DFC818590D77752BA31008(__this, L_0, L_1, L_2, L_3, (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0), L_6, L_8, NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Draw_m3DBF8DC58719720455DFC818590D77752BA31008 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_controlId, bool ___3_isHover, bool ___4_isActive, bool ___5_on, bool ___6_hasKeyboardFocus, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___2_controlId;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = ___0_position;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_3 = ___1_content;
		bool L_4 = ___3_isHover;
		bool L_5 = ___4_isActive;
		bool L_6 = ___5_on;
		bool L_7 = ___6_hasKeyboardFocus;
		GUIStyle_Internal_Draw_mBEFC164F21949135F404FDA678F368FBA8074D50(__this, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		goto IL_0029;
	}

IL_001d:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8 = ___0_position;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_9 = ___1_content;
		int32_t L_10 = ___2_controlId;
		bool L_11 = ___5_on;
		GUIStyle_Internal_Draw2_mD1050A7750AAAEEEEFD4EB6C8C8AFB0591B1221D(__this, L_8, L_9, L_10, L_11, NULL);
	}

IL_0029:
	{
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B2_0 = NULL;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ((GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var))->___s_None_15;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_2, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = L_2;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		((GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var))->___s_None_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var))->___s_None_15), (void*)L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return G_B2_0;
	}
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_GetCursorPixelPosition_m4FFBD3DC05CE503355DF01E57023AC349032CB2F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_cursorStringIndex, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_position;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = ___1_content;
		int32_t L_2 = ___2_cursorStringIndex;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = GUIStyle_Internal_GetCursorPixelPosition_m22C4D9AA182990942EA85B0EA834499EFA0CB0C4(__this, L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UnityEngine.GUIStyle::GetCursorStringIndex(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_GetCursorStringIndex_m9EFA2EC2CF6ACB5B4EAF3E9C4BC356980CBB4515 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_cursorPixelPosition, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_position;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = ___1_content;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___2_cursorPixelPosition;
		int32_t L_3;
		L_3 = GUIStyle_Internal_GetCursorStringIndex_m88FFC09FCA6FD081C34ADC01F899D435AEFA2CC4(__this, L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___0_content;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = GUIStyle_Internal_CalcSize_m6B1D90CF09404B4969678627BE86D43B41C5AF33(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_CalcHeight_m57DA8F6020AE71B561ABCBCE74E0E58FD2ECC5E8 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, float ___1_width, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___0_content;
		float L_1 = ___1_width;
		float L_2;
		L_2 = GUIStyle_Internal_CalcHeight_m12AD4C5012F9E237FAB309CC6C84D3CB9145FF76(__this, L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		float L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.GUIStyle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_ToString_m41A8A58B4D9659047D06EF2A5AE5F170AE198ACF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D5EBA7CCD58DABCEC7A4FD33516FBE9E3482887);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2;
		L_2 = GUIStyle_get_name_mDF9EF43C46A0B9431DAF4EB0CE1D18EA32E16B75(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		String_t* L_3;
		L_3 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(_stringLiteral3D5EBA7CCD58DABCEC7A4FD33516FBE9E3482887, L_1, NULL);
		V_0 = L_3;
		goto IL_001d;
	}

IL_001d:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String UnityEngine.GUIStyle::get_rawName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef String_t* (*GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_rawName()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::set_rawName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, String_t*);
	static GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_rawName(System.String)");
	_il2cpp_icall_func(__this, ___0_value);
}
// UnityEngine.Font UnityEngine.GUIStyle::get_font()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tC95270EA3198038970422D78B74A7F2E218A96B6* GUIStyle_get_font_mBD123E375D357B37F8E1303F288517FD883C1117 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef Font_tC95270EA3198038970422D78B74A7F2E218A96B6* (*GUIStyle_get_font_mBD123E375D357B37F8E1303F288517FD883C1117_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_font_mBD123E375D357B37F8E1303F288517FD883C1117_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_font_mBD123E375D357B37F8E1303F288517FD883C1117_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_font()");
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_font_m6C606026491FAFFAF4B7155AEBF778C1EDC73D33 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_font_m6C606026491FAFFAF4B7155AEBF778C1EDC73D33_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, Font_tC95270EA3198038970422D78B74A7F2E218A96B6*);
	static GUIStyle_set_font_m6C606026491FAFFAF4B7155AEBF778C1EDC73D33_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_font_m6C606026491FAFFAF4B7155AEBF778C1EDC73D33_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_font(UnityEngine.Font)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t);
	static GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_wordWrap_m7A232701F60F4EB8FAFA57F6BAF9F94731DD009C (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_wordWrap_m7A232701F60F4EB8FAFA57F6BAF9F94731DD009C_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, bool);
	static GUIStyle_set_wordWrap_m7A232701F60F4EB8FAFA57F6BAF9F94731DD009C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_wordWrap_m7A232701F60F4EB8FAFA57F6BAF9F94731DD009C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_wordWrap(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.GUIStyle::set_clipping(UnityEngine.TextClipping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_clipping_m02ABC9CACA7C439E73A5635D0EF401EB662204FA (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_clipping_m02ABC9CACA7C439E73A5635D0EF401EB662204FA_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t);
	static GUIStyle_set_clipping_m02ABC9CACA7C439E73A5635D0EF401EB662204FA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_clipping_m02ABC9CACA7C439E73A5635D0EF401EB662204FA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_clipping(UnityEngine.TextClipping)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef float (*GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedWidth()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef float (*GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedHeight()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef bool (*GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchWidth()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef bool (*GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchHeight()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, bool);
	static GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t);
	static GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_fontSize(System.Int32)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.GUIStyle::set_fontStyle(UnityEngine.FontStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontStyle_m4166D61FBF25225F4A85BBEABCECE3F2DCEE714D (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_fontStyle_m4166D61FBF25225F4A85BBEABCECE3F2DCEE714D_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t);
	static GUIStyle_set_fontStyle_m4166D61FBF25225F4A85BBEABCECE3F2DCEE714D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_fontStyle_m4166D61FBF25225F4A85BBEABCECE3F2DCEE714D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_fontStyle(UnityEngine.FontStyle)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.GUIStyle::set_richText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_richText_m44045419099BECD812230D338FBBD6642A589CCD (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_richText_m44045419099BECD812230D338FBBD6642A589CCD_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, bool);
	static GUIStyle_set_richText_m44045419099BECD812230D338FBBD6642A589CCD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_richText_m44045419099BECD812230D338FBBD6642A589CCD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_richText(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.IntPtr UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Create_m2C5F872F6FE8C423759017DC72267D6AF637BC75 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_self, const RuntimeMethod* method) 
{
	typedef intptr_t (*GUIStyle_Internal_Create_m2C5F872F6FE8C423759017DC72267D6AF637BC75_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_Internal_Create_m2C5F872F6FE8C423759017DC72267D6AF637BC75_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Create_m2C5F872F6FE8C423759017DC72267D6AF637BC75_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_self);
	return icallRetVal;
}
// System.IntPtr UnityEngine.GUIStyle::Internal_Copy(UnityEngine.GUIStyle,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Copy_mA4890B0E0133B4494B696F2F42712F393C508FC5 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_self, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___1_other, const RuntimeMethod* method) 
{
	typedef intptr_t (*GUIStyle_Internal_Copy_mA4890B0E0133B4494B696F2F42712F393C508FC5_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_Internal_Copy_mA4890B0E0133B4494B696F2F42712F393C508FC5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Copy_mA4890B0E0133B4494B696F2F42712F393C508FC5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Copy(UnityEngine.GUIStyle,UnityEngine.GUIStyle)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_self, ___1_other);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Destroy_mD93F2F454B69DB5C534AF9F4F6D847F955A39977 (intptr_t ___0_self, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_Internal_Destroy_mD93F2F454B69DB5C534AF9F4F6D847F955A39977_ftn) (intptr_t);
	static GUIStyle_Internal_Destroy_mD93F2F454B69DB5C534AF9F4F6D847F955A39977_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Destroy_mD93F2F454B69DB5C534AF9F4F6D847F955A39977_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___0_self);
}
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_idx, const RuntimeMethod* method) 
{
	typedef intptr_t (*GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t);
	static GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(__this, ___0_idx);
	return icallRetVal;
}
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_idx, const RuntimeMethod* method) 
{
	typedef intptr_t (*GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t);
	static GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(__this, ___0_idx);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::AssignRectOffset(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_AssignRectOffset_m5E532DA0461647A0C0E19345BEFF3B6AA25D204B (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_idx, intptr_t ___1_srcRectOffset, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_AssignRectOffset_m5E532DA0461647A0C0E19345BEFF3B6AA25D204B_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t, intptr_t);
	static GUIStyle_AssignRectOffset_m5E532DA0461647A0C0E19345BEFF3B6AA25D204B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_AssignRectOffset_m5E532DA0461647A0C0E19345BEFF3B6AA25D204B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::AssignRectOffset(System.Int32,System.IntPtr)");
	_il2cpp_icall_func(__this, ___0_idx, ___1_srcRectOffset);
}
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_Internal_GetLineHeight_m3A90D425C25B10618B8A3D95AEF72FCB1C574B07 (intptr_t ___0_target, const RuntimeMethod* method) 
{
	typedef float (*GUIStyle_Internal_GetLineHeight_m3A90D425C25B10618B8A3D95AEF72FCB1C574B07_ftn) (intptr_t);
	static GUIStyle_Internal_GetLineHeight_m3A90D425C25B10618B8A3D95AEF72FCB1C574B07_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_GetLineHeight_m3A90D425C25B10618B8A3D95AEF72FCB1C574B07_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0_target);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::Internal_Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw_mBEFC164F21949135F404FDA678F368FBA8074D50 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_screenRect, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, bool ___2_isHover, bool ___3_isActive, bool ___4_on, bool ___5_hasKeyboardFocus, const RuntimeMethod* method) 
{
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___1_content;
		bool L_1 = ___2_isHover;
		bool L_2 = ___3_isActive;
		bool L_3 = ___4_on;
		bool L_4 = ___5_hasKeyboardFocus;
		GUIStyle_Internal_Draw_Injected_mF4A2332005788106B28CB306FAFF530BE251E09B(__this, (&___0_screenRect), L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Internal_Draw2(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw2_mD1050A7750AAAEEEEFD4EB6C8C8AFB0591B1221D (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_controlID, bool ___3_on, const RuntimeMethod* method) 
{
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___1_content;
		int32_t L_1 = ___2_controlID;
		bool L_2 = ___3_on;
		GUIStyle_Internal_Draw2_Injected_m83867C172C18ED83724AA6600EDE59C55277A138(__this, (&___0_position), L_0, L_1, L_2, NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_Internal_GetCursorPixelPosition_m22C4D9AA182990942EA85B0EA834499EFA0CB0C4 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_cursorStringIndex, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___1_content;
		int32_t L_1 = ___2_cursorStringIndex;
		GUIStyle_Internal_GetCursorPixelPosition_Injected_m9B676ED0A70FE6CC55EC8795CD7348406A4FD815(__this, (&___0_position), L_0, L_1, (&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_Internal_GetCursorStringIndex_m88FFC09FCA6FD081C34ADC01F899D435AEFA2CC4 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_cursorPixelPosition, const RuntimeMethod* method) 
{
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___1_content;
		int32_t L_1;
		L_1 = GUIStyle_Internal_GetCursorStringIndex_Injected_m4C0A3DEF8B90D9A866378C24BB3F7E0169CA12C9(__this, (&___0_position), L_0, (&___2_cursorPixelPosition), NULL);
		return L_1;
	}
}
// System.String UnityEngine.GUIStyle::Internal_GetSelectedRenderedText(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_Internal_GetSelectedRenderedText_m3F9EF55E4958D2C9DE62AC723DBC99EBB80DD002 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_localPosition, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_mContent, int32_t ___2_selectIndex, int32_t ___3_cursorIndex, const RuntimeMethod* method) 
{
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___1_mContent;
		int32_t L_1 = ___2_selectIndex;
		int32_t L_2 = ___3_cursorIndex;
		String_t* L_3;
		L_3 = GUIStyle_Internal_GetSelectedRenderedText_Injected_m1DE280FF00B670FB04D98786E87A7F18D72940E3(__this, (&___0_localPosition), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::Internal_CalcSize(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_Internal_CalcSize_m6B1D90CF09404B4969678627BE86D43B41C5AF33 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___0_content;
		GUIStyle_Internal_CalcSize_Injected_m19617B2C5FF35B1B10B9D31058ABC1EABD31FF48(__this, L_0, (&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(UnityEngine.GUIContent,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_Internal_CalcHeight_m12AD4C5012F9E237FAB309CC6C84D3CB9145FF76 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, float ___1_width, const RuntimeMethod* method) 
{
	typedef float (*GUIStyle_Internal_CalcHeight_m12AD4C5012F9E237FAB309CC6C84D3CB9145FF76_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, float);
	static GUIStyle_Internal_CalcHeight_m12AD4C5012F9E237FAB309CC6C84D3CB9145FF76_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_CalcHeight_m12AD4C5012F9E237FAB309CC6C84D3CB9145FF76_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcHeight(UnityEngine.GUIContent,System.Single)");
	float icallRetVal = _il2cpp_icall_func(__this, ___0_content, ___1_width);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::SetMouseTooltip(System.String,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_SetMouseTooltip_mFF3E22C7330AE180E83AB2929049BCD87B13B21E (String_t* ___0_tooltip, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_screenRect, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_tooltip;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_SetMouseTooltip_Injected_m77EC0702533B68489605E0DE76A6761E1253CC71(L_0, (&___1_screenRect), NULL);
		return;
	}
}
// System.Boolean UnityEngine.GUIStyle::IsTooltipActive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_IsTooltipActive_mAD93F97B98889CA47BF1305F3D4C87D5EE8DD777 (String_t* ___0_tooltip, const RuntimeMethod* method) 
{
	typedef bool (*GUIStyle_IsTooltipActive_mAD93F97B98889CA47BF1305F3D4C87D5EE8DD777_ftn) (String_t*);
	static GUIStyle_IsTooltipActive_mAD93F97B98889CA47BF1305F3D4C87D5EE8DD777_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_IsTooltipActive_mAD93F97B98889CA47BF1305F3D4C87D5EE8DD777_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::IsTooltipActive(System.String)");
	bool icallRetVal = _il2cpp_icall_func(___0_tooltip);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_SetDefaultFont_mD6B98375749805CA5084CA8C5D6A1295359AE0E3 (Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___0_font, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_SetDefaultFont_mD6B98375749805CA5084CA8C5D6A1295359AE0E3_ftn) (Font_tC95270EA3198038970422D78B74A7F2E218A96B6*);
	static GUIStyle_SetDefaultFont_mD6B98375749805CA5084CA8C5D6A1295359AE0E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_SetDefaultFont_mD6B98375749805CA5084CA8C5D6A1295359AE0E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)");
	_il2cpp_icall_func(___0_font);
}
// System.Void UnityEngine.GUIStyle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__cctor_m4B955524A4DAEAAF103D78D9316756CEFA16FB62 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var))->___showKeyboardFocus_14 = (bool)1;
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Internal_Draw_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw_Injected_mF4A2332005788106B28CB306FAFF530BE251E09B (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_screenRect, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, bool ___2_isHover, bool ___3_isActive, bool ___4_on, bool ___5_hasKeyboardFocus, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_Internal_Draw_Injected_mF4A2332005788106B28CB306FAFF530BE251E09B_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, bool, bool, bool, bool);
	static GUIStyle_Internal_Draw_Injected_mF4A2332005788106B28CB306FAFF530BE251E09B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Draw_Injected_mF4A2332005788106B28CB306FAFF530BE251E09B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Draw_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)");
	_il2cpp_icall_func(__this, ___0_screenRect, ___1_content, ___2_isHover, ___3_isActive, ___4_on, ___5_hasKeyboardFocus);
}
// System.Void UnityEngine.GUIStyle::Internal_Draw2_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw2_Injected_m83867C172C18ED83724AA6600EDE59C55277A138 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_controlID, bool ___3_on, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_Internal_Draw2_Injected_m83867C172C18ED83724AA6600EDE59C55277A138_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, int32_t, bool);
	static GUIStyle_Internal_Draw2_Injected_m83867C172C18ED83724AA6600EDE59C55277A138_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Draw2_Injected_m83867C172C18ED83724AA6600EDE59C55277A138_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Draw2_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___0_position, ___1_content, ___2_controlID, ___3_on);
}
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_GetCursorPixelPosition_Injected_m9B676ED0A70FE6CC55EC8795CD7348406A4FD815 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_cursorStringIndex, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___3_ret, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_Internal_GetCursorPixelPosition_Injected_m9B676ED0A70FE6CC55EC8795CD7348406A4FD815_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static GUIStyle_Internal_GetCursorPixelPosition_Injected_m9B676ED0A70FE6CC55EC8795CD7348406A4FD815_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_GetCursorPixelPosition_Injected_m9B676ED0A70FE6CC55EC8795CD7348406A4FD815_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_GetCursorPixelPosition_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___0_position, ___1_content, ___2_cursorStringIndex, ___3_ret);
}
// System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_Internal_GetCursorStringIndex_Injected_m4C0A3DEF8B90D9A866378C24BB3F7E0169CA12C9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___2_cursorPixelPosition, const RuntimeMethod* method) 
{
	typedef int32_t (*GUIStyle_Internal_GetCursorStringIndex_Injected_m4C0A3DEF8B90D9A866378C24BB3F7E0169CA12C9_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static GUIStyle_Internal_GetCursorStringIndex_Injected_m4C0A3DEF8B90D9A866378C24BB3F7E0169CA12C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_GetCursorStringIndex_Injected_m4C0A3DEF8B90D9A866378C24BB3F7E0169CA12C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_GetCursorStringIndex_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,UnityEngine.Vector2&)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___0_position, ___1_content, ___2_cursorPixelPosition);
	return icallRetVal;
}
// System.String UnityEngine.GUIStyle::Internal_GetSelectedRenderedText_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_Internal_GetSelectedRenderedText_Injected_m1DE280FF00B670FB04D98786E87A7F18D72940E3 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_localPosition, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_mContent, int32_t ___2_selectIndex, int32_t ___3_cursorIndex, const RuntimeMethod* method) 
{
	typedef String_t* (*GUIStyle_Internal_GetSelectedRenderedText_Injected_m1DE280FF00B670FB04D98786E87A7F18D72940E3_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, int32_t, int32_t);
	static GUIStyle_Internal_GetSelectedRenderedText_Injected_m1DE280FF00B670FB04D98786E87A7F18D72940E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_GetSelectedRenderedText_Injected_m1DE280FF00B670FB04D98786E87A7F18D72940E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_GetSelectedRenderedText_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Int32)");
	String_t* icallRetVal = _il2cpp_icall_func(__this, ___0_localPosition, ___1_mContent, ___2_selectIndex, ___3_cursorIndex);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::Internal_CalcSize_Injected(UnityEngine.GUIContent,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_CalcSize_Injected_m19617B2C5FF35B1B10B9D31058ABC1EABD31FF48 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_Internal_CalcSize_Injected_m19617B2C5FF35B1B10B9D31058ABC1EABD31FF48_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static GUIStyle_Internal_CalcSize_Injected_m19617B2C5FF35B1B10B9D31058ABC1EABD31FF48_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_CalcSize_Injected_m19617B2C5FF35B1B10B9D31058ABC1EABD31FF48_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcSize_Injected(UnityEngine.GUIContent,UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___0_content, ___1_ret);
}
// System.Void UnityEngine.GUIStyle::SetMouseTooltip_Injected(System.String,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_SetMouseTooltip_Injected_m77EC0702533B68489605E0DE76A6761E1253CC71 (String_t* ___0_tooltip, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___1_screenRect, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_SetMouseTooltip_Injected_m77EC0702533B68489605E0DE76A6761E1253CC71_ftn) (String_t*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*);
	static GUIStyle_SetMouseTooltip_Injected_m77EC0702533B68489605E0DE76A6761E1253CC71_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_SetMouseTooltip_Injected_m77EC0702533B68489605E0DE76A6761E1253CC71_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::SetMouseTooltip_Injected(System.String,UnityEngine.Rect&)");
	_il2cpp_icall_func(___0_tooltip, ___1_screenRect);
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
// Conversion methods for marshalling of: UnityEngine.EventInterests
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke(const EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8& unmarshaled, EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CwantsMouseMoveU3Ek__BackingField_0 = static_cast<int32_t>(unmarshaled.___U3CwantsMouseMoveU3Ek__BackingField_0);
	marshaled.___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1);
	marshaled.___U3CwantsLessLayoutEventsU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.___U3CwantsLessLayoutEventsU3Ek__BackingField_2);
}
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke_back(const EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshaled_pinvoke& marshaled, EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8& unmarshaled)
{
	bool unmarshaledU3CwantsMouseMoveU3Ek__BackingField_temp_0 = false;
	unmarshaledU3CwantsMouseMoveU3Ek__BackingField_temp_0 = static_cast<bool>(marshaled.___U3CwantsMouseMoveU3Ek__BackingField_0);
	unmarshaled.___U3CwantsMouseMoveU3Ek__BackingField_0 = unmarshaledU3CwantsMouseMoveU3Ek__BackingField_temp_0;
	bool unmarshaledU3CwantsMouseEnterLeaveWindowU3Ek__BackingField_temp_1 = false;
	unmarshaledU3CwantsMouseEnterLeaveWindowU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1);
	unmarshaled.___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1 = unmarshaledU3CwantsMouseEnterLeaveWindowU3Ek__BackingField_temp_1;
	bool unmarshaledU3CwantsLessLayoutEventsU3Ek__BackingField_temp_2 = false;
	unmarshaledU3CwantsLessLayoutEventsU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CwantsLessLayoutEventsU3Ek__BackingField_2);
	unmarshaled.___U3CwantsLessLayoutEventsU3Ek__BackingField_2 = unmarshaledU3CwantsLessLayoutEventsU3Ek__BackingField_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.EventInterests
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke_cleanup(EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.EventInterests
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_com(const EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8& unmarshaled, EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshaled_com& marshaled)
{
	marshaled.___U3CwantsMouseMoveU3Ek__BackingField_0 = static_cast<int32_t>(unmarshaled.___U3CwantsMouseMoveU3Ek__BackingField_0);
	marshaled.___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1);
	marshaled.___U3CwantsLessLayoutEventsU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.___U3CwantsLessLayoutEventsU3Ek__BackingField_2);
}
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_com_back(const EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshaled_com& marshaled, EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8& unmarshaled)
{
	bool unmarshaledU3CwantsMouseMoveU3Ek__BackingField_temp_0 = false;
	unmarshaledU3CwantsMouseMoveU3Ek__BackingField_temp_0 = static_cast<bool>(marshaled.___U3CwantsMouseMoveU3Ek__BackingField_0);
	unmarshaled.___U3CwantsMouseMoveU3Ek__BackingField_0 = unmarshaledU3CwantsMouseMoveU3Ek__BackingField_temp_0;
	bool unmarshaledU3CwantsMouseEnterLeaveWindowU3Ek__BackingField_temp_1 = false;
	unmarshaledU3CwantsMouseEnterLeaveWindowU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1);
	unmarshaled.___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1 = unmarshaledU3CwantsMouseEnterLeaveWindowU3Ek__BackingField_temp_1;
	bool unmarshaledU3CwantsLessLayoutEventsU3Ek__BackingField_temp_2 = false;
	unmarshaledU3CwantsLessLayoutEventsU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CwantsLessLayoutEventsU3Ek__BackingField_2);
	unmarshaled.___U3CwantsLessLayoutEventsU3Ek__BackingField_2 = unmarshaledU3CwantsLessLayoutEventsU3Ek__BackingField_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.EventInterests
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_com_cleanup(EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.EventInterests::get_wantsMouseMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventInterests_get_wantsMouseMove_m4CE6AE73062DE1E37A138ED365FE4D8C7894B9AA (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CwantsMouseMoveU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool EventInterests_get_wantsMouseMove_m4CE6AE73062DE1E37A138ED365FE4D8C7894B9AA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8*>(__this + _offset);
	bool _returnValue;
	_returnValue = EventInterests_get_wantsMouseMove_m4CE6AE73062DE1E37A138ED365FE4D8C7894B9AA_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.EventInterests::set_wantsMouseMove(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventInterests_set_wantsMouseMove_mFEA33E053185D63A19F60AA69E385C05CE795F0F (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CwantsMouseMoveU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void EventInterests_set_wantsMouseMove_mFEA33E053185D63A19F60AA69E385C05CE795F0F_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8*>(__this + _offset);
	EventInterests_set_wantsMouseMove_mFEA33E053185D63A19F60AA69E385C05CE795F0F_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.EventInterests::get_wantsMouseEnterLeaveWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventInterests_get_wantsMouseEnterLeaveWindow_m5CC6DB8DAF1DEB0F7E8878B96A856F540E66840F (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool EventInterests_get_wantsMouseEnterLeaveWindow_m5CC6DB8DAF1DEB0F7E8878B96A856F540E66840F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8*>(__this + _offset);
	bool _returnValue;
	_returnValue = EventInterests_get_wantsMouseEnterLeaveWindow_m5CC6DB8DAF1DEB0F7E8878B96A856F540E66840F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.EventInterests::set_wantsMouseEnterLeaveWindow(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventInterests_set_wantsMouseEnterLeaveWindow_m5D73B54F5855E5BB5FE54AA2366A83A33982D313 (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void EventInterests_set_wantsMouseEnterLeaveWindow_m5D73B54F5855E5BB5FE54AA2366A83A33982D313_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8*>(__this + _offset);
	EventInterests_set_wantsMouseEnterLeaveWindow_m5D73B54F5855E5BB5FE54AA2366A83A33982D313_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.EventInterests::get_wantsLessLayoutEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventInterests_get_wantsLessLayoutEvents_m1BC017D5AC484596A2A9B05BF592B65CE2A00CDE (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CwantsLessLayoutEventsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool EventInterests_get_wantsLessLayoutEvents_m1BC017D5AC484596A2A9B05BF592B65CE2A00CDE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8*>(__this + _offset);
	bool _returnValue;
	_returnValue = EventInterests_get_wantsLessLayoutEvents_m1BC017D5AC484596A2A9B05BF592B65CE2A00CDE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.EventInterests::WantsEvent(UnityEngine.EventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventInterests_WantsEvent_mD34E2AD1F937EE03C9C29882672F400AD3C3E5B6 (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = ___0_type;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)20)))) > ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		goto IL_0026;
	}

IL_0014:
	{
		bool L_4;
		L_4 = EventInterests_get_wantsMouseMove_m4CE6AE73062DE1E37A138ED365FE4D8C7894B9AA_inline(__this, NULL);
		V_2 = L_4;
		goto IL_002a;
	}

IL_001d:
	{
		bool L_5;
		L_5 = EventInterests_get_wantsMouseEnterLeaveWindow_m5CC6DB8DAF1DEB0F7E8878B96A856F540E66840F_inline(__this, NULL);
		V_2 = L_5;
		goto IL_002a;
	}

IL_0026:
	{
		V_2 = (bool)1;
		goto IL_002a;
	}

IL_002a:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool EventInterests_WantsEvent_mD34E2AD1F937EE03C9C29882672F400AD3C3E5B6_AdjustorThunk (RuntimeObject* __this, int32_t ___0_type, const RuntimeMethod* method)
{
	EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8*>(__this + _offset);
	bool _returnValue;
	_returnValue = EventInterests_WantsEvent_mD34E2AD1F937EE03C9C29882672F400AD3C3E5B6(_thisAdjusted, ___0_type, method);
	return _returnValue;
}
// System.Boolean UnityEngine.EventInterests::WantsLayoutPass(UnityEngine.EventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventInterests_WantsLayoutPass_m403675D6BA834A05764A2C2558ECBCE90C8D066B (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		bool L_0;
		L_0 = EventInterests_get_wantsLessLayoutEvents_m1BC017D5AC484596A2A9B05BF592B65CE2A00CDE_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0070;
	}

IL_0012:
	{
		int32_t L_2 = ___0_type;
		V_3 = L_2;
		int32_t L_3 = V_3;
		V_2 = L_3;
		int32_t L_4 = V_2;
		switch (L_4)
		{
			case 0:
			{
				goto IL_005a;
			}
			case 1:
			{
				goto IL_005a;
			}
			case 2:
			{
				goto IL_006c;
			}
			case 3:
			{
				goto IL_006c;
			}
			case 4:
			{
				goto IL_0052;
			}
			case 5:
			{
				goto IL_0052;
			}
			case 6:
			{
				goto IL_006c;
			}
			case 7:
			{
				goto IL_004e;
			}
		}
	}
	{
		goto IL_003e;
	}

IL_003e:
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)14))))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_6 = V_2;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)20)))) > ((uint32_t)1))))
		{
			goto IL_0063;
		}
	}
	{
		goto IL_006c;
	}

IL_004e:
	{
		V_1 = (bool)1;
		goto IL_0070;
	}

IL_0052:
	{
		bool L_7;
		L_7 = GUIUtility_get_textFieldInput_mDB514BD41982E9A309A7E0297270162FA6918EBA(NULL);
		V_1 = L_7;
		goto IL_0070;
	}

IL_005a:
	{
		bool L_8;
		L_8 = EventInterests_get_wantsMouseMove_m4CE6AE73062DE1E37A138ED365FE4D8C7894B9AA_inline(__this, NULL);
		V_1 = L_8;
		goto IL_0070;
	}

IL_0063:
	{
		bool L_9;
		L_9 = EventInterests_get_wantsMouseEnterLeaveWindow_m5CC6DB8DAF1DEB0F7E8878B96A856F540E66840F_inline(__this, NULL);
		V_1 = L_9;
		goto IL_0070;
	}

IL_006c:
	{
		V_1 = (bool)0;
		goto IL_0070;
	}

IL_0070:
	{
		bool L_10 = V_1;
		return L_10;
	}
}
IL2CPP_EXTERN_C  bool EventInterests_WantsLayoutPass_m403675D6BA834A05764A2C2558ECBCE90C8D066B_AdjustorThunk (RuntimeObject* __this, int32_t ___0_type, const RuntimeMethod* method)
{
	EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8*>(__this + _offset);
	bool _returnValue;
	_returnValue = EventInterests_WantsLayoutPass_m403675D6BA834A05764A2C2558ECBCE90C8D066B(_thisAdjusted, ___0_type, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LayoutCache_set_id_m532720FF0F65E8039E37D015910E2F1AE1C9F4FB_inline (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUI_set_nextScrollStepTime_mA35BA69E3FDBC961E42F6C9D02BB4E8776926A09_inline (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___U3CnextScrollStepTimeU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_inline (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_id, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_mED8670C0E122B7ED0DAB4C3381ADFF04B75E0B03_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (float*)(&__this->___x_0);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (float*)(&__this->___y_1);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		V_0 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIUtility_set_guiIsExiting_m0DCDD09CD48330FD781C03D2EA20F973878A2BC5_inline (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___U3CguiIsExitingU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* GUI_get_scrollViewStates_m940A384A713B8A7DC67016D1588965A42E561773_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_0 = ((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___U3CscrollViewStatesU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->____innerException_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EventInterests_get_wantsMouseMove_m4CE6AE73062DE1E37A138ED365FE4D8C7894B9AA_inline (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CwantsMouseMoveU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventInterests_set_wantsMouseMove_mFEA33E053185D63A19F60AA69E385C05CE795F0F_inline (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CwantsMouseMoveU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EventInterests_get_wantsMouseEnterLeaveWindow_m5CC6DB8DAF1DEB0F7E8878B96A856F540E66840F_inline (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventInterests_set_wantsMouseEnterLeaveWindow_m5D73B54F5855E5BB5FE54AA2366A83A33982D313_inline (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EventInterests_get_wantsLessLayoutEvents_m1BC017D5AC484596A2A9B05BF592B65CE2A00CDE_inline (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CwantsLessLayoutEventsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_mDFA3CD122659AE2902BCCD5F89B3CCCA94E041DF_gshared_inline (Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C* __this, int32_t ___0_arg1, intptr_t ___1_arg2, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
