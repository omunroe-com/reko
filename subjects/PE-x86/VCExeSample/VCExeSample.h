// VCExeSample.h
// Generated by decompiling VCExeSample.exe
// using Decompiler version 0.6.0.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (4020C0 (str char) str4020C0) (4020C8 (str char) str4020C8) (4020D4 (str char) str4020D4) (4020D8 (str char) str4020D8) (4020DC (str char) str4020DC) (4020E0 (str char) str4020E0) (4020E4 real32 r4020E4) (4020E8 real32 r4020E8) (4020EC Eq_78 t4020EC) (403018 Eq_89 gbl_c))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_5: (fn void ((ptr char), int32, (ptr char), real32))
	T_5 (in test1 : ptr32)
	T_6 (in signature of test1 : void)
	T_26 (in test1 : ptr32)
	T_37 (in test1 : ptr32)
Eq_20: (fn int32 ((ptr char)))
	T_20 (in printf : ptr32)
	T_21 (in signature of printf : void)
Eq_45: cdecl_class
	T_45 (in c : (ptr Eq_45))
Eq_46: cdecl_class_vtbl
	T_46 (in edx_15 : (ptr Eq_46))
	T_49 (in Mem0[c + 0x00000000:word32] : word32)
Eq_48: cdecl_class_vtbl
	T_48 (in c + 0x00000000 : word32)
Eq_50: (fn void ((ptr cdecl_class), int32))
	T_50 (in eax_16 : (ptr Eq_50))
	T_53 (in Mem0[edx_15 + 0x00000004:word32] : word32)
Eq_52: (fn void ((ptr cdecl_class), int32))
	T_52 (in edx_15 + 0x00000004 : word32)
Eq_60: cdecl_class_ptr
	T_60 (in ecx_10 : Eq_60)
	T_62 (in Mem0[0x00403018:word32] : word32)
	T_83 (in Mem0[0x00403018:word32] : word32)
	T_84 (in eax_13 : word32)
	T_85 (in dwLoc10_15 : word32)
Eq_61: (union "Eq_61" (cdecl_class_ptr u0) (Eq_60 u1))
	T_61 (in 0x00403018 : ptr32)
Eq_63: cdecl_class_vtbl
	T_63 (in edx_11 : (ptr Eq_63))
	T_66 (in Mem0[ecx_10 + 0x00000000:word32] : word32)
Eq_65: cdecl_class_vtbl
	T_65 (in ecx_10 + 0x00000000 : word32)
Eq_67: (fn void ((ptr cdecl_class)))
	T_67 (in eax_12 : (ptr Eq_67))
	T_70 (in Mem0[edx_11 + 0x00000000:word32] : word32)
Eq_69: (fn void ((ptr cdecl_class)))
	T_69 (in edx_11 + 0x00000000 : word32)
Eq_78: (union "Eq_78" (real32 u0) (real64 u1))
	T_78 (in Mem0[0x004020EC:real32] : real32)
	T_79 (in rLoc1_9 : real64)
Eq_82: (union "Eq_82" (cdecl_class_ptr u0) (Eq_60 u1))
	T_82 (in 0x00403018 : word32)
Eq_86: (fn void (Eq_60, word32, real32))
	T_86 (in eax : word32)
Eq_89: (union "Eq_89" (cdecl_class_ptr u0) (Eq_60 u1))
	T_89
Eq_90: (union "Eq_90" ((ptr cdecl_class_vtbl) u0) ((ptr Eq_46) u1))
	T_90
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in eax : int32)
  Class: Eq_2
  DataType: int32
  OrigDataType: int32
T_3: (in argc : int32)
  Class: Eq_3
  DataType: int32
  OrigDataType: int32
T_4: (in argv : (ptr (ptr char)))
  Class: Eq_4
  DataType: (ptr (ptr char))
  OrigDataType: (ptr (ptr char))
T_5: (in test1 : ptr32)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (fn T_18 (T_14, T_15, T_16, T_17)))
T_6: (in signature of test1 : void)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: 
T_7: (in arg1 : (ptr char))
  Class: Eq_7
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_8: (in arg2 : int32)
  Class: Eq_8
  DataType: int32
  OrigDataType: int32
T_9: (in arg3 : (ptr char))
  Class: Eq_9
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_10: (in arg4 : real32)
  Class: Eq_10
  DataType: real32
  OrigDataType: real32
T_11: (in argv : (ptr (ptr char)))
  Class: Eq_11
  DataType: (ptr (ptr char))
  OrigDataType: (ptr (union ((ptr char) u0) ((struct (0 (ptr char) ptr0000)) u1)))
T_12: (in 0x00000000 : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_13: (in argv + 0x00000000 : word32)
  Class: Eq_13
  DataType: ptr32
  OrigDataType: ptr32
T_14: (in Mem0[argv + 0x00000000:word32] : word32)
  Class: Eq_7
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_15: (in argc : int32)
  Class: Eq_8
  DataType: int32
  OrigDataType: int32
T_16: (in 0x004020C0 : word32)
  Class: Eq_9
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_17: (in 1.0F : real32)
  Class: Eq_10
  DataType: real32
  OrigDataType: real32
T_18: (in test1(*argv, argc, "test123", 1.0F) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_19: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: int32
  OrigDataType: word32
T_20: (in printf : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_24 (T_23)))
T_21: (in signature of printf : void)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: 
T_22: (in ptrArg00 : (ptr char))
  Class: Eq_22
  DataType: (ptr char)
  OrigDataType: 
T_23: (in 0x004020C8 : word32)
  Class: Eq_22
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_24: (in printf("%s %d %s %f") : int32)
  Class: Eq_24
  DataType: int32
  OrigDataType: int32
T_25: (in dwArg04 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_26: (in test1 : ptr32)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (fn T_33 (T_27, T_28, T_29, T_32)))
T_27: (in 0x004020D8 : word32)
  Class: Eq_7
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_28: (in 0x00000002 : word32)
  Class: Eq_8
  DataType: int32
  OrigDataType: int32
T_29: (in 0x004020D4 : word32)
  Class: Eq_9
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_30: (in 0x004020E8 : ptr32)
  Class: Eq_30
  DataType: (ptr real32)
  OrigDataType: (ptr (struct (0 T_31 t0000)))
T_31: (in Mem0[0x004020E8:real32] : real32)
  Class: Eq_31
  DataType: real32
  OrigDataType: real32
T_32: (in (real32) globals->r4020E8 : real32)
  Class: Eq_10
  DataType: real32
  OrigDataType: real32
T_33: (in test1("1", 0x00000002, "3", (real32) globals->r4020E8) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_34: (in dwArg04 : word32)
  Class: Eq_34
  DataType: word32
  OrigDataType: word32
T_35: (in 0x00000000 : word32)
  Class: Eq_34
  DataType: word32
  OrigDataType: word32
T_36: (in dwArg04 != 0x00000000 : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in test1 : ptr32)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (fn T_44 (T_38, T_39, T_40, T_43)))
T_38: (in 0x004020E0 : word32)
  Class: Eq_7
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_39: (in 0x00000006 : word32)
  Class: Eq_8
  DataType: int32
  OrigDataType: int32
T_40: (in 0x004020DC : word32)
  Class: Eq_9
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_41: (in 0x004020E4 : ptr32)
  Class: Eq_41
  DataType: (ptr real32)
  OrigDataType: (ptr (struct (0 T_42 t0000)))
T_42: (in Mem0[0x004020E4:real32] : real32)
  Class: Eq_42
  DataType: real32
  OrigDataType: real32
T_43: (in (real32) globals->r4020E4 : real32)
  Class: Eq_10
  DataType: real32
  OrigDataType: real32
T_44: (in test1("5", 0x00000006, "7", (real32) globals->r4020E4) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_45: (in c : (ptr Eq_45))
  Class: Eq_45
  DataType: (ptr Eq_45)
  OrigDataType: (ptr (union (cdecl_class u1)))
T_46: (in edx_15 : (ptr Eq_46))
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (union (cdecl_class_vtbl u1)))
T_47: (in 0x00000000 : word32)
  Class: Eq_47
  DataType: word32
  OrigDataType: word32
T_48: (in c + 0x00000000 : word32)
  Class: Eq_48
  DataType: (ptr (ptr Eq_48))
  OrigDataType: (ptr (ptr cdecl_class_vtbl))
T_49: (in Mem0[c + 0x00000000:word32] : word32)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr cdecl_class_vtbl)
T_50: (in eax_16 : (ptr Eq_50))
  Class: Eq_50
  DataType: (ptr Eq_50)
  OrigDataType: (ptr (fn void ((ptr cdecl_class), int32)))
T_51: (in 0x00000004 : word32)
  Class: Eq_51
  DataType: word32
  OrigDataType: word32
T_52: (in edx_15 + 0x00000004 : word32)
  Class: Eq_52
  DataType: (ptr (ptr Eq_52))
  OrigDataType: (ptr (ptr (fn void ((ptr cdecl_class), int32))))
T_53: (in Mem0[edx_15 + 0x00000004:word32] : word32)
  Class: Eq_50
  DataType: (ptr Eq_50)
  OrigDataType: (ptr (fn void ((ptr cdecl_class), int32)))
T_54: (in esp_17 : word32)
  Class: Eq_54
  DataType: word32
  OrigDataType: word32
T_55: (in ebp_18 : word32)
  Class: Eq_55
  DataType: word32
  OrigDataType: word32
T_56: (in eax_19 : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_57: (in ecx_20 : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_58: (in edx_21 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in SCZO_22 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in ecx_10 : Eq_60)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: (union (cdecl_class_ptr u1))
T_61: (in 0x00403018 : ptr32)
  Class: Eq_61
  DataType: (ptr Eq_61)
  OrigDataType: (ptr (union ((struct (0 Eq_60 t0000)) u0) (cdecl_class_ptr u1)))
T_62: (in Mem0[0x00403018:word32] : word32)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: cdecl_class_ptr
T_63: (in edx_11 : (ptr Eq_63))
  Class: Eq_63
  DataType: (ptr Eq_63)
  OrigDataType: (ptr (union (cdecl_class_vtbl u1)))
T_64: (in 0x00000000 : word32)
  Class: Eq_64
  DataType: word32
  OrigDataType: word32
T_65: (in ecx_10 + 0x00000000 : word32)
  Class: Eq_65
  DataType: (ptr (ptr Eq_65))
  OrigDataType: (ptr (ptr cdecl_class_vtbl))
T_66: (in Mem0[ecx_10 + 0x00000000:word32] : word32)
  Class: Eq_63
  DataType: (ptr Eq_63)
  OrigDataType: (ptr cdecl_class_vtbl)
T_67: (in eax_12 : (ptr Eq_67))
  Class: Eq_67
  DataType: (ptr Eq_67)
  OrigDataType: (ptr (fn void ((ptr cdecl_class))))
T_68: (in 0x00000000 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in edx_11 + 0x00000000 : word32)
  Class: Eq_69
  DataType: (ptr (ptr Eq_69))
  OrigDataType: (ptr (ptr (fn void ((ptr cdecl_class)))))
T_70: (in Mem0[edx_11 + 0x00000000:word32] : word32)
  Class: Eq_67
  DataType: (ptr Eq_67)
  OrigDataType: (ptr (fn void ((ptr cdecl_class))))
T_71: (in esp_13 : word32)
  Class: Eq_71
  DataType: word32
  OrigDataType: word32
T_72: (in ebp_14 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in eax_15 : word32)
  Class: Eq_73
  DataType: word32
  OrigDataType: word32
T_74: (in ecx_16 : word32)
  Class: Eq_74
  DataType: word32
  OrigDataType: word32
T_75: (in edx_17 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in SCZO_18 : byte)
  Class: Eq_76
  DataType: byte
  OrigDataType: byte
T_77: (in 0x004020EC : ptr32)
  Class: Eq_77
  DataType: (ptr Eq_78)
  OrigDataType: (ptr (struct (0 T_78 t0000)))
T_78: (in Mem0[0x004020EC:real32] : real32)
  Class: Eq_78
  DataType: Eq_78
  OrigDataType: real32
T_79: (in rLoc1_9 : real64)
  Class: Eq_78
  DataType: Eq_78
  OrigDataType: (union (real32 u0) (real64 u1))
T_80: (in (real32) rLoc1_9 : real32)
  Class: Eq_80
  DataType: real32
  OrigDataType: real32
T_81: (in dwLoc08_10 : word32)
  Class: Eq_80
  DataType: real32
  OrigDataType: real32
T_82: (in 0x00403018 : word32)
  Class: Eq_82
  DataType: (ptr Eq_82)
  OrigDataType: (ptr (union ((struct (0 Eq_60 t0000)) u0) (cdecl_class_ptr u1)))
T_83: (in Mem0[0x00403018:word32] : word32)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: cdecl_class_ptr
T_84: (in eax_13 : word32)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: cdecl_class_ptr
T_85: (in dwLoc10_15 : word32)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: cdecl_class_ptr
T_86: (in eax : word32)
  Class: Eq_86
  DataType: (ptr Eq_86)
  OrigDataType: (ptr (fn T_88 (T_85, T_87, T_81)))
T_87: (in 0x000003E7 : word32)
  Class: Eq_87
  DataType: word32
  OrigDataType: word32
T_88: (in eax(dwLoc10_15, 0x000003E7, dwLoc08_10) : void)
  Class: Eq_88
  DataType: void
  OrigDataType: void
T_89:
  Class: Eq_89
  DataType: Eq_89
  OrigDataType: 
T_90:
  Class: Eq_90
  DataType: Eq_90
  OrigDataType: 
*/
typedef struct Globals {
	char str4020C0[];	// 4020C0
	char str4020C8[];	// 4020C8
	char str4020D4[];	// 4020D4
	char str4020D8[];	// 4020D8
	char str4020DC[];	// 4020DC
	char str4020E0[];	// 4020E0
	real32 r4020E4;	// 4020E4
	real32 r4020E8;	// 4020E8
	Eq_78 t4020EC;	// 4020EC
	Eq_89 gbl_c;	// 403018
} Eq_1;

typedef void (Eq_5)(char *, int32, char *, real32);

typedef int32 (Eq_20)(char *);

typedef cdecl_class Eq_45;

typedef cdecl_class_vtbl Eq_46;

typedef cdecl_class_vtbl Eq_48;

typedef void (Eq_50)(cdecl_class *, int32);

typedef void (Eq_52)(cdecl_class * ptrArg00, int32 dwArg04);

typedef cdecl_class_ptr Eq_60;

typedef union Eq_61 {
	cdecl_class_ptr u0;
	Eq_60 u1;
} Eq_61;

typedef cdecl_class_vtbl Eq_63;

typedef cdecl_class_vtbl Eq_65;

typedef void (Eq_67)(cdecl_class *);

typedef void (Eq_69)(cdecl_class * ptrArg00);

typedef union Eq_78 {
	real32 u0;
	real64 u1;
} Eq_78;

typedef union Eq_82 {
	cdecl_class_ptr u0;
	Eq_60 u1;
} Eq_82;

typedef void (Eq_86)(cdecl_class_ptr, word32, real32);

typedef union Eq_89 {
	cdecl_class_ptr u0;
	Eq_60 u1;
} Eq_89;

typedef union Eq_90 {
	cdecl_class_vtbl * u0;
	cdecl_class_vtbl * u1;
} Eq_90;

