void __EntryFunction__()
{
	fLocal_1233 = 1f;
	fLocal_1234 = 1f;
	iVar0 = iVar1237;
	func_1(iVar0);
	func_2(&uScriptParam_0);
	while (!func_3())
	{
		func_4();
		wait(0);
	}
	func_5();
	func_6();
}

void func_1(int iParam0)
{
	func_7(32, iParam0);
	func_8();
	func_9();
	network_register_host_broadcast_variables(&Local_13, 46, 56);
	func_10(_0xba24095ea96dfe17(&Local_13), 46, "m_hostData");
	network_register_player_broadcast_variables(&Local_59, 705, 57);
	func_11(_0x690806bc83bc8ca2(Local_59[0]), 705, "m_clientData");
	func_12(0);
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
}

void func_2(var uParam0)
{
	if (Local_13 == 6)
	{
		return;
	}
	func_13(uParam0);
	if (network_is_host_of_this_script())
	{
		func_14();
		func_15();
	}
}

bool func_3()
{
	if (func_16(0, 0))
	{
		return true;
	}
	else if (func_17(Local_764.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_764.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_764.f_12), Local_764.f_9))
	{
		return true;
	}
	else if (Local_764.f_8 == 6)
	{
		return true;
	}
	return false;
}

void func_4()
{
	if (network_is_host_of_this_script())
	{
		func_22();
	}
	func_23();
}

void func_5()
{
	if (network_is_host_of_this_script())
	{
		func_24();
		func_25();
	}
	func_26();
	func_27();
}

void func_6()
{
	terminate_this_thread();
}

void func_7(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_6();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_8()
{
	iVar0 = network_get_script_status();
	iVar1 = get_game_timer();
	iVar2 = network_get_timeout_time();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (get_game_timer() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((get_game_timer() - iVar1) > 300000)
		{
			func_6();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_6();
		}
		if (!network_is_game_in_progress())
		{
			func_6();
		}
		if (!network_is_signed_online())
		{
			func_6();
		}
		if (func_28() == 0)
		{
			if (func_29())
			{
				func_6();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_6();
	}
	return 1;
}

void func_9()
{
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_12(bool bParam0)
{
	iVar0 = (_get_system_time() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			_0x236905c700fdb54d();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (!network_is_game_in_progress())
		{
			return;
		}
		if (network_is_host_of_this_script())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (_0x5d10b3795f3fc886())
		{
			return;
		}
		if (_get_system_time() >= iVar0)
		{
			func_6();
			return;
		}
		wait(0);
	}
}

void func_13(var uParam0)
{
	iVar0 = 255;
	_copy_memory(&Local_764, uParam0, 5);
	iVar2 = func_30(&bVar1, Local_764.f_1, Local_764.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_764.f_12 = iVar2;
	iVar0 = Global_1198046->f_231.f_1066[iVar2]->f_5;
	Var3.f_10 = 1106247680;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_31(&Var3, Local_764.f_1, Local_764.f_2, Local_764.f_3, iVar0);
	Local_764.f_9 = { func_32(Var3.f_5, 8) };
	Local_764.f_14 = Var3.f_5;
	Local_764.f_15 = { Var3.f_11 };
	Local_764.f_18 = Var3.f_7;
	func_33();
	func_34();
}

void func_14()
{
	func_35();
}

void func_15()
{
	func_36();
	func_37();
}

bool func_16(bool bParam0, bool bParam1)
{
	if (Global_1572887->f_12)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		if (bParam1 && _0xf2cbc969c4f090c7())
		{
		}
		else if (bParam1 && network_is_session_active())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (_0x9e4ef615e307fbbe())
	{
		switch (_0x54ae4fdeefeab77e())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		if (get_event_at_index(1, iVar0) == 1976253964)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_17(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_38(*Global_1051213) && !func_21(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_39(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_40(iParam3, 255))
	{
		Global_1071686->f_28351 = 4;
		return true;
	}
	if (Global_263042[&Global_1296859] > 2)
	{
		Global_1071686->f_28351 = 5;
		return true;
	}
	if (&Global_262155 >= 1)
	{
		Global_1071686->f_28351 = 6;
		return true;
	}
	if (func_41())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_38(*Global_1051213))
		{
			Global_1071686->f_28351 = 8;
			return true;
		}
	}
	if (Global_265377->f_124675 != 0 && _does_thread_exist(Global_265377->f_124675))
	{
		Global_1071686->f_28351 = 9;
		return true;
	}
	Global_1071686->f_28351 = 0;
	return false;
}

bool func_18()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_19(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

struct<2> func_20(int iParam0)
{
	return Global_1210161->f_1[iParam0]->f_4;
}

bool func_21(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_22()
{
	if (Local_13 <= 5)
	{
		func_42();
	}
	switch (Local_13)
	{
		case 0:
			func_43();
			break;
		case 1:
			func_44();
			break;
		case 2:
			func_45();
			break;
		case 3:
			func_46();
			break;
		case 4:
			func_47();
			break;
		case 5:
			func_48();
			break;
	}
}

void func_23()
{
	func_49();
	func_50();
	if (Local_764.f_8 <= 5)
	{
		func_51();
	}
	switch (Local_764.f_8)
	{
		case 0:
			func_52();
			break;
		case 1:
			func_53();
			break;
		case 2:
			func_54();
			break;
		case 3:
			func_55();
			break;
		case 4:
			func_56();
			break;
		case 5:
			func_57();
			break;
	}
}

void func_24()
{
	func_58();
}

void func_25()
{
	if (func_59())
	{
		if (_0xf6a8a652a6b186cd(Local_13.f_3.f_1))
		{
			_0xfdfecc6ee4491e11(Local_13.f_3.f_1);
		}
	}
	func_60();
}

void func_26()
{
	func_61();
	func_62();
	func_63();
	func_64();
}

void func_27()
{
	if (Local_764.f_12 != -1)
	{
		if (network_is_game_in_progress() && network_get_num_participants() <= 1)
		{
			func_65(Local_764.f_12, 4);
		}
	}
	func_66();
	if (func_67(64))
	{
		func_68(Local_13.f_6);
	}
	func_69();
}

int func_28()
{
	return Global_1572887->f_13;
}

bool func_29()
{
	return Global_1051252->f_8;
}

int func_30(var uParam0, int iParam1, int iParam2)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	Var10 = 2;
	Var10.f_1 = -1;
	Var10.f_5 = -1;
	Var10.f_5.f_1 = -1;
	Var10.f_5.f_3 = -1;
	Var10.f_5.f_4 = -1;
	Var10.f_5.f_5 = -1;
	Var10.f_5.f_6 = -1;
	Var10.f_5.f_6.f_1 = -1;
	Var10.f_5.f_9 = 2;
	Var26.f_10 = 1106247680;
	Var26.f_15 = 4;
	Var26.f_20 = 4;
	Var26.f_26 = -1;
	Var26.f_28 = 2;
	func_31(&Var26, iParam1, iParam2, -1, 255);
	func_70(&Var0, Var26.f_5);
	iVar25 = func_71(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_72(iVar25) };
		if (Var10 == 2)
		{
			return iVar25;
		}
		else
		{
			*uParam0 = 1;
			return -1;
		}
	}
	return -1;
}

void func_31(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	_copy_memory(uParam0, &Var0, 31);
	iVar31 = 0;
	while (iVar31 < 2)
	{
		uParam0->f_28[iVar31] = 0;
		iVar31++;
	}
	if (iParam4 == 255)
	{
		iParam4 = player_id();
	}
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			uParam0->f_1 = 0;
			uParam0->f_2 = 0;
			break;
		case 1:
			func_73(uParam0, iParam2);
			break;
		case 2:
			func_74(uParam0, iParam2);
			break;
		case 3:
			func_75(uParam0, iParam2);
			break;
		case 4:
			func_76(uParam0, iParam2);
			break;
		case 12:
			func_77(uParam0, iParam2);
			break;
		case 6:
			func_78(uParam0, iParam2, -1);
			break;
		case 7:
			func_79(uParam0, iParam2, iParam3);
			break;
		case 5:
			func_80(uParam0, iParam2);
			break;
		case 11:
			func_81(uParam0, iParam2);
			break;
		case 9:
			func_82(uParam0, iParam2, iParam3);
			break;
		case 10:
			func_83(uParam0, iParam2);
			break;
		case 8:
			func_84(uParam0, iParam2);
			break;
		case 13:
			func_85(uParam0, iParam2, iParam4);
			break;
		case 14:
			func_86(uParam0, iParam2, iParam3);
			break;
		case 15:
			func_87(uParam0, iParam2);
			break;
		case 16:
			func_88(uParam0, iParam2, iParam3);
			break;
		case 31:
			func_89(uParam0, iParam2);
			break;
		case 21:
			func_90(uParam0, iParam2);
			break;
		case 28:
			func_91(uParam0, iParam2);
			break;
		case 25:
			func_92(uParam0, iParam2);
			break;
		case 24:
			func_93(uParam0, iParam2);
			break;
		case 22:
			func_94(uParam0, iParam2);
			break;
		case 23:
			func_95(uParam0, iParam2);
			break;
		case 29:
			func_96(uParam0, iParam2);
			break;
		case 26:
			func_97(uParam0, iParam2);
			break;
		case 30:
			func_98(uParam0, iParam2);
			break;
		case 27:
			func_99(uParam0, iParam2);
			break;
		case 32:
			func_100(uParam0, iParam2, iParam3);
			break;
		case 33:
			func_101(uParam0, iParam2, iParam3);
			break;
		case 34:
			func_102(uParam0, iParam2);
			break;
		case 17:
			func_103(uParam0, iParam2);
			break;
		case 18:
			func_104(uParam0, iParam2);
			break;
		case 19:
			func_105(uParam0, iParam2);
			break;
		case 20:
			func_106(uParam0, iParam2);
			break;
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_107(uParam0, iParam1, iParam2);
			break;
		default:
			break;
	}
}

struct<2> func_32(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_109(iParam0, &(Global_1071686->f_636), func_108(iParam1));
			break;
		case 3:
			Var0.f_1 = func_109(iParam0, &(Global_1071686->f_636.f_602), func_108(iParam1));
			break;
		case 4:
			Var0.f_1 = func_109(iParam0, &(Global_1071686->f_636.f_2104), func_108(iParam1));
			break;
		case 5:
			Var0.f_1 = func_109(iParam0, &(Global_1071686->f_636.f_12606), func_108(iParam1));
			break;
		case 6:
			Var0.f_1 = func_109(iParam0, &(Global_1071686->f_636.f_12908), func_108(iParam1));
			break;
		case 7:
			Var0.f_1 = func_109(iParam0, &(Global_1071686->f_636.f_15910), func_108(iParam1));
			break;
		case 8:
			Var0.f_1 = func_109(iParam0, &(Global_1071686->f_636.f_16512), func_108(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_110();
	}
	return Var0;
}

void func_33()
{
	func_111();
	func_112();
	func_113();
}

void func_34()
{
	func_114();
	func_115();
	func_116();
	func_117(0);
	func_117(1);
	func_117(2);
	func_118();
	if (func_119() == 3)
	{
		if (func_120() == 15)
		{
			func_121(1, -1185186518, 0, -1082130432);
			func_122();
		}
		else if (func_120() == 16)
		{
			func_121(1, -1185186518, 1, -1082130432);
			func_122();
		}
		else if (func_120() == 17)
		{
			func_121(1, -1185186518, 1, -1082130432);
			func_122();
		}
		else if (func_120() == 18)
		{
			func_121(1, -1185186518, 0, -1082130432);
			func_122();
		}
		else if (func_120() == 19)
		{
			func_123(1, 20f, -1082130432);
			func_122();
		}
	}
}

void func_35()
{
}

void func_36()
{
}

void func_37()
{
}

bool func_38(struct<2> Param0)
{
	if (!func_124(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_108(Param0))
	{
		return false;
	}
	return true;
}

bool func_39(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_40(int iParam0, int iParam1)
{
	if (!Global_1071686->f_3)
	{
		return false;
	}
	if (!network_is_in_session())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	return (Global_1197355[iParam1] && iParam0) != 0;
}

bool func_41()
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_2883584)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (!func_38(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_42()
{
}

void func_43()
{
	iVar0 = Global_1198046->f_231.f_1066[Local_764.f_12]->f_5;
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_31(&Var1, Local_764.f_1, Local_764.f_2, Local_764.f_3, iVar0);
	if (!func_125(&Var1, 1))
	{
		func_126(1);
		return;
	}
	Local_13.f_6 = func_127(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar0)));
	func_128(256);
	if (func_129(Local_13.f_6))
	{
		func_130(5);
		func_126(6);
	}
	else
	{
		func_126(1);
	}
}

void func_44()
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_31(&Var0, Local_764.f_1, Local_764.f_2, -1, 255);
	if (func_125(&Var0, 1))
	{
		func_126(2);
		return;
	}
	if (func_131(Var0, &bVar31))
	{
		clear_area(Local_764.f_15, Var0.f_10, 2442122);
		func_126(2);
	}
	else if (bVar31)
	{
		func_130(3);
		func_126(6);
	}
	if (!func_132(Local_13.f_3.f_2))
	{
		func_133(&(Local_13.f_3.f_2));
	}
	else if (func_134(Local_13.f_3.f_2) > 45000)
	{
		func_130(4);
		func_126(6);
	}
}

void func_45()
{
	if (func_135(1, 255))
	{
		if (!func_136(1))
		{
			if (func_137())
			{
				func_128(1);
			}
		}
		else
		{
			func_138();
			func_126(3);
		}
	}
}

void func_46()
{
	if (func_135(2, 255))
	{
		if (!func_136(2))
		{
			bVar0 = true;
			if (!func_139())
			{
				bVar0 = false;
			}
			if (!func_140())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_128(2);
			}
		}
		else
		{
			func_141();
			func_126(4);
		}
	}
}

void func_47()
{
	func_142();
	func_143();
	func_144();
	if (func_145() || Local_13.f_2 != 0)
	{
		func_146();
		func_126(5);
	}
}

void func_48()
{
	if (func_135(4, 255))
	{
		if (func_147())
		{
			func_128(4);
			func_126(6);
		}
	}
}

void func_49()
{
	if (!func_136(256))
	{
		return;
	}
	if (func_136(512))
	{
		if (func_67(64) && func_127(player_id()) == Local_13.f_6)
		{
			func_68(Local_13.f_6);
			func_148(64);
		}
	}
	else if (!func_67(64))
	{
		if (func_127(player_id()) == Local_13.f_6)
		{
			func_149(Local_13.f_6, 1, 1);
			func_150(64);
		}
	}
	else if (func_127(player_id()) != Local_13.f_6)
	{
		func_68(Local_13.f_6);
		func_148(64);
	}
}

void func_50()
{
	if (!Global_13)
	{
		if (func_135(8192, 255))
		{
			func_151(8192);
		}
	}
	else if (!func_135(8192, 255))
	{
		func_152(8192);
	}
}

void func_51()
{
	func_153();
}

void func_52()
{
	if (Local_13 == 6)
	{
		func_154(6);
	}
	else if (Local_13 > 0)
	{
		func_49();
		func_154(1);
	}
}

void func_53()
{
	if (Local_13 == 6)
	{
		func_154(6);
	}
	else if (Local_13 > 1)
	{
		func_154(2);
	}
}

void func_54()
{
	if (!func_135(1, 255))
	{
		bVar0 = true;
		if (!func_155())
		{
			bVar0 = false;
		}
		if (!func_156())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_152(1);
		}
		else
		{
			iVar1 = Global_1901947->f_236.f_68;
			if (!func_132(Local_764.f_11))
			{
				func_133(&(Local_764.f_11));
			}
			if (func_134(Local_764.f_11) >= iVar1)
			{
				func_154(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_157(&(Local_764.f_11));
		func_158();
		func_154(3);
	}
}

void func_55()
{
	if (!func_135(2, 255))
	{
		iVar0 = func_159();
		iVar1 = func_160();
		if (iVar0 && iVar1)
		{
			func_152(2);
		}
		else
		{
			iVar2 = Global_1901947->f_236.f_68;
			if (!func_132(Local_764.f_11))
			{
				func_133(&(Local_764.f_11));
			}
			if (func_161(Local_764.f_11) >= iVar2)
			{
				func_154(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_157(&(Local_764.f_11));
		func_162();
		func_163();
		func_164();
		func_165();
		func_154(4);
	}
}

void func_56()
{
	if (Local_13 >= 5)
	{
		func_166();
		func_154(5);
		return;
	}
	func_167();
	func_168();
	func_169();
	func_170();
	func_171();
	func_172();
}

void func_57()
{
	if (!func_135(4, 255))
	{
		if (func_173())
		{
			func_174();
			func_65(Local_764.f_12, 4);
			func_152(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_154(6);
	}
}

void func_58()
{
}

bool func_59()
{
	return (func_136(4) || (network_is_game_in_progress() && network_get_num_participants() <= 1));
}

void func_60()
{
}

void func_61()
{
	if (func_59())
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			if (network_does_network_id_exist(&(Local_13.f_31[iVar1])))
			{
				iVar0 = net_to_ped(&(Local_13.f_31[iVar1]));
				func_175(iVar1);
				if (network_has_control_of_entity(iVar0))
				{
					set_blocking_of_non_temporary_events(iVar0, false);
					if (!func_176(iVar1, 16))
					{
						_0x39a2fc5af55a52b1(iVar0, -1);
					}
					set_ped_as_no_longer_needed(&iVar0);
				}
			}
			iVar1++;
		}
	}
}

void func_62()
{
	if (func_59())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = 0;
			while (iVar2 < 1)
			{
				if (func_177(iVar1, iVar2))
				{
				}
				else if (func_178(iVar1, iVar2))
				{
					iVar0 = &Local_764.f_407[iVar1]->f_5[iVar2];
					if (does_entity_exist(iVar0))
					{
						if (func_179(iVar1, iVar2))
						{
							delete_object(&iVar0);
						}
						else
						{
							set_object_as_no_longer_needed(&iVar0);
						}
					}
				}
				else if (network_does_network_id_exist(Local_13.f_43[iVar1][iVar2]))
				{
					iVar0 = net_to_obj(Local_13.f_43[iVar1][iVar2]);
					if (network_has_control_of_entity(iVar0))
					{
						if (func_179(iVar1, iVar2))
						{
							delete_object(&iVar0);
						}
						else
						{
							set_object_as_no_longer_needed(&iVar0);
						}
					}
				}
				iVar2++;
			}
			iVar1++;
		}
	}
}

void func_63()
{
	func_180(&(Local_764.f_428.f_13));
	if (_does_volume_exist(Local_764.f_428.f_11))
	{
		_delete_volume(Local_764.f_428.f_11);
	}
}

void func_64()
{
	func_181();
}

void func_65(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (func_182(iParam0, iVar0, iParam1))
	{
		return;
	}
	set_bit((*(*Global_1207784)[iVar0])[iParam0], iParam1);
}

void func_66()
{
	if (!func_67(1))
	{
		return;
	}
	if (func_67(4))
	{
		return;
	}
	if (!func_67(2))
	{
		iVar0 = -1;
	}
	else if (!func_67(8))
	{
		iVar0 = 2;
	}
	else if (func_67(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_67(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_183(Local_764.f_9, iVar0, 0, 255, 0);
	func_150(4);
	if (bVar1)
	{
		func_184(Local_764.f_1, Local_764.f_2);
		if (!func_67(256))
		{
			if (iVar0 == 1)
			{
				func_185(Local_764.f_18, 1);
			}
			else
			{
				func_185(Local_764.f_18, 0);
			}
			func_150(256);
		}
	}
	else
	{
		func_185(Local_764.f_18, 2);
	}
}

bool func_67(int iParam0)
{
	return func_186(Local_764.f_7, iParam0);
}

void func_68(int iParam0)
{
	if (!func_187(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	(*Global_1134390)[iVar0]->f_70 = iParam0;
	(*Global_1134390)[iVar0]->f_70.f_2 = 0;
}

void func_69()
{
}

void func_70(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_32(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_71(var uParam0)
{
	if (!func_188(uParam0))
	{
		return -1;
	}
	iVar0 = func_189(uParam0, uParam0->f_9);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == uParam0->f_9)
		{
		}
		else
		{
			iVar0 = func_189(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_72(int iParam0)
{
	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	if (!func_19(iParam0))
	{
		return Var0;
	}
	return *Global_1198046->f_231[iParam0];
}

void func_73(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 7;
	func_190(uParam0, iParam1);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -1808627090;
			uParam0->f_11 = { 2150.374f, 1728.215f, 125.2313f };
			break;
		case 1:
			uParam0->f_5 = -1563711584;
			uParam0->f_11 = { 2179.106f, -25.3714f, 51.3658f };
			break;
		case 2:
			uParam0->f_5 = -717510681;
			uParam0->f_11 = { -1055.963f, -794.308f, 59.2567f };
			break;
		case 3:
			uParam0->f_5 = -2044065371;
			uParam0->f_11 = { -1158.078f, -155.114f, 88.889f };
			break;
		case 4:
			uParam0->f_5 = -1209537248;
			uParam0->f_11 = { -1370.712f, -515.7384f, 125.267f };
			break;
		case 5:
			uParam0->f_5 = 1714342319;
			uParam0->f_11 = { -1029.465f, -492.4087f, 101.0615f };
			break;
		case 6:
			uParam0->f_5 = 1269971654;
			uParam0->f_11 = { -319.5499f, 203.8464f, 62.1121f };
			break;
		case 7:
			uParam0->f_5 = 720927063;
			uParam0->f_11 = { -513.8f, 345.2f, 49.8945f };
			break;
		case 8:
			uParam0->f_5 = 1499128142;
			uParam0->f_11 = { -1234.665f, -1371.778f, 80.796f };
			break;
		case 9:
			uParam0->f_5 = -1539691586;
			uParam0->f_11 = { -1525.164f, 1722.86f, 239.152f };
			break;
	}
}

void func_74(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_191(uParam0);
	switch (iParam1)
	{
		case 0:
			func_192(uParam0);
			uParam0->f_5 = 277430601;
			uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
			break;
		case 1:
			func_192(uParam0);
			uParam0->f_5 = 1659133778;
			uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
			break;
		case 2:
			func_192(uParam0);
			uParam0->f_5 = 1296650927;
			uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
			break;
		case 3:
			func_192(uParam0);
			uParam0->f_5 = 2115437634;
			uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
			break;
		case 4:
			func_192(uParam0);
			uParam0->f_5 = 1098622970;
			uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
			break;
		case 5:
			func_192(uParam0);
			uParam0->f_5 = 393263596;
			uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
			break;
		case 6:
			func_192(uParam0);
			uParam0->f_5 = 189453630;
			uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
			break;
		case 7:
			func_192(uParam0);
			uParam0->f_5 = -98921343;
			uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
			break;
		case 8:
			func_192(uParam0);
			uParam0->f_5 = 6025033;
			uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
			break;
		case 9:
			func_192(uParam0);
			uParam0->f_5 = -1060299979;
			uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
			break;
		case 10:
			func_192(uParam0);
			uParam0->f_5 = 682088681;
			uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
			break;
		case 11:
			func_192(uParam0);
			uParam0->f_5 = 1705841922;
			uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
			break;
		case 12:
			func_192(uParam0);
			uParam0->f_5 = -301205165;
			uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
			break;
		case 13:
			func_192(uParam0);
			uParam0->f_5 = 1906160715;
			uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
			break;
		case 14:
			func_192(uParam0);
			uParam0->f_5 = -1129906020;
			uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
			break;
		case 15:
			func_192(uParam0);
			uParam0->f_5 = 1592980994;
			uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
			break;
		case 16:
			func_192(uParam0);
			uParam0->f_5 = 686459378;
			uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
			break;
		case 17:
			func_192(uParam0);
			uParam0->f_5 = -259262381;
			uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
			break;
		case 18:
			func_192(uParam0);
			uParam0->f_5 = 1289806844;
			uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
			break;
		case 19:
			func_192(uParam0);
			uParam0->f_5 = 347656238;
			uParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
			break;
	}
}

void func_75(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 8;
	uParam0->f_2 = 1;
	func_191(uParam0);
	switch (iParam1)
	{
		case 0:
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			func_193(uParam0, 5);
			uParam0->f_5 = 1454566440;
			uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
			break;
		case 1:
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			func_193(uParam0, 5);
			uParam0->f_5 = 1141360338;
			uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
		case 2:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			func_193(uParam0, 5);
			uParam0->f_5 = 844768119;
			uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
		case 3:
			func_193(uParam0, 0);
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			func_193(uParam0, 4);
			func_193(uParam0, 5);
			func_193(uParam0, 7);
			uParam0->f_5 = -1601993562;
			uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
			break;
		case 4:
			func_193(uParam0, 0);
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			func_193(uParam0, 5);
			func_193(uParam0, 7);
			uParam0->f_5 = -901588956;
			uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
			break;
		case 5:
			func_193(uParam0, 0);
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			func_193(uParam0, 5);
			func_193(uParam0, 7);
			uParam0->f_5 = 2129019244;
			uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
		case 6:
			func_193(uParam0, 0);
			func_193(uParam0, 2);
			func_193(uParam0, 4);
			func_193(uParam0, 5);
			func_193(uParam0, 6);
			uParam0->f_5 = 1227099802;
			uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
			break;
		case 7:
			func_193(uParam0, 0);
			func_193(uParam0, 2);
			func_193(uParam0, 4);
			func_193(uParam0, 5);
			func_193(uParam0, 6);
			uParam0->f_5 = -940471213;
			uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
			break;
		case 8:
			func_193(uParam0, 0);
			func_193(uParam0, 2);
			func_193(uParam0, 4);
			func_193(uParam0, 5);
			func_193(uParam0, 6);
			uParam0->f_5 = -700569364;
			uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
			break;
		case 9:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			uParam0->f_5 = 412376369;
			uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
		case 10:
			func_193(uParam0, 0);
			func_193(uParam0, 2);
			func_193(uParam0, 5);
			func_193(uParam0, 7);
			uParam0->f_5 = -364052317;
			uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
		case 11:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			uParam0->f_5 = -989186530;
			uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
			break;
		case 12:
			func_193(uParam0, 0);
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			func_193(uParam0, 4);
			func_193(uParam0, 5);
			func_193(uParam0, 6);
			uParam0->f_5 = 333858683;
			uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
			break;
		case 13:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			uParam0->f_5 = -39511303;
			uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
			break;
		case 14:
			func_193(uParam0, 3);
			func_193(uParam0, 4);
			func_193(uParam0, 5);
			func_193(uParam0, 6);
			uParam0->f_5 = 813662381;
			uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
			break;
		case 15:
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			func_193(uParam0, 5);
			func_193(uParam0, 7);
			uParam0->f_5 = -1114006686;
			uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
			break;
		case 16:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			func_193(uParam0, 3);
			func_193(uParam0, 5);
			func_193(uParam0, 7);
			uParam0->f_5 = 1049238845;
			uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
			break;
		case 17:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			func_193(uParam0, 3);
			func_193(uParam0, 5);
			func_193(uParam0, 7);
			uParam0->f_5 = 1363886783;
			uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
			break;
		case 18:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			func_193(uParam0, 5);
			uParam0->f_5 = -1215674354;
			uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
			break;
		case 19:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			uParam0->f_5 = 1902132155;
			uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
			break;
		case 20:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			func_193(uParam0, 5);
			uParam0->f_5 = 1661312774;
			uParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
			break;
	}
}

void func_76(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 2;
	func_191(uParam0);
	uParam0->f_15[0] = -2090512547;
	switch (iParam1)
	{
		case 0:
			func_192(uParam0);
			uParam0->f_5 = 1382777618;
			uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
		case 1:
			func_192(uParam0);
			uParam0->f_5 = -2000681184;
			uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
			break;
		case 2:
			func_192(uParam0);
			uParam0->f_5 = 886884092;
			uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
			break;
		case 3:
			func_192(uParam0);
			uParam0->f_5 = -1277120723;
			uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
			break;
		case 4:
			func_192(uParam0);
			uParam0->f_5 = 1577436816;
			uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
			break;
		case 5:
			func_192(uParam0);
			uParam0->f_5 = -234749781;
			uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
			break;
		case 6:
			func_192(uParam0);
			uParam0->f_5 = -1607623039;
			uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
		case 7:
			func_192(uParam0);
			uParam0->f_5 = -1943295936;
			uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
			break;
		case 8:
			func_192(uParam0);
			uParam0->f_5 = -397730168;
			uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
			break;
		case 9:
			func_192(uParam0);
			uParam0->f_5 = -392659534;
			uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
			break;
		case 10:
			func_192(uParam0);
			uParam0->f_5 = 146267878;
			uParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
			break;
	}
}

void func_77(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_191(uParam0);
	switch (iParam1)
	{
		case 0:
			func_192(uParam0);
			uParam0->f_5 = 1247886914;
			uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
		case 1:
			func_192(uParam0);
			uParam0->f_5 = 1926100410;
			uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
			break;
		case 2:
			func_192(uParam0);
			uParam0->f_5 = 603340011;
			uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
			break;
		case 3:
			func_192(uParam0);
			uParam0->f_5 = -1253915394;
			uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
			break;
		case 4:
			func_192(uParam0);
			uParam0->f_5 = 1281783573;
			uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
			break;
		case 5:
			func_192(uParam0);
			uParam0->f_5 = -1384936716;
			uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
			break;
		case 6:
			func_192(uParam0);
			uParam0->f_5 = 636669604;
			uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
			break;
		case 7:
			func_192(uParam0);
			uParam0->f_5 = 1410575087;
			uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
			break;
		case 8:
			func_192(uParam0);
			uParam0->f_5 = -736919321;
			uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
		case 9:
			func_192(uParam0);
			uParam0->f_5 = 1755496218;
			uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
			break;
		case 10:
			func_192(uParam0);
			uParam0->f_5 = -1810033095;
			uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
			break;
		case 11:
			func_192(uParam0);
			uParam0->f_5 = 99707271;
			uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
			break;
		case 12:
			func_192(uParam0);
			uParam0->f_5 = 2145033839;
			uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
			break;
		case 13:
			func_192(uParam0);
			uParam0->f_5 = -994111457;
			uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
			break;
		case 14:
			func_192(uParam0);
			uParam0->f_5 = 702836385;
			uParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
			break;
	}
}

void func_78(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 16;
	uParam0->f_1 = 2;
	uParam0->f_2 = 8;
	switch (iParam2)
	{
		case 0:
			func_194(uParam0, 0);
			func_194(uParam0, 1);
			func_194(uParam0, 4);
			func_194(uParam0, 5);
			break;
		case 1:
			func_194(uParam0, 2);
			func_194(uParam0, 3);
			func_194(uParam0, 6);
			func_194(uParam0, 7);
			func_195(uParam0, 2);
			break;
		default:
			func_191(uParam0);
			break;
	}
	switch (iParam1)
	{
		case 0:
			func_193(uParam0, 0);
			uParam0->f_5 = -88606612;
			uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
			break;
		case 1:
			func_193(uParam0, 1);
			uParam0->f_5 = -1507537085;
			uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
		case 2:
			func_193(uParam0, 0);
			uParam0->f_5 = 150331424;
			uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
			break;
		case 3:
			func_193(uParam0, 1);
			uParam0->f_5 = -74168995;
			uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
			break;
		case 4:
			func_193(uParam0, 0);
			uParam0->f_5 = -1303456769;
			uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
			break;
		case 5:
			func_193(uParam0, 1);
			uParam0->f_5 = 2080696176;
			uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
			break;
		case 6:
			func_193(uParam0, 0);
			uParam0->f_5 = -801880493;
			uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
			break;
		case 7:
			func_193(uParam0, 1);
			uParam0->f_5 = -2098877513;
			uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
			break;
		case 8:
			func_193(uParam0, 0);
			uParam0->f_5 = -985131289;
			uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
			break;
		case 9:
			func_193(uParam0, 1);
			uParam0->f_5 = 171385032;
			uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
			break;
		case 10:
			func_193(uParam0, 0);
			uParam0->f_5 = -690365399;
			uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
			break;
		case 11:
			func_193(uParam0, 1);
			uParam0->f_5 = -393773180;
			uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
		case 12:
			func_193(uParam0, 0);
			uParam0->f_5 = 1783045643;
			uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
			break;
		case 13:
			func_193(uParam0, 1);
			uParam0->f_5 = -1841828372;
			uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
			break;
		case 14:
			func_193(uParam0, 0);
			uParam0->f_5 = -1926357119;
			uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
			break;
		case 15:
			func_193(uParam0, 1);
			uParam0->f_5 = -1904926193;
			uParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
			break;
	}
}

void func_79(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 12;
	uParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			func_193(uParam0, 9);
			func_193(uParam0, 10);
			func_193(uParam0, 11);
			func_196(uParam0, iParam2);
			uParam0->f_5 = 666420762;
			uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
			break;
		case 1:
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			func_193(uParam0, 8);
			func_193(uParam0, 9);
			func_193(uParam0, 10);
			func_193(uParam0, 11);
			func_196(uParam0, iParam2);
			uParam0->f_5 = 1145423923;
			uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
			break;
		case 2:
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			func_193(uParam0, 4);
			func_193(uParam0, 5);
			func_193(uParam0, 6);
			func_193(uParam0, 9);
			func_193(uParam0, 10);
			func_193(uParam0, 11);
			func_196(uParam0, iParam2);
			uParam0->f_5 = -1176575305;
			uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
			break;
		case 3:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			func_193(uParam0, 9);
			func_193(uParam0, 10);
			func_193(uParam0, 11);
			func_196(uParam0, iParam2);
			uParam0->f_5 = -888961792;
			uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
			break;
		case 4:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			func_193(uParam0, 9);
			func_193(uParam0, 10);
			func_193(uParam0, 11);
			func_196(uParam0, iParam2);
			uParam0->f_5 = -1145898130;
			uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
			break;
		case 5:
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			func_193(uParam0, 4);
			func_193(uParam0, 7);
			func_193(uParam0, 8);
			func_193(uParam0, 9);
			func_193(uParam0, 10);
			func_193(uParam0, 11);
			func_196(uParam0, iParam2);
			uParam0->f_5 = -264936334;
			uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
			break;
		case 6:
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			func_193(uParam0, 6);
			func_193(uParam0, 7);
			func_193(uParam0, 9);
			func_193(uParam0, 10);
			func_193(uParam0, 11);
			func_196(uParam0, iParam2);
			uParam0->f_5 = -562839313;
			uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
			break;
		case 7:
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			func_193(uParam0, 4);
			func_193(uParam0, 5);
			func_193(uParam0, 6);
			func_193(uParam0, 9);
			func_193(uParam0, 10);
			func_193(uParam0, 11);
			func_196(uParam0, iParam2);
			uParam0->f_5 = -819926700;
			uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
			break;
		case 8:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			func_193(uParam0, 9);
			func_193(uParam0, 10);
			func_193(uParam0, 11);
			func_196(uParam0, iParam2);
			uParam0->f_5 = -100890882;
			uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
			break;
		case 9:
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			func_193(uParam0, 5);
			func_193(uParam0, 9);
			func_193(uParam0, 10);
			func_193(uParam0, 11);
			func_196(uParam0, iParam2);
			uParam0->f_5 = 373607510;
			uParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
			break;
	}
}

void func_80(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_191(uParam0);
	switch (iParam1)
	{
		case 0:
			func_192(uParam0);
			uParam0->f_5 = -1562903685;
			uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
			break;
		case 1:
			func_192(uParam0);
			uParam0->f_5 = 442262250;
			uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
			break;
		case 2:
			func_192(uParam0);
			uParam0->f_5 = 2113001754;
			uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
			break;
		case 3:
			func_192(uParam0);
			uParam0->f_5 = 222101843;
			uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
			break;
		case 4:
			func_192(uParam0);
			uParam0->f_5 = 862535295;
			uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
		case 5:
			func_192(uParam0);
			uParam0->f_5 = 267494763;
			uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
			break;
		case 6:
			func_192(uParam0);
			uParam0->f_5 = 492498900;
			uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
			break;
		case 7:
			func_192(uParam0);
			uParam0->f_5 = -735417347;
			uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
		case 8:
			func_192(uParam0);
			uParam0->f_5 = 2000289900;
			uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
			break;
		case 9:
			func_192(uParam0);
			uParam0->f_5 = 1820563970;
			uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
			break;
		case 10:
			func_192(uParam0);
			uParam0->f_5 = 1501808210;
			uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
			break;
		case 11:
			func_192(uParam0);
			uParam0->f_5 = -1103422576;
			uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
			break;
		case 12:
			func_192(uParam0);
			uParam0->f_5 = -375108461;
			uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
			break;
		case 13:
			func_192(uParam0);
			uParam0->f_5 = 1074344160;
			uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
			break;
		case 14:
			func_192(uParam0);
			uParam0->f_5 = 1375567406;
			uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
			break;
		case 15:
			func_192(uParam0);
			uParam0->f_5 = 1695022182;
			uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
			break;
		case 16:
			func_192(uParam0);
			uParam0->f_5 = 1773241795;
			uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
			break;
		case 17:
			func_192(uParam0);
			uParam0->f_5 = 1650499101;
			uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
			break;
		case 18:
			func_192(uParam0);
			uParam0->f_5 = 149116609;
			uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
			break;
		case 19:
			func_192(uParam0);
			uParam0->f_5 = 1486166046;
			uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
			break;
		case 20:
			func_192(uParam0);
			uParam0->f_5 = 58739626;
			uParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
			break;
	}
}

void func_81(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	func_191(uParam0);
	func_195(uParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_192(uParam0);
			uParam0->f_5 = -1657923088;
			uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
		case 1:
			func_192(uParam0);
			uParam0->f_5 = -1268232386;
			uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
			break;
		case 2:
			func_192(uParam0);
			uParam0->f_5 = 1926851120;
			uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
			break;
		case 3:
			func_192(uParam0);
			uParam0->f_5 = -66052340;
			uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
			break;
		case 4:
			func_192(uParam0);
			uParam0->f_5 = 1738334804;
			uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
			break;
		case 5:
			func_192(uParam0);
			uParam0->f_5 = 1009780912;
			uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
			break;
		case 6:
			func_192(uParam0);
			uParam0->f_5 = -1560771476;
			uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
			break;
		case 7:
			func_192(uParam0);
			uParam0->f_5 = 453813335;
			uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
			break;
		case 8:
			func_192(uParam0);
			uParam0->f_5 = 786924542;
			uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
		case 9:
			func_192(uParam0);
			uParam0->f_5 = 1656593925;
			uParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
			break;
	}
}

void func_82(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 4;
	uParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_197(uParam0, iParam2);
			uParam0->f_5 = 1323108111;
			uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
			break;
		case 1:
			func_197(uParam0, iParam2);
			uParam0->f_5 = -1505479200;
			uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
			break;
		case 2:
			func_197(uParam0, iParam2);
			uParam0->f_5 = -1283075997;
			uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
			break;
		case 3:
			func_197(uParam0, iParam2);
			uParam0->f_5 = -2100531475;
			uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
			break;
		case 4:
			func_197(uParam0, iParam2);
			uParam0->f_5 = 269617530;
			uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
			break;
		case 5:
			func_197(uParam0, iParam2);
			uParam0->f_5 = 1592829750;
			uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
			break;
		case 6:
			func_197(uParam0, iParam2);
			uParam0->f_5 = 1817985549;
			uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
		case 7:
			func_197(uParam0, iParam2);
			uParam0->f_5 = 1945424739;
			uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
		case 8:
			func_197(uParam0, iParam2);
			uParam0->f_5 = 1787314318;
			uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
		case 9:
			func_197(uParam0, iParam2);
			uParam0->f_5 = 542354442;
			uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
		case 10:
			func_197(uParam0, iParam2);
			uParam0->f_5 = 1510776727;
			uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
		case 11:
			func_197(uParam0, iParam2);
			uParam0->f_5 = -2017297662;
			uParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
			break;
	}
}

void func_83(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_191(uParam0);
	switch (iParam1)
	{
		case 0:
			func_192(uParam0);
			uParam0->f_5 = -377638420;
			uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
		case 1:
			func_192(uParam0);
			uParam0->f_5 = 1308799438;
			uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
			break;
		case 2:
			func_192(uParam0);
			uParam0->f_5 = -1030922940;
			uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
			break;
		case 3:
			func_192(uParam0);
			uParam0->f_5 = 1750043358;
			uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
			break;
		case 4:
			func_192(uParam0);
			uParam0->f_5 = -1330609910;
			uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
			break;
		case 5:
			func_192(uParam0);
			uParam0->f_5 = 223942444;
			uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
			break;
		case 6:
			func_192(uParam0);
			uParam0->f_5 = 1067547121;
			uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
			break;
		case 7:
			func_192(uParam0);
			uParam0->f_5 = -450732096;
			uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
			break;
		case 8:
			func_192(uParam0);
			uParam0->f_5 = -1701940764;
			uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
			break;
		case 9:
			func_192(uParam0);
			uParam0->f_5 = 1584258975;
			uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
			break;
		case 10:
			func_192(uParam0);
			uParam0->f_5 = -98183174;
			uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
			break;
		case 11:
			func_192(uParam0);
			uParam0->f_5 = -90261849;
			uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
			break;
		case 12:
			func_192(uParam0);
			uParam0->f_5 = 754522971;
			uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
			break;
		case 13:
			func_192(uParam0);
			uParam0->f_5 = 974542513;
			uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
			break;
		case 14:
			func_192(uParam0);
			uParam0->f_5 = -790885273;
			uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
			break;
		case 15:
			func_192(uParam0);
			uParam0->f_5 = -1447045452;
			uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
			break;
		case 16:
			func_192(uParam0);
			uParam0->f_5 = -586115209;
			uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
			break;
		case 17:
			func_192(uParam0);
			uParam0->f_5 = 224941020;
			uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
			break;
		case 18:
			func_192(uParam0);
			uParam0->f_5 = -1179654578;
			uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
			break;
		case 19:
			func_192(uParam0);
			uParam0->f_5 = 1247197458;
			uParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
			break;
	}
}

void func_84(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 9;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_191(uParam0);
	uParam0->f_10 = 60f;
	switch (iParam1)
	{
		case 0:
			func_192(uParam0);
			uParam0->f_5 = 974582605;
			uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
		case 1:
			func_192(uParam0);
			uParam0->f_5 = -964359125;
			uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
		case 2:
			func_192(uParam0);
			uParam0->f_5 = -700339292;
			uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
		case 3:
			func_192(uParam0);
			uParam0->f_5 = -470300912;
			uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
		case 4:
			func_192(uParam0);
			uParam0->f_5 = -241343909;
			uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
		case 5:
			func_192(uParam0);
			uParam0->f_5 = 1944053474;
			uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
		case 6:
			func_192(uParam0);
			uParam0->f_5 = -2120646059;
			uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
		case 7:
			func_192(uParam0);
			uParam0->f_5 = -1656440405;
			uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
		case 8:
			func_192(uParam0);
			uParam0->f_5 = -1422404207;
			uParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
			break;
	}
}

void func_85(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 1;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	func_191(uParam0);
	func_195(uParam0, 1);
	func_195(uParam0, 4);
	func_195(uParam0, 8);
	func_195(uParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_192(uParam0);
			uParam0->f_5 = -1623035253;
			uParam0->f_11 = { func_198(func_127(iParam2)) };
			break;
	}
}

void func_86(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 5;
	uParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_199(uParam0, iParam2);
			uParam0->f_5 = -1957221189;
			uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
			break;
		case 1:
			func_199(uParam0, iParam2);
			uParam0->f_5 = 871956008;
			uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
			break;
		case 2:
			func_199(uParam0, iParam2);
			uParam0->f_5 = -718829908;
			uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
			break;
		case 3:
			func_199(uParam0, iParam2);
			uParam0->f_5 = -478076065;
			uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
			break;
		case 4:
			func_199(uParam0, iParam2);
			uParam0->f_5 = 158131441;
			uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
			break;
		case 5:
			func_199(uParam0, iParam2);
			uParam0->f_5 = 575051428;
			uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
			break;
		case 6:
			func_199(uParam0, iParam2);
			uParam0->f_5 = -861587350;
			uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
			break;
		case 7:
			func_199(uParam0, iParam2);
			uParam0->f_5 = -616671844;
			uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
			break;
		case 8:
			func_199(uParam0, iParam2);
			uParam0->f_5 = -828875274;
			uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
			break;
		case 9:
			func_199(uParam0, iParam2);
			uParam0->f_5 = -598017669;
			uParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
			break;
	}
}

void func_87(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_191(uParam0);
	switch (iParam1)
	{
		case 0:
			func_192(uParam0);
			uParam0->f_5 = 2136361638;
			uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
			break;
		case 1:
			func_192(uParam0);
			uParam0->f_5 = 1948005426;
			uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
			break;
		case 2:
			func_192(uParam0);
			uParam0->f_5 = 462368629;
			uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
		case 3:
			func_192(uParam0);
			uParam0->f_5 = -172629291;
			uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
		case 4:
			func_192(uParam0);
			uParam0->f_5 = 1063777848;
			uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
			break;
		case 5:
			func_192(uParam0);
			uParam0->f_5 = -267241827;
			uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
		case 6:
			func_192(uParam0);
			uParam0->f_5 = -1183266453;
			uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
		case 7:
			func_192(uParam0);
			uParam0->f_5 = -877826604;
			uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
		case 8:
			func_192(uParam0);
			uParam0->f_5 = 1527533302;
			uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
		case 9:
			func_192(uParam0);
			uParam0->f_5 = -865586768;
			uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
			break;
		case 10:
			func_192(uParam0);
			uParam0->f_5 = 294379466;
			uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
			break;
		case 11:
			func_192(uParam0);
			uParam0->f_5 = 452588198;
			uParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
			break;
	}
}

void func_88(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 2;
	uParam0->f_2 = 4;
	func_200(uParam0, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -1056712278;
			uParam0->f_11 = { 2815.91f, -1222.949f, 46.526f };
			break;
		case 1:
			uParam0->f_5 = -1296614127;
			uParam0->f_11 = { 2602.444f, -1286.57f, 51.2567f };
			break;
		case 2:
			uParam0->f_5 = -1652223315;
			uParam0->f_11 = { 2661.251f, -1202.6f, 52.2783f };
			break;
		case 3:
			uParam0->f_5 = -1975325639;
			uParam0->f_11 = { 2750.527f, -1206.293f, 48.3767f };
			break;
		case 4:
			uParam0->f_5 = 1979237285;
			uParam0->f_11 = { 2530.883f, -1149.375f, 49.0052f };
			break;
		case 5:
			uParam0->f_5 = 1740187430;
			uParam0->f_11 = { 2714.385f, -1233.121f, 49.172f };
			break;
		case 6:
			uParam0->f_5 = -779552060;
			uParam0->f_11 = { 2639.789f, -1417.126f, 45.376f };
			break;
		case 7:
			uParam0->f_5 = -1018405301;
			uParam0->f_11 = { 2703.266f, -1184.961f, 50.865f };
			break;
		case 8:
			uParam0->f_5 = -1290420770;
			uParam0->f_11 = { 2781.518f, -1278.669f, 46.429f };
			break;
		case 9:
			uParam0->f_5 = -1671655316;
			uParam0->f_11 = { 2593.165f, -1207.484f, 52.3112f };
			break;
		case 10:
			uParam0->f_5 = 1135642784;
			uParam0->f_11 = { 2670.08f, -1113.233f, 49.552f };
			break;
		case 11:
			uParam0->f_5 = -1924228133;
			uParam0->f_11 = { 2482.088f, -1465.71f, 45.1902f };
			break;
		case 12:
			uParam0->f_5 = -1094623305;
			uParam0->f_11 = { -791.817f, -1311.097f, 42.623f };
			break;
		case 13:
			uParam0->f_5 = -782990107;
			uParam0->f_11 = { -778.963f, -1260.098f, 42.643f };
			break;
		case 14:
			uParam0->f_5 = 677294836;
			uParam0->f_11 = { -843.7784f, -1282.664f, 42.3634f };
			break;
	}
}

void func_89(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 15;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1084113577;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = 1417207314;
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 8;
	}
	func_191(uParam0);
	switch (iParam1)
	{
		case 0:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -672003008;
			uParam0->f_11 = { 2153.785f, -1677.743f, 40.5666f };
			break;
		case 1:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -396317411;
			uParam0->f_11 = { 2188.584f, -1595.642f, 40.591f };
			break;
		case 2:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1239103346;
			uParam0->f_11 = { 2078.438f, -1694.907f, 40.6896f };
			break;
		case 3:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -889851344;
			uParam0->f_11 = { 2066.834f, -1767.304f, 40.1183f };
			break;
		case 4:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1582784618;
			uParam0->f_11 = { 2131.718f, -1865.66f, 40.0837f };
			break;
		case 5:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 407459900;
			uParam0->f_11 = { 2189.613f, -654.0466f, 40.5628f };
			break;
		case 6:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1359903346;
			uParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
		case 7:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1075501195;
			uParam0->f_11 = { 2212.435f, -599.6181f, 40.5628f };
			break;
		case 8:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -761049871;
			uParam0->f_11 = { 2273.341f, -693.9393f, 40.5628f };
			break;
		case 9:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 1397804618;
			uParam0->f_11 = { 2314.659f, -599.6119f, 40.5628f };
			break;
		case 10:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -636095416;
			uParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
		case 11:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -933474091;
			uParam0->f_11 = { 2800.13f, -727.0102f, 40.6116f };
			break;
		case 12:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1209520147;
			uParam0->f_11 = { 2726.128f, -662.6138f, 40.5283f };
			break;
		case 13:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1524528544;
			uParam0->f_11 = { 2710.138f, -534.5544f, 40.615f };
			break;
		case 14:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -449082741;
			uParam0->f_11 = { 2728.174f, -468.3862f, 40.7744f };
			break;
	}
}

void func_90(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 13;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 477228254;
	if (iParam1 > 7)
	{
		uParam0->f_27 = 18;
		uParam0->f_20[0] = 1417207314;
	}
	else
	{
		uParam0->f_27 = 1;
		uParam0->f_20[0] = 1985854092;
	}
	switch (iParam1)
	{
		case 0:
			func_202(uParam0, iParam1);
			uParam0->f_5 = -42638554;
			uParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
		case 1:
			func_202(uParam0, iParam1);
			uParam0->f_5 = -330841909;
			uParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
		case 2:
			func_202(uParam0, iParam1);
			uParam0->f_5 = -637690825;
			uParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
		case 3:
			func_202(uParam0, iParam1);
			uParam0->f_5 = 1210841234;
			uParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
		case 4:
			func_202(uParam0, iParam1);
			uParam0->f_5 = -275624566;
			uParam0->f_11 = { -2023.4f, 662.6884f, 119.8702f };
			break;
		case 5:
			func_202(uParam0, iParam1);
			uParam0->f_5 = -2051147289;
			uParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
		case 6:
			func_202(uParam0, iParam1);
			uParam0->f_5 = -1760846718;
			uParam0->f_11 = { -2487.232f, 414.2487f, 148.2772f };
			break;
		case 7:
			func_202(uParam0, iParam1);
			uParam0->f_5 = -1591562064;
			uParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
		case 8:
			func_202(uParam0, iParam1);
			uParam0->f_5 = -1159724897;
			uParam0->f_11 = { -1377.945f, 265.2666f, 78.222f };
			break;
		case 9:
			func_202(uParam0, iParam1);
			uParam0->f_5 = -114459335;
			uParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
		case 10:
			func_202(uParam0, iParam1);
			uParam0->f_5 = 564350440;
			uParam0->f_11 = { -1091.188f, -37.3214f, 40.5256f };
			break;
		case 11:
			func_202(uParam0, iParam1);
			uParam0->f_5 = -840522068;
			uParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
		case 12:
			func_202(uParam0, iParam1);
			uParam0->f_5 = -2076667055;
			uParam0->f_11 = { -792.3045f, 647.1317f, 88.5497f };
			break;
	}
}

void func_91(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 1796670491;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 0;
	}
	else
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 18;
	}
	func_191(uParam0);
	switch (iParam1)
	{
		case 0:
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			uParam0->f_5 = -666643000;
			uParam0->f_11 = { -2323.821f, -444.3168f, 143.2396f };
			break;
		case 1:
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			uParam0->f_5 = -930743103;
			uParam0->f_11 = { -2387.781f, -333.0453f, 142.8896f };
			break;
		case 2:
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			uParam0->f_5 = -4199612;
			uParam0->f_11 = { -2622.5f, -342.7303f, 141.5315f };
			break;
		case 3:
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			uParam0->f_5 = -1480377528;
			uParam0->f_11 = { -2760.32f, -77.8632f, 151.8582f };
			break;
		case 4:
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			uParam0->f_5 = -1817640794;
			uParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
		case 5:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			uParam0->f_5 = -915442079;
			uParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
		case 6:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			uParam0->f_5 = 1928422814;
			uParam0->f_11 = { 2257.893f, 256.7348f, 43.6559f };
			break;
		case 7:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			uParam0->f_5 = 1940620434;
			uParam0->f_11 = { 2324.826f, 895.6353f, 71.6451f };
			break;
		case 8:
			func_193(uParam0, 1);
			uParam0->f_5 = -665538457;
			uParam0->f_11 = { 2383.811f, 1084.155f, 85.9333f };
			break;
		case 9:
			func_193(uParam0, 1);
			uParam0->f_5 = 355243564;
			uParam0->f_11 = { 2398.53f, 773.5043f, 67.0099f };
			break;
	}
}

void func_92(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 326651247;
	func_191(uParam0);
	if (iParam1 > 4)
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = 1417207314;
		uParam0->f_27 = 9;
	}
	switch (iParam1)
	{
		case 0:
			func_193(uParam0, 0);
			uParam0->f_5 = -1024453831;
			uParam0->f_11 = { -1856.609f, 1802.919f, 234.305f };
			break;
		case 1:
			func_193(uParam0, 0);
			uParam0->f_5 = -652787833;
			uParam0->f_11 = { -1821.152f, 1566.352f, 235.8068f };
			break;
		case 2:
			func_193(uParam0, 0);
			uParam0->f_5 = 230697180;
			uParam0->f_11 = { -2069.577f, 1812.812f, 246.0542f };
			break;
		case 3:
			func_193(uParam0, 0);
			uParam0->f_5 = -543699832;
			uParam0->f_11 = { -1932.007f, 2153.216f, 322.7221f };
			break;
		case 4:
			func_193(uParam0, 0);
			uParam0->f_5 = 894826503;
			uParam0->f_11 = { -1752.347f, 1951.369f, 264.5091f };
			break;
		case 5:
			func_193(uParam0, 1);
			uParam0->f_5 = 1666294228;
			uParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
		case 6:
			func_193(uParam0, 1);
			uParam0->f_5 = 1426851145;
			uParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
		case 7:
			func_193(uParam0, 1);
			uParam0->f_5 = -807339271;
			uParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
		case 8:
			func_193(uParam0, 1);
			uParam0->f_5 = -1050255868;
			uParam0->f_11 = { 1251.465f, 344.8225f, 92.1045f };
			break;
		case 9:
			func_193(uParam0, 1);
			uParam0->f_5 = -1406848126;
			uParam0->f_11 = { 913.0093f, 113.5476f, 116.3f };
			break;
	}
}

void func_93(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 11;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1848813677;
	func_191(uParam0);
	if (iParam1 > 5)
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 9;
	}
	else
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_27 = 18;
	}
	switch (iParam1)
	{
		case 0:
			func_193(uParam0, 0);
			uParam0->f_5 = -1741150966;
			uParam0->f_11 = { -1352.639f, -2550.378f, 74.9777f };
			break;
		case 1:
			func_193(uParam0, 0);
			uParam0->f_5 = -796584541;
			uParam0->f_11 = { -1913.631f, -2213.565f, 42.0518f };
			break;
		case 2:
			func_193(uParam0, 0);
			uParam0->f_5 = 80182823;
			uParam0->f_11 = { -1745.884f, -2388.807f, 42.8205f };
			break;
		case 3:
			func_193(uParam0, 1);
			uParam0->f_5 = 1964620432;
			uParam0->f_11 = { -1593.106f, -2351.92f, 43.0229f };
			break;
		case 4:
			func_193(uParam0, 1);
			uParam0->f_5 = 1731665611;
			uParam0->f_11 = { -1800.651f, -1644.944f, 96.7288f };
			break;
		case 5:
			func_193(uParam0, 1);
			uParam0->f_5 = -1728544175;
			uParam0->f_11 = { -1628.216f, -1943.554f, 50.1671f };
			break;
		case 6:
			func_193(uParam0, 2);
			uParam0->f_5 = -1242537170;
			uParam0->f_11 = { 2443.712f, -19.2163f, 43.2151f };
			break;
		case 7:
			func_193(uParam0, 2);
			uParam0->f_5 = 2036591126;
			uParam0->f_11 = { 2715.91f, -128.7452f, 42.0147f };
			break;
		case 8:
			func_193(uParam0, 2);
			uParam0->f_5 = 197299925;
			uParam0->f_11 = { 2363.777f, 13.1458f, 41.3272f };
			break;
		case 9:
			func_193(uParam0, 2);
			uParam0->f_5 = 1291850063;
			uParam0->f_11 = { 2355.338f, -247.3491f, 41.5576f };
			break;
		case 10:
			func_193(uParam0, 2);
			uParam0->f_5 = 1599124976;
			uParam0->f_11 = { 2601.386f, -212.5256f, 43.7812f };
			break;
	}
}

void func_94(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 20;
	uParam0->f_1 = 4;
	uParam0->f_2 = 2;
	uParam0->f_28[0] = 458679075;
	switch (iParam1)
	{
		case 0:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 980541174;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
		case 1:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 1220770713;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
		case 2:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 1322813407;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
		case 3:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 1552098100;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
		case 4:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 1916358304;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
		case 5:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -1363212564;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5896.217f, -3811.854f, -31.2514f };
			break;
		case 6:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 686685000;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6360.188f, -3401.399f, -14.7027f };
			break;
		case 7:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -1524698208;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6241.614f, -3430.465f, 1.465f };
			break;
		case 8:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -1804348854;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6091.54f, -3398.527f, 17.9157f };
			break;
		case 9:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -2035403073;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6054.187f, -3594.051f, -4.8637f };
			break;
		case 10:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 728964560;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5609.956f, -3781.126f, -24.15435f };
			break;
		case 11:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 765075998;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5664.643f, -3561.726f, -24.1565f };
			break;
		case 12:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 1070974613;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5811.027f, -3789.534f, -27.8079f };
			break;
		case 13:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -1088797396;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5906.508f, -3520.436f, -24.1555f };
			break;
		case 14:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -740987230;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5753.862f, -3302.776f, -24.1569f };
			break;
		case 15:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 2110034336;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -937.2829f, -1900.071f, 50.81326f };
			break;
		case 16:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -783796062;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -1060.57f, -1731.06f, 75.49813f };
			break;
		case 17:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -545106666;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1052.66f, -1784.942f, 62.46124f };
			break;
		case 18:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 379536207;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			break;
		case 19:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -992108595;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1331.61f, -1892.678f, 60.4174f };
			break;
	}
}

void func_95(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 15;
	uParam0->f_1 = 5;
	uParam0->f_2 = 2;
	uParam0->f_28[0] = 78935770;
	switch (iParam1)
	{
		case 0:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 1750035473;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1486.613f, -2140.134f, 47.13319f };
			break;
		case 1:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -1499633496;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1400.093f, -2166.322f, 47.3376f };
			break;
		case 2:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 2019068959;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1229.798f, -2101.002f, 57.1906f };
			break;
		case 3:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 1010504677;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1036.581f, -2147.274f, 43.912f };
			break;
		case 4:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 1297331734;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1190.843f, -2218.737f, 57.2836f };
			break;
		case 5:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 980309385;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
		case 6:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 1451396569;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 1632.416f, -616.6262f, 42.8678f };
			break;
		case 7:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -1404978858;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2127.624f, -907.4355f, 40.6492f };
			break;
		case 8:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -1173302028;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2023.697f, -1017.159f, 42.3998f };
			break;
		case 9:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 2143543387;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
		case 10:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 1187325752;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2183.54f, -213.3573f, 45.5331f };
			break;
		case 11:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 201273773;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 2185.672f, -43.506f, 52.2188f };
			break;
		case 12:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 36249089;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
		case 13:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -1717449488;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 1832.42f, -317.352f, 45.708f };
			break;
		case 14:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -2014041707;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 1876.532f, -453.5455f, 43.2695f };
			break;
	}
}

void func_96(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 29257535;
	func_191(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_20[1] = -2117802919;
		uParam0->f_27 = 0;
	}
	else
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 9;
	}
	switch (iParam1)
	{
		case 0:
			func_193(uParam0, 3);
			func_193(uParam0, 4);
			func_193(uParam0, 5);
			uParam0->f_5 = -813726569;
			uParam0->f_11 = { -2685.817f, -2697.83f, 71.8905f };
			break;
		case 1:
			func_193(uParam0, 3);
			func_193(uParam0, 4);
			func_193(uParam0, 5);
			uParam0->f_5 = -991070207;
			uParam0->f_11 = { -2841.472f, -2845.188f, 86.3463f };
			break;
		case 2:
			func_193(uParam0, 3);
			func_193(uParam0, 4);
			func_193(uParam0, 5);
			uParam0->f_5 = 1385332783;
			uParam0->f_11 = { -3043.896f, -2154.732f, 59.9256f };
			break;
		case 3:
			func_193(uParam0, 3);
			func_193(uParam0, 4);
			func_193(uParam0, 5);
			uParam0->f_5 = 1394180521;
			uParam0->f_11 = { -2653.586f, -2143.511f, 75.962f };
			break;
		case 4:
			func_193(uParam0, 3);
			func_193(uParam0, 4);
			func_193(uParam0, 5);
			uParam0->f_5 = -1581141590;
			uParam0->f_11 = { -3228.791f, -2434.523f, 26.6737f };
			break;
		case 5:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			uParam0->f_5 = 1300807189;
			uParam0->f_11 = { -1177.594f, -748.8547f, 67.811f };
			break;
		case 6:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			uParam0->f_5 = -1226288496;
			uParam0->f_11 = { -1735.686f, -628.3361f, 145.1246f };
			break;
		case 7:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			uParam0->f_5 = -566411244;
			uParam0->f_11 = { -1572.939f, -328.771f, 160.6099f };
			break;
		case 8:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			uParam0->f_5 = 1931184426;
			uParam0->f_11 = { -1463.646f, -481.3466f, 129.9887f };
			break;
		case 9:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			uParam0->f_5 = 432310963;
			uParam0->f_11 = { -1525.983f, -916.2361f, 88.1698f };
			break;
	}
}

void func_97(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 20;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -463663296;
	if (iParam1 < 10)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 57;
	}
	else
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 57;
	}
	switch (iParam1)
	{
		case 0:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 439376203;
			uParam0->f_11 = { 1200.338f, -568.1477f, 67.3878f };
			break;
		case 1:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -862568936;
			uParam0->f_11 = { 1238.102f, -546.7609f, 66.5485f };
			break;
		case 2:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1361247578;
			uParam0->f_11 = { 1294.011f, -627.1522f, 58.9807f };
			break;
		case 3:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -518330591;
			uParam0->f_11 = { 1330.112f, -709.0779f, 64.7788f };
			break;
		case 4:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 1666706329;
			uParam0->f_11 = { 1174.01f, -520.5736f, 69.0551f };
			break;
		case 5:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 618479763;
			uParam0->f_11 = { 627.306f, -1038.205f, 42.0511f };
			break;
		case 6:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 916579356;
			uParam0->f_11 = { 675.5718f, -1121.435f, 50.7543f };
			break;
		case 7:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1544831314;
			uParam0->f_11 = { 799.3545f, -1190.935f, 42.9927f };
			break;
		case 8:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1524645610;
			uParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
		case 9:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 5765001;
			uParam0->f_11 = { 745.8436f, -1119.909f, 55.5229f };
			break;
		case 10:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -147337997;
			uParam0->f_11 = { -963.4839f, 2238.298f, 342.2684f };
			break;
		case 11:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 46195721;
			uParam0->f_11 = { -1100.64f, 2080.921f, 365.7759f };
			break;
		case 12:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -41952889;
			uParam0->f_11 = { -1209.432f, 2421.632f, 309.8767f };
			break;
		case 13:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -280740592;
			uParam0->f_11 = { -1280.937f, 2445.134f, 305.019f };
			break;
		case 14:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -636874084;
			uParam0->f_11 = { -1340.472f, 2298.734f, 308.7317f };
			break;
		case 15:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1240479072;
			uParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
		case 16:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1479922155;
			uParam0->f_11 = { -1329.47f, 2266.865f, 309.1315f };
			break;
		case 17:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1836252261;
			uParam0->f_11 = { -1202.59f, 2191.101f, 333.5445f };
			break;
		case 18:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -2075236578;
			uParam0->f_11 = { -1171.686f, 2299.184f, 323.3623f };
			break;
		case 19:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 1074322888;
			uParam0->f_11 = { -1394.394f, 2394.838f, 308.3089f };
			break;
	}
}

void func_98(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -2109368060;
	func_191(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = 1417207314;
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_27 = 0;
	}
	switch (iParam1)
	{
		case 0:
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			uParam0->f_5 = 1070019252;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 1:
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			uParam0->f_5 = -510012600;
			uParam0->f_11 = { 2808.358f, 2290.307f, 155.8015f };
			break;
		case 2:
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			uParam0->f_5 = -250768090;
			uParam0->f_11 = { 2324.25f, 2143.964f, 211.2929f };
			break;
		case 3:
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			uParam0->f_5 = 1057891329;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 4:
			func_193(uParam0, 2);
			func_193(uParam0, 3);
			uParam0->f_5 = 863129034;
			uParam0->f_11 = { 2489.669f, 2265.437f, 175.6015f };
			break;
		case 5:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			uParam0->f_5 = -1100103111;
			uParam0->f_11 = { -957.019f, 1550.161f, 237.4414f };
			break;
		case 6:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			uParam0->f_5 = -383805560;
			uParam0->f_11 = { -1023.774f, 1561.614f, 237.4295f };
			break;
		case 7:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			uParam0->f_5 = -233104073;
			uParam0->f_11 = { -986.7993f, 1636.296f, 237.4295f };
			break;
		case 8:
			func_193(uParam0, 1);
			uParam0->f_5 = -604353467;
			uParam0->f_11 = { -874.8361f, 1499.423f, 245.7041f };
			break;
		case 9:
			func_193(uParam0, 1);
			uParam0->f_5 = 1641665016;
			uParam0->f_11 = { -919.2281f, 1482.48f, 245.1043f };
			break;
	}
}

void func_99(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 25;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -646307557;
	if (iParam1 < 10)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = 1417207314;
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = 1417207314;
		uParam0->f_27 = 57;
	}
	switch (iParam1)
	{
		case 0:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -1895828765;
			uParam0->f_11 = { 1649.598f, 1335.141f, 144.8913f };
			break;
		case 1:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 1786489311;
			uParam0->f_11 = { 1711.248f, 1464.318f, 146.3869f };
			break;
		case 2:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 1548029298;
			uParam0->f_11 = { 1569.279f, 1372.517f, 145.0414f };
			break;
		case 3:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -718766281;
			uParam0->f_11 = { 1427.097f, 1701.411f, 197.8922f };
			break;
		case 4:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -1212595111;
			uParam0->f_11 = { 1593.958f, 1646.358f, 143.5214f };
			break;
		case 5:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -1283376151;
			uParam0->f_11 = { 1694.973f, 1740.234f, 188.4962f };
			break;
		case 6:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -1525768444;
			uParam0->f_11 = { 1487.993f, 1066.912f, 182.3846f };
			break;
		case 7:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 249590434;
			uParam0->f_11 = { 1401.922f, 1325.553f, 163.9692f };
			break;
		case 8:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 9885199;
			uParam0->f_11 = { 1812.587f, 1193.924f, 215.9388f };
			break;
		case 9:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 1343123829;
			uParam0->f_11 = { 1940.486f, 1389.066f, 177.8712f };
			break;
		case 10:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -2039750752;
			uParam0->f_11 = { 127.6135f, 1824.788f, 199.2989f };
			break;
		case 11:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -2028740368;
			uParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
		case 12:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 1508771493;
			uParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
		case 13:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 1820404683;
			uParam0->f_11 = { 185.3962f, 1824.202f, 200.2588f };
			break;
		case 14:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 1332736425;
			uParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
		case 15:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 536875722;
			uParam0->f_11 = { 239.17f, 1914.014f, 204.8216f };
			break;
		case 16:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 795259287;
			uParam0->f_11 = { 512.8569f, 1926.074f, 199.1983f };
			break;
		case 17:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 20501824;
			uParam0->f_11 = { 325.2433f, 1902.083f, 200.069f };
			break;
		case 18:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 320272636;
			uParam0->f_11 = { 360.4333f, 1843.854f, 185.1447f };
			break;
		case 19:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 1135434088;
			uParam0->f_11 = { 506.2105f, 1883.957f, 201.9437f };
			break;
		case 20:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 1976647087;
			uParam0->f_11 = { 253.8551f, 1705.438f, 187.3591f };
			break;
		case 21:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -2028969939;
			uParam0->f_11 = { 320.4962f, 1736.16f, 192.2878f };
			break;
		case 22:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 2065778767;
			uParam0->f_11 = { -29.8717f, 1716.412f, 179.3378f };
			break;
		case 23:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -1385354006;
			uParam0->f_11 = { -20.6945f, 1632.488f, 162.0277f };
			break;
		case 24:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -1602546938;
			uParam0->f_11 = { 480.1275f, 2070.224f, 235.143f };
			break;
	}
}

void func_100(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 3;
	uParam0->f_2 = 2;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -196458416;
	bVar0 = iParam1 >= 5;
	if (!bVar0)
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_27 = 1;
	}
	else
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 1;
	}
	func_207(uParam0, iParam1, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -1725684832;
			uParam0->f_11 = { 261.4861f, -558.9222f, 61.15959f };
			break;
		case 1:
			uParam0->f_5 = -1992129571;
			uParam0->f_11 = { 477.293f, -270.4016f, 143.0532f };
			break;
		case 2:
			uParam0->f_5 = 2064181094;
			uParam0->f_11 = { 178.3377f, -192.7462f, 126.5609f };
			break;
		case 3:
			uParam0->f_5 = 1983503816;
			uParam0->f_11 = { -138.1221f, -21.41103f, 95.08842f };
			break;
		case 4:
			uParam0->f_5 = 1603580030;
			uParam0->f_11 = { 788.4693f, -359.1041f, 88.02867f };
			break;
		case 5:
			uParam0->f_5 = 1591141935;
			uParam0->f_11 = { -2105.914f, -1658.808f, 139.2303f };
			break;
		case 6:
			uParam0->f_5 = 1382010177;
			uParam0->f_11 = { -2322.846f, -1606.925f, 147.5517f };
			break;
		case 7:
			uParam0->f_5 = -1315566672;
			uParam0->f_11 = { -2327.094f, -1401.05f, 142.4195f };
			break;
		case 8:
			uParam0->f_5 = 395106204;
			uParam0->f_11 = { -2004.499f, -1326.471f, 115.4162f };
			break;
		case 9:
			uParam0->f_5 = 88814361;
			uParam0->f_11 = { -2532.945f, -1409.852f, 145.3983f };
			break;
	}
}

void func_101(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 3;
	uParam0->f_2 = 2;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = 970130440;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_20[1] = 1985854092;
		uParam0->f_27 = 57;
	}
	else
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_20[1] = -2117802919;
		uParam0->f_27 = 57;
	}
	func_208(uParam0, iParam1, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -44146172;
			uParam0->f_11 = { -4886.723f, -3659.611f, 23.51921f };
			break;
		case 1:
			uParam0->f_5 = -1882192159;
			uParam0->f_11 = { -3706.045f, -3561.407f, 47.211f };
			break;
		case 2:
			uParam0->f_5 = -1446495535;
			uParam0->f_11 = { -3997.887f, -3743.7f, 39.394f };
			break;
		case 3:
			uParam0->f_5 = -1153835596;
			uParam0->f_11 = { -4533.075f, -3761.288f, 13.8127f };
			break;
		case 4:
			uParam0->f_5 = 345870470;
			uParam0->f_11 = { -4165.463f, -3614.162f, 49.5309f };
			break;
		case 5:
			uParam0->f_5 = -1885586340;
			uParam0->f_11 = { 1612.212f, 2114.094f, 315.281f };
			break;
		case 6:
			uParam0->f_5 = 1366147128;
			uParam0->f_11 = { 1879.319f, 2050.416f, 269.9333f };
			break;
		case 7:
			uParam0->f_5 = 1740369108;
			uParam0->f_11 = { 1522.469f, 2192.855f, 333.81f };
			break;
		case 8:
			uParam0->f_5 = -416486532;
			uParam0->f_11 = { 693.7542f, 2222.729f, 222.769f };
			break;
		case 9:
			uParam0->f_5 = -1184690199;
			uParam0->f_11 = { 756.6907f, 2034.318f, 266.4209f };
			break;
	}
}

void func_102(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -405566878;
	func_191(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_27 = 24;
		uParam0->f_20[0] = -184283233;
	}
	else
	{
		uParam0->f_27 = 24;
		uParam0->f_20[0] = 48904803;
		uParam0->f_20[1] = -2090512547;
	}
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -145880949;
			uParam0->f_11 = { 451.6826f, 1053.771f, 197.3474f };
			func_193(uParam0, 0);
			break;
		case 1:
			uParam0->f_5 = 1765108824;
			uParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_193(uParam0, 0);
			break;
		case 2:
			uParam0->f_5 = 1620892455;
			uParam0->f_11 = { -142.6579f, 1231.128f, 164.5134f };
			func_193(uParam0, 0);
			break;
		case 3:
			uParam0->f_5 = 1380531840;
			uParam0->f_11 = { 411.3364f, 1329.074f, 180.39f };
			func_193(uParam0, 0);
			break;
		case 4:
			uParam0->f_5 = -1542790654;
			uParam0->f_11 = { 473.7581f, 1011.376f, 173.0766f };
			func_193(uParam0, 0);
			break;
		case 5:
			uParam0->f_5 = -1733556405;
			uParam0->f_11 = { -4209.333f, -2677.593f, 5.4303f };
			func_193(uParam0, 1);
			break;
		case 6:
			uParam0->f_5 = -478503693;
			uParam0->f_11 = { -4260.617f, -2412.103f, 23.6335f };
			func_193(uParam0, 1);
			break;
		case 7:
			uParam0->f_5 = -156122271;
			uParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_193(uParam0, 1);
			break;
		case 8:
			uParam0->f_5 = 1073468916;
			uParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_193(uParam0, 1);
			break;
		case 9:
			uParam0->f_5 = -249481152;
			uParam0->f_11 = { -4104.459f, -2061.22f, 4.8147f };
			func_193(uParam0, 1);
			break;
	}
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_191(uParam0);
	switch (iParam1)
	{
		case 0:
			func_192(uParam0);
			uParam0->f_5 = -206668292;
			uParam0->f_11 = { -2586.923f, -264.5349f, 161.6671f };
			break;
		case 1:
			func_192(uParam0);
			uParam0->f_5 = -2125063863;
			uParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
		case 2:
			func_192(uParam0);
			uParam0->f_5 = -2012469579;
			uParam0->f_11 = { -2196.576f, 468.8412f, 119.5676f };
			break;
		case 3:
			func_192(uParam0);
			uParam0->f_5 = 108841496;
			uParam0->f_11 = { -1637.2f, -1513.234f, 82.6688f };
			break;
		case 4:
			func_192(uParam0);
			uParam0->f_5 = 415657643;
			uParam0->f_11 = { -825.3087f, -1804.951f, 59.0313f };
			break;
		case 5:
			func_192(uParam0);
			uParam0->f_5 = 1133170861;
			uParam0->f_11 = { 1786.915f, 1588.926f, 167.4663f };
			break;
		case 6:
			func_192(uParam0);
			uParam0->f_5 = 2120009296;
			uParam0->f_11 = { 1959.894f, 1387.251f, 179.786f };
			break;
		case 7:
			func_192(uParam0);
			uParam0->f_5 = 689773522;
			uParam0->f_11 = { 637.5925f, 2099.455f, 222.0308f };
			break;
		case 8:
			func_192(uParam0);
			uParam0->f_5 = -258135345;
			uParam0->f_11 = { 1296.321f, 1161.685f, 150.1379f };
			break;
		case 9:
			func_192(uParam0);
			uParam0->f_5 = 2107537913;
			uParam0->f_11 = { -2100.247f, -1372.887f, 127.7423f };
			break;
		case 10:
			func_192(uParam0);
			uParam0->f_5 = -1477292384;
			uParam0->f_11 = { -2205.016f, -1584.145f, 148.3944f };
			break;
	}
}

void func_104(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_191(uParam0);
	switch (iParam1)
	{
		case 0:
			func_192(uParam0);
			uParam0->f_5 = -274965770;
			uParam0->f_11 = { -1109.718f, 2104.703f, 361.4368f };
			break;
		case 1:
			func_192(uParam0);
			uParam0->f_5 = 1652259747;
			uParam0->f_11 = { -4300.761f, -3445.602f, 33.26603f };
			break;
		case 2:
			func_192(uParam0);
			uParam0->f_5 = -743720569;
			uParam0->f_11 = { -3895.461f, -2492.511f, -11.57848f };
			break;
		case 3:
			func_192(uParam0);
			uParam0->f_5 = -1200331578;
			uParam0->f_11 = { -2190.508f, -2867.223f, 25.40727f };
			break;
		case 4:
			func_192(uParam0);
			uParam0->f_5 = -1026512984;
			uParam0->f_11 = { -2083.893f, -1412.552f, 131.8581f };
			break;
		case 5:
			func_192(uParam0);
			uParam0->f_5 = -1017773316;
			uParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
		case 6:
			func_192(uParam0);
			uParam0->f_5 = 303940131;
			uParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
		case 7:
			func_192(uParam0);
			uParam0->f_5 = 1273284251;
			uParam0->f_11 = { 1548.084f, 1355.097f, 146.0557f };
			break;
		case 8:
			func_192(uParam0);
			uParam0->f_5 = -950817569;
			uParam0->f_11 = { 2652.989f, 1189.503f, 118.7033f };
			break;
		case 9:
			func_192(uParam0);
			uParam0->f_5 = -910888222;
			uParam0->f_11 = { 1509.102f, -2101.449f, 45.3134f };
			break;
	}
}

void func_105(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 7;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_191(uParam0);
	switch (iParam1)
	{
		case 0:
			func_192(uParam0);
			uParam0->f_5 = -803667719;
			uParam0->f_11 = { -1499.397f, -553.9472f, 131.8198f };
			break;
		case 1:
			func_192(uParam0);
			uParam0->f_5 = -822411587;
			uParam0->f_11 = { -1760.55f, 268.6243f, 118.6948f };
			break;
		case 2:
			func_192(uParam0);
			uParam0->f_5 = -1331314157;
			uParam0->f_11 = { -2762.128f, -158.0485f, 150.8974f };
			break;
		case 3:
			func_192(uParam0);
			uParam0->f_5 = -1580456864;
			uParam0->f_11 = { -719.5702f, -756.9052f, 49.81378f };
			break;
		case 4:
			func_193(uParam0, 0);
			func_193(uParam0, 2);
			uParam0->f_5 = -102469545;
			uParam0->f_11 = { 951.5258f, -1248.371f, 53.86922f };
			break;
		case 5:
			func_193(uParam0, 0);
			func_193(uParam0, 2);
			uParam0->f_5 = 70321392;
			uParam0->f_11 = { 1088.291f, -1418.599f, 55.54557f };
			break;
		case 6:
			func_193(uParam0, 0);
			func_193(uParam0, 2);
			uParam0->f_5 = 529087392;
			uParam0->f_11 = { 1289.693f, -1603.704f, 64.23989f };
			break;
	}
}

void func_106(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 8;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -418287183;
			uParam0->f_11 = { -2081.231f, -2774.597f, 77.5683f };
			break;
		case 1:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -1127015115;
			uParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
		case 2:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -1853700459;
			uParam0->f_11 = { -2925.017f, -2769.882f, 95.6414f };
			break;
		case 3:
			func_209(uParam0, iParam1);
			uParam0->f_5 = 529883832;
			uParam0->f_11 = { -2648.38f, -2977.772f, 76.4237f };
			break;
		case 4:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -204230900;
			uParam0->f_11 = { -2323.921f, -2074.845f, 88.1254f };
			break;
		case 5:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -1938530367;
			uParam0->f_11 = { -3455.578f, -2264.7f, 4.7142f };
			break;
		case 6:
			func_209(uParam0, iParam1);
			uParam0->f_5 = 1968802033;
			uParam0->f_11 = { -3581.218f, -3650.89f, -12.8679f };
			break;
		case 7:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -2098551789;
			uParam0->f_11 = { -5254.539f, -4050.37f, -3.6288f };
			break;
	}
}

void func_107(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 35:
			uParam0->f_8 = -468635158;
			break;
		case 36:
			uParam0->f_8 = 1112069699;
			break;
		case 37:
			uParam0->f_8 = 661147828;
			break;
		case 38:
			uParam0->f_8 = 899082205;
			break;
		case 39:
			uParam0->f_8 = 987333815;
			break;
		case 40:
			uParam0->f_8 = -315961129;
			break;
		case 41:
			uParam0->f_8 = -139081918;
			break;
		case 42:
			uParam0->f_8 = 1604238189;
			break;
		case 43:
			uParam0->f_8 = 362795228;
			break;
	}
	iVar0 = func_210(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if ((iParam1 == 41 || iParam1 == 42) || iParam1 == 40)
	{
		uParam0->f_7 = 1;
	}
	else if (iParam1 == 43)
	{
		uParam0->f_7 = 2;
	}
	*uParam0 = func_211(iVar0);
	uParam0->f_1 = 0;
	uParam0->f_6 = 2;
	func_195(uParam0, 32);
	if (iParam2 != -1)
	{
		uParam0->f_9 = func_213(func_212(iVar0), iParam2);
		uParam0->f_15[0] = func_214(func_212(iVar0), iParam2);
		uParam0->f_5 = func_215(iVar0, iParam2);
		uParam0->f_11 = { func_216(iVar0, iParam2) };
	}
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1071686->f_636.f_601;
		case 3:
			return Global_1071686->f_636.f_2103;
		case 4:
			return Global_1071686->f_636.f_12605;
		case 5:
			return Global_1071686->f_636.f_12907;
		case 6:
			return Global_1071686->f_636.f_15909;
		case 7:
			return Global_1071686->f_636.f_16511;
		case 8:
			return Global_1071686->f_636.f_18913;
		default:
			break;
	}
	return -1;
}

int func_109(int iParam0, var uParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (uParam1[iVar2] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (uParam1[iVar2] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

struct<2> func_110()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_111()
{
	reserve_network_mission_peds(11);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 11)
		{
			Local_59[iVar1]->f_7.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_112()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			if (func_178(iVar1, iVar2))
			{
				Jump @49; //curOff = 37
			}
			else
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	reserve_network_mission_objects(iVar0);
}

void func_113()
{
}

void func_114()
{
	if (func_119() != 3)
	{
		func_217(0, 90264823);
		if (func_119() == 2)
		{
			func_220(0, func_218(), func_219(), 1);
		}
		else
		{
			func_220(0, func_221(), func_219(), 1);
		}
	}
	func_217(1, -1433814131);
	if (func_222() == 0)
	{
		func_223(1, 2096045552);
	}
	else
	{
		func_223(1, -835665806);
	}
	if (func_119() == 3)
	{
		func_220(1, func_221(), func_219(), 1);
	}
	switch (func_119())
	{
		case 0:
			func_220(1, func_224(), func_225(), 1);
			func_226(4);
			func_217(7, 1458540991);
			func_223(7, 1939496279);
			func_220(7, func_227(), func_228(), 1);
			func_217(2, 90264823);
			func_220(2, func_229(), func_230(), 1);
			break;
		case 1:
			if (func_120() == 5)
			{
				func_231(1);
			}
			else
			{
				func_220(1, func_224(), func_225(), 1);
				func_226(4);
			}
			func_217(8, -1160158290);
			func_220(8, func_227(), func_228(), 1);
			break;
		case 2:
			func_231(1);
			func_217(9, -2105110696);
			switch (func_120())
			{
				case 10:
					func_223(9, 569640886);
					break;
				case 11:
					func_223(9, 1780455436);
					break;
				case 12:
					func_223(9, 2095136143);
					break;
				case 13:
					func_223(9, -1994959365);
					break;
				case 14:
					func_223(9, -1697351307);
					break;
			}
			func_220(9, func_227(), func_228(), 1);
			break;
	}
}

void func_115()
{
}

void func_116()
{
	Local_764.f_182.f_7 = get_random_float_in_range(5f, 15f);
	if (func_119() == 1 || func_119() == 2)
	{
		Local_764.f_182.f_8 = get_random_float_in_range(4f, 8f);
	}
	else
	{
		Local_764.f_182.f_8 = get_random_float_in_range(12f, 18f);
		Local_764.f_182.f_9 = get_random_float_in_range(2f, 6f);
	}
}

void func_117(int iParam0)
{
	set_bit(&(Local_764.f_19), iParam0);
}

void func_118()
{
	func_232(&(Local_764.f_127), 1);
	func_233(&(Local_764.f_127), 1);
	func_234(&(Local_764.f_127), 1);
	func_235(&(Local_764.f_127), 0);
	func_236(&(Local_764.f_127), 1);
	func_237(&(Local_764.f_127), 0);
	func_238(&(Local_764.f_127), 0);
	func_239(&(Local_764.f_127), 0);
	func_240(&(Local_764.f_127), 0);
	func_241(&(Local_764.f_127), 6f);
	func_242(&(Local_764.f_127), 1106247680);
	func_243(&(Local_764.f_127), 1);
	func_244(&(Local_764.f_127), 1);
	func_245(&(Local_764.f_127), 1, 1, 1);
	func_246(&(Local_764.f_127), 60);
}

int func_119()
{
	return Local_764.f_3;
}

int func_120()
{
	return func_247();
}

void func_121(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	Local_764.f_25 = 1;
	Local_764.f_25.f_1 = iParam0;
	Local_764.f_25.f_3 = iParam1;
	if (bParam2)
	{
		func_248(&(Local_764.f_25), 1);
	}
	if (fParam3 > 0f)
	{
		Local_764.f_25.f_27 = fParam3;
	}
	if (network_is_host_of_this_script())
	{
		Local_13.f_7 = 1;
		func_249();
	}
}

void func_122()
{
	func_250(1);
	func_248(&(Local_764.f_25), 32);
}

void func_123(int iParam0, float fParam1, float fParam2)
{
	Local_764.f_25 = 1;
	Local_764.f_25.f_1 = iParam0;
	if (fParam1 > 0f)
	{
		Local_764.f_25.f_26 = fParam1;
	}
	if (fParam2 > 0f)
	{
		Local_764.f_25.f_27 = fParam2;
	}
	if (network_is_host_of_this_script())
	{
		Local_13.f_7 = 2;
		func_249();
	}
}

bool func_124(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

bool func_125(var uParam0, int iParam1)
{
	return func_251(uParam0->f_25, iParam1);
}

void func_126(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

int func_127(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

void func_128(int iParam0)
{
	if (!func_136(iParam0))
	{
		func_252(&(Local_13.f_1), iParam0);
	}
}

bool func_129(int iParam0)
{
	if (!func_187(iParam0))
	{
		return false;
	}
	return (func_253(iParam0) && (*Global_1131196)[iParam0]->f_18.f_1 != 0);
}

void func_130(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

bool func_131(struct<31> Param0, var uParam31)
{
	if (_0xf6a8a652a6b186cd(Local_13.f_3.f_1))
	{
		return true;
	}
	if (func_254(Local_764.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!_0xa4a4359320345b34(Local_13.f_3))
	{
		if (_0x397769175a7dbb30(Local_764.f_15, Param0.f_10, 0, 0, 0))
		{
			_0xfa15c9a320e707b0();
			*uParam31 = 1;
			return false;
		}
		func_255(&uVar1, Param0);
		Local_13.f_3 = _0x183c0b6cfeffcae4(&uVar1);
		func_152(128);
	}
	else if (!func_135(128, 255))
	{
		Local_13.f_3.f_1 = func_256(Param0);
		if (_0xf6a8a652a6b186cd(Local_13.f_3.f_1))
		{
			return true;
		}
		return false;
	}
	iVar0 = _0xb33a604345f58202(Local_13.f_3);
	switch (iVar0)
	{
		case 3:
			Local_13.f_3.f_1 = _0x351d71b8b72b858b(Local_13.f_3);
			return true;
		case 4:
			Local_13.f_3 = 0;
			return false;
		default:
			break;
	}
	return false;
}

bool func_132(int iParam0)
{
	return iParam0 != 0;
}

void func_133(var uParam0)
{
	*uParam0 = Global_1296859->f_21;
}

int func_134(int iParam0)
{
	return (Global_1296859->f_21 - iParam0) * 1000;
}

bool func_135(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_257(&iParam1))
		{
			return false;
		}
	}
	return func_186(&(Local_59[iParam1]), iParam0);
}

bool func_136(int iParam0)
{
	return func_186(Local_13.f_1, iParam0);
}

bool func_137()
{
	return true;
}

void func_138()
{
}

bool func_139()
{
	if (func_119() == 2)
	{
		Local_764.f_182.f_56 = _create_propset(615791785, func_258(), 0, func_259(), 1200f, true, true);
	}
	return true;
}

bool func_140()
{
	if (!func_260(&bVar0))
	{
		if (bVar0)
		{
			func_261();
		}
		return false;
	}
	if (!func_262(&bVar0))
	{
		if (bVar0)
		{
			func_261();
		}
		return false;
	}
	return true;
}

void func_141()
{
}

void func_142()
{
	if (!func_136(32) && func_263(32))
	{
		func_128(32);
	}
	if (!func_136(64) && func_263(64))
	{
		func_128(64);
	}
	if (!func_136(16) && func_264(16))
	{
		func_128(16);
	}
	if ((!func_136(2048) && func_263(2048)) && !func_263(4096))
	{
		func_128(2048);
	}
}

void func_143()
{
	if (!bVar0 && func_136(16))
	{
		func_130(1);
		return;
	}
	if (func_136(2048) && !func_263(4096))
	{
		func_130(6);
		return;
	}
}

void func_144()
{
	func_265();
}

bool func_145()
{
	if (does_entity_exist(func_266(0)))
	{
		func_267(get_entity_coords(func_266(0), true, false));
	}
	if (func_268())
	{
		return true;
	}
	switch (func_119())
	{
		case 0:
		case 1:
		case 2:
			switch (func_269())
			{
				case 0:
					func_270();
					break;
				case 1:
					func_271();
					break;
				case 2:
					func_272();
					break;
				case 3:
					func_273();
					break;
				case 4:
					func_274();
					break;
			}
			break;
	}
	return false;
}

void func_146()
{
}

bool func_147()
{
	return true;
}

void func_148(int iParam0)
{
	if (func_67(iParam0))
	{
		func_275(&(Local_764.f_7), iParam0);
	}
}

int func_149(int iParam0, int iParam1, bool bParam2)
{
	if (!func_187(iParam0))
	{
		return 0;
	}
	iVar0 = func_276(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = player_id();
	(*Global_1134390)[iVar1]->f_70 = iParam0;
	(*Global_1134390)[iVar1]->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_277(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	else
	{
		func_278(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	return 1;
}

void func_150(int iParam0)
{
	if (!func_67(iParam0))
	{
		func_252(&(Local_764.f_7), iParam0);
	}
}

void func_151(int iParam0)
{
	if (func_186(&(Local_59[participant_id_to_int()]), iParam0))
	{
		func_275(Local_59[participant_id_to_int()], iParam0);
	}
}

void func_152(int iParam0)
{
	if (!func_135(iParam0, 255))
	{
		func_252(Local_59[participant_id_to_int()], iParam0);
	}
}

void func_153()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_279(iVar0);
				break;
			case -1315570756:
				func_280(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		func_281(iVar0);
		iVar0++;
	}
}

void func_154(int iParam0)
{
	if (Local_764.f_8 != iParam0)
	{
		Local_764.f_8 = iParam0;
	}
}

bool func_155()
{
	if (!func_282())
	{
		return false;
	}
	if (func_119() == 1)
	{
		return true;
	}
	if (func_119() == 3)
	{
		return true;
	}
	switch (Local_764.f_182)
	{
		case 0:
			if (func_119() == 2)
			{
				if (!func_283())
				{
					return false;
				}
			}
			else if (!func_285(&(Local_13.f_24.f_2), &(Local_764.f_182.f_5), func_284(), "pbl_action", 0))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_156()
{
	bVar0 = false;
	if (!func_286())
	{
		bVar0 = true;
	}
	if (!func_287())
	{
		bVar0 = true;
	}
	if (Local_764.f_25 && !func_288(&(Local_13.f_7), &(Local_764.f_25)))
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_157(var uParam0)
{
	*uParam0 = 0;
}

void func_158()
{
}

int func_159()
{
	return 1;
}

int func_160()
{
	if (!func_289())
	{
		if (bVar0)
		{
		}
		return 0;
	}
	return 1;
}

int func_161(int iParam0)
{
	return (iParam0 - Global_1296859->f_21) * 1000;
}

void func_162()
{
	if (!func_67(1))
	{
		func_290(Local_764.f_9);
		func_150(1);
	}
}

void func_163()
{
	func_291();
	func_292();
}

void func_164()
{
	iVar0 = func_266(0);
	if (does_entity_exist(iVar0))
	{
		if (network_has_control_of_entity(iVar0))
		{
		}
		func_293(0);
		func_294(0);
	}
	iVar1 = func_266(1);
	if (does_entity_exist(iVar1))
	{
		if (network_has_control_of_entity(iVar1))
		{
			set_blocking_of_non_temporary_events(iVar1, true);
			task_stand_still(iVar1, -1);
			if (func_119() != 3)
			{
				_task_start_scenario_in_place(iVar1, -1185186518, 0, false, 0, -1f, false);
				func_296(iVar1, func_295(0, 0));
			}
			else
			{
				func_296(iVar1, func_295(1, 0));
			}
			set_animal_tuning_bool_param(iVar1, 95, true);
			set_ped_config_flag(iVar1, 585, true);
			_0xae6004120c18df97(iVar1, 1, 1);
			set_ped_config_flag(iVar1, 297, true);
			_0xae6004120c18df97(iVar1, 10, 1);
			set_ped_path_prefer_to_avoid_water(iVar1, true, 10f);
		}
		func_297(1, 16);
		func_298(iVar1);
	}
	iVar2 = func_266(2);
	if (does_entity_exist(iVar2))
	{
		if (network_has_control_of_entity(iVar2))
		{
			set_blocking_of_non_temporary_events(iVar2, true);
			_task_start_scenario_in_place(iVar2, -1185186518, 0, false, 0, -1f, false);
			set_ped_config_flag(iVar2, 306, true);
			set_ped_config_flag(iVar2, 465, true);
			set_ped_hearing_range(iVar2, 20f);
		}
		func_293(2);
		func_294(2);
	}
	iVar3 = func_266(3);
	if (does_entity_exist(iVar3))
	{
		if (network_has_control_of_entity(iVar3))
		{
			set_blocking_of_non_temporary_events(iVar3, true);
			task_stand_still(iVar3, -1);
		}
		func_293(3);
	}
	iVar4 = func_266(7);
	if (does_entity_exist(iVar4))
	{
		if (network_has_control_of_entity(iVar4))
		{
			set_blocking_of_non_temporary_events(iVar4, true);
			task_stand_still(iVar4, -1);
		}
		func_293(7);
	}
	if (func_119() == 0)
	{
	}
	if (func_119() == 1)
	{
		iVar5 = func_266(8);
		if (does_entity_exist(iVar5))
		{
			if (network_has_control_of_entity(iVar5))
			{
				set_blocking_of_non_temporary_events(iVar5, true);
				func_299(iVar5, -618550132, 0, 0, 4, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_299(iVar5, 970310034, 1, 1, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				vVar6 = { func_221() };
				vVar6.x = (vVar6.x + get_random_float_in_range(5f, 10f));
				vVar6.f_1 = (vVar6.y + get_random_float_in_range(10f, 20f));
				task_aim_at_coord(iVar5, vVar6, -1, 1, 0);
			}
			func_293(8);
		}
	}
	if (func_119() == 2)
	{
		iVar9 = func_266(9);
		set_ped_config_flag(iVar9, 169, true);
		set_ped_config_flag(iVar9, 170, true);
		set_ped_config_flag(iVar9, 137, true);
		set_ped_config_flag(iVar9, 6, true);
		set_ped_config_flag(iVar9, 278, true);
		set_ped_config_flag(iVar9, 364, true);
		set_ped_config_flag(iVar9, 297, true);
		set_ped_config_flag(iVar9, 509, true);
		set_ped_can_ragdoll_from_player_impact(iVar9, false);
		set_blocking_of_non_temporary_events(iVar9, true);
		set_ped_can_be_targetted(iVar9, false);
		_0x18ff3110cf47115d(iVar9, 7, 0);
		_0xae6004120c18df97(iVar9, 0, 0);
		_0xae6004120c18df97(iVar9, 1, 0);
		_0x6569f31a01b4c097(iVar9, 1, 0);
		_0x6569f31a01b4c097(iVar9, 0, 0);
		func_300(iVar9, 1, 1);
		_0x6bcf5f3d8ffe988d(iVar9, 1);
		apply_ped_damage_pack(iVar9, "PD_Animal_attack_body_back_Enemy", 0f, 1f);
		_0x9587913b9e772d29(iVar9, 0);
		Local_764.f_182.f_57 = _create_volume_sphere(func_301(), 0f, 0f, 0f, 1.5f, 1.5f, 1.5f);
		_0x19c7567d2f2287d6(Local_764.f_182.f_57, 7);
	}
	func_302(200f);
	func_303(35f, 75f, 1, 1077936128, 0);
	func_304(1065353216, 5f);
	func_305(-432403087, func_221(), 0f, 0f, 0f, 10f, 10f, 10f);
	func_305(-1612834106, func_221() + Vector(0f, 10f, 10f), 0f, 0f, 0f, 10f, 10f, 10f);
	func_306(func_266(0));
	func_307(&(Local_764.f_53), 1, func_221(), 80f);
	func_308(&(Local_764.f_53), 6);
	func_309(&(Local_764.f_25), func_221(), 50f, 0);
}

void func_165()
{
}

void func_166()
{
}

void func_167()
{
	if (func_254(Local_764.f_15))
	{
		return;
	}
	if (func_310())
	{
		return;
	}
	if (func_311(Local_764.f_1, 600))
	{
		fVar0 = vdist(get_entity_coords(player_ped_id(), false, false), Local_764.f_15);
		if (fVar0 < 200f)
		{
			func_152(4096);
		}
		else if (fVar0 < 400f)
		{
			func_151(4096);
			func_152(2048);
		}
		else
		{
			func_151(4096);
			func_151(2048);
		}
	}
}

void func_168()
{
	func_312();
	func_313();
	func_314();
	func_315();
	func_316();
}

void func_169()
{
	if (func_317())
	{
		func_152(8);
	}
	else
	{
		func_151(8);
	}
}

void func_170()
{
	func_318();
	func_319();
	func_320();
	func_321();
	iVar0 = func_266(1);
	func_323(iVar0, func_295(func_322(), 0));
	if (func_324(128))
	{
		func_325(32768);
	}
	if (func_119() == 3)
	{
		return;
	}
	switch (func_119())
	{
		case 0:
		case 1:
		case 2:
			switch (func_326())
			{
				case 0:
					func_327();
					break;
				case 1:
					func_328();
					break;
				case 2:
					func_329();
					break;
				case 3:
					func_330();
					break;
				case 4:
					func_331();
					break;
			}
			break;
	}
}

void func_171()
{
	if (!func_135(8, 255))
	{
		func_152(16);
	}
	else
	{
		func_151(16);
	}
}

void func_172()
{
	Local_764.f_6 = -1;
	Local_764.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_764.f_5 = (Local_764.f_5 || Local_59[iVar0]) // PointerArith;
			Local_764.f_6 = (Local_764.f_6 && Local_59[iVar0]) // PointerArith;
		}
		iVar0++;
	}
}

bool func_173()
{
	clear_sequence_task(&(Local_764.f_182.f_53));
	func_332(&(Local_764.f_25));
	if (does_blip_exist(Local_764.f_182.f_55))
	{
		remove_blip(&(Local_764.f_182.f_55));
	}
	if (_does_propset_exist(Local_764.f_182.f_56))
	{
		_set_propset_as_no_longer_needed(Local_764.f_182.f_56);
	}
	if (_0xde0ea444735c1368(Local_764.f_182.f_57))
	{
		_0x2c87c3e1c7b96ee2(Local_764.f_182.f_57);
	}
	return true;
}

void func_174()
{
}

void func_175(int iParam0)
{
	if (does_blip_exist(Local_764.f_240.f_7[iParam0]->f_1))
	{
		remove_blip(&(Local_764.f_240.f_7[iParam0]->f_1));
	}
}

bool func_176(int iParam0, int iParam1)
{
	return func_186(Local_764.f_240.f_7[iParam0]->f_2, iParam1);
}

bool func_177(int iParam0, int iParam1)
{
	return func_186(Local_764.f_407[iParam0]->f_5[iParam1]->f_1, 1024);
}

bool func_178(int iParam0, int iParam1)
{
	return func_186(Local_764.f_407[iParam0]->f_5[iParam1]->f_1, 8);
}

bool func_179(int iParam0, int iParam1)
{
	return is_bit_set(Local_764.f_407[iParam0]->f_4, iParam1);
}

void func_180(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_181()
{
	if (!func_333())
	{
		return;
	}
	if (func_334(2, -1))
	{
		return;
	}
	if ((does_entity_exist(Local_764.f_53) && is_entity_dead(Local_764.f_53)) || Local_764.f_53.f_2 == 12)
	{
		return;
	}
	if (func_335(16))
	{
		return;
	}
	sVar0 = func_336(Local_764.f_172.f_5, Local_764.f_172.f_6);
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	func_337(sVar0);
}

bool func_182(int iParam0, int iParam1, int iParam2)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	return is_bit_set((*Global_1207784)[iParam1][iParam0], iParam2);
}

void func_183(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_339(func_338(Param0));
	iVar1 = func_340(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_341(Param0, &Var2);
	}
	if (network_is_player_active(iParam4))
	{
		Var2.f_4 = iParam4;
		Var2.f_3 = iParam5;
	}
	else
	{
		Var2.f_4 = 255;
		Var2.f_3 = 0;
	}
	_0xd5910ecf81a2278c(iVar0, iVar1, iParam2, &Var2);
}

void func_184(int iParam0, int iParam1)
{
	iVar0 = func_342(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_343(iVar0);
}

void func_185(int iParam0, int iParam1)
{
	func_133(Global_1272030->f_3271[iParam0]);
	switch (iParam1)
	{
		case 0:
			Global_1272030->f_3275[iParam0] = func_344(iParam0);
			break;
		case 1:
			Global_1272030->f_3275[iParam0] = func_345(iParam0);
			break;
		case 2:
			Global_1272030->f_3275[iParam0] = func_346(iParam0);
			break;
	}
}

bool func_186(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_187(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_188(var uParam0)
{
	if (func_38(*uParam0))
	{
		return true;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return true;
		}
		if (uParam0->f_4 != -1)
		{
			return true;
		}
		if (uParam0->f_5 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_189(var uParam0, int iParam1)
{
	iVar0 = func_347(iParam1);
	iVar1 = ((&Global_1198046->f_3[iParam1] + iVar0) - 1);
	if (&Global_1198046->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_348(iParam1)) - 1);
	}
	bVar2 = func_38(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_21(Global_1198046->f_231[iVar6]->f_5, *uParam0))
			{
				return iVar6;
			}
		}
		if (bVar3)
		{
			if (Global_1198046->f_231[iVar6]->f_5.f_2 == uParam0->f_2 && Global_1198046->f_231[iVar6]->f_5.f_3 == uParam0->f_3)
			{
				return iVar6;
			}
		}
		if (bVar4)
		{
			if (Global_1198046->f_231[iVar6]->f_5.f_2 == uParam0->f_2 && Global_1198046->f_231[iVar6]->f_5.f_4 == uParam0->f_4)
			{
				return iVar6;
			}
		}
		if (bVar5)
		{
			if (Global_1198046->f_231[iVar6]->f_5.f_2 == uParam0->f_2 && Global_1198046->f_231[iVar6]->f_5.f_5 == uParam0->f_5)
			{
				return iVar6;
			}
		}
		iVar6++;
	}
	return -1;
}

void func_190(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_349(uParam0);
			break;
		case 1:
			func_349(uParam0);
			break;
		case 2:
			func_349(uParam0);
			break;
		case 3:
			func_350(uParam0);
			break;
		case 4:
			func_349(uParam0);
			break;
		case 5:
			func_349(uParam0);
			break;
		case 6:
			func_350(uParam0);
			break;
		case 7:
			func_350(uParam0);
			break;
		case 8:
			func_350(uParam0);
			break;
		case 9:
			func_349(uParam0);
			break;
		default:
			func_192(uParam0);
			func_191(uParam0);
			break;
	}
}

void func_191(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_194(uParam0, iVar0);
		iVar0++;
	}
}

void func_192(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_193(uParam0, iVar0);
		iVar0++;
	}
}

void func_193(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_3), iParam1);
}

void func_194(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_4), iParam1);
}

void func_195(var uParam0, int iParam1)
{
	func_277(&(uParam0->f_25), iParam1);
}

void func_196(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_194(uParam0, 0);
			break;
		case 1:
		case 2:
			func_194(uParam0, 1);
			func_194(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_194(uParam0, 0);
			func_194(uParam0, 2);
			break;
		case 8:
			func_194(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_194(uParam0, 1);
			break;
		default:
			func_191(uParam0);
			break;
	}
}

void func_197(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_351(uParam0);
			break;
		case 1:
			func_352(uParam0);
			break;
		case 2:
			func_353(uParam0);
			break;
		case 3:
			func_354(uParam0);
			break;
		default:
			func_192(uParam0);
			func_191(uParam0);
			break;
	}
}

Vector3 func_198(int iParam0)
{
	if (!func_187(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1131196)[iParam0]->f_20;
}

void func_199(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_355(uParam0);
			break;
		case 1:
		case 2:
			func_356(uParam0);
			break;
		case 3:
		case 4:
			func_357(uParam0);
			break;
		default:
			func_191(uParam0);
			break;
	}
	func_192(uParam0);
}

void func_200(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_194(uParam0, 0);
			func_194(uParam0, 2);
			break;
		case 1:
			func_194(uParam0, 1);
			func_194(uParam0, 3);
			break;
		default:
			func_192(uParam0);
			func_191(uParam0);
			break;
	}
}

void func_201(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_193(uParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_193(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_193(uParam0, 0);
			break;
		default:
			func_193(uParam0, 0);
			break;
	}
	func_191(uParam0);
}

void func_202(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_193(uParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_193(uParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_193(uParam0, 2);
			break;
		default:
			func_192(uParam0);
			break;
	}
	func_191(uParam0);
}

void func_203(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_193(uParam0, 0);
			func_194(uParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_193(uParam0, 1);
			func_194(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_193(uParam0, 2);
			func_194(uParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_193(uParam0, 3);
			func_194(uParam0, 0);
			break;
	}
}

void func_204(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_193(uParam0, 0);
			func_194(uParam0, 0);
			break;
		case 2:
			func_193(uParam0, 1);
			func_194(uParam0, 0);
			break;
		case 3:
		case 4:
			func_193(uParam0, 2);
			func_194(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_193(uParam0, 3);
			func_194(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_193(uParam0, 4);
			func_194(uParam0, 1);
			break;
	}
}

void func_205(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_193(uParam0, 3);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			break;
		default:
			func_192(uParam0);
			break;
	}
	func_191(uParam0);
}

void func_206(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_193(uParam0, 3);
			break;
		case 10:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 20:
		case 21:
		case 24:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			break;
		default:
			func_192(uParam0);
			break;
	}
	func_191(uParam0);
}

void func_207(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_194(uParam0, 0);
			func_193(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_194(uParam0, 1);
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			func_193(uParam0, 2);
			break;
		default:
			func_194(uParam0, 0);
			func_193(uParam0, 0);
			break;
	}
}

void func_208(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_194(uParam0, 0);
			func_193(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_194(uParam0, 1);
			func_193(uParam0, 0);
			func_193(uParam0, 1);
			break;
		default:
			func_194(uParam0, 0);
			func_193(uParam0, 0);
			break;
	}
}

void func_209(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_191(uParam0);
			func_192(uParam0);
			break;
		default:
			func_191(uParam0);
			func_192(uParam0);
			break;
	}
}

int func_210(int iParam0)
{
	return &(Global_1272030->f_3348[iParam0]);
}

int func_211(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (*Global_1257541)[iParam0]->f_3;
}

int func_212(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0];
}

var func_213(int iParam0, int iParam1)
{
	if (func_358(&Var1, iParam0) && func_359(&Var1, iParam1))
	{
		func_360(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_214(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_358(&Var1, iParam0) && func_359(&Var1, iParam1))
	{
		func_360(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_215(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_361(iParam0, iParam1);
	return &(Global_1257541->f_451[iVar0]);
}

Vector3 func_216(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_361(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_3;
}

void func_217(int iParam0, int iParam1)
{
	Local_764.f_240.f_7[iParam0]->f_3 = iParam1;
}

Vector3 func_218()
{
	switch (func_120())
	{
		case 10:
			return -5620.605f, -3800.853f, -24.1569f;
		case 11:
			return -5675.19f, -3540.48f, -23.1959f;
		case 12:
			return -5788.27f, -3787.891f, -28.3404f;
		case 13:
			return -5914.868f, -3542.904f, -24.1618f;
		case 14:
			return -5771.451f, -3275.43f, -24.1565f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_219()
{
	switch (func_120())
	{
		case 0:
			return 281.6921f;
		case 1:
			return -158.872f;
		case 2:
			return 18.4245f;
		case 3:
			return 14.2682f;
		case 4:
			return -128.5f;
		case 5:
			return 17.8878f;
		case 6:
			return 242.1271f;
		case 7:
			return 179.6789f;
		case 8:
			return 68.5872f;
		case 9:
			return 53.3837f;
		case 10:
			return 317.8184f;
		case 11:
			return 193.8916f;
		case 12:
			return 81.138f;
		case 13:
			return 311.6249f;
		case 14:
			return 201.1891f;
		case 15:
			return 0f;
		case 16:
			return 116.53f;
		case 17:
			return 79.27f;
		case 18:
			return 210.7888f;
		case 19:
			return 0f;
		default:
			break;
	}
	return 0f;
}

void func_220(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	Local_764.f_240.f_7[iParam0]->f_6 = { vParam1 };
	Local_764.f_240.f_7[iParam0]->f_5 = fParam4;
	if (bParam5)
	{
		func_252(&(Local_764.f_240.f_7[iParam0]->f_2), 2);
	}
	else
	{
		func_275(&(Local_764.f_240.f_7[iParam0]->f_2), 2);
	}
}

Vector3 func_221()
{
	return Local_764.f_15;
}

int func_222()
{
	switch (func_362())
	{
		case 0:
			return 0;
		case 1:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_223(int iParam0, int iParam1)
{
	Local_764.f_240.f_7[iParam0]->f_4 = iParam1;
}

Vector3 func_224()
{
	switch (func_120())
	{
		case 0:
			return -6050.326f, -3624.609f, -4.5819f;
		case 1:
			return -6207.062f, -3732.748f, -12.78f;
		case 2:
			return -5594.886f, -3886.231f, -31.7143f;
		case 3:
			return -6075.275f, -3788.676f, -30.89f;
		case 4:
			return -6040.549f, -3782.564f, -30.053f;
		case 5:
			return -5843.418f, -3760.766f, -26.4213f;
		case 6:
			return -6323.643f, -3384.013f, -14.5824f;
		case 7:
			return -6237.404f, -3424.566f, 3.3636f;
		case 8:
			return -6110.315f, -3372.742f, 22.0133f;
		case 9:
			return -6125.235f, -3590.394f, 2.6101f;
		case 10:
			return -5597.049f, -3800.806f, -24.2051f;
		case 11:
			return 0f, 0f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_225()
{
	switch (func_120())
	{
		case 0:
			return 24.5803f;
		case 1:
			return 13.1434f;
		case 2:
			return 304.8895f;
		case 3:
			return 104.9514f;
		case 4:
			return 9.7251f;
		case 5:
			return 155.6027f;
		case 6:
			return 104.1793f;
		case 7:
			return 145.9834f;
		case 8:
			return 167.1061f;
		case 9:
			return 236.6107f;
		case 10:
			return 22.0365f;
		case 11:
			return 0f;
		default:
			break;
	}
	return 0f;
}

void func_226(int iParam0)
{
	if (network_is_host_of_this_script())
	{
		func_252(&(Local_13.f_24.f_1), iParam0);
	}
}

Vector3 func_227()
{
	switch (func_120())
	{
		case 0:
			return -6071.557f, -3595.941f, -4.5013f;
		case 1:
			return -6200.21f, -3704.94f, -4.6594f;
		case 2:
			return -5571.9f, -3888.29f, -31.3371f;
		case 3:
			return -6120.025f, -3789.53f, -32.4122f;
		case 4:
			return -6004.005f, -3762.392f, -25.3429f;
		case 5:
			return -5879.436f, -3795.638f, -26.2648f;
		case 6:
			return -6349.512f, -3403.87f, -17.828f;
		case 7:
			return -6242.953f, -3444.967f, 0.3384f;
		case 8:
			return -6106.459f, -3387.389f, 20.3025f;
		case 9:
			return -6081.637f, -3588.643f, -3.8665f;
		case 10:
			return -5611.917f, -3780.803f, -24.1543f;
		case 11:
			return -5666.643f, -3562.726f, -24.1565f;
		case 12:
			return -5814.874f, -3790.488f, -27.6278f;
		case 13:
			return -5904.883f, -3518.582f, -24.1555f;
		case 14:
			return -5752.026f, -3300.129f, -24.1569f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_228()
{
	switch (func_120())
	{
		case 0:
			return 325f;
		case 1:
			return -112.772f;
		case 2:
			return 50.5386f;
		case 3:
			return 75.577f;
		case 4:
			return 280.9377f;
		case 5:
			return 141.1821f;
		case 6:
			return 172.463f;
		case 7:
			return 171.3286f;
		case 8:
			return 248.9276f;
		case 9:
			return 61.0824f;
		case 10:
			return 352.2697f;
		case 11:
			return 24.1707f;
		case 12:
			return 33.9759f;
		case 13:
			return 57.0657f;
		case 14:
			return 325.7551f;
		default:
			break;
	}
	return 0f;
}

Vector3 func_229()
{
	switch (func_120())
	{
		case 0:
			return -6077.897f, -3578.024f, -3.58051f;
		case 1:
			return -6233.383f, -3697.07f, -4.1021f;
		case 2:
			return -5550.738f, -3863.005f, -18.9547f;
		case 3:
			return -6097.458f, -3792.989f, -32.5983f;
		case 4:
			return -5994.275f, -3773.338f, -25.6012f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_230()
{
	switch (func_120())
	{
		case 0:
			return -149.83f;
		case 1:
			return 250.0919f;
		case 2:
			return 284.3547f;
		case 3:
			return 22.9382f;
		case 4:
			return 62.9422f;
		default:
			break;
	}
	return 0f;
}

void func_231(int iParam0)
{
	func_297(iParam0, 4);
}

void func_232(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_275(&(uParam0->f_2), 131072);
	}
	else
	{
		func_252(&(uParam0->f_2), 131072);
	}
}

void func_233(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_275(&(uParam0->f_2), 2048);
	}
	else
	{
		func_252(&(uParam0->f_2), 2048);
	}
}

void func_234(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_275(&(uParam0->f_2), 256);
	}
	else
	{
		func_252(&(uParam0->f_2), 256);
	}
}

void func_235(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_252(uParam0, 4);
	}
	else
	{
		func_275(uParam0, 4);
	}
}

void func_236(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_275(&(uParam0->f_2), 4);
	}
	else
	{
		func_252(&(uParam0->f_2), 4);
	}
}

void func_237(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_275(&(uParam0->f_2), 8);
	}
	else
	{
		func_252(&(uParam0->f_2), 8);
	}
}

void func_238(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_275(&(uParam0->f_2), 16384);
	}
	else
	{
		func_252(&(uParam0->f_2), 16384);
	}
}

void func_239(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_275(&(uParam0->f_2), 128);
	}
	else
	{
		func_252(&(uParam0->f_2), 128);
	}
}

void func_240(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_252(uParam0, 16);
	}
	else
	{
		func_275(uParam0, 67108864);
		func_275(uParam0, 16);
	}
}

void func_241(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_242(var uParam0, int iParam1)
{
	uParam0->f_26 = iParam1;
}

void func_243(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_252(&(uParam0->f_1), 2);
	}
	else
	{
		func_275(&(uParam0->f_1), 2);
	}
}

void func_244(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_252(uParam0, 256);
	}
	else
	{
		func_275(uParam0, 256);
	}
}

void func_245(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_252(uParam0, 268435456);
	}
	else
	{
		func_275(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_252(uParam0, 1073741824);
	}
	else
	{
		func_275(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_252(uParam0, 536870912);
	}
	else
	{
		func_275(uParam0, 536870912);
	}
}

void func_246(var uParam0, int iParam1)
{
	uParam0->f_23 = iParam1;
}

var func_247()
{
	return Local_764.f_2;
}

void func_248(var uParam0, int iParam1)
{
	func_277(&(uParam0->f_21), iParam1);
}

void func_249()
{
	if (Local_13.f_7.f_1 == -1)
	{
		iVar0 = get_random_int_in_range(0, 2);
		Local_13.f_7.f_1 = iVar0;
	}
}

void func_250(int iParam0)
{
	if (network_is_host_of_this_script())
	{
		Local_13.f_7.f_1 = iParam0;
	}
}

bool func_251(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_252(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_253(int iParam0)
{
	if (!func_187(iParam0))
	{
		return false;
	}
	iVar0 = func_363(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_254(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_255(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_256(struct<31> Param0)
{
	func_255(&uVar0, Param0);
	return _0x77a6e4ad0c496f81(&uVar0);
}

bool func_257(int iParam0)
{
	*iParam0 = participant_id_to_int();
	if (!func_364(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

Vector3 func_258()
{
	switch (func_120())
	{
		case 10:
			return -5609.956f, -3781.126f, -24.15435f;
		case 11:
			return -5664.643f, -3561.726f, -24.1565f;
		case 12:
			return -5811.027f, -3789.534f, -27.8079f;
		case 13:
			return -5906.508f, -3520.436f, -24.1555f;
		case 14:
			return -5753.862f, -3302.776f, -24.1569f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_259()
{
	switch (func_120())
	{
		case 10:
			return 90f;
		case 11:
			return 45f;
		case 12:
			return 84.8811f;
		case 13:
			return 344.2147f;
		case 14:
			return 317.4814f;
		default:
			break;
	}
	return 0f;
}

bool func_260(var uParam0)
{
	if (!can_register_mission_peds(1))
	{
		*uParam0 = 1;
		return false;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 11)
	{
		if (func_176(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_365(iVar2, uParam0, &bVar1))
				{
					if (*uParam0)
					{
						return false;
					}
					if (bVar1)
					{
						bVar0 = true;
					}
				}
			}
			if (func_366(iVar2))
			{
				if (network_does_network_id_exist(&(Local_13.f_31[iVar2])))
				{
					if (network_request_control_of_network_id(&(Local_13.f_31[iVar2])))
					{
						_0x7182edda1ee7db5a(&(Local_13.f_31[iVar2]));
					}
				}
			}
		}
		iVar2++;
	}
	if (bVar0)
	{
		return false;
	}
	return true;
}

void func_261()
{
	func_130(2);
}

bool func_262(bool bParam0)
{
	if (!can_register_mission_objects(1))
	{
		*bParam0 = 1;
		return false;
	}
	bVar3 = false;
	vVar4 = { 0f, 0f, 0f };
	vVar7 = { 0f, 0f, 0f };
	vVar10 = { Local_764.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 90f);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = func_367(iVar0, iVar1);
			if (func_178(iVar0, iVar1))
			{
			}
			else if (func_177(iVar0, iVar1))
			{
			}
			else if (is_bit_set(Local_764.f_407[iVar0]->f_2, iVar1))
			{
				if (func_368(iVar0, iVar1))
				{
					if (network_does_network_id_exist(Local_13.f_43[iVar0][iVar1]))
					{
						if (network_request_control_of_network_id(Local_13.f_43[iVar0][iVar1]))
						{
							_0x7182edda1ee7db5a(Local_13.f_43[iVar0][iVar1]);
						}
					}
				}
			}
			else
			{
				if (!network_does_network_id_exist(Local_13.f_43[iVar0][iVar1]))
				{
					if (!func_369(iVar0, iVar1))
					{
						vVar7 = { _get_object_offset_from_coords(vVar10, 0f, func_370(iVar0, iVar1)) };
					}
					else
					{
						vVar7 = { func_370(iVar0, iVar1) };
					}
					if (func_371(iVar0, iVar1))
					{
						if (!func_372(&vVar7, 1, 10, 0, 0))
						{
							bVar3 = true;
						}
						else
						{
							if (func_373(iVar0, iVar1))
							{
								iVar13 = _0x9641a9a20310f6b8(Local_764.f_407[iVar0]->f_5[iVar1]->f_3, vVar7, 0f, 0f, 0f, 1, 0, 0);
								if (!does_entity_exist(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									(*Local_13.f_43[iVar0])[iVar1] = obj_to_net(iVar13);
									if (!network_does_network_id_exist(Local_13.f_43[iVar0][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
								}
							}
							else if (func_374(iVar0, iVar1))
							{
								iVar13 = _create_weapon_object(Local_764.f_407[iVar0]->f_5[iVar1]->f_5, Local_764.f_407[iVar0]->f_5[iVar1]->f_4, func_370(iVar0, iVar1), true, 1f);
								if (!does_entity_exist(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									(*Local_13.f_43[iVar0])[iVar1] = obj_to_net(iVar13);
									if (!network_does_network_id_exist(Local_13.f_43[iVar0][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
									else
									{
										set_network_id_exists_on_all_machines(Local_13.f_43[iVar0][iVar1], true);
									}
								}
							}
							else if (iVar2 == 0)
							{
								Jump @1091; //curOff = 577
							}
							else if (!func_375((*Local_13.f_43[iVar0])[iVar1], iVar2, vVar7, 1, 0))
							{
								*bParam0 = 1;
								return false;
							}
							if (network_does_network_id_exist(Local_13.f_43[iVar0][iVar1]))
							{
								iVar13 = net_to_obj(Local_13.f_43[iVar0][iVar1]);
								if (func_368(iVar0, iVar1))
								{
									if (network_does_network_id_exist(Local_13.f_43[iVar0][iVar1]))
									{
										if (network_request_control_of_network_id(Local_13.f_43[iVar0][iVar1]))
										{
											_0x7182edda1ee7db5a(Local_13.f_43[iVar0][iVar1]);
										}
									}
								}
								if (!does_entity_exist(iVar13))
								{
									*bParam0 = 1;
									return false;
								}
								set_bit(&(Local_764.f_407[iVar0]->f_2), iVar1);
								if (func_376(iVar0, iVar1))
								{
									_0x78b4567e18b54480(iVar13);
									_set_pickup_object_glow_enabled(iVar13, true);
								}
								if (func_377(iVar0, iVar1))
								{
									_0xebdc12861d079aba(iVar13, 1);
								}
								if (func_378(iVar0, iVar1))
								{
									set_entity_visible(iVar13, false);
								}
								else
								{
									_0xa91e6cf94404e8c9(iVar13);
								}
								if (func_371(iVar0, iVar1))
								{
									_0x9587913b9e772d29(iVar13, 0);
								}
								vVar4 = { func_379(iVar0, iVar1) };
								if (!func_254(vVar4))
								{
									if (vVar4.x == 0f && vVar4.y == 0f)
									{
										if (vVar4.z != 0f)
										{
											set_entity_heading(iVar13, vVar4.z);
										}
									}
									else
									{
										set_entity_rotation(iVar13, vVar4, 2, true);
										if (!func_380(iVar0, iVar1, 32))
										{
											get_model_dimensions(iVar2, &vVar15, &vVar18);
											vVar21 = { vVar18 - vVar15 * Vector(0.5f, 0.5f, 0.5f) };
											vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, absf(func_381(vVar4.x)), absf(func_381(vVar4.y))) };
											vVar27 = { func_382(vVar24) * vVar21 };
											set_entity_coords(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
										}
									}
								}
								if (func_383(iVar0, iVar1))
								{
									func_384(iVar0, iVar1, 1);
								}
								if (func_385(iVar0, iVar1))
								{
									set_entity_invincible(iVar13, true);
								}
								bVar3 = true;
							}
							else
							{
								iVar1++;
							}
							iVar0++;
							if (bVar3)
							{
								return false;
							}
							return true;
						}
					}
				}
			}
		}
	}
}

bool func_263(int iParam0)
{
	return func_186(Local_764.f_5, iParam0);
}

bool func_264(int iParam0)
{
	return func_186(Local_764.f_6, iParam0);
}

void func_265()
{
	if (Local_764.f_25 && func_386(&(Local_13.f_7), &(Local_764.f_25)))
	{
		func_130(7);
	}
}

int func_266(int iParam0)
{
	return &(Local_764.f_240.f_7[iParam0]);
}

void func_267(vector3 vParam0)
{
	if (!func_132(Local_764.f_13))
	{
		func_133(&(Local_764.f_13));
	}
	if (func_134(Local_764.f_13) < Global_1901947->f_236.f_69)
	{
		return;
	}
	func_387(Local_764.f_9, vParam0, 0, Local_764.f_12);
	func_157(&(Local_764.f_13));
}

bool func_268()
{
	if (Local_13.f_24 == 5)
	{
		if (is_entity_dead(func_266(1)) || !func_388(1, 40f, 0))
		{
			return true;
		}
		if (func_389(32768, 0))
		{
			return true;
		}
	}
	if (Local_13.f_24 > 0 && func_390(4))
	{
		if (func_391(5, 30, 5))
		{
			if (!func_388(1, 150f, 0))
			{
				return true;
			}
		}
		else
		{
			vVar0 = { get_entity_coords(func_266(1), true, false) };
			fVar3 = get_distance_between_coords(vVar0, Global_35, true);
			if (!func_388(1, 300f, 0) && fVar3 > 300f)
			{
				if (!func_392(&(Local_13.f_24.f_4)))
				{
					func_393(&(Local_13.f_24.f_4), 0);
				}
				if (func_394(&(Local_13.f_24.f_4), 5f))
				{
					return true;
				}
			}
			else if (func_392(&(Local_13.f_24.f_4)))
			{
				func_395(&(Local_13.f_24.f_4));
			}
		}
	}
	return false;
}

int func_269()
{
	return Local_13.f_24;
}

void func_270()
{
	if (func_310() && func_389(512, 0))
	{
		if (!_does_anim_scene_exist(Local_764.f_182.f_5) || _network_has_control_of_anim_scene(Local_764.f_182.f_5))
		{
			func_396();
			func_397(1);
		}
		else
		{
			_network_request_control_of_anim_scene(Local_764.f_182.f_5);
		}
	}
}

void func_271()
{
	if (func_389(2048, 0))
	{
		func_397(2);
	}
	if (_does_anim_scene_exist(Local_764.f_182.f_5) && !_network_has_control_of_anim_scene(Local_764.f_182.f_5))
	{
		_network_request_control_of_anim_scene(Local_764.f_182.f_5);
	}
	if (func_119() == 0)
	{
		if (func_398(1, 0) && !func_390(1))
		{
			func_399();
			func_226(1);
		}
		if (func_390(1) && !func_390(8))
		{
			if (_0x8d81e7824b7753f7(Local_764.f_182.f_5, "action", 0))
			{
				func_400();
				func_226(8);
			}
			else if (_0x8d81e7824b7753f7(Local_764.f_182.f_5, "startLoop", 0))
			{
			}
			else if (_0x8d81e7824b7753f7(Local_764.f_182.f_5, "s_actionLoop", 0))
			{
			}
		}
	}
	else if (func_119() == 1)
	{
		if (func_398(1, 0) && !func_390(1))
		{
			func_226(1);
		}
	}
	else if (func_119() == 2)
	{
		if (func_398(1, 0) && !func_390(1))
		{
			func_226(1);
		}
	}
}

void func_272()
{
	if (!func_390(2) && func_398(2, 0))
	{
		func_226(2);
	}
	if (func_389(2, 0))
	{
		func_397(3);
		Local_13.f_24.f_3 = get_network_time_accurate();
	}
}

void func_273()
{
	if (func_389(32768, 0))
	{
		func_397(5);
	}
	if (get_ped_config_flag(func_266(1), 580, true))
	{
		func_397(4);
	}
}

void func_274()
{
	if (func_401(1))
	{
		func_397(3);
	}
	if (func_389(32768, 0))
	{
		func_397(5);
	}
}

void func_275(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_276(int iParam0)
{
	if (!func_187(iParam0))
	{
		return 0;
	}
	if (!func_253(iParam0))
	{
		return 0;
	}
	return (*Global_1131196)[iParam0]->f_18.f_1;
}

void func_277(var uParam0, int iParam1)
{
	func_402(uParam0, iParam1);
}

void func_278(var uParam0, int iParam1)
{
	func_403(uParam0, iParam1);
}

void func_279(int iParam0)
{
	Var0.f_10 = 255;
	get_event_data(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 182:
			if (func_404(&Var0, iParam0))
			{
				func_405(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_280(int iParam0)
{
}

void func_281(int iParam0)
{
}

bool func_282()
{
	if (!_does_text_database_exist("LEGANM"))
	{
		return true;
	}
	if (!_0x3cf96e16265b7dc8("LEGANM"))
	{
		_text_database_request("LEGANM");
	}
	return _text_database_has_loaded("LEGANM");
}

bool func_283()
{
	_request_propset(615791785);
	if (_has_propset_loaded(615791785))
	{
		return true;
	}
	return false;
}

char[] func_284()
{
	switch (func_119())
	{
		case 0:
			return "script@ambient@animal@big_cat_kill_raccoon@actionMP";
	}
	return "";
}

bool func_285(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4)
{
	if (is_string_null_or_empty(sParam2))
	{
		return false;
	}
	if (is_string_null_or_empty(sParam3))
	{
		return false;
	}
	if (network_is_host_of_this_script())
	{
		if (!network_does_network_id_exist(*uParam0))
		{
			if (!_does_anim_scene_exist(*uParam1))
			{
				*uParam1 = _create_anim_scene(sParam2, iParam4, sParam3, true, true);
				if (!_does_anim_scene_exist(*uParam1))
				{
					return false;
				}
			}
			if (!_network_has_control_of_anim_scene(*uParam1))
			{
				if (!_network_request_control_of_anim_scene(*uParam1))
				{
					return false;
				}
			}
			if (_is_anim_scene_loaded(*uParam1, true, false))
			{
				*uParam0 = _anim_scene_to_net(*uParam1);
			}
			else if (!_is_anim_scene_loading(*uParam1, true))
			{
				load_anim_scene(*uParam1);
			}
			return false;
		}
		return true;
	}
	else
	{
		if (!network_does_network_id_exist(*uParam0))
		{
			return false;
		}
		*uParam1 = _net_to_anim_scene(*uParam0);
		if (!_does_anim_scene_exist(*uParam1))
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_286()
{
	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (is_bit_set(Local_764.f_240.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_406(iVar0);
			if (iVar2 == 0)
			{
				Jump @129; //curOff = 54
			}
			else
			{
				if (!is_bit_set(Local_764.f_240.f_4, iVar0))
				{
					request_model(iVar2, false);
					set_bit(&(Local_764.f_240.f_4), iVar0);
				}
				if (!has_model_loaded(iVar2))
				{
					bVar1 = true;
					Jump @129; //curOff = 110
				}
				else
				{
					set_bit(&(Local_764.f_240.f_3), iVar0);
				}
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return false;
	}
	return true;
}

bool func_287()
{
	bVar2 = false;
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (is_bit_set(Local_764.f_407[iVar0]->f_1, iVar1))
			{
			}
			else
			{
				iVar3 = func_367(iVar0, iVar1);
				if (func_407(iVar1))
				{
					if (Local_764.f_407[iVar0]->f_5[iVar1]->f_6 == 0 || !_0x93ffd92f05ec32fd(Local_764.f_407[iVar0]->f_5[iVar1]->f_6))
					{
						Local_764.f_407[iVar0]->f_5[iVar1]->f_6 = _0x91fe941f9fcfb702(Local_764.f_407[iVar0]->f_5[iVar1]->f_3, 0);
						bVar2 = true;
					}
					else if (!_0xb0b2c6d170b0e8e5(Local_764.f_407[iVar0]->f_5[iVar1]->f_6))
					{
						bVar2 = true;
					}
					else if (!is_bit_set(Local_764.f_407[iVar0]->f_1, iVar1))
					{
						set_bit(&(Local_764.f_407[iVar0]->f_1), iVar1);
					}
				}
				else if (func_408(iVar1))
				{
					_0x72d4cb5db927009c(Local_764.f_407[iVar0]->f_5[iVar1]->f_5, -1, 0);
					if (!_0xff07cf465f48b830(Local_764.f_407[iVar0]->f_5[iVar1]->f_5))
					{
						bVar2 = true;
					}
					else if (!is_bit_set(Local_764.f_407[iVar0]->f_1, iVar1))
					{
						set_bit(&(Local_764.f_407[iVar0]->f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @468; //curOff = 360
				}
				else
				{
					if (!is_bit_set(&(Local_764.f_407[iVar0]), iVar1))
					{
						request_model(iVar3, false);
						set_bit(Local_764.f_407[iVar0], iVar1);
					}
					if (!has_model_loaded(iVar3))
					{
						bVar2 = true;
						Jump @468; //curOff = 422
					}
					else if (!is_bit_set(Local_764.f_407[iVar0]->f_1, iVar1))
					{
						set_bit(&(Local_764.f_407[iVar0]->f_1), iVar1);
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	if (bVar2)
	{
		return false;
	}
	return true;
}

bool func_288(var uParam0, var uParam1)
{
	if (*uParam0 == 3)
	{
		return func_285(&(uParam0->f_9), &(uParam1->f_16), &(uParam1->f_4), &(uParam1->f_12), 64);
	}
	return true;
}

bool func_289()
{
	bVar3 = false;
	vVar4 = { 0f, 0f, 0f };
	vVar7 = { 0f, 0f, 0f };
	vVar10 = { Local_764.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 90f);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = func_367(iVar0, iVar1);
			if (func_177(iVar0, iVar1))
			{
			}
			else if (!func_178(iVar0, iVar1))
			{
				if (network_is_host_of_this_script())
				{
					if (is_bit_set(Local_764.f_407[iVar0]->f_2, iVar1))
					{
						if (func_368(iVar0, iVar1))
						{
							if (network_does_network_id_exist(Local_13.f_43[iVar0][iVar1]))
							{
								if (network_request_control_of_network_id(Local_13.f_43[iVar0][iVar1]))
								{
									_0x7182edda1ee7db5a(Local_13.f_43[iVar0][iVar1]);
								}
							}
						}
					}
				}
			}
			else if (is_bit_set(Local_764.f_407[iVar0]->f_2, iVar1))
			{
			}
			else
			{
				if (!func_369(iVar0, iVar1))
				{
					vVar7 = { _get_object_offset_from_coords(vVar10, 0f, func_370(iVar0, iVar1)) };
				}
				else
				{
					vVar7 = { func_370(iVar0, iVar1) };
				}
				if (func_371(iVar0, iVar1))
				{
					if (!func_372(&vVar7, 1, 10, 0, 0))
					{
						bVar3 = true;
					}
					else
					{
						if (func_373(iVar0, iVar1))
						{
							iVar13 = _0x9641a9a20310f6b8(Local_764.f_407[iVar0]->f_5[iVar1]->f_3, vVar7, 0f, 0f, 0f, 0, 0, 0);
							if (!does_entity_exist(iVar13))
							{
								return false;
							}
						}
						else if (func_374(iVar0, iVar1))
						{
							iVar13 = _create_weapon_object(Local_764.f_407[iVar0]->f_5[iVar1]->f_5, Local_764.f_407[iVar0]->f_5[iVar1]->f_4, func_370(iVar0, iVar1), true, 1f);
							if (!does_entity_exist(iVar13))
							{
								return false;
							}
						}
						else if (iVar2 == 0)
						{
							Jump @837; //curOff = 451
						}
						else
						{
							iVar13 = create_object(iVar2, vVar7, false, true, false, false, true);
							if (!does_entity_exist(iVar13))
							{
								return false;
							}
						}
						set_bit(&(Local_764.f_407[iVar0]->f_2), iVar1);
						if (func_376(iVar0, iVar1))
						{
							_0x78b4567e18b54480(iVar13);
							_set_pickup_object_glow_enabled(iVar13, true);
						}
						if (func_377(iVar0, iVar1))
						{
							_0xebdc12861d079aba(iVar13, 1);
						}
						if (func_378(iVar0, iVar1))
						{
							set_entity_visible(iVar13, false);
						}
						else
						{
							_0xa91e6cf94404e8c9(iVar13);
						}
						if (func_371(iVar0, iVar1))
						{
							_0x9587913b9e772d29(iVar13, 0);
						}
						vVar4 = { func_379(iVar0, iVar1) };
						if (!func_254(vVar4))
						{
							if (vVar4.x == 0f && vVar4.y == 0f)
							{
								if (vVar4.z != 0f)
								{
									set_entity_heading(iVar13, vVar4.z);
								}
							}
							else
							{
								set_entity_rotation(iVar13, vVar4, 2, true);
								if (!func_380(iVar0, iVar1, 32))
								{
									get_model_dimensions(iVar2, &vVar15, &vVar18);
									vVar21 = { vVar18 - vVar15 * Vector(0.5f, 0.5f, 0.5f) };
									vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, absf(func_381(vVar4.x)), absf(func_381(vVar4.y))) };
									vVar27 = { func_382(vVar24) * vVar21 };
									set_entity_coords(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
								}
							}
						}
						Local_764.f_407[iVar0]->f_5[iVar1] = iVar13;
						if (func_383(iVar0, iVar1))
						{
							func_384(iVar0, iVar1, 1);
						}
						bVar3 = true;
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					if (bVar3)
					{
						return false;
					}
					return true;
				}
			}
		}
	}
}

void func_290(struct<2> Param0)
{
	if (func_340(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_340(Param0)))
	{
		_0x99230691875fc218(func_338(Param0), func_340(Param0), Global_35);
	}
}

void func_291()
{
	if (!func_257(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_409(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_292()
{
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			if (func_178(iVar1, iVar2))
			{
			}
			else if (func_177(iVar1, iVar2))
			{
			}
			else if (network_does_network_id_exist(Local_13.f_43[iVar1][iVar2]))
			{
				iVar0 = net_to_obj(Local_13.f_43[iVar1][iVar2]);
				Local_764.f_407[iVar1]->f_5[iVar2] = iVar0;
				if (func_368(iVar1, iVar2))
				{
					if (network_does_network_id_exist(Local_13.f_43[iVar1][iVar2]))
					{
						if (network_request_control_of_network_id(Local_13.f_43[iVar1][iVar2]))
						{
							_0x7182edda1ee7db5a(Local_13.f_43[iVar1][iVar2]);
						}
					}
				}
				if (func_376(iVar1, iVar2))
				{
					_0x78b4567e18b54480(iVar0);
					_set_pickup_object_glow_enabled(iVar0, true);
				}
			}
			else if (0 != func_367(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_293(int iParam0)
{
	iVar0 = func_266(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (network_has_control_of_entity(iVar0))
	{
		set_ped_config_flag(iVar0, 402, true);
		set_ped_config_flag(iVar0, 542, true);
		_0xf74e134f40192884(iVar0, 1);
		func_410(iVar0);
	}
	func_297(iParam0, 256);
	func_297(iParam0, 16);
	if (!_0x0e6846476906c9dd(player_id(), iVar0))
	{
		_0x543dfe14be720027(player_id(), iVar0, 1);
	}
}

void func_294(int iParam0)
{
	iVar0 = iParam0;
	set_bit(&(Local_764.f_53.f_71), iVar0);
}

int func_295(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		return 0;
	}
	if (bParam1)
	{
		return 2;
	}
	return 1;
}

void func_296(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = func_411(get_entity_model(iParam0));
	iVar1 = func_412(iVar0);
	if (iVar0 != 2 && iVar0 != 0)
	{
		set_ped_path_prefer_to_avoid_water(iParam0, true, 2f);
		_0x9de63896b176ea94(iParam0, 0);
	}
	_0x06ecf3925bc2abae(iParam0, 0);
	set_ped_config_flag(iParam0, 402, true);
	set_ped_config_flag(iParam0, 542, true);
	_0xf74e134f40192884(iParam0, 1);
	func_413(iParam0, iVar1, iParam1);
	func_414(iParam0);
}

void func_297(int iParam0, int iParam1)
{
	func_252(&(Local_764.f_240.f_7[iParam0]->f_2), iParam1);
}

void func_298(int iParam0)
{
	Local_764.f_172.f_5 = func_411(get_entity_model(iParam0));
	func_415(iParam0, &(Local_764.f_179));
	func_416(iParam0);
}

int func_299(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!bParam12 && is_entity_dead(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case -1212426201:
		case -1101297303:
		case -594562071:
		case 416676503:
		case 860033945:
		case 970310034:
			iVar0 = _0xf8204ef17410bf43(iParam1, iParam7, iParam8, 0);
			if (!is_weapon_valid(iVar0))
			{
				iVar0 = -1569615261;
			}
			break;
		default:
			if (!is_weapon_valid(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((_0x705be297eebdb95d(iVar0) || _is_weapon_melee(iVar0)) && get_ped_relationship_group_hash(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, _get_weapon_name(iVar0), 128);
				iVar2 = _0xd42514c182121c23(get_entity_model(iParam0));
				if (!Global_26640 && _does_string_exist_in_string(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, _0x806862e5d266cf38(&cVar5, 0, (get_length_of_literal_string(&cVar5) - get_length_of_literal_string("_DUALWIELD"))), 128);
					iVar3 = get_hash_key(&cVar5);
					if (func_417(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = get_weapontype_group(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = _0x9eefd670f10656d7(iVar2, iVar1);
						if (!Global_26640)
						{
							if (func_417(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_28() == -1 && !func_418(iVar0))
	{
		if (has_ped_got_weapon(iParam0, iVar0, 0, false) && iParam0 != Global_34)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_26640) && iParam0 != Global_34) && get_ped_relationship_group_hash(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = _0xf8204ef17410bf43(iParam1, iParam7, iParam8, 0);
			if (!is_weapon_valid(iVar0))
			{
				iVar0 = -1569615261;
			}
		}
	}
	if (iVar0 == -1569615261 && iParam1 == -1569615261)
	{
		return iVar0;
	}
	else if (iVar0 == -1569615261)
	{
		switch (iParam1)
		{
			case -1101297303:
			case 416676503:
				iVar0 = 379542007;
				break;
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_418(-183018591))
				{
					iVar0 = -183018591;
				}
				else
				{
					iVar0 = 379542007;
				}
				break;
			default:
				iVar0 = 379542007;
				break;
		}
	}
	else if (iVar0 == -164645981 && iParam0 == Global_34)
	{
		iVar0 = 1247405313;
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_34 && func_417(iVar0))
		{
			get_max_ammo(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!_is_weapon_melee(iVar0) && iVar0 != -1569615261) && !_is_weapon_lantern(iVar0))
		{
			iVar23 = get_ped_ammo_by_type(iParam0, get_ped_ammo_type_from_weapon(iParam0, iVar0));
			iVar24 = _get_weapon_clip_size(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_34)
	{
		func_419(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_420(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_34)
	{
		if (func_421(iVar0))
		{
			set_ped_infinite_ammo(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		_0xcffc3eccd7a5cceb(get_player_index(), iVar0, iParam4);
	}
	return iVar0;
}

void func_300(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			disable_ped_pain_audio(iParam0, true);
		}
		if (bParam2)
		{
			set_ped_config_flag(iParam0, 243, true);
		}
		if (Global_34 == iParam0)
		{
		}
		_set_entity_health(iParam0, 0, 0);
	}
}

Vector3 func_301()
{
	switch (func_120())
	{
		case 10:
			return -5614.539f, -3778.441f, -23.58708f;
		case 11:
			return -5666f, -3556.37f, -24.1565f;
		case 12:
			return -5815.272f, -3786.044f, -27.73804f;
		case 13:
			return -5902.532f, -3516.899f, -24.1555f;
		case 14:
			return -5748.666f, -3301.449f, -24.1569f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_302(float fParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_423(func_422(iVar0), fParam0);
		iVar0++;
	}
}

void func_303(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (fParam0 >= fParam1)
	{
	}
	Local_764.f_428.f_2 = iParam2;
	Local_764.f_428.f_9 = fParam0;
	Local_764.f_428.f_10 = fParam1;
	Local_764.f_428.f_8 = iParam3;
	if (bParam4)
	{
		func_252(&(Local_764.f_428.f_12), 1);
	}
	else
	{
		func_275(&(Local_764.f_428.f_12), 1);
	}
}

void func_304(int iParam0, float fParam1)
{
	func_252(&(Local_764.f_428.f_12), 2);
	Local_764.f_428.f_7 = fParam1;
	Local_764.f_428.f_5 = iParam0;
}

int func_305(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(Local_764.f_428.f_11))
	{
		Local_764.f_428.f_11 = _create_volume_aggregate_with_custom_name("NB_Trigger");
	}
	if (_does_volume_exist(Local_764.f_428.f_11))
	{
		switch (iParam0)
		{
			case -1612834106:
				_0x39816f6f94f385ad(Local_764.f_428.f_11, vParam1, vParam4, vParam7);
				break;
			case -432403087:
				_0x5b7d7bf36d2de18b(Local_764.f_428.f_11, vParam1, vParam4, vParam7);
				break;
			case 665633627:
				_0xbce668aaf83608be(Local_764.f_428.f_11, vParam1, vParam4, vParam7);
				break;
		}
		return 1;
	}
	return 0;
}

int func_306(int iParam0)
{
	if (func_424(iParam0, &(Local_764.f_428.f_13)))
	{
		Local_764.f_428++;
		return 1;
	}
	return 0;
}

void func_307(var uParam0, int iParam1, vector3 vParam2, float fParam5)
{
	func_297(iParam1, 256);
	uParam0->f_70 = iParam1;
	*uParam0 = func_266(iParam1);
	uParam0->f_42 = fParam5;
	uParam0->f_60 = { vParam2 };
}

void func_308(var uParam0, int iParam1)
{
	fVar0 = Global_1901947->f_852;
	iVar1 = Global_1901947->f_852.f_1;
	fVar2 = Global_1901947->f_852.f_2;
	switch (iParam1)
	{
		case 14:
			func_426(uParam0, func_425(*uParam0), 1000, 15f, 1500f, 10f, -1723181095);
			func_427(uParam0, 30f, 50f, 120f, 50f, 80f, 500f, 1f, 4f, 0.5f);
			func_428(uParam0, 8);
			func_428(uParam0, 4);
			break;
		case 0:
			func_426(uParam0, "LEGENDARY_ALLIGATOR_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_427(uParam0, 30f, 50f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 1:
			func_426(uParam0, "LEGENDARY_BEAR_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_427(uParam0, 30f, 50f, 120f, 40f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 2:
			func_426(uParam0, "LEGENDARY_BEAVER_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_427(uParam0, 10f, 30f, 120f, 30f, 70f, 200f, 1f, 4f, 0.5f);
			break;
		case 3:
			func_426(uParam0, "LEGENDARY_BISON_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_427(uParam0, 30f, 50f, 120f, 40f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 4:
			func_426(uParam0, "LEGENDARY_BOAR_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_427(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 5:
			func_426(uParam0, "LEGENDARY_BUCK_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_427(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 6:
			func_426(uParam0, "LEGENDARY_COUGAR_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_427(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 7:
			func_426(uParam0, "LEGENDARY_PANTHER_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_427(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 8:
			func_426(uParam0, "LEGENDARY_COYOTE_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_427(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 9:
			func_426(uParam0, "LEGENDARY_FOX_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_427(uParam0, 10f, 30f, 120f, 30f, 70f, 200f, 1f, 4f, 0.5f);
			break;
		case 10:
			func_426(uParam0, "LEGENDARY_MOOSE_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_427(uParam0, 30f, 50f, 120f, 40f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 11:
			func_426(uParam0, "LEGENDARY_RAM_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_427(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 12:
			func_426(uParam0, "LEGENDARY_WOLF_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_427(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 13:
			func_426(uParam0, "LEGENDARY_ELK_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_427(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
	}
}

void func_309(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (_0x91a5f9cbebb9d936(uParam0->f_24))
	{
		remove_scenario_blocking_area(uParam0->f_24, false);
	}
	func_429(uParam0->f_25);
	func_430(&(uParam0->f_25), vParam1, 0f, 0f, 0f, fParam4, fParam4, fParam4, "LA Blocking Area", 1, 0);
	uParam0->f_24 = func_431(uParam0->f_25, 0, 0, iParam5);
}

bool func_310()
{
	return (func_136(32) || func_135(32, 255));
}

bool func_311(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_432(iParam0, 1178968787) };
	if (!stat_id_get_int(&Var0, &iVar2))
	{
		return false;
	}
	if (iVar2 != 0 && (Global_1296859->f_21 - iVar2) < iParam1)
	{
		return true;
	}
	return false;
}

void func_312()
{
	func_433();
}

void func_313()
{
	iVar2 = participant_id_to_int();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = network_is_participant_active(int_to_participantindex(iVar0));
		func_434(iVar0, bVar1, iVar2);
		func_435(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_314()
{
	if (!_network_is_player_index_valid(player_id()))
	{
		return;
	}
	iVar2 = get_player_ped(player_id());
	if (!does_entity_exist(iVar2))
	{
		return;
	}
	if (!func_257(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (network_is_in_mp_cutscene() != Local_764.f_240.f_166)
	{
		bVar8 = true;
		Local_764.f_240.f_166 = !Local_764.f_240.f_166;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_764.f_240.f_129 >= 11)
		{
			Local_764.f_240.f_129 = 0;
		}
		iVar0 = Local_764.f_240.f_129;
		Local_764.f_240.f_129++;
		iVar9 = func_422(iVar0);
		iVar1 = &Local_764.f_240.f_7[iVar0];
		bVar4 = !does_entity_exist(iVar1);
		if (func_176(iVar9, 4))
		{
			func_409(iVar9, iVar3, 1);
			bVar4 = !does_entity_exist(iVar1);
		}
		if (bVar4)
		{
			if (&Local_59[iVar3]->f_7.f_2[iVar0] > -1f)
			{
				Local_59[iVar3]->f_7.f_2[iVar0] = -1f;
			}
			if (is_bit_set(Local_764.f_240.f_5, iVar0))
			{
				clear_bit(&(Local_764.f_240.f_5), iVar0);
				clear_bit(&(Local_764.f_240.f_6), iVar0);
				clear_bit(&(Local_764.f_240.f_130), iVar0);
			}
		}
		else
		{
			bVar7 = func_436(iVar2, iVar1, iVar0, iVar3);
		}
		if (is_bit_set(Local_764.f_240.f_130, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				clear_bit(&(Local_764.f_240.f_130), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				set_bit(&(Local_764.f_240.f_130), iVar0);
			}
		}
		if (!bVar4)
		{
			if (is_any_speech_playing(iVar1))
			{
				if (!is_bit_set(Local_59[iVar3]->f_7.f_1, iVar0))
				{
					set_bit(&(Local_59[iVar3]->f_7.f_1), iVar0);
				}
				func_437(Local_764.f_240.f_131[iVar0]);
			}
		}
		if (is_bit_set(Local_59[iVar3]->f_7.f_1, iVar0))
		{
			if (bVar4 || (!is_any_speech_playing(iVar1) && (!func_392(Local_764.f_240.f_131[iVar0]) || func_394(Local_764.f_240.f_131[iVar0], 0.5f))))
			{
				func_395(Local_764.f_240.f_131[iVar0]);
				clear_bit(&(Local_59[iVar3]->f_7.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_176(iVar9, 256))
		{
			set_entity_visible_in_cutscene(iVar1, Local_764.f_240.f_166, 0, 256);
		}
		if (func_176(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (network_is_host_of_this_script())
					{
						if (func_438(iVar9))
						{
							if (!func_365(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_439(iVar9, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if ((_0xb07d3185e11657a5(iVar1) && network_has_control_of_entity(iVar1)) && !func_176(iVar9, 8))
			{
				if (!func_438(iVar9))
				{
					_0x7043d0681285ba2d(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_764.f_240.f_130 != 0)
	{
		if (!func_440(1, 255))
		{
			func_441(1);
		}
	}
	else if (func_440(1, 255))
	{
		func_442(1);
	}
}

void func_315()
{
	fVar0 = func_443();
	if (Local_764.f_428.f_4)
	{
		return;
	}
	if (!func_257(&iVar1))
	{
		return;
	}
	if (func_186(Local_59[iVar1]->f_21, 1))
	{
		Local_764.f_428.f_4 = 1;
		return;
	}
	iVar2 = get_player_ped(player_id());
	if (func_444(iVar2, 0))
	{
		return;
	}
	fVar3 = vdist(get_entity_coords(iVar2, true, false), Local_764.f_15);
	fVar4 = Local_764.f_428.f_9;
	fVar5 = Local_764.f_428.f_10;
	if (func_186(Local_764.f_428.f_12, 2))
	{
		bVar6 = false;
		fVar7 = get_entity_speed(iVar2);
		fVar8 = (fVar0 * (1f / Local_764.f_428.f_7));
		if (fVar7 > 0f)
		{
			if (func_445(Local_764.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_764.f_428.f_6 < 1f)
			{
				Local_764.f_428.f_6 = (Local_764.f_428.f_6 + fVar8);
				if (Local_764.f_428.f_6 > 1f)
				{
					Local_764.f_428.f_6 = 1f;
				}
			}
		}
		else if (Local_764.f_428.f_6 > 0f)
		{
			Local_764.f_428.f_6 = (Local_764.f_428.f_6 - fVar8);
			if (Local_764.f_428.f_6 < 0f)
			{
				Local_764.f_428.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_764.f_428.f_5) * Local_764.f_428.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_252(&(Local_59[iVar1]->f_21), 1);
	}
	else if (_does_volume_exist(Local_764.f_428.f_11) && is_entity_in_volume(iVar2, Local_764.f_428.f_11, false, 0))
	{
		func_252(&(Local_59[iVar1]->f_21), 1);
	}
	else if (Local_764.f_428 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 3)
		{
			func_446(Local_764.f_428.f_13[iVar10], fVar5, 1082130432, 0, 0, 0, 0, 1);
			iVar10++;
		}
		if (func_447(&(Local_764.f_428.f_13), Local_764.f_428, Local_764.f_428.f_8))
		{
			func_252(&(Local_59[iVar1]->f_21), 1);
		}
	}
	if (func_186(Local_59[iVar1]->f_21, 1))
	{
		Local_764.f_428.f_4 = 1;
	}
}

void func_316()
{
	func_448();
	func_449();
	func_450();
	func_451(&(Local_764.f_179));
	if (Local_764.f_25)
	{
		func_452(&(Local_13.f_7), &(Local_764.f_25), &(Local_764.f_53));
	}
	func_453();
	if (func_454(&(Local_764.f_53)))
	{
		func_455(&(Local_764.f_53));
	}
	func_456(Local_764.f_53);
	func_457(Local_764.f_53);
	func_458(Local_764.f_53);
	if (func_334(2, -1))
	{
		fVar0 = 150f;
	}
	else
	{
		fVar0 = 250f;
	}
	func_459(Local_764.f_53, fVar0);
}

bool func_317()
{
	bVar0 = true;
	if (bVar0 && !_unlock_is_unlocked(Local_764.f_14))
	{
		return false;
	}
	if (func_460())
	{
		return false;
	}
	if (func_461(get_player_index()))
	{
		return false;
	}
	return true;
}

void func_318()
{
	Local_764.f_182.f_3 = -1;
	Local_764.f_182.f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_764.f_182.f_4 = (Local_764.f_182.f_4 || Local_59[iVar0]->f_6);
			Local_764.f_182.f_3 = (Local_764.f_182.f_3 && Local_59[iVar0]->f_6);
		}
		iVar0++;
	}
}

void func_319()
{
	if (func_269() != func_326())
	{
		func_462(func_326(), func_269());
		func_463(Local_13.f_24);
	}
}

void func_320()
{
	func_464(func_266(2), &(Local_764.f_182.f_54), 128, 0);
}

void func_321()
{
	if (func_465(65536, -1, 1))
	{
		iVar0[0] = func_266(0);
		iVar0[1] = func_266(1);
		iVar0[2] = func_266(2);
		func_466(&iVar0);
		return;
	}
	if (func_269() <= 1)
	{
		return;
	}
	if (!func_467() && !(func_269() == 3 || func_269() == 4))
	{
		return;
	}
	func_468();
}

bool func_322()
{
	return Local_764.f_25;
}

void func_323(int iParam0, int iParam1)
{
	if (Local_764.f_172.f_6 == -1)
	{
		Local_764.f_172.f_6 = iParam1;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!func_469(&(Local_764.f_53), 128))
	{
		if (func_470(Global_34, iParam0, 20f, 1, 1))
		{
			func_471(iParam0, func_411(get_entity_model(iParam0)), iParam1, &(Local_764.f_53));
			func_428(&(Local_764.f_53), 128);
		}
	}
}

bool func_324(int iParam0)
{
	return func_251(Local_764.f_172, iParam0);
}

void func_325(int iParam0)
{
	iVar0 = participant_id();
	if (func_472(iVar0))
	{
		func_252(&(Local_59[iVar0]->f_6), iParam0);
	}
}

int func_326()
{
	return Local_764.f_182.f_1;
}

void func_327()
{
	if ((func_263(32) || func_473(0, 110f, 255, 0)) && !func_465(512, -1, 1))
	{
		func_325(512);
	}
}

void func_328()
{
	if (func_119() == 0)
	{
		if (func_474(0, 60f, 75f, 100f, 1065353216, 5, 0, 1) && !func_398(1, 0))
		{
			func_325(1);
		}
	}
	else if (func_119() == 1)
	{
		if (func_120() == 7 || func_120() == 8)
		{
			fVar0 = (60f / 2f);
			fVar1 = (75f / 2f);
			fVar2 = (100f / 2f);
		}
		else
		{
			fVar0 = 60f;
			fVar1 = 75f;
			fVar2 = 100f;
		}
		if (((((func_474(0, fVar0, fVar1, fVar2, 1065353216, 5, 0, 1) || func_398(1, 0)) || func_470(Global_34, func_266(0), fVar0, 1, 1)) || func_470(Global_34, func_266(8), fVar0, 1, 1)) || func_470(Global_34, func_266(1), fVar0, 1, 1)) && !func_465(1, -1, 1))
		{
			iVar3 = func_266(8);
			iVar4 = func_266(0);
			if (func_475(iVar3, 0))
			{
				Local_764.f_182.f_55 = _blip_add_for_entity(-1749618580, iVar3);
				set_blip_name_from_text_file(Local_764.f_182.f_55, "BLIP_RC");
				if (network_has_control_of_entity(iVar3))
				{
					set_ped_accuracy(iVar3, 10);
					task_aim_at_entity(iVar3, iVar4, -1, 0, 0);
				}
			}
			if (func_475(iVar4, 0) && network_has_control_of_entity(iVar4))
			{
				task_combat_ped(iVar4, iVar3, 0, 0);
			}
			func_325(1);
		}
	}
	else if (func_119() == 2)
	{
		func_474(0, 60f, 75f, 100f, 1065353216, 5, 0, 1);
		if ((func_473(9, 15f, 255, 0) || func_473(0, 20f, 255, 0)) || func_473(1, 20f, 255, 0))
		{
			func_393(&(Local_764.f_182.f_13), 0);
		}
		else if (!func_473(9, 20f, 255, 0))
		{
			func_395(&(Local_764.f_182.f_13));
		}
		if (((func_473(9, 5f, 255, 0) || func_473(0, (20f / 2f), 255, 0)) || func_394(&(Local_764.f_182.f_13), 5f)) || ((func_476(func_266(0), &(Local_764.f_127), 0) && Local_764.f_127.f_33 != 262144) && Local_764.f_127.f_33 != 131072))
		{
			func_325(1);
		}
	}
	if (func_398(1, 0) && !func_465(2048, -1, 1))
	{
		func_325(2048);
	}
}

void func_329()
{
	if (((((((func_119() == 0 && func_473(1, 25f, 255, 0)) || (func_119() == 0 && func_473(2, 25f, 255, 0))) || func_473(0, 20f, 255, 0)) || ((func_476(func_266(0), &(Local_764.f_127), 0) && Local_764.f_127.f_33 != 262144) && Local_764.f_127.f_33 != 131072)) || func_119() == 2) || func_390(2)) && !func_465(2, -1, 1))
	{
		if (network_has_control_of_entity(func_266(0)))
		{
			task_combat_hated_targets(func_266(0), -1f);
		}
		if (network_has_control_of_entity(func_266(1)) && (func_119() == 0 && func_473(1, 30f, 255, 0)))
		{
			task_combat_hated_targets(func_266(1), -1f);
			func_325(8);
		}
		if (network_has_control_of_entity(func_266(2)) && (func_119() == 0 && func_473(2, 20f, 255, 0)))
		{
			task_combat_hated_targets(func_266(2), -1f);
			_blip_add_for_entity(831283580, func_266(2));
			func_325(128);
		}
		func_393(&(Local_764.f_182.f_16), 0);
		if (does_blip_exist(Local_764.f_53.f_63))
		{
			remove_blip(&(Local_764.f_53.f_63));
		}
		if (!_0x9fa00e2fc134a9d0(func_266(0)))
		{
			_blip_add_for_entity(831283580, func_266(0));
		}
		if (func_475(func_266(3), 0) && network_has_control_of_entity(func_266(3)))
		{
			if (_is_anim_scene_started(Local_764.f_182.f_5, false) && _get_anim_scene_progress(Local_764.f_182.f_5) > 0.3f)
			{
				func_300(func_266(3), 1, 0);
			}
			else
			{
				_task_smart_flee_style_ped(func_266(3), func_266(0), 4, 0, -1082130432, -1, 0);
			}
		}
		if (func_475(func_266(7), 0) && network_has_control_of_entity(func_266(7)))
		{
			if (_is_anim_scene_started(Local_764.f_182.f_5, false) && _get_anim_scene_progress(Local_764.f_182.f_5) > 0.4418f)
			{
				func_300(func_266(7), 1, 0);
			}
			else
			{
				_task_smart_flee_style_ped(func_266(7), func_266(0), 4, 0, -1082130432, -1, 0);
			}
		}
		if (func_475(func_266(8), 0) && network_has_control_of_entity(func_266(8)))
		{
			_task_smart_flee_style_ped(func_266(8), func_266(0), 4, 0, -1082130432, -1, 0);
		}
		func_477();
		func_325(2);
		func_325(131072);
	}
	if (func_119() == 1)
	{
		iVar0 = func_266(8);
		iVar1 = func_266(0);
		if (!func_398(8192, 0))
		{
			if ((!func_475(iVar0, 0) && func_475(iVar1, 0)) && network_has_control_of_entity(iVar1))
			{
				task_animal_unalerted(iVar1, -1, 0, 0, 0);
				set_blocking_of_non_temporary_events(iVar1, false);
				func_325(8192);
			}
		}
		if (!func_398(262144, 0))
		{
			if (((func_475(iVar0, 0) && func_475(iVar1, 0)) && func_470(iVar0, iVar1, 5f, 1, 1)) && network_has_control_of_entity(iVar0))
			{
				task_combat_ped(iVar0, iVar1, 0, 0);
				set_blocking_of_non_temporary_events(iVar0, false);
				func_325(262144);
			}
		}
	}
	if ((is_entity_dead(func_266(0)) && func_475(func_266(7), 0)) && network_has_control_of_entity(func_266(7)))
	{
		if ((func_119() == 0 && _is_anim_scene_started(Local_764.f_182.f_5, false)) && _get_anim_scene_progress(Local_764.f_182.f_5) > 0.4418f)
		{
			_delete_anim_scene(Local_764.f_182.f_5);
			func_300(func_266(7), 1, 0);
		}
	}
	if (!func_398(16, 0))
	{
		if ((_does_anim_scene_exist(Local_764.f_182.f_5) && _0xf94692eb9dc15d74(Local_764.f_182.f_5, 0)) && network_has_control_of_entity(func_266(0)))
		{
			func_300(func_266(7), 1, 0);
			set_blocking_of_non_temporary_events(func_266(0), false);
			task_animal_unalerted(func_266(0), -1, 0, 0, 0);
			func_325(16);
		}
	}
}

void func_330()
{
	if ((!is_entity_dead(func_266(0)) && !func_394(&(Local_764.f_182.f_16), Local_764.f_182.f_7)) && !func_473(1, 20f, 255, 0))
	{
		return;
	}
	if (func_119() == 1 || func_119() == 2)
	{
		func_478(1, 8, 32, Local_764.f_182.f_8);
	}
	else
	{
		func_478(1, 8, 32, Local_764.f_182.f_8);
		func_478(2, 128, 256, Local_764.f_182.f_9);
	}
	if (!is_entity_dead(func_266(0)) && !func_398(524288, 0))
	{
		if (!func_388(0, 30f, 1))
		{
			if (network_has_control_of_entity(func_266(0)))
			{
				task_animal_unalerted(func_266(0), -1, 0, 0, 0);
				set_blocking_of_non_temporary_events(func_266(0), false);
				func_325(524288);
			}
		}
	}
	if (func_398(8, 0) && !func_465(1024, -1, 1))
	{
		func_325(1024);
	}
	iVar0 = func_266(8);
	if ((!func_465(16384, -1, 1) && func_475(func_266(1), 0)) && func_475(iVar0, 0))
	{
		if (func_470(iVar0, func_266(1), 25f, 1, 1))
		{
			if (network_has_control_of_entity(iVar0))
			{
				_task_smart_flee_style_ped(iVar0, func_266(1), 3, 0, -1082130432, -1, 0);
			}
			if (does_blip_exist(Local_764.f_182.f_55))
			{
				remove_blip(&(Local_764.f_182.f_55));
			}
			func_325(16384);
		}
	}
	if (!func_398(64, 0) && !func_398(16384, 0))
	{
		if ((func_475(iVar0, 0) && !func_475(func_266(0), 0)) && network_has_control_of_entity(iVar0))
		{
			task_loot_entity(iVar0, func_266(0));
			func_325(64);
		}
	}
}

void func_331()
{
	if ((network_has_control_of_entity(func_266(1)) && !func_401(1)) && !get_ped_config_flag(func_266(1), 580, true))
	{
		set_blocking_of_non_temporary_events(func_266(1), false);
		func_479(1);
	}
}

void func_332(var uParam0)
{
	func_480(uParam0);
}

bool func_333()
{
	return func_67(8);
}

bool func_334(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = participant_id_to_int();
	}
	if (!func_481(iParam1, 0, 1))
	{
		return false;
	}
	return func_251(Local_59[iParam1]->f_4, iParam0);
}

bool func_335(int iParam0)
{
	return func_251(Local_764.f_172.f_1, iParam0);
}

char* func_336(int iParam0, int iParam1)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_ALLIGATOR_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_ALLIGATOR_02";
					break;
				case 2:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BEAR_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BEAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BEAVER_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BEAVER_02";
					break;
				case 2:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BISON_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BISON_02";
					break;
				case 2:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BOAR_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BOAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BUCK_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BUCK_02";
					break;
				case 2:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_COUGAR_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_COUGAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_PANTHER_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_PANTHER_02";
					break;
				case 2:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_COYOTE_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_COYOTE_02";
					break;
				case 2:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_FOX_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_FOX_02";
					break;
				case 2:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_MOOSE_02";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_MOOSE_01";
					break;
				case 2:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BIG_HORN_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BIG_HORN_02";
					break;
				case 2:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_WOLF_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_WOLF_02";
					break;
				case 2:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_ELK_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_ELK_02";
					break;
				case 2:
					break;
			}
			break;
	}
	if (is_string_null_or_empty(sVar0))
	{
	}
	return sVar0;
}

var func_337(char* sParam0)
{
	if (!func_482(255))
	{
		return 0;
	}
	if (is_entity_dead(Global_34))
	{
		return 0;
	}
	return func_483(sParam0, 10000, 0, 0, 0, 1);
}

int func_338(var uParam0, var uParam1)
{
	return uParam0;
}

int func_339(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1690863991;
		case 3:
			return 1286170048;
		case 4:
			return -342492333;
		case 5:
			return 1140089012;
		case 8:
			return 634321112;
		case 7:
			return -2079273178;
		case 6:
			return -147846054;
		default:
			break;
	}
	return 0;
}

int func_340(struct<2> Param0)
{
	return func_484(Param0);
}

void func_341(struct<2> Param0, var uParam2)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = _0x901e0dc25080c8b9(player_id());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_338(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_486(func_485(Param0));
			iVar5 = func_487(iVar4);
			if (!func_488(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1107216->f_33[iVar1] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = Global_1107216->f_33[iVar2]->f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1116202[iVar0];
}

int func_342(int iParam0, int iParam1)
{
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	iVar33 = 1;
	while (iVar33 <= 43)
	{
		iVar32 = iVar33;
		if (iVar32 == iParam0)
		{
			return (iVar0 + iParam1);
		}
		else
		{
			func_31(&Var1, iVar32, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar33++;
	}
	return -1;
}

void func_343(int iParam0)
{
	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_489(&Var0);
}

var func_344(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901947->f_236.f_57;
		default:
			break;
	}
	return Global_1901947->f_236.f_53;
}

var func_345(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901947->f_236.f_59;
		default:
			break;
	}
	return Global_1901947->f_236.f_55;
}

var func_346(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901947->f_236.f_58;
		default:
			break;
	}
	return Global_1901947->f_236.f_54;
}

int func_347(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 35;
		case 3:
			return 55;
		default:
			break;
	}
	return 0;
}

int func_348(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			if (&Global_1198046->f_3[iParam0] * 2 <= 32)
			{
				return &Global_1198046->f_3[iParam0] * 2;
			}
			return 32;
		case 2:
			if (&Global_1198046->f_3[iParam0] * 2 <= 20)
			{
				return &Global_1198046->f_3[iParam0] * 2;
			}
			return 20;
		case 3:
			if (&Global_1198046->f_3[iParam0] * 2 <= 16)
			{
				return &Global_1198046->f_3[iParam0] * 2;
			}
			return 16;
		default:
			break;
	}
	return 0;
}

void func_349(var uParam0)
{
	func_193(uParam0, 0);
	func_193(uParam0, 1);
	func_193(uParam0, 3);
	func_191(uParam0);
}

void func_350(var uParam0)
{
	func_192(uParam0);
	func_490(uParam0, 0, 3);
}

void func_351(var uParam0)
{
	func_193(uParam0, 0);
	func_194(uParam0, 0);
	func_194(uParam0, 1);
	func_194(uParam0, 2);
}

void func_352(var uParam0)
{
	func_193(uParam0, 1);
	func_191(uParam0);
}

void func_353(var uParam0)
{
	func_193(uParam0, 2);
	func_194(uParam0, 3);
}

void func_354(var uParam0)
{
	func_193(uParam0, 3);
	func_194(uParam0, 4);
}

void func_355(var uParam0)
{
	func_194(uParam0, 0);
	func_194(uParam0, 1);
}

void func_356(var uParam0)
{
	func_194(uParam0, 2);
	func_194(uParam0, 3);
}

void func_357(var uParam0)
{
	func_194(uParam0, 4);
	func_194(uParam0, 5);
}

bool func_358(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

bool func_359(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_360(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (_datafile_get_hash(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_361(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1257541)[iParam0]->f_4 + iParam1);
}

int func_362()
{
	return Local_764.f_4;
}

int func_363(int iParam0)
{
	if (!func_187(iParam0))
	{
		return 0;
	}
	return Global_1132288->f_1[iParam0]->f_3;
}

bool func_364(int iParam0, bool bParam1)
{
	if (iParam0 > -1 && iParam0 < network_get_max_num_participants())
	{
		if (!bParam1)
		{
			return true;
		}
		return network_is_participant_active(int_to_participantindex(iParam0));
	}
	return false;
}

bool func_365(int iParam0, bool bParam1, bool bParam2)
{
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_764.f_15 };
	iVar7 = 0;
	iVar8 = func_406(iParam0);
	iVar9 = func_491(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!network_does_network_id_exist(&(Local_13.f_31[iParam0])))
		{
			iVar9 = func_491(iParam0);
			fVar0 = func_492(iParam0);
			if (!func_186(Local_764.f_240.f_7[iParam0]->f_2, 2))
			{
				vVar1 = { _get_object_offset_from_coords(vVar4, 0f, func_493(iParam0)) };
			}
			else
			{
				vVar1 = { func_493(iParam0) };
			}
			if (!func_494(Local_13.f_31[iParam0], iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || _is_this_model_a_horse(iVar8)), 1, 1))
			{
				*bParam1 = 1;
			}
			else
			{
				iVar7 = net_to_ped(&(Local_13.f_31[iParam0]));
				if (does_entity_exist(iVar7))
				{
					_0xa91e6cf94404e8c9(iVar7);
					set_blocking_of_non_temporary_events(iVar7, true);
					set_ped_config_flag(iVar7, 178, false);
					if (is_ped_human(iVar7))
					{
						set_ped_drops_weapons_when_dead(iVar7, false);
						_0x431240a58484d5d0(iVar7, 0);
						_0x45e57fdd531c9477(iVar7, 0);
					}
					if (iVar9 != 0)
					{
						_set_ped_body_component(iVar7, iVar9);
						_update_ped_variation(iVar7, func_176(iParam0, 1), true, true, true, false);
					}
					else if (_is_this_model_a_horse(iVar8))
					{
						if (_0xa0bc8faed8cfeb3c(iVar7))
						{
						}
						func_495(iVar7, 1);
					}
					if (func_496(iParam0))
					{
						set_ped_can_be_targetted(iVar7, false);
					}
					if (_is_this_model_a_horse(iVar8))
					{
						if (func_497(iParam0))
						{
							if (func_496(iParam0))
							{
							}
						}
						else
						{
							set_ped_can_be_targetted(iVar7, false);
						}
					}
					if (func_366(iParam0))
					{
						if (network_request_control_of_network_id(&(Local_13.f_31[iParam0])))
						{
							_0x7182edda1ee7db5a(&(Local_13.f_31[iParam0]));
						}
					}
					*bParam2 = 1;
					return false;
				}
				else
				{
					*bParam1 = 1;
				}
			}
		}
		else if (_0xa0bc8faed8cfeb3c(net_to_ped(&(Local_13.f_31[iParam0]))))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_366(int iParam0)
{
	return func_176(iParam0, 128);
}

int func_367(int iParam0, int iParam1)
{
	return Local_764.f_407[iParam0]->f_5[iParam1]->f_2;
}

bool func_368(int iParam0, int iParam1)
{
	return func_186(Local_764.f_407[iParam0]->f_5[iParam1]->f_1, 64);
}

bool func_369(int iParam0, int iParam1)
{
	return func_186(Local_764.f_407[iParam0]->f_5[iParam1]->f_1, 16);
}

Vector3 func_370(int iParam0, int iParam1)
{
	return Local_764.f_407[iParam0]->f_5[iParam1]->f_7;
}

bool func_371(int iParam0, int iParam1)
{
	return Local_764.f_407[iParam0]->f_5[iParam1]->f_13;
}

bool func_372(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_498(*uParam0, 0f, 0f, 0f))
	{
		return true;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	request_collision_at_coord(vVar4);
	while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			request_collision_at_coord(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bParam4)
	{
		vVar4 = { *uParam0 };
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		request_collision_at_coord(vVar4);
		while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				request_collision_at_coord(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

bool func_373(int iParam0, int iParam1)
{
	return is_bit_set(Local_764.f_407[iParam0]->f_3, iParam1);
}

bool func_374(int iParam0, int iParam1)
{
	return func_186(Local_764.f_407[iParam0]->f_5[iParam1]->f_1, 1);
}

bool func_375(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_499(iParam1))
	{
		return false;
	}
	*uParam0 = obj_to_net(create_object(iParam1, vParam2, true, bParam5, false, false, true));
	if (network_does_network_id_exist(*uParam0))
	{
		if (bParam5)
		{
			set_network_id_exists_on_all_machines(*uParam0, true);
		}
		return true;
	}
	return false;
}

bool func_376(int iParam0, int iParam1)
{
	return func_186(Local_764.f_407[iParam0]->f_5[iParam1]->f_1, 2);
}

bool func_377(int iParam0, int iParam1)
{
	return func_186(Local_764.f_407[iParam0]->f_5[iParam1]->f_1, 4);
}

bool func_378(int iParam0, int iParam1)
{
	return func_186(Local_764.f_407[iParam0]->f_5[iParam1]->f_1, 128);
}

Vector3 func_379(int iParam0, int iParam1)
{
	return Local_764.f_407[iParam0]->f_5[iParam1]->f_10;
}

bool func_380(int iParam0, int iParam1, int iParam2)
{
	return func_186(Local_764.f_407[iParam0]->f_5[iParam1]->f_1, iParam2);
}

float func_381(float fParam0)
{
	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

Vector3 func_382(vector3 vParam0)
{
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

bool func_383(int iParam0, int iParam1)
{
	return func_186(Local_764.f_407[iParam0]->f_5[iParam1]->f_1, 256);
}

void func_384(int iParam0, int iParam1, bool bParam2)
{
	freeze_entity_position(&(Local_764.f_407[iParam0]->f_5[iParam1]), bParam2);
}

bool func_385(int iParam0, int iParam1)
{
	return func_186(Local_764.f_407[iParam0]->f_5[iParam1]->f_1, 512);
}

int func_386(var uParam0, var uParam1)
{
	iVar0 = func_500(uParam1->f_1);
	if (!does_entity_exist(iVar0))
	{
		return 1;
	}
	if (func_324(128))
	{
		return 1;
	}
	if (is_entity_dead(iVar0))
	{
		func_501(uParam0, 10);
	}
	if (func_502() && uParam0->f_2 < 8)
	{
		switch (uParam0->f_1)
		{
			case 1:
				func_501(uParam0, 8);
				break;
			case 0:
				func_501(uParam0, 9);
				break;
		}
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_503(1))
			{
				switch (*uParam0)
				{
					case 1:
						func_501(uParam0, 1);
						break;
					case 2:
						func_501(uParam0, 3);
						break;
					case 3:
						func_501(uParam0, 5);
						break;
				}
			}
			break;
		case 5:
			if (func_504(uParam0, uParam1))
			{
				func_501(uParam0, 6);
			}
			break;
		case 6:
			if (func_505())
			{
				func_501(uParam0, 7);
			}
			break;
		case 7:
			break;
		case 1:
			if (is_ped_using_any_scenario(func_500(uParam1->f_1)))
			{
				func_501(uParam0, 2);
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 8:
			if (func_506(iVar0, 780511057))
			{
				func_501(uParam0, 11);
			}
			break;
		case 9:
			if (is_ped_fleeing(iVar0))
			{
				func_501(uParam0, 11);
			}
			break;
		case 11:
			if (get_ped_config_flag(iVar0, 580, true))
			{
				func_507(&(uParam0->f_6));
			}
			if ((func_508(uParam1, 32) && is_ped_fleeing(iVar0)) && func_509(&(uParam0->f_6)) > 10f)
			{
				iVar1 = func_510(iVar0);
				if (does_entity_exist(iVar1))
				{
					if ((func_470(iVar1, iVar0, 15f, 1, 1) || (func_470(iVar1, iVar0, 40f, 1, 1) && is_ped_shooting(iVar1))) || func_511(64))
					{
						func_512(uParam0, 1);
						func_501(uParam0, 8);
					}
				}
			}
			break;
		case 10:
			break;
	}
	return 0;
}

void func_387(struct<2> Param0, vector3 vParam2, int iParam5, var uParam6)
{
	if (func_254(vParam2))
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_20 = 255;
	Var0.f_5 = { Param0 };
	Var0.f_17 = { vParam2 };
	Var0.f_15 = uParam6;
	Var0.f_16 = iParam5;
	Var0.f_4 = 0;
	func_514(&Var0, func_513(0, 8));
}

bool func_388(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (!bParam2 || func_482(iVar0))
			{
				if (func_473(iParam0, fParam1, iVar0, 0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_389(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return func_186(Local_764.f_182.f_3, iParam0);
	}
	iVar0 = participant_id_to_int();
	bVar1 = func_186(Local_764.f_182.f_4, iParam0);
	if (!func_515(iVar0, 1))
	{
		return false;
	}
	if (bVar1 && !func_186(Local_59[iVar0]->f_6, iParam0))
	{
		func_252(&(Local_59[iVar0]->f_6), iParam0);
		Local_764.f_182.f_3 = (Local_764.f_182.f_3 && Local_59[iVar0]->f_6);
	}
	return func_186(Local_764.f_182.f_3, iParam0);
}

bool func_390(int iParam0)
{
	return func_186(Local_13.f_24.f_1, iParam0);
}

bool func_391(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	func_516(&iVar0, &iVar2, &iVar1);
	if (iParam2 > iVar1)
	{
		return false;
	}
	if (iVar0 >= iParam0)
	{
		if (iParam1 <= iVar2)
		{
			return true;
		}
	}
	return false;
}

bool func_392(var uParam0)
{
	return func_517(*uParam0, 1);
}

void func_393(var uParam0, bool bParam1)
{
	if (bParam1 || !func_392(uParam0))
	{
		func_437(uParam0);
	}
}

bool func_394(var uParam0, float fParam1)
{
	if (!func_392(uParam0))
	{
		return false;
	}
	if (func_518(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_395(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_396()
{
	clear_ped_tasks(func_266(0), 1, 0);
	switch (func_119())
	{
		case 0:
			clear_ped_tasks(func_266(7), 1, 0);
			set_anim_scene_entity(Local_764.f_182.f_5, "COUGAR", func_266(0), 0);
			set_anim_scene_entity(Local_764.f_182.f_5, "RACCOON", func_266(7), 0);
			set_anim_scene_origin(Local_764.f_182.f_5, func_519(func_266(7)), get_entity_rotation(func_266(7), 2), 2);
			start_anim_scene(Local_764.f_182.f_5);
			_set_anim_scene_playback_list_bool(Local_764.f_182.f_5, "pbl_action", true);
			break;
	}
}

void func_397(int iParam0)
{
	Local_13.f_24 = iParam0;
}

bool func_398(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return func_186(Local_764.f_182.f_4, iParam0);
	}
	else
	{
		iVar0 = participant_id_to_int();
		bVar1 = func_186(Local_764.f_182.f_4, iParam0);
		if (!func_515(iVar0, 1))
		{
			return false;
		}
		if (bVar1 && !func_186(Local_59[iVar0]->f_6, iParam0))
		{
			func_252(&(Local_59[iVar0]->f_6), iParam0);
		}
		return bVar1;
	}
	return false;
}

void func_399()
{
	switch (func_119())
	{
		case 0:
			if (_network_has_control_of_anim_scene(Local_764.f_182.f_5) && _is_anim_scene_started(Local_764.f_182.f_5, false))
			{
				set_anim_scene_bool(Local_764.f_182.f_5, "bStopLoop", true, false);
			}
			break;
	}
}

void func_400()
{
	switch (func_119())
	{
		case 0:
			if (_network_has_control_of_anim_scene(Local_764.f_182.f_5) && _is_anim_scene_started(Local_764.f_182.f_5, false))
			{
				set_anim_scene_bool(Local_764.f_182.f_5, "bStopLoop", false, false);
			}
			break;
	}
}

bool func_401(int iParam0)
{
	return func_251(Local_764.f_127.f_34, iParam0);
}

void func_402(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_403(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_404(int* iParam0, int iParam1)
{
	if (!get_event_data(1, iParam1, iParam0, 15))
	{
		return false;
	}
	if (iParam0->f_4.f_1 != Local_764.f_1)
	{
		return false;
	}
	if (iParam0->f_4 != iVar760)
	{
		return false;
	}
	if (iParam0->f_4.f_2 != Local_764.f_2)
	{
		return false;
	}
	if (iParam0->f_4.f_3 != Local_764.f_3)
	{
		return false;
	}
	return true;
}

void func_405(int iParam0)
{
	switch (iParam0->f_9)
	{
		case -922869466:
			func_520(iParam0);
			break;
		case 2126697993:
			func_521(iParam0);
			break;
		case -1485898032:
			func_522(iParam0);
			break;
	}
}

int func_406(int iParam0)
{
	return Local_764.f_240.f_7[iParam0]->f_3;
}

bool func_407(int iParam0)
{
	return func_373(0, iParam0);
}

bool func_408(int iParam0)
{
	return func_374(0, iParam0);
}

void func_409(int iParam0, int iParam1, bool bParam2)
{
	iVar2 = func_406(iParam0);
	bVar3 = func_364(iParam1, 1);
	if (!is_bit_set(Local_764.f_240.f_5, iParam0))
	{
		if (network_does_network_id_exist(&(Local_13.f_31[iParam0])))
		{
			iVar1 = net_to_ped(&(Local_13.f_31[iParam0]));
			if (!does_entity_exist(iVar1))
			{
				return;
			}
			Local_764.f_240.f_7[iParam0] = iVar1;
			if (bVar3)
			{
				if (is_entity_dead(iVar1) || is_entity_dead(player_ped_id()))
				{
					Local_59[iParam1]->f_7.f_2[iParam0] = -1f;
				}
				else
				{
					Local_59[iParam1]->f_7.f_2[iParam0] = vdist(get_entity_coords(iVar1, true, false), get_entity_coords(player_ped_id(), true, false));
				}
			}
			if (network_is_host_of_this_script())
			{
				if (func_366(iParam0))
				{
					if (network_does_network_id_exist(&(Local_13.f_31[iParam0])))
					{
						if (network_request_control_of_network_id(&(Local_13.f_31[iParam0])))
						{
							_0x7182edda1ee7db5a(&(Local_13.f_31[iParam0]));
						}
					}
				}
			}
			if (does_entity_exist(iVar1))
			{
				if (network_has_control_of_entity(iVar1))
				{
					func_523(iVar1, 1f, 0);
					sVar0 = func_524(iParam0);
					if (!_0x375f5870a7b8bec1(sVar0))
					{
						func_525(iVar1, sVar0, 1);
					}
				}
				if (func_496(iParam0))
				{
					set_ped_can_be_targetted(iVar1, false);
				}
				if (_is_this_model_a_horse(iVar2))
				{
					if (func_497(iParam0))
					{
						if (func_496(iParam0))
						{
						}
					}
					else
					{
						set_ped_can_be_targetted(iVar1, false);
					}
				}
				set_bit(&(Local_764.f_240.f_5), iParam0);
				if (bParam2)
				{
					func_526(iParam0);
				}
			}
		}
	}
}

void func_410(int iParam0)
{
	_set_ped_quality(iParam0, 0);
	set_ped_config_flag(iParam0, 297, true);
}

int func_411(int iParam0)
{
	switch (iParam0)
	{
		case -1892280447:
		case -1598866821:
		case -1295720802:
		case 674287411:
			return 0;
		case -1124266369:
		case -551216071:
			return 1;
		case -1149999295:
		case 759906147:
			return 2;
		case -915290938:
		case 367637652:
		case 1556473961:
			return 3;
		case -560342419:
		case -389300196:
		case 2028722809:
			return 4;
		case -1963605336:
		case -1754211037:
			return 5;
		case -1433814131:
		case 90264823:
			return 6;
		case -1189368951:
		case 1654513481:
			return 7;
		case -1307757043:
		case 480688259:
			return 8;
		case -557149691:
		case 252669332:
			return 9;
		case -1098441944:
		case -117665949:
			return 10;
		case -1568716381:
		case -511163808:
			return 11;
		case -1392359921:
		case -1143398950:
		case -885451903:
		case -829273561:
			return 12;
		case -2021043433:
		case -781967776:
			return 13;
		default:
			break;
	}
	return -1;
}

int func_412(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1718188498;
		case 1:
			return -1718188498;
		case 2:
			return -1754709769;
		case 3:
			return -1718188498;
		case 4:
			return 986272521;
		case 5:
			return 986272521;
		case 6:
			return 986272521;
		case 7:
			return 986272521;
		case 8:
			return 916613222;
		case 9:
			return 916613222;
		case 10:
			return -1718188498;
		case 11:
			return 986272521;
		case 12:
			return 986272521;
		case 13:
			return -1718188498;
		default:
			break;
	}
	return 0;
}

void func_413(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	_0x8b6f0f59b1b99801(iParam0, 2);
	_0x992187d975635df5(iParam0, 283549708);
	_0x0b787a37eedd226f(iParam0, iParam1);
	_0x6569f31a01b4c097(iParam0, 10, 1);
	_0x18ff3110cf47115d(iParam0, 23, 1);
	_0xae6004120c18df97(iParam0, 10, 1);
	_0xae6004120c18df97(iParam0, 1, 1);
	set_ped_config_flag(iParam0, 542, true);
	set_ped_config_flag(iParam0, 15, false);
	set_ped_config_flag(iParam0, 529, true);
	set_ped_config_flag(iParam0, 370, true);
	_0x4b436bac8cbe9b07(iParam0, 1, 1);
	set_ped_config_flag(iParam0, 588, true);
	set_ped_config_flag(iParam0, 568, true);
	set_ped_config_flag(iParam0, 585, true);
	set_ped_config_flag(iParam0, 297, true);
	set_ped_config_flag(iParam0, 583, true);
	set_ped_config_flag(iParam0, 305, true);
	set_ped_config_flag(iParam0, 306, true);
	set_ped_config_flag(iParam0, 186, true);
	set_ped_config_flag(iParam0, 465, true);
	set_ped_config_flag(iParam0, 388, true);
	set_ped_config_flag(iParam0, 587, true);
	set_animal_tuning_bool_param(iParam0, 76, true);
	set_animal_tuning_float_param(iParam0, 81, 0f);
	set_animal_tuning_float_param(iParam0, 82, 0f);
	set_animal_tuning_float_param(iParam0, 85, 0f);
	set_animal_tuning_float_param(iParam0, 83, 10f);
	set_animal_tuning_float_param(iParam0, 84, 0f);
	set_animal_tuning_float_param(iParam0, 89, 10f);
	set_animal_tuning_float_param(iParam0, 90, 0f);
	set_animal_tuning_float_param(iParam0, 105, 10f);
	set_animal_tuning_float_param(iParam0, 106, 0f);
	set_animal_tuning_float_param(iParam0, 78, 20f);
	set_ped_hearing_range(iParam0, 20f);
	if (iParam2 != -1)
	{
		iVar0 = func_411(get_entity_model(iParam0));
		iVar1 = func_527(iVar0, iParam2);
		set_entity_max_health(iParam0, iVar1);
		_set_entity_health(iParam0, iVar1, 0);
	}
}

void func_414(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	set_ped_combat_attributes(iParam0, 5, true);
	set_ped_combat_attributes(iParam0, 17, false);
	set_ped_combat_attributes(iParam0, 50, true);
	set_ped_combat_attributes(iParam0, 78, true);
	set_ped_combat_attributes(iParam0, 58, true);
	set_ped_flee_attributes(iParam0, 512, true);
	_0xc163dac52ac975d3(iParam0, 16);
}

void func_415(int iParam0, var uParam1)
{
	*uParam1 = iParam0;
	func_528(*uParam1);
}

void func_416(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (!_0x0e6846476906c9dd(player_id(), iParam0))
		{
			_0x543dfe14be720027(player_id(), iParam0, 1);
		}
		if (!func_529())
		{
			set_ped_config_flag(iParam0, 593, true);
		}
		else
		{
			set_ped_config_flag(iParam0, 593, false);
		}
	}
}

bool func_417(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_418(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		return true;
	}
	return false;
}

int func_419(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_34, iParam0, 0, false))
	{
		Var0 = { func_530(iParam0, 0, 1) };
		if (func_531(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_532(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_533(iParam0, Var0, Var0.f_4, 0) };
				func_534(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_535(0))
	{
		_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
		{
			return 0;
		}
		func_536(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
		func_537(iParam0, iParam1);
		return 1;
	}
	if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
	{
		return 0;
	}
	if (iParam1 > 0)
	{
	}
	_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return 1;
}

void func_420(int iParam0, int iParam1, float fParam2)
{
	bVar0 = true;
	iVar1 = get_entity_model(iParam0);
	switch (iVar1)
	{
		case -1273613561:
		case -776789570:
		case -763072541:
		case -486390692:
		case 50483426:
		case 215164947:
		case 247176142:
		case 347599949:
		case 852072701:
		case 861896523:
		case 1017000466:
		case 1245530084:
		case 1336863290:
		case 1485366395:
			*fParam2 = get_random_float_in_range(0.3f, 0.5f);
			break;
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			*fParam2 = get_random_float_in_range(0.125f, 0.375f);
			break;
		case 363815774:
			*fParam2 = get_random_float_in_range(0.7f, 0.875f);
			break;
		case -1910990966:
		case -1421951598:
		case 1921874948:
			*fParam2 = get_random_float_in_range(0.4f, 0.6f);
			break;
		case -1090280091:
		case -1076294934:
			*fParam2 = get_random_float_in_range(0.125f, 0.25f);
			break;
		case -1011228908:
		case -1008616424:
		case 424175505:
			*fParam2 = get_random_float_in_range(0.3f, 0.5f);
			break;
		case -1208814201:
		case -390289284:
		case 1112571710:
		case 1478983280:
			*fParam2 = get_random_float_in_range(0.125f, 0.125f);
			break;
		default:
			*fParam2 = get_random_float_in_range(0.3f, 0.4f);
			if (get_ped_relationship_group_hash(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		set_ped_config_flag(iParam0, 361, true);
	}
}

bool func_421(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_422(int iParam0)
{
	return iParam0;
}

void func_423(int iParam0, float fParam1)
{
	Local_764.f_240.f_7[iParam0]->f_9 = fParam1;
}

bool func_424(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!does_entity_exist((*uParam1)[iVar0]->f_6))
		{
			(*uParam1)[iVar0]->f_6 = iParam0;
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_425(int iParam0)
{
	iVar0 = func_411(get_entity_model(iParam0));
	switch (iVar0)
	{
		case 0:
			return "LEGENDARY_ALLIGATOR_CALL_SOUNDS";
		case 1:
			return "LEGENDARY_BEAR_CALL_SOUNDS";
		case 2:
			return "LEGENDARY_BEAVER_CALL_SOUNDS";
		case 3:
			return "LEGENDARY_BISON_CALL_SOUNDS";
		case 4:
			return "LEGENDARY_BOAR_CALL_SOUNDS";
		case 5:
			return "LEGENDARY_BUCK_CALL_SOUNDS";
		case 6:
			return "LEGENDARY_COUGAR_CALL_SOUNDS";
		case 7:
			return "LEGENDARY_PANTHER_CALL_SOUNDS";
		case 8:
			return "LEGENDARY_COYOTE_CALL_SOUNDS";
		case 13:
			return "LEGENDARY_ELK_CALL_SOUNDS";
		case 9:
			return "LEGENDARY_FOX_CALL_SOUNDS";
		case 10:
			return "LEGENDARY_MOOSE_CALL_SOUNDS";
		case 12:
			return "LEGENDARY_WOLF_CALL_SOUNDS";
		default:
			break;
	}
	return "";
}

void func_426(var uParam0, char* sParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6)
{
	StringCopy(&(uParam0->f_52), sParam1, 64);
	uParam0->f_37 = iParam2;
	uParam0->f_38 = fParam3;
	uParam0->f_40 = fParam4;
	uParam0->f_41 = fParam5;
	uParam0->f_39 = iParam6;
}

void func_427(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9)
{
	uParam0->f_43 = fParam1;
	uParam0->f_44 = fParam2;
	uParam0->f_45 = fParam3;
	uParam0->f_46 = fParam4;
	uParam0->f_47 = fParam5;
	uParam0->f_48 = fParam6;
	uParam0->f_49 = fParam7;
	uParam0->f_50 = fParam8;
	uParam0->f_51 = fParam9;
}

void func_428(var uParam0, int iParam1)
{
	func_277(&(uParam0->f_66), iParam1);
}

void func_429(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_430(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, bool bParam11, int iParam12)
{
	if (!_does_volume_exist(*uParam0))
	{
		if (bParam11)
		{
			if (iParam12 == 1)
			{
				*uParam0 = _0x0eb78c2b156635b1(665633627, vParam1, vParam4, vParam7);
				_0x5b23dff8e0948bb2(*uParam0, 1);
			}
			else
			{
				func_538(uParam0, vParam1, vParam4, vParam7, iParam10);
			}
		}
		else if (iParam12 == 1)
		{
			*uParam0 = _0x0eb78c2b156635b1(-1612834106, vParam1, vParam4, vParam7);
			_0x5b23dff8e0948bb2(*uParam0, 1);
		}
		else
		{
			func_539(uParam0, vParam1, vParam4, vParam7, iParam10);
		}
	}
}

var func_431(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_540(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

struct<2> func_432(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_541(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_542(iParam1, iVar4) };
	if (!_stat_id_is_valid(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_433()
{
	Local_764.f_240.f_6 = 0;
	Local_764.f_240.f_2 = 0;
	Local_764.f_240.f_1 = -1;
}

void func_434(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_764.f_240.f_2 = (Local_764.f_240.f_2 || Local_59[iParam0]->f_7);
		Local_764.f_240.f_1 = (Local_764.f_240.f_1 && Local_59[iParam0]->f_7);
		Local_764.f_240.f_6 = (Local_764.f_240.f_6 || Local_59[iParam0]->f_7.f_1);
	}
}

void func_435(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		Local_59[iParam2]->f_21 = (Local_59[iParam2]->f_21 || Local_59[iParam0]->f_21);
	}
}

int func_436(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam0) || !does_entity_exist(iParam1))
	{
		return 0;
	}
	fVar0 = vdist(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	Local_59[iParam3]->f_7.f_2[iParam2] = fVar0;
	if (fVar0 > Local_764.f_240.f_7[iParam2]->f_9)
	{
		return 0;
	}
	return 1;
}

void func_437(var uParam0)
{
	func_543(uParam0, 0f);
}

bool func_438(int iParam0)
{
	iVar0 = iParam0;
	if (does_entity_exist(func_266(iVar0)))
	{
		return true;
	}
	if (func_398(131072, 0))
	{
		switch (iVar0)
		{
			case 1:
				if (func_390(4))
				{
					return true;
				}
				if (get_time_difference(Local_13.f_24.f_3, get_network_time_accurate()) > 2000)
				{
					return func_544(iVar0);
				}
				break;
		}
	}
	return false;
}

void func_439(int iParam0, int iParam1)
{
	func_275(&(Local_764.f_240.f_7[iParam0]->f_2), iParam1);
}

bool func_440(int iParam0, int iParam1)
{
	if (!func_364(iParam1, 0))
	{
		if (!func_257(&iParam1))
		{
			return false;
		}
	}
	return func_186(Local_59[iParam1]->f_7, iParam0);
}

void func_441(int iParam0)
{
	if (!func_257(&iVar0))
	{
		return;
	}
	func_252(&(Local_59[iVar0]->f_7), iParam0);
}

void func_442(int iParam0)
{
	if (!func_257(&iVar0))
	{
		return;
	}
	func_275(&(Local_59[iVar0]->f_7), iParam0);
}

float func_443()
{
	if (Local_764.f_428.f_3 == 0)
	{
		Local_764.f_428.f_3 = get_game_timer();
		return 0.03125f;
	}
	iVar0 = get_game_timer();
	fVar1 = (to_float((iVar0 - Local_764.f_428.f_3)) * 0.001f);
	Local_764.f_428.f_3 = iVar0;
	return fVar1;
}

bool func_444(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (bParam1)
		{
			return is_ped_dead_or_dying(iParam0, true);
		}
		else
		{
			return is_entity_dead(iParam0);
		}
	}
	return true;
}

bool func_445(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_545(vVar0, vParam0) > func_545(vVar0, get_entity_coords(iParam3, true, false));
}

int func_446(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	iParam2 = iParam2;
	if (!does_entity_exist(uParam0->f_6) || (bParam7 && is_entity_dead(uParam0->f_6)))
	{
		return 0;
	}
	if (bParam5)
	{
		fVar0 = (fParam6 * fParam6);
	}
	else
	{
		fVar0 = vdist2(Global_35, get_entity_coords(uParam0->f_6, false, false));
	}
	switch (*uParam0)
	{
		case 0:
			if (is_entity_a_ped(uParam0->f_6) && !_0x5102307ce88798eb(get_ped_index_from_entity_index(uParam0->f_6)))
			{
				request_ped_visibility_tracking(get_ped_index_from_entity_index(uParam0->f_6));
			}
			else if (func_546(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (is_entity_occluded(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (is_entity_a_ped(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = _0x164cecc59e70df86(get_ped_index_from_entity_index(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = is_tracked_ped_visible(get_ped_index_from_entity_index(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = _0xc8ccdb712fbcba92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (is_entity_occluded(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !is_entity_a_ped(uParam0->f_6))
					{
						fVar0 = vdist2(Global_35, get_entity_coords(uParam0->f_6, false, false));
					}
					if (func_547(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_548() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_447(var uParam0, int iParam1, float fParam2)
{
	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((does_entity_exist((*uParam0)[iVar0]->f_6) && (*uParam0)[iVar0]->f_7 > 0f) && is_entity_on_screen((*uParam0)[iVar0]->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + (*uParam0)[iVar0]->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return false;
	}
	if (fVar2 < fParam2)
	{
		return false;
	}
	func_180(uParam0);
	return true;
}

void func_448()
{
	Local_764.f_172.f_1 = 0;
	Local_764.f_172.f_2 = -1;
	Local_764.f_25.f_22 = 0;
	Local_764.f_25.f_23 = -1;
	Local_764.f_53.f_73 = 0;
	Local_764.f_53.f_72 = -1;
	iVar0 = 0;
	while (iVar0 <= (network_get_max_num_participants() - 1))
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_764.f_172.f_1 = (Local_764.f_172.f_1 || Local_59[iVar0]->f_4);
			Local_764.f_172.f_2 = (Local_764.f_172.f_2 && Local_59[iVar0]->f_4);
			Local_764.f_25.f_22 = (Local_764.f_25.f_22 || Local_59[iVar0]->f_5);
			Local_764.f_25.f_23 = (Local_764.f_25.f_23 && Local_59[iVar0]->f_5);
			Local_764.f_53.f_73 = (Local_764.f_53.f_73 || Local_59[iVar0]->f_1);
			Local_764.f_53.f_72 = (Local_764.f_53.f_72 && Local_59[iVar0]->f_1);
		}
		iVar0++;
	}
}

void func_449()
{
	Local_764.f_172.f_4++;
	if (Local_764.f_172.f_4 >= 11)
	{
		Local_764.f_172.f_4 = 0;
	}
	iVar0 = func_500(Local_764.f_172.f_4);
	if (is_bit_set(Local_764.f_172.f_3, Local_764.f_172.f_4))
	{
		return;
	}
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_ped_human(iVar0))
	{
		return;
	}
	if (func_549(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		return;
	}
	if (network_has_control_of_entity(iVar0) && is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 297, false);
		func_550(Local_764.f_172.f_4);
	}
}

void func_450()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		if (get_event_at_index(1, iVar0) != -507840394)
		{
		}
		else if (!get_event_data(1, iVar0, &iVar1, 4))
		{
		}
		else if (iVar1 != 194)
		{
		}
		else
		{
			if (!get_event_data(1, iVar0, &uVar5, 6))
			{
				return;
			}
			func_551(&uVar5, &(Local_764.f_179));
		}
		iVar0++;
	}
}

void func_451(var uParam0)
{
	if (uParam0->f_1 == 0)
	{
		return;
	}
	iVar0 = (Global_1296859->f_21 - uParam0->f_1) * 1000;
	if (iVar0 < 4000)
	{
		return;
	}
	else if (iVar0 > 15000 && func_251(uParam0->f_2, 4))
	{
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
		return;
	}
	else if (!func_251(uParam0->f_2, 4))
	{
		if (!does_entity_exist(Global_34))
		{
			return;
		}
		fVar1 = func_552(Global_34, *uParam0, 1, 1);
		bVar2 = ((does_entity_exist(*uParam0) && _0x083d497d57b7400f(*uParam0)) && !is_entity_visible(*uParam0));
		if (fVar1 < 300f && (func_251(uParam0->f_2, 1) || func_251(uParam0->f_2, 2)))
		{
			if (!func_553())
			{
				if (!bVar2)
				{
					func_554(*uParam0);
				}
			}
		}
		if (!bVar2 && fVar1 < 300f)
		{
			func_555(*uParam0);
		}
		if (func_251(uParam0->f_2, 1))
		{
			func_556(2, *uParam0);
		}
		if (func_251(uParam0->f_2, 1) && does_entity_exist(*uParam0))
		{
			Var3 = { func_542(1368284188, -1530824760) };
			if (_0x5420d398a42917fc(*uParam0, &Var3))
			{
				func_557(Var3, 1);
			}
		}
		func_277(&(uParam0->f_2), 4);
	}
}

void func_452(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_500(uParam1->f_1);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	bVar3 = network_has_control_of_entity(iVar0);
	if (!func_558() && func_474(uParam1->f_1, 40f, 60f, 100f, 1065353216, 5, 0, 1))
	{
		func_559();
	}
	if (!func_502())
	{
		if (func_560(iVar0, &(Local_764.f_127)) || func_476(iVar0, &(Local_764.f_127), 0))
		{
			func_561();
			func_562(uParam0, uParam1, 0, 0);
		}
	}
	if ((func_563(4, -1) && !func_511(8)) && !func_564(uParam0, iVar0))
	{
		if (network_has_control_of_entity(iVar0))
		{
			func_562(uParam0, uParam1, 0, 0);
		}
		else
		{
			network_request_control_of_entity(iVar0);
		}
	}
	if (!func_508(uParam1, 8) && func_502())
	{
		iVar1 = 0;
		while (iVar1 <= (network_get_max_num_participants() - 1))
		{
			if (network_is_participant_active(int_to_participantindex(iVar1)) && func_563(4, -1))
			{
				uParam1->f_20 = int_to_playerindex(iVar1);
			}
			else
			{
				iVar1++;
			}
		}
		if (uParam0->f_2 == 7 && !func_508(uParam1, 2))
		{
			func_565(uParam1->f_16);
			func_248(uParam1, 2);
		}
		func_562(uParam0, uParam1, 0, 0);
		func_566(uParam0, uParam1);
		func_567(&(Local_764.f_53));
		func_568(&(Local_764.f_53));
		func_248(uParam1, 8);
	}
	func_569(uParam0, uParam1, uParam2);
	if (func_508(uParam1, 8))
	{
		func_570(uParam0, uParam1);
	}
	else
	{
		func_571(uParam1);
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (!func_563(1, -1))
			{
				iVar1 = 0;
				while (iVar1 <= 10)
				{
					iVar2 = &Local_764.f_240.f_7[iVar1];
					if (iVar1 != uParam1->f_1 && does_entity_exist(iVar2))
					{
						func_572(iVar1);
					}
					iVar1++;
				}
				func_573(1);
			}
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			if (_network_has_control_of_anim_scene(uParam1->f_16))
			{
				if (!get_anim_scene_bool(uParam1->f_16, "bStopLoop"))
				{
					set_anim_scene_bool(uParam1->f_16, "bStopLoop", true, false);
				}
			}
			if (!func_508(uParam1, 4))
			{
				if (func_574(uParam1->f_16) || _0xb89fcff19dafff28(uParam1->f_16, &(uParam1->f_14)))
				{
					func_575(uParam1->f_16);
					func_248(uParam1, 4);
				}
			}
			else
			{
				func_576();
			}
			break;
		case 1:
			if (bVar3 && !is_ped_using_any_scenario(iVar0))
			{
				if (func_508(uParam1, 1))
				{
					iVar4 = _find_closest_active_scenario_point_of_type(get_entity_coords(iVar0, true, false), uParam1->f_3, 2f, 1, false);
					if (_does_scenario_point_exist(iVar4))
					{
						_task_use_scenario_point(iVar0, iVar4, 0, 0, false, true, 0, false, -1f, false);
					}
					else
					{
						task_start_scenario_at_position(iVar0, uParam1->f_3, Local_764.f_240.f_7[uParam1->f_1]->f_6, Local_764.f_240.f_7[uParam1->f_1]->f_5, 0, false, true, 0, -1f, false);
					}
				}
				else
				{
					task_start_scenario_at_position(iVar0, uParam1->f_3, Local_764.f_240.f_7[uParam1->f_1]->f_6, Local_764.f_240.f_7[uParam1->f_1]->f_5, 0, false, true, 0, -1f, false);
				}
			}
			break;
		case 2:
			break;
		case 3:
			if (bVar3 && !func_577(iVar0, 923520851))
			{
				task_wander_in_area(iVar0, Local_764.f_240.f_7[uParam1->f_1]->f_6, uParam1->f_26, 1077936128, 1086324736, 0);
			}
			break;
		case 4:
			break;
		case 8:
			func_562(uParam0, uParam1, 0, 0);
			break;
		case 9:
			func_562(uParam0, uParam1, 0, 0);
			break;
		case 11:
			if ((!is_entity_dead(iVar0) && !get_ped_config_flag(iVar0, 580, true)) && !func_563(64, -1))
			{
				if (func_470(Global_34, iVar0, 15f, 1, 1) || (func_470(Global_34, iVar0, 40f, 1, 1) && is_ped_shooting(Global_34)))
				{
					func_573(64);
				}
			}
			else if (func_563(64, -1))
			{
				if (!func_470(Global_34, iVar0, 40f, 1, 1) || get_ped_config_flag(iVar0, 580, true))
				{
					func_578(64);
				}
			}
			if (((bVar3 && !is_entity_dead(iVar0)) && !get_ped_config_flag(iVar0, 580, true)) && (get_frame_count() % 10) == 0)
			{
				iVar5 = get_ped_index_from_entity_index(_0xcd66fea29400a0b5(iVar0));
				if (does_entity_exist(iVar5) && is_ped_a_player(iVar5))
				{
					iVar6 = network_get_player_index_from_ped(iVar5);
					iVar7 = iVar6;
					if (func_481(iVar7, 1, 1))
					{
						if (func_579(4, iVar7))
						{
							func_562(uParam0, uParam1, 1, 1);
						}
					}
				}
			}
			if (!func_511(16))
			{
				if (bVar3)
				{
					set_ped_keep_task(iVar0, true);
					set_blocking_of_non_temporary_events(iVar0, false);
					func_573(16);
				}
			}
			else if ((((Local_13.f_7.f_1 == 0 && !is_entity_dead(iVar0)) && !get_ped_config_flag(iVar0, 580, false)) && !is_ped_fleeing(iVar0)) && is_ped_still(iVar0))
			{
				func_562(uParam0, uParam1, 1, 1);
			}
			if ((!func_511(32) && bVar3) && is_ped_in_combat(iVar0, 0))
			{
				if (is_entity_dead(get_player_ped(uParam1->f_20)) || !func_470(get_player_ped(uParam1->f_20), iVar0, 100f, 1, 1))
				{
					task_animal_unalerted(iVar0, -1, 0, 0, 0);
					set_ped_keep_task(iVar0, true);
					set_blocking_of_non_temporary_events(iVar0, false);
					func_573(32);
				}
			}
			break;
		case 10:
			break;
	}
}

void func_453()
{
	if (func_580(256))
	{
		return;
	}
	if (!does_entity_exist(Local_764.f_53))
	{
		return;
	}
	if (is_entity_dead(Local_764.f_53))
	{
		return;
	}
	if (!func_470(Global_34, Local_764.f_53, 50f, 1, 1))
	{
		func_395(&(Local_764.f_127.f_42));
		func_581(4);
		func_581(8);
		func_581(16);
		func_581(32);
		func_581(64);
		return;
	}
	if ((_is_ped_hogtied(Global_34) || _0x833f0053340ef413(Global_34)) || is_ped_in_any_vehicle(Global_34, true))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_582(Local_764.f_53, Global_34, &(Local_764.f_127.f_39), &(Local_764.f_127.f_38));
	}
	if (!func_579(4, -1))
	{
		if (iVar0 == 1)
		{
			func_393(&(Local_764.f_127.f_42), 0);
			func_583(4);
		}
	}
	else if (iVar0 == 0)
	{
		func_395(&(Local_764.f_127.f_42));
		func_581(4);
		func_581(8);
		func_581(16);
		func_581(32);
		func_581(64);
		func_581(128);
	}
	else
	{
		if (!func_579(128, -1) && func_476(Local_764.f_53, &(Local_764.f_127), 0))
		{
			func_583(128);
		}
		if (func_518(&(Local_764.f_127.f_42)) > 15f)
		{
			if (!func_579(64, -1))
			{
				func_583(64);
			}
		}
		else if (func_518(&(Local_764.f_127.f_42)) > 10f)
		{
			if (!func_579(32, -1))
			{
				func_583(32);
			}
		}
		else if (func_518(&(Local_764.f_127.f_42)) > 8f)
		{
			if (!func_579(16, -1))
			{
				func_583(16);
			}
		}
		else if (func_518(&(Local_764.f_127.f_42)) > 5f)
		{
			if (!func_579(8, -1))
			{
				func_583(8);
			}
		}
	}
}

bool func_454(var uParam0)
{
	if (!func_482(255))
	{
		return false;
	}
	if (!func_469(&(Local_764.f_53), 256) && func_470(Global_34, *uParam0, Global_1901947->f_852.f_3, 1, 0))
	{
		func_584();
	}
	else if (func_469(&(Local_764.f_53), 256) && !func_470(Global_34, *uParam0, (Global_1901947->f_852.f_3 + 50f), 1, 0))
	{
		func_585();
	}
	if ((uParam0->f_65 < 2 && func_586()) || Local_13.f_18.f_1)
	{
		uParam0->f_65 = 2;
	}
	switch (uParam0->f_65)
	{
		case 0:
			if (!func_587(uParam0))
			{
				return false;
			}
			if (func_588(Global_34, uParam0->f_60, uParam0->f_40, 1, 1))
			{
				if ((get_frame_count() % 5) == 0)
				{
					get_posix_time(&uVar0, &uVar0, &uVar0, &uVar0, &uVar0, &iVar1);
					iVar2 = (iVar1 % round(uParam0->f_38));
					if (iVar2 < 5)
					{
						func_589(uParam0, 1);
					}
				}
			}
			break;
		case 1:
			if (!func_588(Global_34, uParam0->f_60, (uParam0->f_40 + 20f), 1, 1))
			{
				func_395(&(uParam0->f_67));
				func_589(uParam0, 0);
			}
			else if (func_588(Global_34, uParam0->f_60, (uParam0->f_42 + 10f), 1, 1) || func_469(uParam0, 1))
			{
				func_395(&(uParam0->f_67));
				func_589(uParam0, 2);
			}
			else if (uParam0->f_37 == -1 || uParam0->f_64 < uParam0->f_37)
			{
				if (!func_392(&(uParam0->f_67)) || func_518(&(uParam0->f_67)) > uParam0->f_38)
				{
					if (func_588(Global_34, uParam0->f_60, (uParam0->f_42 + 20f), 1, 1))
					{
						uParam0->f_41 = (uParam0->f_41 / 4f);
					}
					if (func_469(uParam0, 8))
					{
						vVar3 = { func_590(get_entity_coords(*uParam0, true, false), uParam0->f_41, 0f) };
						func_591(vVar3, uParam0->f_39);
					}
					else
					{
						vVar3 = { func_590(uParam0->f_60, uParam0->f_41, 0f) };
						func_591(vVar3, uParam0->f_39);
					}
					func_437(&(uParam0->f_67));
					func_592();
					func_593(uParam0, uParam0->f_60);
					uParam0->f_64++;
					if (uParam0->f_64 == 1)
					{
						iVar6 = func_594(21, 34);
						if (iVar6 <= 3)
						{
							func_337("LA_H_BLIPPED");
						}
					}
				}
			}
			break;
		case 2:
			return true;
	}
	return false;
}

int func_455(var uParam0)
{
	if (!func_482(255))
	{
		return 0;
	}
	if (does_entity_exist(*uParam0))
	{
		if ((!func_579(2, -1) && !is_entity_dead(*uParam0)) && is_ped_fleeing(*uParam0))
		{
			func_583(2);
		}
		if (func_595(&(Local_13.f_20)))
		{
			bVar2 = true;
		}
		else if (func_580(2))
		{
			bVar2 = true;
		}
		func_596(*uParam0, &(Local_13.f_20), bVar2);
	}
	if ((uParam0->f_2 < 12 && does_entity_exist(*uParam0)) && is_entity_dead(*uParam0))
	{
		if (does_blip_exist(uParam0->f_1))
		{
			remove_blip(&(uParam0->f_1));
		}
		set_ped_config_flag(*uParam0, 297, false);
		func_597(uParam0, 12);
	}
	if ((uParam0->f_2 < 11 && get_ped_config_flag(*uParam0, 580, true)) && is_ped_in_writhe(*uParam0))
	{
		if (does_blip_exist(uParam0->f_1))
		{
			remove_blip(&(uParam0->f_1));
		}
		func_597(uParam0, 11);
	}
	if (func_469(uParam0, 64) && does_blip_exist(uParam0->f_63))
	{
		remove_blip(&(uParam0->f_63));
	}
	if (uParam0->f_2 <= 3 && func_586())
	{
		uParam0->f_2 = 3;
		func_568(uParam0);
	}
	if (func_598(uParam0))
	{
		if (does_entity_exist(*uParam0) && !is_entity_dead(*uParam0))
		{
			if (func_470(Global_34, *uParam0, uParam0->f_42, 0, 1) && uParam0->f_2 >= 4)
			{
				if (!func_599())
				{
					func_600();
				}
				if (!func_333())
				{
					func_601();
				}
			}
		}
	}
	if (((uParam0->f_2 < 3 && Local_13.f_18.f_1) && does_entity_exist(*uParam0)) && !func_602(*uParam0))
	{
		func_597(uParam0, 3);
		func_567(uParam0);
		func_568(uParam0);
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_469(uParam0, 4))
			{
				func_597(uParam0, 2);
			}
			if (func_603(uParam0) || func_469(uParam0, 1))
			{
				func_597(uParam0, 1);
			}
			break;
		case 1:
			if (!does_blip_exist(uParam0->f_63))
			{
				uParam0->f_63 = _blip_add_for_coord(func_604(), uParam0->f_60);
				_blip_set_modifier(uParam0->f_63, -528849255);
				set_blip_name_from_text_file(uParam0->f_63, "LA_CLUE");
				func_600();
				func_597(uParam0, 2);
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 <= 10)
			{
				iVar0 = func_500(iVar1);
				if ((does_entity_exist(iVar0) && is_bit_set(uParam0->f_71, iVar1)) && func_474(iVar1, uParam0->f_43, uParam0->f_44, uParam0->f_45, 1065353216, 5, 0, 1))
				{
					func_567(uParam0);
				}
				else
				{
					iVar1++;
				}
			}
			iVar0 = *uParam0;
			if (does_entity_exist(iVar0) && func_474(uParam0->f_70, uParam0->f_43, uParam0->f_44, uParam0->f_45, 1065353216, 5, 0, 1))
			{
				func_567(uParam0);
			}
			if (func_469(uParam0, 1))
			{
				func_597(uParam0, 3);
			}
			break;
		case 3:
			iVar0 = *uParam0;
			if (does_blip_exist(uParam0->f_63))
			{
				remove_blip(&(uParam0->f_63));
			}
			if (does_entity_exist(iVar0) && func_474(uParam0->f_70, uParam0->f_43, uParam0->f_44, uParam0->f_45, 1065353216, 5, 0, 1))
			{
				func_568(uParam0);
			}
			if (func_598(uParam0))
			{
				if (_0x6dac799857ef3f11(Global_34, *uParam0) || _0x920684be432875b1(*uParam0))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_605(*uParam0, &(uParam0->f_1), 0, bVar3);
				func_606(&(uParam0->f_67), -5f, 1);
				func_597(uParam0, 4);
			}
			break;
		case 4:
			if (!is_ped_fleeing(*uParam0))
			{
				if (!func_392(&(uParam0->f_67)))
				{
					func_393(&(uParam0->f_67), 0);
				}
				else if (func_518(&(uParam0->f_67)) > 5f && !func_470(*uParam0, Global_34, uParam0->f_47, 1, 1))
				{
					func_395(&(uParam0->f_67));
					func_597(uParam0, 5);
				}
			}
			else if (!func_392(&(uParam0->f_67)))
			{
				func_393(&(uParam0->f_67), 0);
			}
			else if (func_518(&(uParam0->f_67)) > 5f && !func_474(uParam0->f_70, uParam0->f_46, (uParam0->f_44 + 10f), (uParam0->f_45 + 10f), 1f, 0, 0, 1))
			{
				func_395(&(uParam0->f_67));
				func_597(uParam0, 5);
			}
			break;
		case 5:
			if (!func_392(&(uParam0->f_67)))
			{
				func_393(&(uParam0->f_67), 0);
			}
			else if (func_518(&(uParam0->f_67)) > uParam0->f_49)
			{
				func_395(&(uParam0->f_67));
				func_607(&(uParam0->f_1));
				func_597(uParam0, 7);
			}
			break;
		case 7:
			if (!func_392(&(uParam0->f_67)))
			{
				func_393(&(uParam0->f_67), 0);
			}
			else if (func_518(&(uParam0->f_67)) > 1f && func_474(uParam0->f_70, uParam0->f_46, uParam0->f_44, uParam0->f_45, 0f, 1, 0, 0))
			{
				func_608(&(uParam0->f_1));
				func_395(&(uParam0->f_67));
				func_597(uParam0, 4);
			}
			else if (func_518(&(uParam0->f_67)) > (uParam0->f_50 + ((vdist(Global_35, get_entity_coords(*uParam0, true, false)) / 25f) * uParam0->f_51)) || ((func_392(&(Local_764.f_19.f_3)) && func_518(&(Local_764.f_19.f_3)) < Global_1901947->f_852.f_4) && func_518(&(uParam0->f_67)) > 2f))
			{
				func_609(&(uParam0->f_1));
				if (func_469(uParam0, 32))
				{
					func_610(*uParam0, uParam0->f_39);
				}
				func_395(&(uParam0->f_67));
				func_597(uParam0, 5);
			}
			else if (!func_470(Global_34, *uParam0, uParam0->f_48, 1, 1) && (!func_392(&(Local_764.f_19.f_3)) || func_518(&(Local_764.f_19.f_3)) > Global_1901947->f_852.f_4))
			{
				func_395(&(uParam0->f_67));
				func_597(uParam0, 8);
			}
			break;
		case 8:
			if (!func_392(&(uParam0->f_67)))
			{
				func_393(&(uParam0->f_67), 0);
			}
			if (func_470(Global_34, *uParam0, (uParam0->f_48 - 10f), 1, 1) || (func_392(&(Local_764.f_19.f_3)) && func_518(&(Local_764.f_19.f_3)) < Global_1901947->f_852.f_4))
			{
				func_395(&(uParam0->f_67));
				func_597(uParam0, 7);
			}
			break;
		case 9:
			if (!does_blip_exist(uParam0->f_1))
			{
				func_605(*uParam0, &(uParam0->f_1), 0, 1);
			}
			if (!func_470(Global_34, *uParam0, (50f + 10f), 1, 1))
			{
				func_597(uParam0, 10);
			}
			break;
		case 10:
			if (does_blip_exist(uParam0->f_1))
			{
				remove_blip(&(uParam0->f_1));
			}
			if (func_470(Global_34, *uParam0, 50f, 1, 1))
			{
				func_597(uParam0, 9);
			}
			break;
		case 11:
			if (!get_ped_config_flag(*uParam0, 580, true) && !is_ped_in_writhe(*uParam0))
			{
				if (_0x6dac799857ef3f11(Global_34, *uParam0))
				{
					if (func_470(Global_34, *uParam0, 50f, 1, 1))
					{
						func_597(uParam0, 9);
					}
					else
					{
						func_597(uParam0, 10);
					}
				}
				else
				{
					func_597(uParam0, 3);
				}
			}
			break;
		case 12:
			return 1;
	}
	return 0;
}

void func_456(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if ((Local_13.f_18 == 255 && !func_324(2)) || (Local_13.f_18 != 255 && Local_13.f_18 != player_id()))
	{
		if (is_entity_dead(iParam0) && _0xef2d9ed7ce684f08(iParam0) == Global_34)
		{
			func_611();
			func_612(2);
		}
	}
}

void func_457(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!func_324(1))
	{
		if ((!is_entity_dead(iParam0) && get_ped_config_flag(iParam0, 580, true)) && _0xef2d9ed7ce684f08(iParam0) == Global_34)
		{
			func_613();
			func_612(1);
			func_614(2);
		}
	}
}

void func_458(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!func_324(16))
	{
		if (is_entity_dead(iParam0) && get_ped_index_from_entity_index(func_615(Global_34)) == iParam0)
		{
			func_616();
			func_612(16);
		}
	}
}

void func_459(int iParam0, float fParam1)
{
	if (network_is_host_of_this_script())
	{
		if (!Local_13.f_18.f_1 && func_335(32))
		{
			Local_13.f_18.f_1 = 1;
		}
	}
	if (((!func_324(4) && (get_frame_count() % 10) == 0) && does_entity_exist(Local_764.f_53)) && _0x920684be432875b1(Local_764.f_53))
	{
		func_612(4);
	}
	if (!Local_13.f_18.f_1 && !func_334(32, -1))
	{
		if (Local_764.f_127.f_33 != 0)
		{
			func_614(32);
		}
	}
	if (!func_324(128))
	{
		if (((((func_324(8) || func_324(16)) || func_324(4)) || func_335(8)) || (func_335(2) && is_entity_dead(iParam0))) || (is_entity_dead(iParam0) && !_0xa4b6432e3880f2f9(iParam0)))
		{
			func_612(128);
		}
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (network_has_control_of_entity(iParam0))
	{
		if ((!func_334(4, -1) && func_324(128)) && func_550(Local_764.f_53.f_70))
		{
			func_614(4);
		}
		if (!func_334(8, -1) && func_617(1))
		{
			if (is_entity_dead(iParam0))
			{
				func_614(16);
			}
			if (func_618(Local_764.f_53.f_70))
			{
				func_614(8);
			}
		}
	}
	if (!func_334(1, -1))
	{
		if (((func_310() && !func_470(Global_34, iParam0, fParam1, 1, 1)) && Local_764.f_19.f_2 != 2) && (!func_392(&(Local_764.f_19.f_3)) || func_518(&(Local_764.f_19.f_3)) > Global_1901947->f_852.f_4))
		{
			func_614(1);
		}
	}
	else
	{
		if (func_392(&(Local_764.f_19.f_3)) && func_518(&(Local_764.f_19.f_3)) < 20f)
		{
			fVar0 = 5f;
		}
		else
		{
			fVar0 = 30f;
		}
		if (func_470(Global_34, iParam0, (fParam1 - fVar0), 1, 1))
		{
			func_619(1);
		}
	}
}

bool func_460()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

bool func_461(int iParam0)
{
	if (func_620(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

void func_462(int iParam0, int iParam1)
{
	if (iParam0 <= 2)
	{
		func_302(200f);
	}
}

void func_463(var uParam0)
{
	Local_764.f_182.f_1 = uParam0;
}

void func_464(int iParam0, int* iParam1, int iParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!func_398(iParam2, 0))
	{
		return;
	}
	vVar0 = { get_entity_coords(iParam0, false, false) };
	fVar3 = vdist(get_entity_coords(player_ped_id(), false, false), vVar0);
	if (fVar3 <= 25f || func_621(vVar0, 0.2f, 0.8f, 0f, 0.85f))
	{
		if (!does_blip_exist(*iParam1))
		{
			func_622(iParam0);
			func_623(iParam1);
			if (bParam3)
			{
				*iParam1 = _blip_add_for_entity(func_624(), iParam0);
				_blip_set_modifier(*iParam1, 942020339);
				func_625(-1723181095, iParam0, 1);
				func_626(iParam0, 1, -1);
			}
			else
			{
				*iParam1 = _blip_add_for_entity(831283580, iParam0);
			}
		}
	}
}

bool func_465(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = participant_id_to_int();
	}
	if (!func_472(int_to_participantindex(iParam1)))
	{
		return false;
	}
	if (bParam2)
	{
		if (!network_is_participant_active(int_to_participantindex(iParam1)))
		{
			return false;
		}
	}
	return func_186(Local_59[iParam1]->f_6, iParam0);
}

void func_466(int iParam0)
{
	if (Local_764.f_19 == 0)
	{
		return;
	}
	iVar0 = network_get_participant_index(player_id());
	if (iVar0 == 255 || !network_is_participant_active(iVar0))
	{
		return;
	}
	iVar1 = iVar0;
	if (iVar1 < 0 || iVar1 >= network_get_max_num_participants())
	{
		return;
	}
	switch (Local_764.f_19.f_2)
	{
		case 0:
			if (Local_59[iVar1]->f_2.f_1 != 0)
			{
				Local_764.f_19.f_1 = player_ped_id();
				if (func_627())
				{
					Local_764.f_19.f_2 = 2;
				}
				else
				{
					Local_764.f_19.f_2 = 1;
				}
			}
			break;
		case 1:
			if (func_627())
			{
				if (func_628(iParam0))
				{
					Local_59[iVar1]->f_2++;
				}
				Local_764.f_19.f_2 = 2;
			}
			break;
		case 2:
			if (!func_627())
			{
				Local_764.f_19.f_2 = 1;
				Local_764.f_19.f_1 = player_ped_id();
				func_437(&(Local_764.f_19.f_3));
			}
			break;
	}
}

bool func_467()
{
	return Local_764.f_428.f_4;
}

void func_468()
{
	if (!func_465(65536, -1, 1))
	{
		if (!func_629())
		{
			return;
		}
		func_325(65536);
	}
}

bool func_469(var uParam0, int iParam1)
{
	return func_251(uParam0->f_66, iParam1);
}

bool func_470(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (bParam4)
	{
		if (vdist2(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
		{
			return true;
		}
	}
	else if (func_630(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

void func_471(int iParam0, int iParam1, int iParam2, var uParam3)
{
	iVar0 = func_631(iParam1, iParam2);
	if (iVar0 != 0)
	{
		set_blip_name_from_text_file(uParam3->f_1, func_632(iParam1, iParam2));
	}
}

int func_472(int iParam0)
{
	return func_633(iParam0);
}

bool func_473(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (!func_364(iParam2, 0))
	{
		if (!func_257(&iParam2))
		{
			return false;
		}
	}
	fVar0 = &Local_59[iParam2]->f_7.f_2[iParam0];
	if (fVar0 <= 0f)
	{
		if (bParam3)
		{
			iVar1 = func_266(iParam0);
			if (does_entity_exist(iVar1))
			{
				iVar2 = network_get_player_index(int_to_participantindex(iParam2));
				if (_network_is_player_index_valid(iVar2))
				{
					fVar0 = vdist(get_entity_coords(iVar1, true, false), func_634(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					Local_59[iParam2]->f_7.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

bool func_474(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_266(iParam0);
	if ((get_frame_count() % iParam5) != iParam6)
	{
		return false;
	}
	if (is_entity_dead(Global_34))
	{
		return false;
	}
	if (!func_470(Global_34, iVar0, fParam3, 1, 1))
	{
		return false;
	}
	if (func_602(iVar0))
	{
		return false;
	}
	if (!_0x5102307ce88798eb(iVar0))
	{
		request_ped_visibility_tracking(iVar0);
		return false;
	}
	if (bParam7)
	{
		if (func_635(player_id(), iVar0) || is_player_free_aiming_at_entity(player_id(), iVar0))
		{
			return true;
		}
	}
	bVar1 = false;
	if (func_470(Global_34, iVar0, fParam1, 1, 1))
	{
		bVar1 = true;
	}
	else if (func_470(Global_34, iVar0, fParam2, 1, 1) && is_tracked_ped_visible(iVar0))
	{
		bVar1 = true;
	}
	else if ((func_470(Global_34, iVar0, fParam3, 1, 1) && func_636()) && is_tracked_ped_visible(iVar0))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (!func_392(Local_764.f_53.f_3[iParam0]))
		{
			func_393(Local_764.f_53.f_3[iParam0], 0);
		}
		else if (func_518(Local_764.f_53.f_3[iParam0]) > fParam4)
		{
			return true;
		}
	}
	else if (func_392(Local_764.f_53.f_3[iParam0]))
	{
		func_395(Local_764.f_53.f_3[iParam0]);
	}
	return false;
}

bool func_475(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_251(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_251(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_251(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_251(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_251(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_251(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_251(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_251(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_476(int iParam0, var uParam1, bool bParam2)
{
	if (func_637(iParam0, 0, uParam1, &(uParam1->f_33), 0, 0))
	{
		return true;
	}
	if (Global_1940258->f_19 && !uParam1->f_2 & 4 != 0)
	{
		if (((func_470(Global_34, iParam0, _0x79b1a6e780266db0(Global_34), 1, 1) && _0x285d36c5c72b0569(Global_34) <= 0.5f) && func_638(iParam0, 0.45f, 0.55f, 0.45f, 0.55f)) && !is_entity_occluded(iParam0))
		{
			uParam1->f_33 = 4;
			return true;
		}
	}
	if (bParam2 && func_470(Global_34, iParam0, 7f, 1, 1))
	{
		uParam1->f_33 = 65536;
		return true;
	}
	return false;
}

void func_477()
{
	if (!func_398(4, 0))
	{
		if (func_475(func_266(4), 0))
		{
			if (network_has_control_of_entity(func_266(4)))
			{
				_task_smart_flee_style_ped(func_266(4), func_266(0), 4, 0, -1082130432, -1, 0);
			}
		}
		if (func_475(func_266(5), 0))
		{
			if (network_has_control_of_entity(func_266(5)))
			{
				_task_smart_flee_style_ped(func_266(5), func_266(0), 4, 0, -1082130432, -1, 0);
			}
		}
		if (func_475(func_266(6), 0))
		{
			if (network_has_control_of_entity(func_266(6)))
			{
				_task_smart_flee_style_ped(func_266(6), func_266(0), 4, 0, -1082130432, -1, 0);
			}
		}
		func_325(4);
	}
}

void func_478(int iParam0, int iParam1, int iParam2, float fParam3)
{
	iVar0 = func_266(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	func_393(Local_764.f_182.f_19[iParam0], 0);
	if (!func_394(Local_764.f_182.f_19[iParam0], fParam3))
	{
		return;
	}
	if (!func_398(iParam1, 0))
	{
		set_blocking_of_non_temporary_events(iVar0, false);
		iVar1 = func_639(iParam0, 0, 1, 0);
		if (network_is_participant_active(iVar1))
		{
			task_combat_hated_targets(iVar0, -1f);
		}
		else
		{
			task_animal_unalerted(iVar0, -1, 0, 0, 0);
		}
		set_entity_visible(iVar0, true);
		play_animal_vocalization(iVar0, "ROAR", false);
		func_325(iParam1);
	}
	if (func_398(iParam1, 0) && !func_398(iParam2, 0))
	{
		if (!func_388(iParam0, 100f, 1))
		{
			if (network_has_control_of_entity(iVar0))
			{
				task_animal_unalerted(iVar0, -1, 0, 0, 0);
				set_blocking_of_non_temporary_events(iVar0, false);
				func_325(iParam2);
			}
		}
	}
}

void func_479(int iParam0)
{
	func_277(&(Local_764.f_127.f_34), iParam0);
}

void func_480(var uParam0)
{
	func_640(&(uParam0->f_24), uParam0->f_25, 0);
	func_429(uParam0->f_25);
}

bool func_481(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = int_to_participantindex(iParam0);
	if (!network_is_participant_active(iVar0))
	{
		return false;
	}
	iVar1 = network_get_player_index(iVar0);
	if (bParam2 && !network_is_player_active(iVar1))
	{
		return false;
	}
	if (bParam1 && is_player_dead(iVar1))
	{
		return false;
	}
	return true;
}

bool func_482(int iParam0)
{
	return func_135(8, iParam0);
}

var func_483(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_tooltip(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_484(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_641(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_485(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_641(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_486(int iParam0)
{
	iVar0 = -1;
	if (func_358(&Var1, iParam0))
	{
		iVar0 = ((func_642() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_487(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_488(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1777724963:
		case -1165569262:
		case -697789102:
		case -260420884:
		case -232478158:
		case 78055447:
		case 195932838:
		case 850213441:
		case 974227447:
		case 1532822440:
		case 1918154385:
			return true;
		case 1539023636:
			return iParam1;
		default:
			break;
	}
	return false;
}

void func_489(var uParam0)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	if (&Global_1051252->f_16[16] == 0 || !_does_thread_exist(&(Global_1051252->f_16[16])))
	{
		return;
	}
	*uParam0 = 180;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	_trigger_script_event_2(uParam0, 8, 12, &(Global_1051252->f_16[16]));
	func_643(uParam0, uParam0->f_1);
}

void func_490(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 < iParam1)
	{
		iParam2 = (uParam0->f_2 - 1);
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		func_194(uParam0, iVar0);
		iVar0++;
	}
}

int func_491(int iParam0)
{
	return Local_764.f_240.f_7[iParam0]->f_4;
}

float func_492(int iParam0)
{
	return Local_764.f_240.f_7[iParam0]->f_5;
}

Vector3 func_493(int iParam0)
{
	return Local_764.f_240.f_7[iParam0]->f_6;
}

bool func_494(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam6)
	{
		if (!network_is_host_of_this_script())
		{
			return false;
		}
	}
	if (!can_register_mission_peds(1))
	{
		return false;
	}
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_499(iParam1))
	{
		return false;
	}
	iVar0 = func_644(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
	*uParam0 = ped_to_net(iVar0);
	if (network_does_network_id_exist(*uParam0))
	{
		if (bParam9)
		{
			_0x899a04afcc725d04(iVar0, _0xd42514c182121c23(iParam1));
		}
		if (bParam10)
		{
			set_ped_relationship_group_hash(iVar0, _get_default_relationship_group_hash(iParam1));
		}
		if (bParam6)
		{
			set_network_id_exists_on_all_machines(*uParam0, true);
		}
		return true;
	}
	return false;
}

void func_495(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	_set_ped_body_component(iParam0, 1268180497);
	if (bParam1)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_496(int iParam0)
{
	return func_176(iParam0, 32);
}

bool func_497(int iParam0)
{
	return func_176(iParam0, 64);
}

bool func_498(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_499(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_500(int iParam0)
{
	return &(Local_764.f_240.f_7[iParam0]);
}

void func_501(var uParam0, int iParam1)
{
	if (uParam0->f_2 == iParam1)
	{
		return;
	}
	func_507(&(uParam0->f_6));
	uParam0->f_2 = iParam1;
}

bool func_502()
{
	return func_511(4);
}

bool func_503(int iParam0)
{
	return func_251(Local_764.f_25.f_23, iParam0);
}

bool func_504(var uParam0, var uParam1)
{
	if (_is_anim_scene_started(uParam1->f_16, false))
	{
		return true;
	}
	network_request_control_of_network_id(uParam0->f_9);
	if (!network_has_control_of_network_id(uParam0->f_9))
	{
		return false;
	}
	set_anim_scene_entity(uParam1->f_16, &(uParam1->f_14), func_500(uParam1->f_1), 0);
	func_645(uParam1->f_16);
	set_anim_scene_origin(uParam1->f_16, Local_764.f_240.f_7[uParam1->f_1]->f_6, 0f, 0f, Local_764.f_240.f_7[uParam1->f_1]->f_5, 2);
	start_anim_scene(uParam1->f_16);
	return true;
}

bool func_505()
{
	return func_511(2);
}

bool func_506(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (iParam1 == 2104565373 && is_driveby_task_underneath_driving_task(iParam0))
			{
				return true;
			}
			if (get_script_task_status(iParam0, iParam1, true) == 1 || get_script_task_status(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_507(var uParam0)
{
	func_646(uParam0, 0);
}

bool func_508(var uParam0, int iParam1)
{
	return func_251(uParam0->f_21, iParam1);
}

float func_509(var uParam0)
{
	return (to_float(func_647(uParam0)) * 0.001f);
}

int func_510(int iParam0)
{
	return get_player_ped(func_648(iParam0));
}

bool func_511(int iParam0)
{
	return func_251(Local_764.f_25.f_22, iParam0);
}

void func_512(var uParam0, int iParam1)
{
	func_277(&(uParam0->f_10), iParam1);
}

var func_513(int iParam0, int iParam1)
{
	return func_649(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_514(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 5;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 21, 31, &uParam1);
}

bool func_515(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= network_get_max_num_participants())
	{
		return false;
	}
	if (iParam1 == 1)
	{
		if (!network_is_participant_active(int_to_participantindex(iParam0)))
		{
			return false;
		}
	}
	return true;
}

void func_516(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 0;
	iVar3 = get_network_time_accurate();
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		iVar4 = int_to_participantindex(iVar0);
		if (iVar4 == 255)
		{
		}
		else if (!network_is_participant_active(iVar4))
		{
		}
		else if (Local_59[iVar0]->f_2.f_1 == 0)
		{
		}
		else
		{
			*iParam0 = (*iParam0 + Local_59[iVar0]->f_2);
			if (iVar1 == 0 || is_time_more_than(Local_59[iVar0]->f_2.f_1, iVar1))
			{
				iVar1 = Local_59[iVar0]->f_2.f_1;
			}
			if (iVar2 == 0 || is_time_less_than(Local_59[iVar0]->f_2.f_1, iVar2))
			{
				iVar2 = Local_59[iVar0]->f_2.f_1;
			}
		}
		iVar0++;
	}
	*iParam2 = 0;
	*iParam1 = 0;
	if (iVar1 != 0)
	{
		*iParam2 = ((get_time_difference(iVar1, iVar3) / 1000) / 60);
	}
	if (iVar2 != 0)
	{
		*iParam1 = ((get_time_difference(iVar2, iVar3) / 1000) / 60);
	}
}

bool func_517(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_518(var uParam0)
{
	if (!func_392(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_650(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_548() - uParam0->f_1);
}

Vector3 func_519(int iParam0)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	get_model_dimensions(get_entity_model(iParam0), &vVar3, &vVar6);
	fVar9 = absf(((vVar6.z - vVar3.z) * 0.5f));
	vVar0.f_2 = (vVar0.z - fVar9);
	return vVar0;
}

void func_520(int iParam0)
{
	func_612(8);
	if (network_is_host_of_this_script())
	{
		if (Local_13.f_18 == iParam0->f_1)
		{
		}
		else
		{
			Local_13.f_18 = iParam0->f_1;
		}
	}
	if (_0x3f59fe6f37869576(iParam0->f_1, get_player_index()) && func_482(255))
	{
		if (!func_599())
		{
			func_600();
		}
		if (!func_333())
		{
			func_601();
		}
		if (!func_651())
		{
			func_652(1);
		}
	}
}

void func_521(int iParam0)
{
	if (_0x3f59fe6f37869576(iParam0->f_1, get_player_index()) && func_482(255))
	{
		if (!func_599())
		{
			func_600();
		}
		if (!func_333())
		{
			func_601();
		}
		if (!func_653())
		{
			func_654(1);
		}
	}
}

void func_522(int iParam0)
{
	func_612(16);
	if (_0x3f59fe6f37869576(iParam0->f_1, get_player_index()) && func_482(255))
	{
		if (!func_599())
		{
			func_600();
		}
		if (!func_333())
		{
			func_601();
		}
		if (!func_651())
		{
			func_652(1);
		}
	}
}

void func_523(int iParam0, float fParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		fParam1 = func_655(fParam1, 0f, 1f);
		iVar0 = floor((fParam1 * IntToFloat(get_entity_max_health(iParam0, bParam2))));
		_set_entity_health(iParam0, iVar0, 0);
	}
}

char* func_524(int iParam0)
{
	return Local_764.f_240.f_7[iParam0]->f_10;
}

void func_525(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || !is_entity_dead(iParam0))
	{
		if (!is_string_null_or_empty(sParam1))
		{
			decor_set_bool(iParam0, "HAS_VOICE", true);
			set_ambient_voice_name(iParam0, sParam1);
		}
	}
}

void func_526(int iParam0)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 1:
			func_296(func_266(iVar0), func_295(0, 0));
			func_298(func_266(iVar0));
			func_226(4);
			if (Local_764.f_53 != func_266(1) && does_entity_exist(func_266(1)))
			{
				Local_764.f_53 = func_266(1);
				Local_764.f_53.f_2 = 3;
			}
			break;
	}
}

int func_527(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			fVar0 = 230f;
			break;
		case 1:
			fVar0 = 270f;
			break;
		case 2:
			fVar0 = 70f;
			break;
		case 3:
			fVar0 = 220f;
			break;
		case 4:
			fVar0 = 200f;
			break;
		case 5:
			fVar0 = 110f;
			break;
		case 6:
			fVar0 = 200f;
			break;
		case 7:
			fVar0 = 200f;
			break;
		case 8:
			fVar0 = 85f;
			break;
		case 13:
			fVar0 = 110f;
			break;
		case 9:
			fVar0 = 85f;
			break;
		case 10:
			fVar0 = 220f;
			break;
		case 11:
			fVar0 = 110f;
			break;
		case 12:
			fVar0 = 130f;
			break;
	}
	fVar1 = 1f;
	switch (iParam1)
	{
		case 0:
			fVar1 = Global_1901947->f_852.f_5;
			break;
		case 1:
			fVar1 = Global_1901947->f_852.f_6;
			break;
		case 2:
			fVar1 = Global_1901947->f_852.f_7;
			break;
	}
	fVar0 = (fVar0 * fVar1);
	return round(fVar0);
}

void func_528(int iParam0)
{
	_0xd9130842d7226045(func_656(iParam0), 0);
}

bool func_529()
{
	return Global_1146212->f_21645[54]->f_208;
}

struct<5> func_530(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_657(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_658(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_533(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_659(bParam1) };
			if (bParam2 && func_660(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_531(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_531(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_532(iParam0, &Var6, 1728382685))
				{
					Var0.f_4 = 1728382685;
				}
				else
				{
					Var0.f_4 = -649335959;
				}
			}
			else
			{
				Var0.f_4 = 1728382685;
			}
			break;
		case -2072933068:
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -1591664384;
			Var0 = { func_661(bParam1) };
			switch (func_662(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case -2130996531:
		case -1962314949:
			if (func_663(iParam0, -1823706425))
			{
				Var0 = { func_533(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_663(iParam0, -1483207246))
			{
				Var0 = { func_533(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_533(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_663(iParam0, -1653629781))
			{
				Var0 = { func_533(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
			}
			break;
		default:
			if (_inventory_fits_slot_id(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (_inventory_fits_slot_id(iParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_664(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (_inventory_fits_slot_id(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_663(iParam0, -1653629781))
			{
				Var0 = { func_533(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

bool func_531(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_665(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_532(int iParam0, var uParam1, int iParam2)
{
	if (func_666(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_533(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_667(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_668(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_534(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_669(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_664(*uParam1, &Var0, bParam6, 0, -1))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_535(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_28() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_670(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_671(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_668(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_535(bool bParam0)
{
	if (func_28() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_668(bParam0));
}

int func_536(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_672(iParam0))
	{
		return 0;
	}
	if (!func_535(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_34, iParam0, iParam1, iParam2);
	return 1;
}

void func_537(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar2 = func_673(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_34, iParam0, iVar2);
		if (get_max_ammo(Global_34, &iVar1, iParam0) && get_ammo_in_ped_weapon(Global_34, iParam0) > iVar1)
		{
			set_ped_ammo(Global_34, iParam0, iVar1);
		}
	}
}

void func_538(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_539(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_540(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

int func_541(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -88129556;
		case 2:
			return 1285278823;
		case 14:
			return 1990184729;
		case 4:
			return 1374143159;
		case 5:
			return 1983508419;
		case 6:
			return -174599426;
		case 7:
			return -1565506973;
		case 8:
			return 1332057400;
		case 9:
			return 725557162;
		case 10:
			return 9860771;
		case 11:
			return -189356331;
		case 12:
			return -1552492203;
		case 13:
			return 1780085540;
		case 3:
			return 1067005312;
		case 15:
			return -765620960;
		case 16:
			return 283234434;
		case 17:
			return 1186500977;
		case 18:
			return 696163029;
		case 19:
			return 1592070424;
		case 20:
			return 1301263422;
		case 31:
			return -1550976169;
		case 21:
			return -1276336942;
		case 28:
			return -19227065;
		case 25:
			return 1829377792;
		case 24:
			return -1667542940;
		case 32:
			return -753359492;
		case 22:
			return -2112360007;
		case 29:
			return -1985396409;
		case 26:
			return -496298354;
		case 30:
			return -1373797819;
		case 27:
			return -2051655108;
		case 33:
			return -268685349;
		case 34:
			return -2047817190;
		case 23:
			return 257784569;
		default:
			break;
	}
	return 0;
}

struct<2> func_542(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_543(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_548() - fParam1);
	func_674(uParam0, 1);
	func_675(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_544(int iParam0)
{
	bVar0 = false;
	vVar1.f_3 = -1;
	Var5 = -1;
	Var5 = 51;
	Var5.f_1 = { func_221() };
	Var15 = { func_676(iParam0) };
	iVar27 = func_677(Var15, &Var5, &vVar1);
	switch (iVar27)
	{
		case 0:
			break;
		case 2:
			if (func_119() == 1)
			{
				vVar24 = { func_221() };
			}
			else if (func_119() == 2)
			{
				vVar24 = { func_218() };
			}
			fVar23 = func_678(vVar24, Global_35);
			func_220(iParam0, vVar24, fVar23, 1);
			bVar0 = true;
			break;
		case 1:
			fVar23 = func_678(vVar1, Global_35);
			func_220(iParam0, vVar1, fVar23, 1);
			bVar0 = true;
			break;
	}
	if (bVar0)
	{
		switch (iParam0)
		{
			case 1:
				break;
		}
	}
	return bVar0;
}

float func_545(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_546(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return false;
	}
	if (!is_entity_on_screen(uParam0->f_6))
	{
		return false;
	}
	return true;
}

bool func_547(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_546(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_548() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

float func_548()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_549(int iParam0)
{
	return func_679(iParam0);
}

bool func_550(int iParam0)
{
	if (does_entity_exist(&(Local_764.f_240.f_7[iParam0])))
	{
		if (network_has_control_of_entity(&(Local_764.f_240.f_7[iParam0])))
		{
			uVar0 = &Local_764.f_240.f_7[iParam0];
			set_ped_as_no_longer_needed(&uVar0);
			return true;
		}
	}
	return false;
}

void func_551(var uParam0, var uParam1)
{
	switch (uParam0->f_4)
	{
		case 1:
			func_680(uParam0, uParam1);
			break;
		case 2:
			func_681(uParam0, uParam1);
			break;
	}
}

float func_552(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1) && bParam3)
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false), bParam2);
}

bool func_553()
{
	if (!func_682(1))
	{
		func_683(func_221());
	}
	else
	{
		func_683(func_684(1));
	}
	return true;
}

void func_554(int iParam0)
{
	allow_sonar_blips(true);
	force_sonar_blips_this_frame();
	_trigger_sonar_blip_2(1231752879, iParam0);
}

void func_555(int iParam0)
{
	if (!is_audio_scene_active("rdro_boost_animal_scene"))
	{
		start_audio_scene("rdro_boost_animal_scene");
	}
	if (_0x8b25a18e390f75bf(iParam0) != 98062031)
	{
		add_entity_to_audio_mix_group(iParam0, "rdro_target_animal_group", 0f);
	}
}

void func_556(int iParam0, int iParam1)
{
	Var0 = 194;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	Var0.f_4 = iParam0;
	if (iParam0 == 2)
	{
		if (iParam1 == 0 || !does_entity_exist(iParam1))
		{
			return;
		}
		if (((!does_entity_belong_to_this_script(iParam1, false) || !_0xb07d3185e11657a5(iParam1)) || !network_get_entity_is_networked(iParam1)) || !network_does_network_id_exist(ped_to_net(iParam1)))
		{
			return;
		}
		Var0.f_5 = ped_to_net(iParam1);
	}
	uVar6 = func_513(0, 8);
	trigger_script_event(1, &Var0, 6, 43, &uVar6);
}

void func_557(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_558()
{
	return func_563(2, -1);
}

void func_559()
{
	func_573(2);
}

bool func_560(int iParam0, var uParam1)
{
	fVar0 = 5f;
	if (func_679(iParam0))
	{
		fVar0 = func_685(iParam0);
	}
	if (func_470(Global_34, iParam0, fVar0, 1, 1))
	{
		uParam1->f_32 = 262144;
		return true;
	}
	if (!func_392(&(uParam1->f_35)))
	{
		if (_0xd55db4466d00a258(iParam0))
		{
			func_393(&(uParam1->f_35), 0);
		}
	}
	else if (func_518(&(uParam1->f_35)) > 2.5f)
	{
		uParam1->f_32 = 262144;
		return true;
	}
	if (func_686(iParam0, uParam1, &(uParam1->f_32), 0))
	{
		return true;
	}
	return false;
}

void func_561()
{
	Local_764.f_25.f_20 = player_id();
	func_573(4);
}

void func_562(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	iVar0 = func_500(uParam1->f_1);
	if (!does_entity_exist(iVar0))
	{
	}
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	if (get_ped_config_flag(iVar0, 580, true))
	{
		return;
	}
	bVar2 = false;
	bVar3 = false;
	if ((uParam1->f_20 == 255 || func_687(uParam0, 1)) || bParam2)
	{
		iVar1 = func_510(iVar0);
		if (!func_470(iVar1, iVar0, 100f, 1, 1))
		{
			bVar2 = true;
		}
	}
	else
	{
		iVar1 = get_player_ped(uParam1->f_20);
	}
	if (!does_entity_exist(iVar1))
	{
		bVar2 = true;
		bVar3 = true;
	}
	if (is_ped_using_any_scenario(iVar0))
	{
		if (uParam0->f_1 == 0)
		{
			_0xeeed8fafec331a70(iVar0, get_entity_coords(iVar1, true, false), 3);
		}
		else
		{
			_0x463803429297117c(iVar0, get_entity_coords(iVar1, true, false), 3, 1);
		}
	}
	if (bVar2)
	{
		if ((!is_ped_fleeing(iVar0) || !func_577(iVar0, 518218985)) || bParam3)
		{
			if (func_508(uParam1, 16))
			{
				iVar4 |= 67108864;
			}
			if (bVar3)
			{
				_task_smart_flee_style_coord(iVar0, get_entity_coords(iVar0, true, false), 0, iVar4, 500f, -1, 0);
			}
			else
			{
				_task_smart_flee_style_ped(iVar0, iVar1, 3, iVar4, -1082130432, -1, 0);
			}
			func_573(8);
		}
		return;
	}
	switch (uParam0->f_1)
	{
		case 1:
			if ((!is_ped_in_combat(iVar0, 0) || !func_577(iVar0, 780511057)) || bParam3)
			{
				task_combat_ped(iVar0, iVar1, 0, 0);
				func_573(8);
			}
			break;
		case 0:
			if ((!is_ped_fleeing(iVar0) || !func_577(iVar0, 518218985)) || bParam3)
			{
				if (func_508(uParam1, 16))
				{
					iVar5 |= 67108864;
				}
				_task_smart_flee_style_ped(iVar0, iVar1, 3, iVar5, 400f, -1, 0);
				func_573(8);
			}
			break;
		default:
			break;
	}
}

bool func_563(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = participant_id_to_int();
	}
	if (!func_481(iParam1, 0, 1))
	{
		return false;
	}
	return func_251(Local_59[iParam1]->f_5, iParam0);
}

bool func_564(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 1:
			return (func_577(iParam1, 780511057) || is_ped_in_combat(iParam1, 0));
		case 0:
			return (func_577(iParam1, 518218985) || is_ped_fleeing(iParam1));
	}
	return false;
}

void func_565(var uParam0)
{
}

void func_566(var uParam0, var uParam1)
{
}

void func_567(var uParam0)
{
	if (func_469(uParam0, 1))
	{
		return;
	}
	func_601();
	func_428(uParam0, 1);
}

void func_568(var uParam0)
{
	if (func_469(uParam0, 2))
	{
		return;
	}
	func_583(1);
	func_428(uParam0, 2);
}

void func_569(var uParam0, var uParam1, var uParam2)
{
	if (!func_482(255))
	{
		return;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 <= 10)
	{
		iVar0 = &Local_764.f_240.f_7[iVar2];
		if (((iVar2 != uParam1->f_1 && iVar2 != uParam1->f_2) && does_entity_exist(iVar0)) && !is_entity_dead(iVar0))
		{
			switch (uParam0->f_1)
			{
				case 1:
					if (func_564(uParam0, iVar0))
					{
						iVar1 = 1;
					}
					else
					{
						iVar1 = 0;
					}
					break;
				case 0:
					iVar1 = 0;
					break;
			}
			if (iVar1 == 1 && func_470(iVar0, Global_34, uParam2->f_43, 1, 1))
			{
				if (!_0x9fa00e2fc134a9d0(iVar0) && is_entity_visible(iVar0))
				{
					_blip_add_for_entity(831283580, iVar0);
				}
			}
			else if (!func_470(iVar0, Global_34, uParam2->f_47, 1, 1) || iVar1 == 0)
			{
				if (_0x9fa00e2fc134a9d0(iVar0))
				{
					func_622(iVar0);
				}
			}
		}
		iVar2++;
	}
}

void func_570(var uParam0, var uParam1)
{
	iVar2 = 0;
	while (iVar2 <= 10)
	{
		iVar0 = &Local_764.f_240.f_7[iVar2];
		if ((((((iVar2 != uParam1->f_1 && iVar2 != uParam1->f_2) && does_entity_exist(iVar0)) && network_has_control_of_entity(iVar0)) && !is_entity_dead(iVar0)) && !get_ped_config_flag(iVar0, 580, true)) && !func_564(uParam0, iVar0))
		{
			switch (uParam0->f_1)
			{
				case 1:
					task_combat_ped(iVar0, get_player_ped(uParam1->f_20), 0, 0);
					break;
				case 0:
					iVar1 = 0;
					if (func_508(uParam1, 16))
					{
						iVar1 |= 67108864;
					}
					_task_smart_flee_style_ped(iVar0, get_player_ped(uParam1->f_20), 3, iVar1, -1082130432, -1, 0);
					break;
			}
		}
		iVar2++;
	}
}

void func_571(var uParam0)
{
	iVar1 = 0;
	while (iVar1 <= 10)
	{
		iVar0 = &Local_764.f_240.f_7[iVar1];
		if ((((((iVar1 != uParam0->f_1 && iVar1 != uParam0->f_2) && does_entity_exist(iVar0)) && network_has_control_of_entity(iVar0)) && !is_entity_dead(iVar0)) && !get_ped_config_flag(iVar0, 580, true)) && _0x268b3aebf032a88d(iVar0))
		{
			task_wander_in_area(iVar0, Local_764.f_240.f_7[uParam0->f_1]->f_6, uParam0->f_27, 1077936128, 1086324736, 0);
			set_ped_keep_task(iVar0, true);
			if (Local_13.f_7.f_1 == 1)
			{
				set_animal_tuning_float_param(iVar0, 74, 1f);
			}
			else
			{
				set_animal_tuning_float_param(iVar0, 74, 0f);
			}
			set_blocking_of_non_temporary_events(iVar0, false);
		}
		iVar1++;
	}
}

void func_572(int iParam0)
{
	set_bit(&(Local_764.f_53.f_71), iParam0);
}

void func_573(int iParam0)
{
	if (!func_481(participant_id_to_int(), 0, 1))
	{
		return;
	}
	func_277(&(Local_59[participant_id_to_int()]->f_5), iParam0);
}

int func_574(var uParam0)
{
	return 0;
}

void func_575(var uParam0)
{
}

void func_576()
{
}

bool func_577(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_578(int iParam0)
{
	if (!func_481(participant_id_to_int(), 0, 1))
	{
		return;
	}
	func_278(&(Local_59[participant_id_to_int()]->f_5), iParam0);
}

bool func_579(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = participant_id_to_int();
	}
	if (!func_481(iParam1, 0, 1))
	{
		return false;
	}
	return func_251(Local_59[iParam1]->f_1, iParam0);
}

bool func_580(int iParam0)
{
	return func_251(Local_764.f_53.f_73, iParam0);
}

void func_581(int iParam0)
{
	if (!func_481(participant_id_to_int(), 0, 1))
	{
		return;
	}
	func_278(&(Local_59[participant_id_to_int()]->f_1), iParam0);
}

int func_582(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (!func_470(iParam0, iParam1, 50f, 1, 1))
	{
		return 2;
	}
	if (!func_392(uParam2))
	{
		func_437(uParam2);
		*uParam3 = 0;
		return 2;
	}
	else if (func_518(uParam2) > 4f)
	{
		if (*uParam3 == 0)
		{
			vVar0 = { get_entity_coords(iParam0, true, false) };
			vVar3 = { get_entity_coords(iParam1, true, false) };
			*uParam3 = _0x348f211ca2404039(iParam0, vVar0, vVar3, 29);
			if (*uParam3 == -1)
			{
				func_437(uParam2);
				*uParam3 = 0;
				return 2;
			}
		}
		if (_0x3a0f82f6ee2291c8(*uParam3) == 1)
		{
			func_437(uParam2);
			if (_0x8800776e410eb669(*uParam3))
			{
				vVar6 = { _0x430f8319ae56c8a9(*uParam3, (_0xd470725e0703d22f(*uParam3) - 1)) };
				fVar9 = get_animal_tuning_float_param(iParam0, 164);
				fVar10 = (Global_35.f_2 - 1f);
				if ((vVar6.z + fVar9) < fVar10)
				{
					_0x661bb1e1ff77742d(*uParam3);
					*uParam3 = 0;
					return 1;
				}
				else
				{
					_0x661bb1e1ff77742d(*uParam3);
					*uParam3 = 0;
					return 0;
				}
			}
			else
			{
				_0x661bb1e1ff77742d(*uParam3);
				*uParam3 = 0;
				return 1;
			}
		}
	}
	return 2;
}

void func_583(int iParam0)
{
	if (!func_481(participant_id_to_int(), 0, 1))
	{
		return;
	}
	func_277(&(Local_59[participant_id_to_int()]->f_1), iParam0);
}

void func_584()
{
	if (func_469(&(Local_764.f_53), 256))
	{
		return;
	}
	if (!does_entity_exist(Local_764.f_53))
	{
		return;
	}
	func_688(Local_764.f_53);
	func_428(&(Local_764.f_53), 256);
}

void func_585()
{
	if (!func_469(&(Local_764.f_53), 256))
	{
		return;
	}
	if (!does_entity_exist(Local_764.f_53))
	{
		func_689(&(Local_764.f_53), 256);
		return;
	}
	func_690(Local_764.f_53);
	func_689(&(Local_764.f_53), 256);
}

bool func_586()
{
	return func_580(1);
}

bool func_587(var uParam0)
{
	return _0xd9130842d7226045(&(uParam0->f_52), 0);
}

bool func_588(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (vdist2(get_entity_coords(iParam0, bParam5, false), vParam1) <= (bParam4 * bParam4))
		{
			return true;
		}
	}
	else if (func_630(get_entity_coords(iParam0, bParam5, false), vParam1) <= (bParam4 * bParam4))
	{
		return true;
	}
	return false;
}

void func_589(var uParam0, int iParam1)
{
	if (uParam0->f_65 == iParam1)
	{
		return;
	}
	uParam0->f_65 = iParam1;
}

Vector3 func_590(vector3 vParam0, float fParam3, float fParam4)
{
	fVar3 = (fParam3 * fParam3);
	iVar5 = 0;
	while (iVar5 < 10)
	{
		vVar0 = { get_random_float_in_range(-fParam3, fParam3), get_random_float_in_range(-fParam3, fParam3), 0f };
		if (((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= fVar3)
		{
			fVar4 = (fParam4 / 2f);
			vVar0.f_2 = get_random_float_in_range(-fVar4, fVar4);
			return vParam0 + vVar0;
		}
		iVar5++;
	}
	return func_691(vParam0, fParam3, fParam4);
}

void func_591(vector3 vParam0, int iParam3)
{
	allow_sonar_blips(true);
	force_sonar_blips_this_frame();
	trigger_sonar_blip(iParam3, vParam0);
}

void func_592()
{
}

void func_593(var uParam0, vector3 vParam1)
{
	if (is_string_null_or_empty(&(uParam0->f_52)))
	{
		return;
	}
	_play_sound_from_position("CALL", vParam1, &(uParam0->f_52), false, 0, true, 0);
}

int func_594(int iParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = iParam0;
	while (iVar2 <= iParam1)
	{
		iVar1 = func_692(iVar2);
		if (iVar1 >= 0)
		{
			iVar0 = (iVar0 + iVar1);
		}
		iVar2++;
	}
	return iVar0;
}

bool func_595(var uParam0)
{
	return func_517(*uParam0, 1);
}

void func_596(int iParam0, var uParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (network_is_host_of_this_script())
	{
		if (!func_595(uParam1))
		{
			if (bParam2)
			{
				func_693(uParam1, 0);
			}
		}
		else
		{
			uParam1->f_3 = (func_509(uParam1) * Global_1901947->f_852.f_8);
			if (uParam1->f_3 > 1f)
			{
				uParam1->f_3 = 1f;
			}
		}
	}
	if ((((!is_entity_dead(iParam0) && func_595(uParam1)) && !get_ped_config_flag(iParam0, 580, true)) && network_has_control_of_entity(iParam0)) && (get_frame_count() % 10) == 0)
	{
		if (!_0x33fa048675821da7(iParam0, 5))
		{
			_0x2eb75fb86c41f026(iParam0, 5, 1);
		}
		_0x06d26a96ca1bca75(iParam0, 5, uParam1->f_3, 0);
	}
}

void func_597(var uParam0, int iParam1)
{
	if (uParam0->f_2 == iParam1)
	{
		return;
	}
	uParam0->f_2 = iParam1;
}

bool func_598(var uParam0)
{
	return func_469(uParam0, 2);
}

bool func_599()
{
	return func_67(2);
}

void func_600()
{
	if (!func_135(32, 255))
	{
		func_694(Local_764.f_1, Local_764.f_3);
		if (!func_135(1024, 255))
		{
			func_695(Local_764.f_1);
			func_152(1024);
		}
		iVar0 = func_342(Local_764.f_1, Local_764.f_2);
		func_696(iVar0);
		func_697(iVar0);
		func_150(2);
		func_698(Local_764.f_9);
		func_699(Local_764.f_1);
		func_700(Local_764.f_1, Local_764.f_2, Local_764.f_3);
		func_152(32);
	}
}

void func_601()
{
	if (!func_67(2))
	{
		return;
	}
	func_150(8);
}

bool func_602(int iParam0)
{
	return !is_entity_visible(iParam0);
}

bool func_603(var uParam0)
{
	return func_588(Global_34, uParam0->f_60, uParam0->f_42, 1, !func_701(uParam0));
}

int func_604()
{
	return -108658760;
}

void func_605(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!does_blip_exist(*uParam1))
	{
		*uParam1 = _blip_add_for_entity(func_624(), iParam0);
		set_blip_sprite(*uParam1, -1646261997, false);
		_blip_set_modifier(*uParam1, -528849255);
		if (bParam2)
		{
			_blip_set_modifier(*uParam1, -1445216292);
		}
		if (bParam3)
		{
			_blip_set_modifier(*uParam1, -1654168258);
		}
		_blip_set_modifier(*uParam1, 847579139);
		set_blip_name_from_text_file(*uParam1, func_702(func_411(get_entity_model(iParam0))));
	}
}

void func_606(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_392(uParam0))
	{
		func_543(uParam0, fParam1);
	}
}

void func_607(var uParam0)
{
	if (does_blip_exist(*uParam0))
	{
		_set_blip_flash_style(*uParam0, -1833912565);
		_blip_set_modifier(*uParam0, 197772266);
	}
}

void func_608(var uParam0)
{
	if (does_blip_exist(*uParam0))
	{
		_set_blip_flash_style(*uParam0, 197772266);
		_blip_set_modifier(*uParam0, -1833912565);
	}
}

void func_609(var uParam0)
{
	if (does_blip_exist(*uParam0))
	{
		_set_blip_flash_style(*uParam0, 197772266);
	}
}

void func_610(int iParam0, int iParam1)
{
	allow_sonar_blips(true);
	force_sonar_blips_this_frame();
	_trigger_sonar_blip_2(iParam1, iParam0);
}

void func_611()
{
	Var0 = { func_703(-922869466) };
	func_704(&Var0);
}

void func_612(int iParam0)
{
	func_277(&(Local_764.f_172), iParam0);
}

void func_613()
{
	Var0 = { func_703(2126697993) };
	func_704(&Var0);
}

void func_614(int iParam0)
{
	if (!func_481(participant_id_to_int(), 0, 1))
	{
		return;
	}
	func_277(&(Local_59[participant_id_to_int()]->f_4), iParam0);
}

int func_615(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	if (_0x4642182a298187d0(iParam0, -1, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (_0x4642182a298187d0(iParam0, 2, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (_0x4642182a298187d0(iParam0, 4, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (_0x4642182a298187d0(iParam0, 5, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (_0x4642182a298187d0(iParam0, 10, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (_0x4642182a298187d0(iParam0, 1, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

void func_616()
{
	Var0 = { func_703(-1485898032) };
	func_704(&Var0);
}

bool func_617(int iParam0)
{
	return func_251(Local_764.f_172.f_2, iParam0);
}

bool func_618(int iParam0)
{
	if (does_entity_exist(&(Local_764.f_240.f_7[iParam0])))
	{
		if (network_has_control_of_entity(&(Local_764.f_240.f_7[iParam0])))
		{
			delete_ped(Local_764.f_240.f_7[iParam0]);
			Local_764.f_240.f_7[iParam0] = 0;
			return true;
		}
	}
	return false;
}

void func_619(int iParam0)
{
	if (!func_481(participant_id_to_int(), 0, 1))
	{
		return;
	}
	func_278(&(Local_59[participant_id_to_int()]->f_4), iParam0);
}

bool func_620(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!_network_is_player_index_valid(iParam0))
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if ((*Global_1298536)[iVar0]->f_1 == -1)
	{
		return false;
	}
	*uParam1 = (*Global_1298536)[iVar0]->f_1;
	*uParam2 = (*Global_1298536)[iVar0]->f_3;
	return true;
}

bool func_621(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	bVar2 = get_hud_screen_position_from_world_position(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

void func_622(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_623(&iVar0);
}

void func_623(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

int func_624()
{
	return -839369609;
}

void func_625(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

void func_626(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iVar0 = player_id();
	}
	else
	{
		iVar1 = int_to_participantindex(iParam2);
		iVar0 = network_get_player_index(iVar1);
	}
	if (does_entity_exist(iParam0) && !_0x0e6846476906c9dd(iVar0, iParam0))
	{
		_0x543dfe14be720027(iVar0, iParam0, iParam1);
	}
}

bool func_627()
{
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return true;
	}
	if (is_entity_dead(iVar0))
	{
		return true;
	}
	return false;
}

bool func_628(int iParam0)
{
	if (!does_entity_exist(Local_764.f_19.f_1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (is_bit_set(Local_764.f_19, iVar0))
		{
			if (does_entity_exist(iParam0[iVar0]))
			{
				if (func_705(Local_764.f_19.f_1, iParam0[iVar0]))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_629()
{
	iVar0 = network_get_participant_index(player_id());
	if (iVar0 == 255 || !network_is_participant_active(iVar0))
	{
		return false;
	}
	iVar1 = iVar0;
	if (iVar1 < 0 || iVar1 >= network_get_max_num_participants())
	{
		return false;
	}
	if (Local_59[iVar1]->f_2.f_1 != 0)
	{
	}
	Local_59[iVar1]->f_2.f_1 = get_network_time_accurate();
	return true;
}

float func_630(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_631(int iParam0, int iParam1)
{
	sVar0 = func_632(iParam0, iParam1);
	if (is_string_null_or_empty(sVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(sVar0);
	return iVar1;
}

char* func_632(int iParam0, int iParam1)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_ALLIGATOR_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_ALLIGATOR_02";
					break;
				case 2:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BEAR_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BEAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BEAVER_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BEAVER_02";
					break;
				case 2:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BISON_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BISON_02";
					break;
				case 2:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BOAR_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BOAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BUCK_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BUCK_02";
					break;
				case 2:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_COUGAR_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_COUGAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_PANTHER_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_PANTHER_02";
					break;
				case 2:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_COYOTE_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_COYOTE_02";
					break;
				case 2:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_FOX_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_FOX_02";
					break;
				case 2:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_MOOSE_02";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_MOOSE_01";
					break;
				case 2:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BIG_HORN_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BIG_HORN_02";
					break;
				case 2:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_WOLF_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_WOLF_02";
					break;
				case 2:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_ELK_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_ELK_02";
					break;
				case 2:
					break;
			}
			break;
	}
	return sVar0;
}

int func_633(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= network_get_max_num_participants())
	{
		return 0;
	}
	return 1;
}

Vector3 func_634(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

bool func_635(int iParam0, int iParam1)
{
	if ((is_player_playing(iParam0) && does_entity_exist(iParam1)) && !is_entity_dead(iParam1))
	{
		if (((_0x3ee1f7a8c32f24e1(iParam0, &iVar0, 0, 0) && does_entity_exist(iVar0)) && iVar0 == iParam1) || ((_0xbea3a6e5f5f79a6f(iParam0, &iVar0) && does_entity_exist(iVar0)) && iVar0 == iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_636()
{
	if (!is_player_free_aiming(player_id()))
	{
		return false;
	}
	if ((Global_1940258->f_38 == -160924582 || Global_1940258->f_38 == 1652431022) || _is_weapon_sniper(Global_1940258->f_38))
	{
		if (is_first_person_aim_cam_active())
		{
			return true;
		}
	}
	return false;
}

bool func_637(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_6)
	{
		func_706(uParam2, 1, iVar0);
	}
	if (!Global_1940258->f_6 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_13 = fParam5;
		}
		else
		{
			uParam2->f_13 = vdist(Global_35, get_entity_coords(iParam0, true, false));
		}
		if (!uParam2->f_2 & 128 != 0)
		{
			if (func_707(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_708(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940258->f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_709(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_708(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_710(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_708(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_711(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_708(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_20 && func_712(player_id(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_708(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940258->f_19)
		{
			if (func_713(uParam2, 1065353216))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_714(Global_34, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_708(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_715(Global_34, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_708(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940258->f_23) < 300)
			{
				if (func_716(Global_34, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_708(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_716(Global_34, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_708(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940258->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_717(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_708(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940258->f_19 || uParam2->f_13 < 20f)
			{
				if (func_718(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_708(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_24 || Global_1940258->f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_719(uParam2, 4000))
				{
					if ((func_720(iParam0, Global_1940258->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_721(uParam2, iParam0)) && func_722(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_708(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_720(iParam0, Global_1940258->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_721(uParam2, iParam0)) && func_722(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_708(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (Global_1940258->f_34 == 0)
			{
				if (Global_1940258->f_35 != 0)
				{
					if (func_723(iParam0, Global_1940258->f_35))
					{
						func_724();
						*uParam3 = 2;
						func_708(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 10f)
			{
				if (func_725(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_726() - uParam2->f_10) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_724();
						*uParam3 = 2;
						func_708(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1940258->f_36 != 0)
			{
				if (func_727())
				{
					if (func_723(iParam0, Global_1940258->f_36))
					{
						func_724();
						*uParam3 = 2;
						func_708(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_728(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_708(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (func_729(uParam2, iParam0))
		{
			*uParam3 = 1048576;
			func_708(iParam0, uParam2, *uParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_730(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_708(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_731(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_708(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_732(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_708(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_733(uParam2, 4000))
				{
					if (func_734(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_708(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_735(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_5 = 0;
					func_708(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_736(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_708(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_638(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_621(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

int func_639(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	iVar0 = func_737(iParam0, fParam1, bParam2, bParam3);
	if (_network_is_player_index_valid(iVar0))
	{
		return network_get_participant_index(iVar0);
	}
	return 255;
}

void func_640(var uParam0, int iParam1, bool bParam2)
{
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	clear_ped_non_creation_area();
	_0xa1cfb35069d23c23(iParam1);
	_0x74c2b3dc0b294102(iParam1);
	if (_0x91a5f9cbebb9d936(*uParam0))
	{
		remove_scenario_blocking_area(*uParam0, bParam2);
	}
}

bool func_641(struct<2> Param0, var uParam2)
{
	if (!func_38(Param0))
	{
		return false;
	}
	func_738(uParam2);
	switch (Param0)
	{
		case 2:
			_copy_memory(uParam2, Global_1071686->f_636[Param0.f_1], 3);
			return true;
		case 3:
			_copy_memory(uParam2, Global_1071686->f_636.f_602[Param0.f_1], 3);
			return true;
		case 4:
			_copy_memory(uParam2, Global_1071686->f_636.f_2104[Param0.f_1], 3);
			return true;
		case 5:
			_copy_memory(uParam2, Global_1071686->f_636.f_12606[Param0.f_1], 3);
			return true;
		case 6:
			_copy_memory(uParam2, Global_1071686->f_636.f_12908[Param0.f_1], 3);
			return true;
		case 7:
			_copy_memory(uParam2, Global_1071686->f_636.f_15910[Param0.f_1], 3);
			return true;
		case 8:
			_copy_memory(uParam2, Global_1071686->f_636.f_16512[Param0.f_1], 3);
			return true;
		default:
			break;
	}
	return false;
}

int func_642()
{
	iVar0 = 0;
	vVar1.x = Global_1257541->f_8863;
	vVar1.f_2 = -1041770777;
	if (_datafile_get_data_node_index(&(vVar1.f_1), &vVar1))
	{
		iVar0 = _datafile_get_num_children(vVar1.x, vVar1.y);
	}
	return iVar0;
}

void func_643(var uParam0, var uParam1)
{
}

int func_644(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

void func_645(var uParam0)
{
}

void func_646(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_674(uParam0, 1);
	func_675(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_647(var uParam0)
{
	if (!func_595(uParam0))
	{
		return 0;
	}
	if (func_739(uParam0))
	{
		return uParam0->f_2;
	}
	return func_740(uParam0->f_1);
}

int func_648(int iParam0)
{
	return func_741(get_entity_coords(iParam0, true, false), 1203982208, 1, 1);
}

var func_649(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_742() != 0)
	{
		iVar1 = player_id();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			_0x31010318ba9897ac(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1296859->f_10;
	iVar6 = Global_1296859->f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (vmag2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case 665633627:
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_743());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_743());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_743());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_744(get_player_team(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!network_get_this_script_is_network_script())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (network_is_player_active(&(Global_1296859->f_154[iVar2])))
		{
			iVar10 = &Global_1296859->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_745(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = get_player_ped(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!does_entity_exist(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1296859->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_746(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && _0xb655db7582aec805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !network_is_player_a_participant(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (get_player_team(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_0x901e0dc25080c8b9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_747(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!_0xf256a75210c5c0eb(iVar8, get_entity_coords(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				_0x31010318ba9897ac(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		_delete_volume(iVar8);
	}
	return uVar0;
}

bool func_650(var uParam0)
{
	return func_517(*uParam0, 2);
}

bool func_651()
{
	return func_67(32);
}

void func_652(bool bParam0)
{
	if (!func_67(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_67(256))
		{
			func_185(Local_764.f_18, 0);
			func_150(256);
		}
	}
	func_150(32);
}

bool func_653()
{
	return func_67(16);
}

void func_654(bool bParam0)
{
	if (!func_67(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_67(256))
		{
			func_185(Local_764.f_18, 0);
			func_150(256);
		}
	}
	func_150(16);
}

float func_655(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

char* func_656(int iParam0)
{
	switch (func_411(get_entity_model(iParam0)))
	{
		case 0:
			return "LEGENDARY_ALLIGATOR_CALL_SOUNDS";
		case 1:
			return "LEGENDARY_BEAR_CALL_SOUNDS";
		case 2:
			return "LEGENDARY_BEAVER_CALL_SOUNDS";
		case 3:
			return "LEGENDARY_BISON_CALL_SOUNDS";
		case 4:
			return "LEGENDARY_BOAR_CALL_SOUNDS";
		case 5:
			return "LEGENDARY_BUCK_CALL_SOUNDS";
		case 6:
			return "LEGENDARY_COUGAR_CALL_SOUNDS";
		case 7:
			return "LEGENDARY_PANTHER_CALL_SOUNDS";
		case 8:
			return "LEGENDARY_COYOTE_CALL_SOUNDS";
		case 9:
			return "LEGENDARY_FOX_CALL_SOUNDS";
		case 10:
			return "LEGENDARY_MOOSE_CALL_SOUNDS";
		case 11:
			return "LEGENDARY_RAM_CALL_SOUNDS";
		case 12:
			return "LEGENDARY_WOLF_CALL_SOUNDS";
		case 13:
			return "LEGENDARY_ELK_CALL_SOUNDS";
		default:
			break;
	}
	return "";
}

struct<4> func_657(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_668(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_533(1328661203, func_748(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_533(1328661203, func_748(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_533(1328661203, func_748(), -1591664384, bParam0);
}

int func_658(int iParam0)
{
	if (!func_667(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_659(bool bParam0)
{
	iVar0 = func_668(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_533(923904168, func_657(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_533(923904168, func_657(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_533(923904168, func_657(bParam0), -740156546, 0);
}

bool func_660(int iParam0, bool bParam1)
{
	if (func_662(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_749();
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_661(bool bParam0)
{
	iVar0 = func_668(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_533(271701509, func_657(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_533(271701509, func_657(bParam0), 12999093, 0);
}

int func_662(int iParam0)
{
	if (!func_667(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_663(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_662(iParam0);
	if (iVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &iVar0))
		{
			if (func_750(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_664(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_751(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_665(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_667(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_752(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_533(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_668(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_668(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_666(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_668(0);
	*uParam1 = { func_533(iParam0, func_659(0), iParam3, 0) };
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_667(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_668(bool bParam0)
{
	if (func_28() == -1)
	{
		if (!bParam0 && _0x7c7e4ab748ea3b07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && _inventory_get_ped_inventory_id(player_ped_id()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_669(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_670(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_753(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_755(func_754(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_756(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_671(int iParam0, struct<17> Param1)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			if (Global_1293346->f_20.f_1[iVar0]->f_1 == 1 || Global_1293346->f_20.f_1[iVar0]->f_1 == 5)
			{
				Global_1293346->f_20.f_1[iVar0]->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

bool func_672(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_673(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_674(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_675(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

struct<8> func_676(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			StringCopy(&cVar0, "tl_LegCougar", 64);
			break;
	}
	return cVar0;
}

int func_677(struct<8> Param0, var uParam8, var uParam9)
{
	iVar0 = get_id_of_this_thread();
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1 = _get_hash_of_thread(iVar0);
	Var1.f_1 = _0xfb9eced5b68f3b78(iVar0);
	Var1.f_3 = { Param0 };
	iVar12 = func_757(&Var1);
	if (iVar12 != -1)
	{
		switch (Global_1275441[iVar12])
		{
			case 4:
				*uParam9 = { (*Global_1275441)[iVar12]->f_22 };
				func_758(iVar12);
				return 2;
			case 3:
				*uParam9 = { (*Global_1275441)[iVar12]->f_22 };
				func_758(iVar12);
				return 1;
		}
	}
	else
	{
		if (func_759())
		{
			return 0;
		}
		if (!func_760(&Var1))
		{
			return 0;
		}
		if (!func_761(uParam8))
		{
			uParam9->f_3 = 2;
			return 2;
		}
		func_762(uParam8, &Var1);
	}
	return 0;
}

float func_678(vector3 vParam0, vector3 vParam3)
{
	vVar0 = { vParam3 - vParam0 };
	if (vVar0.y == 0f)
	{
		if (vVar0.x < 0f)
		{
			return -90f;
		}
		else
		{
			return 90f;
		}
	}
	return atan2(vVar0.x, vVar0.y);
}

bool func_679(int iParam0)
{
	return _0xf8b48a361dc388ae(iParam0) == 2;
}

void func_680(var uParam0, var uParam1)
{
	if (uParam0->f_1 == 255 || !network_is_player_active(uParam0->f_1))
	{
		return;
	}
	bVar0 = false;
	if (does_entity_exist(*uParam1) && func_763(*uParam1, Global_35, 1) < 300f)
	{
		bVar0 = true;
	}
	bVar1 = false;
	bVar1 = func_764();
	if (uParam0->f_1 == player_id())
	{
		if (bVar1)
		{
			Global_1198045 = 1;
		}
		else if (bVar0)
		{
			Global_1198045 = 1;
			if ((is_ped_dead_or_dying(*uParam1, true) || is_ped_injured(*uParam1)) || get_ped_config_flag(*uParam1, 580, true))
			{
				func_765(*uParam1);
			}
		}
	}
	if (!bVar1)
	{
		if (((!does_entity_exist(*uParam1) || is_ped_dead_or_dying(*uParam1, true)) || is_ped_injured(*uParam1)) || get_ped_config_flag(*uParam1, 580, true))
		{
			return;
		}
	}
	if (!network_is_player_active(uParam0->f_1))
	{
		return;
	}
	iVar2 = get_player_ped(uParam0->f_1);
	if (!does_entity_exist(iVar2))
	{
		return;
	}
	if (!bVar1)
	{
		if (func_552(iVar2, *uParam1, 1, 1) > 300f)
		{
			return;
		}
	}
	if ((func_251(uParam1->f_2, 1) || func_251(uParam1->f_2, 2)) && uParam1->f_1 != 0)
	{
		return;
	}
	uParam1->f_1 = Global_1296859->f_21;
	if (uParam0->f_1 == player_id())
	{
		func_277(&(uParam1->f_2), 1);
	}
	else if (_0x3f59fe6f37869576(player_id(), uParam0->f_1))
	{
		func_277(&(uParam1->f_2), 2);
	}
}

void func_681(var uParam0, var uParam1)
{
	if (network_does_network_id_exist(uParam0->f_5))
	{
		iVar0 = net_to_ped(uParam0->f_5);
		if (!does_entity_exist(net_to_ped(uParam0->f_5)))
		{
			return;
		}
		if (iVar0 != *uParam1)
		{
			return;
		}
		if (_0x083d497d57b7400f(iVar0) && !is_entity_visible(iVar0))
		{
			func_766(947, 1);
			func_767(*uParam1);
		}
		else if (network_has_control_of_network_id(uParam0->f_5))
		{
			if (((is_ped_dead_or_dying(iVar0, true) || is_ped_injured(iVar0)) || get_ped_config_flag(iVar0, 580, true)) || (_0x083d497d57b7400f(iVar0) && !is_entity_visible(iVar0)))
			{
				return;
			}
			func_768(*uParam1);
		}
	}
}

bool func_682(int iParam0)
{
	return does_entity_exist(&(Local_764.f_240.f_7[iParam0]));
}

void func_683(vector3 vParam0)
{
	allow_sonar_blips(true);
	force_sonar_blips_this_frame();
	trigger_sonar_blip(1231752879, vParam0);
}

Vector3 func_684(int iParam0)
{
	return get_entity_coords(&(Local_764.f_240.f_7[iParam0]), true, false);
}

float func_685(int iParam0)
{
	switch (func_412(func_411(get_entity_model(iParam0))))
	{
		case -1630294353:
			return 5f;
		case -1754709769:
			return 6f;
		case 916613222:
			return 7f;
		case 986272521:
			return 9f;
		case -1718188498:
			return 11f;
		default:
			break;
	}
	return 10f;
}

bool func_686(int iParam0, var uParam1, var uParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam1->f_6)
	{
		func_706(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_13 = fParam3;
	}
	else
	{
		uParam1->f_13 = vdist(Global_35, get_entity_coords(iParam0, false, false));
	}
	if (!Global_1940258->f_6 && !is_entity_dead(iParam0))
	{
		if (Global_1940258->f_24 || Global_1940258->f_25)
		{
			if (!uParam1->f_2 & 2 != 0)
			{
				if (func_719(uParam1, 4000))
				{
					if ((func_720(iParam0, Global_1940258->f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_721(uParam1, iParam0)) && func_722(uParam1, iParam0))
					{
						func_724();
						*uParam2 = 2;
						func_708(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 2 != 0)
		{
			if (uParam1->f_13 < 4f)
			{
				if (func_719(uParam1, 4000))
				{
					if ((func_720(iParam0, Global_1940258->f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_721(uParam1, iParam0)) && func_722(uParam1, iParam0))
					{
						func_724();
						*uParam2 = 2;
						func_708(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940258->f_35 != 0)
			{
				if (Global_1940258->f_34 == 0)
				{
					if (func_723(iParam0, Global_1940258->f_35))
					{
						func_724();
						*uParam2 = 2;
						func_708(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940258->f_36 != 0)
			{
				if (func_727())
				{
					if (func_723(iParam0, Global_1940258->f_36))
					{
						func_724();
						*uParam2 = 2;
						func_708(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940258->f_19)
		{
			if (func_713(uParam1, 1065353216))
			{
				if (!uParam1->f_2 & 4 != 0)
				{
					if (func_714(Global_34, iParam0, uParam1))
					{
						func_724();
						*uParam2 = 4;
						func_708(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_2 & 256 != 0)
				{
					if (func_715(Global_34, iParam0, uParam1))
					{
						func_724();
						*uParam2 = 256;
						func_708(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 131072 != 0)
		{
			if (func_769(iParam0, uParam1))
			{
				func_724();
				*uParam2 = 131072;
				func_708(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_770(iParam0, uParam1))
			{
				func_724();
				*uParam2 = 262144;
				func_708(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_687(var uParam0, int iParam1)
{
	return func_251(uParam0->f_10, iParam1);
}

void func_688(var uParam0)
{
	_0xe37287ee358939c3(uParam0);
}

void func_689(var uParam0, int iParam1)
{
	func_278(&(uParam0->f_66), iParam1);
}

void func_690(var uParam0)
{
	_0x011a42fd923d41ca(uParam0);
}

Vector3 func_691(vector3 vParam0, float fParam3, float fParam4)
{
	vVar0 = { get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_771(vVar0, get_random_float_in_range(0f, fParam3)) };
	vVar0.f_2 = get_random_float_in_range(-fVar3, fVar3);
	return vParam0 + vVar0;
}

int func_692(int iParam0)
{
	Var0 = { func_432(iParam0, -1797584255) };
	if (!stat_id_get_int(&Var0, &uVar2))
	{
		return -1;
	}
	return uVar2;
}

void func_693(var uParam0, bool bParam1)
{
	if (bParam1 || !func_595(uParam0))
	{
		func_507(uParam0);
	}
}

void func_694(int iParam0, int iParam1)
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_31(&Var0, iParam0, -1, -1, 255);
	Var31 = { func_432(iParam0, 1346578557) };
	if (!stat_id_get_int(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	set_bit(&iVar33, iParam1);
	if (!func_125(&Var0, 4) && func_772(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!stat_id_set_int(&Var31, iVar33, true))
	{
	}
	(*Global_1268861)[network_player_id_to_int()]->f_56[iParam0] = iVar33;
}

void func_695(int iParam0)
{
	func_773(iParam0);
}

void func_696(int iParam0)
{
	if (func_132(Global_1272030[iParam0]))
	{
		return;
	}
	func_774(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_31(&Var2, iVar0, iVar1, -1, 255);
	func_133((*Global_1272030)[iParam0]);
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_775(153786159) };
		stat_id_set_int(&Var34, iVar33, true);
		Var34 = { func_775(217123284) };
		stat_id_set_int(&Var34, Global_1296859->f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_775(945205875) };
		stat_id_set_int(&Var37, iVar36, true);
		Var37 = { func_775(890183498) };
		stat_id_set_int(&Var37, Global_1296859->f_21, true);
	}
}

void func_697(int iParam0)
{
	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_489(&Var0);
}

void func_698(struct<2> Param0)
{
	if (func_340(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_340(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_340(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_776(Param0, &Var0))
		{
			if (Var0.f_29 == -681494152)
			{
				_0xf21a5d66874fcedd(Var0.f_2, 0, -1423748980);
			}
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_29, 0);
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_30, 0);
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_31, 0);
		}
	}
}

void func_699(int iParam0)
{
	Var0 = { func_432(iParam0, -1797584255) };
	_0x6a0184e904cdf25e(&Var0, 1);
}

void func_700(int iParam0, int iParam1, int iParam2)
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	iVar31 = network_player_id_to_int();
	if (iVar31 > -1 && iVar31 < 32)
	{
		func_31(&Var0, iParam0, iParam1, iParam2, 255);
		if (Var0.f_7 < 3 && Var0.f_7 >= 0)
		{
			(*Global_1268861)[iVar31]->f_95[Var0.f_7] = 0;
		}
	}
}

bool func_701(var uParam0)
{
	return func_469(uParam0, 16);
}

char* func_702(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LA_ALLIGATOR";
		case 1:
			return "LA_BEAR";
		case 2:
			return "LA_BEAVER";
		case 3:
			return "LA_BISON";
		case 4:
			return "LA_BOAR";
		case 5:
			return "LA_BUCK";
		case 6:
			return "LA_COUGAR";
		case 7:
			return "LA_PANTHER";
		case 8:
			return "LA_COYOTE";
		case 13:
			return "LA_ELK";
		case 9:
			return "LA_FOX";
		case 10:
			return "LA_MOOSE";
		case 11:
			return "LA_RAM";
		case 12:
			return "LA_WOLF";
		default:
			break;
	}
	return "";
}

struct<15> func_703(int iParam0)
{
	Var0.f_10 = 255;
	_copy_memory(&(Var0.f_4), &Local_764, 5);
	Var0.f_9 = iParam0;
	Var0 = 182;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	return Var0;
}

void func_704(var uParam0)
{
	func_777(uParam0, func_513(4, 117));
}

bool func_705(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			if (is_entity_dead(iParam0))
			{
				if (get_ped_source_of_death(get_ped_index_from_entity_index(iParam0)) == iParam1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_706(var uParam0, bool bParam1, int iParam2)
{
	func_778(iParam2);
	if (Global_1572887->f_13 == -1)
	{
		if (!does_entity_exist(Global_34))
		{
			return;
		}
		if (Global_1940258->f_6)
		{
			return;
		}
	}
	else
	{
		if (!Global_1296859->f_11)
		{
			return;
		}
		if (Global_1296859->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_11 = 0;
	}
	uParam0->f_6 = iParam2;
	if (Global_1572887->f_13 == -1)
	{
		uParam0->f_14 = Global_1940258->f_38;
	}
	else
	{
		uParam0->f_14 = func_779(0);
	}
	switch (uParam0->f_7)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_14 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_34))
						{
							func_252(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_780(1, 1))
						{
							func_252(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_34) && (!func_780(1, 1) || *uParam0 & 8192 != 0))
				{
					func_275(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_2 & 1024 != 0)
	{
		if (!does_entity_exist(uParam0->f_15))
		{
			if (func_781(uParam0))
			{
				uParam0->f_16 = get_network_time_accurate();
			}
		}
		else if (uParam0->f_16 != 0)
		{
			if (get_time_difference(uParam0->f_16, get_network_time_accurate()) > 500)
			{
				if (!is_ped_on_mount(uParam0->f_15))
				{
					uParam0->f_15 = 0;
					uParam0->f_16 = 0;
				}
			}
		}
	}
	uParam0->f_7++;
	if (uParam0->f_7 >= 4)
	{
		uParam0->f_7 = 0;
		uParam0->f_8++;
		if (uParam0->f_8 > 4)
		{
			uParam0->f_8 = 0;
		}
	}
	func_782(uParam0);
}

bool func_707(int iParam0, var uParam1)
{
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case 869302489:
		case 1589923363:
			iVar1 = _0x822a001bcea5bd81(iParam0, iVar0, 0, 0);
			if (!is_entity_a_ped(iVar1))
			{
				return false;
			}
			iVar2 = get_ped_index_from_entity_index(iVar1);
			if (!is_ped_human(iVar2))
			{
				return false;
			}
			if (decor_exist_on(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1940258->f_27)
			{
				return false;
			}
			if (iVar2 == Global_1940258->f_26)
			{
				return false;
			}
			if (!func_783(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_784(iParam0, iVar2) <= func_785(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_708(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_786(iParam2, 1, 1, 1, 0))
	{
		func_252(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_787(uParam1, 1);
	func_788();
}

bool func_709(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_789(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_790(uParam1);
			if (func_791(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_3);
				iVar3 = func_792(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_787(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_793(uParam1))
						{
							func_787(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_710(int iParam0, int iParam1, var uParam2)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_794(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_790(uParam2);
		if (func_791(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = get_game_timer();
			}
			if (uParam2->f_3 != 0)
			{
				if (get_game_timer() - uParam2->f_3) > func_792(uParam2)
				{
					func_787(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_711(int iParam0, var uParam1)
{
	if (!get_entity_player_is_free_aiming_at(player_id(), &iVar0))
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!is_entity_a_ped(iVar0))
	{
		return false;
	}
	if (Global_1940258->f_34 != 0)
	{
		if (_get_rider_of_mount(Global_1940258->f_34, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (func_783(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_4) > func_792(uParam1)
		{
			fVar3 = func_790(uParam1);
			if (uParam1->f_13 < fVar3)
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_34, 17) && has_entity_clear_los_to_entity(iParam0, iVar1, 17))
				{
					if (_0x06087579e7aa85a9(iParam0, Global_34, -1f, fVar3, -1f, -1f) && _0x06087579e7aa85a9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_712(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_795(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1296859->f_10)
		{
			if (!Global_1296859->f_11)
			{
				return 0;
			}
		}
		else if (!does_entity_exist(get_player_ped(iParam0)))
		{
			return 0;
		}
	}
	else if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return 0;
	}
	if (_0xad401c63158acbaa(iParam0))
	{
		_0xcbfb4951f2e3934c(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || get_player_wanted_level(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !_0x148e7ac8141c9e64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (_0x532c5fddb986ee5c(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || _0xdaefdfdb2aeece37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (_0x69e181772886f48b(iParam0) || _0xf0fbfb9ab15f7734(iParam0, 0, 0))
		{
			if (bParam3 || _0xe083beda81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_713(var uParam0, float fParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_726();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_714(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_796(uParam2);
			if (!is_weapon_valid(Global_1940258->f_40) || Global_1940258->f_40 == -1569615261)
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
			else if (is_weapon_valid(Global_1940258->f_40) && _0xea522f991e120d45(Global_1940258->f_40))
			{
				_0xd355e2f1bb41087e(iParam1, 5f);
			}
			else
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
		}
		if ((!is_weapon_valid(Global_1940258->f_40) || Global_1940258->f_40 == -1569615261) || (is_weapon_valid(Global_1940258->f_40) && _0x5809dbca0a37c82b(Global_1940258->f_40)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (_0x9c81338b2e62ce0a(player_id(), iParam1, iVar1) && _0x285d36c5c72b0569(uParam0) <= fVar2)
		{
			if (func_722(uParam2, iParam1))
			{
				func_787(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_715(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_13 < IntToFloat(func_797(uParam2)))
	{
		if ((is_weapon_valid(Global_1940258->f_40) && !_0x5809dbca0a37c82b(Global_1940258->f_40)) || get_current_ped_vehicle_weapon(Global_34, &uVar0))
		{
			if (func_722(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_787(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_716(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_798(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_24))
				{
					func_787(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_30))
				{
					func_787(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_29, &vVar4, 0, 0);
					if (func_799(iParam1, vVar0, vVar4))
					{
						func_787(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_24))
				{
					func_787(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_29, &vVar7, 0, 0);
					if (func_799(iParam1, vVar0, vVar7))
					{
						func_787(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	if (is_shocking_event_in_sphere(-624326149, vVar0, 15f) || is_shocking_event_in_sphere(-732566870, vVar0, 15f))
	{
		return true;
	}
	return false;
}

bool func_717(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1940258->f_33)
	{
		if (!func_783(iParam0, uParam1, &(Global_1940258->f_28[iVar0])) || iParam0 == &Global_1940258->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_800(&(Global_1940258->f_28[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false), vVar9);
			if (func_801(&(Global_1940258->f_28[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1940258->f_28[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1940258->f_28[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						uParam1->f_11 = iParam0;
						return true;
					}
				}
			}
			if (func_802(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_803(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_804(uParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_718(int iParam0, var uParam1)
{
	if (!_0x1d1b448d719415ab(*iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(*iParam0, 0, 0);
	switch (iVar0)
	{
		case -1695849405:
		case 2044016570:
			iVar1 = _0x822a001bcea5bd81(*iParam0, iVar0, 0, 0);
			iVar2 = _0x38497f139981c5c9(*iParam0, iVar0, 0, 0);
			vVar5 = { get_entity_coords(iVar1, false, false) };
			vVar8 = { get_entity_coords(iVar2, false, false) };
			_0x1a5c5d350068a673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_719(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_726();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_720(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = player_ped_id();
	if (!bParam3)
	{
		if (has_entity_been_damaged_by_any_ped(iParam0) || has_entity_been_damaged_by_any_vehicle(iParam0))
		{
			if (has_entity_been_damaged_by_entity(iParam0, iVar0, 1, 1) || decor_exist_on(iParam0, "DamagedByPlayer"))
			{
				return 1;
			}
			iVar1 = get_players_last_vehicle();
			if (!is_entity_dead(iVar1))
			{
				if (has_entity_been_damaged_by_entity(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (is_ped_on_mount(iVar0))
			{
				if (!is_entity_dead(get_mount(iVar0)))
				{
					if (has_entity_been_damaged_by_entity(iParam0, get_mount(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (does_entity_exist(iParam1))
			{
				if (!is_entity_dead(iParam1))
				{
					if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_805(iVar0, &iVar2))
		{
			if ((is_ped_ragdoll(iParam0) || _0x947e43f544b6ab34(iParam0, player_id(), 10, 1000)) || (!bParam4 && is_entity_touching_entity(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_806(iVar0, iParam0))
	{
		return 1;
	}
	if (_0xd0b7aeb56229d317(player_ped_id()) == iParam0)
	{
		if (_0x0e99e3bf11bb6367(player_ped_id()))
		{
			return 1;
		}
	}
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_being_jacked(iParam0))
		{
			if (get_peds_jacker(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (is_ped_performing_melee_action(iVar0, 8, 0))
	{
		if (get_ped_config_flag(iParam0, 9, true) || is_ped_being_stealth_killed(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_721(var uParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", uParam0->f_6))
		{
		}
	}
	else if (uParam0->f_6 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_722(var uParam0, int iParam1)
{
	if (func_807(uParam0))
	{
		return true;
	}
	if (_0x29fce825613fefca(iParam1, 400))
	{
		return true;
	}
	if (is_ped_dead_or_dying(iParam1, true))
	{
		return false;
	}
	if ((is_ped_performing_melee_action(Global_34, 8, 0) || get_ped_config_flag(iParam1, 9, true)) || is_ped_being_stealth_killed(iParam1))
	{
		return false;
	}
	if (is_ped_performing_melee_action(Global_34, 16, 0) || get_ped_config_flag(iParam1, 10, true))
	{
		return false;
	}
	if (_get_lassoed_entity(Global_34) != 0)
	{
		return true;
	}
	if (_0x8d50f43298ab9545(Global_34, iParam1))
	{
		return true;
	}
	if (!is_ped_ragdoll(iParam1))
	{
		return true;
	}
	return false;
}

bool func_723(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_552(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_724()
{
}

bool func_725(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_34);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_808(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_726();
			return true;
		}
		else if (_0xa19447d83294e29f(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = _get_ped_in_draft_seat(iVar0, iVar6);
					if (does_entity_exist(iVar7))
					{
						if (func_763(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_10 = func_726();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_726()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_727()
{
	if (Global_1940258->f_36 == 0)
	{
		return false;
	}
	if (Global_1940258->f_36 == Global_1940258->f_34)
	{
		return false;
	}
	if (Global_1940258->f_37 <= 0)
	{
		return false;
	}
	if ((func_726() - Global_1940258->f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_728(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_15))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_785(uParam0);
	if (uParam0->f_13 > func_809(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_810(iParam1);
	iVar1 = func_811(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || _0x9d9473cb82d83a30(iParam1, Global_34, 0) == 1) || _0x9d9473cb82d83a30(iParam1, uParam0->f_15, 0) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_729(var uParam0, int iParam1)
{
	if (!Global_1940258->f_50)
	{
		return false;
	}
	if (!uParam0->f_1 & 1 != 0)
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (func_812(iVar0, iParam1, 1060437492) != 0)
	{
		return false;
	}
	vVar1 = { get_entity_coords(iParam1, true, false) };
	vVar4 = { get_entity_coords(iVar0, true, false) };
	fVar7 = func_813(vVar1, vVar4);
	fVar8 = absf((vVar1.z - vVar4.z));
	if (fVar8 >= 2f)
	{
		return false;
	}
	if (fVar7 > uParam0->f_31)
	{
		return false;
	}
	return true;
}

int func_730(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_13 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_814(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_731(int iParam0, var uParam1)
{
	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1940258->f_18)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_815(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((_0x06087579e7aa85a9(iParam0, Global_34, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_34, 17)) && _0x7f9b9791d4cb71f6(iParam0, Global_34, 1, false) == 1)
		{
			return true;
		}
	}
	iVar0 = get_jack_target(Global_34);
	if ((does_entity_exist(iVar0) && !does_entity_belong_to_this_script(iVar0, true)) || Global_1940258->f_24)
	{
		if (_0x06087579e7aa85a9(iParam0, Global_34, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!func_816(iParam0))
	{
		return false;
	}
	iVar1 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case 73464052:
		case 1201762715:
			if (func_817(uParam1))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (iVar4 != Global_34)
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			if (_0x88ad6cc10d8d35b2(iVar5))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			return true;
		case -1601932249:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (_0x06087579e7aa85a9(iParam0, iVar4, -1f, -1f, -1f, -1f) && _0x06087579e7aa85a9(iParam0, Global_34, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, iVar4, 17) && has_entity_clear_los_to_entity(iParam0, Global_34, 17))
				{
					if (!func_818(uParam1, iParam0))
					{
						if (func_763(iVar4, Global_35, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
		case -171567092:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (!is_ped_a_player(iVar4) || !is_ped_a_player(iVar5))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			if (_0x06087579e7aa85a9(iParam0, iVar4, -1f, -1f, -1f, -1f) || _0x06087579e7aa85a9(iParam0, iVar5, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, iVar4, 17) || has_entity_clear_los_to_entity(iParam0, iVar5, 17))
				{
					return true;
				}
			}
			_0x1a5c5d350068a673(iParam0, 0);
			return false;
	}
	return false;
}

bool func_732(int iParam0, var uParam1)
{
	if (!func_819(0))
	{
		return false;
	}
	if (is_ped_facing_ped(iParam0, Global_34, 90f))
	{
		if (has_entity_clear_los_to_entity(iParam0, Global_34, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_733(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_726();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_734(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_735(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_726();
	}
	else if (func_726() - uParam1->f_5) > func_820(uParam1)
	{
		return func_821(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_736(var uParam0, int iParam1)
{
	iVar0 = get_ped_source_of_death(iParam1);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (decor_exist_on(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (Global_34 == iVar1 || Global_1940258->f_34 == iVar1)
	{
		return true;
	}
	return false;
}

int func_737(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		if (!does_entity_exist(&(Local_764.f_240.f_7[iParam0])))
		{
			return 255;
		}
	}
	iVar1 = -1;
	bVar2 = fParam1 > 0f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = int_to_participantindex(iVar0);
		if (!network_is_participant_active(iVar3))
		{
		}
		else if (&Local_59[iVar0]->f_7.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam3 && !func_482(iVar0))
		{
		}
		else if (iVar1 != -1 && &Local_59[iVar0]->f_7.f_2[iParam0] > &Local_59[iVar1]->f_7.f_2[iParam0])
		{
		}
		else if (bVar2 && &Local_59[iVar0]->f_7.f_2[iParam0] > fParam1)
		{
		}
		else
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 32)
	{
		return network_get_player_index(int_to_participantindex(iVar1));
	}
	return 255;
}

void func_738(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_739(var uParam0)
{
	return func_517(*uParam0, 2);
}

int func_740(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

int func_741(vector3 vParam0, int iParam3, bool bParam4, bool bParam5)
{
	fVar2 = iParam3;
	iVar5 = 255;
	fVar3 = iParam3;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar4 = int_to_playerindex(iVar0);
		if (!network_is_player_active(iVar4))
		{
		}
		else if (!network_is_player_a_participant(iVar4))
		{
		}
		else
		{
			iVar1 = network_get_participant_index(iVar4);
			if (bParam4 && !func_481(iVar1, 1, 1))
			{
			}
			else if (!func_482(iVar1))
			{
			}
			else
			{
				iVar6 = get_player_ped(iVar4);
				if (bParam5)
				{
					if (((_is_ped_hogtied(iVar6) || _0x833f0053340ef413(iVar6)) || func_579(4, iVar1)) || is_ped_in_any_vehicle(iVar6, false))
					{
					}
					else
					{
						fVar2 = vdist(get_entity_coords(iVar6, false, false), vParam0);
						if (fVar2 < fVar3)
						{
							iVar5 = iVar4;
							fVar3 = fVar2;
						}
					}
					iVar0 = (iVar0 + 1);
					return iVar5;
				}
			}
		}
	}
}

int func_742()
{
	return Global_1051252->f_12;
}

char* func_743()
{
	return "unnamed";
}

int func_744(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_745(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_822(36, iParam0);
}

int func_746(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1296859->f_22[iParam0])
	{
		return (*Global_1100469)[iParam0]->f_1;
	}
	return 26;
}

bool func_747(int iParam0)
{
	if (func_823(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_824(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

struct<4> func_748()
{
	return Var0;
}

bool func_749()
{
	return (func_825(-1185145312, 0, 0, 0) > 0 && func_826(func_533(889965687, func_657(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_750(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (_0xaa29a5f13b2c20b2(iParam1, -455129387) == -1925887917)
		{
			return false;
		}
	}
	return _item_database_can_equip_item_on_category(iParam0, iParam1, iParam2);
}

bool func_751(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_668(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_752(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

bool func_753(int iParam0, var uParam1)
{
	iVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_827(uParam1->f_8, iParam0, iVar0, 2048) || func_827(uParam1->f_8, iParam0, iVar0, 32768)) || func_827(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_827(uParam1->f_8, iParam0, iVar0, 4) || func_827(uParam1->f_8, iParam0, iVar0, 256)) || func_827(uParam1->f_8, iParam0, iVar0, 65536)) || func_827(uParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_827(uParam1->f_8, iParam0, iVar0, 1) || func_827(uParam1->f_8, iParam0, iVar0, 8)) || func_827(uParam1->f_8, iParam0, iVar0, 65536)) || func_827(uParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_827(uParam1->f_8, iParam0, iVar0, 1) || func_827(uParam1->f_8, iParam0, iVar0, 16)) || func_827(uParam1->f_8, iParam0, iVar0, 2)) || func_827(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_827(uParam1->f_8, iParam0, iVar0, 8) || func_827(uParam1->f_8, iParam0, iVar0, 4096)) || func_827(uParam1->f_8, iParam0, iVar0, 256)) || func_827(uParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_754(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_755(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_828(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_828(iParam1, 2, 0, 0);
	return -1;
}

int func_756(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_828(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_757(var uParam0)
{
	if (!func_829(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!func_830(&((*Global_1275441)[iVar0]->f_1), uParam0))
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_758(int iParam0)
{
	Var0.f_5 = -1;
	Var0.f_15 = -1;
	Var0.f_15.f_1 = -1;
	Var0.f_15.f_2 = -1;
	Var0.f_26 = -1;
	Var0.f_4 = 1;
	Var0.f_26 = iParam0;
	func_831(&Var0);
}

bool func_759()
{
	return Global_1276421->f_75.f_1 != -1;
}

bool func_760(var uParam0)
{
	if (!func_829(uParam0))
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if ((*Global_1275441)[iVar1]->f_1 == *uParam0 && (*Global_1275441)[iVar1]->f_1.f_1 == uParam0->f_1)
		{
			return false;
		}
		if (Global_1275441[iVar1] == -1)
		{
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return false;
	}
	return true;
}

bool func_761(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (func_254(uParam0->f_1))
	{
		return false;
	}
	return true;
}

void func_762(var uParam0, var uParam1)
{
	Var0.f_5 = -1;
	Var0.f_15 = -1;
	Var0.f_15.f_1 = -1;
	Var0.f_15.f_2 = -1;
	Var0.f_26 = -1;
	Var0.f_4 = 0;
	Var0.f_5 = { *uParam0 };
	Var0.f_15 = { *uParam1 };
	Global_1276421->f_75 = { *uParam1 };
	func_831(&Var0);
}

float func_763(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_764()
{
	if (func_682(1))
	{
		return 0;
	}
	if (vdist(get_entity_coords(player_ped_id(), true, false), func_221()) > 300f)
	{
		return 0;
	}
	return 1;
}

void func_765(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (_0x9fa00e2fc134a9d0(iParam0))
	{
		iVar0 = get_blip_from_entity(iParam0);
		if (does_blip_exist(iVar0))
		{
			_set_blip_flash_style(iVar0, 580546400);
			_blip_set_modifier(iVar0, 580546400);
		}
	}
}

void func_766(int iParam0, bool bParam1)
{
	func_832(iParam0, &iVar0, &iVar1);
	if (!func_833(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_834(iVar0, iVar1);
}

void func_767(int iParam0)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	vVar0.f_2 = Global_35.f_2;
	vVar0 = { vVar0 - Global_35 };
	if (func_254(vVar0))
	{
		vVar0 = { 1f, 0f, 0f };
	}
	vVar0 = { func_382(vVar0) };
	vVar0 = { Global_35 + vVar0 * Vector(160f, 160f, 160f) };
	_play_sound_from_position(func_835(iParam0), vVar0, func_656(iParam0), false, 0, true, 0);
}

void func_768(var uParam0)
{
	_0x0e53530d9b2db01d(uParam0, -1574878795, 1);
}

bool func_769(int iParam0, var uParam1)
{
	fVar0 = func_836(uParam1);
	if (uParam1->f_13 > (fVar0 + 5f))
	{
		return false;
	}
	if (!_0x5102307ce88798eb(iParam0))
	{
		request_ped_visibility_tracking(iParam0);
	}
	if (uParam1->f_13 < fVar0 || is_tracked_ped_visible(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_837(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
		bVar3 = uParam1->f_1 & 2 != false;
		if (_0x06087579e7aa85a9(iParam0, Global_34, -1f, fVar2, -1f, fVar1) && _0x7f9b9791d4cb71f6(iParam0, Global_34, 1, bVar3) == 1)
		{
			return true;
		}
		else if (is_weapon_valid(Global_1940258->f_38))
		{
			if (_is_weapon_lantern(Global_1940258->f_38) || _is_weapon_torch(Global_1940258->f_38))
			{
				if (uParam1->f_13 <= 5f)
				{
					if (func_838())
					{
						if (is_ped_facing_ped(Global_34, iParam0, 110f))
						{
							if (has_entity_clear_los_to_entity(iParam0, Global_34, 17))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_770(int iParam0, var uParam1)
{
	if (func_839(iParam0))
	{
		set_player_noise_multiplier(player_id(), 0.25f);
	}
	if (((_get_ped_crouch_movement(Global_34) || is_ped_in_cover(Global_34, 0, 0)) || is_ped_going_into_cover(Global_34)) || *uParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (_0x0ea9eacba3b01601(Global_34, iParam0, iVar1) && get_player_current_stealth_noise(player_id()) > 4f)
	{
		if (*uParam1 & 512 != 0)
		{
			if (is_ped_in_cover(Global_34, 0, 0) || is_ped_going_into_cover(Global_34))
			{
				return false;
			}
			if (_get_ped_crouch_movement(Global_34) || ((_0xa29fd00d45311eb7(Global_34, "stealth") == 1f && get_player_current_stealth_noise(player_id()) < 8f) && *uParam1 & 2097152 != 0))
			{
				return false;
			}
		}
		if (_0xa29fd00d45311eb7(Global_34, "stealth") == 1f && get_player_current_stealth_noise(player_id()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

Vector3 func_771(vector3 vParam0, float fParam3)
{
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_772(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

void func_773(int iParam0)
{
	iVar0 = Global_1296859->f_21;
	Var1 = { func_432(iParam0, 1178968787) };
	if (!stat_id_set_int(&Var1, iVar0, true))
	{
	}
}

int func_774(int iParam0, int iParam1, int iParam2)
{
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	iVar1 = 1;
	while (iVar1 <= 43)
	{
		*iParam1 = iVar1;
		func_31(&Var2, *iParam1, -1, -1, 255);
		iVar0 = (iVar0 + Var2);
		if (iVar0 >= iParam0)
		{
			iVar0 = (iVar0 - Var2);
			*iParam2 = 0;
			while (*iParam2 <= (Var2 - 1))
			{
				if (iVar0 == iParam0)
				{
					return 1;
				}
				iVar0++;
				*iParam2++;
			}
		}
		iVar1++;
	}
	return 0;
}

struct<2> func_775(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

bool func_776(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_641(Param0, &vVar0);
	if (func_840(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

void func_777(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	trigger_script_event(1, uParam0, 15, 11, &uParam1);
}

void func_778(int iParam0)
{
	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1940258->f_32);
	Global_1940258->f_21 = func_841();
	if (Global_1940258->f_21)
	{
		Global_1940258->f_22 = get_game_timer();
	}
	bVar1 = false;
	if (is_weapon_valid(Global_1940258->f_38))
	{
		bVar1 = true;
		if (is_ped_shooting(Global_34))
		{
			if (get_current_ped_vehicle_weapon(Global_34, &uVar2))
			{
			}
			else
			{
				uVar2 = Global_1940258->f_38;
			}
			Global_1940258->f_40 = uVar2;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_842(&(Global_1940258->f_28), &(Global_1940258->f_33));
			Global_1940258->f_32 = iParam0;
			break;
		case 1:
			Global_1940258->f_24 = _0x72ad59f7b7fb6e24(player_id(), 4000);
			if (!Global_1940258->f_24)
			{
				if (bVar1 && _is_weapon_lasso(Global_1940258->f_38))
				{
					Global_1940258->f_24 = _get_lassoed_entity(Global_34) != 0;
				}
				if (Global_1940258->f_40 == 1151374672)
				{
					Global_1940258->f_24 = _0x46d42883e873c1d7(Global_34) > 0;
				}
			}
			break;
		case 2:
			bVar3 = is_weapon_valid(Global_1940258->f_40);
			if (bVar3 && _is_weapon_lasso(Global_1940258->f_40))
			{
				Global_1940258->f_19 = 0;
			}
			else
			{
				if (bVar3 && _0x5809dbca0a37c82b(Global_1940258->f_40))
				{
					Global_1940258->f_19 = _0x285d36c5c72b0569(Global_34) <= 3f;
				}
				else
				{
					Global_1940258->f_19 = _0x285d36c5c72b0569(Global_34) <= 1f;
				}
				if (Global_1940258->f_19)
				{
					Global_1940258->f_23 = get_frame_count();
				}
			}
			break;
		default:
			Global_1940258->f_32 = iParam0 + 1;
			break;
	}
	Global_19 |= 4;
}

var func_779(int iParam0)
{
	return &(Global_1102219->f_3705[iParam0]);
}

bool func_780(bool bParam0, bool bParam1)
{
	if (func_843(bParam0, &iVar0, &iVar1))
	{
		if (bParam1)
		{
			if (does_entity_exist(iVar0) && get_ped_config_flag(iVar0, 6, false))
			{
				return false;
			}
			if (does_entity_exist(iVar1) && get_ped_config_flag(iVar1, 6, false))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

bool func_781(var uParam0)
{
	iVar0 = Global_1940258->f_34;
	if (func_28() == -1)
	{
		if (Global_1940258->f_34 == 0)
		{
			iVar0 = func_844(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1940258->f_34) || !&Global_1956200->f_1716[4])
	{
		iVar0 = func_844(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_811(iVar0) == -1)
	{
		return false;
	}
	if (!does_entity_belong_to_this_script(iVar0, false))
	{
		return false;
	}
	uParam0->f_15 = iVar0;
	return true;
}

void func_782(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_845(uParam0);
	}
}

bool func_783(int iParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(iParam2))
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_ped_human(iParam2))
	{
		iVar1 = func_811(iParam2);
	}
	else
	{
		iVar1 = func_810(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_811(iParam0);
	}
	else
	{
		iVar0 = func_810(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_186(*uParam1, 8388608))
	{
		return true;
	}
	iVar2 = get_ped_relationship_group_hash(iParam0);
	iVar3 = get_ped_relationship_group_hash(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_784(int iParam0, int iParam1)
{
	return func_552(iParam0, iParam1, 1, 1);
}

float func_785(var uParam0)
{
	return uParam0->f_29;
}

bool func_786(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

void func_787(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_252(uParam0, 134217728);
	}
	else
	{
		func_275(uParam0, 134217728);
	}
}

void func_788()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_789(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if ((_is_weapon_lasso(Global_1940258->f_38) || 1151374672 == Global_1940258->f_38) && Global_1940258->f_21)
	{
	}
	else if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, 0, 0))
	{
		if (is_entity_a_ped(iVar2) && iParam0 == get_ped_index_from_entity_index(iVar2))
		{
			return false;
		}
	}
	if (Global_1940258->f_34 != 0)
	{
		if (_get_rider_of_mount(Global_1940258->f_34, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_552(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (is_player_targetting_entity(iVar1, iParam0, bParam5) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_846(iVar0, 0)))
		{
			if (func_638(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_790(var uParam0)
{
	return uParam0->f_18;
}

bool func_791(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_186(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (_0x06087579e7aa85a9(iParam1, Global_34, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (has_entity_clear_los_to_entity(iParam1, Global_34, 17))
		{
			return true;
		}
	}
	return false;
}

int func_792(var uParam0)
{
	return uParam0->f_19;
}

int func_793(var uParam0)
{
	return uParam0->f_20;
}

bool func_794(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (is_player_targetting_entity(iVar1, iParam0, false) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_846(iVar0, 0)))
		{
			if (func_621(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_795(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258->f_12)
	{
		if ((bParam2 || Global_1940258->f_13 > 0) || Global_1940258->f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940258->f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1940258->f_14 > 0 || (bParam2 && Global_1940258->f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940258->f_7)
		{
			if (bParam2 || Global_1940258->f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_796(var uParam0)
{
	return uParam0->f_25;
}

int func_797(var uParam0)
{
	return uParam0->f_23;
}

int func_798(var uParam0)
{
	switch (uParam0->f_8)
	{
		case 0:
			switch (uParam0->f_7)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_7)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_7)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_7)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_7)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_799(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_847(iParam0, vParam4, 0.5f))
	{
		if (_0x0c9dbf48c6ba6e4c(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (vdist(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_800(int iParam0)
{
	if (get_ped_config_flag(iParam0, 9, false))
	{
		if (Global_1940258->f_38 == -1569615261)
		{
			return 1;
		}
		if (is_weapon_valid(Global_1940258->f_40))
		{
			if (_is_weapon_melee(Global_1940258->f_40) || _is_weapon_bow(Global_1940258->f_40))
			{
				return 1;
			}
		}
	}
	if (func_848(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_801(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	if (_is_this_model_a_horse(iVar0))
	{
		return true;
	}
	return false;
}

bool func_802(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_839(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_803(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_839(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_804(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = func_849(uParam0);
	if (func_839(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x2ba9d7bf629f920c(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (has_entity_clear_los_to_entity(iParam1, &(Global_1940258->f_28[iParam3]), 17))
		{
			if (_0x06087579e7aa85a9(iParam1, &(Global_1940258->f_28[iParam3]), -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_805(int iParam0, int iParam1)
{
	if (!_0xefc4303ddc6e60d3(iParam0))
	{
		return false;
	}
	*iParam1 = _0xed1f514af4732258(iParam0);
	if (!does_entity_exist(*iParam1))
	{
		return false;
	}
	if (is_ped_dead_or_dying(*iParam1, true))
	{
		return false;
	}
	if (!_0x2d64376cf437363e(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_806(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (_0x8d50f43298ab9545(iParam0, iParam1))
	{
		return true;
	}
	if (!_is_weapon_lasso(func_850(iParam0, 1, 0, 0)) && !func_850(iParam0, 1, 0, 0) == 1151374672)
	{
		return false;
	}
	if (is_ped_performing_melee_action(iParam0, 16, 0))
	{
		if (get_melee_target_for_ped(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_807(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_808(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_763(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_809(var uParam0)
{
	return uParam0->f_26;
}

int func_810(int iParam0)
{
	if (!does_entity_belong_to_this_script(iParam0, true))
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamA") && decor_get_bool(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamB") && decor_get_bool(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_811(int iParam0)
{
	if (!does_entity_belong_to_this_script(iParam0, true))
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseTeamA") && decor_get_bool(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseTeamB") && decor_get_bool(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_812(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_851(iParam0, vVar0, iParam2);
}

float func_813(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

int func_814(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	if (Global_1940258->f_34 != 0)
	{
		bVar0 = true;
	}
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam1, player_ped_id(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (has_entity_been_damaged_by_entity(iParam0, Global_1940258->f_34, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 10, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 11, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_805(Global_34, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (is_ped_ragdoll(iParam0) || (!bParam2 && is_entity_touching_entity(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_552(iParam0, player_ped_id(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (is_entity_touching_entity(player_ped_id(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_552(iParam0, Global_1940258->f_34, 0, 1) < 2.5f)
		{
			if (is_entity_touching_entity(Global_1940258->f_34, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (is_ped_ragdoll(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_815(int iParam0, var uParam1, bool bParam2)
{
	func_843(1, &iVar0, &iVar1);
	if (!does_entity_exist(iVar0) && !does_entity_exist(iVar1))
	{
		return false;
	}
	if (does_entity_exist(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_34, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_34, 17))
				{
					if (!bParam2 || !func_818(uParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (does_entity_exist(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_34, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_34, 17))
			{
				if (!bParam2 || !func_818(uParam1, iVar1))
				{
					if (func_763(iVar1, Global_35, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_816(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!_0x83d43f0fd5276e4d(iParam0, 0))
	{
		return false;
	}
	return true;
}

bool func_817(var uParam0)
{
	return func_186(*uParam0, 131072);
}

bool func_818(var uParam0, int iParam1)
{
	if (decor_exist_on(iParam1, "bIsCriminal") && decor_get_bool(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (get_ped_config_flag(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = get_ped_relationship_group_default_hash(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return true;
		default:
			break;
	}
	return false;
}

bool func_819(int iParam0)
{
	return false;
}

int func_820(var uParam0)
{
	return uParam0->f_22;
}

int func_821(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_5 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_13;
	}
	if (is_ped_facing_ped(iParam0, Global_34, 90f))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_34, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (is_entity_touching_entity(iParam0, Global_34))
		{
			return 1;
		}
	}
	return 0;
}

bool func_822(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_852(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_853())
	{
		return func_852(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_852(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_823(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_824(int iParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1296859->f_22[iVar0])
	{
		func_854(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_855(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

int func_825(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_672(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_668(bParam1), iParam0, iParam3);
}

int func_826(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_856(&uParam0, iParam4, bParam5, iParam6);
}

int func_827(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_251(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_828(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			if (Global_1293346->f_20.f_1[iVar0]->f_1 == iParam1)
			{
			}
			else
			{
				Global_1293346->f_20.f_1[iVar0]->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1293346->f_20.f_1[iVar0]->f_2 = iParam2;
				Global_1293346->f_20.f_1[iVar0]->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_857(iParam0, iParam1, iParam2, iParam3);
}

bool func_829(var uParam0)
{
	if (is_string_null_or_empty(&(uParam0->f_3)))
	{
		return false;
	}
	if (*uParam0 == -1)
	{
		return false;
	}
	if (uParam0->f_1 == -1)
	{
		return false;
	}
	return true;
}

bool func_830(var uParam0, var uParam1)
{
	if (uParam0->f_1 != uParam1->f_1)
	{
		return false;
	}
	if (*uParam0 != *uParam1)
	{
		return false;
	}
	if (!are_strings_equal(&(uParam0->f_3), &(uParam1->f_3)))
	{
		return false;
	}
	return true;
}

void func_831(var uParam0)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	if (&Global_1051252->f_16[17] == 0 || !_does_thread_exist(&(Global_1051252->f_16[17])))
	{
		return;
	}
	uParam0->f_4 = uParam0->f_4;
	*uParam0 = 181;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	_trigger_script_event_2(uParam0, 27, 10, &(Global_1051252->f_16[17]));
	func_858(uParam0);
}

void func_832(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_833(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_859(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_860(iParam0))
	{
		return false;
	}
	if (func_861(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_862(iParam0, 1)) || func_863(32768))
	{
		if (!func_862(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_864())
	{
		return false;
	}
	return true;
}

void func_834(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

char* func_835(int iParam0)
{
	return "CALL";
}

float func_836(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_809(uParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_865(uParam0);
	}
	return func_809(uParam0);
}

float func_837(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_838()
{
	iVar0 = func_867(func_866());
	iVar1 = func_868(func_866());
	if (iVar0 >= 21)
	{
		return true;
	}
	else if (iVar0 < 5)
	{
		return true;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return true;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return true;
		}
	}
	return false;
}

bool func_839(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return false;
	}
	iVar0 = _get_scenario_point_type_ped_is_using(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864) || iVar0 == -2016812721)
	{
		return true;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = _0xc22aa08a8adb87d4(iParam0);
		if (iVar0 == 970972795)
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_840(int iParam0, var uParam1, var uParam2)
{
	if (!func_869(iParam0))
	{
		return false;
	}
	if (func_870(iParam0, uParam1, &uVar0))
	{
		func_871(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_841()
{
	if (func_872())
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		if (Global_1940258->f_38 == 2055893578)
		{
			return is_control_pressed(0, 130948705);
		}
		return get_ped_reset_flag(Global_34, 311);
	}
	else
	{
		return &(Global_1956200->f_1716[3]);
	}
	return false;
}

void func_842(var uParam0, var uParam1)
{
	iVar2 = player_id();
	if (!_0x72ad59f7b7fb6e24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (_0x1a6e84f13c952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!does_entity_exist(uParam0[iVar1]))
			{
			}
			else if (!is_ped_human(uParam0[iVar1]) && !(decor_exist_on(uParam0[iVar1], "HorseTeamA") || decor_exist_on(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (decor_exist_on(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

bool func_843(bool bParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(Global_1940258->f_26))
	{
		if (!bParam0 || is_ped_human(Global_1940258->f_26))
		{
			*iParam1 = Global_1940258->f_26;
			iVar0 = 1;
		}
	}
	if (does_entity_exist(Global_1940258->f_27))
	{
		if (!bParam0 || is_ped_human(Global_1940258->f_27))
		{
			if (_is_ped_hogtied(Global_1940258->f_27) || is_entity_dead(Global_1940258->f_27))
			{
				*iParam2 = Global_1940258->f_27;
				iVar0 = 1;
			}
		}
	}
	if (Global_1940258->f_24 && !is_ped_injured(Global_34))
	{
		iVar1 = _get_lassoed_entity(Global_34);
		if (does_entity_exist(iVar1))
		{
			if (!bParam0 || is_ped_human(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_844(var uParam0)
{
	if (iVar0 == 0)
	{
		if (is_control_just_pressed(0, -171675621) && !is_player_dead(player_id()))
		{
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, 0, 0))
			{
				if (does_entity_exist(iVar1))
				{
					if (is_entity_a_ped(iVar1))
					{
						if (_is_this_model_a_horse(get_entity_model(iVar1)))
						{
							iVar0 = get_ped_index_from_entity_index(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_7 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1940258->f_6)
			{
				iVar0 = _0x4b19f171450e0d4f(Global_34);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = _get_lassoed_entity(Global_34);
		}
		if (iVar0 != 0)
		{
			if (does_entity_exist(iVar0))
			{
				if (!_is_this_model_a_horse(get_entity_model(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_845(var uParam0)
{
	if (Global_1940258->f_32 == 0)
	{
		func_275(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940258->f_33)
		{
			if (does_entity_exist(&(Global_1940258->f_28[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1940258->f_28[iVar0])))
				{
					func_252(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_846(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_847(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_848(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !is_entity_dead(iParam0))
	{
		if (_0x9e2d5d6bc97a5f1e(iParam0, -1569615261, iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (is_weapon_valid(Global_1940258->f_38))
			{
				if (_is_weapon_melee(Global_1940258->f_38) || Global_1940258->f_38 == -618550132)
				{
					if (_0x9e2d5d6bc97a5f1e(iParam0, Global_1940258->f_38, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

float func_849(var uParam0)
{
	return uParam0->f_28;
}

int func_850(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	iVar0 = -1569615261;
	if (is_entity_dead(iParam0) || !is_ped_human(iParam0))
	{
		return iVar0;
	}
	if (get_current_ped_weapon(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_851(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_873(vVar3, vVar6);
	if (absf(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_874(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_852(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_853()
{
	return Global_1102219->f_3672;
}

void func_854(int iParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 0)
	{
		return;
	}
	func_855(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_855(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

int func_856(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_875(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_857(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1293346->f_20 < 20)
	{
		Global_1293346->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_20.f_1[iVar0] = { *(Global_1293346->f_20.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	func_876(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

void func_858(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_877(iVar0);
		if (func_186(uParam0->f_5.f_9, iVar1))
		{
		}
		iVar0++;
	}
}

bool func_859(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_860(int iParam0)
{
	if (func_862(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_861(int iParam0)
{
	if (Global_1904651->f_33[iParam0]->f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = get_cloud_time_as_int();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904651->f_33[iParam0]->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904651->f_33[iParam0]->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_39.f_3534[iVar0] - iVar1);
			if (Global_39.f_3534[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904651->f_33[iParam0]->f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_862(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_863(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_864()
{
	if (!func_18())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

var func_865(var uParam0)
{
	return uParam0->f_27;
}

int func_866()
{
	return &Global_1902818;
}

int func_867(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_868(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

bool func_869(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

bool func_870(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_878(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_871(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_879(iParam0, uParam2->f_1);
	uParam1->f_2 = -2140901307;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_2 = iVar0;
	uParam1->f_2 = -2140901307;
	_datafile_get_string(&(uParam2->f_9), uParam1);
	uParam1->f_2 = 1292053410;
	_datafile_get_string(&(uParam2->f_17), uParam1);
	if (*uParam2 == 3)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_880(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_881(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_882(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_883(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_884(iVar0);
	uParam1->f_2 = 1060782978;
	_datafile_get_hash(&(uParam2->f_8), uParam1);
	uParam1->f_2 = 162343104;
	_datafile_get_int(&(uParam2->f_6), uParam1);
	uParam1->f_2 = -733480474;
	_datafile_get_int(&(uParam2->f_25), uParam1);
	uParam1->f_2 = 492825771;
	_datafile_get_int(&(uParam2->f_26), uParam1);
	uParam1->f_2 = -839279581;
	_datafile_get_int(&(uParam2->f_27), uParam1);
	uParam1->f_2 = -640941103;
	_datafile_get_int(&(uParam2->f_28), uParam1);
	iVar0 = 0;
	uParam1->f_2 = -2025968302;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1829781569;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1999176766;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_31 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -739728609;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_32 = iVar0;
}

bool func_872()
{
	switch (Global_1940258->f_38)
	{
		case -164645981:
		case -160924582:
		case 827679807:
		case 1247405313:
		case 1652431022:
			return true;
		default:
			break;
	}
	return false;
}

float func_873(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = vmag(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_874(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_875(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_668(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_751(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

void func_876(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_885(&(uParam0->f_4));
}

int func_877(int iParam0)
{
	return shift_left(1, iParam0);
}

int func_878(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1649591222;
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = -1841318328;
			break;
		case -2:
			iVar0 = 1293082345;
			break;
		case 2:
			iVar0 = -1599460565;
			break;
		case 3:
			iVar0 = 1610555441;
			break;
		case 4:
			iVar0 = 2080488347;
			break;
		case 5:
			iVar0 = 1107336882;
			break;
		case 6:
			iVar0 = -1307562954;
			break;
		case 7:
			iVar0 = 1198585370;
			break;
		case 8:
			iVar0 = 1753821005;
			break;
		case 9:
			iVar0 = -1480791665;
			break;
		case 10:
			iVar0 = 1894568478;
			break;
		case 11:
			iVar0 = 1923799069;
			break;
		case 12:
			iVar0 = -605765767;
			break;
		case 13:
			iVar0 = 1252941330;
			break;
		case 14:
			iVar0 = -1930354636;
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = 1859328971;
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

int func_879(int iParam0, var uParam1)
{
	if (func_886(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_880(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case -66250361:
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case -1261475678:
			return 10;
		case -621956193:
			return 11;
		case 1081776803:
			return 12;
		case -218697175:
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case 1724417419:
			return 16;
		case -728200180:
			return 17;
		case 1404415665:
			return 18;
		case 339077182:
			return 20;
		case 650120418:
			return 21;
		case 1695693301:
			return 28;
		case -1809176396:
			return 19;
		case 349772825:
			return 22;
		case 1657045547:
			return 23;
		case -590482787:
			return 24;
		case -1711308722:
			return 25;
		case -409129282:
			return 26;
		case -1790985606:
			return 27;
		case 1518877519:
			return 30;
		default:
			break;
	}
	return -1;
}

int func_881(int iParam0)
{
	switch (iParam0)
	{
		case -747096482:
			return 0;
		case 390152599:
			return 1;
		case 348001928:
			return 2;
		case 687137831:
			return 3;
		case 1221273613:
			return 4;
		case -669486032:
			return 5;
		case -1044132584:
			return 6;
		default:
			break;
	}
	return -1;
}

int func_882(int iParam0)
{
	switch (iParam0)
	{
		case 1697883736:
			return 0;
		case 1927192818:
			return 1;
		case -1363591469:
			return 2;
		case 1635448909:
			return 3;
		case -604494871:
			return 4;
		case -993281498:
			return 5;
		case -1871525158:
			return 6;
		case -596286663:
			return 15;
		case 923956646:
			return 16;
		case 1459450644:
			return 17;
		case -2071675432:
			return 18;
		case -552339597:
			return 8;
		case 2144670272:
			return 10;
		case 996459079:
			return 9;
		case 1996177174:
			return 11;
		case -1702168032:
			return 12;
		case -27117790:
			return 13;
		case 1653867545:
			return 14;
		case -142235487:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_883(int iParam0)
{
	switch (iParam0)
	{
		case 2049341823:
			return 0;
		case 1655635003:
			return 1;
		case -435635781:
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case -568832219:
			return 8;
		case -1103026985:
			return 9;
		case 1039801657:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_884(int iParam0)
{
	switch (iParam0)
	{
		case 987444055:
			return -1;
		case 1330140418:
			return 0;
		case -640677282:
			return 1;
		case -1950303839:
			return 2;
		case 1322114923:
			return 3;
		case -525004462:
			return 4;
		case 1419735597:
			return 5;
		case 1004744465:
			return 6;
		case 672178273:
			return 7;
		case 1777227915:
			return 8;
		case 408825843:
			return 9;
		case -42959138:
			return 10;
		case 64621749:
			return 11;
		case -1346830927:
			return 12;
		case -218234180:
			return 13;
		case 751663875:
			return 14;
		case 1766283257:
			return 15;
		case -269943670:
			return 16;
		case 522313648:
			return 17;
		case 1976336482:
			return 18;
		case -713504854:
			return 19;
		case 753957709:
			return 20;
		case 1054483531:
			return 21;
		case 547199896:
			return 22;
		default:
			break;
	}
	return -1;
}

void func_885(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

bool func_886(int iParam0, var uParam1, var uParam2)
{
	if (func_887(iParam0, uParam1, &uVar0))
	{
		func_888(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_887(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_878(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_888(var uParam0, int iParam1, var uParam2)
{
	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	_datafile_get_string(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	_datafile_get_string(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	_datafile_get_string(&(uParam2->f_3), uParam0);
}

