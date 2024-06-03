#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Collections.Generic.Dictionary`2<VRMShaders.VRM10.MToon10.Runtime.MToon10Prop,System.String>
struct Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.IEqualityComparer`1<VRMShaders.VRM10.MToon10.Runtime.MToon10Prop>
struct IEqualityComparer_1_t9D5E1C63FCCE4693AFE628831218C80AAABD018A;
// System.Collections.Generic.IReadOnlyDictionary`2<VRMShaders.VRM10.MToon10.Runtime.MToon10Prop,System.String>
struct IReadOnlyDictionary_2_t45218BE540AC6E3788EE2FB530675CCCBCAC8307;
// System.Collections.Generic.Dictionary`2/KeyCollection<VRMShaders.VRM10.MToon10.Runtime.MToon10Prop,System.String>
struct KeyCollection_t65DCE242D9B9B04E162B08A5B2A9D36F8DF160CF;
// System.Collections.Generic.Dictionary`2/ValueCollection<VRMShaders.VRM10.MToon10.Runtime.MToon10Prop,System.String>
struct ValueCollection_t2FA68A0A5BFEABB6EB94BEF1B519720A1726C01C;
// System.Collections.Generic.Dictionary`2/Entry<VRMShaders.VRM10.MToon10.Runtime.MToon10Prop,System.String>[]
struct EntryU5BU5D_tE31211C06DFEACE8F90D898A2B5B3EC4FA164F7D;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// VRMShaders.VRM10.MToon10.Runtime.MToon10Context
struct MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460;
// VRMShaders.VRM10.MToon10.Runtime.MToonValidator
struct MToonValidator_tAE782F59F0AEEE1556A0E8284930D6215B63EEB6;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsVRMShaders_VRM10_MToon10_Runtime[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t45218BE540AC6E3788EE2FB530675CCCBCAC8307_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MToon10AlphaMode_t0B07225290C8440CBE51CB5656E065A320BED148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MToon10DoubleSidedMode_tB9DEAB88AF147B736683EFEAC8D04E48747E769A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MToon10Meta_t2E87F7FB573B51843B395EC4C81D1C60E88C461B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MToonValidator_tAE782F59F0AEEE1556A0E8284930D6215B63EEB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral047F45200EBEF4D979C877B4E1EF2591FFF8BA4E;
IL2CPP_EXTERN_C String_t* _stringLiteral064A07D5E22C32A6D5A998D808209624F7ACF1C1;
IL2CPP_EXTERN_C String_t* _stringLiteral0BACE17C01835A178E77734E2A90FD803F59C74D;
IL2CPP_EXTERN_C String_t* _stringLiteral0DB640957021585D57B206F8888C8A8CC62E0F91;
IL2CPP_EXTERN_C String_t* _stringLiteral0FAEA17123A0108E29C58DD38088937111DE9A4F;
IL2CPP_EXTERN_C String_t* _stringLiteral17F5B715255AB83B4B841256DE9A6D68885E2373;
IL2CPP_EXTERN_C String_t* _stringLiteral1852BDABAAC215A55CD156A0DFEB95E86B6FDF63;
IL2CPP_EXTERN_C String_t* _stringLiteral2440A08FE7FAFE486836BCC5707B74C689C1BD13;
IL2CPP_EXTERN_C String_t* _stringLiteral2C5DEF38C3D3689AB6F719BCC283EB0DFE8BCFDE;
IL2CPP_EXTERN_C String_t* _stringLiteral3223D004C9379F2B3083B62944F7924A92190F90;
IL2CPP_EXTERN_C String_t* _stringLiteral326129114EB43E5A03AD980A3709D55FE7934916;
IL2CPP_EXTERN_C String_t* _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257;
IL2CPP_EXTERN_C String_t* _stringLiteral462F7D4248952AB5D238D075548982C22C4EB492;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral482304B736916CD1C9E6FF6B8D1D1786753E2221;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral4BF33C8B721CCE36BD06258EC280CE5E08F5685C;
IL2CPP_EXTERN_C String_t* _stringLiteral5235BC8A11AC79193A67E99975CCDBC94A0FA351;
IL2CPP_EXTERN_C String_t* _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C;
IL2CPP_EXTERN_C String_t* _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8;
IL2CPP_EXTERN_C String_t* _stringLiteral6153E459D88880D6E7B15695C174145219BC00D6;
IL2CPP_EXTERN_C String_t* _stringLiteral62207909339E3F15E78B570F80DE3CB06296984A;
IL2CPP_EXTERN_C String_t* _stringLiteral6537F248D6A7514279214402F7D5ED7769131118;
IL2CPP_EXTERN_C String_t* _stringLiteral7308B3767954511438F1F2C46BAC46AB3D26F4ED;
IL2CPP_EXTERN_C String_t* _stringLiteral7A0A343AAEE0AC50149B80528E3F954020629CD8;
IL2CPP_EXTERN_C String_t* _stringLiteral7E052760968B31170B95FE09256C1585EFC757F1;
IL2CPP_EXTERN_C String_t* _stringLiteral80A7792D583E2552BFC9B069A1D87D6FEABEC64A;
IL2CPP_EXTERN_C String_t* _stringLiteral8B67A51D6E60B42078899E75AC5CA2F507DDF84E;
IL2CPP_EXTERN_C String_t* _stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6;
IL2CPP_EXTERN_C String_t* _stringLiteral8E9FB2742A37509ADD87A117527ED10807CCB4C1;
IL2CPP_EXTERN_C String_t* _stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201;
IL2CPP_EXTERN_C String_t* _stringLiteral9882AEF2D2BD1F9CF654EC0A3B3784615102EEAC;
IL2CPP_EXTERN_C String_t* _stringLiteral9A999F72EC4FBFF2D4146F4A123E2FA5189B348E;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA;
IL2CPP_EXTERN_C String_t* _stringLiteral9E489994D4C2D1FB6036C4A637D4B30F1BD119D5;
IL2CPP_EXTERN_C String_t* _stringLiteralAC5B3304C047D60B4E3EC2809E3CE3FA62191A79;
IL2CPP_EXTERN_C String_t* _stringLiteralB32F137D7398FFB53E5E7ACA2526882ADE8473A6;
IL2CPP_EXTERN_C String_t* _stringLiteralB33AB934A58D128D90E13E5323024A4F181380D7;
IL2CPP_EXTERN_C String_t* _stringLiteralB4AA6CAB4A0B4522AAEACA3C7DAA1BAEA56448FC;
IL2CPP_EXTERN_C String_t* _stringLiteralB7B15FE82E1E02032E812AB5377830C57C3543B3;
IL2CPP_EXTERN_C String_t* _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466;
IL2CPP_EXTERN_C String_t* _stringLiteralBB0F3649A7E94417CE23F1DD6D61354E06D64C56;
IL2CPP_EXTERN_C String_t* _stringLiteralBE5A164234C945013CE7F044C3EE99C37CD7930D;
IL2CPP_EXTERN_C String_t* _stringLiteralC4E24EBD6552E5F2938CC0AC13683CACD7E263C1;
IL2CPP_EXTERN_C String_t* _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4;
IL2CPP_EXTERN_C String_t* _stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C;
IL2CPP_EXTERN_C String_t* _stringLiteralD4A279749C3E15A7697098E8D94E6202014E030B;
IL2CPP_EXTERN_C String_t* _stringLiteralD5F5BEE4C0A5F361863BE22F9CA2D0F74171002F;
IL2CPP_EXTERN_C String_t* _stringLiteralD780E7C9AB5790324D7116493085F96BCF418C3C;
IL2CPP_EXTERN_C String_t* _stringLiteralE2C2462B3A8712A2649D48418F13934A569870B8;
IL2CPP_EXTERN_C String_t* _stringLiteralE56E3CA90946FD6A4E46DAA36C7BE7FC220664A0;
IL2CPP_EXTERN_C String_t* _stringLiteralEAD3E1CDEC41B2E0B4A288B79527EC593FCE5FC2;
IL2CPP_EXTERN_C String_t* _stringLiteralF318A9CBF6133558944579D6309707D3FF4760E1;
IL2CPP_EXTERN_C String_t* _stringLiteralF3CCAA0E098D49C3B99A0B2A0160E80837D3871B;
IL2CPP_EXTERN_C String_t* _stringLiteralF462ADCD9DAFA13FAA0664BD8DEACC7C73C1AEEC;
IL2CPP_EXTERN_C String_t* _stringLiteralFB76267F25C6D0234207561E43D8AD45B3D54548;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7F23C5FA216F016158FBE376D22A7BB6F30622BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_Validate_mA5EBFC431DEE8C8097FC9500DCD03CEF0C9681B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context__ctor_m68B18BC810AE4F5F18326CEDD1631EB3F44D7CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_AlphaCutoff_m7718DE774D547F4CF5A6116217D6FF59A7D253AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_AlphaMode_m5F76D55198A5EC96A6D053B5215A4BFEFE5113C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_BaseColorFactorSrgb_m904301D407A1D81F5B1FF603D589BDD03826A915_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_BaseColorTexture_m2E6CDECE647BBB70F80F996732BEFBB4DC0DC1A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_DoubleSidedMode_mD75DE29B389199EDCCCD9862524CF442CE0BD888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_EmissiveFactorLinear_m7DB199A4BF005EBA85F532BE211AE3C0F04CD4D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_EmissiveTexture_m5EC46A8587B83BF31B1D2597E73861ABD0C1AB15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_GiEqualizationFactor_mEED38DCD2A5A66A06AB711732913D9CBE80029D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_MatcapColorFactorSrgb_m23193B399FCDE758397040D672CCC60D998699B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_MatcapTexture_m695FB8F6108AB13577E5E482C3DED773A7A815B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_NormalTextureScale_m8357B02C2B5EF0E2626011F00E81A6CC435F74D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_NormalTexture_m7C5D1FEBE3B3B4CC0B2BBE8A29D2F8F5639A4DD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_OutlineColorFactorSrgb_m041A5F0E59E2F865803AA06FDA7E831510CA0B11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_OutlineLightingMixFactor_m05AB06C4068BF551932D0E62B6B906818F844FE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_OutlineWidthFactor_mA4C03C34286DBDC0DFDDBFEEEB992737F8D8FADD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_OutlineWidthMode_m92600C6BA84F99C6F1F91965B32086812352B76F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_OutlineWidthMultiplyTexture_mA89AB0ABE26B31193BB504EC1ADFEBF4C3203E6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_ParametricRimColorFactorSrgb_mE372A54B3E12AD536839BB74E3EB83A999064FA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_ParametricRimFresnelPowerFactor_mFDB91976DD10A31F6077E5C755C86AF1561AD50A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_ParametricRimLiftFactor_m746FE0AD2FF67B04FE272116341C1A041028148A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_RenderQueueOffsetNumber_m0368BB8B2ABCCBD348363249A01271A5392F27CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_RimLightingMixFactor_mBE97A5F04EA87C21FF61AF1F6C79B36D1D021A82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_RimMultiplyTexture_m26C6F225D96ACC1E60AA256B7B115DB79EC0890D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_ShadeColorFactorSrgb_mE6B77B6C395A6582DC6FE1ADDBEEF8CB1DB1EC82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_ShadeColorTexture_mA7162859911DE7037072FAC20CD004E9180CB7D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_ShadingShiftFactor_m3DE7088D6A32A75E8928E9E7072983157EC76273_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_ShadingShiftTextureScale_m81600C3447B605035CE830F84798CCD1B6147B15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_ShadingShiftTexture_mE8E461B06ED06639657FCC5D30F914F3286D1382_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_ShadingToonyFactor_mC746C6809ADE676F535856978ADFFDB611EB500C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_TextureOffset_mD6311C06A567F63A390E7A4538D8EC19637D7930_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_TextureScale_m5CC3D78426760A24ABF240B7B83478F5DB132A89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_TransparentWithZWriteMode_m369ABB32E01DEBD8D33279312B04D8567D9A6033_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_UvAnimationMaskTexture_mAE1425CC94C8A34EA4C22C3968C0D85BCD559FC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_UvAnimationRotationSpeedFactor_m1ECC6F9E0D6B3D956BD3DE7BDABC147CE106159F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_UvAnimationScrollXSpeedFactor_mC96CEC1951A1C2113FC17C11D692BB3D74126CE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Context_get_UvAnimationScrollYSpeedFactor_m9C56AE571F905A767249AB371C6C35AA456110C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Meta__cctor_m885A95E34B47804DADB800050FEA73AD98ABD315_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Migrator_GetShadingRange0X_m0095B21109EB9B8F6C2F1D09301A14D625EB309C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Migrator_MigrateToGiEqualization_mB761E393A0C51648611419F8722FA2D20E25C786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Migrator_MigrateToShadingShift_m6F5033A1ED85321C242F015B2CB3A6F89BDFFAE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Migrator_MigrateToShadingToony_m3E31256CF55144C7971354DD687279991AF30EF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Properties_ToUnityShaderLabName_mC945257563326F2A5A589D68C49F702338961244_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Properties__cctor_mA6E190DE7E23CF078AFA1D8FD1BB67A6A9DB9890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToon10Properties_get_UnityShaderLabNames_m2BBC7CA6CAD66C45EC5769A076E8F8AB201C64FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToonValidator_SetUnityCullingSettings_m07A373C88102A8D0A50173F708B09051C2B95D44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToonValidator_SetUnityShaderPassSettings_m17589F417EF7C006E1367C3F3DBB8FC139DBE7F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToonValidator_SetUnityShaderVariants_m2B821AE572C40BF2C6DDA2D3FB1D1350B2E09DED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToonValidator_Validate_mA7017F646D9571F8A263F4AC4DFC26E7E592106B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MToonValidator__ctor_m16CF011661AB1ACE3DBFA2E538322991BAB674DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaterialExtensions_GetColor_mC19B71A751EB60116261AAA7B498B1A7E78F8F9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaterialExtensions_GetFloat_m2785CF1CC30B026624CCCC95EFD2BA071E5B95C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaterialExtensions_GetInt_m2ECFCF7B79F3BE3A31D622D7CB92E705B1E5F15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaterialExtensions_GetTextureOffset_m5FEA2E5F02DBBD52DDBB275BB7CC34080F6364E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaterialExtensions_GetTextureScale_m94FB9AD99F1885BF35B42DAF59A58642D5273065_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaterialExtensions_SetKeyword_mF508C0DF43DC22AA3BED52F98845888043F2874B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mACBF4457CCF5AF2E2D9B785ACD5C15341B39098E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MToon10AlphaMode_t0B07225290C8440CBE51CB5656E065A320BED148_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MToon10DoubleSidedMode_tB9DEAB88AF147B736683EFEAC8D04E48747E769A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MToon10TransparentWithZWriteMode_tAAE19AE1E9895F61F722E6AE423F68AF88C6949D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MToonValidator_tAE782F59F0AEEE1556A0E8284930D6215B63EEB6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ValueTuple_2_t9700044DDBCB472B3F3F6E8691934C35DCD8E798_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC8819DF8EABFA35DA70FF3587F8E36B1432A3ADB 
{
};

// System.Collections.Generic.Dictionary`2<VRMShaders.VRM10.MToon10.Runtime.MToon10Prop,System.String>
struct Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE31211C06DFEACE8F90D898A2B5B3EC4FA164F7D* ____entries_1;
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
	KeyCollection_t65DCE242D9B9B04E162B08A5B2A9D36F8DF160CF* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t2FA68A0A5BFEABB6EB94BEF1B519720A1726C01C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// VRMShaders.VRM10.MToon10.Runtime.MToon10Context
struct MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460  : public RuntimeObject
{
	// UnityEngine.Material VRMShaders.VRM10.MToon10.Runtime.MToon10Context::_material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____material_0;
};

// VRMShaders.VRM10.MToon10.Runtime.MToon10EmissiveMapKeyword
struct MToon10EmissiveMapKeyword_t62225B6528B2DD6049E89EA3F4691BA4566DFC73  : public RuntimeObject
{
};

// VRMShaders.VRM10.MToon10.Runtime.MToon10Meta
struct MToon10Meta_t2E87F7FB573B51843B395EC4C81D1C60E88C461B  : public RuntimeObject
{
};

// VRMShaders.VRM10.MToon10.Runtime.MToon10Migrator
struct MToon10Migrator_tE860E40B343CE6308F14855326039762E7E6B731  : public RuntimeObject
{
};

// VRMShaders.VRM10.MToon10.Runtime.MToon10NormalMapKeyword
struct MToon10NormalMapKeyword_t98C53017DBBE4D9A3E983F092BECF30528748596  : public RuntimeObject
{
};

// VRMShaders.VRM10.MToon10.Runtime.MToon10OutlineModeKeyword
struct MToon10OutlineModeKeyword_tA39E0E10BAAD4BEB3A7481BDA7EB4194C4A58413  : public RuntimeObject
{
};

// VRMShaders.VRM10.MToon10.Runtime.MToon10ParameterMapKeyword
struct MToon10ParameterMapKeyword_t4317BE4950C8D7F256F07B57EEF8381AB0F36CD6  : public RuntimeObject
{
};

// VRMShaders.VRM10.MToon10.Runtime.MToon10Properties
struct MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6  : public RuntimeObject
{
};

// VRMShaders.VRM10.MToon10.Runtime.MToon10RimMapKeyword
struct MToon10RimMapKeyword_t4FE9B3577A1869C78B981C767E526258D66FDF49  : public RuntimeObject
{
};

// VRMShaders.VRM10.MToon10.Runtime.MToonValidator
struct MToonValidator_tAE782F59F0AEEE1556A0E8284930D6215B63EEB6  : public RuntimeObject
{
	// UnityEngine.Material VRMShaders.VRM10.MToon10.Runtime.MToonValidator::_material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____material_0;
};

// VRMShaders.VRM10.MToon10.Runtime.MaterialExtensions
struct MaterialExtensions_tCD5337D2E989ED4A9DF063BC16737343EEBF1F69  : public RuntimeObject
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

// VRMShaders.VRM10.MToon10.Runtime.UnityAlphaModeKeyword
struct UnityAlphaModeKeyword_t66DCC3AD620F395E1116A361BCB4491E166ED0F8  : public RuntimeObject
{
};

// VRMShaders.VRM10.MToon10.Runtime.UnityRenderTag
struct UnityRenderTag_tBA9A48727E49CF3FD3982223AA05616C062D6B19  : public RuntimeObject
{
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

// System.ValueTuple`2<System.Single,System.Single>
struct ValueTuple_2_t9700044DDBCB472B3F3F6E8691934C35DCD8E798 
{
	// T1 System.ValueTuple`2::Item1
	float ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	float ___Item2_1;
};

// System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829;

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<VRMShaders.VRM10.MToon10.Runtime.MToon10Prop,System.String>

// System.Collections.Generic.Dictionary`2<VRMShaders.VRM10.MToon10.Runtime.MToon10Prop,System.String>

// VRMShaders.VRM10.MToon10.Runtime.MToon10Context

// VRMShaders.VRM10.MToon10.Runtime.MToon10Context

// VRMShaders.VRM10.MToon10.Runtime.MToon10EmissiveMapKeyword

// VRMShaders.VRM10.MToon10.Runtime.MToon10EmissiveMapKeyword

// VRMShaders.VRM10.MToon10.Runtime.MToon10Meta
struct MToon10Meta_t2E87F7FB573B51843B395EC4C81D1C60E88C461B_StaticFields
{
	// System.String VRMShaders.VRM10.MToon10.Runtime.MToon10Meta::UnityShaderName
	String_t* ___UnityShaderName_0;
	// System.String VRMShaders.VRM10.MToon10.Runtime.MToon10Meta::URPUnityShaderName
	String_t* ___URPUnityShaderName_1;
};

// VRMShaders.VRM10.MToon10.Runtime.MToon10Meta

// VRMShaders.VRM10.MToon10.Runtime.MToon10Migrator

// VRMShaders.VRM10.MToon10.Runtime.MToon10Migrator

// VRMShaders.VRM10.MToon10.Runtime.MToon10NormalMapKeyword

// VRMShaders.VRM10.MToon10.Runtime.MToon10NormalMapKeyword

// VRMShaders.VRM10.MToon10.Runtime.MToon10OutlineModeKeyword

// VRMShaders.VRM10.MToon10.Runtime.MToon10OutlineModeKeyword

// VRMShaders.VRM10.MToon10.Runtime.MToon10ParameterMapKeyword

// VRMShaders.VRM10.MToon10.Runtime.MToon10ParameterMapKeyword

// VRMShaders.VRM10.MToon10.Runtime.MToon10Properties
struct MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_StaticFields
{
	// System.Collections.Generic.Dictionary`2<VRMShaders.VRM10.MToon10.Runtime.MToon10Prop,System.String> VRMShaders.VRM10.MToon10.Runtime.MToon10Properties::_unityShaderLabNames
	Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* ____unityShaderLabNames_0;
};

// VRMShaders.VRM10.MToon10.Runtime.MToon10Properties

// VRMShaders.VRM10.MToon10.Runtime.MToon10RimMapKeyword

// VRMShaders.VRM10.MToon10.Runtime.MToon10RimMapKeyword

// VRMShaders.VRM10.MToon10.Runtime.MToonValidator

// VRMShaders.VRM10.MToon10.Runtime.MToonValidator

// VRMShaders.VRM10.MToon10.Runtime.MaterialExtensions

// VRMShaders.VRM10.MToon10.Runtime.MaterialExtensions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// VRMShaders.VRM10.MToon10.Runtime.UnityAlphaModeKeyword

// VRMShaders.VRM10.MToon10.Runtime.UnityAlphaModeKeyword

// VRMShaders.VRM10.MToon10.Runtime.UnityRenderTag

// VRMShaders.VRM10.MToon10.Runtime.UnityRenderTag

// System.ValueTuple`2<System.Single,System.Single>

// System.ValueTuple`2<System.Single,System.Single>

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

// UnityEngine.Color

// UnityEngine.Color

// System.Int32

// System.Int32

// System.Single

// System.Single

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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD_gshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;

// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_keyword, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_keyword, const RuntimeMethod* method) ;
// System.String VRMShaders.VRM10.MToon10.Runtime.MToon10Properties::ToUnityShaderLabName(VRMShaders.VRM10.MToon10.Runtime.MToon10Prop)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MToon10Properties_ToUnityShaderLabName_mC945257563326F2A5A589D68C49F702338961244 (int32_t ___0_prop, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Material::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_GetInt_mA772B615274DD11B37A352BC66EFA81BFD9C13EA (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Material::GetTextureScale(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Material_GetTextureScale_mF3406F1439C275C25FEE0C4E19108B29AA77E693 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Material::GetTextureOffset(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Material_GetTextureOffset_m4F9E2C96960DFE3C76B9D878F8E654D78185F9CA (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void VRMShaders.VRM10.MToon10.Runtime.MToonValidator::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MToonValidator__ctor_m16CF011661AB1ACE3DBFA2E538322991BAB674DD (MToonValidator_tAE782F59F0AEEE1556A0E8284930D6215B63EEB6* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, const RuntimeMethod* method) ;
// System.Void VRMShaders.VRM10.MToon10.Runtime.MToonValidator::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MToonValidator_Validate_mA7017F646D9571F8A263F4AC4DFC26E7E592106B (MToonValidator_tAE782F59F0AEEE1556A0E8284930D6215B63EEB6* __this, const RuntimeMethod* method) ;
// System.Int32 VRMShaders.VRM10.MToon10.Runtime.MaterialExtensions::GetInt(UnityEngine.Material,VRMShaders.VRM10.MToon10.Runtime.MToon10Prop)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MaterialExtensions_GetInt_m2ECFCF7B79F3BE3A31D622D7CB92E705B1E5F15A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, int32_t ___1_prop, const RuntimeMethod* method) ;
// System.Single VRMShaders.VRM10.MToon10.Runtime.MaterialExtensions::GetFloat(UnityEngine.Material,VRMShaders.VRM10.MToon10.Runtime.MToon10Prop)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MaterialExtensions_GetFloat_m2785CF1CC30B026624CCCC95EFD2BA071E5B95C7 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, int32_t ___1_prop, const RuntimeMethod* method) ;
// UnityEngine.Color VRMShaders.VRM10.MToon10.Runtime.MaterialExtensions::GetColor(UnityEngine.Material,VRMShaders.VRM10.MToon10.Runtime.MToon10Prop)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MaterialExtensions_GetColor_mC19B71A751EB60116261AAA7B498B1A7E78F8F9A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, int32_t ___1_prop, const RuntimeMethod* method) ;
// UnityEngine.Texture VRMShaders.VRM10.MToon10.Runtime.MaterialExtensions::GetTexture(UnityEngine.Material,VRMShaders.VRM10.MToon10.Runtime.MToon10Prop)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, int32_t ___1_prop, const RuntimeMethod* method) ;
// UnityEngine.Vector2 VRMShaders.VRM10.MToon10.Runtime.MaterialExtensions::GetTextureScale(UnityEngine.Material,VRMShaders.VRM10.MToon10.Runtime.MToon10Prop)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MaterialExtensions_GetTextureScale_m94FB9AD99F1885BF35B42DAF59A58642D5273065 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, int32_t ___1_prop, const RuntimeMethod* method) ;
// UnityEngine.Vector2 VRMShaders.VRM10.MToon10.Runtime.MaterialExtensions::GetTextureOffset(UnityEngine.Material,VRMShaders.VRM10.MToon10.Runtime.MToon10Prop)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MaterialExtensions_GetTextureOffset_m5FEA2E5F02DBBD52DDBB275BB7CC34080F6364E8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, int32_t ___1_prop, const RuntimeMethod* method) ;
// System.ValueTuple`2<System.Single,System.Single> VRMShaders.VRM10.MToon10.Runtime.MToon10Migrator::GetShadingRange0X(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t9700044DDBCB472B3F3F6E8691934C35DCD8E798 MToon10Migrator_GetShadingRange0X_m0095B21109EB9B8F6C2F1D09301A14D625EB309C (float ___0_shadingToony0X, float ___1_shadingShift0X, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Single,System.Single>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_mACBF4457CCF5AF2E2D9B785ACD5C15341B39098E (ValueTuple_2_t9700044DDBCB472B3F3F6E8691934C35DCD8E798* __this, float ___0_item1, float ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD_gshared)((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)__this, (Il2CppFullySharedGenericAny)&___0_item1, (Il2CppFullySharedGenericAny)&___1_item2, method);
}
// System.Void VRMShaders.VRM10.MToon10.Runtime.MToonValidator::SetUnityShaderPassSettings(UnityEngine.Material,VRMShaders.VRM10.MToon10.Runtime.MToon10AlphaMode,VRMShaders.VRM10.MToon10.Runtime.MToon10TransparentWithZWriteMode,System.Int32,VRMShaders.VRM10.MToon10.Runtime.MToon10DoubleSidedMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MToonValidator_SetUnityShaderPassSettings_m17589F417EF7C006E1367C3F3DBB8FC139DBE7F3 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, int32_t ___1_alphaMode, int32_t ___2_zWriteMode, int32_t ___3_renderQueueOffset, int32_t ___4_doubleSidedMode, const RuntimeMethod* method) ;
// System.Void VRMShaders.VRM10.MToon10.Runtime.MToonValidator::SetUnityShaderVariants(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MToonValidator_SetUnityShaderVariants_m2B821AE572C40BF2C6DDA2D3FB1D1350B2E09DED (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, const RuntimeMethod* method) ;
// System.Void VRMShaders.VRM10.MToon10.Runtime.MaterialExtensions::SetInt(UnityEngine.Material,VRMShaders.VRM10.MToon10.Runtime.MToon10Prop,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, int32_t ___1_prop, int32_t ___2_val, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetOverrideTag(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetOverrideTag_mD68833CD28EBAF71CB6AF127B38075629B74FE08 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_tag, String_t* ___1_val, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
// System.Void VRMShaders.VRM10.MToon10.Runtime.MaterialExtensions::SetKeyword(UnityEngine.Material,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialExtensions_SetKeyword_mF508C0DF43DC22AA3BED52F98845888043F2874B (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, String_t* ___1_keyword, bool ___2_isEnabled, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyDictionary`2<VRMShaders.VRM10.MToon10.Runtime.MToon10Prop,System.String> VRMShaders.VRM10.MToon10.Runtime.MToon10Properties::get_UnityShaderLabNames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MToon10Properties_get_UnityShaderLabNames_m2BBC7CA6CAD66C45EC5769A076E8F8AB201C64FD_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<VRMShaders.VRM10.MToon10.Runtime.MToon10Prop,System.String>::.ctor()
inline void Dictionary_2__ctor_m7F23C5FA216F016158FBE376D22A7BB6F30622BD (Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<VRMShaders.VRM10.MToon10.Runtime.MToon10Prop,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061 (Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* __this, int32_t ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
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
// System.Void VRMShaders.VRM10.MToon10.Runtime.MaterialExtensions::SetKeyword(UnityEngine.Material,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialExtensions_SetKeyword_mF508C0DF43DC22AA3BED52F98845888043F2874B (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, String_t* ___1_keyword, bool ___2_isEnabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialExtensions_SetKeyword_mF508C0DF43DC22AA3BED52F98845888043F2874B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_mat), (&___1_keyword), (&___2_isEnabled));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MaterialExtensions_SetKeyword_mF508C0DF43DC22AA3BED52F98845888043F2874B_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 1));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 2));
		// if (isEnabled)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 3));
		bool L_0 = ___2_isEnabled;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 4));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 5));
		// mat.EnableKeyword(keyword);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 6));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___0_mat;
		String_t* L_3 = ___1_keyword;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 7));
		NullCheck(L_2);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 9));
		goto IL_001c;
	}

IL_0012:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 10));
		// mat.DisableKeyword(keyword);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 11));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___0_mat;
		String_t* L_5 = ___1_keyword;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 12));
		NullCheck(L_4);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 13));
	}

IL_001c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 14));
		return;
	}
}
// System.Int32 VRMShaders.VRM10.MToon10.Runtime.MaterialExtensions::GetInt(UnityEngine.Material,VRMShaders.VRM10.MToon10.Runtime.MToon10Prop)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MaterialExtensions_GetInt_m2ECFCF7B79F3BE3A31D622D7CB92E705B1E5F15A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, int32_t ___1_prop, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialExtensions_GetInt_m2ECFCF7B79F3BE3A31D622D7CB92E705B1E5F15A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_mat), (&___1_prop));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MaterialExtensions_GetInt_m2ECFCF7B79F3BE3A31D622D7CB92E705B1E5F15A_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 15));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 16));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 17));
		// return mat.GetInt(prop.ToUnityShaderLabName());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 18));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_mat;
		int32_t L_1 = ___1_prop;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 19));
		il2cpp_codegen_runtime_class_init_inline(MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = MToon10Properties_ToUnityShaderLabName_mC945257563326F2A5A589D68C49F702338961244(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 19));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 20));
		NullCheck(L_0);
		int32_t L_3;
		L_3 = Material_GetInt_mA772B615274DD11B37A352BC66EFA81BFD9C13EA(L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 20));
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 21));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void VRMShaders.VRM10.MToon10.Runtime.MaterialExtensions::SetInt(UnityEngine.Material,VRMShaders.VRM10.MToon10.Runtime.MToon10Prop,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, int32_t ___1_prop, int32_t ___2_val, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_mat), (&___1_prop), (&___2_val));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 22));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 23));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 24));
		// mat.SetInt(prop.ToUnityShaderLabName(), val);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 25));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_mat;
		int32_t L_1 = ___1_prop;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 26));
		il2cpp_codegen_runtime_class_init_inline(MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = MToon10Properties_ToUnityShaderLabName_mC945257563326F2A5A589D68C49F702338961244(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 26));
		int32_t L_3 = ___2_val;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 27));
		NullCheck(L_0);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_0, L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 27));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 28));
		return;
	}
}
// UnityEngine.Texture VRMShaders.VRM10.MToon10.Runtime.MaterialExtensions::GetTexture(UnityEngine.Material,VRMShaders.VRM10.MToon10.Runtime.MToon10Prop)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, int32_t ___1_prop, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_mat), (&___1_prop));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 29));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 30));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 31));
		// return mat.GetTexture(prop.ToUnityShaderLabName());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 32));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_mat;
		int32_t L_1 = ___1_prop;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 33));
		il2cpp_codegen_runtime_class_init_inline(MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = MToon10Properties_ToUnityShaderLabName_mC945257563326F2A5A589D68C49F702338961244(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 33));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 34));
		NullCheck(L_0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3;
		L_3 = Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719(L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 34));
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 35));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector2 VRMShaders.VRM10.MToon10.Runtime.MaterialExtensions::GetTextureScale(UnityEngine.Material,VRMShaders.VRM10.MToon10.Runtime.MToon10Prop)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MaterialExtensions_GetTextureScale_m94FB9AD99F1885BF35B42DAF59A58642D5273065 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, int32_t ___1_prop, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialExtensions_GetTextureScale_m94FB9AD99F1885BF35B42DAF59A58642D5273065_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_mat), (&___1_prop));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MaterialExtensions_GetTextureScale_m94FB9AD99F1885BF35B42DAF59A58642D5273065_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 36));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 37));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 38));
		// return mat.GetTextureScale(prop.ToUnityShaderLabName());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 39));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_mat;
		int32_t L_1 = ___1_prop;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 40));
		il2cpp_codegen_runtime_class_init_inline(MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = MToon10Properties_ToUnityShaderLabName_mC945257563326F2A5A589D68C49F702338961244(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 40));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 41));
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Material_GetTextureScale_mF3406F1439C275C25FEE0C4E19108B29AA77E693(L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 41));
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 42));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector2 VRMShaders.VRM10.MToon10.Runtime.MaterialExtensions::GetTextureOffset(UnityEngine.Material,VRMShaders.VRM10.MToon10.Runtime.MToon10Prop)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MaterialExtensions_GetTextureOffset_m5FEA2E5F02DBBD52DDBB275BB7CC34080F6364E8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, int32_t ___1_prop, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialExtensions_GetTextureOffset_m5FEA2E5F02DBBD52DDBB275BB7CC34080F6364E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_mat), (&___1_prop));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MaterialExtensions_GetTextureOffset_m5FEA2E5F02DBBD52DDBB275BB7CC34080F6364E8_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 43));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 44));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 45));
		// return mat.GetTextureOffset(prop.ToUnityShaderLabName());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 46));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_mat;
		int32_t L_1 = ___1_prop;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 47));
		il2cpp_codegen_runtime_class_init_inline(MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = MToon10Properties_ToUnityShaderLabName_mC945257563326F2A5A589D68C49F702338961244(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 47));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 48));
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Material_GetTextureOffset_m4F9E2C96960DFE3C76B9D878F8E654D78185F9CA(L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 48));
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 49));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		return L_4;
	}
}
// System.Single VRMShaders.VRM10.MToon10.Runtime.MaterialExtensions::GetFloat(UnityEngine.Material,VRMShaders.VRM10.MToon10.Runtime.MToon10Prop)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MaterialExtensions_GetFloat_m2785CF1CC30B026624CCCC95EFD2BA071E5B95C7 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, int32_t ___1_prop, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialExtensions_GetFloat_m2785CF1CC30B026624CCCC95EFD2BA071E5B95C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_mat), (&___1_prop));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MaterialExtensions_GetFloat_m2785CF1CC30B026624CCCC95EFD2BA071E5B95C7_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 50));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 51));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 52));
		// return mat.GetFloat(prop.ToUnityShaderLabName());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 53));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_mat;
		int32_t L_1 = ___1_prop;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 54));
		il2cpp_codegen_runtime_class_init_inline(MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = MToon10Properties_ToUnityShaderLabName_mC945257563326F2A5A589D68C49F702338961244(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 54));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 55));
		NullCheck(L_0);
		float L_3;
		L_3 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 55));
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 56));
		float L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Color VRMShaders.VRM10.MToon10.Runtime.MaterialExtensions::GetColor(UnityEngine.Material,VRMShaders.VRM10.MToon10.Runtime.MToon10Prop)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MaterialExtensions_GetColor_mC19B71A751EB60116261AAA7B498B1A7E78F8F9A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, int32_t ___1_prop, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialExtensions_GetColor_mC19B71A751EB60116261AAA7B498B1A7E78F8F9A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_mat), (&___1_prop));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MaterialExtensions_GetColor_mC19B71A751EB60116261AAA7B498B1A7E78F8F9A_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 57));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 58));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 59));
		// return mat.GetColor(prop.ToUnityShaderLabName());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 60));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_mat;
		int32_t L_1 = ___1_prop;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 61));
		il2cpp_codegen_runtime_class_init_inline(MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = MToon10Properties_ToUnityShaderLabName_mC945257563326F2A5A589D68C49F702338961244(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 61));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 62));
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609(L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 62));
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 63));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
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
// System.Void VRMShaders.VRM10.MToon10.Runtime.MToon10Context::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MToon10Context__ctor_m68B18BC810AE4F5F18326CEDD1631EB3F44D7CA1 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context__ctor_m68B18BC810AE4F5F18326CEDD1631EB3F44D7CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_material));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context__ctor_m68B18BC810AE4F5F18326CEDD1631EB3F44D7CA1_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 64));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 65));
	{
		// public MToon10Context(Material material)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 66));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 67));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 67));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 68));
		// _material = material;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 69));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_material;
		__this->____material_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____material_0), (void*)L_0);
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 70));
		return;
	}
}
// System.Void VRMShaders.VRM10.MToon10.Runtime.MToon10Context::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MToon10Context_Validate_mA5EBFC431DEE8C8097FC9500DCD03CEF0C9681B3 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_Validate_mA5EBFC431DEE8C8097FC9500DCD03CEF0C9681B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToonValidator_tAE782F59F0AEEE1556A0E8284930D6215B63EEB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_Validate_mA5EBFC431DEE8C8097FC9500DCD03CEF0C9681B3_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 71));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 72));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 73));
		// new MToonValidator(_material).Validate();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 74));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 75));
		MToonValidator_tAE782F59F0AEEE1556A0E8284930D6215B63EEB6* L_1 = (MToonValidator_tAE782F59F0AEEE1556A0E8284930D6215B63EEB6*)il2cpp_codegen_object_new(MToonValidator_tAE782F59F0AEEE1556A0E8284930D6215B63EEB6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MToonValidator__ctor_m16CF011661AB1ACE3DBFA2E538322991BAB674DD(L_1, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 75));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 76));
		NullCheck(L_1);
		MToonValidator_Validate_mA7017F646D9571F8A263F4AC4DFC26E7E592106B(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 76));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 77));
		return;
	}
}
// VRMShaders.VRM10.MToon10.Runtime.MToon10AlphaMode VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_AlphaMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MToon10Context_get_AlphaMode_m5F76D55198A5EC96A6D053B5215A4BFEFE5113C6 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_AlphaMode_m5F76D55198A5EC96A6D053B5215A4BFEFE5113C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_AlphaMode_m5F76D55198A5EC96A6D053B5215A4BFEFE5113C6_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 78));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 79));
	{
		// get => (MToon10AlphaMode) _material.GetInt(MToon10Prop.AlphaMode);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 80));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 81));
		int32_t L_1;
		L_1 = MaterialExtensions_GetInt_m2ECFCF7B79F3BE3A31D622D7CB92E705B1E5F15A(L_0, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 81));
		return (int32_t)(L_1);
	}
}
// VRMShaders.VRM10.MToon10.Runtime.MToon10TransparentWithZWriteMode VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_TransparentWithZWriteMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MToon10Context_get_TransparentWithZWriteMode_m369ABB32E01DEBD8D33279312B04D8567D9A6033 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_TransparentWithZWriteMode_m369ABB32E01DEBD8D33279312B04D8567D9A6033_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_TransparentWithZWriteMode_m369ABB32E01DEBD8D33279312B04D8567D9A6033_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 82));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 83));
	{
		// get => (MToon10TransparentWithZWriteMode) _material.GetInt(MToon10Prop.TransparentWithZWrite);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 84));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 85));
		int32_t L_1;
		L_1 = MaterialExtensions_GetInt_m2ECFCF7B79F3BE3A31D622D7CB92E705B1E5F15A(L_0, 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 85));
		return (int32_t)(L_1);
	}
}
// System.Single VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_AlphaCutoff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MToon10Context_get_AlphaCutoff_m7718DE774D547F4CF5A6116217D6FF59A7D253AE (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_AlphaCutoff_m7718DE774D547F4CF5A6116217D6FF59A7D253AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_AlphaCutoff_m7718DE774D547F4CF5A6116217D6FF59A7D253AE_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 86));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 87));
	{
		// get => _material.GetFloat(MToon10Prop.AlphaCutoff);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 88));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 89));
		float L_1;
		L_1 = MaterialExtensions_GetFloat_m2785CF1CC30B026624CCCC95EFD2BA071E5B95C7(L_0, 2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 89));
		return L_1;
	}
}
// System.Int32 VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_RenderQueueOffsetNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MToon10Context_get_RenderQueueOffsetNumber_m0368BB8B2ABCCBD348363249A01271A5392F27CA (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_RenderQueueOffsetNumber_m0368BB8B2ABCCBD348363249A01271A5392F27CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_RenderQueueOffsetNumber_m0368BB8B2ABCCBD348363249A01271A5392F27CA_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 90));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 91));
	{
		// get => _material.GetInt(MToon10Prop.RenderQueueOffsetNumber);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 92));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 93));
		int32_t L_1;
		L_1 = MaterialExtensions_GetInt_m2ECFCF7B79F3BE3A31D622D7CB92E705B1E5F15A(L_0, 3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 93));
		return L_1;
	}
}
// VRMShaders.VRM10.MToon10.Runtime.MToon10DoubleSidedMode VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_DoubleSidedMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MToon10Context_get_DoubleSidedMode_mD75DE29B389199EDCCCD9862524CF442CE0BD888 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_DoubleSidedMode_mD75DE29B389199EDCCCD9862524CF442CE0BD888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_DoubleSidedMode_mD75DE29B389199EDCCCD9862524CF442CE0BD888_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 94));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 95));
	{
		// get => (MToon10DoubleSidedMode) _material.GetInt(MToon10Prop.DoubleSided);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 96));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 97));
		int32_t L_1;
		L_1 = MaterialExtensions_GetInt_m2ECFCF7B79F3BE3A31D622D7CB92E705B1E5F15A(L_0, 4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 97));
		return (int32_t)(L_1);
	}
}
// UnityEngine.Color VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_BaseColorFactorSrgb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MToon10Context_get_BaseColorFactorSrgb_m904301D407A1D81F5B1FF603D589BDD03826A915 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_BaseColorFactorSrgb_m904301D407A1D81F5B1FF603D589BDD03826A915_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_BaseColorFactorSrgb_m904301D407A1D81F5B1FF603D589BDD03826A915_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 98));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 99));
	{
		// get => _material.GetColor(MToon10Prop.BaseColorFactor);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 100));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 101));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = MaterialExtensions_GetColor_mC19B71A751EB60116261AAA7B498B1A7E78F8F9A(L_0, 5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 101));
		return L_1;
	}
}
// UnityEngine.Texture VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_BaseColorTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* MToon10Context_get_BaseColorTexture_m2E6CDECE647BBB70F80F996732BEFBB4DC0DC1A0 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_BaseColorTexture_m2E6CDECE647BBB70F80F996732BEFBB4DC0DC1A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_BaseColorTexture_m2E6CDECE647BBB70F80F996732BEFBB4DC0DC1A0_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 102));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 103));
	{
		// get => _material.GetTexture(MToon10Prop.BaseColorTexture);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 104));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 105));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E(L_0, 6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 105));
		return L_1;
	}
}
// UnityEngine.Color VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_ShadeColorFactorSrgb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MToon10Context_get_ShadeColorFactorSrgb_mE6B77B6C395A6582DC6FE1ADDBEEF8CB1DB1EC82 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_ShadeColorFactorSrgb_mE6B77B6C395A6582DC6FE1ADDBEEF8CB1DB1EC82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_ShadeColorFactorSrgb_mE6B77B6C395A6582DC6FE1ADDBEEF8CB1DB1EC82_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 106));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 107));
	{
		// get => _material.GetColor(MToon10Prop.ShadeColorFactor);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 108));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 109));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = MaterialExtensions_GetColor_mC19B71A751EB60116261AAA7B498B1A7E78F8F9A(L_0, 7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 109));
		return L_1;
	}
}
// UnityEngine.Texture VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_ShadeColorTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* MToon10Context_get_ShadeColorTexture_mA7162859911DE7037072FAC20CD004E9180CB7D4 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_ShadeColorTexture_mA7162859911DE7037072FAC20CD004E9180CB7D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_ShadeColorTexture_mA7162859911DE7037072FAC20CD004E9180CB7D4_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 110));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 111));
	{
		// get => _material.GetTexture(MToon10Prop.ShadeColorTexture);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 112));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 113));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E(L_0, 8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 113));
		return L_1;
	}
}
// UnityEngine.Texture VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_NormalTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* MToon10Context_get_NormalTexture_m7C5D1FEBE3B3B4CC0B2BBE8A29D2F8F5639A4DD4 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_NormalTexture_m7C5D1FEBE3B3B4CC0B2BBE8A29D2F8F5639A4DD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_NormalTexture_m7C5D1FEBE3B3B4CC0B2BBE8A29D2F8F5639A4DD4_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 114));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 115));
	{
		// get => _material.GetTexture(MToon10Prop.NormalTexture);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 116));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 117));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E(L_0, ((int32_t)9), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 117));
		return L_1;
	}
}
// System.Single VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_NormalTextureScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MToon10Context_get_NormalTextureScale_m8357B02C2B5EF0E2626011F00E81A6CC435F74D1 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_NormalTextureScale_m8357B02C2B5EF0E2626011F00E81A6CC435F74D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_NormalTextureScale_m8357B02C2B5EF0E2626011F00E81A6CC435F74D1_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 118));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 119));
	{
		// get => _material.GetFloat(MToon10Prop.NormalTextureScale);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 120));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 121));
		float L_1;
		L_1 = MaterialExtensions_GetFloat_m2785CF1CC30B026624CCCC95EFD2BA071E5B95C7(L_0, ((int32_t)10), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 121));
		return L_1;
	}
}
// System.Single VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_ShadingShiftFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MToon10Context_get_ShadingShiftFactor_m3DE7088D6A32A75E8928E9E7072983157EC76273 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_ShadingShiftFactor_m3DE7088D6A32A75E8928E9E7072983157EC76273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_ShadingShiftFactor_m3DE7088D6A32A75E8928E9E7072983157EC76273_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 122));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 123));
	{
		// get => _material.GetFloat(MToon10Prop.ShadingShiftFactor);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 124));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 125));
		float L_1;
		L_1 = MaterialExtensions_GetFloat_m2785CF1CC30B026624CCCC95EFD2BA071E5B95C7(L_0, ((int32_t)11), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 125));
		return L_1;
	}
}
// UnityEngine.Texture VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_ShadingShiftTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* MToon10Context_get_ShadingShiftTexture_mE8E461B06ED06639657FCC5D30F914F3286D1382 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_ShadingShiftTexture_mE8E461B06ED06639657FCC5D30F914F3286D1382_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_ShadingShiftTexture_mE8E461B06ED06639657FCC5D30F914F3286D1382_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 126));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 127));
	{
		// get => _material.GetTexture(MToon10Prop.ShadingShiftTexture);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 128));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 129));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E(L_0, ((int32_t)12), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 129));
		return L_1;
	}
}
// System.Single VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_ShadingShiftTextureScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MToon10Context_get_ShadingShiftTextureScale_m81600C3447B605035CE830F84798CCD1B6147B15 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_ShadingShiftTextureScale_m81600C3447B605035CE830F84798CCD1B6147B15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_ShadingShiftTextureScale_m81600C3447B605035CE830F84798CCD1B6147B15_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 130));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 131));
	{
		// get => _material.GetFloat(MToon10Prop.ShadingShiftTextureScale);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 132));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 133));
		float L_1;
		L_1 = MaterialExtensions_GetFloat_m2785CF1CC30B026624CCCC95EFD2BA071E5B95C7(L_0, ((int32_t)13), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 133));
		return L_1;
	}
}
// System.Single VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_ShadingToonyFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MToon10Context_get_ShadingToonyFactor_mC746C6809ADE676F535856978ADFFDB611EB500C (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_ShadingToonyFactor_mC746C6809ADE676F535856978ADFFDB611EB500C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_ShadingToonyFactor_mC746C6809ADE676F535856978ADFFDB611EB500C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 134));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 135));
	{
		// get => _material.GetFloat(MToon10Prop.ShadingToonyFactor);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 136));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 137));
		float L_1;
		L_1 = MaterialExtensions_GetFloat_m2785CF1CC30B026624CCCC95EFD2BA071E5B95C7(L_0, ((int32_t)14), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 137));
		return L_1;
	}
}
// System.Single VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_GiEqualizationFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MToon10Context_get_GiEqualizationFactor_mEED38DCD2A5A66A06AB711732913D9CBE80029D0 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_GiEqualizationFactor_mEED38DCD2A5A66A06AB711732913D9CBE80029D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_GiEqualizationFactor_mEED38DCD2A5A66A06AB711732913D9CBE80029D0_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 138));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 139));
	{
		// get => _material.GetFloat(MToon10Prop.GiEqualizationFactor);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 140));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 141));
		float L_1;
		L_1 = MaterialExtensions_GetFloat_m2785CF1CC30B026624CCCC95EFD2BA071E5B95C7(L_0, ((int32_t)15), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 141));
		return L_1;
	}
}
// UnityEngine.Color VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_EmissiveFactorLinear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MToon10Context_get_EmissiveFactorLinear_m7DB199A4BF005EBA85F532BE211AE3C0F04CD4D0 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_EmissiveFactorLinear_m7DB199A4BF005EBA85F532BE211AE3C0F04CD4D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_EmissiveFactorLinear_m7DB199A4BF005EBA85F532BE211AE3C0F04CD4D0_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 142));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 143));
	{
		// get => _material.GetColor(MToon10Prop.EmissiveFactor);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 144));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 145));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = MaterialExtensions_GetColor_mC19B71A751EB60116261AAA7B498B1A7E78F8F9A(L_0, ((int32_t)16), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 145));
		return L_1;
	}
}
// UnityEngine.Texture VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_EmissiveTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* MToon10Context_get_EmissiveTexture_m5EC46A8587B83BF31B1D2597E73861ABD0C1AB15 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_EmissiveTexture_m5EC46A8587B83BF31B1D2597E73861ABD0C1AB15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_EmissiveTexture_m5EC46A8587B83BF31B1D2597E73861ABD0C1AB15_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 146));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 147));
	{
		// get => _material.GetTexture(MToon10Prop.EmissiveTexture);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 148));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 149));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E(L_0, ((int32_t)17), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 149));
		return L_1;
	}
}
// UnityEngine.Color VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_MatcapColorFactorSrgb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MToon10Context_get_MatcapColorFactorSrgb_m23193B399FCDE758397040D672CCC60D998699B8 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_MatcapColorFactorSrgb_m23193B399FCDE758397040D672CCC60D998699B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_MatcapColorFactorSrgb_m23193B399FCDE758397040D672CCC60D998699B8_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 150));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 151));
	{
		// get => _material.GetColor(MToon10Prop.MatcapColorFactor);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 152));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 153));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = MaterialExtensions_GetColor_mC19B71A751EB60116261AAA7B498B1A7E78F8F9A(L_0, ((int32_t)18), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 153));
		return L_1;
	}
}
// UnityEngine.Texture VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_MatcapTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* MToon10Context_get_MatcapTexture_m695FB8F6108AB13577E5E482C3DED773A7A815B7 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_MatcapTexture_m695FB8F6108AB13577E5E482C3DED773A7A815B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_MatcapTexture_m695FB8F6108AB13577E5E482C3DED773A7A815B7_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 154));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 155));
	{
		// get => _material.GetTexture(MToon10Prop.MatcapTexture);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 156));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 157));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E(L_0, ((int32_t)19), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 157));
		return L_1;
	}
}
// UnityEngine.Color VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_ParametricRimColorFactorSrgb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MToon10Context_get_ParametricRimColorFactorSrgb_mE372A54B3E12AD536839BB74E3EB83A999064FA6 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_ParametricRimColorFactorSrgb_mE372A54B3E12AD536839BB74E3EB83A999064FA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_ParametricRimColorFactorSrgb_mE372A54B3E12AD536839BB74E3EB83A999064FA6_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 158));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 159));
	{
		// get => _material.GetColor(MToon10Prop.ParametricRimColorFactor);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 160));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 161));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = MaterialExtensions_GetColor_mC19B71A751EB60116261AAA7B498B1A7E78F8F9A(L_0, ((int32_t)20), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 161));
		return L_1;
	}
}
// System.Single VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_ParametricRimFresnelPowerFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MToon10Context_get_ParametricRimFresnelPowerFactor_mFDB91976DD10A31F6077E5C755C86AF1561AD50A (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_ParametricRimFresnelPowerFactor_mFDB91976DD10A31F6077E5C755C86AF1561AD50A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_ParametricRimFresnelPowerFactor_mFDB91976DD10A31F6077E5C755C86AF1561AD50A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 162));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 163));
	{
		// get => _material.GetFloat(MToon10Prop.ParametricRimFresnelPowerFactor);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 164));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 165));
		float L_1;
		L_1 = MaterialExtensions_GetFloat_m2785CF1CC30B026624CCCC95EFD2BA071E5B95C7(L_0, ((int32_t)21), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 165));
		return L_1;
	}
}
// System.Single VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_ParametricRimLiftFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MToon10Context_get_ParametricRimLiftFactor_m746FE0AD2FF67B04FE272116341C1A041028148A (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_ParametricRimLiftFactor_m746FE0AD2FF67B04FE272116341C1A041028148A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_ParametricRimLiftFactor_m746FE0AD2FF67B04FE272116341C1A041028148A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 166));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 167));
	{
		// get => _material.GetFloat(MToon10Prop.ParametricRimLiftFactor);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 168));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 169));
		float L_1;
		L_1 = MaterialExtensions_GetFloat_m2785CF1CC30B026624CCCC95EFD2BA071E5B95C7(L_0, ((int32_t)22), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 169));
		return L_1;
	}
}
// UnityEngine.Texture VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_RimMultiplyTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* MToon10Context_get_RimMultiplyTexture_m26C6F225D96ACC1E60AA256B7B115DB79EC0890D (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_RimMultiplyTexture_m26C6F225D96ACC1E60AA256B7B115DB79EC0890D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_RimMultiplyTexture_m26C6F225D96ACC1E60AA256B7B115DB79EC0890D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 170));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 171));
	{
		// get => _material.GetTexture(MToon10Prop.RimMultiplyTexture);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 172));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 173));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E(L_0, ((int32_t)23), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 173));
		return L_1;
	}
}
// System.Single VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_RimLightingMixFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MToon10Context_get_RimLightingMixFactor_mBE97A5F04EA87C21FF61AF1F6C79B36D1D021A82 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_RimLightingMixFactor_mBE97A5F04EA87C21FF61AF1F6C79B36D1D021A82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_RimLightingMixFactor_mBE97A5F04EA87C21FF61AF1F6C79B36D1D021A82_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 174));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 175));
	{
		// get => _material.GetFloat(MToon10Prop.RimLightingMixFactor);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 176));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 177));
		float L_1;
		L_1 = MaterialExtensions_GetFloat_m2785CF1CC30B026624CCCC95EFD2BA071E5B95C7(L_0, ((int32_t)24), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 177));
		return L_1;
	}
}
// VRMShaders.VRM10.MToon10.Runtime.MToon10OutlineMode VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_OutlineWidthMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MToon10Context_get_OutlineWidthMode_m92600C6BA84F99C6F1F91965B32086812352B76F (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_OutlineWidthMode_m92600C6BA84F99C6F1F91965B32086812352B76F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_OutlineWidthMode_m92600C6BA84F99C6F1F91965B32086812352B76F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 178));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 179));
	{
		// get => (MToon10OutlineMode) _material.GetInt(MToon10Prop.OutlineWidthMode);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 180));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 181));
		int32_t L_1;
		L_1 = MaterialExtensions_GetInt_m2ECFCF7B79F3BE3A31D622D7CB92E705B1E5F15A(L_0, ((int32_t)25), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 181));
		return (int32_t)(L_1);
	}
}
// System.Single VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_OutlineWidthFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MToon10Context_get_OutlineWidthFactor_mA4C03C34286DBDC0DFDDBFEEEB992737F8D8FADD (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_OutlineWidthFactor_mA4C03C34286DBDC0DFDDBFEEEB992737F8D8FADD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_OutlineWidthFactor_mA4C03C34286DBDC0DFDDBFEEEB992737F8D8FADD_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 182));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 183));
	{
		// get => _material.GetFloat(MToon10Prop.OutlineWidthFactor);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 184));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 185));
		float L_1;
		L_1 = MaterialExtensions_GetFloat_m2785CF1CC30B026624CCCC95EFD2BA071E5B95C7(L_0, ((int32_t)26), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 185));
		return L_1;
	}
}
// UnityEngine.Texture VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_OutlineWidthMultiplyTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* MToon10Context_get_OutlineWidthMultiplyTexture_mA89AB0ABE26B31193BB504EC1ADFEBF4C3203E6C (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_OutlineWidthMultiplyTexture_mA89AB0ABE26B31193BB504EC1ADFEBF4C3203E6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_OutlineWidthMultiplyTexture_mA89AB0ABE26B31193BB504EC1ADFEBF4C3203E6C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 186));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 187));
	{
		// get => _material.GetTexture(MToon10Prop.OutlineWidthMultiplyTexture);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 188));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 189));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E(L_0, ((int32_t)27), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 189));
		return L_1;
	}
}
// UnityEngine.Color VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_OutlineColorFactorSrgb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MToon10Context_get_OutlineColorFactorSrgb_m041A5F0E59E2F865803AA06FDA7E831510CA0B11 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_OutlineColorFactorSrgb_m041A5F0E59E2F865803AA06FDA7E831510CA0B11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_OutlineColorFactorSrgb_m041A5F0E59E2F865803AA06FDA7E831510CA0B11_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 190));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 191));
	{
		// get => _material.GetColor(MToon10Prop.OutlineColorFactor);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 192));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 193));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = MaterialExtensions_GetColor_mC19B71A751EB60116261AAA7B498B1A7E78F8F9A(L_0, ((int32_t)28), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 193));
		return L_1;
	}
}
// System.Single VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_OutlineLightingMixFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MToon10Context_get_OutlineLightingMixFactor_m05AB06C4068BF551932D0E62B6B906818F844FE5 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_OutlineLightingMixFactor_m05AB06C4068BF551932D0E62B6B906818F844FE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_OutlineLightingMixFactor_m05AB06C4068BF551932D0E62B6B906818F844FE5_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 194));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 195));
	{
		// get => _material.GetFloat(MToon10Prop.OutlineLightingMixFactor);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 196));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 197));
		float L_1;
		L_1 = MaterialExtensions_GetFloat_m2785CF1CC30B026624CCCC95EFD2BA071E5B95C7(L_0, ((int32_t)29), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 197));
		return L_1;
	}
}
// UnityEngine.Texture VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_UvAnimationMaskTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* MToon10Context_get_UvAnimationMaskTexture_mAE1425CC94C8A34EA4C22C3968C0D85BCD559FC4 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_UvAnimationMaskTexture_mAE1425CC94C8A34EA4C22C3968C0D85BCD559FC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_UvAnimationMaskTexture_mAE1425CC94C8A34EA4C22C3968C0D85BCD559FC4_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 198));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 199));
	{
		// get => _material.GetTexture(MToon10Prop.UvAnimationMaskTexture);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 200));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 201));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E(L_0, ((int32_t)30), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 201));
		return L_1;
	}
}
// System.Single VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_UvAnimationScrollXSpeedFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MToon10Context_get_UvAnimationScrollXSpeedFactor_mC96CEC1951A1C2113FC17C11D692BB3D74126CE4 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_UvAnimationScrollXSpeedFactor_mC96CEC1951A1C2113FC17C11D692BB3D74126CE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_UvAnimationScrollXSpeedFactor_mC96CEC1951A1C2113FC17C11D692BB3D74126CE4_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 202));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 203));
	{
		// get => _material.GetFloat(MToon10Prop.UvAnimationScrollXSpeedFactor);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 204));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 205));
		float L_1;
		L_1 = MaterialExtensions_GetFloat_m2785CF1CC30B026624CCCC95EFD2BA071E5B95C7(L_0, ((int32_t)31), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 205));
		return L_1;
	}
}
// System.Single VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_UvAnimationScrollYSpeedFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MToon10Context_get_UvAnimationScrollYSpeedFactor_m9C56AE571F905A767249AB371C6C35AA456110C5 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_UvAnimationScrollYSpeedFactor_m9C56AE571F905A767249AB371C6C35AA456110C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_UvAnimationScrollYSpeedFactor_m9C56AE571F905A767249AB371C6C35AA456110C5_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 206));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 207));
	{
		// get => _material.GetFloat(MToon10Prop.UvAnimationScrollYSpeedFactor);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 208));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 209));
		float L_1;
		L_1 = MaterialExtensions_GetFloat_m2785CF1CC30B026624CCCC95EFD2BA071E5B95C7(L_0, ((int32_t)32), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 209));
		return L_1;
	}
}
// System.Single VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_UvAnimationRotationSpeedFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MToon10Context_get_UvAnimationRotationSpeedFactor_m1ECC6F9E0D6B3D956BD3DE7BDABC147CE106159F (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_UvAnimationRotationSpeedFactor_m1ECC6F9E0D6B3D956BD3DE7BDABC147CE106159F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_UvAnimationRotationSpeedFactor_m1ECC6F9E0D6B3D956BD3DE7BDABC147CE106159F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 210));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 211));
	{
		// get => _material.GetFloat(MToon10Prop.UvAnimationRotationSpeedFactor);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 212));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 213));
		float L_1;
		L_1 = MaterialExtensions_GetFloat_m2785CF1CC30B026624CCCC95EFD2BA071E5B95C7(L_0, ((int32_t)33), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 213));
		return L_1;
	}
}
// UnityEngine.Vector2 VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_TextureScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MToon10Context_get_TextureScale_m5CC3D78426760A24ABF240B7B83478F5DB132A89 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_TextureScale_m5CC3D78426760A24ABF240B7B83478F5DB132A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_TextureScale_m5CC3D78426760A24ABF240B7B83478F5DB132A89_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 214));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 215));
	{
		// get => _material.GetTextureScale(MToon10Prop.BaseColorTexture);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 216));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 217));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = MaterialExtensions_GetTextureScale_m94FB9AD99F1885BF35B42DAF59A58642D5273065(L_0, 6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 217));
		return L_1;
	}
}
// UnityEngine.Vector2 VRMShaders.VRM10.MToon10.Runtime.MToon10Context::get_TextureOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MToon10Context_get_TextureOffset_mD6311C06A567F63A390E7A4538D8EC19637D7930 (MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_get_TextureOffset_mD6311C06A567F63A390E7A4538D8EC19637D7930_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Context_t62AE7534DA32A3B5DE73B0C674E0E428C27ED460_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Context_get_TextureOffset_mD6311C06A567F63A390E7A4538D8EC19637D7930_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 218));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 219));
	{
		// get => _material.GetTextureOffset(MToon10Prop.BaseColorTexture);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 220));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 221));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = MaterialExtensions_GetTextureOffset_m5FEA2E5F02DBBD52DDBB275BB7CC34080F6364E8(L_0, 6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 221));
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
// System.Single VRMShaders.VRM10.MToon10.Runtime.MToon10Migrator::MigrateToShadingToony(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MToon10Migrator_MigrateToShadingToony_m3E31256CF55144C7971354DD687279991AF30EF3 (float ___0_shadingToony0X, float ___1_shadingShift0X, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Migrator_MigrateToShadingToony_m3E31256CF55144C7971354DD687279991AF30EF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_shadingToony0X), (&___1_shadingShift0X));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Migrator_MigrateToShadingToony_m3E31256CF55144C7971354DD687279991AF30EF3_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 222));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 223));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 224));
		// var (rangeMin, rangeMax) = GetShadingRange0X(shadingToony0X, shadingShift0X);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 225));
		float L_0 = ___0_shadingToony0X;
		float L_1 = ___1_shadingShift0X;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 226));
		ValueTuple_2_t9700044DDBCB472B3F3F6E8691934C35DCD8E798 L_2;
		L_2 = MToon10Migrator_GetShadingRange0X_m0095B21109EB9B8F6C2F1D09301A14D625EB309C(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 226));
		ValueTuple_2_t9700044DDBCB472B3F3F6E8691934C35DCD8E798 L_3 = L_2;
		float L_4 = L_3.___Item1_0;
		V_0 = L_4;
		float L_5 = L_3.___Item2_1;
		V_1 = L_5;
		// return Mathf.Clamp((2.0f - (rangeMax - rangeMin)) * 0.5f, 0, 1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 227));
		float L_6 = V_1;
		float L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 228));
		float L_8;
		L_8 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((2.0f), ((float)il2cpp_codegen_subtract(L_6, L_7)))), (0.5f))), (0.0f), (1.0f), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 228));
		V_2 = L_8;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 229));
		float L_9 = V_2;
		return L_9;
	}
}
// System.Single VRMShaders.VRM10.MToon10.Runtime.MToon10Migrator::MigrateToShadingShift(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MToon10Migrator_MigrateToShadingShift_m6F5033A1ED85321C242F015B2CB3A6F89BDFFAE9 (float ___0_shadingToony0X, float ___1_shadingShift0X, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Migrator_MigrateToShadingShift_m6F5033A1ED85321C242F015B2CB3A6F89BDFFAE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_shadingToony0X), (&___1_shadingShift0X));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Migrator_MigrateToShadingShift_m6F5033A1ED85321C242F015B2CB3A6F89BDFFAE9_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 230));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 231));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 232));
		// var (rangeMin, rangeMax) = GetShadingRange0X(shadingToony0X, shadingShift0X);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 233));
		float L_0 = ___0_shadingToony0X;
		float L_1 = ___1_shadingShift0X;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 234));
		ValueTuple_2_t9700044DDBCB472B3F3F6E8691934C35DCD8E798 L_2;
		L_2 = MToon10Migrator_GetShadingRange0X_m0095B21109EB9B8F6C2F1D09301A14D625EB309C(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 234));
		ValueTuple_2_t9700044DDBCB472B3F3F6E8691934C35DCD8E798 L_3 = L_2;
		float L_4 = L_3.___Item1_0;
		V_0 = L_4;
		float L_5 = L_3.___Item2_1;
		V_1 = L_5;
		// return Mathf.Clamp((rangeMax + rangeMin) * 0.5f * -1f, -1, +1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 235));
		float L_6 = V_1;
		float L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 236));
		float L_8;
		L_8 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_6, L_7)), (0.5f))), (-1.0f))), (-1.0f), (1.0f), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 236));
		V_2 = L_8;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 237));
		float L_9 = V_2;
		return L_9;
	}
}
// System.Single VRMShaders.VRM10.MToon10.Runtime.MToon10Migrator::MigrateToGiEqualization(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MToon10Migrator_MigrateToGiEqualization_mB761E393A0C51648611419F8722FA2D20E25C786 (float ___0_giIntensity0X, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Migrator_MigrateToGiEqualization_mB761E393A0C51648611419F8722FA2D20E25C786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_giIntensity0X));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Migrator_MigrateToGiEqualization_mB761E393A0C51648611419F8722FA2D20E25C786_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 238));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 239));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 240));
		// return Mathf.Clamp01(1 - giIntensity0X);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 241));
		float L_0 = ___0_giIntensity0X;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 242));
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_subtract((1.0f), L_0)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 242));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 243));
		float L_2 = V_0;
		return L_2;
	}
}
// System.ValueTuple`2<System.Single,System.Single> VRMShaders.VRM10.MToon10.Runtime.MToon10Migrator::GetShadingRange0X(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t9700044DDBCB472B3F3F6E8691934C35DCD8E798 MToon10Migrator_GetShadingRange0X_m0095B21109EB9B8F6C2F1D09301A14D625EB309C (float ___0_shadingToony0X, float ___1_shadingShift0X, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Migrator_GetShadingRange0X_m0095B21109EB9B8F6C2F1D09301A14D625EB309C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mACBF4457CCF5AF2E2D9B785ACD5C15341B39098E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2_t9700044DDBCB472B3F3F6E8691934C35DCD8E798_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	ValueTuple_2_t9700044DDBCB472B3F3F6E8691934C35DCD8E798 V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_shadingToony0X), (&___1_shadingShift0X));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Migrator_GetShadingRange0X_m0095B21109EB9B8F6C2F1D09301A14D625EB309C_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 244));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 245));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 246));
		// var rangeMin = shadingShift0X;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 247));
		float L_0 = ___1_shadingShift0X;
		V_0 = L_0;
		// var rangeMax = Mathf.Lerp(1, shadingShift0X, shadingToony0X);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 248));
		float L_1 = ___1_shadingShift0X;
		float L_2 = ___0_shadingToony0X;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 249));
		float L_3;
		L_3 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((1.0f), L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 249));
		V_1 = L_3;
		// return (rangeMin, rangeMax);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 250));
		float L_4 = V_0;
		float L_5 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 251));
		ValueTuple_2_t9700044DDBCB472B3F3F6E8691934C35DCD8E798 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ValueTuple_2__ctor_mACBF4457CCF5AF2E2D9B785ACD5C15341B39098E((&L_6), L_4, L_5, /*hidden argument*/ValueTuple_2__ctor_mACBF4457CCF5AF2E2D9B785ACD5C15341B39098E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 251));
		V_2 = L_6;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 252));
		ValueTuple_2_t9700044DDBCB472B3F3F6E8691934C35DCD8E798 L_7 = V_2;
		return L_7;
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
// System.Void VRMShaders.VRM10.MToon10.Runtime.MToonValidator::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MToonValidator__ctor_m16CF011661AB1ACE3DBFA2E538322991BAB674DD (MToonValidator_tAE782F59F0AEEE1556A0E8284930D6215B63EEB6* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToonValidator__ctor_m16CF011661AB1ACE3DBFA2E538322991BAB674DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToonValidator_tAE782F59F0AEEE1556A0E8284930D6215B63EEB6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_material));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToonValidator__ctor_m16CF011661AB1ACE3DBFA2E538322991BAB674DD_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 253));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 254));
	{
		// public MToonValidator(Material material)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 255));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 256));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 256));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 257));
		// _material = material;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 258));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_material;
		__this->____material_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____material_0), (void*)L_0);
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 259));
		return;
	}
}
// System.Void VRMShaders.VRM10.MToon10.Runtime.MToonValidator::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MToonValidator_Validate_mA7017F646D9571F8A263F4AC4DFC26E7E592106B (MToonValidator_tAE782F59F0AEEE1556A0E8284930D6215B63EEB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10AlphaMode_t0B07225290C8440CBE51CB5656E065A320BED148_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10DoubleSidedMode_tB9DEAB88AF147B736683EFEAC8D04E48747E769A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10TransparentWithZWriteMode_tAAE19AE1E9895F61F722E6AE423F68AF88C6949D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToonValidator_Validate_mA7017F646D9571F8A263F4AC4DFC26E7E592106B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToonValidator_tAE782F59F0AEEE1556A0E8284930D6215B63EEB6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToonValidator_Validate_mA7017F646D9571F8A263F4AC4DFC26E7E592106B_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 260));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 261));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 262));
		// var alphaMode = (MToon10AlphaMode) _material.GetInt(MToon10Prop.AlphaMode);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 263));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 264));
		int32_t L_1;
		L_1 = MaterialExtensions_GetInt_m2ECFCF7B79F3BE3A31D622D7CB92E705B1E5F15A(L_0, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 264));
		V_0 = L_1;
		// var zWriteMode = (MToon10TransparentWithZWriteMode) _material.GetInt(MToon10Prop.TransparentWithZWrite);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 265));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 266));
		int32_t L_3;
		L_3 = MaterialExtensions_GetInt_m2ECFCF7B79F3BE3A31D622D7CB92E705B1E5F15A(L_2, 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 266));
		V_1 = L_3;
		// var renderQueueOffset = _material.GetInt(MToon10Prop.RenderQueueOffsetNumber);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 267));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 268));
		int32_t L_5;
		L_5 = MaterialExtensions_GetInt_m2ECFCF7B79F3BE3A31D622D7CB92E705B1E5F15A(L_4, 3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 268));
		V_2 = L_5;
		// var doubleSidedMode = (MToon10DoubleSidedMode) _material.GetInt(MToon10Prop.DoubleSided);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 269));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 270));
		int32_t L_7;
		L_7 = MaterialExtensions_GetInt_m2ECFCF7B79F3BE3A31D622D7CB92E705B1E5F15A(L_6, 4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 270));
		V_3 = L_7;
		// SetUnityShaderPassSettings(_material, alphaMode, zWriteMode, renderQueueOffset, doubleSidedMode);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 271));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->____material_0;
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 272));
		MToonValidator_SetUnityShaderPassSettings_m17589F417EF7C006E1367C3F3DBB8FC139DBE7F3(L_8, L_9, L_10, L_11, L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 272));
		// SetUnityShaderVariants(_material);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 273));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->____material_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 274));
		MToonValidator_SetUnityShaderVariants_m2B821AE572C40BF2C6DDA2D3FB1D1350B2E09DED(L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 274));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 275));
		return;
	}
}
// System.Void VRMShaders.VRM10.MToon10.Runtime.MToonValidator::SetUnityShaderPassSettings(UnityEngine.Material,VRMShaders.VRM10.MToon10.Runtime.MToon10AlphaMode,VRMShaders.VRM10.MToon10.Runtime.MToon10TransparentWithZWriteMode,System.Int32,VRMShaders.VRM10.MToon10.Runtime.MToon10DoubleSidedMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MToonValidator_SetUnityShaderPassSettings_m17589F417EF7C006E1367C3F3DBB8FC139DBE7F3 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, int32_t ___1_alphaMode, int32_t ___2_zWriteMode, int32_t ___3_renderQueueOffset, int32_t ___4_doubleSidedMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10AlphaMode_t0B07225290C8440CBE51CB5656E065A320BED148_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10DoubleSidedMode_tB9DEAB88AF147B736683EFEAC8D04E48747E769A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToonValidator_SetUnityShaderPassSettings_m17589F417EF7C006E1367C3F3DBB8FC139DBE7F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3223D004C9379F2B3083B62944F7924A92190F90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC5B3304C047D60B4E3EC2809E3CE3FA62191A79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF318A9CBF6133558944579D6309707D3FF4760E1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_material), (&___1_alphaMode), (&___2_zWriteMode), (&___3_renderQueueOffset), (&___4_doubleSidedMode));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToonValidator_SetUnityShaderPassSettings_m17589F417EF7C006E1367C3F3DBB8FC139DBE7F3_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 276));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 277));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 278));
		// material.SetInt(MToon10Prop.AlphaMode, (int) alphaMode);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 279));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_material;
		int32_t L_1 = ___1_alphaMode;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 280));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_0, 0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 280));
		// material.SetInt(MToon10Prop.TransparentWithZWrite, (int) zWriteMode);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 281));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___0_material;
		int32_t L_3 = ___2_zWriteMode;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 282));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_2, 1, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 282));
		// material.SetInt(MToon10Prop.DoubleSided, (int) doubleSidedMode);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 283));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___0_material;
		int32_t L_5 = ___4_doubleSidedMode;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 284));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_4, 4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 284));
		// switch (alphaMode)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 285));
		int32_t L_6 = ___1_alphaMode;
		V_1 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 286));
		int32_t L_7 = V_1;
		V_0 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 287));
		int32_t L_8 = V_0;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0038;
			}
			case 1:
			{
				goto IL_0085;
			}
			case 2:
			{
				goto IL_00d2;
			}
		}
	}
	{
		goto IL_0187;
	}

IL_0038:
	{
		// material.SetOverrideTag(UnityRenderTag.Key, UnityRenderTag.OpaqueValue);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 288));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 289));
		NullCheck(L_9);
		Material_SetOverrideTag_mD68833CD28EBAF71CB6AF127B38075629B74FE08(L_9, _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4, _stringLiteral3223D004C9379F2B3083B62944F7924A92190F90, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 289));
		// material.SetInt(MToon10Prop.UnitySrcBlend, (int) BlendMode.One);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 290));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 291));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_10, ((int32_t)35), 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 291));
		// material.SetInt(MToon10Prop.UnityDstBlend, (int) BlendMode.Zero);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 292));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 293));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_11, ((int32_t)36), 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 293));
		// material.SetInt(MToon10Prop.UnityZWrite, (int) UnityZWriteMode.On);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 294));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 295));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_12, ((int32_t)37), 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 295));
		// material.SetInt(MToon10Prop.UnityAlphaToMask, (int) UnityAlphaToMaskMode.Off);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 296));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 297));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_13, ((int32_t)38), 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 297));
		// renderQueueOffset = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 298));
		___3_renderQueueOffset = 0;
		// material.renderQueue = (int) RenderQueue.Geometry;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 299));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 300));
		NullCheck(L_14);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_14, ((int32_t)2000), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 300));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 301));
		goto IL_0199;
	}

IL_0085:
	{
		// material.SetOverrideTag(UnityRenderTag.Key, UnityRenderTag.TransparentCutoutValue);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 302));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 303));
		NullCheck(L_15);
		Material_SetOverrideTag_mD68833CD28EBAF71CB6AF127B38075629B74FE08(L_15, _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4, _stringLiteralAC5B3304C047D60B4E3EC2809E3CE3FA62191A79, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 303));
		// material.SetInt(MToon10Prop.UnitySrcBlend, (int) BlendMode.One);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 304));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 305));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_16, ((int32_t)35), 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 305));
		// material.SetInt(MToon10Prop.UnityDstBlend, (int) BlendMode.Zero);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 306));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 307));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_17, ((int32_t)36), 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 307));
		// material.SetInt(MToon10Prop.UnityZWrite, (int) UnityZWriteMode.On);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 308));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 309));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_18, ((int32_t)37), 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 309));
		// material.SetInt(MToon10Prop.UnityAlphaToMask, (int) UnityAlphaToMaskMode.On);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 310));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 311));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_19, ((int32_t)38), 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 311));
		// renderQueueOffset = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 312));
		___3_renderQueueOffset = 0;
		// material.renderQueue = (int) RenderQueue.AlphaTest;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 313));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 314));
		NullCheck(L_20);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_20, ((int32_t)2450), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 314));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 315));
		goto IL_0199;
	}

IL_00d2:
	{
		// case MToon10AlphaMode.Transparent when zWriteMode == MToon10TransparentWithZWriteMode.Off:
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 316));
		int32_t L_21 = ___2_zWriteMode;
		if (!L_21)
		{
			goto IL_00d7;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 317));
		goto IL_012c;
	}

IL_00d7:
	{
		// material.SetOverrideTag(UnityRenderTag.Key, UnityRenderTag.TransparentValue);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 318));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 319));
		NullCheck(L_22);
		Material_SetOverrideTag_mD68833CD28EBAF71CB6AF127B38075629B74FE08(L_22, _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4, _stringLiteralF318A9CBF6133558944579D6309707D3FF4760E1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 319));
		// material.SetInt(MToon10Prop.UnitySrcBlend, (int) BlendMode.SrcAlpha);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 320));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 321));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_23, ((int32_t)35), 5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 321));
		// material.SetInt(MToon10Prop.UnityDstBlend, (int) BlendMode.OneMinusSrcAlpha);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 322));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 323));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_24, ((int32_t)36), ((int32_t)10), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 323));
		// material.SetInt(MToon10Prop.UnityZWrite, (int) UnityZWriteMode.Off);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 324));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 325));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_25, ((int32_t)37), 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 325));
		// material.SetInt(MToon10Prop.UnityAlphaToMask, (int) UnityAlphaToMaskMode.Off);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 326));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 327));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_26, ((int32_t)38), 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 327));
		// renderQueueOffset = Mathf.Clamp(renderQueueOffset, -9, 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 328));
		int32_t L_27 = ___3_renderQueueOffset;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 329));
		int32_t L_28;
		L_28 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_27, ((int32_t)-9), 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 329));
		___3_renderQueueOffset = L_28;
		// material.renderQueue = (int) RenderQueue.Transparent + renderQueueOffset;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 330));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = ___0_material;
		int32_t L_30 = ___3_renderQueueOffset;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 331));
		NullCheck(L_29);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_29, ((int32_t)il2cpp_codegen_add(((int32_t)3000), L_30)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 331));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 332));
		goto IL_0199;
	}

IL_012c:
	{
		// case MToon10AlphaMode.Transparent when zWriteMode == MToon10TransparentWithZWriteMode.On:
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 333));
		int32_t L_31 = ___2_zWriteMode;
		if ((((int32_t)L_31) == ((int32_t)1)))
		{
			goto IL_0132;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 334));
		goto IL_0187;
	}

IL_0132:
	{
		// material.SetOverrideTag(UnityRenderTag.Key, UnityRenderTag.TransparentValue);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 335));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 336));
		NullCheck(L_32);
		Material_SetOverrideTag_mD68833CD28EBAF71CB6AF127B38075629B74FE08(L_32, _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4, _stringLiteralF318A9CBF6133558944579D6309707D3FF4760E1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 336));
		// material.SetInt(MToon10Prop.UnitySrcBlend, (int) BlendMode.SrcAlpha);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 337));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 338));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_33, ((int32_t)35), 5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 338));
		// material.SetInt(MToon10Prop.UnityDstBlend, (int) BlendMode.OneMinusSrcAlpha);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 339));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 340));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_34, ((int32_t)36), ((int32_t)10), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 340));
		// material.SetInt(MToon10Prop.UnityZWrite, (int) UnityZWriteMode.On);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 341));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 342));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_35, ((int32_t)37), 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 342));
		// material.SetInt(MToon10Prop.UnityAlphaToMask, (int) UnityAlphaToMaskMode.Off);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 343));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 344));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_36, ((int32_t)38), 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 344));
		// renderQueueOffset = Mathf.Clamp(renderQueueOffset, 0, +9);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 345));
		int32_t L_37 = ___3_renderQueueOffset;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 346));
		int32_t L_38;
		L_38 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_37, 0, ((int32_t)9), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 346));
		___3_renderQueueOffset = L_38;
		// material.renderQueue = (int) RenderQueue.GeometryLast + 1 + renderQueueOffset; // Transparent First + N
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 347));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = ___0_material;
		int32_t L_40 = ___3_renderQueueOffset;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 348));
		NullCheck(L_39);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_39, ((int32_t)il2cpp_codegen_add(((int32_t)2501), L_40)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 348));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 349));
		goto IL_0199;
	}

IL_0187:
	{
		// throw new ArgumentOutOfRangeException(nameof(alphaMode), alphaMode, null);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 350));
		int32_t L_41 = ___1_alphaMode;
		int32_t L_42 = L_41;
		RuntimeObject* L_43 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MToon10AlphaMode_t0B07225290C8440CBE51CB5656E065A320BED148_il2cpp_TypeInfo_var)), &L_42);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 351));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_44 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_44);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7E052760968B31170B95FE09256C1585EFC757F1)), L_43, (String_t*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 351));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MToonValidator_SetUnityShaderPassSettings_m17589F417EF7C006E1367C3F3DBB8FC139DBE7F3_RuntimeMethod_var)));
	}

IL_0199:
	{
		// switch (doubleSidedMode)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 352));
		int32_t L_45 = ___4_doubleSidedMode;
		V_3 = L_45;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 353));
		int32_t L_46 = V_3;
		V_2 = L_46;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 354));
		int32_t L_47 = V_2;
		if (!L_47)
		{
			goto IL_01a9;
		}
	}
	{
		goto IL_01a3;
	}

IL_01a3:
	{
		int32_t L_48 = V_2;
		if ((((int32_t)L_48) == ((int32_t)1)))
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_01c1;
	}

IL_01a9:
	{
		// material.SetInt(MToon10Prop.UnityCullMode, (int) UnityCullMode.Back);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 355));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 356));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_49, ((int32_t)34), 2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 356));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 357));
		goto IL_01d4;
	}

IL_01b5:
	{
		// material.SetInt(MToon10Prop.UnityCullMode, (int) UnityCullMode.Off);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 358));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_50 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 359));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_50, ((int32_t)34), 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 359));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 360));
		goto IL_01d4;
	}

IL_01c1:
	{
		// throw new ArgumentOutOfRangeException(nameof(doubleSidedMode), doubleSidedMode, null);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 361));
		int32_t L_51 = ___4_doubleSidedMode;
		int32_t L_52 = L_51;
		RuntimeObject* L_53 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MToon10DoubleSidedMode_tB9DEAB88AF147B736683EFEAC8D04E48747E769A_il2cpp_TypeInfo_var)), &L_52);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 362));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_54 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_54);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_54, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A0A343AAEE0AC50149B80528E3F954020629CD8)), L_53, (String_t*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 362));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MToonValidator_SetUnityShaderPassSettings_m17589F417EF7C006E1367C3F3DBB8FC139DBE7F3_RuntimeMethod_var)));
	}

IL_01d4:
	{
		// material.SetInt(MToon10Prop.RenderQueueOffsetNumber, renderQueueOffset);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 363));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_55 = ___0_material;
		int32_t L_56 = ___3_renderQueueOffset;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 364));
		MaterialExtensions_SetInt_m9EB29C43397647A819992D00B4C965CD153309B5(L_55, 3, L_56, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 364));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 365));
		return;
	}
}
// System.Void VRMShaders.VRM10.MToon10.Runtime.MToonValidator::SetUnityCullingSettings(UnityEngine.Material,VRMShaders.VRM10.MToon10.Runtime.MToon10DoubleSidedMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MToonValidator_SetUnityCullingSettings_m07A373C88102A8D0A50173F708B09051C2B95D44 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, int32_t ___1_doubleSidedMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToonValidator_SetUnityCullingSettings_m07A373C88102A8D0A50173F708B09051C2B95D44_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_material), (&___1_doubleSidedMode));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToonValidator_SetUnityCullingSettings_m07A373C88102A8D0A50173F708B09051C2B95D44_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 366));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 367));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 368));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 369));
		return;
	}
}
// System.Void VRMShaders.VRM10.MToon10.Runtime.MToonValidator::SetUnityShaderVariants(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MToonValidator_SetUnityShaderVariants_m2B821AE572C40BF2C6DDA2D3FB1D1350B2E09DED (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToonValidator_SetUnityShaderVariants_m2B821AE572C40BF2C6DDA2D3FB1D1350B2E09DED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2440A08FE7FAFE486836BCC5707B74C689C1BD13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5235BC8A11AC79193A67E99975CCDBC94A0FA351);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E9FB2742A37509ADD87A117527ED10807CCB4C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7B15FE82E1E02032E812AB5377830C57C3543B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD780E7C9AB5790324D7116493085F96BCF418C3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE56E3CA90946FD6A4E46DAA36C7BE7FC220664A0);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_material));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToonValidator_SetUnityShaderVariants_m2B821AE572C40BF2C6DDA2D3FB1D1350B2E09DED_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 370));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 371));
	String_t* G_B2_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B6_1 = NULL;
	String_t* G_B4_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B4_1 = NULL;
	String_t* G_B5_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B7_2 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 372));
		// material.SetKeyword(
		//     UnityAlphaModeKeyword.AlphaTest,
		//     (MToon10AlphaMode) material.GetInt(MToon10Prop.AlphaMode) == MToon10AlphaMode.Cutout
		// );
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 373));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 374));
		int32_t L_2;
		L_2 = MaterialExtensions_GetInt_m2ECFCF7B79F3BE3A31D622D7CB92E705B1E5F15A(L_1, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 374));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 375));
		MaterialExtensions_SetKeyword_mF508C0DF43DC22AA3BED52F98845888043F2874B(L_0, _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5, (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 375));
		// material.SetKeyword(
		//     UnityAlphaModeKeyword.AlphaBlend,
		//     (MToon10AlphaMode) material.GetInt(MToon10Prop.AlphaMode) == MToon10AlphaMode.Transparent
		// );
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 376));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___0_material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 377));
		int32_t L_5;
		L_5 = MaterialExtensions_GetInt_m2ECFCF7B79F3BE3A31D622D7CB92E705B1E5F15A(L_4, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 377));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 378));
		MaterialExtensions_SetKeyword_mF508C0DF43DC22AA3BED52F98845888043F2874B(L_3, _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C, (bool)((((int32_t)L_5) == ((int32_t)2))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 378));
		// material.SetKeyword(
		//     UnityAlphaModeKeyword.AlphaPremultiply,
		//     false
		// );
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 379));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 380));
		MaterialExtensions_SetKeyword_mF508C0DF43DC22AA3BED52F98845888043F2874B(L_6, _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8, (bool)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 380));
		// material.SetKeyword(
		//     MToon10NormalMapKeyword.On,
		//     material.GetTexture(MToon10Prop.NormalTexture) != null
		// );
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 381));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = ___0_material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 382));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_9;
		L_9 = MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E(L_8, ((int32_t)9), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 382));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 383));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 383));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 384));
		MaterialExtensions_SetKeyword_mF508C0DF43DC22AA3BED52F98845888043F2874B(L_7, _stringLiteral5235BC8A11AC79193A67E99975CCDBC94A0FA351, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 384));
		// material.SetKeyword(
		//     MToon10EmissiveMapKeyword.On,
		//     material.GetTexture(MToon10Prop.EmissiveTexture) != null
		// );
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 385));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = ___0_material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 386));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_13;
		L_13 = MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E(L_12, ((int32_t)17), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 386));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 387));
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 387));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 388));
		MaterialExtensions_SetKeyword_mF508C0DF43DC22AA3BED52F98845888043F2874B(L_11, _stringLiteral8E9FB2742A37509ADD87A117527ED10807CCB4C1, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 388));
		// material.SetKeyword(
		//     MToon10RimMapKeyword.On,
		//     material.GetTexture(MToon10Prop.MatcapTexture) != null || // Matcap
		//     material.GetTexture(MToon10Prop.RimMultiplyTexture) != null // Rim
		// );
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 389));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = ___0_material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 390));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_17;
		L_17 = MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E(L_16, ((int32_t)19), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 390));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 391));
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 391));
		G_B1_0 = _stringLiteralB7B15FE82E1E02032E812AB5377830C57C3543B3;
		G_B1_1 = L_15;
		if (L_18)
		{
			G_B2_0 = _stringLiteralB7B15FE82E1E02032E812AB5377830C57C3543B3;
			G_B2_1 = L_15;
			goto IL_0094;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 392));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_20;
		L_20 = MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E(L_19, ((int32_t)23), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 392));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 393));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 393));
		G_B3_0 = ((int32_t)(L_21));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0095;
	}

IL_0094:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0095:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 394));
		MaterialExtensions_SetKeyword_mF508C0DF43DC22AA3BED52F98845888043F2874B(G_B3_2, G_B3_1, (bool)G_B3_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 394));
		// material.SetKeyword(
		//     MToon10ParameterMapKeyword.On,
		//     material.GetTexture(MToon10Prop.ShadingShiftTexture) != null || // Shading Shift (R)
		//     material.GetTexture(MToon10Prop.OutlineWidthMultiplyTexture) != null || // Outline Width (G)
		//     material.GetTexture(MToon10Prop.UvAnimationMaskTexture) != null // UV Anim Mask (B)
		// );
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 395));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = ___0_material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 396));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_24;
		L_24 = MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E(L_23, ((int32_t)12), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 396));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 397));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 397));
		G_B4_0 = _stringLiteralD780E7C9AB5790324D7116493085F96BCF418C3C;
		G_B4_1 = L_22;
		if (L_25)
		{
			G_B6_0 = _stringLiteralD780E7C9AB5790324D7116493085F96BCF418C3C;
			G_B6_1 = L_22;
			goto IL_00d1;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 398));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_27;
		L_27 = MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E(L_26, ((int32_t)27), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 398));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 399));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 399));
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		if (L_28)
		{
			G_B6_0 = G_B4_0;
			G_B6_1 = G_B4_1;
			goto IL_00d1;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 400));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_30;
		L_30 = MaterialExtensions_GetTexture_m9A4FC1D45205CDF4E6D1A9C937CE14101DFF265E(L_29, ((int32_t)30), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 400));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 401));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 401));
		G_B7_0 = ((int32_t)(L_31));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_00d2;
	}

IL_00d1:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_00d2:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 402));
		MaterialExtensions_SetKeyword_mF508C0DF43DC22AA3BED52F98845888043F2874B(G_B7_2, G_B7_1, (bool)G_B7_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 402));
		// material.SetKeyword(
		//     MToon10OutlineModeKeyword.World,
		//     (MToon10OutlineMode) material.GetInt(MToon10Prop.OutlineWidthMode) == MToon10OutlineMode.World
		// );
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 403));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = ___0_material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 404));
		int32_t L_34;
		L_34 = MaterialExtensions_GetInt_m2ECFCF7B79F3BE3A31D622D7CB92E705B1E5F15A(L_33, ((int32_t)25), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 404));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 405));
		MaterialExtensions_SetKeyword_mF508C0DF43DC22AA3BED52F98845888043F2874B(L_32, _stringLiteral2440A08FE7FAFE486836BCC5707B74C689C1BD13, (bool)((((int32_t)L_34) == ((int32_t)1))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 405));
		// material.SetKeyword(
		//     MToon10OutlineModeKeyword.Screen,
		//     (MToon10OutlineMode) material.GetInt(MToon10Prop.OutlineWidthMode) == MToon10OutlineMode.Screen
		// );
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 406));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = ___0_material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = ___0_material;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 407));
		int32_t L_37;
		L_37 = MaterialExtensions_GetInt_m2ECFCF7B79F3BE3A31D622D7CB92E705B1E5F15A(L_36, ((int32_t)25), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 407));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 408));
		MaterialExtensions_SetKeyword_mF508C0DF43DC22AA3BED52F98845888043F2874B(L_35, _stringLiteralE56E3CA90946FD6A4E46DAA36C7BE7FC220664A0, (bool)((((int32_t)L_37) == ((int32_t)2))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 408));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 409));
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
// System.Void VRMShaders.VRM10.MToon10.Runtime.MToon10Meta::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MToon10Meta__cctor_m885A95E34B47804DADB800050FEA73AD98ABD315 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Meta__cctor_m885A95E34B47804DADB800050FEA73AD98ABD315_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Meta_t2E87F7FB573B51843B395EC4C81D1C60E88C461B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B67A51D6E60B42078899E75AC5CA2F507DDF84E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4AA6CAB4A0B4522AAEACA3C7DAA1BAEA56448FC);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Meta__cctor_m885A95E34B47804DADB800050FEA73AD98ABD315_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 410));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 411));
	{
		// public static readonly string UnityShaderName = "VRM10/MToon10";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 412));
		((MToon10Meta_t2E87F7FB573B51843B395EC4C81D1C60E88C461B_StaticFields*)il2cpp_codegen_static_fields_for(MToon10Meta_t2E87F7FB573B51843B395EC4C81D1C60E88C461B_il2cpp_TypeInfo_var))->___UnityShaderName_0 = _stringLiteral8B67A51D6E60B42078899E75AC5CA2F507DDF84E;
		Il2CppCodeGenWriteBarrier((void**)(&((MToon10Meta_t2E87F7FB573B51843B395EC4C81D1C60E88C461B_StaticFields*)il2cpp_codegen_static_fields_for(MToon10Meta_t2E87F7FB573B51843B395EC4C81D1C60E88C461B_il2cpp_TypeInfo_var))->___UnityShaderName_0), (void*)_stringLiteral8B67A51D6E60B42078899E75AC5CA2F507DDF84E);
		// public static readonly string URPUnityShaderName = "VRM10/Universal Render Pipeline/MToon10";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 413));
		((MToon10Meta_t2E87F7FB573B51843B395EC4C81D1C60E88C461B_StaticFields*)il2cpp_codegen_static_fields_for(MToon10Meta_t2E87F7FB573B51843B395EC4C81D1C60E88C461B_il2cpp_TypeInfo_var))->___URPUnityShaderName_1 = _stringLiteralB4AA6CAB4A0B4522AAEACA3C7DAA1BAEA56448FC;
		Il2CppCodeGenWriteBarrier((void**)(&((MToon10Meta_t2E87F7FB573B51843B395EC4C81D1C60E88C461B_StaticFields*)il2cpp_codegen_static_fields_for(MToon10Meta_t2E87F7FB573B51843B395EC4C81D1C60E88C461B_il2cpp_TypeInfo_var))->___URPUnityShaderName_1), (void*)_stringLiteralB4AA6CAB4A0B4522AAEACA3C7DAA1BAEA56448FC);
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
// System.Collections.Generic.IReadOnlyDictionary`2<VRMShaders.VRM10.MToon10.Runtime.MToon10Prop,System.String> VRMShaders.VRM10.MToon10.Runtime.MToon10Properties::get_UnityShaderLabNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MToon10Properties_get_UnityShaderLabNames_m2BBC7CA6CAD66C45EC5769A076E8F8AB201C64FD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Properties_get_UnityShaderLabNames_m2BBC7CA6CAD66C45EC5769A076E8F8AB201C64FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Properties_get_UnityShaderLabNames_m2BBC7CA6CAD66C45EC5769A076E8F8AB201C64FD_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 414));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 415));
	{
		// public static IReadOnlyDictionary<MToon10Prop, string> UnityShaderLabNames => _unityShaderLabNames;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 416));
		il2cpp_codegen_runtime_class_init_inline(MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_0 = ((MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_StaticFields*)il2cpp_codegen_static_fields_for(MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var))->____unityShaderLabNames_0;
		return L_0;
	}
}
// System.String VRMShaders.VRM10.MToon10.Runtime.MToon10Properties::ToUnityShaderLabName(VRMShaders.VRM10.MToon10.Runtime.MToon10Prop)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MToon10Properties_ToUnityShaderLabName_mC945257563326F2A5A589D68C49F702338961244 (int32_t ___0_prop, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t45218BE540AC6E3788EE2FB530675CCCBCAC8307_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Properties_ToUnityShaderLabName_mC945257563326F2A5A589D68C49F702338961244_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_prop));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Properties_ToUnityShaderLabName_mC945257563326F2A5A589D68C49F702338961244_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 417));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 418));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 419));
		// return UnityShaderLabNames[prop];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 420));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 421));
		il2cpp_codegen_runtime_class_init_inline(MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = MToon10Properties_get_UnityShaderLabNames_m2BBC7CA6CAD66C45EC5769A076E8F8AB201C64FD_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 421));
		int32_t L_1 = ___0_prop;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 422));
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(1 /* TValue System.Collections.Generic.IReadOnlyDictionary`2<VRMShaders.VRM10.MToon10.Runtime.MToon10Prop,System.String>::get_Item(TKey) */, IReadOnlyDictionary_2_t45218BE540AC6E3788EE2FB530675CCCBCAC8307_il2cpp_TypeInfo_var, L_0, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 422));
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 423));
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void VRMShaders.VRM10.MToon10.Runtime.MToon10Properties::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MToon10Properties__cctor_mA6E190DE7E23CF078AFA1D8FD1BB67A6A9DB9890 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7F23C5FA216F016158FBE376D22A7BB6F30622BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Properties__cctor_mA6E190DE7E23CF078AFA1D8FD1BB67A6A9DB9890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral047F45200EBEF4D979C877B4E1EF2591FFF8BA4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral064A07D5E22C32A6D5A998D808209624F7ACF1C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BACE17C01835A178E77734E2A90FD803F59C74D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB640957021585D57B206F8888C8A8CC62E0F91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FAEA17123A0108E29C58DD38088937111DE9A4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17F5B715255AB83B4B841256DE9A6D68885E2373);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1852BDABAAC215A55CD156A0DFEB95E86B6FDF63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C5DEF38C3D3689AB6F719BCC283EB0DFE8BCFDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326129114EB43E5A03AD980A3709D55FE7934916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral462F7D4248952AB5D238D075548982C22C4EB492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral482304B736916CD1C9E6FF6B8D1D1786753E2221);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BF33C8B721CCE36BD06258EC280CE5E08F5685C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6153E459D88880D6E7B15695C174145219BC00D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62207909339E3F15E78B570F80DE3CB06296984A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6537F248D6A7514279214402F7D5ED7769131118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7308B3767954511438F1F2C46BAC46AB3D26F4ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80A7792D583E2552BFC9B069A1D87D6FEABEC64A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9882AEF2D2BD1F9CF654EC0A3B3784615102EEAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A999F72EC4FBFF2D4146F4A123E2FA5189B348E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E489994D4C2D1FB6036C4A637D4B30F1BD119D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB32F137D7398FFB53E5E7ACA2526882ADE8473A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB33AB934A58D128D90E13E5323024A4F181380D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB0F3649A7E94417CE23F1DD6D61354E06D64C56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE5A164234C945013CE7F044C3EE99C37CD7930D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4E24EBD6552E5F2938CC0AC13683CACD7E263C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A279749C3E15A7697098E8D94E6202014E030B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5F5BEE4C0A5F361863BE22F9CA2D0F74171002F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2C2462B3A8712A2649D48418F13934A569870B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAD3E1CDEC41B2E0B4A288B79527EC593FCE5FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3CCAA0E098D49C3B99A0B2A0160E80837D3871B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF462ADCD9DAFA13FAA0664BD8DEACC7C73C1AEEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB76267F25C6D0234207561E43D8AD45B3D54548);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Properties__cctor_mA6E190DE7E23CF078AFA1D8FD1BB67A6A9DB9890_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 424));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 425));
	{
		// private static readonly Dictionary<MToon10Prop, string> _unityShaderLabNames = new Dictionary<MToon10Prop, string>
		// {
		//     [MToon10Prop.AlphaMode] = "_AlphaMode",
		//     [MToon10Prop.TransparentWithZWrite] = "_TransparentWithZWrite",
		//     [MToon10Prop.AlphaCutoff] = "_Cutoff",
		//     [MToon10Prop.RenderQueueOffsetNumber] = "_RenderQueueOffset",
		//     [MToon10Prop.DoubleSided] = "_DoubleSided",
		// 
		//     [MToon10Prop.BaseColorFactor] = "_Color",
		//     [MToon10Prop.BaseColorTexture] = "_MainTex",
		//     [MToon10Prop.ShadeColorFactor] = "_ShadeColor",
		//     [MToon10Prop.ShadeColorTexture] = "_ShadeTex",
		//     [MToon10Prop.NormalTexture] = "_BumpMap",
		//     [MToon10Prop.NormalTextureScale] = "_BumpScale",
		//     [MToon10Prop.ShadingShiftFactor] = "_ShadingShiftFactor",
		//     [MToon10Prop.ShadingShiftTexture] = "_ShadingShiftTex",
		//     [MToon10Prop.ShadingShiftTextureScale] = "_ShadingShiftTexScale",
		//     [MToon10Prop.ShadingToonyFactor] = "_ShadingToonyFactor",
		// 
		//     [MToon10Prop.GiEqualizationFactor] = "_GiEqualization",
		// 
		//     [MToon10Prop.EmissiveFactor] = "_EmissionColor",
		//     [MToon10Prop.EmissiveTexture] = "_EmissionMap",
		// 
		//     [MToon10Prop.MatcapColorFactor] = "_MatcapColor",
		//     [MToon10Prop.MatcapTexture] = "_MatcapTex",
		//     [MToon10Prop.ParametricRimColorFactor] = "_RimColor",
		//     [MToon10Prop.ParametricRimFresnelPowerFactor] = "_RimFresnelPower",
		//     [MToon10Prop.ParametricRimLiftFactor] = "_RimLift",
		//     [MToon10Prop.RimMultiplyTexture] = "_RimTex",
		//     [MToon10Prop.RimLightingMixFactor] = "_RimLightingMix",
		// 
		//     [MToon10Prop.OutlineWidthMode] = "_OutlineWidthMode",
		//     [MToon10Prop.OutlineWidthFactor] = "_OutlineWidth",
		//     [MToon10Prop.OutlineWidthMultiplyTexture] = "_OutlineWidthTex",
		//     [MToon10Prop.OutlineColorFactor] = "_OutlineColor",
		//     [MToon10Prop.OutlineLightingMixFactor] = "_OutlineLightingMix",
		// 
		//     [MToon10Prop.UvAnimationMaskTexture] = "_UvAnimMaskTex",
		//     [MToon10Prop.UvAnimationScrollXSpeedFactor] = "_UvAnimScrollXSpeed",
		//     [MToon10Prop.UvAnimationScrollYSpeedFactor] = "_UvAnimScrollYSpeed",
		//     [MToon10Prop.UvAnimationRotationSpeedFactor] = "_UvAnimRotationSpeed",
		// 
		//     [MToon10Prop.UnityCullMode] = "_M_CullMode",
		//     [MToon10Prop.UnitySrcBlend] = "_M_SrcBlend",
		//     [MToon10Prop.UnityDstBlend] = "_M_DstBlend",
		//     [MToon10Prop.UnityZWrite] = "_M_ZWrite",
		//     [MToon10Prop.UnityAlphaToMask] = "_M_AlphaToMask",
		// 
		//     [MToon10Prop.EditorEditMode] = "_M_EditMode",
		// };
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 426));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 427));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_0 = (Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB*)il2cpp_codegen_object_new(Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m7F23C5FA216F016158FBE376D22A7BB6F30622BD(L_0, Dictionary_2__ctor_m7F23C5FA216F016158FBE376D22A7BB6F30622BD_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 427));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_1 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 428));
		NullCheck(L_1);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_1, 0, _stringLiteral064A07D5E22C32A6D5A998D808209624F7ACF1C1, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 428));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_2 = L_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 429));
		NullCheck(L_2);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_2, 1, _stringLiteral62207909339E3F15E78B570F80DE3CB06296984A, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 429));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_3 = L_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 430));
		NullCheck(L_3);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_3, 2, _stringLiteral326129114EB43E5A03AD980A3709D55FE7934916, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 430));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_4 = L_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 431));
		NullCheck(L_4);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_4, 3, _stringLiteral462F7D4248952AB5D238D075548982C22C4EB492, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 431));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_5 = L_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 432));
		NullCheck(L_5);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_5, 4, _stringLiteral482304B736916CD1C9E6FF6B8D1D1786753E2221, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 432));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_6 = L_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 433));
		NullCheck(L_6);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_6, 5, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 433));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_7 = L_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 434));
		NullCheck(L_7);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_7, 6, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 434));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_8 = L_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 435));
		NullCheck(L_8);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_8, 7, _stringLiteral9E489994D4C2D1FB6036C4A637D4B30F1BD119D5, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 435));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_9 = L_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 436));
		NullCheck(L_9);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_9, 8, _stringLiteralBB0F3649A7E94417CE23F1DD6D61354E06D64C56, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 436));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_10 = L_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 437));
		NullCheck(L_10);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_10, ((int32_t)9), _stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 437));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_11 = L_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 438));
		NullCheck(L_11);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_11, ((int32_t)10), _stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 438));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_12 = L_11;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 439));
		NullCheck(L_12);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_12, ((int32_t)11), _stringLiteral6537F248D6A7514279214402F7D5ED7769131118, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 439));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_13 = L_12;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 440));
		NullCheck(L_13);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_13, ((int32_t)12), _stringLiteral1852BDABAAC215A55CD156A0DFEB95E86B6FDF63, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 440));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_14 = L_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 441));
		NullCheck(L_14);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_14, ((int32_t)13), _stringLiteralD5F5BEE4C0A5F361863BE22F9CA2D0F74171002F, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 441));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_15 = L_14;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 442));
		NullCheck(L_15);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_15, ((int32_t)14), _stringLiteral9A999F72EC4FBFF2D4146F4A123E2FA5189B348E, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 442));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_16 = L_15;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 443));
		NullCheck(L_16);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_16, ((int32_t)15), _stringLiteral0DB640957021585D57B206F8888C8A8CC62E0F91, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 443));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_17 = L_16;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 444));
		NullCheck(L_17);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_17, ((int32_t)16), _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 444));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_18 = L_17;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 445));
		NullCheck(L_18);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_18, ((int32_t)17), _stringLiteralB32F137D7398FFB53E5E7ACA2526882ADE8473A6, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 445));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_19 = L_18;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 446));
		NullCheck(L_19);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_19, ((int32_t)18), _stringLiteralEAD3E1CDEC41B2E0B4A288B79527EC593FCE5FC2, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 446));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_20 = L_19;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 447));
		NullCheck(L_20);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_20, ((int32_t)19), _stringLiteral4BF33C8B721CCE36BD06258EC280CE5E08F5685C, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 447));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_21 = L_20;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 448));
		NullCheck(L_21);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_21, ((int32_t)20), _stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 448));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_22 = L_21;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 449));
		NullCheck(L_22);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_22, ((int32_t)21), _stringLiteral17F5B715255AB83B4B841256DE9A6D68885E2373, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 449));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_23 = L_22;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 450));
		NullCheck(L_23);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_23, ((int32_t)22), _stringLiteralB33AB934A58D128D90E13E5323024A4F181380D7, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 450));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_24 = L_23;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 451));
		NullCheck(L_24);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_24, ((int32_t)23), _stringLiteral80A7792D583E2552BFC9B069A1D87D6FEABEC64A, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 451));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_25 = L_24;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 452));
		NullCheck(L_25);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_25, ((int32_t)24), _stringLiteral0FAEA17123A0108E29C58DD38088937111DE9A4F, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 452));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_26 = L_25;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 453));
		NullCheck(L_26);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_26, ((int32_t)25), _stringLiteral2C5DEF38C3D3689AB6F719BCC283EB0DFE8BCFDE, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 453));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_27 = L_26;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 454));
		NullCheck(L_27);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_27, ((int32_t)26), _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 454));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_28 = L_27;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 455));
		NullCheck(L_28);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_28, ((int32_t)27), _stringLiteralF3CCAA0E098D49C3B99A0B2A0160E80837D3871B, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 455));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_29 = L_28;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 456));
		NullCheck(L_29);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_29, ((int32_t)28), _stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 456));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_30 = L_29;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 457));
		NullCheck(L_30);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_30, ((int32_t)29), _stringLiteralBE5A164234C945013CE7F044C3EE99C37CD7930D, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 457));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_31 = L_30;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 458));
		NullCheck(L_31);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_31, ((int32_t)30), _stringLiteral6153E459D88880D6E7B15695C174145219BC00D6, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 458));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_32 = L_31;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 459));
		NullCheck(L_32);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_32, ((int32_t)31), _stringLiteral9882AEF2D2BD1F9CF654EC0A3B3784615102EEAC, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 459));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_33 = L_32;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 460));
		NullCheck(L_33);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_33, ((int32_t)32), _stringLiteralC4E24EBD6552E5F2938CC0AC13683CACD7E263C1, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 460));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_34 = L_33;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 461));
		NullCheck(L_34);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_34, ((int32_t)33), _stringLiteralFB76267F25C6D0234207561E43D8AD45B3D54548, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 461));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_35 = L_34;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 462));
		NullCheck(L_35);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_35, ((int32_t)34), _stringLiteral7308B3767954511438F1F2C46BAC46AB3D26F4ED, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 462));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_36 = L_35;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 463));
		NullCheck(L_36);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_36, ((int32_t)35), _stringLiteral0BACE17C01835A178E77734E2A90FD803F59C74D, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 463));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_37 = L_36;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 464));
		NullCheck(L_37);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_37, ((int32_t)36), _stringLiteralE2C2462B3A8712A2649D48418F13934A569870B8, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 464));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_38 = L_37;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 465));
		NullCheck(L_38);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_38, ((int32_t)37), _stringLiteralF462ADCD9DAFA13FAA0664BD8DEACC7C73C1AEEC, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 465));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_39 = L_38;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 466));
		NullCheck(L_39);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_39, ((int32_t)38), _stringLiteralD4A279749C3E15A7697098E8D94E6202014E030B, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 466));
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_40 = L_39;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 467));
		NullCheck(L_40);
		Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061(L_40, ((int32_t)39), _stringLiteral047F45200EBEF4D979C877B4E1EF2591FFF8BA4E, Dictionary_2_set_Item_m30CBAB9DFCB9E1C4946D812FA7817ABC5482B061_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 467));
		((MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_StaticFields*)il2cpp_codegen_static_fields_for(MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var))->____unityShaderLabNames_0 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&((MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_StaticFields*)il2cpp_codegen_static_fields_for(MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var))->____unityShaderLabNames_0), (void*)L_40);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value), (&___1_min), (&___2_max));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8407));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8408));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8409));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8410));
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8411));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8412));
		float L_3 = ___1_min;
		___0_value = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8413));
		goto IL_0019;
	}

IL_000e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8414));
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8415));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8416));
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8417));
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8418));
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8431));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8432));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8433));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8434));
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8435));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8436));
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8437));
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8438));
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8439));
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8440));
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8441));
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b), (&___2_t));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8442));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8443));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8444));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8445));
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8446));
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8446));
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8447));
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value), (&___1_min), (&___2_max));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8419));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8420));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8421));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8422));
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8423));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8424));
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8425));
		goto IL_0019;
	}

IL_000e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8426));
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8427));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8428));
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8429));
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8430));
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MToon10Properties_get_UnityShaderLabNames_m2BBC7CA6CAD66C45EC5769A076E8F8AB201C64FD_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Properties_get_UnityShaderLabNames_m2BBC7CA6CAD66C45EC5769A076E8F8AB201C64FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MToon10Properties_get_UnityShaderLabNames_m2BBC7CA6CAD66C45EC5769A076E8F8AB201C64FD_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 414));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 415));
	{
		// public static IReadOnlyDictionary<MToon10Prop, string> UnityShaderLabNames => _unityShaderLabNames;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsVRMShaders_VRM10_MToon10_Runtime + 416));
		il2cpp_codegen_runtime_class_init_inline(MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var);
		Dictionary_2_tF8DDC31509321E88664600D141A4EE7E918E57BB* L_0 = ((MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_StaticFields*)il2cpp_codegen_static_fields_for(MToon10Properties_tCEEEFF27D1EBF0DCFF067CC910F35AB3D1EAC7E6_il2cpp_TypeInfo_var))->____unityShaderLabNames_0;
		return L_0;
	}
}
