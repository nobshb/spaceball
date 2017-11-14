#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t3964451663;
// System.Char[]
struct CharU5BU5D_t2076847621;
// System.Void
struct Void_t1671149262;

extern RuntimeClass* StringU5BU5D_t3964451663_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3558178961;
extern Il2CppCodeGenString* _stringLiteral2303976607;
extern Il2CppCodeGenString* _stringLiteral1895848136;
extern const uint32_t KeyValuePair_2_ToString_m1249174879_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1353226036_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2803365193_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1294149442_MetadataUsageId;

struct StringU5BU5D_t3964451663;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t2076847621* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t2076847621* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t2076847621** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t2076847621* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T567865735_H
#define VALUETYPE_T567865735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t567865735  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t567865735_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t567865735_marshaled_com
{
};
#endif // VALUETYPE_T567865735_H
#ifndef KEYVALUEPAIR_2_T2483371019_H
#define KEYVALUEPAIR_2_T2483371019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t2483371019 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2483371019, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2483371019, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2483371019_H
#ifndef VOID_T1671149262_H
#define VOID_T1671149262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1671149262 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1671149262_H
#ifndef INT32_T811230005_H
#define INT32_T811230005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t811230005 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t811230005, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T811230005_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef KEYVALUEPAIR_2_T258075098_H
#define KEYVALUEPAIR_2_T258075098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct  KeyValuePair_2_t258075098 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t258075098, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t258075098, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T258075098_H
#ifndef BOOLEAN_T1150156594_H
#define BOOLEAN_T1150156594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t1150156594 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t1150156594, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t1150156594_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t1150156594_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t1150156594_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T1150156594_H
#ifndef ENUM_T516705167_H
#define ENUM_T516705167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t516705167  : public ValueType_t567865735
{
public:

public:
};

struct Enum_t516705167_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2076847621* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t516705167_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2076847621* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2076847621** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2076847621* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t516705167_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t516705167_marshaled_com
{
};
#endif // ENUM_T516705167_H
#ifndef KEYVALUEPAIR_2_T3844254979_H
#define KEYVALUEPAIR_2_T3844254979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct  KeyValuePair_2_t3844254979 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	IntPtr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3844254979, ___key_0)); }
	inline IntPtr_t get_key_0() const { return ___key_0; }
	inline IntPtr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(IntPtr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3844254979, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3844254979_H
#ifndef CAMERAEVENT_T3318258385_H
#define CAMERAEVENT_T3318258385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CameraEvent
struct  CameraEvent_t3318258385 
{
public:
	// System.Int32 UnityEngine.Rendering.CameraEvent::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraEvent_t3318258385, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAEVENT_T3318258385_H
#ifndef KEYVALUEPAIR_2_T2262271615_H
#define KEYVALUEPAIR_2_T2262271615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,System.Object>
struct  KeyValuePair_2_t2262271615 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2262271615, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2262271615, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2262271615_H
#ifndef KEYVALUEPAIR_2_T1370190119_H
#define KEYVALUEPAIR_2_T1370190119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,System.Object>>
struct  KeyValuePair_2_t1370190119 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	KeyValuePair_2_t2262271615  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1370190119, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1370190119, ___value_1)); }
	inline KeyValuePair_2_t2262271615  get_value_1() const { return ___value_1; }
	inline KeyValuePair_2_t2262271615 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(KeyValuePair_2_t2262271615  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1370190119_H
// System.String[]
struct StringU5BU5D_t3964451663  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m487569072_gshared (KeyValuePair_2_t2483371019 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m959993028_gshared (KeyValuePair_2_t2483371019 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m644971281_gshared (KeyValuePair_2_t2483371019 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2491700964_gshared (KeyValuePair_2_t2483371019 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m4089232866_gshared (KeyValuePair_2_t2483371019 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1249174879_gshared (KeyValuePair_2_t2483371019 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3997676570_gshared (KeyValuePair_2_t3844254979 * __this, IntPtr_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m4133615302_gshared (KeyValuePair_2_t3844254979 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4138954363_gshared (KeyValuePair_2_t3844254979 * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m652442540_gshared (KeyValuePair_2_t3844254979 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3989175243_gshared (KeyValuePair_2_t3844254979 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1353226036_gshared (KeyValuePair_2_t3844254979 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m265329541_gshared (KeyValuePair_2_t258075098 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m571971753_gshared (KeyValuePair_2_t258075098 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m191884555_gshared (KeyValuePair_2_t258075098 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2870365723_gshared (KeyValuePair_2_t258075098 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m3004227573_gshared (KeyValuePair_2_t258075098 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2803365193_gshared (KeyValuePair_2_t258075098 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,System.Object>>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m288265457_gshared (KeyValuePair_2_t1370190119 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,System.Object>>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m414403509_gshared (KeyValuePair_2_t1370190119 * __this, KeyValuePair_2_t2262271615  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,System.Object>>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3574521047_gshared (KeyValuePair_2_t1370190119 * __this, RuntimeObject * ___key0, KeyValuePair_2_t2262271615  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,System.Object>>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3191773189_gshared (KeyValuePair_2_t1370190119 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,System.Object>>::get_Value()
extern "C"  KeyValuePair_2_t2262271615  KeyValuePair_2_get_Value_m3609654694_gshared (KeyValuePair_2_t1370190119 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,System.Object>>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1294149442_gshared (KeyValuePair_2_t1370190119 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m487569072(__this, p0, method) ((  void (*) (KeyValuePair_2_t2483371019 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m487569072_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m959993028(__this, p0, method) ((  void (*) (KeyValuePair_2_t2483371019 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m959993028_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m644971281(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2483371019 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m644971281_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2491700964(__this, method) ((  int32_t (*) (KeyValuePair_2_t2483371019 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2491700964_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m4089232866(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2483371019 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m4089232866_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m3291962569 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m1189694996 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t3964451663* ___values0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
#define KeyValuePair_2_ToString_m1249174879(__this, method) ((  String_t* (*) (KeyValuePair_2_t2483371019 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1249174879_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3997676570(__this, p0, method) ((  void (*) (KeyValuePair_2_t3844254979 *, IntPtr_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m3997676570_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m4133615302(__this, p0, method) ((  void (*) (KeyValuePair_2_t3844254979 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m4133615302_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m4138954363(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3844254979 *, IntPtr_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m4138954363_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m652442540(__this, method) ((  IntPtr_t (*) (KeyValuePair_2_t3844254979 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m652442540_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m3989175243(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3844254979 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3989175243_gshared)(__this, method)
// System.String System.IntPtr::ToString()
extern "C"  String_t* IntPtr_ToString_m1604358434 (IntPtr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
#define KeyValuePair_2_ToString_m1353226036(__this, method) ((  String_t* (*) (KeyValuePair_2_t3844254979 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1353226036_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m265329541(__this, p0, method) ((  void (*) (KeyValuePair_2_t258075098 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m265329541_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m571971753(__this, p0, method) ((  void (*) (KeyValuePair_2_t258075098 *, bool, const RuntimeMethod*))KeyValuePair_2_set_Value_m571971753_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m191884555(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t258075098 *, RuntimeObject *, bool, const RuntimeMethod*))KeyValuePair_2__ctor_m191884555_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
#define KeyValuePair_2_get_Key_m2870365723(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t258075098 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2870365723_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
#define KeyValuePair_2_get_Value_m3004227573(__this, method) ((  bool (*) (KeyValuePair_2_t258075098 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3004227573_gshared)(__this, method)
// System.String System.Boolean::ToString()
extern "C"  String_t* Boolean_ToString_m2833287676 (bool* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
#define KeyValuePair_2_ToString_m2803365193(__this, method) ((  String_t* (*) (KeyValuePair_2_t258075098 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2803365193_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,System.Object>>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m288265457(__this, p0, method) ((  void (*) (KeyValuePair_2_t1370190119 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m288265457_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,System.Object>>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m414403509(__this, p0, method) ((  void (*) (KeyValuePair_2_t1370190119 *, KeyValuePair_2_t2262271615 , const RuntimeMethod*))KeyValuePair_2_set_Value_m414403509_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,System.Object>>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3574521047(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1370190119 *, RuntimeObject *, KeyValuePair_2_t2262271615 , const RuntimeMethod*))KeyValuePair_2__ctor_m3574521047_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,System.Object>>::get_Key()
#define KeyValuePair_2_get_Key_m3191773189(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1370190119 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3191773189_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,System.Object>>::get_Value()
#define KeyValuePair_2_get_Value_m3609654694(__this, method) ((  KeyValuePair_2_t2262271615  (*) (KeyValuePair_2_t1370190119 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3609654694_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,System.Object>>::ToString()
#define KeyValuePair_2_ToString_m1294149442(__this, method) ((  String_t* (*) (KeyValuePair_2_t1370190119 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1294149442_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m644971281_gshared (KeyValuePair_2_t2483371019 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m487569072((KeyValuePair_2_t2483371019 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m959993028((KeyValuePair_2_t2483371019 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m644971281_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2483371019 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2483371019 *>(__this + 1);
	KeyValuePair_2__ctor_m644971281(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2491700964_gshared (KeyValuePair_2_t2483371019 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m2491700964_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2483371019 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2483371019 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2491700964(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m487569072_gshared (KeyValuePair_2_t2483371019 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m487569072_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2483371019 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2483371019 *>(__this + 1);
	KeyValuePair_2_set_Key_m487569072(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m4089232866_gshared (KeyValuePair_2_t2483371019 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m4089232866_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2483371019 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2483371019 *>(__this + 1);
	return KeyValuePair_2_get_Value_m4089232866(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m959993028_gshared (KeyValuePair_2_t2483371019 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m959993028_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2483371019 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2483371019 *>(__this + 1);
	KeyValuePair_2_set_Value_m959993028(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1249174879_gshared (KeyValuePair_2_t2483371019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1249174879_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t3964451663* G_B2_1 = NULL;
	StringU5BU5D_t3964451663* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t3964451663* G_B1_1 = NULL;
	StringU5BU5D_t3964451663* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t3964451663* G_B3_2 = NULL;
	StringU5BU5D_t3964451663* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t3964451663* G_B5_1 = NULL;
	StringU5BU5D_t3964451663* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t3964451663* G_B4_1 = NULL;
	StringU5BU5D_t3964451663* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t3964451663* G_B6_2 = NULL;
	StringU5BU5D_t3964451663* G_B6_3 = NULL;
	{
		StringU5BU5D_t3964451663* L_0 = (StringU5BU5D_t3964451663*)((StringU5BU5D_t3964451663*)SZArrayNew(StringU5BU5D_t3964451663_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral3558178961);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3558178961);
		StringU5BU5D_t3964451663* L_1 = (StringU5BU5D_t3964451663*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m2491700964((KeyValuePair_2_t2483371019 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m2491700964((KeyValuePair_2_t2483371019 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m3291962569((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t3964451663* L_6 = (StringU5BU5D_t3964451663*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral2303976607);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2303976607);
		StringU5BU5D_t3964451663* L_7 = (StringU5BU5D_t3964451663*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m4089232866((KeyValuePair_2_t2483371019 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m4089232866((KeyValuePair_2_t2483371019 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t3964451663* L_12 = (StringU5BU5D_t3964451663*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral1895848136);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1895848136);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m1189694996(NULL /*static, unused*/, (StringU5BU5D_t3964451663*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1249174879_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2483371019 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2483371019 *>(__this + 1);
	return KeyValuePair_2_ToString_m1249174879(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4138954363_gshared (KeyValuePair_2_t3844254979 * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m3997676570((KeyValuePair_2_t3844254979 *)__this, (IntPtr_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m4133615302((KeyValuePair_2_t3844254979 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m4138954363_AdjustorThunk (RuntimeObject * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3844254979 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3844254979 *>(__this + 1);
	KeyValuePair_2__ctor_m4138954363(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m652442540_gshared (KeyValuePair_2_t3844254979 * __this, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = (IntPtr_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m652442540_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3844254979 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3844254979 *>(__this + 1);
	return KeyValuePair_2_get_Key_m652442540(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3997676570_gshared (KeyValuePair_2_t3844254979 * __this, IntPtr_t ___value0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3997676570_AdjustorThunk (RuntimeObject * __this, IntPtr_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3844254979 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3844254979 *>(__this + 1);
	KeyValuePair_2_set_Key_m3997676570(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3989175243_gshared (KeyValuePair_2_t3844254979 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3989175243_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3844254979 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3844254979 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3989175243(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m4133615302_gshared (KeyValuePair_2_t3844254979 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m4133615302_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3844254979 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3844254979 *>(__this + 1);
	KeyValuePair_2_set_Value_m4133615302(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1353226036_gshared (KeyValuePair_2_t3844254979 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1353226036_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntPtr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t3964451663* G_B2_1 = NULL;
	StringU5BU5D_t3964451663* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t3964451663* G_B1_1 = NULL;
	StringU5BU5D_t3964451663* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t3964451663* G_B3_2 = NULL;
	StringU5BU5D_t3964451663* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t3964451663* G_B5_1 = NULL;
	StringU5BU5D_t3964451663* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t3964451663* G_B4_1 = NULL;
	StringU5BU5D_t3964451663* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t3964451663* G_B6_2 = NULL;
	StringU5BU5D_t3964451663* G_B6_3 = NULL;
	{
		StringU5BU5D_t3964451663* L_0 = (StringU5BU5D_t3964451663*)((StringU5BU5D_t3964451663*)SZArrayNew(StringU5BU5D_t3964451663_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral3558178961);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3558178961);
		StringU5BU5D_t3964451663* L_1 = (StringU5BU5D_t3964451663*)L_0;
		IntPtr_t L_2 = KeyValuePair_2_get_Key_m652442540((KeyValuePair_2_t3844254979 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		IntPtr_t L_3 = KeyValuePair_2_get_Key_m652442540((KeyValuePair_2_t3844254979 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (IntPtr_t)L_3;
		String_t* L_4 = IntPtr_ToString_m1604358434((IntPtr_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t3964451663* L_6 = (StringU5BU5D_t3964451663*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral2303976607);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2303976607);
		StringU5BU5D_t3964451663* L_7 = (StringU5BU5D_t3964451663*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m3989175243((KeyValuePair_2_t3844254979 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m3989175243((KeyValuePair_2_t3844254979 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t3964451663* L_12 = (StringU5BU5D_t3964451663*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral1895848136);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1895848136);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m1189694996(NULL /*static, unused*/, (StringU5BU5D_t3964451663*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1353226036_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3844254979 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3844254979 *>(__this + 1);
	return KeyValuePair_2_ToString_m1353226036(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m191884555_gshared (KeyValuePair_2_t258075098 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m265329541((KeyValuePair_2_t258075098 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		bool L_1 = ___value1;
		KeyValuePair_2_set_Value_m571971753((KeyValuePair_2_t258075098 *)__this, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m191884555_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t258075098 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t258075098 *>(__this + 1);
	KeyValuePair_2__ctor_m191884555(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2870365723_gshared (KeyValuePair_2_t258075098 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2870365723_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t258075098 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t258075098 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2870365723(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m265329541_gshared (KeyValuePair_2_t258075098 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m265329541_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t258075098 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t258075098 *>(__this + 1);
	KeyValuePair_2_set_Key_m265329541(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m3004227573_gshared (KeyValuePair_2_t258075098 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_1();
		return L_0;
	}
}
extern "C"  bool KeyValuePair_2_get_Value_m3004227573_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t258075098 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t258075098 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3004227573(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m571971753_gshared (KeyValuePair_2_t258075098 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m571971753_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t258075098 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t258075098 *>(__this + 1);
	KeyValuePair_2_set_Value_m571971753(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2803365193_gshared (KeyValuePair_2_t258075098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2803365193_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t3964451663* G_B2_1 = NULL;
	StringU5BU5D_t3964451663* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t3964451663* G_B1_1 = NULL;
	StringU5BU5D_t3964451663* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t3964451663* G_B3_2 = NULL;
	StringU5BU5D_t3964451663* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t3964451663* G_B5_1 = NULL;
	StringU5BU5D_t3964451663* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t3964451663* G_B4_1 = NULL;
	StringU5BU5D_t3964451663* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t3964451663* G_B6_2 = NULL;
	StringU5BU5D_t3964451663* G_B6_3 = NULL;
	{
		StringU5BU5D_t3964451663* L_0 = (StringU5BU5D_t3964451663*)((StringU5BU5D_t3964451663*)SZArrayNew(StringU5BU5D_t3964451663_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral3558178961);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3558178961);
		StringU5BU5D_t3964451663* L_1 = (StringU5BU5D_t3964451663*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m2870365723((KeyValuePair_2_t258075098 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m2870365723((KeyValuePair_2_t258075098 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t3964451663* L_6 = (StringU5BU5D_t3964451663*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral2303976607);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2303976607);
		StringU5BU5D_t3964451663* L_7 = (StringU5BU5D_t3964451663*)L_6;
		bool L_8 = KeyValuePair_2_get_Value_m3004227573((KeyValuePair_2_t258075098 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		bool L_9 = KeyValuePair_2_get_Value_m3004227573((KeyValuePair_2_t258075098 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (bool)L_9;
		String_t* L_10 = Boolean_ToString_m2833287676((bool*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t3964451663* L_12 = (StringU5BU5D_t3964451663*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral1895848136);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1895848136);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m1189694996(NULL /*static, unused*/, (StringU5BU5D_t3964451663*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2803365193_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t258075098 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t258075098 *>(__this + 1);
	return KeyValuePair_2_ToString_m2803365193(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,System.Object>>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3574521047_gshared (KeyValuePair_2_t1370190119 * __this, RuntimeObject * ___key0, KeyValuePair_2_t2262271615  ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m288265457((KeyValuePair_2_t1370190119 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2262271615  L_1 = ___value1;
		KeyValuePair_2_set_Value_m414403509((KeyValuePair_2_t1370190119 *)__this, (KeyValuePair_2_t2262271615 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3574521047_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, KeyValuePair_2_t2262271615  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1370190119 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1370190119 *>(__this + 1);
	KeyValuePair_2__ctor_m3574521047(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,System.Object>>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3191773189_gshared (KeyValuePair_2_t1370190119 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3191773189_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1370190119 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1370190119 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3191773189(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,System.Object>>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m288265457_gshared (KeyValuePair_2_t1370190119 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m288265457_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1370190119 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1370190119 *>(__this + 1);
	KeyValuePair_2_set_Key_m288265457(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,System.Object>>::get_Value()
extern "C"  KeyValuePair_2_t2262271615  KeyValuePair_2_get_Value_m3609654694_gshared (KeyValuePair_2_t1370190119 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t2262271615  L_0 = (KeyValuePair_2_t2262271615 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  KeyValuePair_2_t2262271615  KeyValuePair_2_get_Value_m3609654694_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1370190119 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1370190119 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3609654694(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,System.Object>>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m414403509_gshared (KeyValuePair_2_t1370190119 * __this, KeyValuePair_2_t2262271615  ___value0, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t2262271615  L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m414403509_AdjustorThunk (RuntimeObject * __this, KeyValuePair_2_t2262271615  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1370190119 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1370190119 *>(__this + 1);
	KeyValuePair_2_set_Value_m414403509(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,System.Object>>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1294149442_gshared (KeyValuePair_2_t1370190119 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1294149442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	KeyValuePair_2_t2262271615  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t3964451663* G_B2_1 = NULL;
	StringU5BU5D_t3964451663* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t3964451663* G_B1_1 = NULL;
	StringU5BU5D_t3964451663* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t3964451663* G_B3_2 = NULL;
	StringU5BU5D_t3964451663* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t3964451663* G_B5_1 = NULL;
	StringU5BU5D_t3964451663* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t3964451663* G_B4_1 = NULL;
	StringU5BU5D_t3964451663* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t3964451663* G_B6_2 = NULL;
	StringU5BU5D_t3964451663* G_B6_3 = NULL;
	{
		StringU5BU5D_t3964451663* L_0 = (StringU5BU5D_t3964451663*)((StringU5BU5D_t3964451663*)SZArrayNew(StringU5BU5D_t3964451663_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral3558178961);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3558178961);
		StringU5BU5D_t3964451663* L_1 = (StringU5BU5D_t3964451663*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m3191773189((KeyValuePair_2_t1370190119 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m3191773189((KeyValuePair_2_t1370190119 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t3964451663* L_6 = (StringU5BU5D_t3964451663*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral2303976607);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2303976607);
		StringU5BU5D_t3964451663* L_7 = (StringU5BU5D_t3964451663*)L_6;
		KeyValuePair_2_t2262271615  L_8 = KeyValuePair_2_get_Value_m3609654694((KeyValuePair_2_t1370190119 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		KeyValuePair_2_t2262271615  L_9 = KeyValuePair_2_get_Value_m3609654694((KeyValuePair_2_t1370190119 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (KeyValuePair_2_t2262271615 )L_9;
		Il2CppFakeBox<KeyValuePair_2_t2262271615 > L_10(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__104 = il2cpp_codegen_get_virtual_invoke_data(3, &L_10);
		String_t* L_11 = ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__104.methodPtr)((RuntimeObject *)(&L_10), /*hidden argument*/il2cpp_virtual_invoke_data__104.method);
		*(&V_1) = L_10.m_Value;
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t3964451663* L_13 = (StringU5BU5D_t3964451663*)G_B6_3;
		ArrayElementTypeCheck (L_13, _stringLiteral1895848136);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1895848136);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m1189694996(NULL /*static, unused*/, (StringU5BU5D_t3964451663*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1294149442_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1370190119 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1370190119 *>(__this + 1);
	return KeyValuePair_2_ToString_m1294149442(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
