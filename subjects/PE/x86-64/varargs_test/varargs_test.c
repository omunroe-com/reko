// varargs_test.c
// Generated by decompiling varargs_test.exe
// using Reko decompiler version 0.8.0.0.

#include "varargs_test.h"

// 0000000140001000: Register word64 fn0000000140001000()
word64 fn0000000140001000()
{
	ui64 rax_5 = globals->qw40003000 ^ fp - 200;
	fn0000000140001140(qwLocC8, qwLocC0, qwLocB8, qwLocB0);
	fn00000001400010D0(qwLocC8, qwLocC0, qwLocB8, qwLocB0);
	return fn00000001400011B0(rax_5 ^ fp - 200);
}

// 00000001400010C0: Register ptr64 fn00000001400010C0()
ptr64 fn00000001400010C0()
{
	return 0x140003628;
}

// 00000001400010D0: void fn00000001400010D0(Stack word64 qwArg08, Stack word64 qwArg10, Stack word64 qwArg18, Stack word64 qwArg20)
void fn00000001400010D0(word64 qwArg08, word64 qwArg10, word64 qwArg18, word64 qwArg20)
{
	word64 rsp_26;
	word64 rcx_27;
	word64 rdx_28;
	word64 r8_29;
	word64 r9_30;
	word64 rbx_31;
	word64 rsi_32;
	word64 rdi_33;
	byte SCZO_34;
	word32 ecx_35;
	byte SZO_36;
	byte C_37;
	word64 rax_38;
	word32 r9d_39;
	fn00000000000029F4();
	ui64 * rax_41 = fn00000001400010C0();
	word64 rsp_51;
	word64 rcx_52;
	word64 rdx_53;
	word64 r8_54;
	word64 r9_55;
	word64 rbx_56;
	word64 rsi_57;
	word64 rdi_58;
	byte SCZO_59;
	word32 ecx_60;
	byte SZO_61;
	byte C_62;
	word64 rax_63;
	word32 r9d_64;
	fn0000000000002A20();
}

// 0000000140001130: Register ptr64 fn0000000140001130()
ptr64 fn0000000140001130()
{
	return 0x140003620;
}

// 0000000140001140: void fn0000000140001140(Stack word64 qwArg08, Stack word64 qwArg10, Stack word64 qwArg18, Stack word64 qwArg20)
void fn0000000140001140(word64 qwArg08, word64 qwArg10, word64 qwArg18, word64 qwArg20)
{
	word64 rsp_24;
	word64 rcx_25;
	word64 rdx_26;
	word64 r8_27;
	word64 r9_28;
	word64 rbx_29;
	word64 rsi_30;
	word64 rdi_31;
	byte SCZO_32;
	word32 ecx_33;
	word64 rax_34;
	word32 r9d_35;
	byte SZO_36;
	byte C_37;
	fn00000000000029F4();
	ui64 * rax_39 = fn0000000140001130();
	word64 rsp_49;
	word64 rcx_50;
	word64 rdx_51;
	word64 r8_52;
	word64 r9_53;
	word64 rbx_54;
	word64 rsi_55;
	word64 rdi_56;
	byte SCZO_57;
	word32 ecx_58;
	word64 rax_59;
	word32 r9d_60;
	byte SZO_61;
	byte C_62;
	fn0000000000002A06();
}

// 00000001400011B0: Register word64 fn00000001400011B0(Register ui64 rcx)
word64 fn00000001400011B0(ui64 rcx)
{
	if (rcx != globals->qw40003000)
		return fn000000014000147C(rcx, qwArg00, qwArg08);
	ui64 rcx_29 = __rol(rcx, 0x10);
	if (((word16) rcx_29 & ~0x00) == 0x00)
		return rax;
	rcx = __ror(rcx_29, 0x10);
	return fn000000014000147C(rcx, qwArg00, qwArg08);
}

// 00000001400011D4: void fn00000001400011D4(Register word64 rbx, Register word64 r8, Register word64 r13, Register word128 xmm1)
void fn00000001400011D4(word64 rbx, word64 r8, word64 r13, word128 xmm1)
{
	word64 rsp_8;
	word64 rbx_9;
	byte SCZO_10;
	word32 ecx_11;
	word64 rcx_12;
	word32 eax_13;
	word64 rax_14;
	byte al_15;
	byte SZO_16;
	byte C_17;
	byte Z_18;
	ui64 r8_19;
	ptr64 r13_20;
	word128 xmm1_21;
	byte bl_22;
	set_app_type();
	fn0000000140001920();
	_set_fmode(dwLoc28);
	*__p__commode() = fn0000000140001ABC();
	word32 eax_34 = fn000000014000164C(0x01, r8_19, r13_20, xmm1_21, qwLoc28);
	byte al_36 = (byte) eax_34;
	if (al_36 != 0x00)
	{
		fn0000000140001B5C(qwArg00, qwArg08);
		fn0000000140001854(eax_34);
		word32 eax_74 = fn0000000140001918();
		word64 rsp_76;
		word64 rbx_77;
		byte SCZO_78;
		word32 ecx_79;
		word64 rcx_80;
		word32 eax_81;
		word64 rax_82;
		byte al_83;
		byte SZO_84;
		byte C_85;
		byte Z_86;
		word64 r8_87;
		word64 r13_88;
		word128 xmm1_89;
		byte bl_90;
		configure_narrow_argv();
		if (eax_81 == 0x00)
		{
			fn0000000140001928();
			if (fn0000000140001958() != 0x00)
				__setusermatherr(&globals->t40001ABC);
			fn0000000140001DD0();
			fn0000000140001DD0();
			word32 eax_98 = fn0000000140001ABC();
			word64 rsp_100;
			word64 rbx_101;
			byte SCZO_102;
			word32 ecx_103;
			word64 rcx_104;
			word32 eax_105;
			word64 rax_106;
			byte al_107;
			byte SZO_108;
			byte C_109;
			byte Z_110;
			word64 r8_111;
			word64 r13_112;
			word128 xmm1_113;
			byte bl_114;
			configthreadlocale();
			fn0000000140001938();
			if (0x01 != 0x00)
			{
				word64 rsp_135;
				word64 rbx_136;
				byte SCZO_137;
				word32 ecx_138;
				word64 rcx_139;
				word32 eax_140;
				word64 rax_141;
				byte al_142;
				byte SZO_143;
				byte C_144;
				byte Z_145;
				word64 r8_146;
				word64 r13_147;
				word128 xmm1_148;
				byte bl_149;
				initialize_narrow_environment();
			}
			fn0000000140001ABC();
			return;
		}
	}
	else
	{
		byte bl_153;
		fn0000000140001974(0x07, rbx, qwArg00, qwArg08, out bl_153);
		int3();
	}
	byte bl_71;
	fn0000000140001974(0x07, rbx, qwArg00, qwArg08, out bl_71);
	int3();
	int3();
	fn0000000140001290();
}

// 0000000140001290: void fn0000000140001290()
void fn0000000140001290()
{
	fn000000014000193C();
}

// 00000001400012A0: void fn00000001400012A0()
void fn00000001400012A0()
{
	fn0000000140001B14();
	word32 eax_4 = fn0000000140001ABC();
	word64 rsp_9;
	byte SCZO_10;
	word32 ecx_11;
	word32 eax_12;
	word64 rcx_13;
	set_new_mode();
}

// 00000001400012BC: Register word32 fn00000001400012BC(Register word32 edx, Register ptr64 r13, Register (ptr Eq_339) gs, Stack word64 qwArg08, Stack word64 qwArg10)
word32 fn00000001400012BC(word32 edx, ptr64 r13, Eq_339 * gs, word64 qwArg08, word64 qwArg10)
{
	if (fn0000000140001600(0x01, edx, r13) == 0x00)
	{
		byte bl_345;
		fn0000000140001974(0x07, qwLoc40, qwLoc38, qwLoc30, out bl_345);
		int3();
	}
	byte bl_26 = fn00000001400015C4(gs);
	word32 ecx_32 = (word32) (uint64) globals->dw400035B0;
	if (ecx_32 == 0x01)
		ecx_32 = (word32) fn0000000140001974(0x07, qwLoc40, qwLoc38, qwLoc30, out bl_26);
	word32 eax_222;
	if (ecx_32 == 0x00)
	{
		globals->dw400035B0 = 0x01;
		if (_initterm_e(&globals->t400021B8, &globals->t400021D0) != 0x00)
		{
			eax_222 = 0xFF;
			return eax_222;
		}
		_initterm(&globals->t400021A0, &globals->t400021B0);
		globals->dw400035B0 = 0x02;
	}
	fn00000001400017B4(bl_26);
	<anonymous> ** rax_77 = fn0000000140001964();
	if (*rax_77 != null)
	{
		word64 rax_280 = fn0000000140001718(rax_77);
		byte al_281 = (byte) rax_280;
		if (al_281 != 0x00)
		{
			<anonymous> * rbx_286 = *rax_77;
			fn0000000140001BF4();
			word64 rsp_293;
			word64 rbx_294;
			word64 rsi_295;
			word64 rdi_296;
			byte SCZO_297;
			word64 rcx_298;
			byte al_299;
			byte SZO_300;
			byte C_301;
			byte Z_302;
			byte sil_303;
			byte bl_304;
			word32 ecx_305;
			word64 rdx_306;
			word32 eax_307;
			word64 rax_308;
			byte cl_309;
			word32 r8d_310;
			word64 r8_311;
			word32 edx_312;
			word32 ebx_313;
			word64 r13_314;
			struct Eq_461 * gs_315;
			byte dl_316;
			rbx_286();
		}
	}
	<anonymous> ** rax_104 = fn000000014000196C();
	if (*rax_104 != null)
	{
		word64 rax_248 = fn0000000140001718(rax_104);
		byte al_249 = (byte) rax_248;
		if (al_249 != 0x00)
		{
			word64 rsp_255;
			word64 rbx_256;
			word64 rsi_257;
			word64 rdi_258;
			byte SCZO_259;
			word64 rcx_260;
			byte al_261;
			byte SZO_262;
			byte C_263;
			byte Z_264;
			byte sil_265;
			byte bl_266;
			word32 ecx_267;
			word64 rdx_268;
			word32 eax_269;
			word64 rax_270;
			byte cl_271;
			word32 r8d_272;
			word64 r8_273;
			word32 edx_274;
			word32 ebx_275;
			word64 r13_276;
			struct Eq_501 * gs_277;
			byte dl_278;
			register_thread_local_exe_atexit_callback();
		}
	}
	word64 rsp_112;
	word64 rbx_113;
	word64 rsi_114;
	word64 rdi_115;
	byte SCZO_116;
	word64 rcx_117;
	byte al_118;
	byte SZO_119;
	byte C_120;
	byte Z_121;
	byte sil_122;
	byte bl_123;
	word32 ecx_124;
	word64 rdx_125;
	word32 eax_126;
	word64 rax_127;
	byte cl_128;
	word32 r8d_129;
	word64 r8_130;
	word32 edx_131;
	word32 ebx_132;
	word64 r13_133;
	struct Eq_527 * gs_134;
	byte dl_135;
	_p___argv();
	word64 rsp_137;
	word64 rbx_138;
	word64 rsi_139;
	word64 rdi_140;
	byte SCZO_141;
	word64 rcx_142;
	byte al_143;
	byte SZO_144;
	byte C_145;
	byte Z_146;
	byte sil_147;
	byte bl_148;
	word32 ecx_149;
	word64 rdx_150;
	word32 eax_151;
	word64 rax_152;
	byte cl_153;
	word32 r8d_154;
	word64 r8_155;
	word32 edx_156;
	word32 ebx_157;
	word64 r13_158;
	struct Eq_553 * gs_159;
	byte dl_160;
	_p___argc();
	word64 rsp_162;
	word64 rbx_163;
	word64 rsi_164;
	word64 rdi_165;
	byte SCZO_166;
	word64 rcx_167;
	byte al_168;
	byte SZO_169;
	byte C_170;
	byte Z_171;
	byte sil_172;
	byte bl_173;
	word32 ecx_174;
	word64 rdx_175;
	word32 eax_176;
	word64 rax_177;
	byte cl_178;
	word32 r8d_179;
	word64 r8_180;
	word32 edx_181;
	word32 ebx_182;
	word64 r13_183;
	struct Eq_579 * gs_184;
	byte dl_185;
	get_initial_narrow_environment();
	word64 rax_189 = fn0000000140001000();
	byte al_191 = fn0000000140001AC0(rax_189);
	if (al_191 != 0x00)
	{
		if (sil_172 == 0x00)
		{
			word64 rsp_223;
			word64 rbx_224;
			word64 rsi_225;
			word64 rdi_226;
			byte SCZO_227;
			word64 rcx_228;
			byte al_229;
			byte SZO_230;
			byte C_231;
			byte Z_232;
			byte sil_233;
			byte bl_234;
			word32 ecx_235;
			word64 rdx_236;
			word32 eax_237;
			word64 rax_238;
			byte cl_239;
			word32 r8d_240;
			word64 r8_241;
			word32 edx_242;
			word32 ebx_243;
			word64 r13_244;
			struct Eq_623 * gs_245;
			byte dl_246;
			cexit();
		}
		eax_222 = (word32) (uint64) fn00000001400017D8(0x00);
		return eax_222;
	}
	else
		exit(0x08);
}

// 0000000140001434: Register Eq_634 Win32CrtStartup()
DWORD Win32CrtStartup()
{
	fn000000014000186C(qwLoc28, qwLoc20, qwLoc18, qwLoc10);
	return fn00000001400012BC(edx, r13, gs, qwArg08, qwArg10);
}

// 0000000140001448: void fn0000000140001448()
void fn0000000140001448()
{
	word64 rsp_12;
	word64 rbx_13;
	byte SCZO_14;
	word64 rcx_15;
	word32 ecx_16;
	byte SZO_17;
	byte C_18;
	word64 rax_19;
	word32 edx_20;
	word64 rdx_21;
	fn0000000000002CEE();
	word64 rsp_23;
	word64 rbx_24;
	byte SCZO_25;
	word64 rcx_26;
	word32 ecx_27;
	byte SZO_28;
	byte C_29;
	word64 rax_30;
	word32 edx_31;
	word64 rdx_32;
	fn0000000000002CD2();
	word64 rsp_33;
	word64 rbx_34;
	byte SCZO_35;
	word64 rcx_36;
	word32 ecx_37;
	byte SZO_38;
	byte C_39;
	word64 rax_40;
	word32 edx_41;
	word64 rdx_42;
	fn0000000000002D0C();
	word64 rsp_50;
	word64 rbx_51;
	byte SCZO_52;
	word64 rcx_53;
	word32 ecx_54;
	byte SZO_55;
	byte C_56;
	word64 rax_57;
	word32 edx_58;
	word64 rdx_59;
	globals->ptr40002058();
}

// 000000014000147C: Register word64 fn000000014000147C(Register ui64 rcx, Stack word64 qwArg00, Stack word64 qwArg08)
word64 fn000000014000147C(ui64 rcx, word64 qwArg00, word64 qwArg08)
{
	Eq_705 eax_7 = IsProcessorFeaturePresent(tLoc38);
	word64 rax_9 = DPB(rax, eax_7, 0);
	if (eax_7 == 0x00)
	{
		fn0000000140001550(rax_9, 0x1400030E0, qwLoc38);
		globals->qw400031D8 = qwArg00;
		globals->ptr40003178 = fp + 0x08;
		globals->qw40003050 = globals->qw400031D8;
		globals->qw40003160 = rcx;
		globals->dw40003040 = 0xC0000409;
		globals->dw40003044 = 0x01;
		globals->dw40003058 = 0x01;
		globals->qw40003060 = 0x02;
		fn0000000140001448();
		return 0x08;
	}
	else
		__fastfail(0x02);
}

// 0000000140001550: void fn0000000140001550(Register word64 rax, Register ptr64 rcx, Stack word64 qwArg08)
void fn0000000140001550(word64 rax, ptr64 rcx, word64 qwArg08)
{
	word64 rsp_15;
	word64 rbx_16;
	word64 rsi_17;
	word64 rdi_18;
	byte SCZO_19;
	word64 rcx_20;
	word32 edi_21;
	byte SZO_22;
	byte C_23;
	word32 r8d_24;
	word64 r8_25;
	word64 rdx_26;
	word64 rax_27;
	byte Z_28;
	word64 r9_29;
	word32 ecx_30;
	byte SO_31;
	fn0000000000002C90();
	do
	{
		word64 rsp_53;
		word64 rbx_54;
		word64 rsi_55;
		word64 rdi_56;
		byte SCZO_57;
		word64 rcx_58;
		word32 edi_59;
		byte SZO_60;
		byte C_61;
		word32 r8d_62;
		word64 r8_63;
		word64 rdx_64;
		word64 rax_65;
		byte Z_66;
		word64 r9_67;
		word32 ecx_68;
		byte SO_69;
		fn0000000000002CA4();
		if (rax_65 == 0x00)
			return;
		word64 rsp_113;
		word64 rbx_114;
		word64 rsi_115;
		word64 rdi_116;
		byte SCZO_117;
		word64 rcx_118;
		word32 edi_119;
		byte SZO_120;
		byte C_121;
		word32 r8d_122;
		word64 r8_123;
		word64 rdx_124;
		word64 rax_125;
		byte Z_126;
		word64 r9_127;
		word32 ecx_128;
		byte SO_129;
		fn0000000000002CBE();
	} while ((word32) (uint64) (edi_119 + 0x01) < 0x02);
}

// 00000001400015C4: Register byte fn00000001400015C4(Register (ptr Eq_339) gs)
byte fn00000001400015C4(Eq_339 * gs)
{
	byte al_12;
	if (fn0000000140001DC4() != 0x00)
	{
		word64 rcx_32 = gs->ptr0030->qw0008;
		do
		{
			__lock();
			word64 rax_39;
			if (!__cmpxchg(globals->qw400035B8, rcx_32, 0x00, out rax_39))
				goto l00000001400015F2;
		} while (rcx_32 != rax_39);
		al_12 = 0x01;
	}
	else
	{
l00000001400015F2:
		al_12 = 0x00;
	}
	return al_12;
}

// 0000000140001600: Register byte fn0000000140001600(Register word32 ecx, Register word32 edx, Register ptr64 r13)
byte fn0000000140001600(word32 ecx, word32 edx, ptr64 r13)
{
	byte al_16 = (byte) (word32) globals->b400035F0;
	if (ecx == 0x00)
		al_16 = 0x01;
	byte al_33;
	globals->b400035F0 = al_16;
	byte bl_24 = fn0000000140001BFC(edx, 0x01, r13, qwLoc28, qwLoc20, qwLoc18);
	fn0000000140001938();
	if (true)
	{
		fn0000000140001938();
		if (true)
		{
			al_33 = bl_24;
			return al_33;
		}
		fn0000000140001938();
	}
	al_33 = 0x00;
	return al_33;
}

// 000000014000164C: Register word32 fn000000014000164C(Register up32 ecx, Register ui64 r8, Register ptr64 r13, Register word128 xmm1, Stack word64 qwArg08)
word32 fn000000014000164C(up32 ecx, ui64 r8, ptr64 r13, word128 xmm1, word64 qwArg08)
{
	uint64 rbx_10 = (uint64) ecx;
	word32 ebx_11 = (word32) rbx_10;
	if (ecx > 0x01)
	{
		byte bl_179;
		<anonymous> ** rcx_180 = fn0000000140001974(0x05, qwLoc50, qwLoc48, qwLoc40, out bl_179);
		int3();
		int3();
		int3();
		int3();
		return (word32) fn0000000140001718(rcx_180);
	}
	else
	{
		word32 eax_141;
		word32 eax_37 = fn0000000140001DC4();
		if (eax_37 != 0x00 && ebx_11 == 0x00)
		{
			word64 rsp_115;
			word64 rbx_116;
			word64 rbp_117;
			byte SCZO_118;
			word32 ebx_119;
			word32 ecx_120;
			byte CZ_121;
			word32 eax_122;
			byte SZO_123;
			byte C_124;
			byte Z_125;
			word64 rcx_126;
			byte al_127;
			word64 rdx_128;
			word64 r8_129;
			word32 edx_130;
			word64 rax_131;
			byte cl_132;
			word64 r13_133;
			word128 xmm0_134;
			word128 xmm1_135;
			byte bl_136;
			initialize_onexit_table();
			if (eax_122 != 0x00)
				eax_141 = DPB(eax_122, 0x00, 0);
			else
			{
				word64 rsp_146;
				word64 rbx_147;
				word64 rbp_148;
				byte SCZO_149;
				word32 ebx_150;
				word32 ecx_151;
				byte CZ_152;
				word32 eax_153;
				byte SZO_154;
				byte C_155;
				byte Z_156;
				word64 rcx_157;
				byte al_158;
				word64 rdx_159;
				word64 r8_160;
				word32 edx_161;
				word64 rax_162;
				byte cl_163;
				word64 r13_164;
				word128 xmm0_165;
				word128 xmm1_166;
				byte bl_167;
				initialize_onexit_table();
				eax_141 = DPB(eax_153, eax_153 == 0x00, 0);
			}
		}
		else
		{
			word64 rdx_69 = globals->qw40003000;
			word32 eax_78 = (word32) (uint64) ((word32) (uint64) (word32) rdx_69 & 0x3F);
			ui64 r8_86 = __ror(r8 | ~0x00, (byte) (uint64) (0x40 - eax_78)) ^ rdx_69;
			*(r13 - 0x20) = r8_86;
			*(r13 - 0x18) = r8_86;
			*(r13 - 0x10) = r8_86;
			globals->ow400035C0 = owLoc28;
			*(r13 - 0x20) = r8_86;
			*(r13 - 0x18) = r8_86;
			*(r13 - 0x10) = r8_86;
			globals->r400035D0 = rLoc18;
			globals->ow400035D8 = owLoc28;
			globals->r400035E8 = rLoc18;
			eax_141 = DPB(eax_78, 0x01, 0);
		}
		return eax_141;
	}
}

// 0000000140001718: Register (ptr Eq_1075) fn0000000140001718(Register (ptr (ptr code)) rcx)
Eq_1075 * fn0000000140001718(code * * rcx)
{
	struct Eq_1075 * rax_101;
	word32 * rax_33 = (word32 *) 23117;
	if (globals->w40000000 == 23117)
	{
		rax_33 = (int64) globals->dw4000003C;
		word64 rcx_51 = rax_33 + 0x0000000140000000;
		if (rcx_51->dw0000 == 0x4550)
		{
			rax_33 = (word32 *) 0x020B;
			if (rcx_51->w0018 == 0x020B)
			{
				struct Eq_1106 * rax_61 = DPB(0x020B, (word32) rcx_51->w0014, 0);
				word64 rdx_116 = rcx_51 + 0x18 + rax_61;
				struct Eq_1117 * rax_114 = DPB(rax_61, (word32) rcx_51->w0006, 0);
				struct Eq_1117 * r8_59 = rcx - 0x140000000;
				word64 r9_69 = rdx_116 + rax_114 * 0x28;
				while (rdx_116 != r9_69)
				{
					struct Eq_1117 * rcx_109 = (uint64) rdx_116->dw000C;
					word32 ecx_110 = (word32) rcx_109;
					if (r8_59 >= rcx_109)
					{
						rax_114 = (uint64) ((word32) (uint64) rdx_116->dw0008 + ecx_110);
						if (r8_59 < rax_114)
							goto l000000014000178F;
					}
					rdx_116 = rdx_116 + 0x28;
				}
				rdx_116 = null;
l000000014000178F:
				if (rdx_116 == null)
					rax_101 = (struct Eq_1075 *) DPB(rax_114, 0x00, 0);
				else if (rdx_116->dw0024 < 0x00)
					rax_101 = (struct Eq_1075 *) DPB(rax_114, 0x00, 0);
				else
					rax_101 = (struct Eq_1075 *) DPB(rax_114, 0x01, 0);
				return rax_101;
			}
		}
	}
	rax_101 = (struct Eq_1075 *) DPB(rax_33, 0x00, 0);
	return rax_101;
}

// 00000001400017B4: void fn00000001400017B4(Register byte cl)
void fn00000001400017B4(byte cl)
{
	if (fn0000000140001DC4() != 0x00 && cl == 0x00)
		globals->qw400035B8 = 0x00;
}

// 00000001400017D8: Register word32 fn00000001400017D8(Register byte dl)
word32 fn00000001400017D8(byte dl)
{
	if (globals->b400035F0 == 0x00 || dl == 0x00)
	{
		fn0000000140001938();
		fn0000000140001938();
	}
	return (word32) rbx;
}

// 0000000140001804: Register word64 fn0000000140001804(Register word32 eax)
word64 fn0000000140001804(word32 eax)
{
	uint64 rbx_25;
	word32 eax_23;
	word64 rdx_7 = globals->qw40003000;
	word32 edx_8 = (word32) rdx_7;
	ui32 ecx_12 = (word32) (uint64) edx_8;
	byte cl_15 = (byte) (uint64) (ecx_12 & 0x3F);
	ui64 rdx_17 = __ror(rdx_7 ^ globals->ow400035C0, cl_15);
	if (rdx_17 == ~0x00)
	{
		word64 rsp_50;
		byte SCZO_52;
		word64 rdx_53;
		word64 rcx_54;
		word32 ecx_55;
		word32 edx_56;
		byte SZO_57;
		byte C_58;
		byte cl_59;
		byte Z_60;
		word64 rax_62;
		crt_atexit();
	}
	else
	{
		word64 rsp_65;
		byte SCZO_67;
		word64 rdx_68;
		word64 rcx_69;
		word32 ecx_70;
		word32 edx_71;
		byte SZO_72;
		byte C_73;
		byte cl_74;
		byte Z_75;
		word64 rax_77;
		register_onexit_function();
	}
	uint64 rcx_27 = 0x00;
	if (eax_23 == 0x00)
		rcx_27 = rbx_25;
	return rcx_27;
}

// 0000000140001854: void fn0000000140001854(Register word32 eax)
void fn0000000140001854(word32 eax)
{
	fn0000000140001804(eax);
}

// 000000014000186C: void fn000000014000186C(Stack word64 qwArg08, Stack ui64 qwArg10, Stack word64 qwArg18, Stack word64 qwArg20)
void fn000000014000186C(word64 qwArg08, ui64 qwArg10, word64 qwArg18, word64 qwArg20)
{
	ui64 rax_101 = globals->qw40003000;
	if (rax_101 == 769630770)
	{
		word64 rsp_37;
		word64 rbx_38;
		word64 rbp_39;
		byte SCZO_40;
		byte SZO_41;
		byte C_42;
		word64 rax_43;
		byte Z_44;
		word64 rcx_45;
		word32 eax_46;
		fn0000000000002D96();
		word64 rsp_50;
		word64 rbx_51;
		word64 rbp_52;
		byte SCZO_53;
		byte SZO_54;
		byte C_55;
		word64 rax_56;
		byte Z_57;
		word64 rcx_58;
		word32 eax_59;
		fn0000000000002D80();
		uint64 rax_60 = (uint64) eax_59;
		word64 rsp_66;
		word64 rbx_67;
		word64 rbp_68;
		byte SCZO_69;
		byte SZO_70;
		byte C_71;
		word64 rax_72;
		byte Z_73;
		word64 rcx_74;
		word32 eax_75;
		fn0000000000002D6A();
		uint64 rax_76 = (uint64) eax_75;
		word64 rsp_82;
		word64 rbx_83;
		word64 rbp_84;
		byte SCZO_85;
		byte SZO_86;
		byte C_87;
		word64 rax_88;
		byte Z_89;
		word64 rcx_90;
		word32 eax_91;
		fn0000000000002D50();
		ui64 rax_99 = (uint64) dwArg18 << 0x20 ^ qwArg18 ^ ((qwArg10 & 0x00 ^ rax_60) ^ rax_76) ^ fp + 0x08;
		rax_101 = rax_99 & 0xFFFFFFFF;
		if ((rax_99 & 0xFFFFFFFF) == 769630770)
			rax_101 = 769630771;
		globals->qw40003000 = rax_101;
	}
	globals->qw40003008 = ~rax_101;
}

// 0000000140001918: Register word32 fn0000000140001918()
word32 fn0000000140001918()
{
	return 0x01;
}

// 0000000140001920: Register word32 fn0000000140001920()
word32 fn0000000140001920()
{
	return 0x4000;
}

// 0000000140001928: void fn0000000140001928()
void fn0000000140001928()
{
	word64 rsp_4;
	word64 rcx_5;
	globals->ptr40002028();
}

// 0000000140001938: void fn0000000140001938()
void fn0000000140001938()
{
}

// 000000014000193C: void fn000000014000193C()
void fn000000014000193C()
{
	ui64 * rax_4 = fn0000000140001130();
	*rax_4 = *rax_4 | 0x04;
	ui64 * rax_10 = fn00000001400010C0();
	*rax_10 = *rax_10 | 0x02;
}

// 0000000140001958: Register word32 fn0000000140001958()
word32 fn0000000140001958()
{
	return (word32) (globals->dw40003014 == 0x00);
}

// 0000000140001964: Register ptr64 fn0000000140001964()
ptr64 fn0000000140001964()
{
	return 0x140003638;
}

// 000000014000196C: Register ptr64 fn000000014000196C()
ptr64 fn000000014000196C()
{
	return 0x140003630;
}

// 0000000140001974: Register word64 fn0000000140001974(Register word32 ecx, Stack word64 qwArg00, Stack word64 qwArg08, Stack word64 qwArg10, Register out Eq_204 blOut)
word64 fn0000000140001974(word32 ecx, word64 qwArg00, word64 qwArg08, word64 qwArg10, Eq_204 & blOut)
{
	uint64 rbx_10 = (uint64) ecx;
	word32 ebx_11 = (word32) rbx_10;
	if (IsProcessorFeaturePresent(tLoc05C8) == 0x00)
	{
		globals->dw40003610 = globals->dw40003610 & 0x00;
		Eq_1404 eax_33 = memset(ptrLoc05C8, dwLoc05C0, tLoc05B8);
		word64 rsp_37;
		word64 rbx_38;
		word64 rbp_39;
		byte SCZO_40;
		word32 ebx_41;
		word32 ecx_42;
		word64 rcx_43;
		word32 eax_44;
		byte SZO_45;
		byte C_46;
		byte Z_47;
		word32 edx_48;
		word64 rdx_49;
		word32 r8d_50;
		word64 r8_51;
		word64 rax_52;
		word64 r9_53;
		byte bl_54;
		fn0000000000002C90();
		word64 rsp_63;
		word64 rbx_64;
		word64 rbp_65;
		byte SCZO_66;
		word32 ebx_67;
		word32 ecx_68;
		word64 rcx_69;
		word32 eax_70;
		byte SZO_71;
		byte C_72;
		byte Z_73;
		word32 edx_74;
		word64 rdx_75;
		word32 r8d_76;
		word64 r8_77;
		word64 rax_78;
		word64 r9_79;
		byte bl_80;
		fn0000000000002CA4();
		if (rax_78 != 0x00)
		{
			word64 rsp_224;
			word64 rbx_225;
			word64 rbp_226;
			byte SCZO_227;
			word32 ebx_228;
			word32 ecx_229;
			word64 rcx_230;
			word32 eax_231;
			byte SZO_232;
			byte C_233;
			byte Z_234;
			word32 edx_235;
			word64 rdx_236;
			word32 r8d_237;
			word64 r8_238;
			word64 rax_239;
			word64 r9_240;
			byte bl_241;
			fn0000000000002CBE();
		}
		memset(ptrLoc05C8, dwLoc05C0, tLoc05B8);
		word64 rsp_108;
		word64 rbx_109;
		word64 rbp_110;
		byte SCZO_111;
		word32 ebx_112;
		word32 ecx_113;
		word64 rcx_114;
		word32 eax_115;
		byte SZO_116;
		byte C_117;
		byte Z_118;
		word32 edx_119;
		word64 rdx_120;
		word32 r8d_121;
		word64 r8_122;
		word64 rax_123;
		word64 r9_124;
		byte bl_125;
		fn0000000000002DC6();
		word64 rsp_140;
		word64 rbx_141;
		word64 rbp_142;
		byte SCZO_143;
		word32 ebx_144;
		word32 ecx_145;
		word64 rcx_146;
		word32 eax_147;
		byte SZO_148;
		byte C_149;
		byte Z_150;
		word32 edx_151;
		word64 rdx_152;
		word32 r8d_153;
		word64 r8_154;
		word64 rax_155;
		word64 r9_156;
		byte bl_157;
		fn0000000000002CEE();
		word64 rsp_160;
		word64 rbx_161;
		word64 rbp_162;
		byte SCZO_163;
		word32 ebx_164;
		word32 ecx_165;
		word64 rcx_166;
		word32 eax_167;
		byte SZO_168;
		byte C_169;
		byte Z_170;
		word32 edx_171;
		word64 rdx_172;
		word32 r8d_173;
		word64 r8_174;
		word64 rax_175;
		word64 r9_176;
		byte bl_177;
		fn0000000000002CD2();
		if (eax_167 == 0x00)
			globals->dw40003610 = globals->dw40003610 & (word32) ((uint64) (0x00 - (-bl_177 == 0x00)));
		byte bl_187;
		*blOut = (byte) rbx;
		return rcx_166;
	}
	else
		__fastfail((word32) (uint64) ebx_11);
}

// 0000000140001ABC: Register word32 fn0000000140001ABC()
word32 fn0000000140001ABC()
{
	return 0x00;
}

// 0000000140001AC0: Register byte fn0000000140001AC0(Register word64 rax)
byte fn0000000140001AC0(word64 rax)
{
	bool al_30;
	word64 rsp_7;
	byte SCZO_8;
	word32 ecx_9;
	word64 rcx_10;
	byte SZO_11;
	byte C_12;
	struct Eq_1574 * rax_13;
	byte Z_14;
	byte al_15;
	word32 eax_16;
	word16 ax_17;
	word16 cx_18;
	byte CZ_19;
	fn0000000000002DDA();
	if (rax_13 != null && rax_13->w0000 == 23117)
	{
		struct Eq_1591 * rax_58 = rax_13 + (int64) rax_13->dw003C / 0x0040;
		if (rax_58->dw0000 == 0x4550 && (rax_58->w0018 == 0x020B && rax_58->dw0084 > 0x0E))
		{
			al_30 = rax_58->dw00F8 != 0x00;
			return al_30;
		}
	}
	al_30 = 0x00;
	return al_30;
}

// 0000000140001B14: void fn0000000140001B14()
void fn0000000140001B14()
{
	word64 rsp_4;
	word64 rcx_5;
	globals->ptr40002068();
}

// 0000000140001B24: void fn0000000140001B24(Register (ptr (ptr Eq_1624)) rcx)
void fn0000000140001B24(Eq_1624 * * rcx)
{
	struct Eq_1624 * rax_5 = *rcx;
	if (rax_5->dw0000 != ~0x1F928C9C || rax_5->dw0018 != 0x04)
		return;
	uint64 rcx_33 = (uint64) rax_5->dw0020;
	word32 ecx_34 = (word32) rcx_33;
	if (rcx_33 > ~0x19930521 && ecx_34 != 0x01994000)
		return;
	word64 rsp_38;
	byte SCZO_39;
	word64 rax_40;
	word64 rcx_41;
	byte Z_42;
	word32 ecx_43;
	word32 eax_44;
	byte CZ_45;
	byte SZO_46;
	byte C_47;
	api-ms-win-crt-runtime-l1-1-0.dll!terminate();
	int3();
	fn0000000140001B5C(qwLoc28, qwLoc20);
}

// 0000000140001B5C: void fn0000000140001B5C(Stack word64 qwArg08, Stack word64 qwArg10)
void fn0000000140001B5C(word64 qwArg08, word64 qwArg10)
{
	word64 * rbx_11 = &globals->qw40002680;
	word64 * rsi_12 = &globals->qw40002680;
	while (rbx_11 < rsi_12)
	{
		<anonymous> * rdi_32 = *rbx_11;
		if (rdi_32 != null)
		{
			fn0000000140001BF4();
			word64 rsp_47;
			word64 rdi_50;
			byte SCZO_51;
			byte C_52;
			byte SZO_53;
			byte Z_54;
			word64 rcx_55;
			rdi_32();
		}
		rbx_11 = rbx_11 + 0x01;
	}
}

// 0000000140001BA8: void fn0000000140001BA8(Stack word64 qwArg08, Stack word64 qwArg10)
void fn0000000140001BA8(word64 qwArg08, word64 qwArg10)
{
	word64 * rbx_11 = &globals->qw40002690;
	word64 * rsi_12 = &globals->qw40002690;
	while (rbx_11 < rsi_12)
	{
		<anonymous> * rdi_32 = *rbx_11;
		if (rdi_32 != null)
		{
			fn0000000140001BF4();
			word64 rsp_47;
			word64 rdi_50;
			byte SCZO_51;
			byte C_52;
			byte SZO_53;
			byte Z_54;
			word64 rcx_55;
			rdi_32();
		}
		rbx_11 = rbx_11 + 0x01;
	}
}

// 0000000140001BF4: void fn0000000140001BF4()
void fn0000000140001BF4()
{
	word64 rsp_3;
	globals->ptr40002190();
}

// 0000000140001BFC: Register byte fn0000000140001BFC(Register word32 edx, Register word32 ebx, Register ptr64 r13, Stack word64 qwArg08, Stack word64 qwArg10, Stack word64 qwArg18)
byte fn0000000140001BFC(word32 edx, word32 ebx, ptr64 r13, word64 qwArg08, word64 qwArg10, word64 qwArg18)
{
	globals->dw4000301C = 0x02;
	word32 eax_20;
	word32 ebx_21;
	word32 ecx_22;
	word32 edx_23;
	__cpuid(0x00, 0x00, &eax_20, &ebx_21, &ecx_22, &edx_23);
	globals->dw40003018 = 0x01;
	ui32 r8d_100 = (word32) (uint64) globals->dw40003614;
	ui32 eax_65;
	word32 ebx_66;
	word32 ecx_67;
	word32 edx_68;
	__cpuid(0x01, 0x00, &eax_65, &ebx_66, &ecx_67, &edx_68);
	word32 r9d_71 = (word32) (uint64) ecx_67;
	*(r13 - 0x08) = r9d_71;
	word32 r11d_52 = (word32) (uint64) ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) ebx_21 ^ 1752462657) | (word32) ((uint64) ((word32) ((uint64) edx_23) ^ 0x69746E65))) | (word32) ((uint64) (ecx_22 ^ 0x444D4163)));
	int32 edi_58 = (word32) (uint64) eax_20;
	ui32 ecx_75 = (word32) (uint64) eax_65;
	if ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) edx_23 ^ 0x49656E69) | (word32) ((uint64) ((word32) ((uint64) ecx_22) ^ 1818588270))) | (word32) ((uint64) ((word32) ((uint64) ebx_21) ^ 1970169159))) == 0x00)
	{
		globals->qw40003020 = globals->qw40003020 | ~0x00;
		r8d_100 = (word32) (uint64) (r8d_100 | 0x04);
		globals->dw40003614 = r8d_100;
		word32 eax_210 = (word32) (uint64) (eax_65 & 0x0FFF3FF0);
		if (eax_210 == 0x000106C0 || (eax_210 == 0x00020660 || eax_210 == 0x00020670))
		{
l0000000140001CDE:
			r8d_100 = (word32) (uint64) (r8d_100 | 0x01);
			globals->dw40003614 = r8d_100;
			goto l0000000140001CE9;
		}
		uint64 rax_235 = (uint64) (eax_210 + ~0x0003064F);
		if ((word32) rax_235 <= 0x20 && !__bt(0x00010001, rax_235))
			goto l0000000140001CDE;
	}
l0000000140001CE9:
	if (r11d_52 == 0x00 && (word32) ((uint64) (ecx_75 & 0x0FF00F00)) >= 0x00600F00)
	{
		r8d_100 = (word32) (uint64) (r8d_100 | 0x04);
		globals->dw40003614 = r8d_100;
	}
	*(r13 - 0x1C) = r9d_71;
	if (edi_58 >= 0x07)
	{
		word32 eax_180;
		word32 ebx_181;
		word32 ecx_182;
		word32 edx_183;
		__cpuid(0x07, 0x00, &eax_180, &ebx_181, &ecx_182, &edx_183);
		if (!__bt(ebx_181, 0x09))
			globals->dw40003614 = (word32) (uint64) (r8d_100 | 0x02);
	}
	if (!__bt(r9d_71, 0x14))
	{
		globals->dw40003018 = 0x02;
		globals->dw4000301C = 0x06;
		if (!__bt(r9d_71, 0x1B) && !__bt(r9d_71, 0x1C))
		{
			ui64 edx_eax_148 = __xgetbv(0x00);
			if (((byte) (edx_eax_148 << 0x20 | edx_eax_148) & 0x06) == 0x06)
			{
				ui32 eax_162 = (word32) (uint64) ((word32) (uint64) globals->dw4000301C | 0x08);
				globals->dw40003018 = 0x03;
				globals->dw4000301C = eax_162;
				if ((bLoc20 & 0x20) != 0x00)
				{
					globals->dw40003018 = 0x05;
					globals->dw4000301C = (word32) (uint64) (eax_162 | 0x20);
				}
			}
		}
	}
	return (byte) rbx;
}

// 0000000140001DC4: Register word32 fn0000000140001DC4()
word32 fn0000000140001DC4()
{
	return (word32) (globals->dw40003030 != 0x00);
}

// 0000000140001DD0: void fn0000000140001DD0()
void fn0000000140001DD0()
{
}

// 0000000140001E7C: void fn0000000140001E7C(Register (ptr Eq_2009) rax, Register int64 rdx, Register (ptr Eq_2011) r9)
void fn0000000140001E7C(Eq_2009 * rax, int64 rdx, Eq_2011 * r9)
{
	fn0000000140001E9C(rax, rdx, r9, r9->ptr0038);
}

// 0000000140001E9C: void fn0000000140001E9C(Register (ptr Eq_2009) rax, Register int64 rcx, Register (ptr Eq_2011) rdx, Register (ptr Eq_2017) r8)
void fn0000000140001E9C(Eq_2009 * rax, int64 rcx, Eq_2011 * rdx, Eq_2017 * r8)
{
	word32 r11d_12 = (word32) (uint64) ((word32) (uint64) r8->dw0000 & ~0x07);
	int64 r9_14 = rcx;
	int64 r10_19 = rcx;
	if ((rax->b0000 & 0x04) != 0x00)
		r10_19 = (int64) r8->dw0004 + rcx & (int64) ((word32) ((uint64) (-((word32) ((uint64) rax->dw0008)))));
	word64 rdx_24 = *((word64) (int64) r11d_12 + r10_19);
	struct Eq_2045 * rcx_27 = (uint64) rdx->ptr0010->dw0008 + rdx->qw0008;
	if ((rcx_27->b0003 & 0x0F) != 0x00)
		r9_14 = rcx + (uint64) ((word32) rcx_27->b0003 & ~0x0F);
	ui64 r9_37 = r9_14 ^ rdx_24;
	fn00000001400011B0(r9_37);
}

// 0000000140001F10: void fn0000000140001F10()
void fn0000000140001F10()
{
	word64 rsp_3;
	word64 rax_4;
	rax();
}

// 0000000140001F12: void fn0000000140001F12(Register word64 rcx)
void fn0000000140001F12(word64 rcx)
{
	word64 rsp_14;
	word64 rbp_15;
	byte SCZO_16;
	word64 rdx_17;
	word64 rax_18;
	word64 rcx_19;
	word32 ecx_20;
	seh_filter_exe();
}

// 0000000140001F30: void fn0000000140001F30(Register word64 rcx)
void fn0000000140001F30(word64 rcx)
{
}

