﻿#include "pch-cpp.hpp"

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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>
struct Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>
struct Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>
struct Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>
struct Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>
struct Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>
struct Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846;
// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
// System.Collections.Generic.EqualityComparer`1<System.Int32Enum>
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Playables.Playable>
struct EqualityComparer_1_t58EDEA2EC3378026DE2B1F7B527DA04783CE8B0C;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct EqualityComparer_1_t03FC1F4BDEEEB984CADDBD55FA74C001CCF87C14;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.TextureId>
struct EqualityComparer_1_t6F269FFB501208619AE7D8A3B95BD94EF417A9CD;
// System.Collections.Generic.EqualityComparer`1<System.UInt32>
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>
struct EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>>
struct IEnumerator_1_tC9CB00ADB39129F8F2CAD02626A4AF7BEBDF96EC;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t327FF232159D9644239A65F54312F684DB7BE375;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Playables.Playable>>
struct IEnumerator_1_t9F768DDBDFEF945E6038DB71460650BFFC5EDA5A;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>>
struct IEnumerator_1_t4D2AFB1007F3036E68C51744D0E115847376C066;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.TextureId>>
struct IEnumerator_1_t3F4BB0846C19B9861F1B06459DF32760B1554424;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>>
struct IEnumerator_1_t43F0B5E3FAC11AFC247B1B6F3766BE4A633FD8D4;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>>
struct IEnumerator_1_tE53E9F2A897A5CDBC84A61137B95C2B92FCC0FF9;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>>
struct IEnumerator_1_t16D13278B7705F043E3CDE45DA514F629BBCA5DD;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>>
struct IEnumerator_1_t2ECE81E5EF3A972F3417B22E70AACC561664F3BE;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>
struct IEnumerator_1_t2DE25C0502538C48EB27BE7209E1CB26B8762D66;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.UInt32>
struct IEqualityComparer_1_t0BB8211419723EB61BF19007AC9D62365E50500E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32Enum>
struct KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Playables.Playable>
struct KeyCollection_t3BC0DD239D74221157A645B932C6E94D588A3D08;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct KeyCollection_tDBA045EF598FAB4361D41421DC611709C58BBFBF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.UIElements.TextureId>
struct KeyCollection_t127B555C3E0391183DAE759C055B051F87F40A73;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Vector2>
struct KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct KeyCollection_tF62DA58D084558E31E5A09537D460287D59B1A89;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,System.Int32>
struct KeyCollection_t75FACE8389D68A206D866CABFCC16E7F87A24680;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,System.Object>
struct KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32Enum>
struct ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Playables.Playable>
struct ValueCollection_t40B0EAC7EB1C567F500BD4DA8D18924923A4DFF3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct ValueCollection_t34EC7098883650F6F421A8175A58EEF83EDBBF61;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.UIElements.TextureId>
struct ValueCollection_t85BE239165DD7835E79A13ECE1F34AF2922A48D1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Vector2>
struct ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct ValueCollection_tB99ECE94AB57EE9AB1FAC3276CC7108B468367C9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Int32>
struct ValueCollection_tC22BD7A8B583315365C48DA9C733F4A75B63F50C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>
struct ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32Enum>[]
struct EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Playables.Playable>[]
struct EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>[]
struct EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.UIElements.TextureId>[]
struct EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Vector2>[]
struct EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>[]
struct EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>[]
struct EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Int32>[]
struct EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Object>[]
struct EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>[]
struct KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Playables.Playable>[]
struct KeyValuePair_2U5BU5D_tFD0DC47EA5E37B20F27CC84D76DD712ABEFD3524;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>[]
struct KeyValuePair_2U5BU5D_t2F8B6745F061C171C430E783D1B25395AC92080B;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.TextureId>[]
struct KeyValuePair_2U5BU5D_t99A5FD3F0B536B6D37DEBFD081CD6687E35E7DE4;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>[]
struct KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>[]
struct KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>[]
struct KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>[]
struct KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871;
// System.Runtime.CompilerServices.Ephemeron[]
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// UnityEngine.UIElements.StyleSheet
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;

struct EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01;
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54;
struct EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33;
struct EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D;
struct EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71;
struct EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF;
struct EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7;
struct EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8;
struct EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5;
struct EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4;
struct KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A;
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct KeyValuePair_2U5BU5D_tFD0DC47EA5E37B20F27CC84D76DD712ABEFD3524;
struct KeyValuePair_2U5BU5D_t2F8B6745F061C171C430E783D1B25395AC92080B;
struct KeyValuePair_2U5BU5D_t99A5FD3F0B536B6D37DEBFD081CD6687E35E7DE4;
struct KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F;
struct KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78;
struct KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075;
struct KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF;
struct KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject* ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>
struct Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* ____entries_1;
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
	KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* ____entries_1;
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
	KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>
struct Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* ____entries_1;
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
	KeyCollection_t3BC0DD239D74221157A645B932C6E94D588A3D08* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t40B0EAC7EB1C567F500BD4DA8D18924923A4DFF3* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* ____entries_1;
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
	KeyCollection_tDBA045EF598FAB4361D41421DC611709C58BBFBF* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t34EC7098883650F6F421A8175A58EEF83EDBBF61* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>
struct Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* ____entries_1;
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
	KeyCollection_t127B555C3E0391183DAE759C055B051F87F40A73* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t85BE239165DD7835E79A13ECE1F34AF2922A48D1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>
struct Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* ____entries_1;
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
	KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* ____entries_1;
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
	KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* ____entries_1;
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
	KeyCollection_tF62DA58D084558E31E5A09537D460287D59B1A89* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB99ECE94AB57EE9AB1FAC3276CC7108B468367C9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>
struct Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* ____entries_1;
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
	KeyCollection_t75FACE8389D68A206D866CABFCC16E7F87A24680* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC22BD7A8B583315365C48DA9C733F4A75B63F50C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>
struct Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* ____entries_1;
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
	KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846  : public RuntimeObject
{
};

struct EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};

struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Int32Enum>
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF  : public RuntimeObject
{
};

struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};

struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Playables.Playable>
struct EqualityComparer_1_t58EDEA2EC3378026DE2B1F7B527DA04783CE8B0C  : public RuntimeObject
{
};

struct EqualityComparer_1_t58EDEA2EC3378026DE2B1F7B527DA04783CE8B0C_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t58EDEA2EC3378026DE2B1F7B527DA04783CE8B0C* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct EqualityComparer_1_t03FC1F4BDEEEB984CADDBD55FA74C001CCF87C14  : public RuntimeObject
{
};

struct EqualityComparer_1_t03FC1F4BDEEEB984CADDBD55FA74C001CCF87C14_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t03FC1F4BDEEEB984CADDBD55FA74C001CCF87C14* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.TextureId>
struct EqualityComparer_1_t6F269FFB501208619AE7D8A3B95BD94EF417A9CD  : public RuntimeObject
{
};

struct EqualityComparer_1_t6F269FFB501208619AE7D8A3B95BD94EF417A9CD_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t6F269FFB501208619AE7D8A3B95BD94EF417A9CD* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.UInt32>
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862  : public RuntimeObject
{
};

struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>
struct EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E  : public RuntimeObject
{
};

struct EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438  : public RuntimeObject
{
};

struct EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* ___defaultComparer_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32Enum>
struct KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Playables.Playable>
struct KeyCollection_t3BC0DD239D74221157A645B932C6E94D588A3D08  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct KeyCollection_tDBA045EF598FAB4361D41421DC611709C58BBFBF  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.UIElements.TextureId>
struct KeyCollection_t127B555C3E0391183DAE759C055B051F87F40A73  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Vector2>
struct KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct KeyCollection_tF62DA58D084558E31E5A09537D460287D59B1A89  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,System.Int32>
struct KeyCollection_t75FACE8389D68A206D866CABFCC16E7F87A24680  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,System.Object>
struct KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32Enum>
struct ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Playables.Playable>
struct ValueCollection_t40B0EAC7EB1C567F500BD4DA8D18924923A4DFF3  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct ValueCollection_t34EC7098883650F6F421A8175A58EEF83EDBBF61  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.UIElements.TextureId>
struct ValueCollection_t85BE239165DD7835E79A13ECE1F34AF2922A48D1  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Vector2>
struct ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct ValueCollection_tB99ECE94AB57EE9AB1FAC3276CC7108B468367C9  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Int32>
struct ValueCollection_tC22BD7A8B583315365C48DA9C733F4A75B63F50C  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>
struct ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* ____dictionary_0;
};
struct Il2CppArrayBounds;

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
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

// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32Enum>
struct Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject* ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	int32_t ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>
struct Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject* ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	RuntimeObject* ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Int32>
struct Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	uint32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	int32_t ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Object>
struct Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	uint32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	RuntimeObject* ___value_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>
struct KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>
struct KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>
struct KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
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

// UnityEngine.TextCore.LowLevel.GlyphValueRecord
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::m_XPlacement
	float ___m_XPlacement_0;
	// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::m_YPlacement
	float ___m_YPlacement_1;
	// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::m_XAdvance
	float ___m_XAdvance_2;
	// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::m_YAdvance
	float ___m_YAdvance_3;
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

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// UnityEngine.UIElements.StyleValueHandle
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D 
{
	// UnityEngine.UIElements.StyleValueType UnityEngine.UIElements.StyleValueHandle::m_ValueType
	int32_t ___m_ValueType_0;
	// System.Int32 UnityEngine.UIElements.StyleValueHandle::valueIndex
	int32_t ___valueIndex_1;
};

// UnityEngine.UIElements.TextureId
struct TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 
{
	// System.Int32 UnityEngine.UIElements.TextureId::m_Index
	int32_t ___m_Index_0;
};

struct TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_StaticFields
{
	// UnityEngine.UIElements.TextureId UnityEngine.UIElements.TextureId::invalid
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___invalid_1;
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

// UnityEngine.UIElements.StyleComplexSelector/PseudoStateData
struct PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 
{
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.StyleComplexSelector/PseudoStateData::state
	int32_t ___state_0;
	// System.Boolean UnityEngine.UIElements.StyleComplexSelector/PseudoStateData::negate
	bool ___negate_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleComplexSelector/PseudoStateData
struct PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshaled_pinvoke
{
	int32_t ___state_0;
	int32_t ___negate_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleComplexSelector/PseudoStateData
struct PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshaled_com
{
	int32_t ___state_0;
	int32_t ___negate_1;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.UIElements.TextureId>
struct Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject* ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Vector2>
struct Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject* ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject* ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32Enum>
struct Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.Int32>
struct Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.Object>
struct Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.TextureId>
struct KeyValuePair_2_tCDE07F3B8CB119BF2539CFB17A3B21E4D3C5FA33 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>
struct KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value_1;
};

// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	// System.UInt32 UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::m_GlyphIndex
	uint32_t ___m_GlyphIndex_0;
	// UnityEngine.TextCore.LowLevel.GlyphValueRecord UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::m_GlyphValueRecord
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord_1;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.UIElements.StyleSheets.StylePropertyValue
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 
{
	// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.StyleSheets.StylePropertyValue::sheet
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	// UnityEngine.UIElements.StyleValueHandle UnityEngine.UIElements.StyleSheets.StylePropertyValue::handle
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSheets.StylePropertyValue
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSheets.StylePropertyValue
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle_1;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject* ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.UIElements.TextureId>
struct Enumerator_t598538E185ADFA10868FF9ADC47046D729703F83 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tCDE07F3B8CB119BF2539CFB17A3B21E4D3C5FA33 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Vector2>
struct Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct KeyValuePair_2_t1F6CA1DFD5BE9F6E000B16910DAC52C42E9B1567 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ___value_1;
};

// UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::m_FirstAdjustmentRecord
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord_0;
	// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::m_SecondAdjustmentRecord
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord_1;
	// UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::m_FeatureLookupFlags
	int32_t ___m_FeatureLookupFlags_2;
};

// UnityEngine.Playables.Playable
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields
{
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___m_NullPlayable_1;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Playables.Playable>
struct Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject* ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	uint32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___value_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Enumerator_t40E1AAA6125CAE802A28A66BA82099F5D1E79AB8 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t1F6CA1DFD5BE9F6E000B16910DAC52C42E9B1567 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Playables.Playable>
struct KeyValuePair_2_tCAE73600E42C98F157AED3810CD978F5F98FECC6 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___value_1;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Playables.Playable>
struct Enumerator_tE29F4D9FA857F053287813BD71EE8199D901BA5C 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tCAE73600E42C98F157AED3810CD978F5F98FECC6 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>
struct Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32Enum>[]
struct EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202 m_Items[1];

	inline Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
	inline Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
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
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>[]
struct KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E m_Items[1];

	inline KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC m_Items[1];

	inline Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
		#endif
	}
	inline Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 m_Items[1];

	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Playables.Playable>[]
struct EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF m_Items[1];

	inline Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
	inline Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Playables.Playable>[]
struct KeyValuePair_2U5BU5D_tFD0DC47EA5E37B20F27CC84D76DD712ABEFD3524  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tCAE73600E42C98F157AED3810CD978F5F98FECC6 m_Items[1];

	inline KeyValuePair_2_tCAE73600E42C98F157AED3810CD978F5F98FECC6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tCAE73600E42C98F157AED3810CD978F5F98FECC6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tCAE73600E42C98F157AED3810CD978F5F98FECC6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_tCAE73600E42C98F157AED3810CD978F5F98FECC6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tCAE73600E42C98F157AED3810CD978F5F98FECC6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tCAE73600E42C98F157AED3810CD978F5F98FECC6 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>[]
struct EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98 m_Items[1];

	inline Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___sheet_0), (void*)NULL);
		#endif
	}
	inline Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___sheet_0), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>[]
struct KeyValuePair_2U5BU5D_t2F8B6745F061C171C430E783D1B25395AC92080B  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t1F6CA1DFD5BE9F6E000B16910DAC52C42E9B1567 m_Items[1];

	inline KeyValuePair_2_t1F6CA1DFD5BE9F6E000B16910DAC52C42E9B1567 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t1F6CA1DFD5BE9F6E000B16910DAC52C42E9B1567* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t1F6CA1DFD5BE9F6E000B16910DAC52C42E9B1567 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___sheet_0), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t1F6CA1DFD5BE9F6E000B16910DAC52C42E9B1567 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t1F6CA1DFD5BE9F6E000B16910DAC52C42E9B1567* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t1F6CA1DFD5BE9F6E000B16910DAC52C42E9B1567 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___sheet_0), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.UIElements.TextureId>[]
struct EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216 m_Items[1];

	inline Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
	inline Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.TextureId>[]
struct KeyValuePair_2U5BU5D_t99A5FD3F0B536B6D37DEBFD081CD6687E35E7DE4  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tCDE07F3B8CB119BF2539CFB17A3B21E4D3C5FA33 m_Items[1];

	inline KeyValuePair_2_tCDE07F3B8CB119BF2539CFB17A3B21E4D3C5FA33 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tCDE07F3B8CB119BF2539CFB17A3B21E4D3C5FA33* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tCDE07F3B8CB119BF2539CFB17A3B21E4D3C5FA33 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_tCDE07F3B8CB119BF2539CFB17A3B21E4D3C5FA33 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tCDE07F3B8CB119BF2539CFB17A3B21E4D3C5FA33* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tCDE07F3B8CB119BF2539CFB17A3B21E4D3C5FA33 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Vector2>[]
struct EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192 m_Items[1];

	inline Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
	inline Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>[]
struct KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 m_Items[1];

	inline KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>[]
struct EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164 m_Items[1];

	inline Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
	inline Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>[]
struct KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 m_Items[1];

	inline KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>[]
struct EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578 m_Items[1];

	inline Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578 value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>[]
struct KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 m_Items[1];

	inline KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Int32>[]
struct EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677 m_Items[1];

	inline Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677 value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 m_Items[1];

	inline KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Object>[]
struct EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 m_Items[1];

	inline Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
	inline Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>[]
struct KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B m_Items[1];

	inline KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};


// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m5F61006E81BB25289F0C3D745455FB1CCAA02260_gshared (KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32Enum>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9ADB868E1ED9E8EDCD69E204491B2ACAE057C37F_gshared (Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6* __this, Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6292961FFE75CF7AC7700A710A5F01DC22696D54_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Playables.Playable>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m41F3CA443A31FCDF0323BBDE546CC2D7BD83754A_gshared (KeyValuePair_2_tCAE73600E42C98F157AED3810CD978F5F98FECC6* __this, RuntimeObject* ___key0, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Playables.Playable>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m902B0E54E2ED8F243AE9DE5969E35AFF74E733E1_gshared (Enumerator_tE29F4D9FA857F053287813BD71EE8199D901BA5C* __this, Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m03D6345F85FB8B7C847AAD752308C1BFE1BEBEE8_gshared (KeyValuePair_2_t1F6CA1DFD5BE9F6E000B16910DAC52C42E9B1567* __this, RuntimeObject* ___key0, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m12A6898E38BECEE7D1B3935CFDB7E34FF84D4A6B_gshared (Enumerator_t40E1AAA6125CAE802A28A66BA82099F5D1E79AB8* __this, Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.TextureId>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m8B169BEA1EFAAD577BD303A8FA34FAE1B49DD367_gshared (KeyValuePair_2_tCDE07F3B8CB119BF2539CFB17A3B21E4D3C5FA33* __this, RuntimeObject* ___key0, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.UIElements.TextureId>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mD4B34871ABA88F8D59DC3127D29513871E458ABB_gshared (Enumerator_t598538E185ADFA10868FF9ADC47046D729703F83* __this, Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m4727158B54F9EB5857F41AA2AA93AF1815148077_gshared (KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4* __this, RuntimeObject* ___key0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Vector2>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m3DA0996D376CC3B5563A4EA329A46E2F1B91E38C_gshared (Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48* __this, Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m899F53F40BCAA19E77F5E9A552CAA43D134B9CC9_gshared (KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7* __this, RuntimeObject* ___key0, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mEB026458339B7ECD4D5E558C57D012096E15822B_gshared (Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672* __this, Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m83FF8D9D5D047EC20DB6120FECFD94458EDEAF46_gshared (KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041* __this, uint32_t ___key0, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8C797EAC717E2480B0FAE19F0A832098D14F0695_gshared (Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A* __this, Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mF96E7D4319F6EC095B474DDCE1CDB1F3588007D8_gshared (KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655* __this, uint32_t ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m7C1A230D6719B4613FCC45869D3618E057A0B21D_gshared (Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD* __this, Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mB53C3BFAA104E91A4E9330E29FF5D5A835526360_gshared (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* __this, uint32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6BB73FBB588BB87421C1222CAE727AD52F96CAD4_gshared (Enumerator_t42FC023879D0041F2016540629807C485A03B1A7* __this, Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.HashHelpers::get_SerializationInfoTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::Add(TKey,TValue)
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___key0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___value1, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ThrowHelper::ThrowKeyNotFoundException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowIndexArgumentOutOfRange_NeedNonNegNumException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentException(System.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___resource0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m5F61006E81BB25289F0C3D745455FB1CCAA02260 (KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E*, RuntimeObject*, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m5F61006E81BB25289F0C3D745455FB1CCAA02260_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32Enum>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m9ADB868E1ED9E8EDCD69E204491B2ACAE057C37F (Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6* __this, Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6*, Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, int32_t, const RuntimeMethod*))Enumerator__ctor_m9ADB868E1ED9E8EDCD69E204491B2ACAE057C37F_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// System.Void System.ThrowHelper::ThrowInvalidOperationException_ConcurrentOperationsNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
// System.Int32 System.Collections.HashHelpers::GetPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___min0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowAddingDuplicateWithKeyArgumentException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.HashHelpers::ExpandPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___oldSize0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950 (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m6292961FFE75CF7AC7700A710A5F01DC22696D54 (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9*, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, int32_t, const RuntimeMethod*))Enumerator__ctor_m6292961FFE75CF7AC7700A710A5F01DC22696D54_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Playables.Playable>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m41F3CA443A31FCDF0323BBDE546CC2D7BD83754A (KeyValuePair_2_tCAE73600E42C98F157AED3810CD978F5F98FECC6* __this, RuntimeObject* ___key0, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tCAE73600E42C98F157AED3810CD978F5F98FECC6*, RuntimeObject*, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, const RuntimeMethod*))KeyValuePair_2__ctor_m41F3CA443A31FCDF0323BBDE546CC2D7BD83754A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Playables.Playable>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m902B0E54E2ED8F243AE9DE5969E35AFF74E733E1 (Enumerator_tE29F4D9FA857F053287813BD71EE8199D901BA5C* __this, Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE29F4D9FA857F053287813BD71EE8199D901BA5C*, Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, int32_t, const RuntimeMethod*))Enumerator__ctor_m902B0E54E2ED8F243AE9DE5969E35AFF74E733E1_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m03D6345F85FB8B7C847AAD752308C1BFE1BEBEE8 (KeyValuePair_2_t1F6CA1DFD5BE9F6E000B16910DAC52C42E9B1567* __this, RuntimeObject* ___key0, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t1F6CA1DFD5BE9F6E000B16910DAC52C42E9B1567*, RuntimeObject*, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2, const RuntimeMethod*))KeyValuePair_2__ctor_m03D6345F85FB8B7C847AAD752308C1BFE1BEBEE8_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m12A6898E38BECEE7D1B3935CFDB7E34FF84D4A6B (Enumerator_t40E1AAA6125CAE802A28A66BA82099F5D1E79AB8* __this, Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t40E1AAA6125CAE802A28A66BA82099F5D1E79AB8*, Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, int32_t, const RuntimeMethod*))Enumerator__ctor_m12A6898E38BECEE7D1B3935CFDB7E34FF84D4A6B_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.TextureId>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m8B169BEA1EFAAD577BD303A8FA34FAE1B49DD367 (KeyValuePair_2_tCDE07F3B8CB119BF2539CFB17A3B21E4D3C5FA33* __this, RuntimeObject* ___key0, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tCDE07F3B8CB119BF2539CFB17A3B21E4D3C5FA33*, RuntimeObject*, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58, const RuntimeMethod*))KeyValuePair_2__ctor_m8B169BEA1EFAAD577BD303A8FA34FAE1B49DD367_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.UIElements.TextureId>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_mD4B34871ABA88F8D59DC3127D29513871E458ABB (Enumerator_t598538E185ADFA10868FF9ADC47046D729703F83* __this, Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t598538E185ADFA10868FF9ADC47046D729703F83*, Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, int32_t, const RuntimeMethod*))Enumerator__ctor_mD4B34871ABA88F8D59DC3127D29513871E458ABB_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m4727158B54F9EB5857F41AA2AA93AF1815148077 (KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4* __this, RuntimeObject* ___key0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))KeyValuePair_2__ctor_m4727158B54F9EB5857F41AA2AA93AF1815148077_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Vector2>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m3DA0996D376CC3B5563A4EA329A46E2F1B91E38C (Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48* __this, Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48*, Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, int32_t, const RuntimeMethod*))Enumerator__ctor_m3DA0996D376CC3B5563A4EA329A46E2F1B91E38C_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m899F53F40BCAA19E77F5E9A552CAA43D134B9CC9 (KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7* __this, RuntimeObject* ___key0, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7*, RuntimeObject*, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, const RuntimeMethod*))KeyValuePair_2__ctor_m899F53F40BCAA19E77F5E9A552CAA43D134B9CC9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_mEB026458339B7ECD4D5E558C57D012096E15822B (Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672* __this, Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672*, Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, int32_t, const RuntimeMethod*))Enumerator__ctor_mEB026458339B7ECD4D5E558C57D012096E15822B_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m83FF8D9D5D047EC20DB6120FECFD94458EDEAF46 (KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041* __this, uint32_t ___key0, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041*, uint32_t, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, const RuntimeMethod*))KeyValuePair_2__ctor_m83FF8D9D5D047EC20DB6120FECFD94458EDEAF46_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m8C797EAC717E2480B0FAE19F0A832098D14F0695 (Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A* __this, Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A*, Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, int32_t, const RuntimeMethod*))Enumerator__ctor_m8C797EAC717E2480B0FAE19F0A832098D14F0695_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// System.Int32 System.UInt32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mF96E7D4319F6EC095B474DDCE1CDB1F3588007D8 (KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655* __this, uint32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655*, uint32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_mF96E7D4319F6EC095B474DDCE1CDB1F3588007D8_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m7C1A230D6719B4613FCC45869D3618E057A0B21D (Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD* __this, Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD*, Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, int32_t, const RuntimeMethod*))Enumerator__ctor_m7C1A230D6719B4613FCC45869D3618E057A0B21D_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mB53C3BFAA104E91A4E9330E29FF5D5A835526360 (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B* __this, uint32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B*, uint32_t, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mB53C3BFAA104E91A4E9330E29FF5D5A835526360_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m6BB73FBB588BB87421C1222CAE727AD52F96CAD4 (Enumerator_t42FC023879D0041F2016540629807C485A03B1A7* __this, Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t42FC023879D0041F2016540629807C485A03B1A7*, Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, int32_t, const RuntimeMethod*))Enumerator__ctor_m6BB73FBB588BB87421C1222CAE727AD52F96CAD4_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE0470880427DED948EF413AD5E9525F41CAF7D1D_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m74DCDE3265AA8B6A55B3D3009289CD1240290B3D_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0A9B3E0FB7FDFBAC7C3CAD274EB0CAA82BA7E002_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCA459A185D015CE8748087064B1626AF8C07F998_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m93CAE08497F0A08B7339DF54D8B954E12C710988_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m36874AA15E8FDC5B6FCA750FD427E2AAF833AF60_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39* Dictionary_2_get_Keys_mED05C8DC22F8A4FD65EB6257EA009CB21EF69E4C_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39* L_0 = (KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39* L_1 = (KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39*, Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39* L_2 = (KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6* Dictionary_2_get_Values_mC76F6F08CC2AA6C3D1843FA0F654E9277C2CC3A5_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6* L_0 = (ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6* L_1 = (ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6*, Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6* L_2 = (ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6*)__this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m14B4D7B4BDD73D1A4985E09747AF5B2B6A6444D1_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_3 = (EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___key0;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC0F84089707699016E685213CFF60997BC7CB12B_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, RuntimeObject*, int32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m53A4E919CB3AE7CC74379031E14C1AEA9DB7A933_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, RuntimeObject*, int32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE5C569C9F61FA5C4983F23D48C658C92C9B482BE_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		int32_t L_1 = (int32_t)(&___keyValuePair0)->___value_1;
		((  void (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mD0D584176D94DC3F23D7A818EBE0D9E7F6207695_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3;
		L_3 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_4 = (EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		int32_t L_7 = (int32_t)(&___keyValuePair0)->___value_1;
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mB0FF0455BE81815825CF0BFBE26F248312182B67_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3;
		L_3 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_4 = (EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		int32_t L_7 = (int32_t)(&___keyValuePair0)->___value_1;
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m0395FEE6C1CD71B9CA22784FE500574448F135D2_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_4 = (EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m480A9507410375C999B20A1E0FA56C7E41489974_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mF166C6D448F5931612255EF1729780217A949CD8_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_0 = (EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = (int32_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_15;
		L_15 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = (int32_t)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		int32_t L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_24;
		L_24 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_28 = V_4;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = (int32_t)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		int32_t L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mEFF090C74B306E619486D47595466B7CA36A099E_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_7 = (EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = (int32_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m5F61006E81BB25289F0C3D745455FB1CCAA02260((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6 Dictionary_2_GetEnumerator_m00A701DDD5D50959FC80D710EC62B1A179F7A9FB_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9ADB868E1ED9E8EDCD69E204491B2ACAE057C37F((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mE5DC7E20DD1BE8FDA806F1CEF120812777824F1D_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9ADB868E1ED9E8EDCD69E204491B2ACAE057C37F((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m734E6FEEBAF5B010696F3FC05F61E86E059309AC_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_2 = (EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_41 = (RuntimeObject*)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		RuntimeObject* L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		RuntimeObject* L_67 = (RuntimeObject*)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		RuntimeObject* L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mBC34B4348592C84E757A93637BB081529726D111_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_5 = (EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)(EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 29), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m86AE13BB485AC7F1EC588285A0B5A279914982DC_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___key0, int32_t ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_4 = (EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((___key0));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		RuntimeObject* L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = (int32_t)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next_1;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_44 = V_0;
		NullCheck(L_44);
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = (int32_t)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode_0;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key_2;
		RuntimeObject* L_53 = ___key0;
		NullCheck(L_49);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___behavior2;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		int32_t L_58 = ___value1;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value_3 = L_58;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___behavior2;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = (int32_t)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___next_1;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_65 = V_0;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_68 = V_0;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = (int32_t)((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode_0;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		RuntimeObject* L_76 = (RuntimeObject*)((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___key_2;
		RuntimeObject* L_77 = ___key0;
		NullCheck(L_73);
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___behavior2;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		int32_t L_82 = ___value1;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value_3 = L_82;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = (int32_t)((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___next_1;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_89 = V_0;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = (int32_t)__this->____freeList_3;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = (int32_t)__this->____count_2;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_96 = V_0;
		NullCheck(L_96);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_99 = (EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)__this->____entries_1;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_104);
		NullCheck(L_102);
		G_B51_0 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_105 = V_0;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		V_10 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_108 = V_10;
		int32_t L_109 = (int32_t)L_108->___next_1;
		__this->____freeList_3 = L_109;
	}

IL_028a:
	{
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode_0 = L_111;
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_115 = V_10;
		RuntimeObject* L_116 = ___key0;
		L_115->___key_2 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key_2), (void*)L_116);
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_117 = V_10;
		int32_t L_118 = ___value1;
		L_117->___value_3 = L_118;
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5C3CB7870F7AD4CC7A08F579E1FE750B01A3EDFD_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m1952E437421DDF86044AD290578CBD66AFE48EF1_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_3 = (EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)(EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 29), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_5 = (EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)__this->____entries_1;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		NullCheck((*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___newSize0;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m01C457D21E125EBF1F8E25FC97116753746A8629_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_13 = (EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_21 = V_4;
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_25 = V_4;
		RuntimeObject* L_26 = (RuntimeObject*)L_25->___key_2;
		RuntimeObject* L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_34 = (EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!true)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_43 = V_4;
		int32_t* L_44 = (int32_t*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(int32_t));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0786A6332E06581557A6E9D4DA5000AF5BC8A373_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___key0, int32_t* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_3 = ___value1;
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_4 = (EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(int32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		int32_t* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m4BF559D0120F5845BEB02782EF05D7807CDA36EF_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mAE68110ECBB947192E9EC0AFA841EAB58EAABCB0_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, KeyValuePair_2U5BU5D_tE4B30B0755E4E979D68C7D8B7601F0D2A823049A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m0B05499E75DED5026F64870EE83F80D794B0527A_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9ADB868E1ED9E8EDCD69E204491B2ACAE057C37F((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Enumerator_tB389395A2FD246B4D96A33CFE98D146137FA3ED6 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mD7147496A590067A7BB611A6FB6E1CF0DF4CAA89_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mB5E1D933E801C2818A7145B11539CD6BC0CF7864_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* L_5 = (EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = (int32_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 17), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mAFA95909B33F8017D292ED06CDF0C853D3C555C2_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m7D74AE9C90FD256430927C7F1A120BE1E4A3BDED_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF67467217142A79C407188798209E4524D74D34F_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m126C1BEA6D7624D5BA6F989BE16D8C725B247892_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* L_0 = (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* L_1 = (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974*, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* L_2 = (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* L_0 = (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* L_1 = (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA*, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* L_2 = (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA*)__this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_3 = (EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = (RuntimeObject*)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___key0;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE4F45446B73707AD95FBDC32A0260AAF88A1F6BB_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		RuntimeObject* L_1 = (RuntimeObject*)(&___keyValuePair0)->___value_1;
		((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mAE8B115E339245F99515A41E4B57996CF2F811C4_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_4 = (EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7 = (RuntimeObject*)(&___keyValuePair0)->___value_1;
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mD258677B8F2C8D8AF2700AE5336742B2D81CE6F6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_4 = (EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7 = (RuntimeObject*)(&___keyValuePair0)->___value_1;
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_4 = (EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m51A7764AD04D34D0B2CDB01F960FA1FEBCF6B562_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_0 = (EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)__this->____entries_1;
		V_0 = L_0;
		RuntimeObject* L_1 = ___value0;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = (RuntimeObject*)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		RuntimeObject* L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = (RuntimeObject*)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		RuntimeObject* L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE5E1D7345A65B2BA11AA747A2A83C94D83835E00_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_7 = (EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6292961FFE75CF7AC7700A710A5F01DC22696D54((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8C1D7A88B86E46C4CB723680E3B78A85D9D8148F_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6292961FFE75CF7AC7700A710A5F01DC22696D54((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_2 = (EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_41 = (RuntimeObject*)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		RuntimeObject* L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		RuntimeObject* L_67 = (RuntimeObject*)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		RuntimeObject* L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m8C8AD88CD59FD99C812609BBFB9B3A263C210BF3_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_5 = (EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)(EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 29), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m8AC342129E60FB993AF5F8521D0C1F8D078E4F61_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_4 = (EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((___key0));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		RuntimeObject* L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = (int32_t)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next_1;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_44 = V_0;
		NullCheck(L_44);
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = (int32_t)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode_0;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key_2;
		RuntimeObject* L_53 = ___key0;
		NullCheck(L_49);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___behavior2;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		RuntimeObject* L_58 = ___value1;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value_3 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value_3), (void*)L_58);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___behavior2;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = (int32_t)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___next_1;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_65 = V_0;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_68 = V_0;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = (int32_t)((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode_0;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		RuntimeObject* L_76 = (RuntimeObject*)((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___key_2;
		RuntimeObject* L_77 = ___key0;
		NullCheck(L_73);
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___behavior2;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		RuntimeObject* L_82 = ___value1;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value_3 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value_3), (void*)L_82);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = (int32_t)((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___next_1;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_89 = V_0;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = (int32_t)__this->____freeList_3;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = (int32_t)__this->____count_2;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_96 = V_0;
		NullCheck(L_96);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_99 = (EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)__this->____entries_1;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_104);
		NullCheck(L_102);
		G_B51_0 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_105 = V_0;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		V_10 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_108 = V_10;
		int32_t L_109 = (int32_t)L_108->___next_1;
		__this->____freeList_3 = L_109;
	}

IL_028a:
	{
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode_0 = L_111;
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_115 = V_10;
		RuntimeObject* L_116 = ___key0;
		L_115->___key_2 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key_2), (void*)L_116);
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_117 = V_10;
		RuntimeObject* L_118 = ___value1;
		L_117->___value_3 = L_118;
		Il2CppCodeGenWriteBarrier((void**)(&L_117->___value_3), (void*)L_118);
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA6C088D61E2C3298854B5E200885EE8C83DC7FCD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA59B4C46D3FD1E0488449B2A24B4E8FA720B1A17_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_3 = (EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)(EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 29), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_5 = (EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)__this->____entries_1;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		NullCheck((*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___newSize0;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_13 = (EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_21 = V_4;
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_25 = V_4;
		RuntimeObject* L_26 = (RuntimeObject*)L_25->___key_2;
		RuntimeObject* L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_34 = (EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!true)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		if (!true)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___value1;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_4 = (EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m0D26498B424A016B4A5875084457E7986A712B4F_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m90DC588CF96EBCD9F7A5E89F7528F5E042ABB5AC_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mB9C97E1EB106EAA29ACF7225F0D80A1C87AA5F0B_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6292961FFE75CF7AC7700A710A5F01DC22696D54((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m453A883BEF50A66C1D00181343ACCAC30E23E365_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m3EF27E31739B326F7BE58F06F95EB5AA9F2A717E_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_5 = (EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m1352264619A59DDDDED2B786BB60912F4CACCEE8_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m6787D3BECEBC5FA16E5A7603242C631E433A9A33_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC6FA4BDA5A4470133D93A1D438A9E748D314FA7_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m706ADAE9BFB4ED0D25DA36BADE0908F22D4CA1C4_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC7F0E662A146DA29A6DCED488032711A958BE07F_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC7899830158035F6263DE131CE2F336D7FED3E7D_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1D2DEBB7CDCB076C14FF9B479ADA96592902667C_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1F58087E1D0CB6EB42ED9CAEED92842304A07264_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t3BC0DD239D74221157A645B932C6E94D588A3D08* Dictionary_2_get_Keys_mD0F82BE2549A994DEF41A6025F14F39E256A3B3F_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t3BC0DD239D74221157A645B932C6E94D588A3D08* L_0 = (KeyCollection_t3BC0DD239D74221157A645B932C6E94D588A3D08*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t3BC0DD239D74221157A645B932C6E94D588A3D08* L_1 = (KeyCollection_t3BC0DD239D74221157A645B932C6E94D588A3D08*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t3BC0DD239D74221157A645B932C6E94D588A3D08*, Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t3BC0DD239D74221157A645B932C6E94D588A3D08* L_2 = (KeyCollection_t3BC0DD239D74221157A645B932C6E94D588A3D08*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t40B0EAC7EB1C567F500BD4DA8D18924923A4DFF3* Dictionary_2_get_Values_mD07E03855712F3F92ECE26CD284A210DD3F902BF_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t40B0EAC7EB1C567F500BD4DA8D18924923A4DFF3* L_0 = (ValueCollection_t40B0EAC7EB1C567F500BD4DA8D18924923A4DFF3*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t40B0EAC7EB1C567F500BD4DA8D18924923A4DFF3* L_1 = (ValueCollection_t40B0EAC7EB1C567F500BD4DA8D18924923A4DFF3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t40B0EAC7EB1C567F500BD4DA8D18924923A4DFF3*, Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t40B0EAC7EB1C567F500BD4DA8D18924923A4DFF3* L_2 = (ValueCollection_t40B0EAC7EB1C567F500BD4DA8D18924923A4DFF3*)__this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F Dictionary_2_get_Item_m5A5FD46EDDDC7261BC5C872FF1132BBAB305557A_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_3 = (EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_5 = (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___key0;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F));
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m66688A2D6177881AE57D3EDCF47AE4C79E7BEBC7_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, RuntimeObject* ___key0, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, RuntimeObject*, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mE85B20EF7D6EDF79958F88667FF739CE0F69830B_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, RuntimeObject* ___key0, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, RuntimeObject*, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m397BF17F87451E5803183F23D9CDB457DD26F201_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, KeyValuePair_2_tCAE73600E42C98F157AED3810CD978F5F98FECC6 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1 = (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F)(&___keyValuePair0)->___value_1;
		((  void (*) (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, RuntimeObject*, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mE4E6047693201CC426EA233BDD0B1C954966DA43_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, KeyValuePair_2_tCAE73600E42C98F157AED3810CD978F5F98FECC6 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t58EDEA2EC3378026DE2B1F7B527DA04783CE8B0C* L_3;
		L_3 = ((  EqualityComparer_1_t58EDEA2EC3378026DE2B1F7B527DA04783CE8B0C* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_4 = (EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_6 = (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_7 = (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F)(&___keyValuePair0)->___value_1;
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Playables.Playable>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mAA936E3C3E55F8AA7AB1D7829CE642C6D0A5A7F2_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, KeyValuePair_2_tCAE73600E42C98F157AED3810CD978F5F98FECC6 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t58EDEA2EC3378026DE2B1F7B527DA04783CE8B0C* L_3;
		L_3 = ((  EqualityComparer_1_t58EDEA2EC3378026DE2B1F7B527DA04783CE8B0C* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_4 = (EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_6 = (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_7 = (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F)(&___keyValuePair0)->___value_1;
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Playables.Playable>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m08E843FE56E245E7446882D1B4316A5E9D08515C_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_4 = (EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m1DCDF3C0596B74FEB613D33682EA1EBF7891ABDB_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m91ABA4F303AB60DEA040D960873FACD23E51BCE6_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* V_0 = NULL;
	int32_t V_1 = 0;
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t58EDEA2EC3378026DE2B1F7B527DA04783CE8B0C* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_0 = (EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_7 = (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t58EDEA2EC3378026DE2B1F7B527DA04783CE8B0C* L_15;
		L_15 = ((  EqualityComparer_1_t58EDEA2EC3378026DE2B1F7B527DA04783CE8B0C* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_18 = (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Playables.Playable>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t58EDEA2EC3378026DE2B1F7B527DA04783CE8B0C* L_24;
		L_24 = ((  EqualityComparer_1_t58EDEA2EC3378026DE2B1F7B527DA04783CE8B0C* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t58EDEA2EC3378026DE2B1F7B527DA04783CE8B0C* L_28 = V_4;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_31 = (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Playables.Playable>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mFA3D5F43D23F4A3C8C3287E359893615C0F76E34_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, KeyValuePair_2U5BU5D_tFD0DC47EA5E37B20F27CC84D76DD712ABEFD3524* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tFD0DC47EA5E37B20F27CC84D76DD712ABEFD3524* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_tFD0DC47EA5E37B20F27CC84D76DD712ABEFD3524* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tFD0DC47EA5E37B20F27CC84D76DD712ABEFD3524* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_7 = (EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tFD0DC47EA5E37B20F27CC84D76DD712ABEFD3524* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_19 = (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tCAE73600E42C98F157AED3810CD978F5F98FECC6 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m41F3CA443A31FCDF0323BBDE546CC2D7BD83754A((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tCAE73600E42C98F157AED3810CD978F5F98FECC6)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE29F4D9FA857F053287813BD71EE8199D901BA5C Dictionary_2_GetEnumerator_m67DC0620E8FAB91D9B8751C95E3E97788368B5A8_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE29F4D9FA857F053287813BD71EE8199D901BA5C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m902B0E54E2ED8F243AE9DE5969E35AFF74E733E1((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mDBB2D4841EA2F5ACC89DD2C605439090B8489153_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE29F4D9FA857F053287813BD71EE8199D901BA5C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m902B0E54E2ED8F243AE9DE5969E35AFF74E733E1((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Enumerator_tE29F4D9FA857F053287813BD71EE8199D901BA5C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mA0693E722A8C54436B3A028E944BBF9245FCA740_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_2 = (EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_41 = (RuntimeObject*)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		RuntimeObject* L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		RuntimeObject* L_67 = (RuntimeObject*)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		RuntimeObject* L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mF743EFA6F44B91AAF8B2600B6D7E7F368813A5B2_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_5 = (EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33*)(EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 29), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m4DF1FE4E4F90E1EC6BA82B90B6EDE3BDE116C92D_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, RuntimeObject* ___key0, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_4 = (EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((___key0));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		RuntimeObject* L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = (int32_t)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next_1;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_44 = V_0;
		NullCheck(L_44);
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = (int32_t)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode_0;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key_2;
		RuntimeObject* L_53 = ___key0;
		NullCheck(L_49);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___behavior2;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_58 = ___value1;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value_3 = L_58;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___behavior2;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = (int32_t)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___next_1;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_65 = V_0;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_68 = V_0;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = (int32_t)((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode_0;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		RuntimeObject* L_76 = (RuntimeObject*)((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___key_2;
		RuntimeObject* L_77 = ___key0;
		NullCheck(L_73);
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___behavior2;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_82 = ___value1;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value_3 = L_82;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = (int32_t)((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___next_1;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_89 = V_0;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = (int32_t)__this->____freeList_3;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = (int32_t)__this->____count_2;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_96 = V_0;
		NullCheck(L_96);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_99 = (EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33*)__this->____entries_1;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_104);
		NullCheck(L_102);
		G_B51_0 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_105 = V_0;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		V_10 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF* L_108 = V_10;
		int32_t L_109 = (int32_t)L_108->___next_1;
		__this->____freeList_3 = L_109;
	}

IL_028a:
	{
		Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode_0 = L_111;
		Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF* L_115 = V_10;
		RuntimeObject* L_116 = ___key0;
		L_115->___key_2 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key_2), (void*)L_116);
		Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF* L_117 = V_10;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_118 = ___value1;
		L_117->___value_3 = L_118;
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m46D2C3995E6993D7EFDAE711532F027AE486F105_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4693DB1AE5271F21A27A2457ADDBAF0B61F8C346_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_3 = (EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33*)(EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 29), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_5 = (EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33*)__this->____entries_1;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		NullCheck((*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___newSize0;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5A3DFDCFFA8C965B740806264140B4AEF128C91A_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_13 = (EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF* L_21 = V_4;
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF* L_25 = V_4;
		RuntimeObject* L_26 = (RuntimeObject*)L_25->___key_2;
		RuntimeObject* L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_34 = (EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!true)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF* L_43 = V_4;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* L_44 = (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB222133D92EE2CBC67AAA4ED1B5D86E9DF3D32C7_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, RuntimeObject* ___key0, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* L_3 = ___value1;
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_4 = (EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_6 = (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mF66B1986A67E598B271A28900AB7ABD9E0529D1B_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mB25C0912E185CDC655CB5A5B0082A14A6EA97F4A_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, KeyValuePair_2U5BU5D_tFD0DC47EA5E37B20F27CC84D76DD712ABEFD3524* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tFD0DC47EA5E37B20F27CC84D76DD712ABEFD3524* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, KeyValuePair_2U5BU5D_tFD0DC47EA5E37B20F27CC84D76DD712ABEFD3524*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1254BBCA259FF42C5F38E53FAAAEC70F14149511_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE29F4D9FA857F053287813BD71EE8199D901BA5C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m902B0E54E2ED8F243AE9DE5969E35AFF74E733E1((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Enumerator_tE29F4D9FA857F053287813BD71EE8199D901BA5C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mF1D2E8269BFB5420A0153EB935188A8FDE256E04_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m6AAE00A274F0592CFB90035E06737F8F424A938D_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33* L_5 = (EntryU5BU5D_t33E59D8E4058E3C2D51213B399E7D90BB2E11F33*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_7 = (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 17), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mA3398EB49FDB07DFC741F8BAE0DF6FE2574A4EA7_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Playables.Playable>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m5AD023C69197BAC953DA0EBE53F3ADABAEB54BE1_gshared (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t75A8B633DE9720231DC0708521F0AE6894563237*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCAB36618F891BD027FA97BA9E2E9B80405A60A0B_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m211AF4AF6B8C3BF7EBF0EC54556C3268125CD26E_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m28A6E41E890A8BCCB5D60DD537535D67AD9835D0_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m347649983E6BE1DF47B595F7B78E95E167450E83_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m00C30F9F9B8FE1C33809169A5FC09AF28C4A8225_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mA5011A73C1BCE34D2448C93D15AEA09293ADF6FE_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tDBA045EF598FAB4361D41421DC611709C58BBFBF* Dictionary_2_get_Keys_m02028B1862C8EE14EF88055EB5AC713091D97932_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tDBA045EF598FAB4361D41421DC611709C58BBFBF* L_0 = (KeyCollection_tDBA045EF598FAB4361D41421DC611709C58BBFBF*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tDBA045EF598FAB4361D41421DC611709C58BBFBF* L_1 = (KeyCollection_tDBA045EF598FAB4361D41421DC611709C58BBFBF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tDBA045EF598FAB4361D41421DC611709C58BBFBF*, Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tDBA045EF598FAB4361D41421DC611709C58BBFBF* L_2 = (KeyCollection_tDBA045EF598FAB4361D41421DC611709C58BBFBF*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t34EC7098883650F6F421A8175A58EEF83EDBBF61* Dictionary_2_get_Values_m16187AB2B489A6BE91D62D19D2C6996FE5D571A8_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t34EC7098883650F6F421A8175A58EEF83EDBBF61* L_0 = (ValueCollection_t34EC7098883650F6F421A8175A58EEF83EDBBF61*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t34EC7098883650F6F421A8175A58EEF83EDBBF61* L_1 = (ValueCollection_t34EC7098883650F6F421A8175A58EEF83EDBBF61*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t34EC7098883650F6F421A8175A58EEF83EDBBF61*, Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t34EC7098883650F6F421A8175A58EEF83EDBBF61* L_2 = (ValueCollection_t34EC7098883650F6F421A8175A58EEF83EDBBF61*)__this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 Dictionary_2_get_Item_m554AA6B63A419A8DA4F4B1947D5CCC484947C4FF_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_3 = (EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_5 = (StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___key0;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2));
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m07F74551368A136BCD1B6FF13B1279F0B7872D1F_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, RuntimeObject* ___key0, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, RuntimeObject*, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m582CAE89770D03C4DFE30B28F8AEDCD05CA41393_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, RuntimeObject* ___key0, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, RuntimeObject*, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mB28E4962D0A0CA92E67561C1DC036537B7BE2CE2_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, KeyValuePair_2_t1F6CA1DFD5BE9F6E000B16910DAC52C42E9B1567 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_1 = (StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2)(&___keyValuePair0)->___value_1;
		((  void (*) (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, RuntimeObject*, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2F33E2703FD816B21A2105D49E40341E49190370_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, KeyValuePair_2_t1F6CA1DFD5BE9F6E000B16910DAC52C42E9B1567 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t03FC1F4BDEEEB984CADDBD55FA74C001CCF87C14* L_3;
		L_3 = ((  EqualityComparer_1_t03FC1F4BDEEEB984CADDBD55FA74C001CCF87C14* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_4 = (EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_6 = (StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_7 = (StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2)(&___keyValuePair0)->___value_1;
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.StyleSheets.StylePropertyValue>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2F9C0E1413658BF732C17F2C69544C0B7FD0110D_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, KeyValuePair_2_t1F6CA1DFD5BE9F6E000B16910DAC52C42E9B1567 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t03FC1F4BDEEEB984CADDBD55FA74C001CCF87C14* L_3;
		L_3 = ((  EqualityComparer_1_t03FC1F4BDEEEB984CADDBD55FA74C001CCF87C14* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_4 = (EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_6 = (StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_7 = (StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2)(&___keyValuePair0)->___value_1;
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.StyleSheets.StylePropertyValue>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m953E9AD08FDACE3DF3BCC674079A0855B94F9F6A_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_4 = (EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m88F932A70E8B101E898630BB3B5EE47D5E9737F4_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mA19465F49ABEE88096B7831A11ADCCDF24F34832_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* V_0 = NULL;
	int32_t V_1 = 0;
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t03FC1F4BDEEEB984CADDBD55FA74C001CCF87C14* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_0 = (EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_7 = (StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t03FC1F4BDEEEB984CADDBD55FA74C001CCF87C14* L_15;
		L_15 = ((  EqualityComparer_1_t03FC1F4BDEEEB984CADDBD55FA74C001CCF87C14* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_18 = (StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.StyleSheets.StylePropertyValue>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t03FC1F4BDEEEB984CADDBD55FA74C001CCF87C14* L_24;
		L_24 = ((  EqualityComparer_1_t03FC1F4BDEEEB984CADDBD55FA74C001CCF87C14* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t03FC1F4BDEEEB984CADDBD55FA74C001CCF87C14* L_28 = V_4;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_31 = (StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.StyleSheets.StylePropertyValue>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m03361D7CFCBD1489EFE39AC8BF1A482CCDF46E76_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, KeyValuePair_2U5BU5D_t2F8B6745F061C171C430E783D1B25395AC92080B* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t2F8B6745F061C171C430E783D1B25395AC92080B* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t2F8B6745F061C171C430E783D1B25395AC92080B* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t2F8B6745F061C171C430E783D1B25395AC92080B* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_7 = (EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2F8B6745F061C171C430E783D1B25395AC92080B* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_19 = (StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t1F6CA1DFD5BE9F6E000B16910DAC52C42E9B1567 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m03D6345F85FB8B7C847AAD752308C1BFE1BEBEE8((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t1F6CA1DFD5BE9F6E000B16910DAC52C42E9B1567)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t40E1AAA6125CAE802A28A66BA82099F5D1E79AB8 Dictionary_2_GetEnumerator_m4E8ABD547892C2911F211969CB285ED459C852C2_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t40E1AAA6125CAE802A28A66BA82099F5D1E79AB8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m12A6898E38BECEE7D1B3935CFDB7E34FF84D4A6B((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17300B3A2C541D6A3176AA1D142AFDB9594410F1_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t40E1AAA6125CAE802A28A66BA82099F5D1E79AB8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m12A6898E38BECEE7D1B3935CFDB7E34FF84D4A6B((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Enumerator_t40E1AAA6125CAE802A28A66BA82099F5D1E79AB8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m3386E5E3D65869CCDE10B4F96CA3BFDF07A6EA67_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_2 = (EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_41 = (RuntimeObject*)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		RuntimeObject* L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		RuntimeObject* L_67 = (RuntimeObject*)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		RuntimeObject* L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m1798363754A4496903FBE0487C41E091DAECA4A1_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_5 = (EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D*)(EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 29), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m6491D96F0C7D1A5A8605BE8D78BA9B82D95F1075_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, RuntimeObject* ___key0, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_4 = (EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((___key0));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		RuntimeObject* L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->___sheet_0), (void*)NULL);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = (int32_t)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next_1;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_44 = V_0;
		NullCheck(L_44);
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = (int32_t)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode_0;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key_2;
		RuntimeObject* L_53 = ___key0;
		NullCheck(L_49);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___behavior2;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_58 = ___value1;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value_3 = L_58;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value_3))->___sheet_0), (void*)NULL);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___behavior2;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = (int32_t)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___next_1;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_65 = V_0;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_68 = V_0;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = (int32_t)((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode_0;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		RuntimeObject* L_76 = (RuntimeObject*)((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___key_2;
		RuntimeObject* L_77 = ___key0;
		NullCheck(L_73);
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___behavior2;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_82 = ___value1;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value_3 = L_82;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value_3))->___sheet_0), (void*)NULL);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = (int32_t)((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___next_1;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_89 = V_0;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = (int32_t)__this->____freeList_3;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = (int32_t)__this->____count_2;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_96 = V_0;
		NullCheck(L_96);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_99 = (EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D*)__this->____entries_1;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_104);
		NullCheck(L_102);
		G_B51_0 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_105 = V_0;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		V_10 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98* L_108 = V_10;
		int32_t L_109 = (int32_t)L_108->___next_1;
		__this->____freeList_3 = L_109;
	}

IL_028a:
	{
		Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode_0 = L_111;
		Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98* L_115 = V_10;
		RuntimeObject* L_116 = ___key0;
		L_115->___key_2 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key_2), (void*)L_116);
		Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98* L_117 = V_10;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_118 = ___value1;
		L_117->___value_3 = L_118;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_117->___value_3))->___sheet_0), (void*)NULL);
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7BCEDD023C42837B25ECC29D4322990453625EF6_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m353DB6B351912F9EA8342C3ACDED7895496A9C6E_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_3 = (EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D*)(EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 29), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_5 = (EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D*)__this->____entries_1;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		NullCheck((*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___newSize0;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m1089D8BE6E57CD81234D1A42A7EB2CA9E5DC45D2_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_13 = (EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98* L_21 = V_4;
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98* L_25 = V_4;
		RuntimeObject* L_26 = (RuntimeObject*)L_25->___key_2;
		RuntimeObject* L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_34 = (EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!true)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		if (!true)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98* L_43 = V_4;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2* L_44 = (StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0877E96B773A1C6F78A2DD44A166DB82A4C20151_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, RuntimeObject* ___key0, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2* L_3 = ___value1;
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_4 = (EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_6 = (StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2*)L_3)->___sheet_0), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m637E6953C524417BAC5CEBAF23746822F3833D6B_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m7EDCE5899CC9660FFCA7606229EC2AFCBF9EB432_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, KeyValuePair_2U5BU5D_t2F8B6745F061C171C430E783D1B25395AC92080B* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t2F8B6745F061C171C430E783D1B25395AC92080B* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, KeyValuePair_2U5BU5D_t2F8B6745F061C171C430E783D1B25395AC92080B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m03AA5A4153FBF4C64770DDE0C5D6A23702A5D78A_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t40E1AAA6125CAE802A28A66BA82099F5D1E79AB8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m12A6898E38BECEE7D1B3935CFDB7E34FF84D4A6B((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Enumerator_t40E1AAA6125CAE802A28A66BA82099F5D1E79AB8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mEF8F6006BD3D4E1035B20CEA54792EEE210BF2D0_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m0CDA8EED9B19E4BE886DBB6CD87A63778DCAC73D_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D* L_5 = (EntryU5BU5D_t681D6B3E50190F640BD08E9878A41E14158EB33D*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_7 = (StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 17), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m7F5755580E50772EEE323E673D374CE5CFBF8FE1_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleSheets.StylePropertyValue>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m75453F80DF1CA0A73DCCC73CB813BDAC810C69B8_gshared (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t834D336DF500618699E81CE51EB7F877BDC3656A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m29F9FF506744F3D3DD52F11D0CB116B13AF137EE_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6A68FE85D547536512A7C67235439ADC4F73C425_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB9213F1D48D6D543C8DCFC8CB5777843B93CA2EA_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7DCCD8AC14DC8E004B4A719A21794A900ADAEBE2_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9BE5375681A5FE100862536A8667D8E725B2F4EC_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m7EBC4C56756501AA4C4E91828261DBE9FB4B2D45_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t127B555C3E0391183DAE759C055B051F87F40A73* Dictionary_2_get_Keys_mC26FC57164E7549643BE5E3F702606F9811822C8_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t127B555C3E0391183DAE759C055B051F87F40A73* L_0 = (KeyCollection_t127B555C3E0391183DAE759C055B051F87F40A73*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t127B555C3E0391183DAE759C055B051F87F40A73* L_1 = (KeyCollection_t127B555C3E0391183DAE759C055B051F87F40A73*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t127B555C3E0391183DAE759C055B051F87F40A73*, Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t127B555C3E0391183DAE759C055B051F87F40A73* L_2 = (KeyCollection_t127B555C3E0391183DAE759C055B051F87F40A73*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t85BE239165DD7835E79A13ECE1F34AF2922A48D1* Dictionary_2_get_Values_m9C5EE35B1AADE7149F1B9AFAAAFFF12D7A0D3985_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t85BE239165DD7835E79A13ECE1F34AF2922A48D1* L_0 = (ValueCollection_t85BE239165DD7835E79A13ECE1F34AF2922A48D1*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t85BE239165DD7835E79A13ECE1F34AF2922A48D1* L_1 = (ValueCollection_t85BE239165DD7835E79A13ECE1F34AF2922A48D1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t85BE239165DD7835E79A13ECE1F34AF2922A48D1*, Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t85BE239165DD7835E79A13ECE1F34AF2922A48D1* L_2 = (ValueCollection_t85BE239165DD7835E79A13ECE1F34AF2922A48D1*)__this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 Dictionary_2_get_Item_m2B72DCDD44718B9EA8D1DC8A6123A4D46A94A715_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_3 = (EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_5 = (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___key0;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58));
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m574CD9CB329D72CEB8C6AF86FC8505866356FDC3_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, RuntimeObject* ___key0, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, RuntimeObject*, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mCACCA16C5349FE10A767EE1E8F34A6BC5245C745_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, RuntimeObject* ___key0, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, RuntimeObject*, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m0E9CD4E2A2A39C06C397CE57C6A7F9E87B35FEF3_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, KeyValuePair_2_tCDE07F3B8CB119BF2539CFB17A3B21E4D3C5FA33 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_1 = (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58)(&___keyValuePair0)->___value_1;
		((  void (*) (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, RuntimeObject*, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m6F163DBE8B8F7848237D1C82083571D0444C4295_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, KeyValuePair_2_tCDE07F3B8CB119BF2539CFB17A3B21E4D3C5FA33 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t6F269FFB501208619AE7D8A3B95BD94EF417A9CD* L_3;
		L_3 = ((  EqualityComparer_1_t6F269FFB501208619AE7D8A3B95BD94EF417A9CD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_4 = (EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_6 = (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_7 = (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58)(&___keyValuePair0)->___value_1;
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.TextureId>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23E5EF52D0AE63B06664767352E60CAF02647FA1_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, KeyValuePair_2_tCDE07F3B8CB119BF2539CFB17A3B21E4D3C5FA33 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t6F269FFB501208619AE7D8A3B95BD94EF417A9CD* L_3;
		L_3 = ((  EqualityComparer_1_t6F269FFB501208619AE7D8A3B95BD94EF417A9CD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_4 = (EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_6 = (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_7 = (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58)(&___keyValuePair0)->___value_1;
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.TextureId>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mFFAB87E8233226286867FA7D879C41170AFF3DBE_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_4 = (EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mE9CC27D56F15EF7DBE66E467B756431E01A00AB5_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mFA3DEE58BF344312E3C88FB7407326161FCB61FA_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* V_0 = NULL;
	int32_t V_1 = 0;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t6F269FFB501208619AE7D8A3B95BD94EF417A9CD* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_0 = (EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_7 = (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t6F269FFB501208619AE7D8A3B95BD94EF417A9CD* L_15;
		L_15 = ((  EqualityComparer_1_t6F269FFB501208619AE7D8A3B95BD94EF417A9CD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_18 = (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.TextureId>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t6F269FFB501208619AE7D8A3B95BD94EF417A9CD* L_24;
		L_24 = ((  EqualityComparer_1_t6F269FFB501208619AE7D8A3B95BD94EF417A9CD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t6F269FFB501208619AE7D8A3B95BD94EF417A9CD* L_28 = V_4;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_31 = (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.TextureId>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m9D65D3A0C1BE4002FAFAD24B9EBB8EDFEBE36647_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, KeyValuePair_2U5BU5D_t99A5FD3F0B536B6D37DEBFD081CD6687E35E7DE4* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t99A5FD3F0B536B6D37DEBFD081CD6687E35E7DE4* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t99A5FD3F0B536B6D37DEBFD081CD6687E35E7DE4* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t99A5FD3F0B536B6D37DEBFD081CD6687E35E7DE4* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_7 = (EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t99A5FD3F0B536B6D37DEBFD081CD6687E35E7DE4* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_19 = (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tCDE07F3B8CB119BF2539CFB17A3B21E4D3C5FA33 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m8B169BEA1EFAAD577BD303A8FA34FAE1B49DD367((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tCDE07F3B8CB119BF2539CFB17A3B21E4D3C5FA33)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t598538E185ADFA10868FF9ADC47046D729703F83 Dictionary_2_GetEnumerator_mBD1FEB2F6A2932FAFF5023DDBF17410C13979D47_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t598538E185ADFA10868FF9ADC47046D729703F83 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD4B34871ABA88F8D59DC3127D29513871E458ABB((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m63341D7D78E7C97A7428E5445FF53FA797DD5D2F_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t598538E185ADFA10868FF9ADC47046D729703F83 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD4B34871ABA88F8D59DC3127D29513871E458ABB((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Enumerator_t598538E185ADFA10868FF9ADC47046D729703F83 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD1E92830D06E72D8884A73E869A15E0CE75D0928_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_2 = (EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_41 = (RuntimeObject*)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		RuntimeObject* L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		RuntimeObject* L_67 = (RuntimeObject*)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		RuntimeObject* L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m0D9B993CE66F0E6CE425AB8915DA61DD1EC85CF8_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_5 = (EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71*)(EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 29), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m899FAB3388FCF228FA082B6A7C6680D0D785C3FD_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, RuntimeObject* ___key0, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_4 = (EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((___key0));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		RuntimeObject* L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = (int32_t)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next_1;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_44 = V_0;
		NullCheck(L_44);
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = (int32_t)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode_0;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key_2;
		RuntimeObject* L_53 = ___key0;
		NullCheck(L_49);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___behavior2;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_58 = ___value1;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value_3 = L_58;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___behavior2;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = (int32_t)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___next_1;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_65 = V_0;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_68 = V_0;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = (int32_t)((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode_0;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		RuntimeObject* L_76 = (RuntimeObject*)((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___key_2;
		RuntimeObject* L_77 = ___key0;
		NullCheck(L_73);
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___behavior2;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_82 = ___value1;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value_3 = L_82;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = (int32_t)((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___next_1;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_89 = V_0;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = (int32_t)__this->____freeList_3;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = (int32_t)__this->____count_2;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_96 = V_0;
		NullCheck(L_96);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_99 = (EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71*)__this->____entries_1;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_104);
		NullCheck(L_102);
		G_B51_0 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_105 = V_0;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		V_10 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216* L_108 = V_10;
		int32_t L_109 = (int32_t)L_108->___next_1;
		__this->____freeList_3 = L_109;
	}

IL_028a:
	{
		Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode_0 = L_111;
		Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216* L_115 = V_10;
		RuntimeObject* L_116 = ___key0;
		L_115->___key_2 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key_2), (void*)L_116);
		Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216* L_117 = V_10;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_118 = ___value1;
		L_117->___value_3 = L_118;
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m35879D8D772CA2AE5F4850F8CD7D6AB3E7552A37_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE18208C076AF81CE9B535F151EE195F997A4D4F9_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_3 = (EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71*)(EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 29), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_5 = (EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71*)__this->____entries_1;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		NullCheck((*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___newSize0;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m665BE26F8733E3D14291F63422375AD56A5CBA47_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_13 = (EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216* L_21 = V_4;
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216* L_25 = V_4;
		RuntimeObject* L_26 = (RuntimeObject*)L_25->___key_2;
		RuntimeObject* L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_34 = (EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!true)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216* L_43 = V_4;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58* L_44 = (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m96CE02E15D17B57DDBDCC7EBD55CBBFA6246B3BF_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, RuntimeObject* ___key0, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58* L_3 = ___value1;
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_4 = (EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_6 = (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mAE8B3A58DFAA0EB011C8D148449F2B062E229437_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mE26FA2AA1B57492506A9718BFB9CDB65832776C3_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, KeyValuePair_2U5BU5D_t99A5FD3F0B536B6D37DEBFD081CD6687E35E7DE4* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t99A5FD3F0B536B6D37DEBFD081CD6687E35E7DE4* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, KeyValuePair_2U5BU5D_t99A5FD3F0B536B6D37DEBFD081CD6687E35E7DE4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m53DF30F8E31A604F0CAC16FDD3E85BEEE89F3A36_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t598538E185ADFA10868FF9ADC47046D729703F83 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD4B34871ABA88F8D59DC3127D29513871E458ABB((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Enumerator_t598538E185ADFA10868FF9ADC47046D729703F83 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mEED1FBFE31EE1D5D72A66E37661C01EA87AF3CA9_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mE54287C346F7523DEE6B193254AB276A92436168_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71* L_5 = (EntryU5BU5D_tDF87A2AD202A006BDD4A64C39DE586A5F7C3EF71*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_7 = (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 17), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m31518F72FCEFDA4A3535C505A6F0EC7AD8521E96_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.TextureId>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mB7BCD5A9D4E9F1BD279EFCF8896465FCB9D250F7_gshared (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tD9E4A24F8EC9B8E4518103105947B4EF124299A8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m05F523BA9BEBF58F2272B2FED787AB93DAA6773B_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9BFA43BFF5C0421EC5B1CD79E5123E2D9319E446_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m129FBFC8D6968D6C97E8592C4B6B7703FBD790A4_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1C7BC3795301A028FE7A52BCEE872CCA818490C7_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m052D43602E86D4779FF5130B39063F1B5A923C7C_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m6043208ABE94A41D3E374E582A1FD4B3319C7109_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F* Dictionary_2_get_Keys_mAA4459C4D25A1E89C5406DF6E7902699E43995D8_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F* L_0 = (KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F* L_1 = (KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F*, Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F* L_2 = (KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62* Dictionary_2_get_Values_m0F05FE3499EBC17711376BE0CE9D2503A1EA3050_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62* L_0 = (ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62* L_1 = (ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62*, Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62* L_2 = (ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62*)__this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Dictionary_2_get_Item_m258C63607421ED4C906A4D91121D2CC1D782E012_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_3 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___key0;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF30B801AA48FFBD9B95F320C393F85AEA8945E9A_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3583FCC8F552E5812B520957513E0CE577B594ED_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3683CAD9E178A8166F0507E735B54E717E04E705_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)(&___keyValuePair0)->___value_1;
		((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31AF42854545E7E7C51B747530D81547E5D7AD3F_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_3;
		L_3 = ((  EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_4 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)(&___keyValuePair0)->___value_1;
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9F5A901FD89D040C854D8DC4B9121859C4875DAA_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_3;
		L_3 = ((  EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_4 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)(&___keyValuePair0)->___value_1;
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1D370E904069F8BD47A5903DA8A59A08A180E586_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_4 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mEA83243BF00BED6E0729B156DAE73BF6CE806395_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m611EB3B13D33E80464CC83A31EDE7637E830CC60_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* V_0 = NULL;
	int32_t V_1 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_0 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_15;
		L_15 = ((  EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_24;
		L_24 = ((  EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_28 = V_4;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7FCDD4A7B69179B78608283C1B1BDE3A9C19EBC1_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_7 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m4727158B54F9EB5857F41AA2AA93AF1815148077((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48 Dictionary_2_GetEnumerator_mF968EBF390DDD2AE4D9505FAA72607831E9F9B97_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3DA0996D376CC3B5563A4EA329A46E2F1B91E38C((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11C46FE459221FA039C891E3698FA3A87D0FC0CE_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3DA0996D376CC3B5563A4EA329A46E2F1B91E38C((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mA8C996117E1982A65B6508F2B4D174D5FE302F09_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_2 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_41 = (RuntimeObject*)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		RuntimeObject* L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		RuntimeObject* L_67 = (RuntimeObject*)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		RuntimeObject* L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m4A08A7C0D18AA500A70D36746E5A105EDDE72C99_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_5 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)(EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 29), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m4123EF7C11649CE9ECB7B7B3B5A88F99C3D1A406_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_4 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((___key0));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		RuntimeObject* L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = (int32_t)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next_1;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_44 = V_0;
		NullCheck(L_44);
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = (int32_t)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode_0;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key_2;
		RuntimeObject* L_53 = ___key0;
		NullCheck(L_49);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___behavior2;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = ___value1;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value_3 = L_58;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___behavior2;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = (int32_t)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___next_1;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_65 = V_0;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_68 = V_0;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = (int32_t)((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode_0;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		RuntimeObject* L_76 = (RuntimeObject*)((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___key_2;
		RuntimeObject* L_77 = ___key0;
		NullCheck(L_73);
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___behavior2;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = ___value1;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value_3 = L_82;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = (int32_t)((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___next_1;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_89 = V_0;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = (int32_t)__this->____freeList_3;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = (int32_t)__this->____count_2;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_96 = V_0;
		NullCheck(L_96);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_99 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_104);
		NullCheck(L_102);
		G_B51_0 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_105 = V_0;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		V_10 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_108 = V_10;
		int32_t L_109 = (int32_t)L_108->___next_1;
		__this->____freeList_3 = L_109;
	}

IL_028a:
	{
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode_0 = L_111;
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_115 = V_10;
		RuntimeObject* L_116 = ___key0;
		L_115->___key_2 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key_2), (void*)L_116);
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_117 = V_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_118 = ___value1;
		L_117->___value_3 = L_118;
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mC4C90C17B59CF4BE93966A12197D9ACF814211E0_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m136923A7769E9999D2A64CBF9A6875814D366A5E_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_3 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)(EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 29), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_5 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		NullCheck((*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___newSize0;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5359A59AD9E9B5D43B5915B69C392E9E4E173FAC_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_13 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_21 = V_4;
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_25 = V_4;
		RuntimeObject* L_26 = (RuntimeObject*)L_25->___key_2;
		RuntimeObject* L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_34 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!true)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_43 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_44 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m9C5A2CBD8FAE83C5A706FD6CB2B7C5B941461859_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = ___value1;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_4 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m347B598806B303778E5B0A49959B786D24383EA9_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mA948267DF937F7366BB30D616F5581CAC39FD4F6_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mE405CF560B5246ADD7654297447EE45E7F26D381_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3DA0996D376CC3B5563A4EA329A46E2F1B91E38C((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4EAC9F81148C067F89804C7B3C4F0C249482208E_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mB1744EBE477A3D9BEAC62C01FE8645F649F30759_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_5 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 17), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m50197CCD1B3C7D053FA29B1232773E7681BB10AD_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m0D981F33D13F97847AB8917ABCA8BEA865AECD23_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3C5862A628EEC02A20BF1DD0DAC66C872AA86B71_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB956F808517D4D990AF94FE7947A443C315A5E78_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4120773F597B820BDC821E2E0F3A09C2D9B70CDC_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD9B273A8BBD11644ED545F73A8C144FC7C77C228_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3CA802B63CC889F9066D07645D7D3F7B2AF98497_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1A7236AF93EEBBCED35431D22E96CC5287FB5003_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A* Dictionary_2_get_Keys_m58286ED794BDDC2A27ADD35911380C18D9832A88_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A* L_0 = (KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A* L_1 = (KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A*, Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A* L_2 = (KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5* Dictionary_2_get_Values_m93F11BDEC56CEEA5DF9C1C57A1EB9244D3DCE9B8_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5* L_0 = (ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5* L_1 = (ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5*, Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5* L_2 = (ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5*)__this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 Dictionary_2_get_Item_m1D70B96BF193F0D2A63E3E4316FE92F5187AA3D0_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_3 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_5 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___key0;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8));
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m65F7AB2D49B09E3F4C0FD364FC3DBDB4CC501C9C_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5E1E162125C2367B02C5A72DBD6FEF7711119E17_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mEECF215370685C687CF6E3BA37C3F5612C69FA60_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_1 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)(&___keyValuePair0)->___value_1;
		((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m7E61155E4D0B6D769B9ACC351B51BC9C66625193_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* L_3;
		L_3 = ((  EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_4 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_6 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_7 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)(&___keyValuePair0)->___value_1;
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mD2BA774759494EB0B8E0ED7D56B918CB97F58ABC_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* L_3;
		L_3 = ((  EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_4 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_6 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_7 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)(&___keyValuePair0)->___value_1;
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9 = (RuntimeObject*)(&___keyValuePair0)->___key_0;
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCDBE1CC9223F2F2CBB036E209EA762D290F3CDCB_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_4 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m088160B91A0137011EDCBB102E8A75E13F2B674B_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mB0861CC37D353319FBCB0F809D214228EE323373_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* V_0 = NULL;
	int32_t V_1 = 0;
	PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_0 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_7 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* L_15;
		L_15 = ((  EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_18 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* L_24;
		L_24 = ((  EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* L_28 = V_4;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_31 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m942DD222667C6829FA1229BAD7BCACFE555D0A0B_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_7 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_19 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m899F53F40BCAA19E77F5E9A552CAA43D134B9CC9((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672 Dictionary_2_GetEnumerator_m0864B4FC572B326374206CAA10B911CCDC8D588B_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEB026458339B7ECD4D5E558C57D012096E15822B((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m3B3A4B6778D15645FCD6D9CDCABFAB3D4CAEA21B_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEB026458339B7ECD4D5E558C57D012096E15822B((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mC68644A930FC4017AFD853A30EDED31264D2CB5A_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_2 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_41 = (RuntimeObject*)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		RuntimeObject* L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		RuntimeObject* L_67 = (RuntimeObject*)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		RuntimeObject* L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m50C500FDB35C01936359C959DF854D377293A52D_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_5 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)(EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 29), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m3395BF439A761E0F35BB676572A3F06E234692A8_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_4 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((___key0));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		RuntimeObject* L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = (int32_t)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next_1;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_44 = V_0;
		NullCheck(L_44);
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = (int32_t)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode_0;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key_2;
		RuntimeObject* L_53 = ___key0;
		NullCheck(L_49);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___behavior2;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_58 = ___value1;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value_3 = L_58;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___behavior2;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = (int32_t)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___next_1;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_65 = V_0;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_68 = V_0;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = (int32_t)((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode_0;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		RuntimeObject* L_76 = (RuntimeObject*)((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___key_2;
		RuntimeObject* L_77 = ___key0;
		NullCheck(L_73);
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___behavior2;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_82 = ___value1;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value_3 = L_82;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = (int32_t)((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___next_1;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_89 = V_0;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = (int32_t)__this->____freeList_3;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = (int32_t)__this->____count_2;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_96 = V_0;
		NullCheck(L_96);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_99 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_104);
		NullCheck(L_102);
		G_B51_0 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_105 = V_0;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		V_10 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_108 = V_10;
		int32_t L_109 = (int32_t)L_108->___next_1;
		__this->____freeList_3 = L_109;
	}

IL_028a:
	{
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode_0 = L_111;
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_115 = V_10;
		RuntimeObject* L_116 = ___key0;
		L_115->___key_2 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key_2), (void*)L_116);
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_117 = V_10;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_118 = ___value1;
		L_117->___value_3 = L_118;
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5893C81800791089FF6F93DCF1EF0B9C0A1C2F88_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA6121439C446D083702A4D9DB946E261CB5B5449_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_3 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)(EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 29), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_5 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		NullCheck((*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___newSize0;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mA538370CE25C6017A7D557830F2D6D29ED7B121D_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_13 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_21 = V_4;
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_25 = V_4;
		RuntimeObject* L_26 = (RuntimeObject*)L_25->___key_2;
		RuntimeObject* L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_34 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!true)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_43 = V_4;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8* L_44 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m210FC0055E9EF77E13C23B66ED80E6E7CD6DB4FF_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8* L_3 = ___value1;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_4 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_6 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60F8C1B26EBCA0DDA53AF9F4307B80AB00B3CA83_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m00F4475231D4538EE14EFED154339B5280E64B9E_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m6FD7C9CAB420DE141FBCA27BCCE647EB31006345_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEB026458339B7ECD4D5E558C57D012096E15822B((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mFA424CE760E1F36E4BB374D5112A2BBE41024C1D_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m327ED1F85EDFAC8AE0C687A7F83B448DBFA6DA82_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_5 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_7 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 17), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mF2E4A6AA157FBC97EFE8489DCCCA90DC8EEDE3CE_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m2BB9962A4814E979C71F117CE98B16E2E09436BB_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
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
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m90329A491EC6677EAD060E1A2B5FA927F740732D_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC8D89A9CCA16467D113D719D18AA3C277F013C08_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9A0B72F75DF5CD86DF2389EDE8C839347D503F25_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF56B6C6564179D48F91E595F9689B91DC4E2E191_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_5;
		L_5 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m339F468B952BCCC068DF44E9AAEC0278EE157AD9_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4557ECACE9B75E789999F3AEA16EB79343DC895D_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tF62DA58D084558E31E5A09537D460287D59B1A89* Dictionary_2_get_Keys_m320C99AF5B086AE1E65D283DF6DA20238A2AD8C6_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tF62DA58D084558E31E5A09537D460287D59B1A89* L_0 = (KeyCollection_tF62DA58D084558E31E5A09537D460287D59B1A89*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tF62DA58D084558E31E5A09537D460287D59B1A89* L_1 = (KeyCollection_tF62DA58D084558E31E5A09537D460287D59B1A89*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tF62DA58D084558E31E5A09537D460287D59B1A89*, Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tF62DA58D084558E31E5A09537D460287D59B1A89* L_2 = (KeyCollection_tF62DA58D084558E31E5A09537D460287D59B1A89*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tB99ECE94AB57EE9AB1FAC3276CC7108B468367C9* Dictionary_2_get_Values_m683288307B651515751FB86E04C16970682BEB74_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tB99ECE94AB57EE9AB1FAC3276CC7108B468367C9* L_0 = (ValueCollection_tB99ECE94AB57EE9AB1FAC3276CC7108B468367C9*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tB99ECE94AB57EE9AB1FAC3276CC7108B468367C9* L_1 = (ValueCollection_tB99ECE94AB57EE9AB1FAC3276CC7108B468367C9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tB99ECE94AB57EE9AB1FAC3276CC7108B468367C9*, Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tB99ECE94AB57EE9AB1FAC3276CC7108B468367C9* L_2 = (ValueCollection_tB99ECE94AB57EE9AB1FAC3276CC7108B468367C9*)__this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E Dictionary_2_get_Item_mDBA6418F99B15D890F64E29133749516DBF67708_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, uint32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_3 = (EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_5 = (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		uint32_t L_6 = ___key0;
		uint32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m584A9F1DCD9BDBD1DBC9A0537D74556EED0768B7_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, uint32_t ___key0, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___value1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___key0;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mD03C85BAE7AC766EE09FF58CEB2E7EA465ACB627_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, uint32_t ___key0, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___value1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___key0;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m365017832FF844E4B94463FC2A2C2A13E1C49871_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = (uint32_t)(&___keyValuePair0)->___key_0;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_1 = (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)(&___keyValuePair0)->___value_1;
		((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1EB4A7C2FBD22C074A479BF1D9C372E7FAE51453_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = (uint32_t)(&___keyValuePair0)->___key_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* L_3;
		L_3 = ((  EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_4 = (EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_6 = (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_7 = (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)(&___keyValuePair0)->___value_1;
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8605716247D32B46E0C6AF9B3BD4178E2CE4ABA7_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = (uint32_t)(&___keyValuePair0)->___key_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* L_3;
		L_3 = ((  EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_4 = (EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_6 = (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_7 = (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)(&___keyValuePair0)->___value_1;
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint32_t L_9 = (uint32_t)(&___keyValuePair0)->___key_0;
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mADDC1A383A60B3DE6DC7659B2F436F5818B53087_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_4 = (EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m01538A1116F2A94F0A884F5E555B115F9F0D2113_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, uint32_t ___key0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mB9F9529109E9205A65FAF3C914B48DE8FF309CCA_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* V_0 = NULL;
	int32_t V_1 = 0;
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_0 = (EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_7 = (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* L_15;
		L_15 = ((  EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_18 = (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* L_24;
		L_24 = ((  EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* L_28 = V_4;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_31 = (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m44D51431BDAA86C2AFCB0556C88B88099D142277_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_7 = (EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		uint32_t L_16 = (uint32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_19 = (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m83FF8D9D5D047EC20DB6120FECFD94458EDEAF46((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t757A11D5E61E20A1FA1D66746C464E68C7970041)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A Dictionary_2_GetEnumerator_m3C2F325D23343ACA87F7512E4824A99F0280776E_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8C797EAC717E2480B0FAE19F0A832098D14F0695((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m5D026638B97D1CEE9AAE95B59D8D1076D6370324_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8C797EAC717E2480B0FAE19F0A832098D14F0695((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m4FDD2390EB77EC971C27070B5CD217873DABF448_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, uint32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_2 = (EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_19;
		L_19 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		uint32_t L_22 = (uint32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		uint32_t L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_31;
		L_31 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_38 = V_7;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		uint32_t L_41 = (uint32_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		uint32_t L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		uint32_t L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		uint32_t L_67 = (uint32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		uint32_t L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m4FC7E966D08C35F05AE53D759C267433889106D6_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_5 = (EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)(EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 29), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mCD1260D485A3D7DAA43854F0F47BB372D0BEEFFF_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, uint32_t ___key0, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* V_10 = NULL;
	uint32_t V_11 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_4 = (EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint32_t L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_24;
		L_24 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		uint32_t L_27 = (uint32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint32_t L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint32_t L_35 = ___key0;
		uint32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_44;
		L_44 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_51 = V_12;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		uint32_t L_54 = (uint32_t)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		uint32_t L_55 = ___key0;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___behavior2;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_60 = ___value1;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___behavior2;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		uint32_t L_62 = ___key0;
		uint32_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = (int32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = (int32_t)((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		uint32_t L_80 = (uint32_t)((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		uint32_t L_81 = ___key0;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_86 = ___value1;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___behavior2;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint32_t L_88 = ___key0;
		uint32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = (int32_t)((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = (int32_t)__this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = (int32_t)__this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_105 = (EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)__this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_114 = V_10;
		int32_t L_115 = (int32_t)L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_121 = V_10;
		uint32_t L_122 = ___key0;
		L_121->___key_2 = L_122;
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_123 = V_10;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_124 = ___value1;
		L_123->___value_3 = L_124;
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mFC20CE9BBB718C958FFA612346570D7AAE5AED8C_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD85DE3A2C6533C15A01BB7BF93F46F35C08D2E0D_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* V_1 = NULL;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_3 = (EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)(EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 29), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_5 = (EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)__this->____entries_1;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint32_t));
		uint32_t L_8 = V_3;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_9);
		bool L_11 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		uint32_t* L_19 = (uint32_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = (int32_t)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___newSize0;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m465CF1813333E05E5743C1A90689D64E8E68DFCA_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, uint32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint32_t L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_13 = (EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_20;
		L_20 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_21 = V_4;
		uint32_t L_22 = (uint32_t)L_21->___key_2;
		uint32_t L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_25 = V_4;
		uint32_t L_26 = (uint32_t)L_25->___key_2;
		uint32_t L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_34 = (EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_41 = V_4;
		uint32_t* L_42 = (uint32_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(uint32_t));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_43 = V_4;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_44 = (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m45061EA2C8BF9DD9DC9DA92DAB968171136507DA_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, uint32_t ___key0, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_3 = ___value1;
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_4 = (EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_6 = (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mBA03F700C319FADCB08B371238B1241FD02CBC21_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mA6B9552999D6F2D4172AE56003A0F01F9F58DAF6_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, KeyValuePair_2U5BU5D_tED1940A1C4FC6418ADC81623D38A87DDECFAE075*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m81E4A88E187D4D1FBB41909EB67EA2FC9A51D22D_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8C797EAC717E2480B0FAE19F0A832098D14F0695((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Enumerator_t2109EA80E2E4988CA1C768B20F7097AE9321280A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mEE6CA69FEDF16FA1BCE6489C600D4681D225DEE4_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mB9DAF592E73E4EF858CC2935AF15974A647EB803_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8* L_5 = (EntryU5BU5D_t68A3C3C2FF61504922EC13C363BED0E17D474FA8*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_7 = (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 17), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m1B907289F15E0B5EF0C3F7837DE6CE22FDF3A6B0_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mE5E05EB7F35C4433EA7470E178A3FD3993FE056D_gshared (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tDD72F78A572F94ECEDBDA75C3D17C3ED05C167E0*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
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
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0AB9A68499E6533AAFCCFD40D241EDB672F0EE52_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA1A617B0BF5E8A6D010DD77C588D50489744C84B_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m202611971B014F5A3BD37BC6C69CD80ECEACE409_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m472E65A12A19C651BD4318B2A2EA861524582B71_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_5;
		L_5 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m72795D5EA15FEAE2A46DEEE72C630E6375AEFFAB_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mA3D8D0FBCD42B736F5B977C5E31EFEF1DA9881DC_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t75FACE8389D68A206D866CABFCC16E7F87A24680* Dictionary_2_get_Keys_mAC5988459D1B3F4043FFBCE86C90D82AC60FA6DC_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t75FACE8389D68A206D866CABFCC16E7F87A24680* L_0 = (KeyCollection_t75FACE8389D68A206D866CABFCC16E7F87A24680*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t75FACE8389D68A206D866CABFCC16E7F87A24680* L_1 = (KeyCollection_t75FACE8389D68A206D866CABFCC16E7F87A24680*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t75FACE8389D68A206D866CABFCC16E7F87A24680*, Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t75FACE8389D68A206D866CABFCC16E7F87A24680* L_2 = (KeyCollection_t75FACE8389D68A206D866CABFCC16E7F87A24680*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tC22BD7A8B583315365C48DA9C733F4A75B63F50C* Dictionary_2_get_Values_m88589DD99A8EA6058E4C0D9AEA2E6D259AA341B5_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tC22BD7A8B583315365C48DA9C733F4A75B63F50C* L_0 = (ValueCollection_tC22BD7A8B583315365C48DA9C733F4A75B63F50C*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC22BD7A8B583315365C48DA9C733F4A75B63F50C* L_1 = (ValueCollection_tC22BD7A8B583315365C48DA9C733F4A75B63F50C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tC22BD7A8B583315365C48DA9C733F4A75B63F50C*, Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC22BD7A8B583315365C48DA9C733F4A75B63F50C* L_2 = (ValueCollection_tC22BD7A8B583315365C48DA9C733F4A75B63F50C*)__this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mE2803DB0742B756F3A48C91DE1596A518E21D1B9_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, uint32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_3 = (EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		uint32_t L_6 = ___key0;
		uint32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m9E1111D1C17A6F6CE4911149F06E48B8C864AC61_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, uint32_t ___key0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___key0;
		int32_t L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, int32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m9BA81ED1DA118BD3EC9AA95C5C8E45D61978FBED_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, uint32_t ___key0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___key0;
		int32_t L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, int32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mAB342263778D968849CCB6B63C0C50F8B5077564_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = (uint32_t)(&___keyValuePair0)->___key_0;
		int32_t L_1 = (int32_t)(&___keyValuePair0)->___value_1;
		((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mFF9DBC9DD15FF825224E60F865DEFF5087952CB1_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = (uint32_t)(&___keyValuePair0)->___key_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_4 = (EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		int32_t L_7 = (int32_t)(&___keyValuePair0)->___value_1;
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mE98852B2F39EDBB8FBEEA1D7472756041F68E7F8_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = (uint32_t)(&___keyValuePair0)->___key_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_4 = (EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		int32_t L_7 = (int32_t)(&___keyValuePair0)->___value_1;
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint32_t L_9 = (uint32_t)(&___keyValuePair0)->___key_0;
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mFCB6D718ED8D00722A96C5EF4ECF1ECACA56A490_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_4 = (EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m07765640B81B043200CAF5B09513C2292F0B7F5D_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, uint32_t ___key0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m2060B7C35D5F7B3D12703628A2D24E23DFA9752C_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_0 = (EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = (int32_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_15;
		L_15 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = (int32_t)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		int32_t L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_28 = V_4;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = (int32_t)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		int32_t L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m3DA9D34F0429F15D66C59FAF8319D9306E4A7BF7_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_7 = (EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		uint32_t L_16 = (uint32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = (int32_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mF96E7D4319F6EC095B474DDCE1CDB1F3588007D8((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t5A3FDAC04D913E59FF60D58CAFA8264F5F43A655)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD Dictionary_2_GetEnumerator_m57D9D45F7280F60924A01DA9D4EC3B2592F86DFE_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m7C1A230D6719B4613FCC45869D3618E057A0B21D((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m487A844716EEE32680CF1A25D2AF83D0DFBB06B0_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m7C1A230D6719B4613FCC45869D3618E057A0B21D((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m80CED22BCEE4629D829359BEED9EC697FAFC6FFA_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, uint32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_2 = (EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_19;
		L_19 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		uint32_t L_22 = (uint32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		uint32_t L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_31;
		L_31 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_38 = V_7;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		uint32_t L_41 = (uint32_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		uint32_t L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		uint32_t L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		uint32_t L_67 = (uint32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		uint32_t L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mCAAB85D93451E8BBE06D5B8C01D2500345AAFFEC_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_5 = (EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)(EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 29), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m43E9602C6BB8265B512388F2691B5AD2F98ADDD3_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, uint32_t ___key0, int32_t ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* V_10 = NULL;
	uint32_t V_11 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_4 = (EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint32_t L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_24;
		L_24 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		uint32_t L_27 = (uint32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint32_t L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint32_t L_35 = ___key0;
		uint32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_44;
		L_44 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_51 = V_12;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		uint32_t L_54 = (uint32_t)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		uint32_t L_55 = ___key0;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___behavior2;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		int32_t L_60 = ___value1;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___behavior2;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		uint32_t L_62 = ___key0;
		uint32_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = (int32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = (int32_t)((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		uint32_t L_80 = (uint32_t)((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		uint32_t L_81 = ___key0;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		int32_t L_86 = ___value1;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___behavior2;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint32_t L_88 = ___key0;
		uint32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = (int32_t)((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = (int32_t)__this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = (int32_t)__this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_105 = (EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)__this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_114 = V_10;
		int32_t L_115 = (int32_t)L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_121 = V_10;
		uint32_t L_122 = ___key0;
		L_121->___key_2 = L_122;
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_123 = V_10;
		int32_t L_124 = ___value1;
		L_123->___value_3 = L_124;
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD7DD908BDA7B6E005E6C84621687010A420BA0BC_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7B26DC8194A57331B1BABB833F5E9F93C488CB0E_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* V_1 = NULL;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_3 = (EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)(EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 29), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_5 = (EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)__this->____entries_1;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint32_t));
		uint32_t L_8 = V_3;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_9);
		bool L_11 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		uint32_t* L_19 = (uint32_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = (int32_t)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___newSize0;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mF23F35E7E009C3D533255E91A7B938AB813F2B1D_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, uint32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint32_t L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_13 = (EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_20;
		L_20 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_21 = V_4;
		uint32_t L_22 = (uint32_t)L_21->___key_2;
		uint32_t L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_25 = V_4;
		uint32_t L_26 = (uint32_t)L_25->___key_2;
		uint32_t L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_34 = (EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_41 = V_4;
		uint32_t* L_42 = (uint32_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(uint32_t));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_43 = V_4;
		int32_t* L_44 = (int32_t*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(int32_t));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m5DB88361689637CCE820B2D6DD707A64DF14270B_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, uint32_t ___key0, int32_t* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_3 = ___value1;
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_4 = (EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(int32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		int32_t* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30A53BAC6E0D822D4760EE772EF990CBBCCE1F37_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1CCB43D96E4DAD66F1C17247326FFF7EF505EF9D_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, KeyValuePair_2U5BU5D_t0350226BB9E4C60CF912E824A7683D032D4B3FBF*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m51B68D3ECBE635C050380D9088D4EEF300DE97D0_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m7C1A230D6719B4613FCC45869D3618E057A0B21D((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Enumerator_t61FE3CBD85AB1FECAD90EC6ACFD9E968519764BD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14549FF13662935B4C2138DE111BE4AD2C0CBDC1_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mBE30A762511131BA7210D5C6B0744157023E6D26_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5* L_5 = (EntryU5BU5D_t35030C67317CFD76395CF623751D571A97DFB1E5*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = (int32_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 17), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m385C4925336CC26B06BF608FA6002412E26624D5_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m38C21A5BF3FD5F329EAED99888EA777D65F26649_gshared (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
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
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5F2C53FF0072F4015E5D14621F555D29B1EB79E5_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m02AD1784407F445D19B2B4EFCE429C2E8F81B9A1_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE2D8DF4C129EB33F9695465925B905E79288DB16_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m96CF8B0261344A0E317244BD54F5791CF714696F_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_5;
		L_5 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0D9BAECBF69ABEEFF1551820EE5E3899F0D04B3D_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m6C8FADDE2343343BA522E3E1E6C70580D8A010C8_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB* Dictionary_2_get_Keys_mBA659D62B70FCB4BB08F36AE7D22AE17AD15CF7B_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB* L_0 = (KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB* L_1 = (KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB*, Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB* L_2 = (KeyCollection_t8825842DD54072B7B712D2ED9E544D6466A502CB*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7* Dictionary_2_get_Values_mA8EF4E1B3C60A8B026C6CDBB4D0613A16EB0CC28_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7* L_0 = (ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7* L_1 = (ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7*, Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7* L_2 = (ValueCollection_tA38C30965161699273DF0F825A6FCB2896F6ECC7*)__this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m1ABC559AFCB634174C216DFF864168F9D0611B91_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		uint32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_3 = (EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = (RuntimeObject*)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		uint32_t L_6 = ___key0;
		uint32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3CB345D53D5DCD58561453AD5780EBC51E8DA379_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5124CA0DFD4B9968298DB45CEDF7F4B7A1F7DF83_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mF8CF90FC5CF4EC0850589A09886C4EEA3FF0B0AB_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = (uint32_t)(&___keyValuePair0)->___key_0;
		RuntimeObject* L_1 = (RuntimeObject*)(&___keyValuePair0)->___value_1;
		((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8FFEB29E1D6E73E67F75B3E2523E3ED89E0A61C9_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = (uint32_t)(&___keyValuePair0)->___key_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_4 = (EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7 = (RuntimeObject*)(&___keyValuePair0)->___value_1;
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mBA806CA0CD33E392F4C20ABE9D271BD80FC10DE7_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = (uint32_t)(&___keyValuePair0)->___key_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_4 = (EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7 = (RuntimeObject*)(&___keyValuePair0)->___value_1;
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint32_t L_9 = (uint32_t)(&___keyValuePair0)->___key_0;
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m2561EDEA2235BCE5FAED59F4E2E352FDA7C71115_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_4 = (EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m61654FF64053B954D62E586B09309D37EEBB9FB3_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___key0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mEA242D651E1C66041A67248197AB3924BDE83981_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_0 = (EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)__this->____entries_1;
		V_0 = L_0;
		RuntimeObject* L_1 = ___value0;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = (RuntimeObject*)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		RuntimeObject* L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = (RuntimeObject*)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		RuntimeObject* L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m653EB649AAE304236A63F8D4787676E5B277DE6C_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_7 = (EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		uint32_t L_16 = (uint32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mB53C3BFAA104E91A4E9330E29FF5D5A835526360((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tAC06C9E6230AA7E6BDA2F07D910C3CBE2F36399B)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 Dictionary_2_GetEnumerator_mBDE9E0C0607CC54561E6AC655F880228C9009692_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6BB73FBB588BB87421C1222CAE727AD52F96CAD4((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mEA48072BFD12860C0FBE936B0251E11ADF0E3DCA_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6BB73FBB588BB87421C1222CAE727AD52F96CAD4((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m6F594F43715DA5DE5ACC2303BDA19DD724C861BE_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_2 = (EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_19;
		L_19 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		uint32_t L_22 = (uint32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		uint32_t L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_31;
		L_31 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_38 = V_7;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		uint32_t L_41 = (uint32_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		uint32_t L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		uint32_t L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		uint32_t L_67 = (uint32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		uint32_t L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m991A891C21658C9C47CB8B484E5ECFDE6C3AE0E3_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_5 = (EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)(EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 29), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m3DE1FF6E5A5378D653C083D9AF241FFB3E90444F_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* V_10 = NULL;
	uint32_t V_11 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_4 = (EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint32_t L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_24;
		L_24 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		uint32_t L_27 = (uint32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint32_t L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint32_t L_35 = ___key0;
		uint32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_44;
		L_44 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_51 = V_12;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		uint32_t L_54 = (uint32_t)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		uint32_t L_55 = ___key0;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___behavior2;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		RuntimeObject* L_60 = ___value1;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3), (void*)L_60);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___behavior2;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		uint32_t L_62 = ___key0;
		uint32_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = (int32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = (int32_t)((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		uint32_t L_80 = (uint32_t)((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		uint32_t L_81 = ___key0;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		RuntimeObject* L_86 = ___value1;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3), (void*)L_86);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___behavior2;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint32_t L_88 = ___key0;
		uint32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = (int32_t)((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = (int32_t)__this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = (int32_t)__this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_105 = (EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)__this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_114 = V_10;
		int32_t L_115 = (int32_t)L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_121 = V_10;
		uint32_t L_122 = ___key0;
		L_121->___key_2 = L_122;
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_123 = V_10;
		RuntimeObject* L_124 = ___value1;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)(&L_123->___value_3), (void*)L_124);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3155C05051C2D950E8390A1581F340907C222FD9_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mBB5E8E07C506AF04E068339F513E02AF2B33FA8A_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* V_1 = NULL;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_3 = (EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)(EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 29), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_5 = (EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)__this->____entries_1;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint32_t));
		uint32_t L_8 = V_3;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_9);
		bool L_11 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		uint32_t* L_19 = (uint32_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = (int32_t)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___newSize0;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAFDA1925650321D7DBD9CB992FD536B8FD2984AA_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint32_t L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_13 = (EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_20;
		L_20 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_21 = V_4;
		uint32_t L_22 = (uint32_t)L_21->___key_2;
		uint32_t L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_25 = V_4;
		uint32_t L_26 = (uint32_t)L_25->___key_2;
		uint32_t L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_34 = (EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_41 = V_4;
		uint32_t* L_42 = (uint32_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(uint32_t));
	}

IL_00ff:
	{
		if (!true)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mBBE3855923B29F8A7CDB21CF7DD7FCD84AABEB68_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___value1;
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_4 = (EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9585BEF8A82FDEB1D0C3937F758E306833FBBDF3_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m0161D6596D60771F749EEF6ECCD4D06A950DCFB9_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, KeyValuePair_2U5BU5D_t507CDA5432F6D20050CE99321FB52CEF9E776871*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m46802644F1FB4FFAEDD356B271CD7142AAC86C96_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6BB73FBB588BB87421C1222CAE727AD52F96CAD4((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Enumerator_t42FC023879D0041F2016540629807C485A03B1A7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m6388BB328A163B5C99807765A0E718ABD673138A_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mCEC68E6C5BE33449AFF1D3D4E45A4FD75F23B3BD_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4* L_5 = (EntryU5BU5D_tD5D9F69AD8B9069CB4748A06D69B3FEB0A3285C4*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m8EE916CE714A051B83BB108D77000536A67873D8_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mAE1FA8B12CC95772D17A1602BE41C542E1EA61FF_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
