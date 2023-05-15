#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>,Spine.AtlasPage>
struct Dictionary_2_tF47E37D6EAEC4A90ACB9613098F0D271ADAB6C0B;
// System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Dictionary_2_tFAF540A29E31D3857906B54EB31B6EB7D8BF858F;
// System.Collections.Generic.Dictionary`2<Spine.AtlasRegion,System.Int32>
struct Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,System.Object>
struct Dictionary_2_t703573FCB9C9178FBB719FCBEC8B9ADF1AED3A24;
// System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,UnityEngine.Texture2D>
struct Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816;
// System.Collections.Generic.Dictionary`2<Spine.Skin/SkinKey,Spine.Skin/SkinEntry>
struct Dictionary_2_tE01DC6E7E7C4B50EADD6954477AC5E8D0B755E8A;
// Spine.Unity.DoubleBuffered`1<System.Object>
struct DoubleBuffered_1_tD59B3CD78522B7E6B2A8E8CE4BE77A8B95CF6942;
// Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshRendererBuffers/SmartMesh>
struct DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE;
// Spine.ExposedList`1<Spine.Animation>
struct ExposedList_1_tB85C18F6CA42A913025B77D04CB352D919551517;
// Spine.ExposedList`1<Spine.Attachment>
struct ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t734F3FFC62C3FB3580CB3758CC2C119B16BD1DDE;
// Spine.ExposedList`1<Spine.BoneData>
struct ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE;
// Spine.ExposedList`1<Spine.ConstraintData>
struct ExposedList_1_t1D6817E6CE2A8128ACEB047760F9C93D9B821826;
// Spine.ExposedList`1<Spine.EventData>
struct ExposedList_1_t28EA396FF523AC0F8E4E3D9FC8ABD97A1723B4FE;
// Spine.ExposedList`1<Spine.IUpdatable>
struct ExposedList_1_t9365BAAA69E843DC913050C5C098F8ECF16521EC;
// Spine.ExposedList`1<Spine.IkConstraint>
struct ExposedList_1_t701CF995239AEA9B1FACF4F4CD79DEC59EAAE82E;
// Spine.ExposedList`1<Spine.IkConstraintData>
struct ExposedList_1_t7EBF79A37EB76BB19A48F7D0173CCF43BFA924D0;
// Spine.ExposedList`1<UnityEngine.Material>
struct ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A;
// Spine.ExposedList`1<System.Object>
struct ExposedList_1_t90C5D64C7E11EBF0854CF0859FD55DF94D6ED6B7;
// Spine.ExposedList`1<Spine.PathConstraint>
struct ExposedList_1_t383E11F1454AA3CA3B6766E2B546B3D633736DCD;
// Spine.ExposedList`1<Spine.PathConstraintData>
struct ExposedList_1_t6B78F1C0212291932DB2D8E512B526ADAF32ACBA;
// Spine.ExposedList`1<System.Single>
struct ExposedList_1_tDD3820FCA0A1AA9D314E2E1FCE0A16BE3CE5E80A;
// Spine.ExposedList`1<Spine.Skin>
struct ExposedList_1_t6FF735095BAC811A2AD50E52AE368F9A5D48B59D;
// Spine.ExposedList`1<Spine.Slot>
struct ExposedList_1_t832DB618999898C4507FEDF55884721C3E514B2C;
// Spine.ExposedList`1<Spine.SlotData>
struct ExposedList_1_t91DB309B7AA43B52841EC0CF8EBADD1D9D73DCA3;
// Spine.ExposedList`1<Spine.SpringConstraint>
struct ExposedList_1_tAFC8E1611D6C64FF2C062D47E7CE2148C2CE618F;
// Spine.ExposedList`1<Spine.SpringConstraintData>
struct ExposedList_1_t30FEBB38F434767E049EA2839CB3F976E192DF77;
// Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>
struct ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7;
// Spine.ExposedList`1<Spine.Timeline>
struct ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF;
// Spine.ExposedList`1<Spine.TransformConstraint>
struct ExposedList_1_t1E90C754AE49BD952696404668135EEB57F3EB03;
// Spine.ExposedList`1<Spine.TransformConstraintData>
struct ExposedList_1_t9FCA33B64DBE9B22C1AFEDD65942E2E8ABD792AC;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>>
struct IEqualityComparer_1_tA97B86DEC46ECF70925079F97FA61B2F2DF394C6;
// System.Collections.Generic.IEqualityComparer`1<Spine.AtlasRegion>
struct IEqualityComparer_1_tF8A8CA264A948946A0B31BD96074366DC57C7B36;
// System.Collections.Generic.IEqualityComparer`1<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey>
struct IEqualityComparer_1_tCC4FC4F415454EC615BC55218E0294F323E5834E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>,Spine.AtlasPage>
struct KeyCollection_t1FD024B3CF481A6823C73888B9B5B5C4D60EF219;
// System.Collections.Generic.Dictionary`2/KeyCollection<Spine.AtlasRegion,System.Int32>
struct KeyCollection_t01208E351585C7D95EFB54CBDA38BB46FC5445BB;
// System.Collections.Generic.Dictionary`2/KeyCollection<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,UnityEngine.Texture2D>
struct KeyCollection_t46BDEFA90A33CF94B6B9461FFAF52B292BA7403E;
// System.Collections.Generic.List`1<Spine.AtlasRegion>
struct List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0;
// System.Collections.Generic.List`1<Spine.Attachment>
struct List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4;
// System.Collections.Generic.List`1<Spine.Skin/SkinEntry>
struct List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>,Spine.AtlasPage>
struct ValueCollection_tDBEDDB9301F407F24782D148310B359E1FE98532;
// System.Collections.Generic.Dictionary`2/ValueCollection<Spine.AtlasRegion,System.Int32>
struct ValueCollection_t3609D250DDE5F92F9273396067558C83AB36C9E7;
// System.Collections.Generic.Dictionary`2/ValueCollection<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,UnityEngine.Texture2D>
struct ValueCollection_tADEDDB40941ECD036A604E7F06AE9F56C3BC13F2;
// System.Collections.Generic.Dictionary`2/Entry<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>,Spine.AtlasPage>[]
struct EntryU5BU5D_t5F65E4A3974797681FDDDC5A85A0C4EB64C5501E;
// System.Collections.Generic.Dictionary`2/Entry<Spine.AtlasRegion,System.Int32>[]
struct EntryU5BU5D_t296AB519359CB6CB847233035B363A8074E866B3;
// System.Collections.Generic.Dictionary`2/Entry<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,UnityEngine.Texture2D>[]
struct EntryU5BU5D_t7FA08D9D8FD8F380325F9A123DC0ED71AC62B885;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>[]
struct List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// Spine.AtlasRegion[]
struct AtlasRegionU5BU5D_t0801B5D0EA2D5C01F8C7B0DE1B49EBC1DED2929C;
// Spine.Attachment[]
struct AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44;
// Spine.BoneData[]
struct BoneDataU5BU5D_tADACEBE8328638952B7718F3A0E834BBFF9E2EFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// Spine.Skin[]
struct SkinU5BU5D_t06F5FEDA51C35668471B943C1776CCA064BF1275;
// Spine.Slot[]
struct SlotU5BU5D_tCAD0CBE62BC9C1E9DE3167456039B5ABD5C02D38;
// Spine.SlotData[]
struct SlotDataU5BU5D_tB79EB968566AA52F1F04E2309870F288ECEB5669;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Spine.Unity.SubmeshInstruction[]
struct SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;
// Spine.Timeline[]
struct TimelineU5BU5D_t8B04D17CE2EACC9AC7F16E46E610622EF95882F8;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// Spine.Skin/SkinEntry[]
struct SkinEntryU5BU5D_t9B1C37E03A18055E30BDCA519343A43FF53C4486;
// Spine.Animation
struct Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// Spine.AtlasPage
struct AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7;
// Spine.AtlasRegion
struct AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0;
// Spine.Attachment
struct Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Spine.Unity.BlendModeMaterialsAsset
struct BlendModeMaterialsAsset_t236FD164717645876A06AF2BFFFBB6B5F2C2ADDF;
// Spine.Bone
struct Bone_tC5BB616A04722279E675558888991F720C090467;
// Spine.BoneData
struct BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77;
// Spine.CurveTimeline1
struct CurveTimeline1_t3313E1733621F4DEFE204982B4F0E8A00DB5D5A7;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// Spine.Unity.MeshRendererBuffers
struct MeshRendererBuffers_tB9308AD2A53E8B70963EF29DBF88716A6BBE567B;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Spine.RotateTimeline
struct RotateTimeline_t0B9A05CA52071B7C553456577B12D1023DD54FE2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Spine.Skeleton
struct Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3;
// Spine.SkeletonData
struct SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254;
// Spine.Unity.SkeletonDataModifierAsset
struct SkeletonDataModifierAsset_t278AC6B40287AED467A89D926168CE80025CA4A3;
// Spine.Unity.SkeletonRendererInstruction
struct SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163;
// Spine.Skin
struct Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481;
// Spine.Slot
struct Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0;
// Spine.SlotData
struct SlotData_t0301519741B248AFC95ADFF4C882677A25D70548;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Spine.Timeline
struct Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF;
// Spine.TransformConstraintTimeline
struct TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885;
// Spine.TranslateTimeline
struct TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852;
// Spine.TranslateXTimeline
struct TranslateXTimeline_t0B249911CB468BACF3C04002772032F852EDA711;
// Spine.TranslateYTimeline
struct TranslateYTimeline_tFB684A539CED348763AB5265FA7D3A750BDE5A3A;
// System.Type
struct Type_t;
// Spine.VertexAttachment
struct VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Spine.Unity.BlendModeMaterialsAsset/AtlasMaterialCache
struct AtlasMaterialCache_t7C7BD0D4CFED0D295486EB411B6ADA1E2D02D087;
// Spine.Unity.MeshRendererBuffers/SmartMesh
struct SmartMesh_tF3C34CB0726F6D0EE815F734E62B5B2761A41C0F;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AtlasMaterialCache_t7C7BD0D4CFED0D295486EB411B6ADA1E2D02D087_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF47E37D6EAEC4A90ACB9613098F0D271ADAB6C0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHasTextureRegion_t09747EC8E989DCE7EDEA8D4B5CCEBCC02FE056AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03C5634B8F65994CCACD97E4ECE267946A72A543;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10;
IL2CPP_EXTERN_C String_t* _stringLiteralC97FADBB19DF94D28E4601AE7B8198FDC83D934C;
IL2CPP_EXTERN_C String_t* _stringLiteralCF9B83FE34D51DAEDBE1ACFD6F998529AC476333;
IL2CPP_EXTERN_C String_t* _stringLiteralD3A83471C956A268FD1CAD03F99B66B7BBA10B97;
IL2CPP_EXTERN_C String_t* _stringLiteralE0200A3D62DBD4EEC29E302E91D4F42257A4A32D;
IL2CPP_EXTERN_C String_t* _stringLiteralF94AA613862F53AAD0F034DAF760AFDD9509B693;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m79C251DDDBE015E6DB85FE487F8748D4613BCC7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AtlasMaterialCache_GetAtlasPageWithMaterial_m0C4CA3B2166BB5C1FFE3805EDB42371D6CF3D92F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BlendModeMaterialsAsset_ApplyMaterials_m1255529EC294BBCFBA7768DE0FAB224701477447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE0CC5198FE11FA15516C58A432C1F61E43739097_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m7BDA40E7D7D71D7F04B6FEE9059593B9FC36E2EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mF0BFF6B1DCBBADDD4ED2878133F16229457638BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m23A6F33916B3337C3ABC33885D9AB26D899A562C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0B5FD755F4BD8F1CE0FF9F431B05716A95A43297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m743D85E17F5AA356B8F1B417104B2866BA904211_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA78816E36EAB57D6CB5D4795E9EB5DB36A57A231_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DoubleBuffered_1_GetNext_m021F8DF0224986ABE20915759168223703E0872F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DoubleBuffered_1__ctor_m91D4D03775EDB7AEAC31CE5D837A882823D88D62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1A391DDB217D33A00F83EF26F3F79B8DF839190D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m297E3F012818CCE473EB4E9DEE446BDA2F413C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7D8098C50EE0CF157C6B09912310A1FD9474F245_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCCB8B376031074252021919A593F714962047141_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m00711B095CC5BE52F04F5EB7283C8795DB012C35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBC7AB4D5664AD175631397B9694FC553E0C76FAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE69E8D93F4DDCBBA32A98ECDDC6DA9A3E074C91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFFBA4AA4ACE28C3E2410D74A82FBA3DE79085D6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6C0B2624258072CB19F551437D538D2BB9A088D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6F5B5815FEEF6CABE89E550B1C3501C2810FBCB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9A37B19BA42D6E19192E95945BBAD25374DB948F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCF3C7D2E2BA4F0177C908FDCFE7955303CBD5BED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Clear_m9E58AA2DEFF9D76D6943AEAF5ED871131591B686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Clear_mA7EA6D93B5A7EAE2FBF026DE784A5C18E9FB12B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Clear_mDB22BF4336D3B22DB00092FBF831F0890A30E64D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_CopyTo_m4121C10AF81B9CF92CB26C31A3FB4FB895232C63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_CopyTo_mB48811CB67BD864E8BC21D14189528A4094A0EC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_CopyTo_mD52F6AA97DCACA06F00BE3704031938ACA66C48A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_EnsureCapacity_m6757D668EB9435835549CBEEC28D7CD0EDA6B648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_EnsureCapacity_mC8E2441A52BAF350EC81F2CBADD1ED0801444817_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_GetEnumerator_m37DC439D0C295B68E5C616F1C1E13547915EF426_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_GetEnumerator_mAAC0E50314A8728B642DCD37F7E8FE623D4164F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Resize_m7B7CB6A1AD1CDAEF2CF786219459BA9EDBF763BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Resize_mF793DB207DAEBCBD5A9E8D6AAB3BCCFA7E90C2B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_ToArray_m235F1CEA733C0A696AB8F0FC69EE50E4BE5EED46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1__ctor_m2A26BACD6CCA3FB6ED717FD68A155DCF8419F4E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1__ctor_m6D8241E2A7EE8FD6FA287006ACE295088C176442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1__ctor_mC55FFE62238A86DA9DB8FA1DACD4CA15FD898D9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_get_Capacity_m5C66AC41CCC1342C0CA7D4C7F2BC7AF6674081A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_get_Capacity_m82E7BCDEC69EC5B67946C27CFFA633BB242C77B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m0800DDBDA1464DDB4CAC78267B1573D39F192CC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mADFF237C1F7E1FB019D2B99FC14B85246AAB208C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mBFD86AB2F85FB10B7CBA3FABFCD5AB785B271EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m68D0E2F78D7A7BFC737BE72E4088B86A85F55F6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7DD716A4A1F58B4B28F3294F2988CA93A3400243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2339E1052EFC4235FB03A7F61B9DE0A8BE4494A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m725DC1F120E8A4D3A152C7084FA3377605C54112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC01FB12C8CED6F48D54CD71778F5FF3FF5860BDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD3639440D8DA82147DC9629DE83F253326590E28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeletonExtensions_GetLocalVertices_m76C5769DC0EA4C7BC19F646FA9173A530CE88C8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88;
struct AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44;
struct BoneDataU5BU5D_tADACEBE8328638952B7718F3A0E834BBFF9E2EFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct SlotU5BU5D_tCAD0CBE62BC9C1E9DE3167456039B5ABD5C02D38;
struct SlotDataU5BU5D_tB79EB968566AA52F1F04E2309870F288ECEB5669;
struct SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct SkinEntryU5BU5D_t9B1C37E03A18055E30BDCA519343A43FF53C4486;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>,Spine.AtlasPage>
struct Dictionary_2_tF47E37D6EAEC4A90ACB9613098F0D271ADAB6C0B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t5F65E4A3974797681FDDDC5A85A0C4EB64C5501E* ____entries_1;
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
	KeyCollection_t1FD024B3CF481A6823C73888B9B5B5C4D60EF219* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tDBEDDB9301F407F24782D148310B359E1FE98532* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Spine.AtlasRegion,System.Int32>
struct Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t296AB519359CB6CB847233035B363A8074E866B3* ____entries_1;
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
	KeyCollection_t01208E351585C7D95EFB54CBDA38BB46FC5445BB* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t3609D250DDE5F92F9273396067558C83AB36C9E7* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,UnityEngine.Texture2D>
struct Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7FA08D9D8FD8F380325F9A123DC0ED71AC62B885* ____entries_1;
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
	KeyCollection_t46BDEFA90A33CF94B6B9461FFAF52B292BA7403E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tADEDDB40941ECD036A604E7F06AE9F56C3BC13F2* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshRendererBuffers/SmartMesh>
struct DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE  : public RuntimeObject
{
	// T Spine.Unity.DoubleBuffered`1::a
	SmartMesh_tF3C34CB0726F6D0EE815F734E62B5B2761A41C0F* ___a_0;
	// T Spine.Unity.DoubleBuffered`1::b
	SmartMesh_tF3C34CB0726F6D0EE815F734E62B5B2761A41C0F* ___b_1;
	// System.Boolean Spine.Unity.DoubleBuffered`1::usingA
	bool ___usingA_2;
};

// Spine.ExposedList`1<Spine.Attachment>
struct ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715  : public RuntimeObject
{
	// T[] Spine.ExposedList`1::Items
	AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;
};

struct ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715_StaticFields
{
	// T[] Spine.ExposedList`1::EmptyArray
	AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44* ___EmptyArray_3;
};

// Spine.ExposedList`1<Spine.BoneData>
struct ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE  : public RuntimeObject
{
	// T[] Spine.ExposedList`1::Items
	BoneDataU5BU5D_tADACEBE8328638952B7718F3A0E834BBFF9E2EFB* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;
};

struct ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE_StaticFields
{
	// T[] Spine.ExposedList`1::EmptyArray
	BoneDataU5BU5D_tADACEBE8328638952B7718F3A0E834BBFF9E2EFB* ___EmptyArray_3;
};

// Spine.ExposedList`1<UnityEngine.Material>
struct ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A  : public RuntimeObject
{
	// T[] Spine.ExposedList`1::Items
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;
};

struct ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A_StaticFields
{
	// T[] Spine.ExposedList`1::EmptyArray
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___EmptyArray_3;
};

// Spine.ExposedList`1<System.Single>
struct ExposedList_1_tDD3820FCA0A1AA9D314E2E1FCE0A16BE3CE5E80A  : public RuntimeObject
{
	// T[] Spine.ExposedList`1::Items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;
};

struct ExposedList_1_tDD3820FCA0A1AA9D314E2E1FCE0A16BE3CE5E80A_StaticFields
{
	// T[] Spine.ExposedList`1::EmptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___EmptyArray_3;
};

// Spine.ExposedList`1<Spine.Skin>
struct ExposedList_1_t6FF735095BAC811A2AD50E52AE368F9A5D48B59D  : public RuntimeObject
{
	// T[] Spine.ExposedList`1::Items
	SkinU5BU5D_t06F5FEDA51C35668471B943C1776CCA064BF1275* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;
};

struct ExposedList_1_t6FF735095BAC811A2AD50E52AE368F9A5D48B59D_StaticFields
{
	// T[] Spine.ExposedList`1::EmptyArray
	SkinU5BU5D_t06F5FEDA51C35668471B943C1776CCA064BF1275* ___EmptyArray_3;
};

// Spine.ExposedList`1<Spine.Slot>
struct ExposedList_1_t832DB618999898C4507FEDF55884721C3E514B2C  : public RuntimeObject
{
	// T[] Spine.ExposedList`1::Items
	SlotU5BU5D_tCAD0CBE62BC9C1E9DE3167456039B5ABD5C02D38* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;
};

struct ExposedList_1_t832DB618999898C4507FEDF55884721C3E514B2C_StaticFields
{
	// T[] Spine.ExposedList`1::EmptyArray
	SlotU5BU5D_tCAD0CBE62BC9C1E9DE3167456039B5ABD5C02D38* ___EmptyArray_3;
};

// Spine.ExposedList`1<Spine.SlotData>
struct ExposedList_1_t91DB309B7AA43B52841EC0CF8EBADD1D9D73DCA3  : public RuntimeObject
{
	// T[] Spine.ExposedList`1::Items
	SlotDataU5BU5D_tB79EB968566AA52F1F04E2309870F288ECEB5669* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;
};

struct ExposedList_1_t91DB309B7AA43B52841EC0CF8EBADD1D9D73DCA3_StaticFields
{
	// T[] Spine.ExposedList`1::EmptyArray
	SlotDataU5BU5D_tB79EB968566AA52F1F04E2309870F288ECEB5669* ___EmptyArray_3;
};

// Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>
struct ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7  : public RuntimeObject
{
	// T[] Spine.ExposedList`1::Items
	SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;
};

struct ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7_StaticFields
{
	// T[] Spine.ExposedList`1::EmptyArray
	SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* ___EmptyArray_3;
};

// Spine.ExposedList`1<Spine.Timeline>
struct ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF  : public RuntimeObject
{
	// T[] Spine.ExposedList`1::Items
	TimelineU5BU5D_t8B04D17CE2EACC9AC7F16E46E610622EF95882F8* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;
};

struct ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF_StaticFields
{
	// T[] Spine.ExposedList`1::EmptyArray
	TimelineU5BU5D_t8B04D17CE2EACC9AC7F16E46E610622EF95882F8* ___EmptyArray_3;
};

// System.Collections.Generic.List`1<Spine.AtlasRegion>
struct List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AtlasRegionU5BU5D_t0801B5D0EA2D5C01F8C7B0DE1B49EBC1DED2929C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AtlasRegionU5BU5D_t0801B5D0EA2D5C01F8C7B0DE1B49EBC1DED2929C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Spine.Attachment>
struct List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44* ___s_emptyArray_5;
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

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Spine.Skin/SkinEntry>
struct List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SkinEntryU5BU5D_t9B1C37E03A18055E30BDCA519343A43FF53C4486* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SkinEntryU5BU5D_t9B1C37E03A18055E30BDCA519343A43FF53C4486* ___s_emptyArray_5;
};

// Spine.Animation
struct Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8  : public RuntimeObject
{
	// System.String Spine.Animation::name
	String_t* ___name_0;
	// Spine.ExposedList`1<Spine.Timeline> Spine.Animation::timelines
	ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* ___timelines_1;
	// System.Collections.Generic.HashSet`1<System.String> Spine.Animation::timelineIds
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___timelineIds_2;
	// System.Single Spine.Animation::duration
	float ___duration_3;
};
struct Il2CppArrayBounds;

// Spine.AtlasPage
struct AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7  : public RuntimeObject
{
	// System.String Spine.AtlasPage::name
	String_t* ___name_0;
	// System.Int32 Spine.AtlasPage::width
	int32_t ___width_1;
	// System.Int32 Spine.AtlasPage::height
	int32_t ___height_2;
	// Spine.Format Spine.AtlasPage::format
	int32_t ___format_3;
	// Spine.TextureFilter Spine.AtlasPage::minFilter
	int32_t ___minFilter_4;
	// Spine.TextureFilter Spine.AtlasPage::magFilter
	int32_t ___magFilter_5;
	// Spine.TextureWrap Spine.AtlasPage::uWrap
	int32_t ___uWrap_6;
	// Spine.TextureWrap Spine.AtlasPage::vWrap
	int32_t ___vWrap_7;
	// System.Boolean Spine.AtlasPage::pma
	bool ___pma_8;
	// System.Object Spine.AtlasPage::rendererObject
	RuntimeObject* ___rendererObject_9;
};

// Spine.Unity.AttachmentTools.AtlasUtilities
struct AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461  : public RuntimeObject
{
};

struct AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields
{
	// System.Collections.Generic.Dictionary`2<Spine.AtlasRegion,System.Int32> Spine.Unity.AttachmentTools.AtlasUtilities::existingRegions
	Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388* ___existingRegions_0;
	// System.Collections.Generic.List`1<System.Int32> Spine.Unity.AttachmentTools.AtlasUtilities::regionIndices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___regionIndices_1;
	// System.Collections.Generic.List`1<Spine.AtlasRegion> Spine.Unity.AttachmentTools.AtlasUtilities::originalRegions
	List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* ___originalRegions_2;
	// System.Collections.Generic.List`1<Spine.AtlasRegion> Spine.Unity.AttachmentTools.AtlasUtilities::repackedRegions
	List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* ___repackedRegions_3;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D>[] Spine.Unity.AttachmentTools.AtlasUtilities::texturesToPackAtParam
	List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88* ___texturesToPackAtParam_4;
	// System.Collections.Generic.List`1<Spine.Attachment> Spine.Unity.AttachmentTools.AtlasUtilities::inoutAttachments
	List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* ___inoutAttachments_5;
	// System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,UnityEngine.Texture2D> Spine.Unity.AttachmentTools.AtlasUtilities::CachedRegionTextures
	Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816* ___CachedRegionTextures_6;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> Spine.Unity.AttachmentTools.AtlasUtilities::CachedRegionTexturesList
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___CachedRegionTexturesList_7;
};

// Spine.Attachment
struct Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75  : public RuntimeObject
{
	// System.String Spine.Attachment::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

// Spine.Bone
struct Bone_tC5BB616A04722279E675558888991F720C090467  : public RuntimeObject
{
	// Spine.BoneData Spine.Bone::data
	BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* ___data_1;
	// Spine.Skeleton Spine.Bone::skeleton
	Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* ___skeleton_2;
	// Spine.Bone Spine.Bone::parent
	Bone_tC5BB616A04722279E675558888991F720C090467* ___parent_3;
	// Spine.ExposedList`1<Spine.Bone> Spine.Bone::children
	ExposedList_1_t734F3FFC62C3FB3580CB3758CC2C119B16BD1DDE* ___children_4;
	// System.Single Spine.Bone::x
	float ___x_5;
	// System.Single Spine.Bone::y
	float ___y_6;
	// System.Single Spine.Bone::rotation
	float ___rotation_7;
	// System.Single Spine.Bone::scaleX
	float ___scaleX_8;
	// System.Single Spine.Bone::scaleY
	float ___scaleY_9;
	// System.Single Spine.Bone::shearX
	float ___shearX_10;
	// System.Single Spine.Bone::shearY
	float ___shearY_11;
	// System.Single Spine.Bone::ax
	float ___ax_12;
	// System.Single Spine.Bone::ay
	float ___ay_13;
	// System.Single Spine.Bone::arotation
	float ___arotation_14;
	// System.Single Spine.Bone::ascaleX
	float ___ascaleX_15;
	// System.Single Spine.Bone::ascaleY
	float ___ascaleY_16;
	// System.Single Spine.Bone::ashearX
	float ___ashearX_17;
	// System.Single Spine.Bone::ashearY
	float ___ashearY_18;
	// System.Single Spine.Bone::a
	float ___a_19;
	// System.Single Spine.Bone::b
	float ___b_20;
	// System.Single Spine.Bone::worldX
	float ___worldX_21;
	// System.Single Spine.Bone::c
	float ___c_22;
	// System.Single Spine.Bone::d
	float ___d_23;
	// System.Single Spine.Bone::worldY
	float ___worldY_24;
	// System.Boolean Spine.Bone::sorted
	bool ___sorted_25;
	// System.Boolean Spine.Bone::active
	bool ___active_26;
};

struct Bone_tC5BB616A04722279E675558888991F720C090467_StaticFields
{
	// System.Boolean Spine.Bone::yDown
	bool ___yDown_0;
};

// Spine.BoneData
struct BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77  : public RuntimeObject
{
	// System.Int32 Spine.BoneData::index
	int32_t ___index_0;
	// System.String Spine.BoneData::name
	String_t* ___name_1;
	// Spine.BoneData Spine.BoneData::parent
	BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* ___parent_2;
	// System.Single Spine.BoneData::length
	float ___length_3;
	// System.Single Spine.BoneData::x
	float ___x_4;
	// System.Single Spine.BoneData::y
	float ___y_5;
	// System.Single Spine.BoneData::rotation
	float ___rotation_6;
	// System.Single Spine.BoneData::scaleX
	float ___scaleX_7;
	// System.Single Spine.BoneData::scaleY
	float ___scaleY_8;
	// System.Single Spine.BoneData::shearX
	float ___shearX_9;
	// System.Single Spine.BoneData::shearY
	float ___shearY_10;
	// Spine.TransformMode Spine.BoneData::transformMode
	int32_t ___transformMode_11;
	// System.Boolean Spine.BoneData::skinRequired
	bool ___skinRequired_12;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Spine.Unity.MeshRendererBuffers
struct MeshRendererBuffers_tB9308AD2A53E8B70963EF29DBF88716A6BBE567B  : public RuntimeObject
{
	// Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshRendererBuffers/SmartMesh> Spine.Unity.MeshRendererBuffers::doubleBufferedMesh
	DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE* ___doubleBufferedMesh_0;
	// Spine.ExposedList`1<UnityEngine.Material> Spine.Unity.MeshRendererBuffers::submeshMaterials
	ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A* ___submeshMaterials_1;
	// UnityEngine.Material[] Spine.Unity.MeshRendererBuffers::sharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___sharedMaterials_2;
};

// Spine.Skeleton
struct Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3  : public RuntimeObject
{
	// Spine.SkeletonData Spine.Skeleton::data
	SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* ___data_0;
	// Spine.ExposedList`1<Spine.Bone> Spine.Skeleton::bones
	ExposedList_1_t734F3FFC62C3FB3580CB3758CC2C119B16BD1DDE* ___bones_1;
	// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::slots
	ExposedList_1_t832DB618999898C4507FEDF55884721C3E514B2C* ___slots_2;
	// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::drawOrder
	ExposedList_1_t832DB618999898C4507FEDF55884721C3E514B2C* ___drawOrder_3;
	// Spine.ExposedList`1<Spine.IkConstraint> Spine.Skeleton::ikConstraints
	ExposedList_1_t701CF995239AEA9B1FACF4F4CD79DEC59EAAE82E* ___ikConstraints_4;
	// Spine.ExposedList`1<Spine.TransformConstraint> Spine.Skeleton::transformConstraints
	ExposedList_1_t1E90C754AE49BD952696404668135EEB57F3EB03* ___transformConstraints_5;
	// Spine.ExposedList`1<Spine.PathConstraint> Spine.Skeleton::pathConstraints
	ExposedList_1_t383E11F1454AA3CA3B6766E2B546B3D633736DCD* ___pathConstraints_6;
	// Spine.ExposedList`1<Spine.SpringConstraint> Spine.Skeleton::springConstraints
	ExposedList_1_tAFC8E1611D6C64FF2C062D47E7CE2148C2CE618F* ___springConstraints_7;
	// Spine.ExposedList`1<Spine.IUpdatable> Spine.Skeleton::updateCache
	ExposedList_1_t9365BAAA69E843DC913050C5C098F8ECF16521EC* ___updateCache_8;
	// Spine.Skin Spine.Skeleton::skin
	Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* ___skin_9;
	// System.Single Spine.Skeleton::r
	float ___r_10;
	// System.Single Spine.Skeleton::g
	float ___g_11;
	// System.Single Spine.Skeleton::b
	float ___b_12;
	// System.Single Spine.Skeleton::a
	float ___a_13;
	// System.Single Spine.Skeleton::scaleX
	float ___scaleX_14;
	// System.Single Spine.Skeleton::scaleY
	float ___scaleY_15;
	// System.Single Spine.Skeleton::x
	float ___x_16;
	// System.Single Spine.Skeleton::y
	float ___y_17;
};

// Spine.SkeletonData
struct SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254  : public RuntimeObject
{
	// System.String Spine.SkeletonData::name
	String_t* ___name_0;
	// Spine.ExposedList`1<Spine.BoneData> Spine.SkeletonData::bones
	ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* ___bones_1;
	// Spine.ExposedList`1<Spine.SlotData> Spine.SkeletonData::slots
	ExposedList_1_t91DB309B7AA43B52841EC0CF8EBADD1D9D73DCA3* ___slots_2;
	// Spine.ExposedList`1<Spine.Skin> Spine.SkeletonData::skins
	ExposedList_1_t6FF735095BAC811A2AD50E52AE368F9A5D48B59D* ___skins_3;
	// Spine.Skin Spine.SkeletonData::defaultSkin
	Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* ___defaultSkin_4;
	// Spine.ExposedList`1<Spine.EventData> Spine.SkeletonData::events
	ExposedList_1_t28EA396FF523AC0F8E4E3D9FC8ABD97A1723B4FE* ___events_5;
	// Spine.ExposedList`1<Spine.Animation> Spine.SkeletonData::animations
	ExposedList_1_tB85C18F6CA42A913025B77D04CB352D919551517* ___animations_6;
	// Spine.ExposedList`1<Spine.IkConstraintData> Spine.SkeletonData::ikConstraints
	ExposedList_1_t7EBF79A37EB76BB19A48F7D0173CCF43BFA924D0* ___ikConstraints_7;
	// Spine.ExposedList`1<Spine.TransformConstraintData> Spine.SkeletonData::transformConstraints
	ExposedList_1_t9FCA33B64DBE9B22C1AFEDD65942E2E8ABD792AC* ___transformConstraints_8;
	// Spine.ExposedList`1<Spine.PathConstraintData> Spine.SkeletonData::pathConstraints
	ExposedList_1_t6B78F1C0212291932DB2D8E512B526ADAF32ACBA* ___pathConstraints_9;
	// Spine.ExposedList`1<Spine.SpringConstraintData> Spine.SkeletonData::springConstraints
	ExposedList_1_t30FEBB38F434767E049EA2839CB3F976E192DF77* ___springConstraints_10;
	// System.Single Spine.SkeletonData::x
	float ___x_11;
	// System.Single Spine.SkeletonData::y
	float ___y_12;
	// System.Single Spine.SkeletonData::width
	float ___width_13;
	// System.Single Spine.SkeletonData::height
	float ___height_14;
	// System.String Spine.SkeletonData::version
	String_t* ___version_15;
	// System.String Spine.SkeletonData::hash
	String_t* ___hash_16;
	// System.Single Spine.SkeletonData::fps
	float ___fps_17;
	// System.String Spine.SkeletonData::imagesPath
	String_t* ___imagesPath_18;
	// System.String Spine.SkeletonData::audioPath
	String_t* ___audioPath_19;
};

// Spine.Unity.SkeletonExtensions
struct SkeletonExtensions_tB800A0B6643B09713DC202CAD1FFFE33CE4E4024  : public RuntimeObject
{
};

// Spine.Unity.SkeletonRendererInstruction
struct SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163  : public RuntimeObject
{
	// Spine.ExposedList`1<Spine.Unity.SubmeshInstruction> Spine.Unity.SkeletonRendererInstruction::submeshInstructions
	ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* ___submeshInstructions_0;
	// System.Boolean Spine.Unity.SkeletonRendererInstruction::immutableTriangles
	bool ___immutableTriangles_1;
	// System.Boolean Spine.Unity.SkeletonRendererInstruction::hasActiveClipping
	bool ___hasActiveClipping_2;
	// System.Int32 Spine.Unity.SkeletonRendererInstruction::rawVertexCount
	int32_t ___rawVertexCount_3;
	// Spine.ExposedList`1<Spine.Attachment> Spine.Unity.SkeletonRendererInstruction::attachments
	ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* ___attachments_4;
};

// Spine.Skin
struct Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481  : public RuntimeObject
{
	// System.String Spine.Skin::name
	String_t* ___name_0;
	// System.Collections.Generic.Dictionary`2<Spine.Skin/SkinKey,Spine.Skin/SkinEntry> Spine.Skin::attachments
	Dictionary_2_tE01DC6E7E7C4B50EADD6954477AC5E8D0B755E8A* ___attachments_1;
	// Spine.ExposedList`1<Spine.BoneData> Spine.Skin::bones
	ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* ___bones_2;
	// Spine.ExposedList`1<Spine.ConstraintData> Spine.Skin::constraints
	ExposedList_1_t1D6817E6CE2A8128ACEB047760F9C93D9B821826* ___constraints_3;
};

// Spine.Slot
struct Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0  : public RuntimeObject
{
	// Spine.SlotData Spine.Slot::data
	SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* ___data_0;
	// Spine.Bone Spine.Slot::bone
	Bone_tC5BB616A04722279E675558888991F720C090467* ___bone_1;
	// System.Single Spine.Slot::r
	float ___r_2;
	// System.Single Spine.Slot::g
	float ___g_3;
	// System.Single Spine.Slot::b
	float ___b_4;
	// System.Single Spine.Slot::a
	float ___a_5;
	// System.Single Spine.Slot::r2
	float ___r2_6;
	// System.Single Spine.Slot::g2
	float ___g2_7;
	// System.Single Spine.Slot::b2
	float ___b2_8;
	// System.Boolean Spine.Slot::hasSecondColor
	bool ___hasSecondColor_9;
	// Spine.Attachment Spine.Slot::attachment
	Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___attachment_10;
	// System.Int32 Spine.Slot::sequenceIndex
	int32_t ___sequenceIndex_11;
	// Spine.ExposedList`1<System.Single> Spine.Slot::deform
	ExposedList_1_tDD3820FCA0A1AA9D314E2E1FCE0A16BE3CE5E80A* ___deform_12;
	// System.Int32 Spine.Slot::attachmentState
	int32_t ___attachmentState_13;
};

// Spine.SlotData
struct SlotData_t0301519741B248AFC95ADFF4C882677A25D70548  : public RuntimeObject
{
	// System.Int32 Spine.SlotData::index
	int32_t ___index_0;
	// System.String Spine.SlotData::name
	String_t* ___name_1;
	// Spine.BoneData Spine.SlotData::boneData
	BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* ___boneData_2;
	// System.Single Spine.SlotData::r
	float ___r_3;
	// System.Single Spine.SlotData::g
	float ___g_4;
	// System.Single Spine.SlotData::b
	float ___b_5;
	// System.Single Spine.SlotData::a
	float ___a_6;
	// System.Single Spine.SlotData::r2
	float ___r2_7;
	// System.Single Spine.SlotData::g2
	float ___g2_8;
	// System.Single Spine.SlotData::b2
	float ___b2_9;
	// System.Boolean Spine.SlotData::hasSecondColor
	bool ___hasSecondColor_10;
	// System.String Spine.SlotData::attachmentName
	String_t* ___attachmentName_11;
	// Spine.BlendMode Spine.SlotData::blendMode
	int32_t ___blendMode_12;
};

// Spine.Unity.SpineMesh
struct SpineMesh_tFDF3AB74431BBC5009C9D0F1B3151D3680D77E60  : public RuntimeObject
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

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Spine.TextureRegion
struct TextureRegion_t3AEDB0F0A86A1729EF73677E1D9415ABA2BEC236  : public RuntimeObject
{
	// System.Int32 Spine.TextureRegion::width
	int32_t ___width_0;
	// System.Int32 Spine.TextureRegion::height
	int32_t ___height_1;
	// System.Single Spine.TextureRegion::u
	float ___u_2;
	// System.Single Spine.TextureRegion::v
	float ___v_3;
	// System.Single Spine.TextureRegion::u2
	float ___u2_4;
	// System.Single Spine.TextureRegion::v2
	float ___v2_5;
};

// Spine.Timeline
struct Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF  : public RuntimeObject
{
	// System.String[] Spine.Timeline::propertyIds
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertyIds_0;
	// System.Single[] Spine.Timeline::frames
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___frames_1;
};

// Spine.Unity.AnimationTools.TimelineExtensions
struct TimelineExtensions_t7592B34010DAA8AD97542034D1941C1D61443063  : public RuntimeObject
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

// Spine.Unity.BlendModeMaterialsAsset/AtlasMaterialCache
struct AtlasMaterialCache_t7C7BD0D4CFED0D295486EB411B6ADA1E2D02D087  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>,Spine.AtlasPage> Spine.Unity.BlendModeMaterialsAsset/AtlasMaterialCache::cache
	Dictionary_2_tF47E37D6EAEC4A90ACB9613098F0D271ADAB6C0B* ___cache_0;
};

// Spine.Unity.MeshRendererBuffers/SmartMesh
struct SmartMesh_tF3C34CB0726F6D0EE815F734E62B5B2761A41C0F  : public RuntimeObject
{
	// UnityEngine.Mesh Spine.Unity.MeshRendererBuffers/SmartMesh::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_0;
	// Spine.Unity.SkeletonRendererInstruction Spine.Unity.MeshRendererBuffers/SmartMesh::instructionUsed
	SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* ___instructionUsed_1;
};

// Spine.ExposedList`1/Enumerator<System.Object>
struct Enumerator_t739C86133C966CD494DA3E584097A6CF08A5F453 
{
	// Spine.ExposedList`1<T> Spine.ExposedList`1/Enumerator::l
	ExposedList_1_t90C5D64C7E11EBF0854CF0859FD55DF94D6ED6B7* ___l_0;
	// System.Int32 Spine.ExposedList`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 Spine.ExposedList`1/Enumerator::ver
	int32_t ___ver_2;
	// T Spine.ExposedList`1/Enumerator::current
	RuntimeObject* ___current_3;
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

// Spine.ExposedList`1/Enumerator<Spine.Skin>
struct Enumerator_t8638B5370C02395750703CE470E1F97E5E12EC80 
{
	// Spine.ExposedList`1<T> Spine.ExposedList`1/Enumerator::l
	ExposedList_1_t6FF735095BAC811A2AD50E52AE368F9A5D48B59D* ___l_0;
	// System.Int32 Spine.ExposedList`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 Spine.ExposedList`1/Enumerator::ver
	int32_t ___ver_2;
	// T Spine.ExposedList`1/Enumerator::current
	Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* ___current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Texture2D>
struct Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____current_3;
};

// Spine.ExposedList`1/Enumerator<Spine.Timeline>
struct Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7 
{
	// Spine.ExposedList`1<T> Spine.ExposedList`1/Enumerator::l
	ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* ___l_0;
	// System.Int32 Spine.ExposedList`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 Spine.ExposedList`1/Enumerator::ver
	int32_t ___ver_2;
	// T Spine.ExposedList`1/Enumerator::current
	Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* ___current_3;
};

// System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>
struct KeyValuePair_2_t9BED0DE0EF6762C05B91AC6F48651328A35D90A3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// Spine.AtlasRegion
struct AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0  : public TextureRegion_t3AEDB0F0A86A1729EF73677E1D9415ABA2BEC236
{
	// Spine.AtlasPage Spine.AtlasRegion::page
	AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* ___page_6;
	// System.String Spine.AtlasRegion::name
	String_t* ___name_7;
	// System.Int32 Spine.AtlasRegion::x
	int32_t ___x_8;
	// System.Int32 Spine.AtlasRegion::y
	int32_t ___y_9;
	// System.Single Spine.AtlasRegion::offsetX
	float ___offsetX_10;
	// System.Single Spine.AtlasRegion::offsetY
	float ___offsetY_11;
	// System.Int32 Spine.AtlasRegion::originalWidth
	int32_t ___originalWidth_12;
	// System.Int32 Spine.AtlasRegion::originalHeight
	int32_t ___originalHeight_13;
	// System.Int32 Spine.AtlasRegion::degrees
	int32_t ___degrees_14;
	// System.Boolean Spine.AtlasRegion::rotate
	bool ___rotate_15;
	// System.Int32 Spine.AtlasRegion::index
	int32_t ___index_16;
	// System.String[] Spine.AtlasRegion::names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names_17;
	// System.Int32[][] Spine.AtlasRegion::values
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___values_18;
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

// Spine.CurveTimeline
struct CurveTimeline_tF590CEE203806A2BA7E2B603C6DB6421B231BF34  : public Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF
{
	// System.Single[] Spine.CurveTimeline::curves
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___curves_2;
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

// Spine.Unity.SubmeshInstruction
struct SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF 
{
	// Spine.Skeleton Spine.Unity.SubmeshInstruction::skeleton
	Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* ___skeleton_0;
	// System.Int32 Spine.Unity.SubmeshInstruction::startSlot
	int32_t ___startSlot_1;
	// System.Int32 Spine.Unity.SubmeshInstruction::endSlot
	int32_t ___endSlot_2;
	// UnityEngine.Material Spine.Unity.SubmeshInstruction::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean Spine.Unity.SubmeshInstruction::forceSeparate
	bool ___forceSeparate_4;
	// System.Int32 Spine.Unity.SubmeshInstruction::preActiveClippingSlotSource
	int32_t ___preActiveClippingSlotSource_5;
	// System.Int32 Spine.Unity.SubmeshInstruction::rawTriangleCount
	int32_t ___rawTriangleCount_6;
	// System.Int32 Spine.Unity.SubmeshInstruction::rawVertexCount
	int32_t ___rawVertexCount_7;
	// System.Int32 Spine.Unity.SubmeshInstruction::rawFirstVertexIndex
	int32_t ___rawFirstVertexIndex_8;
	// System.Boolean Spine.Unity.SubmeshInstruction::hasClipping
	bool ___hasClipping_9;
	// System.Boolean Spine.Unity.SubmeshInstruction::hasPMAAdditiveSlot
	bool ___hasPMAAdditiveSlot_10;
};
// Native definition for P/Invoke marshalling of Spine.Unity.SubmeshInstruction
struct SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF_marshaled_pinvoke
{
	Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* ___skeleton_0;
	int32_t ___startSlot_1;
	int32_t ___endSlot_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___forceSeparate_4;
	int32_t ___preActiveClippingSlotSource_5;
	int32_t ___rawTriangleCount_6;
	int32_t ___rawVertexCount_7;
	int32_t ___rawFirstVertexIndex_8;
	int32_t ___hasClipping_9;
	int32_t ___hasPMAAdditiveSlot_10;
};
// Native definition for COM marshalling of Spine.Unity.SubmeshInstruction
struct SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF_marshaled_com
{
	Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* ___skeleton_0;
	int32_t ___startSlot_1;
	int32_t ___endSlot_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___forceSeparate_4;
	int32_t ___preActiveClippingSlotSource_5;
	int32_t ___rawTriangleCount_6;
	int32_t ___rawVertexCount_7;
	int32_t ___rawFirstVertexIndex_8;
	int32_t ___hasClipping_9;
	int32_t ___hasPMAAdditiveSlot_10;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

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

// Spine.VertexAttachment
struct VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27  : public Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75
{
	// System.Int32 Spine.VertexAttachment::id
	int32_t ___id_3;
	// Spine.VertexAttachment Spine.VertexAttachment::timelineAttachment
	VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* ___timelineAttachment_4;
	// System.Int32[] Spine.VertexAttachment::bones
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bones_5;
	// System.Single[] Spine.VertexAttachment::vertices
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___vertices_6;
	// System.Int32 Spine.VertexAttachment::worldVerticesLength
	int32_t ___worldVerticesLength_7;
};

struct VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27_StaticFields
{
	// System.Int32 Spine.VertexAttachment::nextID
	int32_t ___nextID_1;
	// System.Object Spine.VertexAttachment::nextIdLock
	RuntimeObject* ___nextIdLock_2;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t7DFBA915BF3CCBD700ED46D913E2C95A85864ED2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t7DFBA915BF3CCBD700ED46D913E2C95A85864ED2__padding[24];
	};
};

// Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
struct IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A 
{
	// System.Int32 Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey::i
	int32_t ___i_0;
	// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey::region
	AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___region_1;
};
// Native definition for P/Invoke marshalling of Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
struct IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshaled_pinvoke
{
	int32_t ___i_0;
	AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___region_1;
};
// Native definition for COM marshalling of Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
struct IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshaled_com
{
	int32_t ___i_0;
	AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___region_1;
};

// Spine.Unity.MeshGenerator/Settings
struct Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8 
{
	// System.Boolean Spine.Unity.MeshGenerator/Settings::useClipping
	bool ___useClipping_0;
	// System.Single Spine.Unity.MeshGenerator/Settings::zSpacing
	float ___zSpacing_1;
	// System.Boolean Spine.Unity.MeshGenerator/Settings::pmaVertexColors
	bool ___pmaVertexColors_2;
	// System.Boolean Spine.Unity.MeshGenerator/Settings::tintBlack
	bool ___tintBlack_3;
	// System.Boolean Spine.Unity.MeshGenerator/Settings::canvasGroupTintBlack
	bool ___canvasGroupTintBlack_4;
	// System.Boolean Spine.Unity.MeshGenerator/Settings::calculateTangents
	bool ___calculateTangents_5;
	// System.Boolean Spine.Unity.MeshGenerator/Settings::addNormals
	bool ___addNormals_6;
	// System.Boolean Spine.Unity.MeshGenerator/Settings::immutableTriangles
	bool ___immutableTriangles_7;
};
// Native definition for P/Invoke marshalling of Spine.Unity.MeshGenerator/Settings
struct Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8_marshaled_pinvoke
{
	int32_t ___useClipping_0;
	float ___zSpacing_1;
	int32_t ___pmaVertexColors_2;
	int32_t ___tintBlack_3;
	int32_t ___canvasGroupTintBlack_4;
	int32_t ___calculateTangents_5;
	int32_t ___addNormals_6;
	int32_t ___immutableTriangles_7;
};
// Native definition for COM marshalling of Spine.Unity.MeshGenerator/Settings
struct Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8_marshaled_com
{
	int32_t ___useClipping_0;
	float ___zSpacing_1;
	int32_t ___pmaVertexColors_2;
	int32_t ___tintBlack_3;
	int32_t ___canvasGroupTintBlack_4;
	int32_t ___calculateTangents_5;
	int32_t ___addNormals_6;
	int32_t ___immutableTriangles_7;
};

// Spine.Skin/SkinEntry
struct SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F 
{
	// System.Int32 Spine.Skin/SkinEntry::slotIndex
	int32_t ___slotIndex_0;
	// System.String Spine.Skin/SkinEntry::name
	String_t* ___name_1;
	// Spine.Attachment Spine.Skin/SkinEntry::attachment
	Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___attachment_2;
};
// Native definition for P/Invoke marshalling of Spine.Skin/SkinEntry
struct SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F_marshaled_pinvoke
{
	int32_t ___slotIndex_0;
	char* ___name_1;
	Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___attachment_2;
};
// Native definition for COM marshalling of Spine.Skin/SkinEntry
struct SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F_marshaled_com
{
	int32_t ___slotIndex_0;
	Il2CppChar* ___name_1;
	Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___attachment_2;
};

// System.Collections.Generic.List`1/Enumerator<Spine.Skin/SkinEntry>
struct Enumerator_t92EFC5F176EEDD1F17DA1F228A48D02841FBA834 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F ____current_3;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t130CF6E2EE02AEEBDEDE8D9B2BC12967F7A46B24  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t130CF6E2EE02AEEBDEDE8D9B2BC12967F7A46B24_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1
	__StaticArrayInitTypeSizeU3D24_t7DFBA915BF3CCBD700ED46D913E2C95A85864ED2 ___753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1_0;
};

// Spine.CurveTimeline1
struct CurveTimeline1_t3313E1733621F4DEFE204982B4F0E8A00DB5D5A7  : public CurveTimeline_tF590CEE203806A2BA7E2B603C6DB6421B231BF34
{
};

// Spine.CurveTimeline2
struct CurveTimeline2_t6206FD4B2E6BA6CE14D85744DEC9268D470D66D9  : public CurveTimeline_tF590CEE203806A2BA7E2B603C6DB6421B231BF34
{
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Spine.TransformConstraintTimeline
struct TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885  : public CurveTimeline_tF590CEE203806A2BA7E2B603C6DB6421B231BF34
{
	// System.Int32 Spine.TransformConstraintTimeline::transformConstraintIndex
	int32_t ___transformConstraintIndex_3;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Spine.RotateTimeline
struct RotateTimeline_t0B9A05CA52071B7C553456577B12D1023DD54FE2  : public CurveTimeline1_t3313E1733621F4DEFE204982B4F0E8A00DB5D5A7
{
	// System.Int32 Spine.RotateTimeline::boneIndex
	int32_t ___boneIndex_3;
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

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// Spine.TranslateTimeline
struct TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852  : public CurveTimeline2_t6206FD4B2E6BA6CE14D85744DEC9268D470D66D9
{
	// System.Int32 Spine.TranslateTimeline::boneIndex
	int32_t ___boneIndex_3;
};

// Spine.TranslateXTimeline
struct TranslateXTimeline_t0B249911CB468BACF3C04002772032F852EDA711  : public CurveTimeline1_t3313E1733621F4DEFE204982B4F0E8A00DB5D5A7
{
	// System.Int32 Spine.TranslateXTimeline::boneIndex
	int32_t ___boneIndex_3;
};

// Spine.TranslateYTimeline
struct TranslateYTimeline_tFB684A539CED348763AB5265FA7D3A750BDE5A3A  : public CurveTimeline1_t3313E1733621F4DEFE204982B4F0E8A00DB5D5A7
{
	// System.Int32 Spine.TranslateYTimeline::boneIndex
	int32_t ___boneIndex_3;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

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

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Spine.Unity.SkeletonDataModifierAsset
struct SkeletonDataModifierAsset_t278AC6B40287AED467A89D926168CE80025CA4A3  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// Spine.Unity.BlendModeMaterialsAsset
struct BlendModeMaterialsAsset_t236FD164717645876A06AF2BFFFBB6B5F2C2ADDF  : public SkeletonDataModifierAsset_t278AC6B40287AED467A89D926168CE80025CA4A3
{
	// UnityEngine.Material Spine.Unity.BlendModeMaterialsAsset::multiplyMaterialTemplate
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___multiplyMaterialTemplate_4;
	// UnityEngine.Material Spine.Unity.BlendModeMaterialsAsset::screenMaterialTemplate
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___screenMaterialTemplate_5;
	// UnityEngine.Material Spine.Unity.BlendModeMaterialsAsset::additiveMaterialTemplate
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___additiveMaterialTemplate_6;
	// System.Boolean Spine.Unity.BlendModeMaterialsAsset::applyAdditiveMaterial
	bool ___applyAdditiveMaterial_7;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Spine.Unity.SubmeshInstruction[]
struct SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73  : public RuntimeArray
{
	ALIGN_FIELD (8) SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF m_Items[1];

	inline SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___skeleton_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_3), (void*)NULL);
		#endif
	}
	inline SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___skeleton_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_3), (void*)NULL);
		#endif
	}
};
// Spine.Attachment[]
struct AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44  : public RuntimeArray
{
	ALIGN_FIELD (8) Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* m_Items[1];

	inline Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Spine.Slot[]
struct SlotU5BU5D_tCAD0CBE62BC9C1E9DE3167456039B5ABD5C02D38  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* m_Items[1];

	inline Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* value)
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
// Spine.SlotData[]
struct SlotDataU5BU5D_tB79EB968566AA52F1F04E2309870F288ECEB5669  : public RuntimeArray
{
	ALIGN_FIELD (8) SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* m_Items[1];

	inline SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SlotData_t0301519741B248AFC95ADFF4C882677A25D70548** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SlotData_t0301519741B248AFC95ADFF4C882677A25D70548** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
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
// Spine.BoneData[]
struct BoneDataU5BU5D_tADACEBE8328638952B7718F3A0E834BBFF9E2EFB  : public RuntimeArray
{
	ALIGN_FIELD (8) BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* m_Items[1];

	inline BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.List`1<UnityEngine.Texture2D>[]
struct List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88  : public RuntimeArray
{
	ALIGN_FIELD (8) List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* m_Items[1];

	inline List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Spine.Skin/SkinEntry[]
struct SkinEntryU5BU5D_t9B1C37E03A18055E30BDCA519343A43FF53C4486  : public RuntimeArray
{
	ALIGN_FIELD (8) SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F m_Items[1];

	inline SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___attachment_2), (void*)NULL);
		#endif
	}
	inline SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___attachment_2), (void*)NULL);
		#endif
	}
};


// T Spine.Unity.DoubleBuffered`1<System.Object>::GetNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DoubleBuffered_1_GetNext_m20515492B2E4B64EFA88FCA433E470500BD9F2BD_gshared (DoubleBuffered_1_tD59B3CD78522B7E6B2A8E8CE4BE77A8B95CF6942* __this, const RuntimeMethod* method) ;
// System.Void Spine.ExposedList`1<System.Object>::Clear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_Clear_mF811920C3DD8CD3AB1CC66D004AA7F206CF9B585_gshared (ExposedList_1_t90C5D64C7E11EBF0854CF0859FD55DF94D6ED6B7* __this, bool ___clearArray0, const RuntimeMethod* method) ;
// System.Void Spine.Unity.DoubleBuffered`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleBuffered_1__ctor_m8C4FBB57264CB07B8ADF51E8179E77086F42C1DD_gshared (DoubleBuffered_1_tD59B3CD78522B7E6B2A8E8CE4BE77A8B95CF6942* __this, const RuntimeMethod* method) ;
// System.Void Spine.ExposedList`1<System.Object>::CopyTo(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_CopyTo_m6A61BB34AA070E233C5FB01D9D133685655D76C9_gshared (ExposedList_1_t90C5D64C7E11EBF0854CF0859FD55DF94D6ED6B7* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, const RuntimeMethod* method) ;
// T[] Spine.ExposedList`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ExposedList_1_ToArray_m3AED9B7969E0970EA0ED29C0A1B713D7B3EEB7F0_gshared (ExposedList_1_t90C5D64C7E11EBF0854CF0859FD55DF94D6ED6B7* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Object>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void Spine.ExposedList`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1__ctor_m04219D42999BC4715AC9D452428650EC9AD80753_gshared (ExposedList_1_t90C5D64C7E11EBF0854CF0859FD55DF94D6ED6B7* __this, const RuntimeMethod* method) ;
// System.Void Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>::Clear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_Clear_mA7EA6D93B5A7EAE2FBF026DE784A5C18E9FB12B7_gshared (ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* __this, bool ___clearArray0, const RuntimeMethod* method) ;
// Spine.ExposedList`1<T> Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>::Resize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* ExposedList_1_Resize_mF793DB207DAEBCBD5A9E8D6AAB3BCCFA7E90C2B2_gshared (ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* __this, int32_t ___newSize0, const RuntimeMethod* method) ;
// Spine.ExposedList`1<T> Spine.ExposedList`1<System.Object>::Resize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExposedList_1_t90C5D64C7E11EBF0854CF0859FD55DF94D6ED6B7* ExposedList_1_Resize_m5422769D9A7C8FCDFE058973B42AEDC4225488FE_gshared (ExposedList_1_t90C5D64C7E11EBF0854CF0859FD55DF94D6ED6B7* __this, int32_t ___newSize0, const RuntimeMethod* method) ;
// System.Int32 Spine.ExposedList`1<System.Object>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExposedList_1_get_Capacity_m215F1A12A9B855BB39507EF5BED8BF87B7146B16_gshared (ExposedList_1_t90C5D64C7E11EBF0854CF0859FD55DF94D6ED6B7* __this, const RuntimeMethod* method) ;
// System.Void Spine.ExposedList`1<System.Object>::EnsureCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_EnsureCapacity_m27630139F86477C036FD621812CD0B0AC7BD006F_gshared (ExposedList_1_t90C5D64C7E11EBF0854CF0859FD55DF94D6ED6B7* __this, int32_t ___min0, const RuntimeMethod* method) ;
// System.Int32 Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExposedList_1_get_Capacity_m82E7BCDEC69EC5B67946C27CFFA633BB242C77B7_gshared (ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* __this, const RuntimeMethod* method) ;
// System.Void Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>::EnsureCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_EnsureCapacity_mC8E2441A52BAF350EC81F2CBADD1ED0801444817_gshared (ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* __this, int32_t ___min0, const RuntimeMethod* method) ;
// System.Void Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>::CopyTo(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_CopyTo_m4121C10AF81B9CF92CB26C31A3FB4FB895232C63_gshared (ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* __this, SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* ___array0, const RuntimeMethod* method) ;
// System.Void Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1__ctor_m6D8241E2A7EE8FD6FA287006ACE295088C176442_gshared (ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Spine.Skin/SkinEntry>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m725DC1F120E8A4D3A152C7084FA3377605C54112_gshared (List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Spine.Skin/SkinEntry>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mADFF237C1F7E1FB019D2B99FC14B85246AAB208C_gshared_inline (List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B* __this, const RuntimeMethod* method) ;
// Spine.ExposedList`1/Enumerator<T> Spine.ExposedList`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t739C86133C966CD494DA3E584097A6CF08A5F453 ExposedList_1_GetEnumerator_m3FBC2F5FB0D42C43E9CC9179CCEE0155B7C6D71B_gshared (ExposedList_1_t90C5D64C7E11EBF0854CF0859FD55DF94D6ED6B7* __this, const RuntimeMethod* method) ;
// System.Void Spine.ExposedList`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m07F4232A73E7B6D24AE24206FF0567655DE6A552_gshared (Enumerator_t739C86133C966CD494DA3E584097A6CF08A5F453* __this, const RuntimeMethod* method) ;
// T Spine.ExposedList`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m498B7803B408E95A6D75A8E951E008D9ABED33DD_gshared_inline (Enumerator_t739C86133C966CD494DA3E584097A6CF08A5F453* __this, const RuntimeMethod* method) ;
// System.Boolean Spine.ExposedList`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA3711E6F31721CD471A7EEABF16E029A413B99B5_gshared (Enumerator_t739C86133C966CD494DA3E584097A6CF08A5F453* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Spine.Skin/SkinEntry>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t92EFC5F176EEDD1F17DA1F228A48D02841FBA834 List_1_GetEnumerator_m7DD716A4A1F58B4B28F3294F2988CA93A3400243_gshared (List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Spine.Skin/SkinEntry>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m297E3F012818CCE473EB4E9DEE446BDA2F413C7A_gshared (Enumerator_t92EFC5F176EEDD1F17DA1F228A48D02841FBA834* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Spine.Skin/SkinEntry>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F Enumerator_get_Current_m6C0B2624258072CB19F551437D538D2BB9A088D7_gshared_inline (Enumerator_t92EFC5F176EEDD1F17DA1F228A48D02841FBA834* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Spine.Skin/SkinEntry>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE69E8D93F4DDCBBA32A98ECDDC6DA9A3E074C91E_gshared (Enumerator_t92EFC5F176EEDD1F17DA1F228A48D02841FBA834* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mED2C83D8297248EA771F5BE3100178A599DA02AA_gshared (Dictionary_2_tFAF540A29E31D3857906B54EB31B6EB7D8BF858F* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mD12A53B0383978C8E4B3C102347D5E7945572984_gshared (Dictionary_2_tFAF540A29E31D3857906B54EB31B6EB7D8BF858F* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m6F197663698B69174F9FD23649DA551F903C2EEF_gshared (Dictionary_2_tFAF540A29E31D3857906B54EB31B6EB7D8BF858F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m311860C8440F142E366318FB6540D68FE370DED5_gshared (Dictionary_2_tFAF540A29E31D3857906B54EB31B6EB7D8BF858F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m0F20C45B5CE4BF0BF8DAA9039EB54C04F618EC7B_gshared (Dictionary_2_t703573FCB9C9178FBB719FCBEC8B9ADF1AED3A24* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEE283B78A6DBFCF9C7189F732BF991A13E409432_gshared (Dictionary_2_t703573FCB9C9178FBB719FCBEC8B9ADF1AED3A24* __this, const RuntimeMethod* method) ;

// T Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshRendererBuffers/SmartMesh>::GetNext()
inline SmartMesh_tF3C34CB0726F6D0EE815F734E62B5B2761A41C0F* DoubleBuffered_1_GetNext_m021F8DF0224986ABE20915759168223703E0872F (DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE* __this, const RuntimeMethod* method)
{
	return ((  SmartMesh_tF3C34CB0726F6D0EE815F734E62B5B2761A41C0F* (*) (DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE*, const RuntimeMethod*))DoubleBuffered_1_GetNext_m20515492B2E4B64EFA88FCA433E470500BD9F2BD_gshared)(__this, method);
}
// System.Void Spine.Unity.MeshRendererBuffers/SmartMesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartMesh_Clear_mF0B15F03596DBFF918B609B25C1990024786427D (SmartMesh_tF3C34CB0726F6D0EE815F734E62B5B2761A41C0F* __this, const RuntimeMethod* method) ;
// System.Void Spine.ExposedList`1<UnityEngine.Material>::Clear(System.Boolean)
inline void ExposedList_1_Clear_m9E58AA2DEFF9D76D6943AEAF5ED871131591B686 (ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A* __this, bool ___clearArray0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A*, bool, const RuntimeMethod*))ExposedList_1_Clear_mF811920C3DD8CD3AB1CC66D004AA7F206CF9B585_gshared)(__this, ___clearArray0, method);
}
// System.Void Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshRendererBuffers/SmartMesh>::.ctor()
inline void DoubleBuffered_1__ctor_m91D4D03775EDB7AEAC31CE5D837A882823D88D62 (DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE* __this, const RuntimeMethod* method)
{
	((  void (*) (DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE*, const RuntimeMethod*))DoubleBuffered_1__ctor_m8C4FBB57264CB07B8ADF51E8179E77086F42C1DD_gshared)(__this, method);
}
// System.Void Spine.ExposedList`1<UnityEngine.Material>::CopyTo(T[])
inline void ExposedList_1_CopyTo_mB48811CB67BD864E8BC21D14189528A4094A0EC1 (ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A* __this, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A*, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*, const RuntimeMethod*))ExposedList_1_CopyTo_m6A61BB34AA070E233C5FB01D9D133685655D76C9_gshared)(__this, ___array0, method);
}
// T[] Spine.ExposedList`1<UnityEngine.Material>::ToArray()
inline MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ExposedList_1_ToArray_m235F1CEA733C0A696AB8F0FC69EE50E4BE5EED46 (ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A* __this, const RuntimeMethod* method)
{
	return ((  MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* (*) (ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A*, const RuntimeMethod*))ExposedList_1_ToArray_m3AED9B7969E0970EA0ED29C0A1B713D7B3EEB7F0_gshared)(__this, method);
}
// System.Void System.Array::Resize<UnityEngine.Material>(T[]&,System.Int32)
inline void Array_Resize_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m79C251DDDBE015E6DB85FE487F8748D4613BCC7C (MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared)(___array0, ___newSize1, method);
}
// System.Void Spine.Unity.MeshRendererBuffers/SmartMesh::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartMesh_Dispose_m19FAA7A516A38CAF693B020952E9BF5C28FEF218 (SmartMesh_tF3C34CB0726F6D0EE815F734E62B5B2761A41C0F* __this, const RuntimeMethod* method) ;
// System.Void Spine.ExposedList`1<UnityEngine.Material>::.ctor()
inline void ExposedList_1__ctor_mC55FFE62238A86DA9DB8FA1DACD4CA15FD898D9D (ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A* __this, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A*, const RuntimeMethod*))ExposedList_1__ctor_m04219D42999BC4715AC9D452428650EC9AD80753_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void Spine.Unity.SkeletonRendererInstruction::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonRendererInstruction_Clear_m87BDEAEBF1F2EC70EA52E57B5B97221956E3CA0D (SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Mesh Spine.Unity.SpineMesh::NewSkeletonMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* SpineMesh_NewSkeletonMesh_mA21D1CE3A2DE89AE218ADE6629852435816F461C (const RuntimeMethod* method) ;
// System.Void Spine.Unity.SkeletonRendererInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonRendererInstruction__ctor_m0B7A5C8C28EAFC7F306B00ED655C39B36E41DA9B (SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* __this, const RuntimeMethod* method) ;
// System.Void Spine.ExposedList`1<Spine.Attachment>::Clear(System.Boolean)
inline void ExposedList_1_Clear_mDB22BF4336D3B22DB00092FBF831F0890A30E64D (ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* __this, bool ___clearArray0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715*, bool, const RuntimeMethod*))ExposedList_1_Clear_mF811920C3DD8CD3AB1CC66D004AA7F206CF9B585_gshared)(__this, ___clearArray0, method);
}
// System.Void Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>::Clear(System.Boolean)
inline void ExposedList_1_Clear_mA7EA6D93B5A7EAE2FBF026DE784A5C18E9FB12B7 (ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* __this, bool ___clearArray0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7*, bool, const RuntimeMethod*))ExposedList_1_Clear_mA7EA6D93B5A7EAE2FBF026DE784A5C18E9FB12B7_gshared)(__this, ___clearArray0, method);
}
// Spine.ExposedList`1<T> Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>::Resize(System.Int32)
inline ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* ExposedList_1_Resize_mF793DB207DAEBCBD5A9E8D6AAB3BCCFA7E90C2B2 (ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* __this, int32_t ___newSize0, const RuntimeMethod* method)
{
	return ((  ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* (*) (ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7*, int32_t, const RuntimeMethod*))ExposedList_1_Resize_mF793DB207DAEBCBD5A9E8D6AAB3BCCFA7E90C2B2_gshared)(__this, ___newSize0, method);
}
// Spine.ExposedList`1<T> Spine.ExposedList`1<Spine.Attachment>::Resize(System.Int32)
inline ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* ExposedList_1_Resize_m7B7CB6A1AD1CDAEF2CF786219459BA9EDBF763BC (ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* __this, int32_t ___newSize0, const RuntimeMethod* method)
{
	return ((  ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* (*) (ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715*, int32_t, const RuntimeMethod*))ExposedList_1_Resize_m5422769D9A7C8FCDFE058973B42AEDC4225488FE_gshared)(__this, ___newSize0, method);
}
// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::get_DrawOrder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_t832DB618999898C4507FEDF55884721C3E514B2C* Skeleton_get_DrawOrder_mA89640FCE8F1F998F81846A80DBB6A41EB7BC2A2_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, const RuntimeMethod* method) ;
// Spine.Bone Spine.Slot::get_Bone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bone_tC5BB616A04722279E675558888991F720C090467* Slot_get_Bone_mFEF8A1FFFB05952323119E4EFB990971EDA9F282_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) ;
// System.Boolean Spine.Bone::get_Active()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Bone_get_Active_mC7A9C59029247A090AFCBD4CA28E8F5CDFAFF4FB_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) ;
// Spine.Attachment Spine.Slot::get_Attachment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* Slot_get_Attachment_mB2A78D5EFCC62623B18457E8B38E6A6DB402F4C2_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) ;
// System.Int32 Spine.ExposedList`1<Spine.Attachment>::get_Capacity()
inline int32_t ExposedList_1_get_Capacity_m5C66AC41CCC1342C0CA7D4C7F2BC7AF6674081A4 (ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715*, const RuntimeMethod*))ExposedList_1_get_Capacity_m215F1A12A9B855BB39507EF5BED8BF87B7146B16_gshared)(__this, method);
}
// System.Void Spine.ExposedList`1<Spine.Attachment>::EnsureCapacity(System.Int32)
inline void ExposedList_1_EnsureCapacity_m6757D668EB9435835549CBEEC28D7CD0EDA6B648 (ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* __this, int32_t ___min0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715*, int32_t, const RuntimeMethod*))ExposedList_1_EnsureCapacity_m27630139F86477C036FD621812CD0B0AC7BD006F_gshared)(__this, ___min0, method);
}
// System.Void Spine.ExposedList`1<Spine.Attachment>::CopyTo(T[])
inline void ExposedList_1_CopyTo_mD52F6AA97DCACA06F00BE3704031938ACA66C48A (ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* __this, AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715*, AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44*, const RuntimeMethod*))ExposedList_1_CopyTo_m6A61BB34AA070E233C5FB01D9D133685655D76C9_gshared)(__this, ___array0, method);
}
// System.Int32 Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>::get_Capacity()
inline int32_t ExposedList_1_get_Capacity_m82E7BCDEC69EC5B67946C27CFFA633BB242C77B7 (ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7*, const RuntimeMethod*))ExposedList_1_get_Capacity_m82E7BCDEC69EC5B67946C27CFFA633BB242C77B7_gshared)(__this, method);
}
// System.Void Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>::EnsureCapacity(System.Int32)
inline void ExposedList_1_EnsureCapacity_mC8E2441A52BAF350EC81F2CBADD1ED0801444817 (ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* __this, int32_t ___min0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7*, int32_t, const RuntimeMethod*))ExposedList_1_EnsureCapacity_mC8E2441A52BAF350EC81F2CBADD1ED0801444817_gshared)(__this, ___min0, method);
}
// System.Void Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>::CopyTo(T[])
inline void ExposedList_1_CopyTo_m4121C10AF81B9CF92CB26C31A3FB4FB895232C63 (ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* __this, SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7*, SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73*, const RuntimeMethod*))ExposedList_1_CopyTo_m4121C10AF81B9CF92CB26C31A3FB4FB895232C63_gshared)(__this, ___array0, method);
}
// System.Void Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>::.ctor()
inline void ExposedList_1__ctor_m6D8241E2A7EE8FD6FA287006ACE295088C176442 (ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* __this, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7*, const RuntimeMethod*))ExposedList_1__ctor_m6D8241E2A7EE8FD6FA287006ACE295088C176442_gshared)(__this, method);
}
// System.Void Spine.ExposedList`1<Spine.Attachment>::.ctor()
inline void ExposedList_1__ctor_m2A26BACD6CCA3FB6ED717FD68A155DCF8419F4E4 (ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* __this, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715*, const RuntimeMethod*))ExposedList_1__ctor_m04219D42999BC4715AC9D452428650EC9AD80753_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::MarkDynamic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MarkDynamic_m718089940F240AFE625D6DC9DA4E6F20229CC322 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String Spine.Unity.SubmeshInstruction::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SubmeshInstruction_ToString_mBFFBA2B1BEAAD111F4BA9EFD8EAC44C5CACBE2DC (SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF* __this, const RuntimeMethod* method) ;
// System.Void Spine.Unity.BlendModeMaterialsAsset::ApplyMaterials(Spine.SkeletonData,UnityEngine.Material,UnityEngine.Material,UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlendModeMaterialsAsset_ApplyMaterials_m1255529EC294BBCFBA7768DE0FAB224701477447 (SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* ___skeletonData0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___multiplyTemplate1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___screenTemplate2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___additiveTemplate3, bool ___includeAdditiveSlots4, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void Spine.Unity.BlendModeMaterialsAsset/AtlasMaterialCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasMaterialCache__ctor_mCB4F64D8DE441FA5340BD95E16B17DC1C77B9DD8 (AtlasMaterialCache_t7C7BD0D4CFED0D295486EB411B6ADA1E2D02D087* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Spine.Skin/SkinEntry>::.ctor()
inline void List_1__ctor_m725DC1F120E8A4D3A152C7084FA3377605C54112 (List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B*, const RuntimeMethod*))List_1__ctor_m725DC1F120E8A4D3A152C7084FA3377605C54112_gshared)(__this, method);
}
// Spine.ExposedList`1<Spine.SlotData> Spine.SkeletonData::get_Slots()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_t91DB309B7AA43B52841EC0CF8EBADD1D9D73DCA3* SkeletonData_get_Slots_mBB921012ED44C94B160D5D0CFFA96B09552438B6_inline (SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* __this, const RuntimeMethod* method) ;
// Spine.BlendMode Spine.SlotData::get_BlendMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SlotData_get_BlendMode_mD941BFBAC4358DADF593F4981D9F3C488E4FDC40_inline (SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Spine.Skin/SkinEntry>::Clear()
inline void List_1_Clear_mADFF237C1F7E1FB019D2B99FC14B85246AAB208C_inline (List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B*, const RuntimeMethod*))List_1_Clear_mADFF237C1F7E1FB019D2B99FC14B85246AAB208C_gshared_inline)(__this, method);
}
// Spine.ExposedList`1<Spine.Skin> Spine.SkeletonData::get_Skins()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_t6FF735095BAC811A2AD50E52AE368F9A5D48B59D* SkeletonData_get_Skins_m7235DD9B8582ED5DAEA63989EC71077D6848CD5A_inline (SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* __this, const RuntimeMethod* method) ;
// Spine.ExposedList`1/Enumerator<T> Spine.ExposedList`1<Spine.Skin>::GetEnumerator()
inline Enumerator_t8638B5370C02395750703CE470E1F97E5E12EC80 ExposedList_1_GetEnumerator_m37DC439D0C295B68E5C616F1C1E13547915EF426 (ExposedList_1_t6FF735095BAC811A2AD50E52AE368F9A5D48B59D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8638B5370C02395750703CE470E1F97E5E12EC80 (*) (ExposedList_1_t6FF735095BAC811A2AD50E52AE368F9A5D48B59D*, const RuntimeMethod*))ExposedList_1_GetEnumerator_m3FBC2F5FB0D42C43E9CC9179CCEE0155B7C6D71B_gshared)(__this, method);
}
// System.Void Spine.ExposedList`1/Enumerator<Spine.Skin>::Dispose()
inline void Enumerator_Dispose_mCCB8B376031074252021919A593F714962047141 (Enumerator_t8638B5370C02395750703CE470E1F97E5E12EC80* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8638B5370C02395750703CE470E1F97E5E12EC80*, const RuntimeMethod*))Enumerator_Dispose_m07F4232A73E7B6D24AE24206FF0567655DE6A552_gshared)(__this, method);
}
// T Spine.ExposedList`1/Enumerator<Spine.Skin>::get_Current()
inline Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* Enumerator_get_Current_m9A37B19BA42D6E19192E95945BBAD25374DB948F_inline (Enumerator_t8638B5370C02395750703CE470E1F97E5E12EC80* __this, const RuntimeMethod* method)
{
	return ((  Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* (*) (Enumerator_t8638B5370C02395750703CE470E1F97E5E12EC80*, const RuntimeMethod*))Enumerator_get_Current_m498B7803B408E95A6D75A8E951E008D9ABED33DD_gshared_inline)(__this, method);
}
// System.Void Spine.Skin::GetAttachments(System.Int32,System.Collections.Generic.List`1<Spine.Skin/SkinEntry>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skin_GetAttachments_mB10549E9C547F062130E6F188E6CC72BBF424F31 (Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* __this, int32_t ___slotIndex0, List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B* ___attachments1, const RuntimeMethod* method) ;
// System.Boolean Spine.ExposedList`1/Enumerator<Spine.Skin>::MoveNext()
inline bool Enumerator_MoveNext_mFFBA4AA4ACE28C3E2410D74A82FBA3DE79085D6F (Enumerator_t8638B5370C02395750703CE470E1F97E5E12EC80* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8638B5370C02395750703CE470E1F97E5E12EC80*, const RuntimeMethod*))Enumerator_MoveNext_mA3711E6F31721CD471A7EEABF16E029A413B99B5_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Spine.Skin/SkinEntry>::GetEnumerator()
inline Enumerator_t92EFC5F176EEDD1F17DA1F228A48D02841FBA834 List_1_GetEnumerator_m7DD716A4A1F58B4B28F3294F2988CA93A3400243 (List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t92EFC5F176EEDD1F17DA1F228A48D02841FBA834 (*) (List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B*, const RuntimeMethod*))List_1_GetEnumerator_m7DD716A4A1F58B4B28F3294F2988CA93A3400243_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Spine.Skin/SkinEntry>::Dispose()
inline void Enumerator_Dispose_m297E3F012818CCE473EB4E9DEE446BDA2F413C7A (Enumerator_t92EFC5F176EEDD1F17DA1F228A48D02841FBA834* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t92EFC5F176EEDD1F17DA1F228A48D02841FBA834*, const RuntimeMethod*))Enumerator_Dispose_m297E3F012818CCE473EB4E9DEE446BDA2F413C7A_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Spine.Skin/SkinEntry>::get_Current()
inline SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F Enumerator_get_Current_m6C0B2624258072CB19F551437D538D2BB9A088D7_inline (Enumerator_t92EFC5F176EEDD1F17DA1F228A48D02841FBA834* __this, const RuntimeMethod* method)
{
	return ((  SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F (*) (Enumerator_t92EFC5F176EEDD1F17DA1F228A48D02841FBA834*, const RuntimeMethod*))Enumerator_get_Current_m6C0B2624258072CB19F551437D538D2BB9A088D7_gshared_inline)(__this, method);
}
// Spine.Attachment Spine.Skin/SkinEntry::get_Attachment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* SkinEntry_get_Attachment_mD3F3972C2C175630ABA63A7806AEED63CE8A665C_inline (SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F* __this, const RuntimeMethod* method) ;
// Spine.AtlasRegion Spine.Unity.BlendModeMaterialsAsset/AtlasMaterialCache::CloneAtlasRegionWithMaterial(Spine.AtlasRegion,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasMaterialCache_CloneAtlasRegionWithMaterial_m8138F1CDB9657D231B95BB0670DC68F87D15A48A (AtlasMaterialCache_t7C7BD0D4CFED0D295486EB411B6ADA1E2D02D087* __this, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___originalRegion0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___materialTemplate1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Spine.Skin/SkinEntry>::MoveNext()
inline bool Enumerator_MoveNext_mE69E8D93F4DDCBBA32A98ECDDC6DA9A3E074C91E (Enumerator_t92EFC5F176EEDD1F17DA1F228A48D02841FBA834* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t92EFC5F176EEDD1F17DA1F228A48D02841FBA834*, const RuntimeMethod*))Enumerator_MoveNext_mE69E8D93F4DDCBBA32A98ECDDC6DA9A3E074C91E_gshared)(__this, method);
}
// System.Void Spine.Unity.SkeletonDataModifierAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDataModifierAsset__ctor_m3EB73D8F20FC34AC99FE95B0A26E9F80D398CBC7 (SkeletonDataModifierAsset_t278AC6B40287AED467A89D926168CE80025CA4A3* __this, const RuntimeMethod* method) ;
// Spine.AtlasRegion Spine.AtlasRegion::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasRegion_Clone_m0824EC37D5A380263650C4D4347FB07962A4B39F (AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* __this, const RuntimeMethod* method) ;
// Spine.AtlasPage Spine.Unity.BlendModeMaterialsAsset/AtlasMaterialCache::GetAtlasPageWithMaterial(Spine.AtlasPage,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* AtlasMaterialCache_GetAtlasPageWithMaterial_m0C4CA3B2166BB5C1FFE3805EDB42371D6CF3D92F (AtlasMaterialCache_t7C7BD0D4CFED0D295486EB411B6ADA1E2D02D087* __this, AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* ___originalPage0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___materialTemplate1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m0800DDBDA1464DDB4CAC78267B1573D39F192CC0 (KeyValuePair_2_t9BED0DE0EF6762C05B91AC6F48651328A35D90A3* __this, AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* ___key0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t9BED0DE0EF6762C05B91AC6F48651328A35D90A3*, AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>,Spine.AtlasPage>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m23A6F33916B3337C3ABC33885D9AB26D899A562C (Dictionary_2_tF47E37D6EAEC4A90ACB9613098F0D271ADAB6C0B* __this, KeyValuePair_2_t9BED0DE0EF6762C05B91AC6F48651328A35D90A3 ___key0, AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF47E37D6EAEC4A90ACB9613098F0D271ADAB6C0B*, KeyValuePair_2_t9BED0DE0EF6762C05B91AC6F48651328A35D90A3, AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7**, const RuntimeMethod*))Dictionary_2_TryGetValue_mED2C83D8297248EA771F5BE3100178A599DA02AA_gshared)(__this, ___key0, ___value1, method);
}
// Spine.AtlasPage Spine.AtlasPage::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* AtlasPage_Clone_mE9BE56C843CBB0102D17B2DC04628A8BFF3E1F4D (AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___source0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>,Spine.AtlasPage>::Add(TKey,TValue)
inline void Dictionary_2_Add_mE0CC5198FE11FA15516C58A432C1F61E43739097 (Dictionary_2_tF47E37D6EAEC4A90ACB9613098F0D271ADAB6C0B* __this, KeyValuePair_2_t9BED0DE0EF6762C05B91AC6F48651328A35D90A3 ___key0, AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF47E37D6EAEC4A90ACB9613098F0D271ADAB6C0B*, KeyValuePair_2_t9BED0DE0EF6762C05B91AC6F48651328A35D90A3, AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7*, const RuntimeMethod*))Dictionary_2_Add_mD12A53B0383978C8E4B3C102347D5E7945572984_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>,Spine.AtlasPage>::Clear()
inline void Dictionary_2_Clear_mF0BFF6B1DCBBADDD4ED2878133F16229457638BB (Dictionary_2_tF47E37D6EAEC4A90ACB9613098F0D271ADAB6C0B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF47E37D6EAEC4A90ACB9613098F0D271ADAB6C0B*, const RuntimeMethod*))Dictionary_2_Clear_m6F197663698B69174F9FD23649DA551F903C2EEF_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>,Spine.AtlasPage>::.ctor()
inline void Dictionary_2__ctor_m0B5FD755F4BD8F1CE0FF9F431B05716A95A43297 (Dictionary_2_tF47E37D6EAEC4A90ACB9613098F0D271ADAB6C0B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF47E37D6EAEC4A90ACB9613098F0D271ADAB6C0B*, const RuntimeMethod*))Dictionary_2__ctor_m311860C8440F142E366318FB6540D68FE370DED5_gshared)(__this, method);
}
// System.Void Spine.Skeleton::set_A(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Skeleton_set_A_mD9FC576C115D119B76ECA978FC14A1D4D4191E24_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Spine.Skeleton::set_R(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Skeleton_set_R_m914D7E1F23A31D100D167DF2DC5513825C441BC7_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Spine.Skeleton::set_G(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Skeleton_set_G_m64EACF26B14B2B242648482ACE9CCE063A0117AE_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Spine.Skeleton::set_B(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Skeleton_set_B_m06359B96A97EEC04CA6104AF4F8A2CB1D3E85302_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single Spine.Bone::get_C()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_C_mB12EA1ED732F4098FEEBBF1333776F5B8A6D353F_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) ;
// System.Single Spine.Bone::get_A()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_A_mD9933DFFB2BE82B9B6AA452F2301464E7BB0F9EA_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Single Spine.Bone::get_B()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_B_m152872772FD282B96B00D119D28753129DA33AA1_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) ;
// System.Single Spine.Bone::get_D()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_D_m1D033C2256BB965C9E2BEB1072435B07CD633B7F_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) ;
// System.Int32 Spine.VertexAttachment::get_WorldVerticesLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexAttachment_get_WorldVerticesLength_m18500A21BFC7C7DB4E81B4AC345345F1122B5D44_inline (VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* __this, const RuntimeMethod* method) ;
// System.String Spine.Attachment::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Attachment_get_Name_m3F6ED5BB3D0A221C137F0371ED65AD2815508D4B_inline (Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Int32[] Spine.VertexAttachment::get_Bones()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* VertexAttachment_get_Bones_m22C6003E3CE1F95FF21B2D5C8553460ADD059D81_inline (VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* __this, const RuntimeMethod* method) ;
// Spine.ExposedList`1<System.Single> Spine.Slot::get_Deform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_tDD3820FCA0A1AA9D314E2E1FCE0A16BE3CE5E80A* Slot_get_Deform_m77105EC771A9AB032C28333A1CCE333DB13D5A27_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) ;
// System.Single[] Spine.VertexAttachment::get_Vertices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* VertexAttachment_get_Vertices_mB5661F9B123FB5BEBA04853B24E72B54C6C61F14_inline (VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void Spine.VertexAttachment::ComputeWorldVertices(Spine.Slot,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_ComputeWorldVertices_mDC989D27CD6FA8578F1D54CECD810C780C6A2B4F (VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* __this, Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* ___slot0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___worldVertices1, const RuntimeMethod* method) ;
// System.Single Spine.Bone::get_WorldX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_WorldX_mF7755798A568A353654EFB5D3AD9707BCBD2D3CE_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) ;
// System.Single Spine.Bone::get_WorldY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_WorldY_m599046881C946060A1A0043CA78DF028DAE4632F_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) ;
// System.Void Spine.Unity.SkeletonExtensions::GetWorldToLocalMatrix(Spine.Bone,System.Single&,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonExtensions_GetWorldToLocalMatrix_mD26AFE2F558336C668B4024913FCF27DE9F05C10 (Bone_tC5BB616A04722279E675558888991F720C090467* ___bone0, float* ___ia1, float* ___ib2, float* ___ic3, float* ___id4, const RuntimeMethod* method) ;
// System.Single[] Spine.Timeline::get_Frames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Timeline_get_Frames_m36161E25AFC60271E5BBAA9A4BB32099D05F382E_inline (Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void Spine.TranslateTimeline::GetCurveValue(System.Single&,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateTimeline_GetCurveValue_mA5A2285AEABE1C0DAB56F1BA4B00E5DF1F637CB3 (TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* __this, float* ___x0, float* ___y1, float ___time2, const RuntimeMethod* method) ;
// Spine.ExposedList`1<Spine.BoneData> Spine.SkeletonData::get_Bones()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* SkeletonData_get_Bones_m46C0AB3D18F68B66F2E76AED746F88C3DC2D1018_inline (SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* __this, const RuntimeMethod* method) ;
// System.Int32 Spine.TranslateTimeline::get_BoneIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslateTimeline_get_BoneIndex_m9BFC216EA1BEA854F7C74E599730525BD513D777_inline (TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* __this, const RuntimeMethod* method) ;
// System.Single Spine.BoneData::get_X()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BoneData_get_X_m41AC5529BDF4FEC10AE8B87431A04E0A1B2B3DA0_inline (BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* __this, const RuntimeMethod* method) ;
// System.Single Spine.BoneData::get_Y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BoneData_get_Y_mC11A04D53C0EAEFA456866ECFB98247C1297D762_inline (BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* __this, const RuntimeMethod* method) ;
// System.Single Spine.CurveTimeline1::GetCurveValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurveTimeline1_GetCurveValue_m8039AA73CD553AD5BB5074243C4C497338CC816F (CurveTimeline1_t3313E1733621F4DEFE204982B4F0E8A00DB5D5A7* __this, float ___time0, const RuntimeMethod* method) ;
// System.Int32 Spine.TranslateXTimeline::get_BoneIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslateXTimeline_get_BoneIndex_mF94864F8D36BD1F0AF31E1EAF64A2B54C5E2A9B8_inline (TranslateXTimeline_t0B249911CB468BACF3C04002772032F852EDA711* __this, const RuntimeMethod* method) ;
// System.Int32 Spine.TranslateYTimeline::get_BoneIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslateYTimeline_get_BoneIndex_m256C95349462C3748E8FBCCFC2D514E7F09B39DB_inline (TranslateYTimeline_tFB684A539CED348763AB5265FA7D3A750BDE5A3A* __this, const RuntimeMethod* method) ;
// System.Int32 Spine.RotateTimeline::get_BoneIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RotateTimeline_get_BoneIndex_mC579F6978FE45BBA596E1A654A11E64ACB6E0767_inline (RotateTimeline_t0B9A05CA52071B7C553456577B12D1023DD54FE2* __this, const RuntimeMethod* method) ;
// System.Single Spine.BoneData::get_Rotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BoneData_get_Rotation_mA069172D86BF964BAFDC6ED77A4DBFFCEB306EA2_inline (BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* __this, const RuntimeMethod* method) ;
// System.Void Spine.TransformConstraintTimeline::GetCurveValue(System.Single&,System.Single&,System.Single&,System.Single&,System.Single&,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintTimeline_GetCurveValue_mEF3EB109702445ACD0697E1DED92D1111D9FD602 (TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885* __this, float* ___rotate0, float* ___x1, float* ___y2, float* ___scaleX3, float* ___scaleY4, float* ___shearY5, float ___time6, const RuntimeMethod* method) ;
// Spine.ExposedList`1<Spine.Timeline> Spine.Animation::get_Timelines()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* Animation_get_Timelines_m2F4B97551905154693EE8C220EA45393A47D37BB_inline (Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* __this, const RuntimeMethod* method) ;
// Spine.ExposedList`1/Enumerator<T> Spine.ExposedList`1<Spine.Timeline>::GetEnumerator()
inline Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7 ExposedList_1_GetEnumerator_mAAC0E50314A8728B642DCD37F7E8FE623D4164F3 (ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7 (*) (ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF*, const RuntimeMethod*))ExposedList_1_GetEnumerator_m3FBC2F5FB0D42C43E9CC9179CCEE0155B7C6D71B_gshared)(__this, method);
}
// System.Void Spine.ExposedList`1/Enumerator<Spine.Timeline>::Dispose()
inline void Enumerator_Dispose_m1A391DDB217D33A00F83EF26F3F79B8DF839190D (Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7*, const RuntimeMethod*))Enumerator_Dispose_m07F4232A73E7B6D24AE24206FF0567655DE6A552_gshared)(__this, method);
}
// T Spine.ExposedList`1/Enumerator<Spine.Timeline>::get_Current()
inline Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* Enumerator_get_Current_m6F5B5815FEEF6CABE89E550B1C3501C2810FBCB3_inline (Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7* __this, const RuntimeMethod* method)
{
	return ((  Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* (*) (Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7*, const RuntimeMethod*))Enumerator_get_Current_m498B7803B408E95A6D75A8E951E008D9ABED33DD_gshared_inline)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean Spine.ExposedList`1/Enumerator<Spine.Timeline>::MoveNext()
inline bool Enumerator_MoveNext_mBC7AB4D5664AD175631397B9694FC553E0C76FAB (Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7*, const RuntimeMethod*))Enumerator_MoveNext_mA3711E6F31721CD471A7EEABF16E029A413B99B5_gshared)(__this, method);
}
// System.Int32 Spine.TransformConstraintTimeline::get_TransformConstraintIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransformConstraintTimeline_get_TransformConstraintIndex_m47670BCF2C1A456783EFDFFD799E305CA434AB60_inline (TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885* __this, const RuntimeMethod* method) ;
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities::ClearCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasUtilities_ClearCache_mEBB54853312D663E0F8CF01053402BA1FB93B26B (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Texture2D>::GetEnumerator()
inline Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1 List_1_GetEnumerator_m68D0E2F78D7A7BFC737BE72E4088B86A85F55F6D (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1 (*) (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Texture2D>::Dispose()
inline void Enumerator_Dispose_m7D8098C50EE0CF157C6B09912310A1FD9474F245 (Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Texture2D>::get_Current()
inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Enumerator_get_Current_mCF3C7D2E2BA4F0177C908FDCFE7955303CBD5BED_inline (Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1* __this, const RuntimeMethod* method)
{
	return ((  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*) (Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Texture2D>::MoveNext()
inline bool Enumerator_MoveNext_m00711B095CC5BE52F04F5EB7283C8795DB012C35 (Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,UnityEngine.Texture2D>::Clear()
inline void Dictionary_2_Clear_m7BDA40E7D7D71D7F04B6FEE9059593B9FC36E2EA (Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816*, const RuntimeMethod*))Dictionary_2_Clear_m0F20C45B5CE4BF0BF8DAA9039EB54C04F618EC7B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::Clear()
inline void List_1_Clear_mBFD86AB2F85FB10B7CBA3FABFCD5AB785B271EDA_inline (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Spine.AtlasRegion,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mA78816E36EAB57D6CB5D4795E9EB5DB36A57A231 (Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Spine.AtlasRegion>::.ctor()
inline void List_1__ctor_mC01FB12C8CED6F48D54CD71778F5FF3FF5860BDE (List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Spine.Attachment>::.ctor()
inline void List_1__ctor_m2339E1052EFC4235FB03A7F61B9DE0A8BE4494A5 (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,UnityEngine.Texture2D>::.ctor()
inline void Dictionary_2__ctor_m743D85E17F5AA356B8F1B417104B2866BA904211 (Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816*, const RuntimeMethod*))Dictionary_2__ctor_mEE283B78A6DBFCF9C7189F732BF991A13E409432_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::.ctor()
inline void List_1__ctor_mD3639440D8DA82147DC9629DE83F253326590E28 (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntAndAtlasRegionKey_GetHashCode_m9B65C74CD72827BF431EB5B747DE6D51C12CCDBF (IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Spine.Unity.MeshGenerator/Settings
IL2CPP_EXTERN_C void Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8_marshal_pinvoke(const Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8& unmarshaled, Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8_marshaled_pinvoke& marshaled)
{
	marshaled.___useClipping_0 = static_cast<int32_t>(unmarshaled.___useClipping_0);
	marshaled.___zSpacing_1 = unmarshaled.___zSpacing_1;
	marshaled.___pmaVertexColors_2 = static_cast<int32_t>(unmarshaled.___pmaVertexColors_2);
	marshaled.___tintBlack_3 = static_cast<int32_t>(unmarshaled.___tintBlack_3);
	marshaled.___canvasGroupTintBlack_4 = static_cast<int32_t>(unmarshaled.___canvasGroupTintBlack_4);
	marshaled.___calculateTangents_5 = static_cast<int32_t>(unmarshaled.___calculateTangents_5);
	marshaled.___addNormals_6 = static_cast<int32_t>(unmarshaled.___addNormals_6);
	marshaled.___immutableTriangles_7 = static_cast<int32_t>(unmarshaled.___immutableTriangles_7);
}
IL2CPP_EXTERN_C void Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8_marshal_pinvoke_back(const Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8_marshaled_pinvoke& marshaled, Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8& unmarshaled)
{
	bool unmarshaleduseClipping_temp_0 = false;
	unmarshaleduseClipping_temp_0 = static_cast<bool>(marshaled.___useClipping_0);
	unmarshaled.___useClipping_0 = unmarshaleduseClipping_temp_0;
	float unmarshaledzSpacing_temp_1 = 0.0f;
	unmarshaledzSpacing_temp_1 = marshaled.___zSpacing_1;
	unmarshaled.___zSpacing_1 = unmarshaledzSpacing_temp_1;
	bool unmarshaledpmaVertexColors_temp_2 = false;
	unmarshaledpmaVertexColors_temp_2 = static_cast<bool>(marshaled.___pmaVertexColors_2);
	unmarshaled.___pmaVertexColors_2 = unmarshaledpmaVertexColors_temp_2;
	bool unmarshaledtintBlack_temp_3 = false;
	unmarshaledtintBlack_temp_3 = static_cast<bool>(marshaled.___tintBlack_3);
	unmarshaled.___tintBlack_3 = unmarshaledtintBlack_temp_3;
	bool unmarshaledcanvasGroupTintBlack_temp_4 = false;
	unmarshaledcanvasGroupTintBlack_temp_4 = static_cast<bool>(marshaled.___canvasGroupTintBlack_4);
	unmarshaled.___canvasGroupTintBlack_4 = unmarshaledcanvasGroupTintBlack_temp_4;
	bool unmarshaledcalculateTangents_temp_5 = false;
	unmarshaledcalculateTangents_temp_5 = static_cast<bool>(marshaled.___calculateTangents_5);
	unmarshaled.___calculateTangents_5 = unmarshaledcalculateTangents_temp_5;
	bool unmarshaledaddNormals_temp_6 = false;
	unmarshaledaddNormals_temp_6 = static_cast<bool>(marshaled.___addNormals_6);
	unmarshaled.___addNormals_6 = unmarshaledaddNormals_temp_6;
	bool unmarshaledimmutableTriangles_temp_7 = false;
	unmarshaledimmutableTriangles_temp_7 = static_cast<bool>(marshaled.___immutableTriangles_7);
	unmarshaled.___immutableTriangles_7 = unmarshaledimmutableTriangles_temp_7;
}
// Conversion method for clean up from marshalling of: Spine.Unity.MeshGenerator/Settings
IL2CPP_EXTERN_C void Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8_marshal_pinvoke_cleanup(Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.Unity.MeshGenerator/Settings
IL2CPP_EXTERN_C void Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8_marshal_com(const Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8& unmarshaled, Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8_marshaled_com& marshaled)
{
	marshaled.___useClipping_0 = static_cast<int32_t>(unmarshaled.___useClipping_0);
	marshaled.___zSpacing_1 = unmarshaled.___zSpacing_1;
	marshaled.___pmaVertexColors_2 = static_cast<int32_t>(unmarshaled.___pmaVertexColors_2);
	marshaled.___tintBlack_3 = static_cast<int32_t>(unmarshaled.___tintBlack_3);
	marshaled.___canvasGroupTintBlack_4 = static_cast<int32_t>(unmarshaled.___canvasGroupTintBlack_4);
	marshaled.___calculateTangents_5 = static_cast<int32_t>(unmarshaled.___calculateTangents_5);
	marshaled.___addNormals_6 = static_cast<int32_t>(unmarshaled.___addNormals_6);
	marshaled.___immutableTriangles_7 = static_cast<int32_t>(unmarshaled.___immutableTriangles_7);
}
IL2CPP_EXTERN_C void Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8_marshal_com_back(const Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8_marshaled_com& marshaled, Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8& unmarshaled)
{
	bool unmarshaleduseClipping_temp_0 = false;
	unmarshaleduseClipping_temp_0 = static_cast<bool>(marshaled.___useClipping_0);
	unmarshaled.___useClipping_0 = unmarshaleduseClipping_temp_0;
	float unmarshaledzSpacing_temp_1 = 0.0f;
	unmarshaledzSpacing_temp_1 = marshaled.___zSpacing_1;
	unmarshaled.___zSpacing_1 = unmarshaledzSpacing_temp_1;
	bool unmarshaledpmaVertexColors_temp_2 = false;
	unmarshaledpmaVertexColors_temp_2 = static_cast<bool>(marshaled.___pmaVertexColors_2);
	unmarshaled.___pmaVertexColors_2 = unmarshaledpmaVertexColors_temp_2;
	bool unmarshaledtintBlack_temp_3 = false;
	unmarshaledtintBlack_temp_3 = static_cast<bool>(marshaled.___tintBlack_3);
	unmarshaled.___tintBlack_3 = unmarshaledtintBlack_temp_3;
	bool unmarshaledcanvasGroupTintBlack_temp_4 = false;
	unmarshaledcanvasGroupTintBlack_temp_4 = static_cast<bool>(marshaled.___canvasGroupTintBlack_4);
	unmarshaled.___canvasGroupTintBlack_4 = unmarshaledcanvasGroupTintBlack_temp_4;
	bool unmarshaledcalculateTangents_temp_5 = false;
	unmarshaledcalculateTangents_temp_5 = static_cast<bool>(marshaled.___calculateTangents_5);
	unmarshaled.___calculateTangents_5 = unmarshaledcalculateTangents_temp_5;
	bool unmarshaledaddNormals_temp_6 = false;
	unmarshaledaddNormals_temp_6 = static_cast<bool>(marshaled.___addNormals_6);
	unmarshaled.___addNormals_6 = unmarshaledaddNormals_temp_6;
	bool unmarshaledimmutableTriangles_temp_7 = false;
	unmarshaledimmutableTriangles_temp_7 = static_cast<bool>(marshaled.___immutableTriangles_7);
	unmarshaled.___immutableTriangles_7 = unmarshaledimmutableTriangles_temp_7;
}
// Conversion method for clean up from marshalling of: Spine.Unity.MeshGenerator/Settings
IL2CPP_EXTERN_C void Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8_marshal_com_cleanup(Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8_marshaled_com& marshaled)
{
}
// Spine.Unity.MeshGenerator/Settings Spine.Unity.MeshGenerator/Settings::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8 Settings_get_Default_mD52608CE9151D1422C8FC025B9E8A14A51453C30 (const RuntimeMethod* method) 
{
	Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Settings {
		//     pmaVertexColors = true,
		//     zSpacing = 0f,
		//     useClipping = true,
		//     tintBlack = false,
		//     calculateTangents = false,
		//     //renderMeshes = true,
		//     addNormals = false,
		//     immutableTriangles = false
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8));
		(&V_0)->___pmaVertexColors_2 = (bool)1;
		(&V_0)->___zSpacing_1 = (0.0f);
		(&V_0)->___useClipping_0 = (bool)1;
		(&V_0)->___tintBlack_3 = (bool)0;
		(&V_0)->___calculateTangents_5 = (bool)0;
		(&V_0)->___addNormals_6 = (bool)0;
		(&V_0)->___immutableTriangles_7 = (bool)0;
		Settings_t22C6DEF1F8E3EC7ECC9C4EBF9B8F098E2450CDA8 L_0 = V_0;
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
// System.Void Spine.Unity.MeshRendererBuffers::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshRendererBuffers_Initialize_m01B14513F960CFC46133117430F92BF1349050B4 (MeshRendererBuffers_tB9308AD2A53E8B70963EF29DBF88716A6BBE567B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleBuffered_1_GetNext_m021F8DF0224986ABE20915759168223703E0872F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleBuffered_1__ctor_m91D4D03775EDB7AEAC31CE5D837A882823D88D62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Clear_m9E58AA2DEFF9D76D6943AEAF5ED871131591B686_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (doubleBufferedMesh != null) {
		DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE* L_0 = __this->___doubleBufferedMesh_0;
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		// doubleBufferedMesh.GetNext().Clear();
		DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE* L_1 = __this->___doubleBufferedMesh_0;
		NullCheck(L_1);
		SmartMesh_tF3C34CB0726F6D0EE815F734E62B5B2761A41C0F* L_2;
		L_2 = DoubleBuffered_1_GetNext_m021F8DF0224986ABE20915759168223703E0872F(L_1, DoubleBuffered_1_GetNext_m021F8DF0224986ABE20915759168223703E0872F_RuntimeMethod_var);
		NullCheck(L_2);
		SmartMesh_Clear_mF0B15F03596DBFF918B609B25C1990024786427D(L_2, NULL);
		// doubleBufferedMesh.GetNext().Clear();
		DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE* L_3 = __this->___doubleBufferedMesh_0;
		NullCheck(L_3);
		SmartMesh_tF3C34CB0726F6D0EE815F734E62B5B2761A41C0F* L_4;
		L_4 = DoubleBuffered_1_GetNext_m021F8DF0224986ABE20915759168223703E0872F(L_3, DoubleBuffered_1_GetNext_m021F8DF0224986ABE20915759168223703E0872F_RuntimeMethod_var);
		NullCheck(L_4);
		SmartMesh_Clear_mF0B15F03596DBFF918B609B25C1990024786427D(L_4, NULL);
		// submeshMaterials.Clear();
		ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A* L_5 = __this->___submeshMaterials_1;
		NullCheck(L_5);
		ExposedList_1_Clear_m9E58AA2DEFF9D76D6943AEAF5ED871131591B686(L_5, (bool)1, ExposedList_1_Clear_m9E58AA2DEFF9D76D6943AEAF5ED871131591B686_RuntimeMethod_var);
		return;
	}

IL_0035:
	{
		// doubleBufferedMesh = new DoubleBuffered<SmartMesh>();
		DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE* L_6 = (DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE*)il2cpp_codegen_object_new(DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		DoubleBuffered_1__ctor_m91D4D03775EDB7AEAC31CE5D837A882823D88D62(L_6, DoubleBuffered_1__ctor_m91D4D03775EDB7AEAC31CE5D837A882823D88D62_RuntimeMethod_var);
		__this->___doubleBufferedMesh_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___doubleBufferedMesh_0), (void*)L_6);
		// }
		return;
	}
}
// UnityEngine.Material[] Spine.Unity.MeshRendererBuffers::GetUpdatedSharedMaterialsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* MeshRendererBuffers_GetUpdatedSharedMaterialsArray_m5AD3D20E3F2DDEEDC837151B6326678793E20CB0 (MeshRendererBuffers_tB9308AD2A53E8B70963EF29DBF88716A6BBE567B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_CopyTo_mB48811CB67BD864E8BC21D14189528A4094A0EC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_ToArray_m235F1CEA733C0A696AB8F0FC69EE50E4BE5EED46_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (submeshMaterials.Count == sharedMaterials.Length)
		ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A* L_0 = __this->___submeshMaterials_1;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Count_1;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_2 = __this->___sharedMaterials_2;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0028;
		}
	}
	{
		// submeshMaterials.CopyTo(sharedMaterials);
		ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A* L_3 = __this->___submeshMaterials_1;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_4 = __this->___sharedMaterials_2;
		NullCheck(L_3);
		ExposedList_1_CopyTo_mB48811CB67BD864E8BC21D14189528A4094A0EC1(L_3, L_4, ExposedList_1_CopyTo_mB48811CB67BD864E8BC21D14189528A4094A0EC1_RuntimeMethod_var);
		goto IL_0039;
	}

IL_0028:
	{
		// sharedMaterials = submeshMaterials.ToArray();
		ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A* L_5 = __this->___submeshMaterials_1;
		NullCheck(L_5);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_6;
		L_6 = ExposedList_1_ToArray_m235F1CEA733C0A696AB8F0FC69EE50E4BE5EED46(L_5, ExposedList_1_ToArray_m235F1CEA733C0A696AB8F0FC69EE50E4BE5EED46_RuntimeMethod_var);
		__this->___sharedMaterials_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sharedMaterials_2), (void*)L_6);
	}

IL_0039:
	{
		// return sharedMaterials;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_7 = __this->___sharedMaterials_2;
		return L_7;
	}
}
// System.Boolean Spine.Unity.MeshRendererBuffers::MaterialsChangedInLastUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshRendererBuffers_MaterialsChangedInLastUpdate_m1C3241D223DB72E303FC02E341C96FDC4BBDB2CD (MeshRendererBuffers_tB9308AD2A53E8B70963EF29DBF88716A6BBE567B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_1 = NULL;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// int newSubmeshMaterials = submeshMaterials.Count;
		ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A* L_0 = __this->___submeshMaterials_1;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Count_1;
		V_0 = L_1;
		// var sharedMaterials = this.sharedMaterials;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_2 = __this->___sharedMaterials_2;
		V_1 = L_2;
		// if (newSubmeshMaterials != sharedMaterials.Length) return true;
		int32_t L_3 = V_0;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_4 = V_1;
		NullCheck(L_4);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// if (newSubmeshMaterials != sharedMaterials.Length) return true;
		return (bool)1;
	}

IL_001b:
	{
		// var submeshMaterialsItems = submeshMaterials.Items;
		ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A* L_5 = __this->___submeshMaterials_1;
		NullCheck(L_5);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_6 = L_5->___Items_0;
		V_2 = L_6;
		// for (int i = 0; i < newSubmeshMaterials; i++)
		V_3 = 0;
		goto IL_0039;
	}

IL_002b:
	{
		// if (!Material.ReferenceEquals(submeshMaterialsItems[i], sharedMaterials[i])) return true; //if (submeshMaterialsItems[i].GetInstanceID() != sharedMaterials[i].GetInstanceID()) return true;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_11 = V_1;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((((RuntimeObject*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_10) == ((RuntimeObject*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_14)))
		{
			goto IL_0035;
		}
	}
	{
		// if (!Material.ReferenceEquals(submeshMaterialsItems[i], sharedMaterials[i])) return true; //if (submeshMaterialsItems[i].GetInstanceID() != sharedMaterials[i].GetInstanceID()) return true;
		return (bool)1;
	}

IL_0035:
	{
		// for (int i = 0; i < newSubmeshMaterials; i++)
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0039:
	{
		// for (int i = 0; i < newSubmeshMaterials; i++)
		int32_t L_16 = V_3;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_002b;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Spine.Unity.MeshRendererBuffers::UpdateSharedMaterials(Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshRendererBuffers_UpdateSharedMaterials_m92F197A81FA25FDFFDAF838F607977E8C1444DAE (MeshRendererBuffers_tB9308AD2A53E8B70963EF29DBF88716A6BBE567B* __this, ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* ___instructions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m79C251DDDBE015E6DB85FE487F8748D4613BCC7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_1 = NULL;
	SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// int newSize = instructions.Count;
		ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* L_0 = ___instructions0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Count_1;
		V_0 = L_1;
		// if (newSize > submeshMaterials.Items.Length)
		int32_t L_2 = V_0;
		ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A* L_3 = __this->___submeshMaterials_1;
		NullCheck(L_3);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_4 = L_3->___Items_0;
		NullCheck(L_4);
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_0028;
		}
	}
	{
		// Array.Resize(ref submeshMaterials.Items, newSize);
		ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A* L_5 = __this->___submeshMaterials_1;
		NullCheck(L_5);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D** L_6 = (&L_5->___Items_0);
		int32_t L_7 = V_0;
		Array_Resize_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m79C251DDDBE015E6DB85FE487F8748D4613BCC7C(L_6, L_7, Array_Resize_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m79C251DDDBE015E6DB85FE487F8748D4613BCC7C_RuntimeMethod_var);
	}

IL_0028:
	{
		// submeshMaterials.Count = newSize;
		ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A* L_8 = __this->___submeshMaterials_1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		L_8->___Count_1 = L_9;
		// var submeshMaterialsItems = submeshMaterials.Items;
		ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A* L_10 = __this->___submeshMaterials_1;
		NullCheck(L_10);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_11 = L_10->___Items_0;
		V_1 = L_11;
		// var instructionsItems = instructions.Items;
		ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* L_12 = ___instructions0;
		NullCheck(L_12);
		SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* L_13 = L_12->___Items_0;
		V_2 = L_13;
		// for (int i = 0; i < newSize; i++)
		V_3 = 0;
		goto IL_005e;
	}

IL_004b:
	{
		// submeshMaterialsItems[i] = instructionsItems[i].material;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_14 = V_1;
		int32_t L_15 = V_3;
		SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* L_16 = V_2;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___material_3;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_18);
		// for (int i = 0; i < newSize; i++)
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005e:
	{
		// for (int i = 0; i < newSize; i++)
		int32_t L_20 = V_3;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_004b;
		}
	}
	{
		// }
		return;
	}
}
// Spine.Unity.MeshRendererBuffers/SmartMesh Spine.Unity.MeshRendererBuffers::GetNextMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SmartMesh_tF3C34CB0726F6D0EE815F734E62B5B2761A41C0F* MeshRendererBuffers_GetNextMesh_m6C09D2A2AA9A61BC597A0324A311EDD8036D70EF (MeshRendererBuffers_tB9308AD2A53E8B70963EF29DBF88716A6BBE567B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleBuffered_1_GetNext_m021F8DF0224986ABE20915759168223703E0872F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return doubleBufferedMesh.GetNext();
		DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE* L_0 = __this->___doubleBufferedMesh_0;
		NullCheck(L_0);
		SmartMesh_tF3C34CB0726F6D0EE815F734E62B5B2761A41C0F* L_1;
		L_1 = DoubleBuffered_1_GetNext_m021F8DF0224986ABE20915759168223703E0872F(L_0, DoubleBuffered_1_GetNext_m021F8DF0224986ABE20915759168223703E0872F_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Spine.Unity.MeshRendererBuffers::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshRendererBuffers_Clear_m457DDA0AAD7D830CD59A84184D8E919E935059CE (MeshRendererBuffers_tB9308AD2A53E8B70963EF29DBF88716A6BBE567B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Clear_m9E58AA2DEFF9D76D6943AEAF5ED871131591B686_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sharedMaterials = new Material[0];
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_0 = (MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)SZArrayNew(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___sharedMaterials_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sharedMaterials_2), (void*)L_0);
		// submeshMaterials.Clear();
		ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A* L_1 = __this->___submeshMaterials_1;
		NullCheck(L_1);
		ExposedList_1_Clear_m9E58AA2DEFF9D76D6943AEAF5ED871131591B686(L_1, (bool)1, ExposedList_1_Clear_m9E58AA2DEFF9D76D6943AEAF5ED871131591B686_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Spine.Unity.MeshRendererBuffers::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshRendererBuffers_Dispose_m5D7200D1A5D94BC07CB871CCBB0606EF03F5474C (MeshRendererBuffers_tB9308AD2A53E8B70963EF29DBF88716A6BBE567B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleBuffered_1_GetNext_m021F8DF0224986ABE20915759168223703E0872F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (doubleBufferedMesh == null) return;
		DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE* L_0 = __this->___doubleBufferedMesh_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (doubleBufferedMesh == null) return;
		return;
	}

IL_0009:
	{
		// doubleBufferedMesh.GetNext().Dispose();
		DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE* L_1 = __this->___doubleBufferedMesh_0;
		NullCheck(L_1);
		SmartMesh_tF3C34CB0726F6D0EE815F734E62B5B2761A41C0F* L_2;
		L_2 = DoubleBuffered_1_GetNext_m021F8DF0224986ABE20915759168223703E0872F(L_1, DoubleBuffered_1_GetNext_m021F8DF0224986ABE20915759168223703E0872F_RuntimeMethod_var);
		NullCheck(L_2);
		SmartMesh_Dispose_m19FAA7A516A38CAF693B020952E9BF5C28FEF218(L_2, NULL);
		// doubleBufferedMesh.GetNext().Dispose();
		DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE* L_3 = __this->___doubleBufferedMesh_0;
		NullCheck(L_3);
		SmartMesh_tF3C34CB0726F6D0EE815F734E62B5B2761A41C0F* L_4;
		L_4 = DoubleBuffered_1_GetNext_m021F8DF0224986ABE20915759168223703E0872F(L_3, DoubleBuffered_1_GetNext_m021F8DF0224986ABE20915759168223703E0872F_RuntimeMethod_var);
		NullCheck(L_4);
		SmartMesh_Dispose_m19FAA7A516A38CAF693B020952E9BF5C28FEF218(L_4, NULL);
		// doubleBufferedMesh = null;
		__this->___doubleBufferedMesh_0 = (DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___doubleBufferedMesh_0), (void*)(DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE*)NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.MeshRendererBuffers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshRendererBuffers__ctor_m20FAD2BC3CDC28EC9986FC119C8AD8B6065D4A55 (MeshRendererBuffers_tB9308AD2A53E8B70963EF29DBF88716A6BBE567B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1__ctor_mC55FFE62238A86DA9DB8FA1DACD4CA15FD898D9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal readonly ExposedList<Material> submeshMaterials = new ExposedList<Material>();
		ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A* L_0 = (ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A*)il2cpp_codegen_object_new(ExposedList_1_t144DB68172A4CA1A83B51E9784514C2795B5B97A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExposedList_1__ctor_mC55FFE62238A86DA9DB8FA1DACD4CA15FD898D9D(L_0, ExposedList_1__ctor_mC55FFE62238A86DA9DB8FA1DACD4CA15FD898D9D_RuntimeMethod_var);
		__this->___submeshMaterials_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___submeshMaterials_1), (void*)L_0);
		// internal Material[] sharedMaterials = new Material[0];
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1 = (MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)SZArrayNew(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___sharedMaterials_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sharedMaterials_2), (void*)L_1);
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
// System.Void Spine.Unity.MeshRendererBuffers/SmartMesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartMesh_Clear_mF0B15F03596DBFF918B609B25C1990024786427D (SmartMesh_tF3C34CB0726F6D0EE815F734E62B5B2761A41C0F* __this, const RuntimeMethod* method) 
{
	{
		// mesh.Clear();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___mesh_0;
		NullCheck(L_0);
		Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0(L_0, NULL);
		// instructionUsed.Clear();
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_1 = __this->___instructionUsed_1;
		NullCheck(L_1);
		SkeletonRendererInstruction_Clear_m87BDEAEBF1F2EC70EA52E57B5B97221956E3CA0D(L_1, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.MeshRendererBuffers/SmartMesh::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartMesh_Dispose_m19FAA7A516A38CAF693B020952E9BF5C28FEF218 (SmartMesh_tF3C34CB0726F6D0EE815F734E62B5B2761A41C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mesh != null) {
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___mesh_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// UnityEngine.Object.Destroy(mesh);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = __this->___mesh_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0019:
	{
		// mesh = null;
		__this->___mesh_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_0), (void*)(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.MeshRendererBuffers/SmartMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartMesh__ctor_mB55C25A9E88E131DC4902E49EE4E3F4E4F9364E4 (SmartMesh_tF3C34CB0726F6D0EE815F734E62B5B2761A41C0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Mesh mesh = SpineMesh.NewSkeletonMesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0;
		L_0 = SpineMesh_NewSkeletonMesh_mA21D1CE3A2DE89AE218ADE6629852435816F461C(NULL);
		__this->___mesh_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_0), (void*)L_0);
		// public SkeletonRendererInstruction instructionUsed = new SkeletonRendererInstruction();
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_1 = (SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163*)il2cpp_codegen_object_new(SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SkeletonRendererInstruction__ctor_m0B7A5C8C28EAFC7F306B00ED655C39B36E41DA9B(L_1, NULL);
		__this->___instructionUsed_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instructionUsed_1), (void*)L_1);
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
// System.Void Spine.Unity.SkeletonRendererInstruction::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonRendererInstruction_Clear_m87BDEAEBF1F2EC70EA52E57B5B97221956E3CA0D (SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Clear_mA7EA6D93B5A7EAE2FBF026DE784A5C18E9FB12B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Clear_mDB22BF4336D3B22DB00092FBF831F0890A30E64D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.attachments.Clear(false);
		ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* L_0 = __this->___attachments_4;
		NullCheck(L_0);
		ExposedList_1_Clear_mDB22BF4336D3B22DB00092FBF831F0890A30E64D(L_0, (bool)0, ExposedList_1_Clear_mDB22BF4336D3B22DB00092FBF831F0890A30E64D_RuntimeMethod_var);
		// rawVertexCount = -1;
		__this->___rawVertexCount_3 = (-1);
		// hasActiveClipping = false;
		__this->___hasActiveClipping_2 = (bool)0;
		// this.submeshInstructions.Clear(false);
		ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* L_1 = __this->___submeshInstructions_0;
		NullCheck(L_1);
		ExposedList_1_Clear_mA7EA6D93B5A7EAE2FBF026DE784A5C18E9FB12B7(L_1, (bool)0, ExposedList_1_Clear_mA7EA6D93B5A7EAE2FBF026DE784A5C18E9FB12B7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Spine.Unity.SkeletonRendererInstruction::SetWithSubset(Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonRendererInstruction_SetWithSubset_m847239C40370D0C0D35B216D60B73EA966F81AE8 (SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* __this, ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* ___instructions0, int32_t ___startSubmesh1, int32_t ___endSubmesh2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Clear_mA7EA6D93B5A7EAE2FBF026DE784A5C18E9FB12B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Clear_mDB22BF4336D3B22DB00092FBF831F0890A30E64D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Resize_m7B7CB6A1AD1CDAEF2CF786219459BA9EDBF763BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Resize_mF793DB207DAEBCBD5A9E8D6AAB3BCCFA7E90C2B2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* V_2 = NULL;
	SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44* V_6 = NULL;
	SlotU5BU5D_tCAD0CBE62BC9C1E9DE3167456039B5ABD5C02D38* V_7 = NULL;
	int32_t V_8 = 0;
	SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* V_11 = NULL;
	{
		// int runningVertexCount = 0;
		V_0 = 0;
		// var submeshes = this.submeshInstructions;
		ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* L_0 = __this->___submeshInstructions_0;
		// submeshes.Clear(false);
		ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* L_1 = L_0;
		NullCheck(L_1);
		ExposedList_1_Clear_mA7EA6D93B5A7EAE2FBF026DE784A5C18E9FB12B7(L_1, (bool)0, ExposedList_1_Clear_mA7EA6D93B5A7EAE2FBF026DE784A5C18E9FB12B7_RuntimeMethod_var);
		// int submeshCount = endSubmesh - startSubmesh;
		int32_t L_2 = ___endSubmesh2;
		int32_t L_3 = ___startSubmesh1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		// submeshes.Resize(submeshCount);
		ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* L_4 = L_1;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* L_6;
		L_6 = ExposedList_1_Resize_mF793DB207DAEBCBD5A9E8D6AAB3BCCFA7E90C2B2(L_4, L_5, ExposedList_1_Resize_mF793DB207DAEBCBD5A9E8D6AAB3BCCFA7E90C2B2_RuntimeMethod_var);
		// var submeshesItems = submeshes.Items;
		NullCheck(L_4);
		SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* L_7 = L_4->___Items_0;
		V_2 = L_7;
		// var instructionsItems = instructions.Items;
		ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* L_8 = ___instructions0;
		NullCheck(L_8);
		SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* L_9 = L_8->___Items_0;
		V_3 = L_9;
		// for (int i = 0; i < submeshCount; i++) {
		V_8 = 0;
		goto IL_0075;
	}

IL_002d:
	{
		// var instruction = instructionsItems[startSubmesh + i];
		SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* L_10 = V_3;
		int32_t L_11 = ___startSubmesh1;
		int32_t L_12 = V_8;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_9 = L_14;
		// submeshesItems[i] = instruction;
		SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* L_15 = V_2;
		int32_t L_16 = V_8;
		SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF L_17 = V_9;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF)L_17);
		// this.hasActiveClipping |= instruction.hasClipping;
		bool L_18 = __this->___hasActiveClipping_2;
		SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF L_19 = V_9;
		bool L_20 = L_19.___hasClipping_9;
		__this->___hasActiveClipping_2 = (bool)((int32_t)((int32_t)L_18|(int32_t)L_20));
		// submeshesItems[i].rawFirstVertexIndex = runningVertexCount; // Ensure current instructions have correct cached values.
		SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* L_21 = V_2;
		int32_t L_22 = V_8;
		NullCheck(L_21);
		int32_t L_23 = V_0;
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___rawFirstVertexIndex_8 = L_23;
		// runningVertexCount += instruction.rawVertexCount; // vertexCount will also be used for the rest of this method.
		int32_t L_24 = V_0;
		SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF L_25 = V_9;
		int32_t L_26 = L_25.___rawVertexCount_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, L_26));
		// for (int i = 0; i < submeshCount; i++) {
		int32_t L_27 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0075:
	{
		// for (int i = 0; i < submeshCount; i++) {
		int32_t L_28 = V_8;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_002d;
		}
	}
	{
		// this.rawVertexCount = runningVertexCount;
		int32_t L_30 = V_0;
		__this->___rawVertexCount_3 = L_30;
		// int startSlot = instructionsItems[startSubmesh].startSlot;
		SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* L_31 = V_3;
		int32_t L_32 = ___startSubmesh1;
		NullCheck(L_31);
		int32_t L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___startSlot_1;
		V_4 = L_33;
		// int endSlot = instructionsItems[endSubmesh - 1].endSlot;
		SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* L_34 = V_3;
		int32_t L_35 = ___endSubmesh2;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_35, 1)))))->___endSlot_2;
		// attachments.Clear(false);
		ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* L_37 = __this->___attachments_4;
		NullCheck(L_37);
		ExposedList_1_Clear_mDB22BF4336D3B22DB00092FBF831F0890A30E64D(L_37, (bool)0, ExposedList_1_Clear_mDB22BF4336D3B22DB00092FBF831F0890A30E64D_RuntimeMethod_var);
		// int attachmentCount = endSlot - startSlot;
		int32_t L_38 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_36, L_38));
		// attachments.Resize(attachmentCount);
		ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* L_39 = __this->___attachments_4;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* L_41;
		L_41 = ExposedList_1_Resize_m7B7CB6A1AD1CDAEF2CF786219459BA9EDBF763BC(L_39, L_40, ExposedList_1_Resize_m7B7CB6A1AD1CDAEF2CF786219459BA9EDBF763BC_RuntimeMethod_var);
		// var attachmentsItems = attachments.Items;
		ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* L_42 = __this->___attachments_4;
		NullCheck(L_42);
		AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44* L_43 = L_42->___Items_0;
		V_6 = L_43;
		// var drawOrderItems = instructionsItems[0].skeleton.DrawOrder.Items;
		SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* L_44 = V_3;
		NullCheck(L_44);
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_45 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___skeleton_0;
		NullCheck(L_45);
		ExposedList_1_t832DB618999898C4507FEDF55884721C3E514B2C* L_46;
		L_46 = Skeleton_get_DrawOrder_mA89640FCE8F1F998F81846A80DBB6A41EB7BC2A2_inline(L_45, NULL);
		NullCheck(L_46);
		SlotU5BU5D_tCAD0CBE62BC9C1E9DE3167456039B5ABD5C02D38* L_47 = L_46->___Items_0;
		V_7 = L_47;
		// for (int i = 0; i < attachmentCount; i++) {
		V_10 = 0;
		goto IL_0110;
	}

IL_00e6:
	{
		// Slot slot = drawOrderItems[startSlot + i];
		SlotU5BU5D_tCAD0CBE62BC9C1E9DE3167456039B5ABD5C02D38* L_48 = V_7;
		int32_t L_49 = V_4;
		int32_t L_50 = V_10;
		NullCheck(L_48);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add(L_49, L_50));
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_52 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_11 = L_52;
		// if (!slot.Bone.Active) continue;
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_53 = V_11;
		NullCheck(L_53);
		Bone_tC5BB616A04722279E675558888991F720C090467* L_54;
		L_54 = Slot_get_Bone_mFEF8A1FFFB05952323119E4EFB990971EDA9F282_inline(L_53, NULL);
		NullCheck(L_54);
		bool L_55;
		L_55 = Bone_get_Active_mC7A9C59029247A090AFCBD4CA28E8F5CDFAFF4FB_inline(L_54, NULL);
		if (!L_55)
		{
			goto IL_010a;
		}
	}
	{
		// attachmentsItems[i] = slot.Attachment;
		AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44* L_56 = V_6;
		int32_t L_57 = V_10;
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_58 = V_11;
		NullCheck(L_58);
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_59;
		L_59 = Slot_get_Attachment_mB2A78D5EFCC62623B18457E8B38E6A6DB402F4C2_inline(L_58, NULL);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_59);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75*)L_59);
	}

IL_010a:
	{
		// for (int i = 0; i < attachmentCount; i++) {
		int32_t L_60 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_0110:
	{
		// for (int i = 0; i < attachmentCount; i++) {
		int32_t L_61 = V_10;
		int32_t L_62 = V_5;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_00e6;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Spine.Unity.SkeletonRendererInstruction::Set(Spine.Unity.SkeletonRendererInstruction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonRendererInstruction_Set_m44D0C70ECB1B4228B14EA2D05C2837FE9BAAFB86 (SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* __this, SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Clear_mA7EA6D93B5A7EAE2FBF026DE784A5C18E9FB12B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Clear_mDB22BF4336D3B22DB00092FBF831F0890A30E64D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_CopyTo_m4121C10AF81B9CF92CB26C31A3FB4FB895232C63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_CopyTo_mD52F6AA97DCACA06F00BE3704031938ACA66C48A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_EnsureCapacity_m6757D668EB9435835549CBEEC28D7CD0EDA6B648_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_EnsureCapacity_mC8E2441A52BAF350EC81F2CBADD1ED0801444817_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_get_Capacity_m5C66AC41CCC1342C0CA7D4C7F2BC7AF6674081A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_get_Capacity_m82E7BCDEC69EC5B67946C27CFFA633BB242C77B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.immutableTriangles = other.immutableTriangles;
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1 = L_0->___immutableTriangles_1;
		__this->___immutableTriangles_1 = L_1;
		// this.hasActiveClipping = other.hasActiveClipping;
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_2 = ___other0;
		NullCheck(L_2);
		bool L_3 = L_2->___hasActiveClipping_2;
		__this->___hasActiveClipping_2 = L_3;
		// this.rawVertexCount = other.rawVertexCount;
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_4 = ___other0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___rawVertexCount_3;
		__this->___rawVertexCount_3 = L_5;
		// this.attachments.Clear(false);
		ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* L_6 = __this->___attachments_4;
		NullCheck(L_6);
		ExposedList_1_Clear_mDB22BF4336D3B22DB00092FBF831F0890A30E64D(L_6, (bool)0, ExposedList_1_Clear_mDB22BF4336D3B22DB00092FBF831F0890A30E64D_RuntimeMethod_var);
		// this.attachments.EnsureCapacity(other.attachments.Capacity);
		ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* L_7 = __this->___attachments_4;
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_8 = ___other0;
		NullCheck(L_8);
		ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* L_9 = L_8->___attachments_4;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = ExposedList_1_get_Capacity_m5C66AC41CCC1342C0CA7D4C7F2BC7AF6674081A4(L_9, ExposedList_1_get_Capacity_m5C66AC41CCC1342C0CA7D4C7F2BC7AF6674081A4_RuntimeMethod_var);
		NullCheck(L_7);
		ExposedList_1_EnsureCapacity_m6757D668EB9435835549CBEEC28D7CD0EDA6B648(L_7, L_10, ExposedList_1_EnsureCapacity_m6757D668EB9435835549CBEEC28D7CD0EDA6B648_RuntimeMethod_var);
		// this.attachments.Count = other.attachments.Count;
		ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* L_11 = __this->___attachments_4;
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_12 = ___other0;
		NullCheck(L_12);
		ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* L_13 = L_12->___attachments_4;
		NullCheck(L_13);
		int32_t L_14 = L_13->___Count_1;
		NullCheck(L_11);
		L_11->___Count_1 = L_14;
		// other.attachments.CopyTo(this.attachments.Items);
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_15 = ___other0;
		NullCheck(L_15);
		ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* L_16 = L_15->___attachments_4;
		ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* L_17 = __this->___attachments_4;
		NullCheck(L_17);
		AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44* L_18 = L_17->___Items_0;
		NullCheck(L_16);
		ExposedList_1_CopyTo_mD52F6AA97DCACA06F00BE3704031938ACA66C48A(L_16, L_18, ExposedList_1_CopyTo_mD52F6AA97DCACA06F00BE3704031938ACA66C48A_RuntimeMethod_var);
		// this.submeshInstructions.Clear(false);
		ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* L_19 = __this->___submeshInstructions_0;
		NullCheck(L_19);
		ExposedList_1_Clear_mA7EA6D93B5A7EAE2FBF026DE784A5C18E9FB12B7(L_19, (bool)0, ExposedList_1_Clear_mA7EA6D93B5A7EAE2FBF026DE784A5C18E9FB12B7_RuntimeMethod_var);
		// this.submeshInstructions.EnsureCapacity(other.submeshInstructions.Capacity);
		ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* L_20 = __this->___submeshInstructions_0;
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_21 = ___other0;
		NullCheck(L_21);
		ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* L_22 = L_21->___submeshInstructions_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = ExposedList_1_get_Capacity_m82E7BCDEC69EC5B67946C27CFFA633BB242C77B7(L_22, ExposedList_1_get_Capacity_m82E7BCDEC69EC5B67946C27CFFA633BB242C77B7_RuntimeMethod_var);
		NullCheck(L_20);
		ExposedList_1_EnsureCapacity_mC8E2441A52BAF350EC81F2CBADD1ED0801444817(L_20, L_23, ExposedList_1_EnsureCapacity_mC8E2441A52BAF350EC81F2CBADD1ED0801444817_RuntimeMethod_var);
		// this.submeshInstructions.Count = other.submeshInstructions.Count;
		ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* L_24 = __this->___submeshInstructions_0;
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_25 = ___other0;
		NullCheck(L_25);
		ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* L_26 = L_25->___submeshInstructions_0;
		NullCheck(L_26);
		int32_t L_27 = L_26->___Count_1;
		NullCheck(L_24);
		L_24->___Count_1 = L_27;
		// other.submeshInstructions.CopyTo(this.submeshInstructions.Items);
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_28 = ___other0;
		NullCheck(L_28);
		ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* L_29 = L_28->___submeshInstructions_0;
		ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* L_30 = __this->___submeshInstructions_0;
		NullCheck(L_30);
		SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* L_31 = L_30->___Items_0;
		NullCheck(L_29);
		ExposedList_1_CopyTo_m4121C10AF81B9CF92CB26C31A3FB4FB895232C63(L_29, L_31, ExposedList_1_CopyTo_m4121C10AF81B9CF92CB26C31A3FB4FB895232C63_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Spine.Unity.SkeletonRendererInstruction::GeometryNotEqual(Spine.Unity.SkeletonRendererInstruction,Spine.Unity.SkeletonRendererInstruction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkeletonRendererInstruction_GeometryNotEqual_m1E691D6DF05C6BE5A3A9D7FEDF6F9D5B29595FAE (SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* ___a0, SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* V_2 = NULL;
	SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* V_3 = NULL;
	AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44* V_4 = NULL;
	AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF V_8;
	memset((&V_8), 0, sizeof(V_8));
	SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// if (a.hasActiveClipping || b.hasActiveClipping) return true; // Triangles are unpredictable when clipping is active.
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_0 = ___a0;
		NullCheck(L_0);
		bool L_1 = L_0->___hasActiveClipping_2;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_2 = ___b1;
		NullCheck(L_2);
		bool L_3 = L_2->___hasActiveClipping_2;
		if (!L_3)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		// if (a.hasActiveClipping || b.hasActiveClipping) return true; // Triangles are unpredictable when clipping is active.
		return (bool)1;
	}

IL_0012:
	{
		// if (a.rawVertexCount != b.rawVertexCount) return true;
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_4 = ___a0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___rawVertexCount_3;
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_6 = ___b1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___rawVertexCount_3;
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0022;
		}
	}
	{
		// if (a.rawVertexCount != b.rawVertexCount) return true;
		return (bool)1;
	}

IL_0022:
	{
		// if (a.immutableTriangles != b.immutableTriangles) return true;
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_8 = ___a0;
		NullCheck(L_8);
		bool L_9 = L_8->___immutableTriangles_1;
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_10 = ___b1;
		NullCheck(L_10);
		bool L_11 = L_10->___immutableTriangles_1;
		if ((((int32_t)L_9) == ((int32_t)L_11)))
		{
			goto IL_0032;
		}
	}
	{
		// if (a.immutableTriangles != b.immutableTriangles) return true;
		return (bool)1;
	}

IL_0032:
	{
		// int attachmentCountB = b.attachments.Count;
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_12 = ___b1;
		NullCheck(L_12);
		ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* L_13 = L_12->___attachments_4;
		NullCheck(L_13);
		int32_t L_14 = L_13->___Count_1;
		V_0 = L_14;
		// if (a.attachments.Count != attachmentCountB) return true; // Bounds check for the looped storedAttachments count below.
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_15 = ___a0;
		NullCheck(L_15);
		ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* L_16 = L_15->___attachments_4;
		NullCheck(L_16);
		int32_t L_17 = L_16->___Count_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) == ((int32_t)L_18)))
		{
			goto IL_004e;
		}
	}
	{
		// if (a.attachments.Count != attachmentCountB) return true; // Bounds check for the looped storedAttachments count below.
		return (bool)1;
	}

IL_004e:
	{
		// int submeshCountA = a.submeshInstructions.Count;
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_19 = ___a0;
		NullCheck(L_19);
		ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* L_20 = L_19->___submeshInstructions_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->___Count_1;
		// int submeshCountB = b.submeshInstructions.Count;
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_22 = ___b1;
		NullCheck(L_22);
		ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* L_23 = L_22->___submeshInstructions_0;
		NullCheck(L_23);
		int32_t L_24 = L_23->___Count_1;
		V_1 = L_24;
		// if (submeshCountA != submeshCountB) return true;
		int32_t L_25 = V_1;
		if ((((int32_t)L_21) == ((int32_t)L_25)))
		{
			goto IL_006a;
		}
	}
	{
		// if (submeshCountA != submeshCountB) return true;
		return (bool)1;
	}

IL_006a:
	{
		// var submeshInstructionsItemsA = a.submeshInstructions.Items;
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_26 = ___a0;
		NullCheck(L_26);
		ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* L_27 = L_26->___submeshInstructions_0;
		NullCheck(L_27);
		SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* L_28 = L_27->___Items_0;
		V_2 = L_28;
		// var submeshInstructionsItemsB = b.submeshInstructions.Items;
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_29 = ___b1;
		NullCheck(L_29);
		ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* L_30 = L_29->___submeshInstructions_0;
		NullCheck(L_30);
		SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* L_31 = L_30->___Items_0;
		V_3 = L_31;
		// var attachmentsA = a.attachments.Items;
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_32 = ___a0;
		NullCheck(L_32);
		ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* L_33 = L_32->___attachments_4;
		NullCheck(L_33);
		AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44* L_34 = L_33->___Items_0;
		V_4 = L_34;
		// var attachmentsB = b.attachments.Items;
		SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* L_35 = ___b1;
		NullCheck(L_35);
		ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* L_36 = L_35->___attachments_4;
		NullCheck(L_36);
		AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44* L_37 = L_36->___Items_0;
		V_5 = L_37;
		// for (int i = 0; i < attachmentCountB; i++)
		V_6 = 0;
		goto IL_00b5;
	}

IL_00a1:
	{
		// if (!System.Object.ReferenceEquals(attachmentsA[i], attachmentsB[i])) return true;
		AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44* L_38 = V_4;
		int32_t L_39 = V_6;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44* L_42 = V_5;
		int32_t L_43 = V_6;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if ((((RuntimeObject*)(Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75*)L_41) == ((RuntimeObject*)(Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75*)L_45)))
		{
			goto IL_00af;
		}
	}
	{
		// if (!System.Object.ReferenceEquals(attachmentsA[i], attachmentsB[i])) return true;
		return (bool)1;
	}

IL_00af:
	{
		// for (int i = 0; i < attachmentCountB; i++)
		int32_t L_46 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00b5:
	{
		// for (int i = 0; i < attachmentCountB; i++)
		int32_t L_47 = V_6;
		int32_t L_48 = V_0;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00a1;
		}
	}
	{
		// for (int i = 0; i < submeshCountB; i++) {
		V_7 = 0;
		goto IL_012b;
	}

IL_00bf:
	{
		// var submeshA = submeshInstructionsItemsA[i];
		SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* L_49 = V_2;
		int32_t L_50 = V_7;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_8 = L_52;
		// var submeshB = submeshInstructionsItemsB[i];
		SubmeshInstructionU5BU5D_t9FF64FD169A3AC0FACB3959CC597761E586FFF73* L_53 = V_3;
		int32_t L_54 = V_7;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_9 = L_56;
		// if (!(
		//     submeshA.rawVertexCount == submeshB.rawVertexCount &&
		//     submeshA.startSlot == submeshB.startSlot &&
		//     submeshA.endSlot == submeshB.endSlot
		//     && submeshA.rawTriangleCount == submeshB.rawTriangleCount &&
		//     submeshA.rawFirstVertexIndex == submeshB.rawFirstVertexIndex
		// ))
		SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF L_57 = V_8;
		int32_t L_58 = L_57.___rawVertexCount_7;
		SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF L_59 = V_9;
		int32_t L_60 = L_59.___rawVertexCount_7;
		if ((!(((uint32_t)L_58) == ((uint32_t)L_60))))
		{
			goto IL_0123;
		}
	}
	{
		SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF L_61 = V_8;
		int32_t L_62 = L_61.___startSlot_1;
		SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF L_63 = V_9;
		int32_t L_64 = L_63.___startSlot_1;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_64))))
		{
			goto IL_0123;
		}
	}
	{
		SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF L_65 = V_8;
		int32_t L_66 = L_65.___endSlot_2;
		SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF L_67 = V_9;
		int32_t L_68 = L_67.___endSlot_2;
		if ((!(((uint32_t)L_66) == ((uint32_t)L_68))))
		{
			goto IL_0123;
		}
	}
	{
		SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF L_69 = V_8;
		int32_t L_70 = L_69.___rawTriangleCount_6;
		SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF L_71 = V_9;
		int32_t L_72 = L_71.___rawTriangleCount_6;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_72))))
		{
			goto IL_0123;
		}
	}
	{
		SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF L_73 = V_8;
		int32_t L_74 = L_73.___rawFirstVertexIndex_8;
		SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF L_75 = V_9;
		int32_t L_76 = L_75.___rawFirstVertexIndex_8;
		if ((((int32_t)L_74) == ((int32_t)L_76)))
		{
			goto IL_0125;
		}
	}

IL_0123:
	{
		// return true;
		return (bool)1;
	}

IL_0125:
	{
		// for (int i = 0; i < submeshCountB; i++) {
		int32_t L_77 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_012b:
	{
		// for (int i = 0; i < submeshCountB; i++) {
		int32_t L_78 = V_7;
		int32_t L_79 = V_1;
		if ((((int32_t)L_78) < ((int32_t)L_79)))
		{
			goto IL_00bf;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Spine.Unity.SkeletonRendererInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonRendererInstruction__ctor_m0B7A5C8C28EAFC7F306B00ED655C39B36E41DA9B (SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1__ctor_m2A26BACD6CCA3FB6ED717FD68A155DCF8419F4E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1__ctor_m6D8241E2A7EE8FD6FA287006ACE295088C176442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly ExposedList<SubmeshInstruction> submeshInstructions = new ExposedList<SubmeshInstruction>();
		ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7* L_0 = (ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7*)il2cpp_codegen_object_new(ExposedList_1_t2402BC75E08430029FC7A87C9C9ADE973106AAB7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExposedList_1__ctor_m6D8241E2A7EE8FD6FA287006ACE295088C176442(L_0, ExposedList_1__ctor_m6D8241E2A7EE8FD6FA287006ACE295088C176442_RuntimeMethod_var);
		__this->___submeshInstructions_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___submeshInstructions_0), (void*)L_0);
		// public int rawVertexCount = -1;
		__this->___rawVertexCount_3 = (-1);
		// public readonly ExposedList<Attachment> attachments = new ExposedList<Attachment>();
		ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715* L_1 = (ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715*)il2cpp_codegen_object_new(ExposedList_1_tDF0C03909A09BB268AB36EAA3311582B32B26715_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ExposedList_1__ctor_m2A26BACD6CCA3FB6ED717FD68A155DCF8419F4E4(L_1, ExposedList_1__ctor_m2A26BACD6CCA3FB6ED717FD68A155DCF8419F4E4_RuntimeMethod_var);
		__this->___attachments_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attachments_4), (void*)L_1);
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
// UnityEngine.Mesh Spine.Unity.SpineMesh::NewSkeletonMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* SpineMesh_NewSkeletonMesh_mA21D1CE3A2DE89AE218ADE6629852435816F461C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0200A3D62DBD4EEC29E302E91D4F42257A4A32D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var m = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		// m.MarkDynamic();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = L_0;
		NullCheck(L_1);
		Mesh_MarkDynamic_m718089940F240AFE625D6DC9DA4E6F20229CC322(L_1, NULL);
		// m.name = "Skeleton Mesh";
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = L_1;
		NullCheck(L_2);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_2, _stringLiteralE0200A3D62DBD4EEC29E302E91D4F42257A4A32D, NULL);
		// m.hideFlags = SpineMesh.MeshHideflags;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3 = L_2;
		NullCheck(L_3);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_3, ((int32_t)20), NULL);
		// return m;
		return L_3;
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
// Conversion methods for marshalling of: Spine.Unity.SubmeshInstruction
IL2CPP_EXTERN_C void SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF_marshal_pinvoke(const SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF& unmarshaled, SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF_marshaled_pinvoke& marshaled)
{
	Exception_t* ___skeleton_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'skeleton' of type 'SubmeshInstruction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___skeleton_0Exception, NULL);
}
IL2CPP_EXTERN_C void SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF_marshal_pinvoke_back(const SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF_marshaled_pinvoke& marshaled, SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF& unmarshaled)
{
	Exception_t* ___skeleton_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'skeleton' of type 'SubmeshInstruction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___skeleton_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.SubmeshInstruction
IL2CPP_EXTERN_C void SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF_marshal_pinvoke_cleanup(SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.Unity.SubmeshInstruction
IL2CPP_EXTERN_C void SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF_marshal_com(const SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF& unmarshaled, SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF_marshaled_com& marshaled)
{
	Exception_t* ___skeleton_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'skeleton' of type 'SubmeshInstruction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___skeleton_0Exception, NULL);
}
IL2CPP_EXTERN_C void SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF_marshal_com_back(const SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF_marshaled_com& marshaled, SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF& unmarshaled)
{
	Exception_t* ___skeleton_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'skeleton' of type 'SubmeshInstruction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___skeleton_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.SubmeshInstruction
IL2CPP_EXTERN_C void SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF_marshal_com_cleanup(SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF_marshaled_com& marshaled)
{
}
// System.String Spine.Unity.SubmeshInstruction::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SubmeshInstruction_ToString_mBFFBA2B1BEAAD111F4BA9EFD8EAC44C5CACBE2DC (SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03C5634B8F65994CCACD97E4ECE267946A72A543);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF94AA613862F53AAD0F034DAF760AFDD9509B693);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	{
		// return
		//     string.Format("[SubmeshInstruction: slots {0} to {1}. (Material){2}. preActiveClippingSlotSource:{3}]",
		//         startSlot,
		//         endSlot - 1,
		//         material == null ? "<none>" : material.name,
		//         preActiveClippingSlotSource
		//     );
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int32_t L_2 = __this->___startSlot_1;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		int32_t L_6 = __this->___endSlot_2;
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___material_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = 2;
		G_B1_1 = L_9;
		G_B1_2 = L_9;
		G_B1_3 = _stringLiteral03C5634B8F65994CCACD97E4ECE267946A72A543;
		if (L_11)
		{
			G_B2_0 = 2;
			G_B2_1 = L_9;
			G_B2_2 = L_9;
			G_B2_3 = _stringLiteral03C5634B8F65994CCACD97E4ECE267946A72A543;
			goto IL_0046;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___material_3;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_12, NULL);
		G_B3_0 = L_13;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_004b;
	}

IL_0046:
	{
		G_B3_0 = _stringLiteralF94AA613862F53AAD0F034DAF760AFDD9509B693;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_004b:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = G_B3_3;
		int32_t L_15 = __this->___preActiveClippingSlotSource_5;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_17);
		String_t* L_18;
		L_18 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(G_B3_4, L_14, NULL);
		return L_18;
	}
}
IL2CPP_EXTERN_C  String_t* SubmeshInstruction_ToString_mBFFBA2B1BEAAD111F4BA9EFD8EAC44C5CACBE2DC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubmeshInstruction_t68BF4E59D915916B83DBECF9DBB712EA91F33ABF*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SubmeshInstruction_ToString_mBFFBA2B1BEAAD111F4BA9EFD8EAC44C5CACBE2DC(_thisAdjusted, method);
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
// System.Void Spine.Unity.BlendModeMaterialsAsset::Apply(Spine.SkeletonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlendModeMaterialsAsset_Apply_m05C80B9EA91FA22481FBCD02076DE01EBFFA97AC (BlendModeMaterialsAsset_t236FD164717645876A06AF2BFFFBB6B5F2C2ADDF* __this, SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* ___skeletonData0, const RuntimeMethod* method) 
{
	{
		// ApplyMaterials(skeletonData, multiplyMaterialTemplate, screenMaterialTemplate, additiveMaterialTemplate, applyAdditiveMaterial);
		SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* L_0 = ___skeletonData0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___multiplyMaterialTemplate_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___screenMaterialTemplate_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___additiveMaterialTemplate_6;
		bool L_4 = __this->___applyAdditiveMaterial_7;
		BlendModeMaterialsAsset_ApplyMaterials_m1255529EC294BBCFBA7768DE0FAB224701477447(L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.BlendModeMaterialsAsset::ApplyMaterials(Spine.SkeletonData,UnityEngine.Material,UnityEngine.Material,UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlendModeMaterialsAsset_ApplyMaterials_m1255529EC294BBCFBA7768DE0FAB224701477447 (SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* ___skeletonData0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___multiplyTemplate1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___screenTemplate2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___additiveTemplate3, bool ___includeAdditiveSlots4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasMaterialCache_t7C7BD0D4CFED0D295486EB411B6ADA1E2D02D087_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m297E3F012818CCE473EB4E9DEE446BDA2F413C7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCCB8B376031074252021919A593F714962047141_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE69E8D93F4DDCBBA32A98ECDDC6DA9A3E074C91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFFBA4AA4ACE28C3E2410D74A82FBA3DE79085D6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6C0B2624258072CB19F551437D538D2BB9A088D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9A37B19BA42D6E19192E95945BBAD25374DB948F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_GetEnumerator_m37DC439D0C295B68E5C616F1C1E13547915EF426_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHasTextureRegion_t09747EC8E989DCE7EDEA8D4B5CCEBCC02FE056AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mADFF237C1F7E1FB019D2B99FC14B85246AAB208C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7DD716A4A1F58B4B28F3294F2988CA93A3400243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m725DC1F120E8A4D3A152C7084FA3377605C54112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AtlasMaterialCache_t7C7BD0D4CFED0D295486EB411B6ADA1E2D02D087* V_0 = NULL;
	List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B* V_1 = NULL;
	SlotDataU5BU5D_tB79EB968566AA52F1F04E2309870F288ECEB5669* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* V_5 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_6 = NULL;
	Enumerator_t8638B5370C02395750703CE470E1F97E5E12EC80 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Enumerator_t92EFC5F176EEDD1F17DA1F228A48D02841FBA834 V_9;
	memset((&V_9), 0, sizeof(V_9));
	SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	{
		// if (skeletonData == null) throw new ArgumentNullException("skeletonData");
		SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* L_0 = ___skeletonData0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (skeletonData == null) throw new ArgumentNullException("skeletonData");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF9B83FE34D51DAEDBE1ACFD6F998529AC476333)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BlendModeMaterialsAsset_ApplyMaterials_m1255529EC294BBCFBA7768DE0FAB224701477447_RuntimeMethod_var)));
	}

IL_000e:
	{
		// using (var materialCache = new AtlasMaterialCache()) {
		AtlasMaterialCache_t7C7BD0D4CFED0D295486EB411B6ADA1E2D02D087* L_2 = (AtlasMaterialCache_t7C7BD0D4CFED0D295486EB411B6ADA1E2D02D087*)il2cpp_codegen_object_new(AtlasMaterialCache_t7C7BD0D4CFED0D295486EB411B6ADA1E2D02D087_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AtlasMaterialCache__ctor_mCB4F64D8DE441FA5340BD95E16B17DC1C77B9DD8(L_2, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0139:
			{// begin finally (depth: 1)
				{
					AtlasMaterialCache_t7C7BD0D4CFED0D295486EB411B6ADA1E2D02D087* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0142;
					}
				}
				{
					AtlasMaterialCache_t7C7BD0D4CFED0D295486EB411B6ADA1E2D02D087* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0142:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// var entryBuffer = new List<Skin.SkinEntry>();
				List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B* L_5 = (List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B*)il2cpp_codegen_object_new(List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				List_1__ctor_m725DC1F120E8A4D3A152C7084FA3377605C54112(L_5, List_1__ctor_m725DC1F120E8A4D3A152C7084FA3377605C54112_RuntimeMethod_var);
				V_1 = L_5;
				// var slotsItems = skeletonData.Slots.Items;
				SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* L_6 = ___skeletonData0;
				NullCheck(L_6);
				ExposedList_1_t91DB309B7AA43B52841EC0CF8EBADD1D9D73DCA3* L_7;
				L_7 = SkeletonData_get_Slots_mBB921012ED44C94B160D5D0CFFA96B09552438B6_inline(L_6, NULL);
				NullCheck(L_7);
				SlotDataU5BU5D_tB79EB968566AA52F1F04E2309870F288ECEB5669* L_8 = L_7->___Items_0;
				V_2 = L_8;
				// for (int slotIndex = 0, slotCount = skeletonData.Slots.Count; slotIndex < slotCount; slotIndex++) {
				V_3 = 0;
				// for (int slotIndex = 0, slotCount = skeletonData.Slots.Count; slotIndex < slotCount; slotIndex++) {
				SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* L_9 = ___skeletonData0;
				NullCheck(L_9);
				ExposedList_1_t91DB309B7AA43B52841EC0CF8EBADD1D9D73DCA3* L_10;
				L_10 = SkeletonData_get_Slots_mBB921012ED44C94B160D5D0CFFA96B09552438B6_inline(L_9, NULL);
				NullCheck(L_10);
				int32_t L_11 = L_10->___Count_1;
				V_4 = L_11;
				goto IL_012f_1;
			}

IL_003a_1:
			{
				// var slot = slotsItems[slotIndex];
				SlotDataU5BU5D_tB79EB968566AA52F1F04E2309870F288ECEB5669* L_12 = V_2;
				int32_t L_13 = V_3;
				NullCheck(L_12);
				int32_t L_14 = L_13;
				SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
				V_5 = L_15;
				// if (slot.BlendMode == BlendMode.Normal) continue;
				SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* L_16 = V_5;
				NullCheck(L_16);
				int32_t L_17;
				L_17 = SlotData_get_BlendMode_mD941BFBAC4358DADF593F4981D9F3C488E4FDC40_inline(L_16, NULL);
				if (!L_17)
				{
					goto IL_012b_1;
				}
			}
			{
				// if (!includeAdditiveSlots && slot.BlendMode == BlendMode.Additive) continue;
				bool L_18 = ___includeAdditiveSlots4;
				if (L_18)
				{
					goto IL_005c_1;
				}
			}
			{
				SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* L_19 = V_5;
				NullCheck(L_19);
				int32_t L_20;
				L_20 = SlotData_get_BlendMode_mD941BFBAC4358DADF593F4981D9F3C488E4FDC40_inline(L_19, NULL);
				if ((((int32_t)L_20) == ((int32_t)1)))
				{
					goto IL_012b_1;
				}
			}

IL_005c_1:
			{
				// entryBuffer.Clear();
				List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B* L_21 = V_1;
				NullCheck(L_21);
				List_1_Clear_mADFF237C1F7E1FB019D2B99FC14B85246AAB208C_inline(L_21, List_1_Clear_mADFF237C1F7E1FB019D2B99FC14B85246AAB208C_RuntimeMethod_var);
				// foreach (var skin in skeletonData.Skins)
				SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* L_22 = ___skeletonData0;
				NullCheck(L_22);
				ExposedList_1_t6FF735095BAC811A2AD50E52AE368F9A5D48B59D* L_23;
				L_23 = SkeletonData_get_Skins_m7235DD9B8582ED5DAEA63989EC71077D6848CD5A_inline(L_22, NULL);
				NullCheck(L_23);
				Enumerator_t8638B5370C02395750703CE470E1F97E5E12EC80 L_24;
				L_24 = ExposedList_1_GetEnumerator_m37DC439D0C295B68E5C616F1C1E13547915EF426(L_23, ExposedList_1_GetEnumerator_m37DC439D0C295B68E5C616F1C1E13547915EF426_RuntimeMethod_var);
				V_7 = L_24;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_008a_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mCCB8B376031074252021919A593F714962047141((&V_7), Enumerator_Dispose_mCCB8B376031074252021919A593F714962047141_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_007f_2;
					}

IL_0071_2:
					{
						// foreach (var skin in skeletonData.Skins)
						Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* L_25;
						L_25 = Enumerator_get_Current_m9A37B19BA42D6E19192E95945BBAD25374DB948F_inline((&V_7), Enumerator_get_Current_m9A37B19BA42D6E19192E95945BBAD25374DB948F_RuntimeMethod_var);
						// skin.GetAttachments(slotIndex, entryBuffer);
						int32_t L_26 = V_3;
						List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B* L_27 = V_1;
						NullCheck(L_25);
						Skin_GetAttachments_mB10549E9C547F062130E6F188E6CC72BBF424F31(L_25, L_26, L_27, NULL);
					}

IL_007f_2:
					{
						// foreach (var skin in skeletonData.Skins)
						bool L_28;
						L_28 = Enumerator_MoveNext_mFFBA4AA4ACE28C3E2410D74A82FBA3DE79085D6F((&V_7), Enumerator_MoveNext_mFFBA4AA4ACE28C3E2410D74A82FBA3DE79085D6F_RuntimeMethod_var);
						if (L_28)
						{
							goto IL_0071_2;
						}
					}
					{
						goto IL_0098_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0098_1:
			{
				// Material templateMaterial = null;
				V_6 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
				// switch (slot.BlendMode) {
				SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* L_29 = V_5;
				NullCheck(L_29);
				int32_t L_30;
				L_30 = SlotData_get_BlendMode_mD941BFBAC4358DADF593F4981D9F3C488E4FDC40_inline(L_29, NULL);
				V_8 = L_30;
				int32_t L_31 = V_8;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_31, 1)))
				{
					case 0:
					{
						goto IL_00c5_1;
					}
					case 1:
					{
						goto IL_00bb_1;
					}
					case 2:
					{
						goto IL_00c0_1;
					}
				}
			}
			{
				goto IL_00c8_1;
			}

IL_00bb_1:
			{
				// templateMaterial = multiplyTemplate;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = ___multiplyTemplate1;
				V_6 = L_32;
				// break;
				goto IL_00c8_1;
			}

IL_00c0_1:
			{
				// templateMaterial = screenTemplate;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33 = ___screenTemplate2;
				V_6 = L_33;
				// break;
				goto IL_00c8_1;
			}

IL_00c5_1:
			{
				// templateMaterial = additiveTemplate;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34 = ___additiveTemplate3;
				V_6 = L_34;
			}

IL_00c8_1:
			{
				// if (templateMaterial == null) continue;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = V_6;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_36;
				L_36 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_36)
				{
					goto IL_012b_1;
				}
			}
			{
				// foreach (var entry in entryBuffer) {
				List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B* L_37 = V_1;
				NullCheck(L_37);
				Enumerator_t92EFC5F176EEDD1F17DA1F228A48D02841FBA834 L_38;
				L_38 = List_1_GetEnumerator_m7DD716A4A1F58B4B28F3294F2988CA93A3400243(L_37, List_1_GetEnumerator_m7DD716A4A1F58B4B28F3294F2988CA93A3400243_RuntimeMethod_var);
				V_9 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_011d_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m297E3F012818CCE473EB4E9DEE446BDA2F413C7A((&V_9), Enumerator_Dispose_m297E3F012818CCE473EB4E9DEE446BDA2F413C7A_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0112_2;
					}

IL_00dc_2:
					{
						// foreach (var entry in entryBuffer) {
						SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F L_39;
						L_39 = Enumerator_get_Current_m6C0B2624258072CB19F551437D538D2BB9A088D7_inline((&V_9), Enumerator_get_Current_m6C0B2624258072CB19F551437D538D2BB9A088D7_RuntimeMethod_var);
						V_10 = L_39;
						// var renderableAttachment = entry.Attachment as IHasTextureRegion;
						Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_40;
						L_40 = SkinEntry_get_Attachment_mD3F3972C2C175630ABA63A7806AEED63CE8A665C_inline((&V_10), NULL);
						V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_40, IHasTextureRegion_t09747EC8E989DCE7EDEA8D4B5CCEBCC02FE056AB_il2cpp_TypeInfo_var));
						// if (renderableAttachment != null) {
						RuntimeObject* L_41 = V_11;
						if (!L_41)
						{
							goto IL_0112_2;
						}
					}
					{
						// renderableAttachment.Region = materialCache.CloneAtlasRegionWithMaterial(
						//     (AtlasRegion)renderableAttachment.Region, templateMaterial);
						RuntimeObject* L_42 = V_11;
						AtlasMaterialCache_t7C7BD0D4CFED0D295486EB411B6ADA1E2D02D087* L_43 = V_0;
						RuntimeObject* L_44 = V_11;
						NullCheck(L_44);
						TextureRegion_t3AEDB0F0A86A1729EF73677E1D9415ABA2BEC236* L_45;
						L_45 = InterfaceFuncInvoker0< TextureRegion_t3AEDB0F0A86A1729EF73677E1D9415ABA2BEC236* >::Invoke(0 /* Spine.TextureRegion Spine.IHasTextureRegion::get_Region() */, IHasTextureRegion_t09747EC8E989DCE7EDEA8D4B5CCEBCC02FE056AB_il2cpp_TypeInfo_var, L_44);
						Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_46 = V_6;
						NullCheck(L_43);
						AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_47;
						L_47 = AtlasMaterialCache_CloneAtlasRegionWithMaterial_m8138F1CDB9657D231B95BB0670DC68F87D15A48A(L_43, ((AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0*)CastclassClass((RuntimeObject*)L_45, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0_il2cpp_TypeInfo_var)), L_46, NULL);
						NullCheck(L_42);
						InterfaceActionInvoker1< TextureRegion_t3AEDB0F0A86A1729EF73677E1D9415ABA2BEC236* >::Invoke(1 /* System.Void Spine.IHasTextureRegion::set_Region(Spine.TextureRegion) */, IHasTextureRegion_t09747EC8E989DCE7EDEA8D4B5CCEBCC02FE056AB_il2cpp_TypeInfo_var, L_42, L_47);
					}

IL_0112_2:
					{
						// foreach (var entry in entryBuffer) {
						bool L_48;
						L_48 = Enumerator_MoveNext_mE69E8D93F4DDCBBA32A98ECDDC6DA9A3E074C91E((&V_9), Enumerator_MoveNext_mE69E8D93F4DDCBBA32A98ECDDC6DA9A3E074C91E_RuntimeMethod_var);
						if (L_48)
						{
							goto IL_00dc_2;
						}
					}
					{
						goto IL_012b_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_012b_1:
			{
				// for (int slotIndex = 0, slotCount = skeletonData.Slots.Count; slotIndex < slotCount; slotIndex++) {
				int32_t L_49 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
			}

IL_012f_1:
			{
				// for (int slotIndex = 0, slotCount = skeletonData.Slots.Count; slotIndex < slotCount; slotIndex++) {
				int32_t L_50 = V_3;
				int32_t L_51 = V_4;
				if ((((int32_t)L_50) < ((int32_t)L_51)))
				{
					goto IL_003a_1;
				}
			}
			{
				// }
				goto IL_0143;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0143:
	{
		// }
		return;
	}
}
// System.Void Spine.Unity.BlendModeMaterialsAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlendModeMaterialsAsset__ctor_m0FFC1F833064F3EC11291A77E68A9F1A10A31C9C (BlendModeMaterialsAsset_t236FD164717645876A06AF2BFFFBB6B5F2C2ADDF* __this, const RuntimeMethod* method) 
{
	{
		// public bool applyAdditiveMaterial = true;
		__this->___applyAdditiveMaterial_7 = (bool)1;
		SkeletonDataModifierAsset__ctor_m3EB73D8F20FC34AC99FE95B0A26E9F80D398CBC7(__this, NULL);
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
// Spine.AtlasRegion Spine.Unity.BlendModeMaterialsAsset/AtlasMaterialCache::CloneAtlasRegionWithMaterial(Spine.AtlasRegion,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasMaterialCache_CloneAtlasRegionWithMaterial_m8138F1CDB9657D231B95BB0670DC68F87D15A48A (AtlasMaterialCache_t7C7BD0D4CFED0D295486EB411B6ADA1E2D02D087* __this, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___originalRegion0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___materialTemplate1, const RuntimeMethod* method) 
{
	{
		// var newRegion = originalRegion.Clone();
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_0 = ___originalRegion0;
		NullCheck(L_0);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_1;
		L_1 = AtlasRegion_Clone_m0824EC37D5A380263650C4D4347FB07962A4B39F(L_0, NULL);
		// newRegion.page = GetAtlasPageWithMaterial(originalRegion.page, materialTemplate);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_2 = L_1;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_3 = ___originalRegion0;
		NullCheck(L_3);
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_4 = L_3->___page_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___materialTemplate1;
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_6;
		L_6 = AtlasMaterialCache_GetAtlasPageWithMaterial_m0C4CA3B2166BB5C1FFE3805EDB42371D6CF3D92F(__this, L_4, L_5, NULL);
		NullCheck(L_2);
		L_2->___page_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___page_6), (void*)L_6);
		// return newRegion;
		return L_2;
	}
}
// Spine.AtlasPage Spine.Unity.BlendModeMaterialsAsset/AtlasMaterialCache::GetAtlasPageWithMaterial(Spine.AtlasPage,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* AtlasMaterialCache_GetAtlasPageWithMaterial_m0C4CA3B2166BB5C1FFE3805EDB42371D6CF3D92F (AtlasMaterialCache_t7C7BD0D4CFED0D295486EB411B6ADA1E2D02D087* __this, AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* ___originalPage0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___materialTemplate1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE0CC5198FE11FA15516C58A432C1F61E43739097_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m23A6F33916B3337C3ABC33885D9AB26D899A562C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m0800DDBDA1464DDB4CAC78267B1573D39F192CC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* V_0 = NULL;
	KeyValuePair_2_t9BED0DE0EF6762C05B91AC6F48651328A35D90A3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_2 = NULL;
	{
		// if (originalPage == null) throw new ArgumentNullException("originalPage");
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_0 = ___originalPage0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (originalPage == null) throw new ArgumentNullException("originalPage");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD3A83471C956A268FD1CAD03F99B66B7BBA10B97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AtlasMaterialCache_GetAtlasPageWithMaterial_m0C4CA3B2166BB5C1FFE3805EDB42371D6CF3D92F_RuntimeMethod_var)));
	}

IL_000e:
	{
		// AtlasPage newPage = null;
		V_0 = (AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7*)NULL;
		// var key = new KeyValuePair<AtlasPage, Material>(originalPage, materialTemplate);
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_2 = ___originalPage0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___materialTemplate1;
		KeyValuePair_2__ctor_m0800DDBDA1464DDB4CAC78267B1573D39F192CC0((&V_1), L_2, L_3, KeyValuePair_2__ctor_m0800DDBDA1464DDB4CAC78267B1573D39F192CC0_RuntimeMethod_var);
		// cache.TryGetValue(key, out newPage);
		Dictionary_2_tF47E37D6EAEC4A90ACB9613098F0D271ADAB6C0B* L_4 = __this->___cache_0;
		KeyValuePair_2_t9BED0DE0EF6762C05B91AC6F48651328A35D90A3 L_5 = V_1;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_m23A6F33916B3337C3ABC33885D9AB26D899A562C(L_4, L_5, (&V_0), Dictionary_2_TryGetValue_m23A6F33916B3337C3ABC33885D9AB26D899A562C_RuntimeMethod_var);
		// if (newPage == null) {
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_7 = V_0;
		if (L_7)
		{
			goto IL_007f;
		}
	}
	{
		// newPage = originalPage.Clone();
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_8 = ___originalPage0;
		NullCheck(L_8);
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_9;
		L_9 = AtlasPage_Clone_mE9BE56C843CBB0102D17B2DC04628A8BFF3E1F4D(L_8, NULL);
		V_0 = L_9;
		// var originalMaterial = originalPage.rendererObject as Material;
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_10 = ___originalPage0;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___rendererObject_9;
		V_2 = ((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)IsInstClass((RuntimeObject*)L_11, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var));
		// newPage.rendererObject = new Material(materialTemplate) {
		//     name = originalMaterial.name + " " + materialTemplate.name,
		//     mainTexture = originalMaterial.mainTexture
		// };
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_12 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = ___materialTemplate1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_14, L_13, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = L_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = V_2;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_16, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = ___materialTemplate1;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_18, NULL);
		String_t* L_20;
		L_20 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_17, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_19, NULL);
		NullCheck(L_15);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_15, L_20, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = L_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = V_2;
		NullCheck(L_22);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_23;
		L_23 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_22, NULL);
		NullCheck(L_21);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_21, L_23, NULL);
		NullCheck(L_12);
		L_12->___rendererObject_9 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___rendererObject_9), (void*)L_21);
		// cache.Add(key, newPage);
		Dictionary_2_tF47E37D6EAEC4A90ACB9613098F0D271ADAB6C0B* L_24 = __this->___cache_0;
		KeyValuePair_2_t9BED0DE0EF6762C05B91AC6F48651328A35D90A3 L_25 = V_1;
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_26 = V_0;
		NullCheck(L_24);
		Dictionary_2_Add_mE0CC5198FE11FA15516C58A432C1F61E43739097(L_24, L_25, L_26, Dictionary_2_Add_mE0CC5198FE11FA15516C58A432C1F61E43739097_RuntimeMethod_var);
	}

IL_007f:
	{
		// return newPage;
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_27 = V_0;
		return L_27;
	}
}
// System.Void Spine.Unity.BlendModeMaterialsAsset/AtlasMaterialCache::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasMaterialCache_Dispose_mD7215680A1BC3446045C50925CF3F9AF167FF387 (AtlasMaterialCache_t7C7BD0D4CFED0D295486EB411B6ADA1E2D02D087* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mF0BFF6B1DCBBADDD4ED2878133F16229457638BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cache.Clear();
		Dictionary_2_tF47E37D6EAEC4A90ACB9613098F0D271ADAB6C0B* L_0 = __this->___cache_0;
		NullCheck(L_0);
		Dictionary_2_Clear_mF0BFF6B1DCBBADDD4ED2878133F16229457638BB(L_0, Dictionary_2_Clear_mF0BFF6B1DCBBADDD4ED2878133F16229457638BB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Spine.Unity.BlendModeMaterialsAsset/AtlasMaterialCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasMaterialCache__ctor_mCB4F64D8DE441FA5340BD95E16B17DC1C77B9DD8 (AtlasMaterialCache_t7C7BD0D4CFED0D295486EB411B6ADA1E2D02D087* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0B5FD755F4BD8F1CE0FF9F431B05716A95A43297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF47E37D6EAEC4A90ACB9613098F0D271ADAB6C0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly Dictionary<KeyValuePair<AtlasPage, Material>, AtlasPage> cache = new Dictionary<KeyValuePair<AtlasPage, Material>, AtlasPage>();
		Dictionary_2_tF47E37D6EAEC4A90ACB9613098F0D271ADAB6C0B* L_0 = (Dictionary_2_tF47E37D6EAEC4A90ACB9613098F0D271ADAB6C0B*)il2cpp_codegen_object_new(Dictionary_2_tF47E37D6EAEC4A90ACB9613098F0D271ADAB6C0B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m0B5FD755F4BD8F1CE0FF9F431B05716A95A43297(L_0, Dictionary_2__ctor_m0B5FD755F4BD8F1CE0FF9F431B05716A95A43297_RuntimeMethod_var);
		__this->___cache_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cache_0), (void*)L_0);
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
// System.Void Spine.Unity.SkeletonExtensions::SetColor(Spine.Skeleton,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonExtensions_SetColor_m1EF8E56F3CBFF9DED2CBB82C12A4ACBC2BD8416D (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* ___skeleton0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) 
{
	{
		// skeleton.A = color.a;
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_0 = ___skeleton0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___color1;
		float L_2 = L_1.___a_3;
		NullCheck(L_0);
		Skeleton_set_A_mD9FC576C115D119B76ECA978FC14A1D4D4191E24_inline(L_0, L_2, NULL);
		// skeleton.R = color.r;
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_3 = ___skeleton0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___color1;
		float L_5 = L_4.___r_0;
		NullCheck(L_3);
		Skeleton_set_R_m914D7E1F23A31D100D167DF2DC5513825C441BC7_inline(L_3, L_5, NULL);
		// skeleton.G = color.g;
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_6 = ___skeleton0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___color1;
		float L_8 = L_7.___g_1;
		NullCheck(L_6);
		Skeleton_set_G_m64EACF26B14B2B242648482ACE9CCE063A0117AE_inline(L_6, L_8, NULL);
		// skeleton.B = color.b;
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_9 = ___skeleton0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___color1;
		float L_11 = L_10.___b_2;
		NullCheck(L_9);
		Skeleton_set_B_m06359B96A97EEC04CA6104AF4F8A2CB1D3E85302_inline(L_9, L_11, NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion Spine.Unity.SkeletonExtensions::GetQuaternion(Spine.Bone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SkeletonExtensions_GetQuaternion_mAFFF752102BE2EC37FAD96DF64CDB567F158D00F (Bone_tC5BB616A04722279E675558888991F720C090467* ___bone0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var halfRotation = Mathf.Atan2(bone.C, bone.A) * 0.5f;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_0 = ___bone0;
		NullCheck(L_0);
		float L_1;
		L_1 = Bone_get_C_mB12EA1ED732F4098FEEBBF1333776F5B8A6D353F_inline(L_0, NULL);
		Bone_tC5BB616A04722279E675558888991F720C090467* L_2 = ___bone0;
		NullCheck(L_2);
		float L_3;
		L_3 = Bone_get_A_mD9933DFFB2BE82B9B6AA452F2301464E7BB0F9EA_inline(L_2, NULL);
		float L_4;
		L_4 = atan2f(L_1, L_3);
		V_0 = ((float)il2cpp_codegen_multiply(L_4, (0.5f)));
		// return new Quaternion(0, 0, Mathf.Sin(halfRotation), Mathf.Cos(halfRotation));
		float L_5 = V_0;
		float L_6;
		L_6 = sinf(L_5);
		float L_7 = V_0;
		float L_8;
		L_8 = cosf(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_9), (0.0f), (0.0f), L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void Spine.Unity.SkeletonExtensions::GetWorldToLocalMatrix(Spine.Bone,System.Single&,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonExtensions_GetWorldToLocalMatrix_mD26AFE2F558336C668B4024913FCF27DE9F05C10 (Bone_tC5BB616A04722279E675558888991F720C090467* ___bone0, float* ___ia1, float* ___ib2, float* ___ic3, float* ___id4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// float a = bone.A, b = bone.B, c = bone.C, d = bone.D;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_0 = ___bone0;
		NullCheck(L_0);
		float L_1;
		L_1 = Bone_get_A_mD9933DFFB2BE82B9B6AA452F2301464E7BB0F9EA_inline(L_0, NULL);
		V_0 = L_1;
		// float a = bone.A, b = bone.B, c = bone.C, d = bone.D;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_2 = ___bone0;
		NullCheck(L_2);
		float L_3;
		L_3 = Bone_get_B_m152872772FD282B96B00D119D28753129DA33AA1_inline(L_2, NULL);
		V_1 = L_3;
		// float a = bone.A, b = bone.B, c = bone.C, d = bone.D;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_4 = ___bone0;
		NullCheck(L_4);
		float L_5;
		L_5 = Bone_get_C_mB12EA1ED732F4098FEEBBF1333776F5B8A6D353F_inline(L_4, NULL);
		V_2 = L_5;
		// float a = bone.A, b = bone.B, c = bone.C, d = bone.D;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_6 = ___bone0;
		NullCheck(L_6);
		float L_7;
		L_7 = Bone_get_D_m1D033C2256BB965C9E2BEB1072435B07CD633B7F_inline(L_6, NULL);
		V_3 = L_7;
		// float invDet = 1 / (a * d - b * c);
		float L_8 = V_0;
		float L_9 = V_3;
		float L_10 = V_1;
		float L_11 = V_2;
		V_4 = ((float)((1.0f)/((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		// ia = invDet * d;
		float* L_12 = ___ia1;
		float L_13 = V_4;
		float L_14 = V_3;
		*((float*)L_12) = (float)((float)il2cpp_codegen_multiply(L_13, L_14));
		// ib = invDet * -b;
		float* L_15 = ___ib2;
		float L_16 = V_4;
		float L_17 = V_1;
		*((float*)L_15) = (float)((float)il2cpp_codegen_multiply(L_16, ((-L_17))));
		// ic = invDet * -c;
		float* L_18 = ___ic3;
		float L_19 = V_4;
		float L_20 = V_2;
		*((float*)L_18) = (float)((float)il2cpp_codegen_multiply(L_19, ((-L_20))));
		// id = invDet * a;
		float* L_21 = ___id4;
		float L_22 = V_4;
		float L_23 = V_0;
		*((float*)L_21) = (float)((float)il2cpp_codegen_multiply(L_22, L_23));
		// }
		return;
	}
}
// UnityEngine.Vector2[] Spine.Unity.SkeletonExtensions::GetLocalVertices(Spine.VertexAttachment,Spine.Slot,UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* SkeletonExtensions_GetLocalVertices_m76C5769DC0EA4C7BC19F646FA9173A530CE88C8B (VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* ___va0, Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* ___slot1, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___buffer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B2_0 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B1_0 = NULL;
	{
		// int floatsCount = va.WorldVerticesLength;
		VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* L_0 = ___va0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VertexAttachment_get_WorldVerticesLength_m18500A21BFC7C7DB4E81B4AC345345F1122B5D44_inline(L_0, NULL);
		V_0 = L_1;
		// int bufferTargetSize = floatsCount >> 1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2>>1));
		// buffer = buffer ?? new Vector2[bufferTargetSize];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = ___buffer2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0016;
		}
	}
	{
		int32_t L_5 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)L_5);
		G_B2_0 = L_6;
	}

IL_0016:
	{
		___buffer2 = G_B2_0;
		// if (buffer.Length < bufferTargetSize) throw new System.ArgumentException(string.Format("Vector2 buffer too small. {0} requires an array of size {1}. Use the attachment's .WorldVerticesLength to get the correct size.", va.Name, floatsCount), "buffer");
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_7 = ___buffer2;
		NullCheck(L_7);
		int32_t L_8 = V_1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		// if (buffer.Length < bufferTargetSize) throw new System.ArgumentException(string.Format("Vector2 buffer too small. {0} requires an array of size {1}. Use the attachment's .WorldVerticesLength to get the correct size.", va.Name, floatsCount), "buffer");
		VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* L_9 = ___va0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Attachment_get_Name_m3F6ED5BB3D0A221C137F0371ED65AD2815508D4B_inline(L_9, NULL);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC97FADBB19DF94D28E4601AE7B8198FDC83D934C)), L_10, L_13, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_15, L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeletonExtensions_GetLocalVertices_m76C5769DC0EA4C7BC19F646FA9173A530CE88C8B_RuntimeMethod_var)));
	}

IL_003f:
	{
		// if (va.Bones == null && slot.Deform.Count == 0) {
		VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* L_16 = ___va0;
		NullCheck(L_16);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17;
		L_17 = VertexAttachment_get_Bones_m22C6003E3CE1F95FF21B2D5C8553460ADD059D81_inline(L_16, NULL);
		if (L_17)
		{
			goto IL_0087;
		}
	}
	{
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_18 = ___slot1;
		NullCheck(L_18);
		ExposedList_1_tDD3820FCA0A1AA9D314E2E1FCE0A16BE3CE5E80A* L_19;
		L_19 = Slot_get_Deform_m77105EC771A9AB032C28333A1CCE333DB13D5A27_inline(L_18, NULL);
		NullCheck(L_19);
		int32_t L_20 = L_19->___Count_1;
		if (L_20)
		{
			goto IL_0087;
		}
	}
	{
		// var localVerts = va.Vertices;
		VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* L_21 = ___va0;
		NullCheck(L_21);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22;
		L_22 = VertexAttachment_get_Vertices_mB5661F9B123FB5BEBA04853B24E72B54C6C61F14_inline(L_21, NULL);
		V_2 = L_22;
		// for (int i = 0; i < bufferTargetSize; i++) {
		V_3 = 0;
		goto IL_007e;
	}

IL_005f:
	{
		// int j = i * 2;
		int32_t L_23 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_multiply(L_23, 2));
		// buffer[i] = new Vector2(localVerts[j], localVerts[j + 1]);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_24 = ___buffer2;
		int32_t L_25 = V_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26 = V_2;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		float L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_30 = V_2;
		int32_t L_31 = V_4;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		float L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_34), L_29, L_33, /*hidden argument*/NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_34);
		// for (int i = 0; i < bufferTargetSize; i++) {
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_007e:
	{
		// for (int i = 0; i < bufferTargetSize; i++) {
		int32_t L_36 = V_3;
		int32_t L_37 = V_1;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_005f;
		}
	}
	{
		goto IL_010a;
	}

IL_0087:
	{
		// var floats = new float[floatsCount];
		int32_t L_38 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_39 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_38);
		V_5 = L_39;
		// va.ComputeWorldVertices(slot, floats);
		VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* L_40 = ___va0;
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_41 = ___slot1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = V_5;
		NullCheck(L_40);
		VertexAttachment_ComputeWorldVertices_mDC989D27CD6FA8578F1D54CECD810C780C6A2B4F(L_40, L_41, L_42, NULL);
		// Bone sb = slot.Bone;
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_43 = ___slot1;
		NullCheck(L_43);
		Bone_tC5BB616A04722279E675558888991F720C090467* L_44;
		L_44 = Slot_get_Bone_mFEF8A1FFFB05952323119E4EFB990971EDA9F282_inline(L_43, NULL);
		// float ia, ib, ic, id, bwx = sb.WorldX, bwy = sb.WorldY;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_45 = L_44;
		NullCheck(L_45);
		float L_46;
		L_46 = Bone_get_WorldX_mF7755798A568A353654EFB5D3AD9707BCBD2D3CE_inline(L_45, NULL);
		V_10 = L_46;
		// float ia, ib, ic, id, bwx = sb.WorldX, bwy = sb.WorldY;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_47 = L_45;
		NullCheck(L_47);
		float L_48;
		L_48 = Bone_get_WorldY_m599046881C946060A1A0043CA78DF028DAE4632F_inline(L_47, NULL);
		V_11 = L_48;
		// sb.GetWorldToLocalMatrix(out ia, out ib, out ic, out id);
		SkeletonExtensions_GetWorldToLocalMatrix_mD26AFE2F558336C668B4024913FCF27DE9F05C10(L_47, (&V_6), (&V_7), (&V_8), (&V_9), NULL);
		// for (int i = 0; i < bufferTargetSize; i++) {
		V_12 = 0;
		goto IL_0105;
	}

IL_00c0:
	{
		// int j = i * 2;
		int32_t L_49 = V_12;
		V_13 = ((int32_t)il2cpp_codegen_multiply(L_49, 2));
		// float x = floats[j] - bwx, y = floats[j + 1] - bwy;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = V_5;
		int32_t L_51 = V_13;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		float L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		float L_54 = V_10;
		V_14 = ((float)il2cpp_codegen_subtract(L_53, L_54));
		// float x = floats[j] - bwx, y = floats[j + 1] - bwy;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_55 = V_5;
		int32_t L_56 = V_13;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		float L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		float L_59 = V_11;
		V_15 = ((float)il2cpp_codegen_subtract(L_58, L_59));
		// buffer[i] = new Vector2(x * ia + y * ib, x * ic + y * id);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_60 = ___buffer2;
		int32_t L_61 = V_12;
		float L_62 = V_14;
		float L_63 = V_6;
		float L_64 = V_15;
		float L_65 = V_7;
		float L_66 = V_14;
		float L_67 = V_8;
		float L_68 = V_15;
		float L_69 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_70), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_62, L_63)), ((float)il2cpp_codegen_multiply(L_64, L_65)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_66, L_67)), ((float)il2cpp_codegen_multiply(L_68, L_69)))), /*hidden argument*/NULL);
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_70);
		// for (int i = 0; i < bufferTargetSize; i++) {
		int32_t L_71 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_0105:
	{
		// for (int i = 0; i < bufferTargetSize; i++) {
		int32_t L_72 = V_12;
		int32_t L_73 = V_1;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_00c0;
		}
	}

IL_010a:
	{
		// return buffer;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_74 = ___buffer2;
		return L_74;
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
// UnityEngine.Vector2 Spine.Unity.AnimationTools.TimelineExtensions::Evaluate(Spine.TranslateTimeline,System.Single,Spine.SkeletonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TimelineExtensions_Evaluate_mCC3290F17E6B0195B11184C08D7A6C1B89D45004 (TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* ___timeline0, float ___time1, SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* ___skeletonData2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* V_2 = NULL;
	{
		// if (time < timeline.Frames[0]) return Vector2.zero;
		float L_0 = ___time1;
		TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* L_1 = ___timeline0;
		NullCheck(L_1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = Timeline_get_Frames_m36161E25AFC60271E5BBAA9A4BB32099D05F382E_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = 0;
		float L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((!(((float)L_0) < ((float)L_4))))
		{
			goto IL_0011;
		}
	}
	{
		// if (time < timeline.Frames[0]) return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		return L_5;
	}

IL_0011:
	{
		// timeline.GetCurveValue(out x, out y, time);
		TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* L_6 = ___timeline0;
		float L_7 = ___time1;
		NullCheck(L_6);
		TranslateTimeline_GetCurveValue_mA5A2285AEABE1C0DAB56F1BA4B00E5DF1F637CB3(L_6, (&V_0), (&V_1), L_7, NULL);
		// if (skeletonData == null) {
		SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* L_8 = ___skeletonData2;
		if (L_8)
		{
			goto IL_0027;
		}
	}
	{
		// return new Vector2(x, y);
		float L_9 = V_0;
		float L_10 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0027:
	{
		// BoneData boneData = skeletonData.Bones.Items[timeline.BoneIndex];
		SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* L_12 = ___skeletonData2;
		NullCheck(L_12);
		ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* L_13;
		L_13 = SkeletonData_get_Bones_m46C0AB3D18F68B66F2E76AED746F88C3DC2D1018_inline(L_12, NULL);
		NullCheck(L_13);
		BoneDataU5BU5D_tADACEBE8328638952B7718F3A0E834BBFF9E2EFB* L_14 = L_13->___Items_0;
		TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* L_15 = ___timeline0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = TranslateTimeline_get_BoneIndex_m9BFC216EA1BEA854F7C74E599730525BD513D777_inline(L_15, NULL);
		NullCheck(L_14);
		int32_t L_17 = L_16;
		BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_2 = L_18;
		// return new Vector2(boneData.X + x, boneData.Y + y);
		BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* L_19 = V_2;
		NullCheck(L_19);
		float L_20;
		L_20 = BoneData_get_X_m41AC5529BDF4FEC10AE8B87431A04E0A1B2B3DA0_inline(L_19, NULL);
		float L_21 = V_0;
		BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* L_22 = V_2;
		NullCheck(L_22);
		float L_23;
		L_23 = BoneData_get_Y_mC11A04D53C0EAEFA456866ECFB98247C1297D762_inline(L_22, NULL);
		float L_24 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_25), ((float)il2cpp_codegen_add(L_20, L_21)), ((float)il2cpp_codegen_add(L_23, L_24)), /*hidden argument*/NULL);
		return L_25;
	}
}
// UnityEngine.Vector2 Spine.Unity.AnimationTools.TimelineExtensions::Evaluate(Spine.TranslateXTimeline,Spine.TranslateYTimeline,System.Single,Spine.SkeletonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TimelineExtensions_Evaluate_mF4CF688197C1CCB3FCBE93F8A09532F37E972836 (TranslateXTimeline_t0B249911CB468BACF3C04002772032F852EDA711* ___xTimeline0, TranslateYTimeline_tFB684A539CED348763AB5265FA7D3A750BDE5A3A* ___yTimeline1, float ___time2, SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* ___skeletonData3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* V_2 = NULL;
	BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* V_3 = NULL;
	{
		// float x = 0, y = 0;
		V_0 = (0.0f);
		// float x = 0, y = 0;
		V_1 = (0.0f);
		// if (xTimeline != null && time > xTimeline.Frames[0]) x = xTimeline.GetCurveValue(time);
		TranslateXTimeline_t0B249911CB468BACF3C04002772032F852EDA711* L_0 = ___xTimeline0;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		float L_1 = ___time2;
		TranslateXTimeline_t0B249911CB468BACF3C04002772032F852EDA711* L_2 = ___xTimeline0;
		NullCheck(L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3;
		L_3 = Timeline_get_Frames_m36161E25AFC60271E5BBAA9A4BB32099D05F382E_inline(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((!(((float)L_1) > ((float)L_5))))
		{
			goto IL_0022;
		}
	}
	{
		// if (xTimeline != null && time > xTimeline.Frames[0]) x = xTimeline.GetCurveValue(time);
		TranslateXTimeline_t0B249911CB468BACF3C04002772032F852EDA711* L_6 = ___xTimeline0;
		float L_7 = ___time2;
		NullCheck(L_6);
		float L_8;
		L_8 = CurveTimeline1_GetCurveValue_m8039AA73CD553AD5BB5074243C4C497338CC816F(L_6, L_7, NULL);
		V_0 = L_8;
	}

IL_0022:
	{
		// if (yTimeline != null && time > yTimeline.Frames[0]) y = yTimeline.GetCurveValue(time);
		TranslateYTimeline_tFB684A539CED348763AB5265FA7D3A750BDE5A3A* L_9 = ___yTimeline1;
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		float L_10 = ___time2;
		TranslateYTimeline_tFB684A539CED348763AB5265FA7D3A750BDE5A3A* L_11 = ___yTimeline1;
		NullCheck(L_11);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12;
		L_12 = Timeline_get_Frames_m36161E25AFC60271E5BBAA9A4BB32099D05F382E_inline(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13 = 0;
		float L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((!(((float)L_10) > ((float)L_14))))
		{
			goto IL_0038;
		}
	}
	{
		// if (yTimeline != null && time > yTimeline.Frames[0]) y = yTimeline.GetCurveValue(time);
		TranslateYTimeline_tFB684A539CED348763AB5265FA7D3A750BDE5A3A* L_15 = ___yTimeline1;
		float L_16 = ___time2;
		NullCheck(L_15);
		float L_17;
		L_17 = CurveTimeline1_GetCurveValue_m8039AA73CD553AD5BB5074243C4C497338CC816F(L_15, L_16, NULL);
		V_1 = L_17;
	}

IL_0038:
	{
		// if (skeletonData == null) {
		SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* L_18 = ___skeletonData3;
		if (L_18)
		{
			goto IL_0043;
		}
	}
	{
		// return new Vector2(x, y);
		float L_19 = V_0;
		float L_20 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), L_19, L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_0043:
	{
		// var bonesItems = skeletonData.Bones.Items;
		SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* L_22 = ___skeletonData3;
		NullCheck(L_22);
		ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* L_23;
		L_23 = SkeletonData_get_Bones_m46C0AB3D18F68B66F2E76AED746F88C3DC2D1018_inline(L_22, NULL);
		NullCheck(L_23);
		BoneDataU5BU5D_tADACEBE8328638952B7718F3A0E834BBFF9E2EFB* L_24 = L_23->___Items_0;
		// BoneData boneDataX = bonesItems[xTimeline.BoneIndex];
		BoneDataU5BU5D_tADACEBE8328638952B7718F3A0E834BBFF9E2EFB* L_25 = L_24;
		TranslateXTimeline_t0B249911CB468BACF3C04002772032F852EDA711* L_26 = ___xTimeline0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = TranslateXTimeline_get_BoneIndex_mF94864F8D36BD1F0AF31E1EAF64A2B54C5E2A9B8_inline(L_26, NULL);
		NullCheck(L_25);
		int32_t L_28 = L_27;
		BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_2 = L_29;
		// BoneData boneDataY = bonesItems[yTimeline.BoneIndex];
		TranslateYTimeline_tFB684A539CED348763AB5265FA7D3A750BDE5A3A* L_30 = ___yTimeline1;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = TranslateYTimeline_get_BoneIndex_m256C95349462C3748E8FBCCFC2D514E7F09B39DB_inline(L_30, NULL);
		NullCheck(L_25);
		int32_t L_32 = L_31;
		BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* L_33 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_3 = L_33;
		// return new Vector2(boneDataX.X + x, boneDataY.Y + y);
		BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* L_34 = V_2;
		NullCheck(L_34);
		float L_35;
		L_35 = BoneData_get_X_m41AC5529BDF4FEC10AE8B87431A04E0A1B2B3DA0_inline(L_34, NULL);
		float L_36 = V_0;
		BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* L_37 = V_3;
		NullCheck(L_37);
		float L_38;
		L_38 = BoneData_get_Y_mC11A04D53C0EAEFA456866ECFB98247C1297D762_inline(L_37, NULL);
		float L_39 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_40), ((float)il2cpp_codegen_add(L_35, L_36)), ((float)il2cpp_codegen_add(L_38, L_39)), /*hidden argument*/NULL);
		return L_40;
	}
}
// System.Single Spine.Unity.AnimationTools.TimelineExtensions::Evaluate(Spine.RotateTimeline,System.Single,Spine.SkeletonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TimelineExtensions_Evaluate_m03437A4A8F2E28DE315E3F6EBA0CB11890CE45AD (RotateTimeline_t0B9A05CA52071B7C553456577B12D1023DD54FE2* ___timeline0, float ___time1, SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* ___skeletonData2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (time < timeline.Frames[0]) return 0f;
		float L_0 = ___time1;
		RotateTimeline_t0B9A05CA52071B7C553456577B12D1023DD54FE2* L_1 = ___timeline0;
		NullCheck(L_1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = Timeline_get_Frames_m36161E25AFC60271E5BBAA9A4BB32099D05F382E_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = 0;
		float L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((!(((float)L_0) < ((float)L_4))))
		{
			goto IL_0011;
		}
	}
	{
		// if (time < timeline.Frames[0]) return 0f;
		return (0.0f);
	}

IL_0011:
	{
		// float rotation = timeline.GetCurveValue(time);
		RotateTimeline_t0B9A05CA52071B7C553456577B12D1023DD54FE2* L_5 = ___timeline0;
		float L_6 = ___time1;
		NullCheck(L_5);
		float L_7;
		L_7 = CurveTimeline1_GetCurveValue_m8039AA73CD553AD5BB5074243C4C497338CC816F(L_5, L_6, NULL);
		V_0 = L_7;
		// if (skeletonData == null) {
		SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* L_8 = ___skeletonData2;
		if (L_8)
		{
			goto IL_001e;
		}
	}
	{
		// return rotation;
		float L_9 = V_0;
		return L_9;
	}

IL_001e:
	{
		// BoneData boneData = skeletonData.Bones.Items[timeline.BoneIndex];
		SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* L_10 = ___skeletonData2;
		NullCheck(L_10);
		ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* L_11;
		L_11 = SkeletonData_get_Bones_m46C0AB3D18F68B66F2E76AED746F88C3DC2D1018_inline(L_10, NULL);
		NullCheck(L_11);
		BoneDataU5BU5D_tADACEBE8328638952B7718F3A0E834BBFF9E2EFB* L_12 = L_11->___Items_0;
		RotateTimeline_t0B9A05CA52071B7C553456577B12D1023DD54FE2* L_13 = ___timeline0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = RotateTimeline_get_BoneIndex_mC579F6978FE45BBA596E1A654A11E64ACB6E0767_inline(L_13, NULL);
		NullCheck(L_12);
		int32_t L_15 = L_14;
		BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		// return (boneData.Rotation + rotation);
		NullCheck(L_16);
		float L_17;
		L_17 = BoneData_get_Rotation_mA069172D86BF964BAFDC6ED77A4DBFFCEB306EA2_inline(L_16, NULL);
		float L_18 = V_0;
		return ((float)il2cpp_codegen_add(L_17, L_18));
	}
}
// UnityEngine.Vector2 Spine.Unity.AnimationTools.TimelineExtensions::EvaluateTranslateXYMix(Spine.TransformConstraintTimeline,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TimelineExtensions_EvaluateTranslateXYMix_m2388BCCB56B8345F83A91517D57D577C8C4968EA (TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885* ___timeline0, float ___time1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// if (time < timeline.Frames[0]) return Vector2.zero;
		float L_0 = ___time1;
		TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885* L_1 = ___timeline0;
		NullCheck(L_1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = Timeline_get_Frames_m36161E25AFC60271E5BBAA9A4BB32099D05F382E_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = 0;
		float L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((!(((float)L_0) < ((float)L_4))))
		{
			goto IL_0011;
		}
	}
	{
		// if (time < timeline.Frames[0]) return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		return L_5;
	}

IL_0011:
	{
		// timeline.GetCurveValue(out rotate, out mixX, out mixY, out scaleX, out scaleY, out shearY, time);
		TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885* L_6 = ___timeline0;
		float L_7 = ___time1;
		NullCheck(L_6);
		TransformConstraintTimeline_GetCurveValue_mEF3EB109702445ACD0697E1DED92D1111D9FD602(L_6, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), L_7, NULL);
		// return new Vector2(mixX, mixY);
		float L_8 = V_1;
		float L_9 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Single Spine.Unity.AnimationTools.TimelineExtensions::EvaluateRotateMix(Spine.TransformConstraintTimeline,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TimelineExtensions_EvaluateRotateMix_mCA051AF6BBE240D6CFE08EE655251610FBCC6798 (TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885* ___timeline0, float ___time1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// if (time < timeline.Frames[0]) return 0;
		float L_0 = ___time1;
		TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885* L_1 = ___timeline0;
		NullCheck(L_1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = Timeline_get_Frames_m36161E25AFC60271E5BBAA9A4BB32099D05F382E_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = 0;
		float L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((!(((float)L_0) < ((float)L_4))))
		{
			goto IL_0011;
		}
	}
	{
		// if (time < timeline.Frames[0]) return 0;
		return (0.0f);
	}

IL_0011:
	{
		// timeline.GetCurveValue(out rotate, out mixX, out mixY, out scaleX, out scaleY, out shearY, time);
		TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885* L_5 = ___timeline0;
		float L_6 = ___time1;
		NullCheck(L_5);
		TransformConstraintTimeline_GetCurveValue_mEF3EB109702445ACD0697E1DED92D1111D9FD602(L_5, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), L_6, NULL);
		// return rotate;
		float L_7 = V_0;
		return L_7;
	}
}
// Spine.TranslateTimeline Spine.Unity.AnimationTools.TimelineExtensions::FindTranslateTimelineForBone(Spine.Animation,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* TimelineExtensions_FindTranslateTimelineForBone_m82C76B616DB8AF3F665FE04465EC8D44F1B3A2A8 (Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* ___a0, int32_t ___boneIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1A391DDB217D33A00F83EF26F3F79B8DF839190D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBC7AB4D5664AD175631397B9694FC553E0C76FAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6F5B5815FEEF6CABE89E550B1C3501C2810FBCB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_GetEnumerator_mAAC0E50314A8728B642DCD37F7E8FE623D4164F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* V_1 = NULL;
	TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* V_2 = NULL;
	TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* V_3 = NULL;
	{
		// foreach (var timeline in a.Timelines) {
		Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* L_0 = ___a0;
		NullCheck(L_0);
		ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* L_1;
		L_1 = Animation_get_Timelines_m2F4B97551905154693EE8C220EA45393A47D37BB_inline(L_0, NULL);
		NullCheck(L_1);
		Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7 L_2;
		L_2 = ExposedList_1_GetEnumerator_mAAC0E50314A8728B642DCD37F7E8FE623D4164F3(L_1, ExposedList_1_GetEnumerator_mAAC0E50314A8728B642DCD37F7E8FE623D4164F3_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1A391DDB217D33A00F83EF26F3F79B8DF839190D((&V_0), Enumerator_Dispose_m1A391DDB217D33A00F83EF26F3F79B8DF839190D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0044_1;
			}

IL_000e_1:
			{
				// foreach (var timeline in a.Timelines) {
				Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* L_3;
				L_3 = Enumerator_get_Current_m6F5B5815FEEF6CABE89E550B1C3501C2810FBCB3_inline((&V_0), Enumerator_get_Current_m6F5B5815FEEF6CABE89E550B1C3501C2810FBCB3_RuntimeMethod_var);
				V_1 = L_3;
				// if (timeline.GetType().IsSubclassOf(typeof(TranslateTimeline)))
				Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* L_4 = V_1;
				NullCheck(L_4);
				Type_t* L_5;
				L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_4, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_7;
				L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
				NullCheck(L_5);
				bool L_8;
				L_8 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(19 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_5, L_7);
				if (L_8)
				{
					goto IL_0044_1;
				}
			}
			{
				// var translateTimeline = timeline as TranslateTimeline;
				Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* L_9 = V_1;
				V_2 = ((TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852*)IsInstClass((RuntimeObject*)L_9, TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852_il2cpp_TypeInfo_var));
				// if (translateTimeline != null && translateTimeline.BoneIndex == boneIndex)
				TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* L_10 = V_2;
				if (!L_10)
				{
					goto IL_0044_1;
				}
			}
			{
				TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* L_11 = V_2;
				NullCheck(L_11);
				int32_t L_12;
				L_12 = TranslateTimeline_get_BoneIndex_m9BFC216EA1BEA854F7C74E599730525BD513D777_inline(L_11, NULL);
				int32_t L_13 = ___boneIndex1;
				if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
				{
					goto IL_0044_1;
				}
			}
			{
				// return translateTimeline;
				TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* L_14 = V_2;
				V_3 = L_14;
				goto IL_005f;
			}

IL_0044_1:
			{
				// foreach (var timeline in a.Timelines) {
				bool L_15;
				L_15 = Enumerator_MoveNext_mBC7AB4D5664AD175631397B9694FC553E0C76FAB((&V_0), Enumerator_MoveNext_mBC7AB4D5664AD175631397B9694FC553E0C76FAB_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_000e_1;
				}
			}
			{
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
		// return null;
		return (TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852*)NULL;
	}

IL_005f:
	{
		// }
		TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* L_16 = V_3;
		return L_16;
	}
}
// Spine.TransformConstraintTimeline Spine.Unity.AnimationTools.TimelineExtensions::FindTransformConstraintTimeline(Spine.Animation,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885* TimelineExtensions_FindTransformConstraintTimeline_m139004F10629005141CF8D77B40ACE2315607171 (Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* ___a0, int32_t ___transformConstraintIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1A391DDB217D33A00F83EF26F3F79B8DF839190D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBC7AB4D5664AD175631397B9694FC553E0C76FAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6F5B5815FEEF6CABE89E550B1C3501C2810FBCB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_GetEnumerator_mAAC0E50314A8728B642DCD37F7E8FE623D4164F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* V_1 = NULL;
	TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885* V_2 = NULL;
	TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885* V_3 = NULL;
	{
		// foreach (var timeline in a.Timelines) {
		Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* L_0 = ___a0;
		NullCheck(L_0);
		ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* L_1;
		L_1 = Animation_get_Timelines_m2F4B97551905154693EE8C220EA45393A47D37BB_inline(L_0, NULL);
		NullCheck(L_1);
		Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7 L_2;
		L_2 = ExposedList_1_GetEnumerator_mAAC0E50314A8728B642DCD37F7E8FE623D4164F3(L_1, ExposedList_1_GetEnumerator_mAAC0E50314A8728B642DCD37F7E8FE623D4164F3_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1A391DDB217D33A00F83EF26F3F79B8DF839190D((&V_0), Enumerator_Dispose_m1A391DDB217D33A00F83EF26F3F79B8DF839190D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0044_1;
			}

IL_000e_1:
			{
				// foreach (var timeline in a.Timelines) {
				Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* L_3;
				L_3 = Enumerator_get_Current_m6F5B5815FEEF6CABE89E550B1C3501C2810FBCB3_inline((&V_0), Enumerator_get_Current_m6F5B5815FEEF6CABE89E550B1C3501C2810FBCB3_RuntimeMethod_var);
				V_1 = L_3;
				// if (timeline.GetType().IsSubclassOf(typeof(TransformConstraintTimeline)))
				Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* L_4 = V_1;
				NullCheck(L_4);
				Type_t* L_5;
				L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_4, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_7;
				L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
				NullCheck(L_5);
				bool L_8;
				L_8 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(19 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_5, L_7);
				if (L_8)
				{
					goto IL_0044_1;
				}
			}
			{
				// var transformConstraintTimeline = timeline as TransformConstraintTimeline;
				Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* L_9 = V_1;
				V_2 = ((TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885*)IsInstClass((RuntimeObject*)L_9, TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885_il2cpp_TypeInfo_var));
				// if (transformConstraintTimeline != null &&
				//     transformConstraintTimeline.TransformConstraintIndex == transformConstraintIndex)
				TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885* L_10 = V_2;
				if (!L_10)
				{
					goto IL_0044_1;
				}
			}
			{
				TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885* L_11 = V_2;
				NullCheck(L_11);
				int32_t L_12;
				L_12 = TransformConstraintTimeline_get_TransformConstraintIndex_m47670BCF2C1A456783EFDFFD799E305CA434AB60_inline(L_11, NULL);
				int32_t L_13 = ___transformConstraintIndex1;
				if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
				{
					goto IL_0044_1;
				}
			}
			{
				// return transformConstraintTimeline;
				TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885* L_14 = V_2;
				V_3 = L_14;
				goto IL_005f;
			}

IL_0044_1:
			{
				// foreach (var timeline in a.Timelines) {
				bool L_15;
				L_15 = Enumerator_MoveNext_mBC7AB4D5664AD175631397B9694FC553E0C76FAB((&V_0), Enumerator_MoveNext_mBC7AB4D5664AD175631397B9694FC553E0C76FAB_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_000e_1;
				}
			}
			{
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
		// return null;
		return (TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885*)NULL;
	}

IL_005f:
	{
		// }
		TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885* L_16 = V_3;
		return L_16;
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
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasUtilities_Init_m1AB0C0F1DA32B13762C5AC7481597F821485B97B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AtlasUtilities.ClearCache();
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasUtilities_ClearCache_mEBB54853312D663E0F8CF01053402BA1FB93B26B(NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities::ClearCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasUtilities_ClearCache_mEBB54853312D663E0F8CF01053402BA1FB93B26B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m7BDA40E7D7D71D7F04B6FEE9059593B9FC36E2EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7D8098C50EE0CF157C6B09912310A1FD9474F245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m00711B095CC5BE52F04F5EB7283C8795DB012C35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCF3C7D2E2BA4F0177C908FDCFE7955303CBD5BED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mBFD86AB2F85FB10B7CBA3FABFCD5AB785B271EDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m68D0E2F78D7A7BFC737BE72E4088B86A85F55F6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var t in CachedRegionTexturesList) {
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_0 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___CachedRegionTexturesList_7;
		NullCheck(L_0);
		Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1 L_1;
		L_1 = List_1_GetEnumerator_m68D0E2F78D7A7BFC737BE72E4088B86A85F55F6D(L_0, List_1_GetEnumerator_m68D0E2F78D7A7BFC737BE72E4088B86A85F55F6D_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7D8098C50EE0CF157C6B09912310A1FD9474F245((&V_0), Enumerator_Dispose_m7D8098C50EE0CF157C6B09912310A1FD9474F245_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0019_1;
			}

IL_000d_1:
			{
				// foreach (var t in CachedRegionTexturesList) {
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2;
				L_2 = Enumerator_get_Current_mCF3C7D2E2BA4F0177C908FDCFE7955303CBD5BED_inline((&V_0), Enumerator_get_Current_mCF3C7D2E2BA4F0177C908FDCFE7955303CBD5BED_RuntimeMethod_var);
				// UnityEngine.Object.Destroy(t);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
			}

IL_0019_1:
			{
				// foreach (var t in CachedRegionTexturesList) {
				bool L_3;
				L_3 = Enumerator_MoveNext_m00711B095CC5BE52F04F5EB7283C8795DB012C35((&V_0), Enumerator_MoveNext_m00711B095CC5BE52F04F5EB7283C8795DB012C35_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_0032;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		// CachedRegionTextures.Clear();
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816* L_4 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___CachedRegionTextures_6;
		NullCheck(L_4);
		Dictionary_2_Clear_m7BDA40E7D7D71D7F04B6FEE9059593B9FC36E2EA(L_4, Dictionary_2_Clear_m7BDA40E7D7D71D7F04B6FEE9059593B9FC36E2EA_RuntimeMethod_var);
		// CachedRegionTexturesList.Clear();
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_5 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___CachedRegionTexturesList_7;
		NullCheck(L_5);
		List_1_Clear_mBFD86AB2F85FB10B7CBA3FABFCD5AB785B271EDA_inline(L_5, List_1_Clear_mBFD86AB2F85FB10B7CBA3FABFCD5AB785B271EDA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasUtilities__cctor_mE1658277E9DD6D8A68A2EF91CF3011B4CC89ADC5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m743D85E17F5AA356B8F1B417104B2866BA904211_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA78816E36EAB57D6CB5D4795E9EB5DB36A57A231_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2339E1052EFC4235FB03A7F61B9DE0A8BE4494A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC01FB12C8CED6F48D54CD71778F5FF3FF5860BDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD3639440D8DA82147DC9629DE83F253326590E28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Dictionary<AtlasRegion, int> existingRegions = new Dictionary<AtlasRegion, int>();
		Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388* L_0 = (Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388*)il2cpp_codegen_object_new(Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mA78816E36EAB57D6CB5D4795E9EB5DB36A57A231(L_0, Dictionary_2__ctor_mA78816E36EAB57D6CB5D4795E9EB5DB36A57A231_RuntimeMethod_var);
		((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___existingRegions_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___existingRegions_0), (void*)L_0);
		// static readonly List<int> regionIndices = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_1, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___regionIndices_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___regionIndices_1), (void*)L_1);
		// static readonly List<AtlasRegion> originalRegions = new List<AtlasRegion>();
		List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* L_2 = (List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0*)il2cpp_codegen_object_new(List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mC01FB12C8CED6F48D54CD71778F5FF3FF5860BDE(L_2, List_1__ctor_mC01FB12C8CED6F48D54CD71778F5FF3FF5860BDE_RuntimeMethod_var);
		((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___originalRegions_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___originalRegions_2), (void*)L_2);
		// static readonly List<AtlasRegion> repackedRegions = new List<AtlasRegion>();
		List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* L_3 = (List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0*)il2cpp_codegen_object_new(List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mC01FB12C8CED6F48D54CD71778F5FF3FF5860BDE(L_3, List_1__ctor_mC01FB12C8CED6F48D54CD71778F5FF3FF5860BDE_RuntimeMethod_var);
		((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___repackedRegions_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___repackedRegions_3), (void*)L_3);
		// static List<Texture2D>[] texturesToPackAtParam = new List<Texture2D>[1];
		List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88* L_4 = (List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88*)(List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88*)SZArrayNew(List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88_il2cpp_TypeInfo_var, (uint32_t)1);
		((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___texturesToPackAtParam_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___texturesToPackAtParam_4), (void*)L_4);
		// static List<Attachment> inoutAttachments = new List<Attachment>();
		List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_5 = (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8*)il2cpp_codegen_object_new(List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m2339E1052EFC4235FB03A7F61B9DE0A8BE4494A5(L_5, List_1__ctor_m2339E1052EFC4235FB03A7F61B9DE0A8BE4494A5_RuntimeMethod_var);
		((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___inoutAttachments_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___inoutAttachments_5), (void*)L_5);
		// static Dictionary<IntAndAtlasRegionKey, Texture2D> CachedRegionTextures = new Dictionary<IntAndAtlasRegionKey, Texture2D>();
		Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816* L_6 = (Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816*)il2cpp_codegen_object_new(Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_m743D85E17F5AA356B8F1B417104B2866BA904211(L_6, Dictionary_2__ctor_m743D85E17F5AA356B8F1B417104B2866BA904211_RuntimeMethod_var);
		((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___CachedRegionTextures_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___CachedRegionTextures_6), (void*)L_6);
		// static List<Texture2D> CachedRegionTexturesList = new List<Texture2D>();
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_7 = (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*)il2cpp_codegen_object_new(List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_mD3639440D8DA82147DC9629DE83F253326590E28(L_7, List_1__ctor_mD3639440D8DA82147DC9629DE83F253326590E28_RuntimeMethod_var);
		((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___CachedRegionTexturesList_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___CachedRegionTexturesList_7), (void*)L_7);
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
// Conversion methods for marshalling of: Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
IL2CPP_EXTERN_C void IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshal_pinvoke(const IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A& unmarshaled, IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___region_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'region' of type 'IntAndAtlasRegionKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___region_1Exception, NULL);
}
IL2CPP_EXTERN_C void IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshal_pinvoke_back(const IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshaled_pinvoke& marshaled, IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A& unmarshaled)
{
	Exception_t* ___region_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'region' of type 'IntAndAtlasRegionKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___region_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
IL2CPP_EXTERN_C void IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshal_pinvoke_cleanup(IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
IL2CPP_EXTERN_C void IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshal_com(const IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A& unmarshaled, IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshaled_com& marshaled)
{
	Exception_t* ___region_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'region' of type 'IntAndAtlasRegionKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___region_1Exception, NULL);
}
IL2CPP_EXTERN_C void IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshal_com_back(const IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshaled_com& marshaled, IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A& unmarshaled)
{
	Exception_t* ___region_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'region' of type 'IntAndAtlasRegionKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___region_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
IL2CPP_EXTERN_C void IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshal_com_cleanup(IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshaled_com& marshaled)
{
}
// System.Int32 Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntAndAtlasRegionKey_GetHashCode_m9B65C74CD72827BF431EB5B747DE6D51C12CCDBF (IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A* __this, const RuntimeMethod* method) 
{
	{
		// return i.GetHashCode() * 23 ^ region.GetHashCode();
		int32_t* L_0 = (&__this->___i_0);
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_0, NULL);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_2 = __this->___region_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)23)))^L_3));
	}
}
IL2CPP_EXTERN_C  int32_t IntAndAtlasRegionKey_GetHashCode_m9B65C74CD72827BF431EB5B747DE6D51C12CCDBF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = IntAndAtlasRegionKey_GetHashCode_m9B65C74CD72827BF431EB5B747DE6D51C12CCDBF(_thisAdjusted, method);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_t832DB618999898C4507FEDF55884721C3E514B2C* Skeleton_get_DrawOrder_mA89640FCE8F1F998F81846A80DBB6A41EB7BC2A2_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, const RuntimeMethod* method) 
{
	{
		// public ExposedList<Slot> DrawOrder { get { return drawOrder; } }
		ExposedList_1_t832DB618999898C4507FEDF55884721C3E514B2C* L_0 = __this->___drawOrder_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bone_tC5BB616A04722279E675558888991F720C090467* Slot_get_Bone_mFEF8A1FFFB05952323119E4EFB990971EDA9F282_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) 
{
	{
		// public Bone Bone { get { return bone; } }
		Bone_tC5BB616A04722279E675558888991F720C090467* L_0 = __this->___bone_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Bone_get_Active_mC7A9C59029247A090AFCBD4CA28E8F5CDFAFF4FB_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) 
{
	{
		// public bool Active { get { return active; } }
		bool L_0 = __this->___active_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* Slot_get_Attachment_mB2A78D5EFCC62623B18457E8B38E6A6DB402F4C2_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) 
{
	{
		// get { return attachment; }
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_0 = __this->___attachment_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_t91DB309B7AA43B52841EC0CF8EBADD1D9D73DCA3* SkeletonData_get_Slots_mBB921012ED44C94B160D5D0CFFA96B09552438B6_inline (SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* __this, const RuntimeMethod* method) 
{
	{
		// public ExposedList<SlotData> Slots { get { return slots; } }
		ExposedList_1_t91DB309B7AA43B52841EC0CF8EBADD1D9D73DCA3* L_0 = __this->___slots_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SlotData_get_BlendMode_mD941BFBAC4358DADF593F4981D9F3C488E4FDC40_inline (SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* __this, const RuntimeMethod* method) 
{
	{
		// public BlendMode BlendMode { get { return blendMode; } set { blendMode = value; } }
		int32_t L_0 = __this->___blendMode_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_t6FF735095BAC811A2AD50E52AE368F9A5D48B59D* SkeletonData_get_Skins_m7235DD9B8582ED5DAEA63989EC71077D6848CD5A_inline (SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* __this, const RuntimeMethod* method) 
{
	{
		// public ExposedList<Skin> Skins { get { return skins; } set { skins = value; } }
		ExposedList_1_t6FF735095BAC811A2AD50E52AE368F9A5D48B59D* L_0 = __this->___skins_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* SkinEntry_get_Attachment_mD3F3972C2C175630ABA63A7806AEED63CE8A665C_inline (SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F* __this, const RuntimeMethod* method) 
{
	{
		// return attachment;
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_0 = __this->___attachment_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Skeleton_set_A_mD9FC576C115D119B76ECA978FC14A1D4D4191E24_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float A { get { return a; } set { a = value; } }
		float L_0 = ___value0;
		__this->___a_13 = L_0;
		// public float A { get { return a; } set { a = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Skeleton_set_R_m914D7E1F23A31D100D167DF2DC5513825C441BC7_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float R { get { return r; } set { r = value; } }
		float L_0 = ___value0;
		__this->___r_10 = L_0;
		// public float R { get { return r; } set { r = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Skeleton_set_G_m64EACF26B14B2B242648482ACE9CCE063A0117AE_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float G { get { return g; } set { g = value; } }
		float L_0 = ___value0;
		__this->___g_11 = L_0;
		// public float G { get { return g; } set { g = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Skeleton_set_B_m06359B96A97EEC04CA6104AF4F8A2CB1D3E85302_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float B { get { return b; } set { b = value; } }
		float L_0 = ___value0;
		__this->___b_12 = L_0;
		// public float B { get { return b; } set { b = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_C_mB12EA1ED732F4098FEEBBF1333776F5B8A6D353F_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) 
{
	{
		// public float C { get { return c; } set { c = value; } }
		float L_0 = __this->___c_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_A_mD9933DFFB2BE82B9B6AA452F2301464E7BB0F9EA_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) 
{
	{
		// public float A { get { return a; } set { a = value; } }
		float L_0 = __this->___a_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_B_m152872772FD282B96B00D119D28753129DA33AA1_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) 
{
	{
		// public float B { get { return b; } set { b = value; } }
		float L_0 = __this->___b_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_D_m1D033C2256BB965C9E2BEB1072435B07CD633B7F_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) 
{
	{
		// public float D { get { return d; } set { d = value; } }
		float L_0 = __this->___d_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexAttachment_get_WorldVerticesLength_m18500A21BFC7C7DB4E81B4AC345345F1122B5D44_inline (VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* __this, const RuntimeMethod* method) 
{
	{
		// public int WorldVerticesLength { get { return worldVerticesLength; } set { worldVerticesLength = value; } }
		int32_t L_0 = __this->___worldVerticesLength_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Attachment_get_Name_m3F6ED5BB3D0A221C137F0371ED65AD2815508D4B_inline (Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* VertexAttachment_get_Bones_m22C6003E3CE1F95FF21B2D5C8553460ADD059D81_inline (VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* __this, const RuntimeMethod* method) 
{
	{
		// public int[] Bones { get { return bones; } set { bones = value; } }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___bones_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_tDD3820FCA0A1AA9D314E2E1FCE0A16BE3CE5E80A* Slot_get_Deform_m77105EC771A9AB032C28333A1CCE333DB13D5A27_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) 
{
	{
		// return deform;
		ExposedList_1_tDD3820FCA0A1AA9D314E2E1FCE0A16BE3CE5E80A* L_0 = __this->___deform_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* VertexAttachment_get_Vertices_mB5661F9B123FB5BEBA04853B24E72B54C6C61F14_inline (VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* __this, const RuntimeMethod* method) 
{
	{
		// public float[] Vertices { get { return vertices; } set { vertices = value; } }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___vertices_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_WorldX_mF7755798A568A353654EFB5D3AD9707BCBD2D3CE_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) 
{
	{
		// public float WorldX { get { return worldX; } set { worldX = value; } }
		float L_0 = __this->___worldX_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_WorldY_m599046881C946060A1A0043CA78DF028DAE4632F_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) 
{
	{
		// public float WorldY { get { return worldY; } set { worldY = value; } }
		float L_0 = __this->___worldY_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Timeline_get_Frames_m36161E25AFC60271E5BBAA9A4BB32099D05F382E_inline (Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* __this, const RuntimeMethod* method) 
{
	{
		// get { return frames; }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___frames_1;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* SkeletonData_get_Bones_m46C0AB3D18F68B66F2E76AED746F88C3DC2D1018_inline (SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* __this, const RuntimeMethod* method) 
{
	{
		// public ExposedList<BoneData> Bones { get { return bones; } }
		ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* L_0 = __this->___bones_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslateTimeline_get_BoneIndex_m9BFC216EA1BEA854F7C74E599730525BD513D777_inline (TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* __this, const RuntimeMethod* method) 
{
	{
		// return boneIndex;
		int32_t L_0 = __this->___boneIndex_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BoneData_get_X_m41AC5529BDF4FEC10AE8B87431A04E0A1B2B3DA0_inline (BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* __this, const RuntimeMethod* method) 
{
	{
		// public float X { get { return x; } set { x = value; } }
		float L_0 = __this->___x_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BoneData_get_Y_mC11A04D53C0EAEFA456866ECFB98247C1297D762_inline (BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* __this, const RuntimeMethod* method) 
{
	{
		// public float Y { get { return y; } set { y = value; } }
		float L_0 = __this->___y_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslateXTimeline_get_BoneIndex_mF94864F8D36BD1F0AF31E1EAF64A2B54C5E2A9B8_inline (TranslateXTimeline_t0B249911CB468BACF3C04002772032F852EDA711* __this, const RuntimeMethod* method) 
{
	{
		// return boneIndex;
		int32_t L_0 = __this->___boneIndex_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslateYTimeline_get_BoneIndex_m256C95349462C3748E8FBCCFC2D514E7F09B39DB_inline (TranslateYTimeline_tFB684A539CED348763AB5265FA7D3A750BDE5A3A* __this, const RuntimeMethod* method) 
{
	{
		// return boneIndex;
		int32_t L_0 = __this->___boneIndex_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RotateTimeline_get_BoneIndex_mC579F6978FE45BBA596E1A654A11E64ACB6E0767_inline (RotateTimeline_t0B9A05CA52071B7C553456577B12D1023DD54FE2* __this, const RuntimeMethod* method) 
{
	{
		// return boneIndex;
		int32_t L_0 = __this->___boneIndex_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BoneData_get_Rotation_mA069172D86BF964BAFDC6ED77A4DBFFCEB306EA2_inline (BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* __this, const RuntimeMethod* method) 
{
	{
		// public float Rotation { get { return rotation; } set { rotation = value; } }
		float L_0 = __this->___rotation_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* Animation_get_Timelines_m2F4B97551905154693EE8C220EA45393A47D37BB_inline (Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* __this, const RuntimeMethod* method) 
{
	{
		// get { return timelines; }
		ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* L_0 = __this->___timelines_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransformConstraintTimeline_get_TransformConstraintIndex_m47670BCF2C1A456783EFDFFD799E305CA434AB60_inline (TransformConstraintTimeline_t87B9B886C560FECD138AE9FCB23D78E4A0CAF885* __this, const RuntimeMethod* method) 
{
	{
		// return transformConstraintIndex;
		int32_t L_0 = __this->___transformConstraintIndex_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mADFF237C1F7E1FB019D2B99FC14B85246AAB208C_gshared_inline (List_1_tB438BD81EA09BED619B1B9DA1A87751333FB483B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		SkinEntryU5BU5D_t9B1C37E03A18055E30BDCA519343A43FF53C4486* L_3 = (SkinEntryU5BU5D_t9B1C37E03A18055E30BDCA519343A43FF53C4486*)__this->____items_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m498B7803B408E95A6D75A8E951E008D9ABED33DD_gshared_inline (Enumerator_t739C86133C966CD494DA3E584097A6CF08A5F453* __this, const RuntimeMethod* method) 
{
	{
		// return current;
		RuntimeObject* L_0 = (RuntimeObject*)__this->___current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F Enumerator_get_Current_m6C0B2624258072CB19F551437D538D2BB9A088D7_gshared_inline (Enumerator_t92EFC5F176EEDD1F17DA1F228A48D02841FBA834* __this, const RuntimeMethod* method) 
{
	{
		SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F L_0 = (SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
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
