void __EntryFunction__()
{
	fLocal_1077 = 1f;
	fLocal_1078 = 1f;
	iVar0 = iVar1081;
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
	network_register_host_broadcast_variables(&Local_13, 45, 42);
	func_10(_0xba24095ea96dfe17(&Local_13), 45, "m_hostData");
	network_register_player_broadcast_variables(&Local_58, 609, 43);
	func_11(_0x690806bc83bc8ca2(Local_58[0]), 609, "m_clientData");
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
	else if (func_17(Local_667.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_667.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_667.f_12), Local_667.f_9))
	{
		return true;
	}
	else if (Local_667.f_8 == 6)
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
	func_30();
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
	_copy_memory(&Local_667, uParam0, 5);
	iVar2 = func_31(&bVar1, Local_667.f_1, Local_667.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_667.f_12 = iVar2;
	iVar0 = Global_1198046->f_231.f_1066[iVar2]->f_5;
	Var3.f_10 = 1106247680;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_32(&Var3, Local_667.f_1, Local_667.f_2, Local_667.f_3, iVar0);
	Local_667.f_9 = { func_33(Var3.f_5, 8) };
	Local_667.f_14 = Var3.f_5;
	Local_667.f_15 = { Var3.f_11 };
	Local_667.f_18 = Var3.f_7;
	func_34();
	func_35();
}

void func_14()
{
	func_36();
}

void func_15()
{
	func_37();
	func_38();
	func_39();
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
	if (func_40(*Global_1051213) && !func_21(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_41(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_42(iParam3, 255))
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
	if (func_43())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_40(*Global_1051213))
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
		func_44();
	}
	switch (Local_13)
	{
		case 0:
			func_45();
			break;
		case 1:
			func_46();
			break;
		case 2:
			func_47();
			break;
		case 3:
			func_48();
			break;
		case 4:
			func_49();
			break;
		case 5:
			func_50();
			break;
	}
}

void func_23()
{
	func_51();
	func_52();
	if (Local_667.f_8 <= 5)
	{
		func_53();
	}
	switch (Local_667.f_8)
	{
		case 0:
			func_54();
			break;
		case 1:
			func_55();
			break;
		case 2:
			func_56();
			break;
		case 3:
			func_57();
			break;
		case 4:
			func_58();
			break;
		case 5:
			func_59();
			break;
	}
}

void func_24()
{
	func_60();
}

void func_25()
{
	if (func_61())
	{
		if (_0xf6a8a652a6b186cd(Local_13.f_3.f_1))
		{
			_0xfdfecc6ee4491e11(Local_13.f_3.f_1);
		}
	}
	func_62();
}

void func_26()
{
	func_63();
	func_64();
	func_65();
	func_66();
	func_67();
}

void func_27()
{
	if (Local_667.f_12 != -1)
	{
		if (network_is_game_in_progress() && network_get_num_participants() <= 1)
		{
			func_68(Local_667.f_12, 4);
		}
	}
	func_69();
	if (func_70(64))
	{
		func_71(Local_13.f_6);
	}
	func_72();
}

int func_28()
{
	return Global_1572887->f_13;
}

bool func_29()
{
	return Global_1051252->f_8;
}

void func_30()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_13.f_35.f_1[iVar0] = 255;
		iVar0++;
	}
}

int func_31(var uParam0, int iParam1, int iParam2)
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
	func_32(&Var26, iParam1, iParam2, -1, 255);
	func_73(&Var0, Var26.f_5);
	iVar25 = func_74(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_75(iVar25) };
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

void func_32(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			func_76(uParam0, iParam2);
			break;
		case 2:
			func_77(uParam0, iParam2);
			break;
		case 3:
			func_78(uParam0, iParam2);
			break;
		case 4:
			func_79(uParam0, iParam2);
			break;
		case 12:
			func_80(uParam0, iParam2);
			break;
		case 6:
			func_81(uParam0, iParam2, -1);
			break;
		case 7:
			func_82(uParam0, iParam2, iParam3);
			break;
		case 5:
			func_83(uParam0, iParam2);
			break;
		case 11:
			func_84(uParam0, iParam2);
			break;
		case 9:
			func_85(uParam0, iParam2, iParam3);
			break;
		case 10:
			func_86(uParam0, iParam2);
			break;
		case 8:
			func_87(uParam0, iParam2);
			break;
		case 13:
			func_88(uParam0, iParam2, iParam4);
			break;
		case 14:
			func_89(uParam0, iParam2, iParam3);
			break;
		case 15:
			func_90(uParam0, iParam2);
			break;
		case 16:
			func_91(uParam0, iParam2, iParam3);
			break;
		case 31:
			func_92(uParam0, iParam2);
			break;
		case 21:
			func_93(uParam0, iParam2);
			break;
		case 28:
			func_94(uParam0, iParam2);
			break;
		case 25:
			func_95(uParam0, iParam2);
			break;
		case 24:
			func_96(uParam0, iParam2);
			break;
		case 22:
			func_97(uParam0, iParam2);
			break;
		case 23:
			func_98(uParam0, iParam2);
			break;
		case 29:
			func_99(uParam0, iParam2);
			break;
		case 26:
			func_100(uParam0, iParam2);
			break;
		case 30:
			func_101(uParam0, iParam2);
			break;
		case 27:
			func_102(uParam0, iParam2);
			break;
		case 32:
			func_103(uParam0, iParam2, iParam3);
			break;
		case 33:
			func_104(uParam0, iParam2, iParam3);
			break;
		case 34:
			func_105(uParam0, iParam2);
			break;
		case 17:
			func_106(uParam0, iParam2);
			break;
		case 18:
			func_107(uParam0, iParam2);
			break;
		case 19:
			func_108(uParam0, iParam2);
			break;
		case 20:
			func_109(uParam0, iParam2);
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
			func_110(uParam0, iParam1, iParam2);
			break;
		default:
			break;
	}
}

struct<2> func_33(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_112(iParam0, &(Global_1071686->f_636), func_111(iParam1));
			break;
		case 3:
			Var0.f_1 = func_112(iParam0, &(Global_1071686->f_636.f_602), func_111(iParam1));
			break;
		case 4:
			Var0.f_1 = func_112(iParam0, &(Global_1071686->f_636.f_2104), func_111(iParam1));
			break;
		case 5:
			Var0.f_1 = func_112(iParam0, &(Global_1071686->f_636.f_12606), func_111(iParam1));
			break;
		case 6:
			Var0.f_1 = func_112(iParam0, &(Global_1071686->f_636.f_12908), func_111(iParam1));
			break;
		case 7:
			Var0.f_1 = func_112(iParam0, &(Global_1071686->f_636.f_15910), func_111(iParam1));
			break;
		case 8:
			Var0.f_1 = func_112(iParam0, &(Global_1071686->f_636.f_16512), func_111(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_113();
	}
	return Var0;
}

void func_34()
{
	func_114();
	func_115();
	func_116();
	func_117();
	func_118();
}

void func_35()
{
	func_119();
	func_120();
	func_121();
}

void func_36()
{
}

void func_37()
{
}

void func_38()
{
}

void func_39()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_122(&(Local_13.f_40.f_4), iVar0, 3);
		iVar0++;
	}
}

bool func_40(struct<2> Param0)
{
	if (!func_123(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_111(Param0))
	{
		return false;
	}
	return true;
}

bool func_41(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_42(int iParam0, int iParam1)
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

bool func_43()
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
	if (!func_40(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_44()
{
}

void func_45()
{
	iVar0 = Global_1198046->f_231.f_1066[Local_667.f_12]->f_5;
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_32(&Var1, Local_667.f_1, Local_667.f_2, Local_667.f_3, iVar0);
	if (!func_124(&Var1, 1))
	{
		func_125(1);
		return;
	}
	Local_13.f_6 = func_126(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar0)));
	func_127(256);
	if (func_128(Local_13.f_6))
	{
		func_129(5);
		func_125(6);
	}
	else
	{
		func_125(1);
	}
}

void func_46()
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, Local_667.f_1, Local_667.f_2, -1, 255);
	if (func_124(&Var0, 1))
	{
		func_125(2);
		return;
	}
	if (func_130(Var0, &bVar31))
	{
		clear_area(Local_667.f_15, Var0.f_10, 2442122);
		func_125(2);
	}
	else if (bVar31)
	{
		func_129(3);
		func_125(6);
	}
	if (!func_131(Local_13.f_3.f_2))
	{
		func_132(&(Local_13.f_3.f_2));
	}
	else if (func_133(Local_13.f_3.f_2) > 45000)
	{
		func_129(4);
		func_125(6);
	}
}

void func_47()
{
	if (func_134(1, 255))
	{
		if (!func_135(1))
		{
			if (func_136())
			{
				func_127(1);
			}
		}
		else
		{
			func_137();
			func_125(3);
		}
	}
}

void func_48()
{
	if (func_134(2, 255))
	{
		if (!func_135(2))
		{
			bVar0 = true;
			if (!func_138())
			{
				bVar0 = false;
			}
			if (!func_139())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_127(2);
			}
		}
		else
		{
			func_140();
			func_125(4);
		}
	}
}

void func_49()
{
	func_141();
	func_142();
	func_143();
	if (func_144() || Local_13.f_2 != 0)
	{
		func_145();
		func_125(5);
	}
}

void func_50()
{
	if (func_134(4, 255))
	{
		if (func_146())
		{
			func_127(4);
			func_125(6);
		}
	}
}

void func_51()
{
	if (!func_135(256))
	{
		return;
	}
	if (func_135(512))
	{
		if (func_70(64) && func_126(player_id()) == Local_13.f_6)
		{
			func_71(Local_13.f_6);
			func_147(64);
		}
	}
	else if (!func_70(64))
	{
		if (func_126(player_id()) == Local_13.f_6)
		{
			func_148(Local_13.f_6, 1, 1);
			func_149(64);
		}
	}
	else if (func_126(player_id()) != Local_13.f_6)
	{
		func_71(Local_13.f_6);
		func_147(64);
	}
}

void func_52()
{
	if (!Global_13)
	{
		if (func_134(8192, 255))
		{
			func_150(8192);
		}
	}
	else if (!func_134(8192, 255))
	{
		func_151(8192);
	}
}

void func_53()
{
	func_152();
}

void func_54()
{
	if (Local_13 == 6)
	{
		func_153(6);
	}
	else if (Local_13 > 0)
	{
		func_51();
		func_153(1);
	}
}

void func_55()
{
	if (Local_13 == 6)
	{
		func_153(6);
	}
	else if (Local_13 > 1)
	{
		func_153(2);
	}
}

void func_56()
{
	if (!func_134(1, 255))
	{
		bVar0 = true;
		if (!func_154())
		{
			bVar0 = false;
		}
		if (!func_155())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_151(1);
		}
		else
		{
			iVar1 = Global_1901947->f_236.f_68;
			if (!func_131(Local_667.f_11))
			{
				func_132(&(Local_667.f_11));
			}
			if (func_133(Local_667.f_11) >= iVar1)
			{
				func_153(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_156(&(Local_667.f_11));
		func_157();
		func_153(3);
	}
}

void func_57()
{
	if (!func_134(2, 255))
	{
		iVar0 = func_158();
		iVar1 = func_159();
		if (iVar0 && iVar1)
		{
			func_151(2);
		}
		else
		{
			iVar2 = Global_1901947->f_236.f_68;
			if (!func_131(Local_667.f_11))
			{
				func_132(&(Local_667.f_11));
			}
			if (func_160(Local_667.f_11) >= iVar2)
			{
				func_153(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_156(&(Local_667.f_11));
		func_161();
		func_162();
		func_163();
		func_164();
		func_153(4);
	}
}

void func_58()
{
	if (Local_13 >= 5)
	{
		func_165();
		func_153(5);
		return;
	}
	func_166();
	func_167();
	func_168();
	func_169();
	func_170();
	func_171();
}

void func_59()
{
	if (!func_134(4, 255))
	{
		if (func_172())
		{
			func_173();
			func_68(Local_667.f_12, 4);
			func_151(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_153(6);
	}
}

void func_60()
{
}

bool func_61()
{
	return (func_135(4) || (network_is_game_in_progress() && network_get_num_participants() <= 1));
}

void func_62()
{
}

void func_63()
{
	if (func_61())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (network_does_network_id_exist(&(Local_13.f_23[iVar1])))
			{
				iVar0 = net_to_ped(&(Local_13.f_23[iVar1]));
				func_174(iVar1);
				if (network_has_control_of_entity(iVar0))
				{
					set_blocking_of_non_temporary_events(iVar0, false);
					if (!func_175(iVar1, 16))
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

void func_64()
{
	if (func_61())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = 0;
			while (iVar2 < 8)
			{
				if (func_176(iVar1, iVar2))
				{
				}
				else if (func_177(iVar1, iVar2))
				{
					iVar0 = &Local_667.f_101[iVar1]->f_5[iVar2];
					if (does_entity_exist(iVar0))
					{
						if (func_178(iVar1, iVar2))
						{
							delete_object(&iVar0);
						}
						else
						{
							set_object_as_no_longer_needed(&iVar0);
						}
					}
				}
				else if (network_does_network_id_exist(Local_13.f_25[iVar1][iVar2]))
				{
					iVar0 = net_to_obj(Local_13.f_25[iVar1][iVar2]);
					if (network_has_control_of_entity(iVar0))
					{
						if (func_178(iVar1, iVar2))
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

void func_65()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (!func_179((*Local_667.f_317[iVar0])[iVar1]->f_3))
			{
				if (func_180((*Local_667.f_317[iVar0])[iVar1]))
				{
					_0x9cf1836c03fb67a2((*Local_667.f_317[iVar0])[iVar1], 1);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_66()
{
	func_181(&(Local_667.f_335.f_13));
	if (_does_volume_exist(Local_667.f_335.f_11))
	{
		_delete_volume(Local_667.f_335.f_11);
	}
}

void func_67()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_183(func_182(iVar0), 1);
		iVar0++;
	}
}

void func_68(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (func_184(iParam0, iVar0, iParam1))
	{
		return;
	}
	set_bit((*(*Global_1207784)[iVar0])[iParam0], iParam1);
}

void func_69()
{
	if (!func_70(1))
	{
		return;
	}
	if (func_70(4))
	{
		return;
	}
	if (!func_70(2))
	{
		iVar0 = -1;
	}
	else if (!func_70(8))
	{
		iVar0 = 2;
	}
	else if (func_70(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_70(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_185(Local_667.f_9, iVar0, 0, 255, 0);
	func_149(4);
	if (bVar1)
	{
		func_186(Local_667.f_1, Local_667.f_2);
		if (!func_70(256))
		{
			if (iVar0 == 1)
			{
				func_187(Local_667.f_18, 1);
			}
			else
			{
				func_187(Local_667.f_18, 0);
			}
			func_149(256);
		}
	}
	else
	{
		func_187(Local_667.f_18, 2);
	}
}

bool func_70(int iParam0)
{
	return func_188(Local_667.f_7, iParam0);
}

void func_71(int iParam0)
{
	if (!func_189(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	(*Global_1134390)[iVar0]->f_70 = iParam0;
	(*Global_1134390)[iVar0]->f_70.f_2 = 0;
}

void func_72()
{
	bVar0 = func_61();
	if (bVar0)
	{
		func_191(func_190());
	}
	if (func_192(16))
	{
		remove_shocking_event(Local_667.f_19.f_46);
		func_193(16);
	}
	if (bVar0)
	{
		if (_does_anim_scene_exist(func_194()) && network_has_control_of_network_id(Local_13.f_7.f_2))
		{
			if (_network_has_control_of_anim_scene(func_194()))
			{
				_delete_anim_scene(func_194());
			}
		}
	}
	if (func_195() == 2)
	{
		func_196();
	}
	func_197();
	func_198();
}

void func_73(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_74(var uParam0)
{
	if (!func_199(uParam0))
	{
		return -1;
	}
	iVar0 = func_200(uParam0, uParam0->f_9);
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
			iVar0 = func_200(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_75(int iParam0)
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

void func_76(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 7;
	func_201(uParam0, iParam1);
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

void func_77(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = 277430601;
			uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = 1659133778;
			uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = 1296650927;
			uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = 2115437634;
			uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
			break;
		case 4:
			func_203(uParam0);
			uParam0->f_5 = 1098622970;
			uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
			break;
		case 5:
			func_203(uParam0);
			uParam0->f_5 = 393263596;
			uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
			break;
		case 6:
			func_203(uParam0);
			uParam0->f_5 = 189453630;
			uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
			break;
		case 7:
			func_203(uParam0);
			uParam0->f_5 = -98921343;
			uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
			break;
		case 8:
			func_203(uParam0);
			uParam0->f_5 = 6025033;
			uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
			break;
		case 9:
			func_203(uParam0);
			uParam0->f_5 = -1060299979;
			uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
			break;
		case 10:
			func_203(uParam0);
			uParam0->f_5 = 682088681;
			uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
			break;
		case 11:
			func_203(uParam0);
			uParam0->f_5 = 1705841922;
			uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
			break;
		case 12:
			func_203(uParam0);
			uParam0->f_5 = -301205165;
			uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
			break;
		case 13:
			func_203(uParam0);
			uParam0->f_5 = 1906160715;
			uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
			break;
		case 14:
			func_203(uParam0);
			uParam0->f_5 = -1129906020;
			uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
			break;
		case 15:
			func_203(uParam0);
			uParam0->f_5 = 1592980994;
			uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
			break;
		case 16:
			func_203(uParam0);
			uParam0->f_5 = 686459378;
			uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
			break;
		case 17:
			func_203(uParam0);
			uParam0->f_5 = -259262381;
			uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
			break;
		case 18:
			func_203(uParam0);
			uParam0->f_5 = 1289806844;
			uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
			break;
		case 19:
			func_203(uParam0);
			uParam0->f_5 = 347656238;
			uParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
			break;
	}
}

void func_78(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 8;
	uParam0->f_2 = 1;
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 5);
			uParam0->f_5 = 1454566440;
			uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
			break;
		case 1:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 5);
			uParam0->f_5 = 1141360338;
			uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
		case 2:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 5);
			uParam0->f_5 = 844768119;
			uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
		case 3:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			func_204(uParam0, 7);
			uParam0->f_5 = -1601993562;
			uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
			break;
		case 4:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 5);
			func_204(uParam0, 7);
			uParam0->f_5 = -901588956;
			uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
			break;
		case 5:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 5);
			func_204(uParam0, 7);
			uParam0->f_5 = 2129019244;
			uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
		case 6:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			func_204(uParam0, 6);
			uParam0->f_5 = 1227099802;
			uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
			break;
		case 7:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			func_204(uParam0, 6);
			uParam0->f_5 = -940471213;
			uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
			break;
		case 8:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			func_204(uParam0, 6);
			uParam0->f_5 = -700569364;
			uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
			break;
		case 9:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			uParam0->f_5 = 412376369;
			uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
		case 10:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			func_204(uParam0, 5);
			func_204(uParam0, 7);
			uParam0->f_5 = -364052317;
			uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
		case 11:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			uParam0->f_5 = -989186530;
			uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
			break;
		case 12:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			func_204(uParam0, 6);
			uParam0->f_5 = 333858683;
			uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
			break;
		case 13:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			uParam0->f_5 = -39511303;
			uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
			break;
		case 14:
			func_204(uParam0, 3);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			func_204(uParam0, 6);
			uParam0->f_5 = 813662381;
			uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
			break;
		case 15:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 5);
			func_204(uParam0, 7);
			uParam0->f_5 = -1114006686;
			uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
			break;
		case 16:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 3);
			func_204(uParam0, 5);
			func_204(uParam0, 7);
			uParam0->f_5 = 1049238845;
			uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
			break;
		case 17:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 3);
			func_204(uParam0, 5);
			func_204(uParam0, 7);
			uParam0->f_5 = 1363886783;
			uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
			break;
		case 18:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 5);
			uParam0->f_5 = -1215674354;
			uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
			break;
		case 19:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			uParam0->f_5 = 1902132155;
			uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
			break;
		case 20:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 5);
			uParam0->f_5 = 1661312774;
			uParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
			break;
	}
}

void func_79(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 2;
	func_202(uParam0);
	uParam0->f_15[0] = -2090512547;
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = 1382777618;
			uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = -2000681184;
			uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = 886884092;
			uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = -1277120723;
			uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
			break;
		case 4:
			func_203(uParam0);
			uParam0->f_5 = 1577436816;
			uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
			break;
		case 5:
			func_203(uParam0);
			uParam0->f_5 = -234749781;
			uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
			break;
		case 6:
			func_203(uParam0);
			uParam0->f_5 = -1607623039;
			uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
		case 7:
			func_203(uParam0);
			uParam0->f_5 = -1943295936;
			uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
			break;
		case 8:
			func_203(uParam0);
			uParam0->f_5 = -397730168;
			uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
			break;
		case 9:
			func_203(uParam0);
			uParam0->f_5 = -392659534;
			uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
			break;
		case 10:
			func_203(uParam0);
			uParam0->f_5 = 146267878;
			uParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
			break;
	}
}

void func_80(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = 1247886914;
			uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = 1926100410;
			uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = 603340011;
			uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = -1253915394;
			uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
			break;
		case 4:
			func_203(uParam0);
			uParam0->f_5 = 1281783573;
			uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
			break;
		case 5:
			func_203(uParam0);
			uParam0->f_5 = -1384936716;
			uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
			break;
		case 6:
			func_203(uParam0);
			uParam0->f_5 = 636669604;
			uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
			break;
		case 7:
			func_203(uParam0);
			uParam0->f_5 = 1410575087;
			uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
			break;
		case 8:
			func_203(uParam0);
			uParam0->f_5 = -736919321;
			uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
		case 9:
			func_203(uParam0);
			uParam0->f_5 = 1755496218;
			uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
			break;
		case 10:
			func_203(uParam0);
			uParam0->f_5 = -1810033095;
			uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
			break;
		case 11:
			func_203(uParam0);
			uParam0->f_5 = 99707271;
			uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
			break;
		case 12:
			func_203(uParam0);
			uParam0->f_5 = 2145033839;
			uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
			break;
		case 13:
			func_203(uParam0);
			uParam0->f_5 = -994111457;
			uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
			break;
		case 14:
			func_203(uParam0);
			uParam0->f_5 = 702836385;
			uParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
			break;
	}
}

void func_81(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 16;
	uParam0->f_1 = 2;
	uParam0->f_2 = 8;
	switch (iParam2)
	{
		case 0:
			func_205(uParam0, 0);
			func_205(uParam0, 1);
			func_205(uParam0, 4);
			func_205(uParam0, 5);
			break;
		case 1:
			func_205(uParam0, 2);
			func_205(uParam0, 3);
			func_205(uParam0, 6);
			func_205(uParam0, 7);
			func_206(uParam0, 2);
			break;
		default:
			func_202(uParam0);
			break;
	}
	switch (iParam1)
	{
		case 0:
			func_204(uParam0, 0);
			uParam0->f_5 = -88606612;
			uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
			break;
		case 1:
			func_204(uParam0, 1);
			uParam0->f_5 = -1507537085;
			uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
		case 2:
			func_204(uParam0, 0);
			uParam0->f_5 = 150331424;
			uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
			break;
		case 3:
			func_204(uParam0, 1);
			uParam0->f_5 = -74168995;
			uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
			break;
		case 4:
			func_204(uParam0, 0);
			uParam0->f_5 = -1303456769;
			uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
			break;
		case 5:
			func_204(uParam0, 1);
			uParam0->f_5 = 2080696176;
			uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
			break;
		case 6:
			func_204(uParam0, 0);
			uParam0->f_5 = -801880493;
			uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
			break;
		case 7:
			func_204(uParam0, 1);
			uParam0->f_5 = -2098877513;
			uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
			break;
		case 8:
			func_204(uParam0, 0);
			uParam0->f_5 = -985131289;
			uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
			break;
		case 9:
			func_204(uParam0, 1);
			uParam0->f_5 = 171385032;
			uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
			break;
		case 10:
			func_204(uParam0, 0);
			uParam0->f_5 = -690365399;
			uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
			break;
		case 11:
			func_204(uParam0, 1);
			uParam0->f_5 = -393773180;
			uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
		case 12:
			func_204(uParam0, 0);
			uParam0->f_5 = 1783045643;
			uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
			break;
		case 13:
			func_204(uParam0, 1);
			uParam0->f_5 = -1841828372;
			uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
			break;
		case 14:
			func_204(uParam0, 0);
			uParam0->f_5 = -1926357119;
			uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
			break;
		case 15:
			func_204(uParam0, 1);
			uParam0->f_5 = -1904926193;
			uParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
			break;
	}
}

void func_82(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 12;
	uParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 9);
			func_204(uParam0, 10);
			func_204(uParam0, 11);
			func_207(uParam0, iParam2);
			uParam0->f_5 = 666420762;
			uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
			break;
		case 1:
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 8);
			func_204(uParam0, 9);
			func_204(uParam0, 10);
			func_204(uParam0, 11);
			func_207(uParam0, iParam2);
			uParam0->f_5 = 1145423923;
			uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
			break;
		case 2:
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			func_204(uParam0, 6);
			func_204(uParam0, 9);
			func_204(uParam0, 10);
			func_204(uParam0, 11);
			func_207(uParam0, iParam2);
			uParam0->f_5 = -1176575305;
			uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
			break;
		case 3:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 9);
			func_204(uParam0, 10);
			func_204(uParam0, 11);
			func_207(uParam0, iParam2);
			uParam0->f_5 = -888961792;
			uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
			break;
		case 4:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 9);
			func_204(uParam0, 10);
			func_204(uParam0, 11);
			func_207(uParam0, iParam2);
			uParam0->f_5 = -1145898130;
			uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
			break;
		case 5:
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 4);
			func_204(uParam0, 7);
			func_204(uParam0, 8);
			func_204(uParam0, 9);
			func_204(uParam0, 10);
			func_204(uParam0, 11);
			func_207(uParam0, iParam2);
			uParam0->f_5 = -264936334;
			uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
			break;
		case 6:
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 6);
			func_204(uParam0, 7);
			func_204(uParam0, 9);
			func_204(uParam0, 10);
			func_204(uParam0, 11);
			func_207(uParam0, iParam2);
			uParam0->f_5 = -562839313;
			uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
			break;
		case 7:
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			func_204(uParam0, 6);
			func_204(uParam0, 9);
			func_204(uParam0, 10);
			func_204(uParam0, 11);
			func_207(uParam0, iParam2);
			uParam0->f_5 = -819926700;
			uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
			break;
		case 8:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 9);
			func_204(uParam0, 10);
			func_204(uParam0, 11);
			func_207(uParam0, iParam2);
			uParam0->f_5 = -100890882;
			uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
			break;
		case 9:
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			func_204(uParam0, 5);
			func_204(uParam0, 9);
			func_204(uParam0, 10);
			func_204(uParam0, 11);
			func_207(uParam0, iParam2);
			uParam0->f_5 = 373607510;
			uParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
			break;
	}
}

void func_83(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = -1562903685;
			uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = 442262250;
			uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = 2113001754;
			uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = 222101843;
			uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
			break;
		case 4:
			func_203(uParam0);
			uParam0->f_5 = 862535295;
			uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
		case 5:
			func_203(uParam0);
			uParam0->f_5 = 267494763;
			uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
			break;
		case 6:
			func_203(uParam0);
			uParam0->f_5 = 492498900;
			uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
			break;
		case 7:
			func_203(uParam0);
			uParam0->f_5 = -735417347;
			uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
		case 8:
			func_203(uParam0);
			uParam0->f_5 = 2000289900;
			uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
			break;
		case 9:
			func_203(uParam0);
			uParam0->f_5 = 1820563970;
			uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
			break;
		case 10:
			func_203(uParam0);
			uParam0->f_5 = 1501808210;
			uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
			break;
		case 11:
			func_203(uParam0);
			uParam0->f_5 = -1103422576;
			uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
			break;
		case 12:
			func_203(uParam0);
			uParam0->f_5 = -375108461;
			uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
			break;
		case 13:
			func_203(uParam0);
			uParam0->f_5 = 1074344160;
			uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
			break;
		case 14:
			func_203(uParam0);
			uParam0->f_5 = 1375567406;
			uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
			break;
		case 15:
			func_203(uParam0);
			uParam0->f_5 = 1695022182;
			uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
			break;
		case 16:
			func_203(uParam0);
			uParam0->f_5 = 1773241795;
			uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
			break;
		case 17:
			func_203(uParam0);
			uParam0->f_5 = 1650499101;
			uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
			break;
		case 18:
			func_203(uParam0);
			uParam0->f_5 = 149116609;
			uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
			break;
		case 19:
			func_203(uParam0);
			uParam0->f_5 = 1486166046;
			uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
			break;
		case 20:
			func_203(uParam0);
			uParam0->f_5 = 58739626;
			uParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
			break;
	}
}

void func_84(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	func_202(uParam0);
	func_206(uParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = -1657923088;
			uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = -1268232386;
			uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = 1926851120;
			uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = -66052340;
			uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
			break;
		case 4:
			func_203(uParam0);
			uParam0->f_5 = 1738334804;
			uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
			break;
		case 5:
			func_203(uParam0);
			uParam0->f_5 = 1009780912;
			uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
			break;
		case 6:
			func_203(uParam0);
			uParam0->f_5 = -1560771476;
			uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
			break;
		case 7:
			func_203(uParam0);
			uParam0->f_5 = 453813335;
			uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
			break;
		case 8:
			func_203(uParam0);
			uParam0->f_5 = 786924542;
			uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
		case 9:
			func_203(uParam0);
			uParam0->f_5 = 1656593925;
			uParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
			break;
	}
}

void func_85(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 4;
	uParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_208(uParam0, iParam2);
			uParam0->f_5 = 1323108111;
			uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
			break;
		case 1:
			func_208(uParam0, iParam2);
			uParam0->f_5 = -1505479200;
			uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
			break;
		case 2:
			func_208(uParam0, iParam2);
			uParam0->f_5 = -1283075997;
			uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
			break;
		case 3:
			func_208(uParam0, iParam2);
			uParam0->f_5 = -2100531475;
			uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
			break;
		case 4:
			func_208(uParam0, iParam2);
			uParam0->f_5 = 269617530;
			uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
			break;
		case 5:
			func_208(uParam0, iParam2);
			uParam0->f_5 = 1592829750;
			uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
			break;
		case 6:
			func_208(uParam0, iParam2);
			uParam0->f_5 = 1817985549;
			uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
		case 7:
			func_208(uParam0, iParam2);
			uParam0->f_5 = 1945424739;
			uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
		case 8:
			func_208(uParam0, iParam2);
			uParam0->f_5 = 1787314318;
			uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
		case 9:
			func_208(uParam0, iParam2);
			uParam0->f_5 = 542354442;
			uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
		case 10:
			func_208(uParam0, iParam2);
			uParam0->f_5 = 1510776727;
			uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
		case 11:
			func_208(uParam0, iParam2);
			uParam0->f_5 = -2017297662;
			uParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
			break;
	}
}

void func_86(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = -377638420;
			uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = 1308799438;
			uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = -1030922940;
			uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = 1750043358;
			uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
			break;
		case 4:
			func_203(uParam0);
			uParam0->f_5 = -1330609910;
			uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
			break;
		case 5:
			func_203(uParam0);
			uParam0->f_5 = 223942444;
			uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
			break;
		case 6:
			func_203(uParam0);
			uParam0->f_5 = 1067547121;
			uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
			break;
		case 7:
			func_203(uParam0);
			uParam0->f_5 = -450732096;
			uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
			break;
		case 8:
			func_203(uParam0);
			uParam0->f_5 = -1701940764;
			uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
			break;
		case 9:
			func_203(uParam0);
			uParam0->f_5 = 1584258975;
			uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
			break;
		case 10:
			func_203(uParam0);
			uParam0->f_5 = -98183174;
			uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
			break;
		case 11:
			func_203(uParam0);
			uParam0->f_5 = -90261849;
			uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
			break;
		case 12:
			func_203(uParam0);
			uParam0->f_5 = 754522971;
			uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
			break;
		case 13:
			func_203(uParam0);
			uParam0->f_5 = 974542513;
			uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
			break;
		case 14:
			func_203(uParam0);
			uParam0->f_5 = -790885273;
			uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
			break;
		case 15:
			func_203(uParam0);
			uParam0->f_5 = -1447045452;
			uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
			break;
		case 16:
			func_203(uParam0);
			uParam0->f_5 = -586115209;
			uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
			break;
		case 17:
			func_203(uParam0);
			uParam0->f_5 = 224941020;
			uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
			break;
		case 18:
			func_203(uParam0);
			uParam0->f_5 = -1179654578;
			uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
			break;
		case 19:
			func_203(uParam0);
			uParam0->f_5 = 1247197458;
			uParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
			break;
	}
}

void func_87(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 9;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_202(uParam0);
	uParam0->f_10 = 60f;
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = 974582605;
			uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = -964359125;
			uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = -700339292;
			uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = -470300912;
			uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
		case 4:
			func_203(uParam0);
			uParam0->f_5 = -241343909;
			uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
		case 5:
			func_203(uParam0);
			uParam0->f_5 = 1944053474;
			uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
		case 6:
			func_203(uParam0);
			uParam0->f_5 = -2120646059;
			uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
		case 7:
			func_203(uParam0);
			uParam0->f_5 = -1656440405;
			uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
		case 8:
			func_203(uParam0);
			uParam0->f_5 = -1422404207;
			uParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
			break;
	}
}

void func_88(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 1;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	func_202(uParam0);
	func_206(uParam0, 1);
	func_206(uParam0, 4);
	func_206(uParam0, 8);
	func_206(uParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = -1623035253;
			uParam0->f_11 = { func_209(func_126(iParam2)) };
			break;
	}
}

void func_89(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 5;
	uParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_210(uParam0, iParam2);
			uParam0->f_5 = -1957221189;
			uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
			break;
		case 1:
			func_210(uParam0, iParam2);
			uParam0->f_5 = 871956008;
			uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
			break;
		case 2:
			func_210(uParam0, iParam2);
			uParam0->f_5 = -718829908;
			uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
			break;
		case 3:
			func_210(uParam0, iParam2);
			uParam0->f_5 = -478076065;
			uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
			break;
		case 4:
			func_210(uParam0, iParam2);
			uParam0->f_5 = 158131441;
			uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
			break;
		case 5:
			func_210(uParam0, iParam2);
			uParam0->f_5 = 575051428;
			uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
			break;
		case 6:
			func_210(uParam0, iParam2);
			uParam0->f_5 = -861587350;
			uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
			break;
		case 7:
			func_210(uParam0, iParam2);
			uParam0->f_5 = -616671844;
			uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
			break;
		case 8:
			func_210(uParam0, iParam2);
			uParam0->f_5 = -828875274;
			uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
			break;
		case 9:
			func_210(uParam0, iParam2);
			uParam0->f_5 = -598017669;
			uParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
			break;
	}
}

void func_90(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = 2136361638;
			uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = 1948005426;
			uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = 462368629;
			uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = -172629291;
			uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
		case 4:
			func_203(uParam0);
			uParam0->f_5 = 1063777848;
			uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
			break;
		case 5:
			func_203(uParam0);
			uParam0->f_5 = -267241827;
			uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
		case 6:
			func_203(uParam0);
			uParam0->f_5 = -1183266453;
			uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
		case 7:
			func_203(uParam0);
			uParam0->f_5 = -877826604;
			uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
		case 8:
			func_203(uParam0);
			uParam0->f_5 = 1527533302;
			uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
		case 9:
			func_203(uParam0);
			uParam0->f_5 = -865586768;
			uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
			break;
		case 10:
			func_203(uParam0);
			uParam0->f_5 = 294379466;
			uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
			break;
		case 11:
			func_203(uParam0);
			uParam0->f_5 = 452588198;
			uParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
			break;
	}
}

void func_91(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 2;
	uParam0->f_2 = 4;
	func_211(uParam0, iParam2);
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

void func_92(var uParam0, int iParam1)
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
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -672003008;
			uParam0->f_11 = { 2153.785f, -1677.743f, 40.5666f };
			break;
		case 1:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -396317411;
			uParam0->f_11 = { 2188.584f, -1595.642f, 40.591f };
			break;
		case 2:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -1239103346;
			uParam0->f_11 = { 2078.438f, -1694.907f, 40.6896f };
			break;
		case 3:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -889851344;
			uParam0->f_11 = { 2066.834f, -1767.304f, 40.1183f };
			break;
		case 4:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -1582784618;
			uParam0->f_11 = { 2131.718f, -1865.66f, 40.0837f };
			break;
		case 5:
			func_212(uParam0, iParam1);
			uParam0->f_5 = 407459900;
			uParam0->f_11 = { 2189.613f, -654.0466f, 40.5628f };
			break;
		case 6:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -1359903346;
			uParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
		case 7:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -1075501195;
			uParam0->f_11 = { 2212.435f, -599.6181f, 40.5628f };
			break;
		case 8:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -761049871;
			uParam0->f_11 = { 2273.341f, -693.9393f, 40.5628f };
			break;
		case 9:
			func_212(uParam0, iParam1);
			uParam0->f_5 = 1397804618;
			uParam0->f_11 = { 2314.659f, -599.6119f, 40.5628f };
			break;
		case 10:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -636095416;
			uParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
		case 11:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -933474091;
			uParam0->f_11 = { 2800.13f, -727.0102f, 40.6116f };
			break;
		case 12:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -1209520147;
			uParam0->f_11 = { 2726.128f, -662.6138f, 40.5283f };
			break;
		case 13:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -1524528544;
			uParam0->f_11 = { 2710.138f, -534.5544f, 40.615f };
			break;
		case 14:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -449082741;
			uParam0->f_11 = { 2728.174f, -468.3862f, 40.7744f };
			break;
	}
}

void func_93(var uParam0, int iParam1)
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
			func_213(uParam0, iParam1);
			uParam0->f_5 = -42638554;
			uParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
		case 1:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -330841909;
			uParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
		case 2:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -637690825;
			uParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
		case 3:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 1210841234;
			uParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
		case 4:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -275624566;
			uParam0->f_11 = { -2023.4f, 662.6884f, 119.8702f };
			break;
		case 5:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -2051147289;
			uParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
		case 6:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -1760846718;
			uParam0->f_11 = { -2487.232f, 414.2487f, 148.2772f };
			break;
		case 7:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -1591562064;
			uParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
		case 8:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -1159724897;
			uParam0->f_11 = { -1377.945f, 265.2666f, 78.222f };
			break;
		case 9:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -114459335;
			uParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
		case 10:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 564350440;
			uParam0->f_11 = { -1091.188f, -37.3214f, 40.5256f };
			break;
		case 11:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -840522068;
			uParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
		case 12:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -2076667055;
			uParam0->f_11 = { -792.3045f, 647.1317f, 88.5497f };
			break;
	}
}

void func_94(var uParam0, int iParam1)
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
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			uParam0->f_5 = -666643000;
			uParam0->f_11 = { -2323.821f, -444.3168f, 143.2396f };
			break;
		case 1:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			uParam0->f_5 = -930743103;
			uParam0->f_11 = { -2387.781f, -333.0453f, 142.8896f };
			break;
		case 2:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			uParam0->f_5 = -4199612;
			uParam0->f_11 = { -2622.5f, -342.7303f, 141.5315f };
			break;
		case 3:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			uParam0->f_5 = -1480377528;
			uParam0->f_11 = { -2760.32f, -77.8632f, 151.8582f };
			break;
		case 4:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			uParam0->f_5 = -1817640794;
			uParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
		case 5:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			uParam0->f_5 = -915442079;
			uParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
		case 6:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			uParam0->f_5 = 1928422814;
			uParam0->f_11 = { 2257.893f, 256.7348f, 43.6559f };
			break;
		case 7:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			uParam0->f_5 = 1940620434;
			uParam0->f_11 = { 2324.826f, 895.6353f, 71.6451f };
			break;
		case 8:
			func_204(uParam0, 1);
			uParam0->f_5 = -665538457;
			uParam0->f_11 = { 2383.811f, 1084.155f, 85.9333f };
			break;
		case 9:
			func_204(uParam0, 1);
			uParam0->f_5 = 355243564;
			uParam0->f_11 = { 2398.53f, 773.5043f, 67.0099f };
			break;
	}
}

void func_95(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 326651247;
	func_202(uParam0);
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
			func_204(uParam0, 0);
			uParam0->f_5 = -1024453831;
			uParam0->f_11 = { -1856.609f, 1802.919f, 234.305f };
			break;
		case 1:
			func_204(uParam0, 0);
			uParam0->f_5 = -652787833;
			uParam0->f_11 = { -1821.152f, 1566.352f, 235.8068f };
			break;
		case 2:
			func_204(uParam0, 0);
			uParam0->f_5 = 230697180;
			uParam0->f_11 = { -2069.577f, 1812.812f, 246.0542f };
			break;
		case 3:
			func_204(uParam0, 0);
			uParam0->f_5 = -543699832;
			uParam0->f_11 = { -1932.007f, 2153.216f, 322.7221f };
			break;
		case 4:
			func_204(uParam0, 0);
			uParam0->f_5 = 894826503;
			uParam0->f_11 = { -1752.347f, 1951.369f, 264.5091f };
			break;
		case 5:
			func_204(uParam0, 1);
			uParam0->f_5 = 1666294228;
			uParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
		case 6:
			func_204(uParam0, 1);
			uParam0->f_5 = 1426851145;
			uParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
		case 7:
			func_204(uParam0, 1);
			uParam0->f_5 = -807339271;
			uParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
		case 8:
			func_204(uParam0, 1);
			uParam0->f_5 = -1050255868;
			uParam0->f_11 = { 1251.465f, 344.8225f, 92.1045f };
			break;
		case 9:
			func_204(uParam0, 1);
			uParam0->f_5 = -1406848126;
			uParam0->f_11 = { 913.0093f, 113.5476f, 116.3f };
			break;
	}
}

void func_96(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 11;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1848813677;
	func_202(uParam0);
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
			func_204(uParam0, 0);
			uParam0->f_5 = -1741150966;
			uParam0->f_11 = { -1352.639f, -2550.378f, 74.9777f };
			break;
		case 1:
			func_204(uParam0, 0);
			uParam0->f_5 = -796584541;
			uParam0->f_11 = { -1913.631f, -2213.565f, 42.0518f };
			break;
		case 2:
			func_204(uParam0, 0);
			uParam0->f_5 = 80182823;
			uParam0->f_11 = { -1745.884f, -2388.807f, 42.8205f };
			break;
		case 3:
			func_204(uParam0, 1);
			uParam0->f_5 = 1964620432;
			uParam0->f_11 = { -1593.106f, -2351.92f, 43.0229f };
			break;
		case 4:
			func_204(uParam0, 1);
			uParam0->f_5 = 1731665611;
			uParam0->f_11 = { -1800.651f, -1644.944f, 96.7288f };
			break;
		case 5:
			func_204(uParam0, 1);
			uParam0->f_5 = -1728544175;
			uParam0->f_11 = { -1628.216f, -1943.554f, 50.1671f };
			break;
		case 6:
			func_204(uParam0, 2);
			uParam0->f_5 = -1242537170;
			uParam0->f_11 = { 2443.712f, -19.2163f, 43.2151f };
			break;
		case 7:
			func_204(uParam0, 2);
			uParam0->f_5 = 2036591126;
			uParam0->f_11 = { 2715.91f, -128.7452f, 42.0147f };
			break;
		case 8:
			func_204(uParam0, 2);
			uParam0->f_5 = 197299925;
			uParam0->f_11 = { 2363.777f, 13.1458f, 41.3272f };
			break;
		case 9:
			func_204(uParam0, 2);
			uParam0->f_5 = 1291850063;
			uParam0->f_11 = { 2355.338f, -247.3491f, 41.5576f };
			break;
		case 10:
			func_204(uParam0, 2);
			uParam0->f_5 = 1599124976;
			uParam0->f_11 = { 2601.386f, -212.5256f, 43.7812f };
			break;
	}
}

void func_97(var uParam0, int iParam1)
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
			func_214(uParam0, iParam1);
			uParam0->f_5 = 980541174;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
		case 1:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 1220770713;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
		case 2:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 1322813407;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
		case 3:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 1552098100;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
		case 4:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 1916358304;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
		case 5:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -1363212564;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5896.217f, -3811.854f, -31.2514f };
			break;
		case 6:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 686685000;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6360.188f, -3401.399f, -14.7027f };
			break;
		case 7:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -1524698208;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6241.614f, -3430.465f, 1.465f };
			break;
		case 8:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -1804348854;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6091.54f, -3398.527f, 17.9157f };
			break;
		case 9:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -2035403073;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6054.187f, -3594.051f, -4.8637f };
			break;
		case 10:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 728964560;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5609.956f, -3781.126f, -24.15435f };
			break;
		case 11:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 765075998;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5664.643f, -3561.726f, -24.1565f };
			break;
		case 12:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 1070974613;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5811.027f, -3789.534f, -27.8079f };
			break;
		case 13:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -1088797396;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5906.508f, -3520.436f, -24.1555f };
			break;
		case 14:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -740987230;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5753.862f, -3302.776f, -24.1569f };
			break;
		case 15:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 2110034336;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -937.2829f, -1900.071f, 50.81326f };
			break;
		case 16:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -783796062;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -1060.57f, -1731.06f, 75.49813f };
			break;
		case 17:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -545106666;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1052.66f, -1784.942f, 62.46124f };
			break;
		case 18:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 379536207;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			break;
		case 19:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -992108595;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1331.61f, -1892.678f, 60.4174f };
			break;
	}
}

void func_98(var uParam0, int iParam1)
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
			func_215(uParam0, iParam1);
			uParam0->f_5 = 1750035473;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1486.613f, -2140.134f, 47.13319f };
			break;
		case 1:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -1499633496;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1400.093f, -2166.322f, 47.3376f };
			break;
		case 2:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 2019068959;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1229.798f, -2101.002f, 57.1906f };
			break;
		case 3:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 1010504677;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1036.581f, -2147.274f, 43.912f };
			break;
		case 4:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 1297331734;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1190.843f, -2218.737f, 57.2836f };
			break;
		case 5:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 980309385;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
		case 6:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 1451396569;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 1632.416f, -616.6262f, 42.8678f };
			break;
		case 7:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -1404978858;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2127.624f, -907.4355f, 40.6492f };
			break;
		case 8:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -1173302028;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2023.697f, -1017.159f, 42.3998f };
			break;
		case 9:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 2143543387;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
		case 10:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 1187325752;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2183.54f, -213.3573f, 45.5331f };
			break;
		case 11:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 201273773;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 2185.672f, -43.506f, 52.2188f };
			break;
		case 12:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 36249089;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
		case 13:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -1717449488;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 1832.42f, -317.352f, 45.708f };
			break;
		case 14:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -2014041707;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 1876.532f, -453.5455f, 43.2695f };
			break;
	}
}

void func_99(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 29257535;
	func_202(uParam0);
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
			func_204(uParam0, 3);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			uParam0->f_5 = -813726569;
			uParam0->f_11 = { -2685.817f, -2697.83f, 71.8905f };
			break;
		case 1:
			func_204(uParam0, 3);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			uParam0->f_5 = -991070207;
			uParam0->f_11 = { -2841.472f, -2845.188f, 86.3463f };
			break;
		case 2:
			func_204(uParam0, 3);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			uParam0->f_5 = 1385332783;
			uParam0->f_11 = { -3043.896f, -2154.732f, 59.9256f };
			break;
		case 3:
			func_204(uParam0, 3);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			uParam0->f_5 = 1394180521;
			uParam0->f_11 = { -2653.586f, -2143.511f, 75.962f };
			break;
		case 4:
			func_204(uParam0, 3);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			uParam0->f_5 = -1581141590;
			uParam0->f_11 = { -3228.791f, -2434.523f, 26.6737f };
			break;
		case 5:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			uParam0->f_5 = 1300807189;
			uParam0->f_11 = { -1177.594f, -748.8547f, 67.811f };
			break;
		case 6:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			uParam0->f_5 = -1226288496;
			uParam0->f_11 = { -1735.686f, -628.3361f, 145.1246f };
			break;
		case 7:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			uParam0->f_5 = -566411244;
			uParam0->f_11 = { -1572.939f, -328.771f, 160.6099f };
			break;
		case 8:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			uParam0->f_5 = 1931184426;
			uParam0->f_11 = { -1463.646f, -481.3466f, 129.9887f };
			break;
		case 9:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			uParam0->f_5 = 432310963;
			uParam0->f_11 = { -1525.983f, -916.2361f, 88.1698f };
			break;
	}
}

void func_100(var uParam0, int iParam1)
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
			func_216(uParam0, iParam1);
			uParam0->f_5 = 439376203;
			uParam0->f_11 = { 1200.338f, -568.1477f, 67.3878f };
			break;
		case 1:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -862568936;
			uParam0->f_11 = { 1238.102f, -546.7609f, 66.5485f };
			break;
		case 2:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1361247578;
			uParam0->f_11 = { 1294.011f, -627.1522f, 58.9807f };
			break;
		case 3:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -518330591;
			uParam0->f_11 = { 1330.112f, -709.0779f, 64.7788f };
			break;
		case 4:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 1666706329;
			uParam0->f_11 = { 1174.01f, -520.5736f, 69.0551f };
			break;
		case 5:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 618479763;
			uParam0->f_11 = { 627.306f, -1038.205f, 42.0511f };
			break;
		case 6:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 916579356;
			uParam0->f_11 = { 675.5718f, -1121.435f, 50.7543f };
			break;
		case 7:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1544831314;
			uParam0->f_11 = { 799.3545f, -1190.935f, 42.9927f };
			break;
		case 8:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1524645610;
			uParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
		case 9:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 5765001;
			uParam0->f_11 = { 745.8436f, -1119.909f, 55.5229f };
			break;
		case 10:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -147337997;
			uParam0->f_11 = { -963.4839f, 2238.298f, 342.2684f };
			break;
		case 11:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 46195721;
			uParam0->f_11 = { -1100.64f, 2080.921f, 365.7759f };
			break;
		case 12:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -41952889;
			uParam0->f_11 = { -1209.432f, 2421.632f, 309.8767f };
			break;
		case 13:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -280740592;
			uParam0->f_11 = { -1280.937f, 2445.134f, 305.019f };
			break;
		case 14:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -636874084;
			uParam0->f_11 = { -1340.472f, 2298.734f, 308.7317f };
			break;
		case 15:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1240479072;
			uParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
		case 16:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1479922155;
			uParam0->f_11 = { -1329.47f, 2266.865f, 309.1315f };
			break;
		case 17:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1836252261;
			uParam0->f_11 = { -1202.59f, 2191.101f, 333.5445f };
			break;
		case 18:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -2075236578;
			uParam0->f_11 = { -1171.686f, 2299.184f, 323.3623f };
			break;
		case 19:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 1074322888;
			uParam0->f_11 = { -1394.394f, 2394.838f, 308.3089f };
			break;
	}
}

void func_101(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -2109368060;
	func_202(uParam0);
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
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			uParam0->f_5 = 1070019252;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 1:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			uParam0->f_5 = -510012600;
			uParam0->f_11 = { 2808.358f, 2290.307f, 155.8015f };
			break;
		case 2:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			uParam0->f_5 = -250768090;
			uParam0->f_11 = { 2324.25f, 2143.964f, 211.2929f };
			break;
		case 3:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			uParam0->f_5 = 1057891329;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 4:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			uParam0->f_5 = 863129034;
			uParam0->f_11 = { 2489.669f, 2265.437f, 175.6015f };
			break;
		case 5:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			uParam0->f_5 = -1100103111;
			uParam0->f_11 = { -957.019f, 1550.161f, 237.4414f };
			break;
		case 6:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			uParam0->f_5 = -383805560;
			uParam0->f_11 = { -1023.774f, 1561.614f, 237.4295f };
			break;
		case 7:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			uParam0->f_5 = -233104073;
			uParam0->f_11 = { -986.7993f, 1636.296f, 237.4295f };
			break;
		case 8:
			func_204(uParam0, 1);
			uParam0->f_5 = -604353467;
			uParam0->f_11 = { -874.8361f, 1499.423f, 245.7041f };
			break;
		case 9:
			func_204(uParam0, 1);
			uParam0->f_5 = 1641665016;
			uParam0->f_11 = { -919.2281f, 1482.48f, 245.1043f };
			break;
	}
}

void func_102(var uParam0, int iParam1)
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
			func_217(uParam0, iParam1);
			uParam0->f_5 = -1895828765;
			uParam0->f_11 = { 1649.598f, 1335.141f, 144.8913f };
			break;
		case 1:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 1786489311;
			uParam0->f_11 = { 1711.248f, 1464.318f, 146.3869f };
			break;
		case 2:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 1548029298;
			uParam0->f_11 = { 1569.279f, 1372.517f, 145.0414f };
			break;
		case 3:
			func_217(uParam0, iParam1);
			uParam0->f_5 = -718766281;
			uParam0->f_11 = { 1427.097f, 1701.411f, 197.8922f };
			break;
		case 4:
			func_217(uParam0, iParam1);
			uParam0->f_5 = -1212595111;
			uParam0->f_11 = { 1593.958f, 1646.358f, 143.5214f };
			break;
		case 5:
			func_217(uParam0, iParam1);
			uParam0->f_5 = -1283376151;
			uParam0->f_11 = { 1694.973f, 1740.234f, 188.4962f };
			break;
		case 6:
			func_217(uParam0, iParam1);
			uParam0->f_5 = -1525768444;
			uParam0->f_11 = { 1487.993f, 1066.912f, 182.3846f };
			break;
		case 7:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 249590434;
			uParam0->f_11 = { 1401.922f, 1325.553f, 163.9692f };
			break;
		case 8:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 9885199;
			uParam0->f_11 = { 1812.587f, 1193.924f, 215.9388f };
			break;
		case 9:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 1343123829;
			uParam0->f_11 = { 1940.486f, 1389.066f, 177.8712f };
			break;
		case 10:
			func_217(uParam0, iParam1);
			uParam0->f_5 = -2039750752;
			uParam0->f_11 = { 127.6135f, 1824.788f, 199.2989f };
			break;
		case 11:
			func_217(uParam0, iParam1);
			uParam0->f_5 = -2028740368;
			uParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
		case 12:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 1508771493;
			uParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
		case 13:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 1820404683;
			uParam0->f_11 = { 185.3962f, 1824.202f, 200.2588f };
			break;
		case 14:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 1332736425;
			uParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
		case 15:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 536875722;
			uParam0->f_11 = { 239.17f, 1914.014f, 204.8216f };
			break;
		case 16:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 795259287;
			uParam0->f_11 = { 512.8569f, 1926.074f, 199.1983f };
			break;
		case 17:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 20501824;
			uParam0->f_11 = { 325.2433f, 1902.083f, 200.069f };
			break;
		case 18:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 320272636;
			uParam0->f_11 = { 360.4333f, 1843.854f, 185.1447f };
			break;
		case 19:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 1135434088;
			uParam0->f_11 = { 506.2105f, 1883.957f, 201.9437f };
			break;
		case 20:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 1976647087;
			uParam0->f_11 = { 253.8551f, 1705.438f, 187.3591f };
			break;
		case 21:
			func_217(uParam0, iParam1);
			uParam0->f_5 = -2028969939;
			uParam0->f_11 = { 320.4962f, 1736.16f, 192.2878f };
			break;
		case 22:
			func_217(uParam0, iParam1);
			uParam0->f_5 = 2065778767;
			uParam0->f_11 = { -29.8717f, 1716.412f, 179.3378f };
			break;
		case 23:
			func_217(uParam0, iParam1);
			uParam0->f_5 = -1385354006;
			uParam0->f_11 = { -20.6945f, 1632.488f, 162.0277f };
			break;
		case 24:
			func_217(uParam0, iParam1);
			uParam0->f_5 = -1602546938;
			uParam0->f_11 = { 480.1275f, 2070.224f, 235.143f };
			break;
	}
}

void func_103(var uParam0, int iParam1, int iParam2)
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
	func_218(uParam0, iParam1, iParam2);
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

void func_104(var uParam0, int iParam1, int iParam2)
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
	func_219(uParam0, iParam1, iParam2);
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

void func_105(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -405566878;
	func_202(uParam0);
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
			func_204(uParam0, 0);
			break;
		case 1:
			uParam0->f_5 = 1765108824;
			uParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_204(uParam0, 0);
			break;
		case 2:
			uParam0->f_5 = 1620892455;
			uParam0->f_11 = { -142.6579f, 1231.128f, 164.5134f };
			func_204(uParam0, 0);
			break;
		case 3:
			uParam0->f_5 = 1380531840;
			uParam0->f_11 = { 411.3364f, 1329.074f, 180.39f };
			func_204(uParam0, 0);
			break;
		case 4:
			uParam0->f_5 = -1542790654;
			uParam0->f_11 = { 473.7581f, 1011.376f, 173.0766f };
			func_204(uParam0, 0);
			break;
		case 5:
			uParam0->f_5 = -1733556405;
			uParam0->f_11 = { -4209.333f, -2677.593f, 5.4303f };
			func_204(uParam0, 1);
			break;
		case 6:
			uParam0->f_5 = -478503693;
			uParam0->f_11 = { -4260.617f, -2412.103f, 23.6335f };
			func_204(uParam0, 1);
			break;
		case 7:
			uParam0->f_5 = -156122271;
			uParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_204(uParam0, 1);
			break;
		case 8:
			uParam0->f_5 = 1073468916;
			uParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_204(uParam0, 1);
			break;
		case 9:
			uParam0->f_5 = -249481152;
			uParam0->f_11 = { -4104.459f, -2061.22f, 4.8147f };
			func_204(uParam0, 1);
			break;
	}
}

void func_106(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = -206668292;
			uParam0->f_11 = { -2586.923f, -264.5349f, 161.6671f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = -2125063863;
			uParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = -2012469579;
			uParam0->f_11 = { -2196.576f, 468.8412f, 119.5676f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = 108841496;
			uParam0->f_11 = { -1637.2f, -1513.234f, 82.6688f };
			break;
		case 4:
			func_203(uParam0);
			uParam0->f_5 = 415657643;
			uParam0->f_11 = { -825.3087f, -1804.951f, 59.0313f };
			break;
		case 5:
			func_203(uParam0);
			uParam0->f_5 = 1133170861;
			uParam0->f_11 = { 1786.915f, 1588.926f, 167.4663f };
			break;
		case 6:
			func_203(uParam0);
			uParam0->f_5 = 2120009296;
			uParam0->f_11 = { 1959.894f, 1387.251f, 179.786f };
			break;
		case 7:
			func_203(uParam0);
			uParam0->f_5 = 689773522;
			uParam0->f_11 = { 637.5925f, 2099.455f, 222.0308f };
			break;
		case 8:
			func_203(uParam0);
			uParam0->f_5 = -258135345;
			uParam0->f_11 = { 1296.321f, 1161.685f, 150.1379f };
			break;
		case 9:
			func_203(uParam0);
			uParam0->f_5 = 2107537913;
			uParam0->f_11 = { -2100.247f, -1372.887f, 127.7423f };
			break;
		case 10:
			func_203(uParam0);
			uParam0->f_5 = -1477292384;
			uParam0->f_11 = { -2205.016f, -1584.145f, 148.3944f };
			break;
	}
}

void func_107(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = -274965770;
			uParam0->f_11 = { -1109.718f, 2104.703f, 361.4368f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = 1652259747;
			uParam0->f_11 = { -4300.761f, -3445.602f, 33.26603f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = -743720569;
			uParam0->f_11 = { -3895.461f, -2492.511f, -11.57848f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = -1200331578;
			uParam0->f_11 = { -2190.508f, -2867.223f, 25.40727f };
			break;
		case 4:
			func_203(uParam0);
			uParam0->f_5 = -1026512984;
			uParam0->f_11 = { -2083.893f, -1412.552f, 131.8581f };
			break;
		case 5:
			func_203(uParam0);
			uParam0->f_5 = -1017773316;
			uParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
		case 6:
			func_203(uParam0);
			uParam0->f_5 = 303940131;
			uParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
		case 7:
			func_203(uParam0);
			uParam0->f_5 = 1273284251;
			uParam0->f_11 = { 1548.084f, 1355.097f, 146.0557f };
			break;
		case 8:
			func_203(uParam0);
			uParam0->f_5 = -950817569;
			uParam0->f_11 = { 2652.989f, 1189.503f, 118.7033f };
			break;
		case 9:
			func_203(uParam0);
			uParam0->f_5 = -910888222;
			uParam0->f_11 = { 1509.102f, -2101.449f, 45.3134f };
			break;
	}
}

void func_108(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 7;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_202(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0);
			uParam0->f_5 = -803667719;
			uParam0->f_11 = { -1499.397f, -553.9472f, 131.8198f };
			break;
		case 1:
			func_203(uParam0);
			uParam0->f_5 = -822411587;
			uParam0->f_11 = { -1760.55f, 268.6243f, 118.6948f };
			break;
		case 2:
			func_203(uParam0);
			uParam0->f_5 = -1331314157;
			uParam0->f_11 = { -2762.128f, -158.0485f, 150.8974f };
			break;
		case 3:
			func_203(uParam0);
			uParam0->f_5 = -1580456864;
			uParam0->f_11 = { -719.5702f, -756.9052f, 49.81378f };
			break;
		case 4:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			uParam0->f_5 = -102469545;
			uParam0->f_11 = { 951.5258f, -1248.371f, 53.86922f };
			break;
		case 5:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			uParam0->f_5 = 70321392;
			uParam0->f_11 = { 1088.291f, -1418.599f, 55.54557f };
			break;
		case 6:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			uParam0->f_5 = 529087392;
			uParam0->f_11 = { 1289.693f, -1603.704f, 64.23989f };
			break;
	}
}

void func_109(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 8;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_220(uParam0, iParam1);
			uParam0->f_5 = -418287183;
			uParam0->f_11 = { -2081.231f, -2774.597f, 77.5683f };
			break;
		case 1:
			func_220(uParam0, iParam1);
			uParam0->f_5 = -1127015115;
			uParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
		case 2:
			func_220(uParam0, iParam1);
			uParam0->f_5 = -1853700459;
			uParam0->f_11 = { -2925.017f, -2769.882f, 95.6414f };
			break;
		case 3:
			func_220(uParam0, iParam1);
			uParam0->f_5 = 529883832;
			uParam0->f_11 = { -2648.38f, -2977.772f, 76.4237f };
			break;
		case 4:
			func_220(uParam0, iParam1);
			uParam0->f_5 = -204230900;
			uParam0->f_11 = { -2323.921f, -2074.845f, 88.1254f };
			break;
		case 5:
			func_220(uParam0, iParam1);
			uParam0->f_5 = -1938530367;
			uParam0->f_11 = { -3455.578f, -2264.7f, 4.7142f };
			break;
		case 6:
			func_220(uParam0, iParam1);
			uParam0->f_5 = 1968802033;
			uParam0->f_11 = { -3581.218f, -3650.89f, -12.8679f };
			break;
		case 7:
			func_220(uParam0, iParam1);
			uParam0->f_5 = -2098551789;
			uParam0->f_11 = { -5254.539f, -4050.37f, -3.6288f };
			break;
	}
}

void func_110(var uParam0, int iParam1, int iParam2)
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
	iVar0 = func_221(iParam1);
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
	*uParam0 = func_222(iVar0);
	uParam0->f_1 = 0;
	uParam0->f_6 = 2;
	func_206(uParam0, 32);
	if (iParam2 != -1)
	{
		uParam0->f_9 = func_224(func_223(iVar0), iParam2);
		uParam0->f_15[0] = func_225(func_223(iVar0), iParam2);
		uParam0->f_5 = func_226(iVar0, iParam2);
		uParam0->f_11 = { func_227(iVar0, iParam2) };
	}
}

int func_111(int iParam0)
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

int func_112(int iParam0, var uParam1, int iParam2)
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

struct<2> func_113()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_114()
{
	reserve_network_mission_peds(1);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			Local_58[iVar1]->f_2.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_115()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 8)
		{
			if (func_177(iVar1, iVar2))
			{
				Jump @50; //curOff = 38
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

void func_116()
{
	bVar3 = func_228(&iVar2);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_230(func_182(iVar0), func_229(func_182(iVar0)));
		Local_667.f_367[iVar0] = func_229(func_182(iVar0));
		if (bVar3)
		{
			func_122(&(Local_58[iVar2]->f_16.f_1), iVar0, 3);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 32)
			{
				func_122(&(Local_58[iVar1]->f_16.f_1), iVar0, 3);
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_117()
{
	func_231(&(Local_667.f_220), &(Local_667.f_220.f_32));
	bVar2 = true;
	if (!func_228(&iVar1))
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (network_is_host_of_this_script())
		{
			Local_13.f_35.f_3[iVar0] = 0;
			Local_13.f_35.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			Local_58[iVar1]->f_6.f_7[iVar0] = 0;
		}
		iVar0++;
	}
	func_232(&(Local_667.f_220.f_72), 8, -1);
	if (bVar2)
	{
		func_232(&(Local_58[iVar1]->f_6), 8, -1);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			func_232(&(Local_58[iVar3]->f_6), 8, -1);
			iVar3++;
		}
	}
}

void func_118()
{
}

void func_119()
{
	switch (func_233())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			func_234(0, 0, 0.001f, 0f, 0f, 7f, -1, 2, 0);
			func_234(0, 1, func_235(0), 1f, -1, 1, 1);
			break;
	}
}

void func_120()
{
	if (func_195() != 2)
	{
		return;
	}
	func_237(0, func_236(0));
	func_239(0, func_238(0));
	func_241(0, func_240(0));
	func_244(0, func_242(0), func_243(0), 0);
}

void func_121()
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		iVar1 = func_245(iVar0);
		if (iVar1 != 0)
		{
			vVar2 = { func_235(iVar0) };
			vVar5 = { func_246(iVar0) };
			func_247(iVar0, iVar1);
			func_248(iVar0, vVar2, vVar5, iVar0 != 0);
			func_249(iVar0);
			func_250(iVar0);
			switch (iVar0)
			{
				case 1:
					if (get_clock_hours() >= 21 || get_clock_hours() < 6)
					{
						func_251(iVar0);
					}
					break;
				case 7:
					func_252(iVar0);
					break;
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
					func_252(iVar0);
					break;
			}
		}
		iVar0++;
	}
}

void func_122(int* iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam2;
	iVar1 = iParam1 * 2;
	if (is_bit_set(iVar0, 0))
	{
		set_bit(iParam0, iVar1);
	}
	else
	{
		clear_bit(iParam0, iVar1);
	}
	if (is_bit_set(iVar0, 1))
	{
		set_bit(iParam0, iVar1 + 1);
	}
	else
	{
		clear_bit(iParam0, iVar1 + 1);
	}
}

bool func_123(int iParam0)
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

bool func_124(var uParam0, int iParam1)
{
	return func_253(uParam0->f_25, iParam1);
}

void func_125(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

int func_126(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

void func_127(int iParam0)
{
	if (!func_135(iParam0))
	{
		func_254(&(Local_13.f_1), iParam0);
	}
}

bool func_128(int iParam0)
{
	if (!func_189(iParam0))
	{
		return false;
	}
	return (func_255(iParam0) && (*Global_1131196)[iParam0]->f_18.f_1 != 0);
}

void func_129(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

bool func_130(struct<31> Param0, var uParam31)
{
	if (_0xf6a8a652a6b186cd(Local_13.f_3.f_1))
	{
		return true;
	}
	if (func_179(Local_667.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!_0xa4a4359320345b34(Local_13.f_3))
	{
		if (_0x397769175a7dbb30(Local_667.f_15, Param0.f_10, 0, 0, 0))
		{
			_0xfa15c9a320e707b0();
			*uParam31 = 1;
			return false;
		}
		func_256(&uVar1, Param0);
		Local_13.f_3 = _0x183c0b6cfeffcae4(&uVar1);
		func_151(128);
	}
	else if (!func_134(128, 255))
	{
		Local_13.f_3.f_1 = func_257(Param0);
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

bool func_131(int iParam0)
{
	return iParam0 != 0;
}

void func_132(var uParam0)
{
	*uParam0 = Global_1296859->f_21;
}

int func_133(int iParam0)
{
	return (Global_1296859->f_21 - iParam0) * 1000;
}

bool func_134(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_228(&iParam1))
		{
			return false;
		}
	}
	return func_188(&(Local_58[iParam1]), iParam0);
}

bool func_135(int iParam0)
{
	return func_188(Local_13.f_1, iParam0);
}

bool func_136()
{
	return true;
}

void func_137()
{
}

bool func_138()
{
	return true;
}

bool func_139()
{
	if (!func_258(&bVar0))
	{
		if (bVar0)
		{
			func_259();
		}
		return false;
	}
	if (!func_260(&bVar0))
	{
		if (bVar0)
		{
			func_259();
		}
		return false;
	}
	return true;
}

void func_140()
{
}

void func_141()
{
	if (!func_135(32) && func_261(32))
	{
		func_127(32);
	}
	if (!func_135(64) && func_261(64))
	{
		func_127(64);
	}
	if (!func_135(16) && func_262(16))
	{
		func_127(16);
	}
	if ((!func_135(2048) && func_261(2048)) && !func_261(4096))
	{
		func_127(2048);
	}
}

void func_142()
{
	if (!bVar0 && func_135(16))
	{
		func_129(1);
		return;
	}
	if (func_135(2048) && !func_261(4096))
	{
		func_129(6);
		return;
	}
}

void func_143()
{
	func_263();
}

bool func_144()
{
	if (func_264())
	{
		return true;
	}
	func_265();
	switch (Local_13.f_7)
	{
		case 0:
			func_266();
			break;
		case 1:
			func_267();
			break;
		case 2:
			func_268();
			break;
		case 3:
			func_269();
			break;
		case 4:
			func_270();
			break;
		case 5:
			func_271();
			break;
	}
	return false;
}

void func_145()
{
}

bool func_146()
{
	if (does_pickup_exist(Local_13.f_7.f_15))
	{
		remove_pickup(Local_13.f_7.f_15);
		Local_13.f_7.f_15 = 0;
	}
	return true;
}

void func_147(int iParam0)
{
	if (func_70(iParam0))
	{
		func_272(&(Local_667.f_7), iParam0);
	}
}

int func_148(int iParam0, int iParam1, bool bParam2)
{
	if (!func_189(iParam0))
	{
		return 0;
	}
	iVar0 = func_273(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = player_id();
	(*Global_1134390)[iVar1]->f_70 = iParam0;
	(*Global_1134390)[iVar1]->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_274(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	else
	{
		func_275(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	return 1;
}

void func_149(int iParam0)
{
	if (!func_70(iParam0))
	{
		func_254(&(Local_667.f_7), iParam0);
	}
}

void func_150(int iParam0)
{
	if (func_188(&(Local_58[participant_id_to_int()]), iParam0))
	{
		func_272(Local_58[participant_id_to_int()], iParam0);
	}
}

void func_151(int iParam0)
{
	if (!func_134(iParam0, 255))
	{
		func_254(Local_58[participant_id_to_int()], iParam0);
	}
}

void func_152()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_276(iVar0);
				break;
			case -1315570756:
				func_277(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		func_278(iVar0);
		iVar0++;
	}
}

void func_153(int iParam0)
{
	if (Local_667.f_8 != iParam0)
	{
		Local_667.f_8 = iParam0;
	}
}

bool func_154()
{
	iVar0 = 1;
	if (!func_279())
	{
		iVar0 = 0;
	}
	if (!_is_imap_active(func_190()))
	{
		func_280(func_190());
		iVar0 = 0;
	}
	if (func_195() == 2)
	{
		if (!func_284(func_281(0), &(Local_667.f_19.f_44), &(Local_13.f_7.f_2), func_282(0), func_283(0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_285(5f))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_155()
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
	return !bVar0;
}

void func_156(var uParam0)
{
	*uParam0 = 0;
}

void func_157()
{
}

int func_158()
{
	return 1;
}

int func_159()
{
	if (!func_288())
	{
		if (bVar0)
		{
		}
		return 0;
	}
	return 1;
}

int func_160(int iParam0)
{
	return (iParam0 - Global_1296859->f_21) * 1000;
}

void func_161()
{
	if (!func_70(1))
	{
		func_289(Local_667.f_9);
		func_149(1);
	}
}

void func_162()
{
	func_290();
	func_291();
	func_292();
}

void func_163()
{
	func_293();
	set_ambient_zone_state("AZ_RECW_Area", true, false);
	_0x3743ce6948194349("AZ_RECW_Area", func_294(), 0f);
	if (!func_192(16))
	{
		Local_667.f_19.f_46 = add_shocking_event_at_position(792302887, func_294(), 0f, 20f, -1f, -1f, -1f, -1, -1);
	}
	iVar0 = 2;
	while (iVar0 <= 6)
	{
		if (func_295(iVar0) && func_296(iVar0))
		{
			func_297(iVar0, 1);
		}
		iVar0++;
	}
	func_298(20f, 60f, 1, 1077936128, 0);
	if (func_195() == 2)
	{
		func_299();
		func_300();
		func_302(func_301(0));
	}
	func_303();
	func_304();
	if (func_295(7))
	{
		_0x1726963e6049db53(func_305(7));
	}
}

void func_164()
{
	func_306();
}

void func_165()
{
}

void func_166()
{
	if (func_179(Local_667.f_15))
	{
		return;
	}
	if (func_307())
	{
		return;
	}
	if (func_308(Local_667.f_1, 600))
	{
		fVar0 = vdist(get_entity_coords(player_ped_id(), false, false), Local_667.f_15);
		if (fVar0 < 200f)
		{
			func_151(4096);
		}
		else if (fVar0 < 400f)
		{
			func_150(4096);
			func_151(2048);
		}
		else
		{
			func_150(4096);
			func_150(2048);
		}
	}
}

void func_167()
{
	func_309();
	func_310();
	func_311();
	func_312();
	func_313();
	func_314();
}

void func_168()
{
	if (func_315())
	{
		func_151(8);
	}
	else
	{
		func_150(8);
	}
}

void func_169()
{
	func_316();
	func_317();
	func_318();
	func_293();
	func_319();
	func_320();
	func_321();
	func_322();
	func_323();
	if (func_295(7))
	{
		iVar0 = func_305(7);
		if (network_has_control_of_entity(iVar0))
		{
			if (!is_entity_visible(iVar0) || !is_entity_visible_to_script(iVar0))
			{
				func_324(0, 7);
			}
		}
	}
	switch (Local_667.f_19)
	{
		case 0:
			func_325();
			break;
		case 1:
			func_326();
			break;
		case 2:
			func_327();
			break;
		case 3:
			func_328();
			break;
		case 4:
			func_329();
			break;
		case 5:
			func_330();
			break;
	}
}

void func_170()
{
	if (!func_134(8, 255))
	{
		func_151(16);
	}
	else
	{
		func_150(16);
	}
}

void func_171()
{
	Local_667.f_6 = -1;
	Local_667.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_667.f_5 = (Local_667.f_5 || Local_58[iVar0]) // PointerArith;
			Local_667.f_6 = (Local_667.f_6 && Local_58[iVar0]) // PointerArith;
		}
		iVar0++;
	}
}

bool func_172()
{
	func_191(func_190());
	iVar0 = func_305(0);
	if (does_entity_exist(iVar0))
	{
		_0x9d16896f0dbe78a2(func_235(0), 2f);
	}
	if (_does_anim_scene_exist(func_194()) && network_has_control_of_network_id(Local_13.f_7.f_2))
	{
		if (_network_has_control_of_anim_scene(func_194()))
		{
			_delete_anim_scene(func_194());
		}
	}
	return true;
}

void func_173()
{
	func_331();
}

void func_174(int iParam0)
{
	if (does_blip_exist(Local_667.f_74.f_7[iParam0]->f_1))
	{
		remove_blip(&(Local_667.f_74.f_7[iParam0]->f_1));
	}
}

bool func_175(int iParam0, int iParam1)
{
	return func_188(Local_667.f_74.f_7[iParam0]->f_2, iParam1);
}

bool func_176(int iParam0, int iParam1)
{
	return func_188(Local_667.f_101[iParam0]->f_5[iParam1]->f_1, 1024);
}

bool func_177(int iParam0, int iParam1)
{
	return func_188(Local_667.f_101[iParam0]->f_5[iParam1]->f_1, 8);
}

bool func_178(int iParam0, int iParam1)
{
	return is_bit_set(Local_667.f_101[iParam0]->f_4, iParam1);
}

bool func_179(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_180(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_181(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

int func_182(int iParam0)
{
	return iParam0;
}

void func_183(int iParam0, bool bParam1)
{
	func_332(iParam0, 8);
	if (!func_333(iParam0, 1))
	{
		return;
	}
	iVar0 = func_334(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (!_0xe98d55c5983f2509(iVar0))
		{
		}
		if (network_has_control_of_entity(iVar0))
		{
			set_ped_config_flag(iVar0, 130, false);
			set_ped_config_flag(iVar0, 297, false);
			set_ped_config_flag(iVar0, 315, false);
		}
	}
	func_335(iParam0, bParam1);
	func_332(iParam0, 1);
}

bool func_184(int iParam0, int iParam1, int iParam2)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	return is_bit_set((*Global_1207784)[iParam1][iParam0], iParam2);
}

void func_185(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_337(func_336(Param0));
	iVar1 = func_338(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_339(Param0, &Var2);
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

void func_186(int iParam0, int iParam1)
{
	iVar0 = func_340(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_341(iVar0);
}

void func_187(int iParam0, int iParam1)
{
	func_132(Global_1272030->f_3271[iParam0]);
	switch (iParam1)
	{
		case 0:
			Global_1272030->f_3275[iParam0] = func_342(iParam0);
			break;
		case 1:
			Global_1272030->f_3275[iParam0] = func_343(iParam0);
			break;
		case 2:
			Global_1272030->f_3275[iParam0] = func_344(iParam0);
			break;
	}
}

bool func_188(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_189(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

int func_190()
{
	switch (func_195())
	{
		case 0:
		case 2:
			switch (func_233())
			{
				case 0:
					return -1754970007;
				case 1:
					return 2144414063;
				case 2:
					return -2042475701;
				case 3:
					return 1358414393;
				case 4:
					return 289521398;
				case 5:
					return 1883534212;
				case 6:
					return 209919309;
				default:
					break;
			}
			break;
		case 1:
			switch (func_233())
			{
				case 0:
					return 1364276294;
				case 1:
					return 1108743226;
				case 2:
					return -198101911;
				case 3:
					return 672931117;
				default:
					break;
			}
			break;
	}
	return -1754970007;
}

void func_191(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		func_345(iParam0);
	}
}

bool func_192(int iParam0)
{
	return func_188(Local_667.f_19.f_42, iParam0);
}

void func_193(int iParam0)
{
	func_272(&(Local_667.f_19.f_42), iParam0);
}

int func_194()
{
	iVar0 = Local_13.f_7.f_2;
	if (network_does_network_id_exist(iVar0))
	{
		return _net_to_anim_scene(iVar0);
	}
	return 0;
}

int func_195()
{
	return func_346();
}

void func_196()
{
	if (!func_192(32))
	{
		return;
	}
	_0x9428447ded71fc7e("DLC_MP007_ORECRW_Sceneset");
	func_193(32);
}

void func_197()
{
	if (!_does_volume_exist(Local_667.f_19.f_53))
	{
		return;
	}
	_0x2c87c3e1c7b96ee2(Local_667.f_19.f_53);
	_delete_volume(Local_667.f_19.f_53);
}

void func_198()
{
	if (_does_volume_exist(Local_667.f_19.f_54))
	{
		_0x2c87c3e1c7b96ee2(Local_667.f_19.f_54);
		_delete_volume(Local_667.f_19.f_54);
	}
}

bool func_199(var uParam0)
{
	if (func_40(*uParam0))
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

int func_200(var uParam0, int iParam1)
{
	iVar0 = func_347(iParam1);
	iVar1 = ((&Global_1198046->f_3[iParam1] + iVar0) - 1);
	if (&Global_1198046->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_348(iParam1)) - 1);
	}
	bVar2 = func_40(*uParam0);
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

void func_201(var uParam0, int iParam1)
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
			func_203(uParam0);
			func_202(uParam0);
			break;
	}
}

void func_202(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_205(uParam0, iVar0);
		iVar0++;
	}
}

void func_203(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_204(uParam0, iVar0);
		iVar0++;
	}
}

void func_204(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_3), iParam1);
}

void func_205(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_4), iParam1);
}

void func_206(var uParam0, int iParam1)
{
	func_274(&(uParam0->f_25), iParam1);
}

void func_207(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_205(uParam0, 0);
			break;
		case 1:
		case 2:
			func_205(uParam0, 1);
			func_205(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_205(uParam0, 0);
			func_205(uParam0, 2);
			break;
		case 8:
			func_205(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_205(uParam0, 1);
			break;
		default:
			func_202(uParam0);
			break;
	}
}

void func_208(var uParam0, int iParam1)
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
			func_203(uParam0);
			func_202(uParam0);
			break;
	}
}

Vector3 func_209(int iParam0)
{
	if (!func_189(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1131196)[iParam0]->f_20;
}

void func_210(var uParam0, int iParam1)
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
			func_202(uParam0);
			break;
	}
	func_203(uParam0);
}

void func_211(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_205(uParam0, 0);
			func_205(uParam0, 2);
			break;
		case 1:
			func_205(uParam0, 1);
			func_205(uParam0, 3);
			break;
		default:
			func_203(uParam0);
			func_202(uParam0);
			break;
	}
}

void func_212(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_204(uParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_204(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_204(uParam0, 0);
			break;
		default:
			func_204(uParam0, 0);
			break;
	}
	func_202(uParam0);
}

void func_213(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_204(uParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_204(uParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_204(uParam0, 2);
			break;
		default:
			func_203(uParam0);
			break;
	}
	func_202(uParam0);
}

void func_214(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_204(uParam0, 0);
			func_205(uParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_204(uParam0, 1);
			func_205(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_204(uParam0, 2);
			func_205(uParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_204(uParam0, 3);
			func_205(uParam0, 0);
			break;
	}
}

void func_215(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_204(uParam0, 0);
			func_205(uParam0, 0);
			break;
		case 2:
			func_204(uParam0, 1);
			func_205(uParam0, 0);
			break;
		case 3:
		case 4:
			func_204(uParam0, 2);
			func_205(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_204(uParam0, 3);
			func_205(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_204(uParam0, 4);
			func_205(uParam0, 1);
			break;
	}
}

void func_216(var uParam0, int iParam1)
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
			func_204(uParam0, 3);
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
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			break;
		default:
			func_203(uParam0);
			break;
	}
	func_202(uParam0);
}

void func_217(var uParam0, int iParam1)
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
			func_204(uParam0, 3);
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
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			break;
		default:
			func_203(uParam0);
			break;
	}
	func_202(uParam0);
}

void func_218(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_205(uParam0, 0);
			func_204(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_205(uParam0, 1);
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			break;
		default:
			func_205(uParam0, 0);
			func_204(uParam0, 0);
			break;
	}
}

void func_219(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_205(uParam0, 0);
			func_204(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_205(uParam0, 1);
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			break;
		default:
			func_205(uParam0, 0);
			func_204(uParam0, 0);
			break;
	}
}

void func_220(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			func_203(uParam0);
			break;
		default:
			func_202(uParam0);
			func_203(uParam0);
			break;
	}
}

int func_221(int iParam0)
{
	return &(Global_1272030->f_3348[iParam0]);
}

int func_222(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (*Global_1257541)[iParam0]->f_3;
}

int func_223(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0];
}

var func_224(int iParam0, int iParam1)
{
	if (func_358(&Var1, iParam0) && func_359(&Var1, iParam1))
	{
		func_360(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_225(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_358(&Var1, iParam0) && func_359(&Var1, iParam1))
	{
		func_360(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_226(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_361(iParam0, iParam1);
	return &(Global_1257541->f_451[iVar0]);
}

Vector3 func_227(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_361(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_3;
}

bool func_228(int iParam0)
{
	*iParam0 = participant_id_to_int();
	if (!func_362(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

int func_229(int iParam0)
{
	return &(Local_13.f_40[iParam0]);
}

void func_230(int iParam0, var uParam1)
{
	switch (func_363(uParam1))
	{
		case 0:
			func_364(iParam0, 0);
			func_365(iParam0, 1);
			break;
		case 1:
			func_365(iParam0, 0);
			func_366(iParam0, 7f);
			func_367(iParam0, 0, "GREET_ACC", -163964935, 0, 1, 0, -1, 1);
			func_367(iParam0, 1, "INTERACT_DECLINE", 648122183, 0, 1, 0, -1, 1);
			break;
		case 2:
			func_368(iParam0, 0);
			func_364(iParam0, 1);
			func_365(iParam0, 0);
			func_369(iParam0, 0, 1, 1);
			func_369(iParam0, 1, 1, 1);
			break;
		case 3:
			func_368(iParam0, 8);
			func_365(iParam0, 1);
			func_370(iParam0, 0);
			func_370(iParam0, 1);
			break;
		default:
			func_365(iParam0, 1);
			break;
	}
}

void func_231(var uParam0, var uParam1)
{
	func_371(uParam0);
	func_372(uParam0, 1);
	func_373(uParam0, 1);
	func_374(uParam1);
	func_375(uParam1);
	func_376(uParam1);
	func_377(uParam1, 1);
	func_378(uParam1, 1);
}

int func_232(var uParam0, int iParam1, int iParam2)
{
	if (!func_379(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_380(Var0.f_2, 10);
		iVar5 = iVar4 ^ -1;
		(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] && iVar5);
		if (iParam2 != 0)
		{
			(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] || (shift_left(iParam2, Var0.f_2) && iVar4));
		}
		return 1;
	}
	iVar4 = func_380(Var0.f_2, (32 - Var0.f_2));
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0] = (uParam0[Var0] && iVar5);
	(*uParam0)[Var0] = (uParam0[Var0] || (shift_left(iParam2, Var0.f_2) && iVar4));
	iVar4 = func_380(0, Var0.f_3 + 1);
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] && iVar5);
	(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] || (shift_right(iParam2, (32 - Var0.f_3)) && iVar4));
	return 1;
}

int func_233()
{
	return func_381();
}

void func_234(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8)
{
	(*Local_667.f_317[iParam0])[iParam1]->f_1 = iParam6;
	(*Local_667.f_317[iParam0])[iParam1]->f_2 = iParam7;
	(*Local_667.f_317[iParam0])[iParam1]->f_3 = { vParam2 };
	(*Local_667.f_317[iParam0])[iParam1]->f_6 = fParam5;
	(*Local_667.f_317[iParam0])[iParam1]->f_7 = iParam8;
}

Vector3 func_235(int iParam0)
{
	switch (func_195())
	{
		case 0:
		case 2:
			switch (func_233())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -1497.818f, -556.8351f, 131.8656f;
						case 1:
							return -1498.818f, -557.8351f, 131.8656f;
						case 2:
							return -1497.509f, -555.1789f, 131.8371f;
						case 3:
							return -1501.39f, -555.5867f, 131.8429f;
						case 4:
							return -1499.623f, -558.7266f, 131.8674f;
						case 5:
							return -1501.423f, -553.6351f, 131.8304f;
						case 6:
							return -1498.62f, -552.0974f, 131.7956f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -1757.98f, 268.1308f, 118.7533f;
						case 1:
							return -1761.539f, 270.308f, 118.323f;
						case 2:
							return -1758.738f, 268.6893f, 119.7066f;
						case 3:
							return -1760.483f, 270.0028f, 119.4709f;
						case 4:
							return -1762.358f, 269.5813f, 119.438f;
						case 5:
							return -1760.702f, 266.5843f, 119.1385f;
						case 6:
							return -1758.459f, 265.7853f, 119.3051f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -2761.15f, -155.7835f, 150.856f;
						case 1:
							return -2763.649f, -160.2878f, 150.8133f;
						case 2:
							return -2761.855f, -159.1378f, 151.0176f;
						case 3:
							return -2763.572f, -160.8323f, 150.8463f;
						case 4:
							return -2761.176f, -161.9261f, 151.021f;
						case 5:
							return -2764.819f, -159.9952f, 150.5882f;
						case 6:
							return -2764.838f, -157.4752f, 150.5356f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -719.2113f, -755.4812f, 49.81384f;
						case 1:
							return -717.5301f, -758.2379f, 49.85249f;
						case 2:
							return -721.2198f, -760.2551f, 49.83548f;
						case 3:
							return -716.4632f, -757.7909f, 49.83548f;
						case 4:
							return -721.7213f, -755.4597f, 50.867f;
						case 5:
							return -719.8456f, -753.7499f, 49.79519f;
						case 6:
							return -723.6201f, -756.3176f, 49.93331f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 953.2573f, -1249.291f, 53.87093f;
						case 1:
							return 950.9216f, -1250.914f, 53.96534f;
						case 2:
							return 949.3633f, -1248.699f, 53.97248f;
						case 3:
							return 951.8709f, -1249.214f, 53.86581f;
						case 4:
							return 952.5452f, -1246.627f, 53.80265f;
						case 5:
							return 949.3638f, -1246.241f, 53.90157f;
						case 6:
							return 951.9981f, -1245.212f, 53.79996f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 1089.388f, -1421.76f, 55.4995f;
						case 1:
							return 1089.704f, -1417.942f, 55.52629f;
						case 2:
							return 1089.866f, -1420.286f, 55.35836f;
						case 3:
							return 1090.614f, -1417.273f, 55.77501f;
						case 4:
							return 1086.425f, -1418.622f, 55.6114f;
						case 5:
							return 1089.64f, -1422.87f, 55.45679f;
						case 6:
							return 1087.065f, -1422.422f, 55.4695f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 1289.037f, -1605.02f, 64.52058f;
						case 1:
							return 1285.907f, -1604.498f, 64.50636f;
						case 2:
							return 1290.473f, -1605.005f, 64.46574f;
						case 3:
							return 1292.644f, -1604.174f, 64.27807f;
						case 4:
							return 1294.001f, -1605.432f, 64.31178f;
						case 5:
							return 1292.688f, -1602.594f, 64.01215f;
						case 6:
							return 1286.933f, -1604.619f, 64.5117f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (func_233())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -1499.519f, -553.7022f, 131.816f;
						case 1:
							return -1496.353f, -555.2807f, 131.8417f;
						case 2:
							return -1495.8f, -556.1063f, 131.8637f;
						case 3:
							return -1500.151f, -556.0807f, 131.8662f;
						case 4:
							return -1501.354f, -553.8411f, 131.8338f;
						case 5:
							return -1501.634f, -552.0386f, 131.8112f;
						case 6:
							return -1495.57f, -555.4305f, 131.8408f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -1758.699f, 269.4274f, 118.5022f;
						case 1:
							return -1757.563f, 267.2061f, 118.9688f;
						case 2:
							return -1758.044f, 267.5631f, 118.9089f;
						case 3:
							return -1760.03f, 268.3575f, 118.7854f;
						case 4:
							return -1762.666f, 267.2132f, 118.8957f;
						case 5:
							return -1760.06f, 265.9642f, 119.2891f;
						case 6:
							return -1762.323f, 269.8965f, 118.3679f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -2759.672f, -156.2303f, 150.975f;
						case 1:
							return -2761.297f, -155.987f, 150.8689f;
						case 2:
							return -2760.491f, -159.7183f, 151.0812f;
						case 3:
							return -2760.785f, -156.5841f, 150.951f;
						case 4:
							return -2763.912f, -157.4422f, 150.6202f;
						case 5:
							return -2765.199f, -158.5706f, 150.5246f;
						case 6:
							return -2760.098f, -160.6409f, 151.0229f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -723.5045f, -757.0285f, 49.93748f;
						case 1:
							return -717.5816f, -753.1685f, 49.79384f;
						case 2:
							return -717.0905f, -756.0546f, 49.81386f;
						case 3:
							return -718.5177f, -753.2686f, 49.80091f;
						case 4:
							return -720.2693f, -755.9547f, 49.82605f;
						case 5:
							return -722.0327f, -755.5529f, 49.87656f;
						case 6:
							return -720.4021f, -760.0595f, 49.81378f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_236(int iParam0)
{
	switch (func_233())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					return 2041325498;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_237(int iParam0, int iParam1)
{
	Local_667.f_74.f_7[iParam0]->f_3 = iParam1;
}

int func_238(int iParam0)
{
	switch (func_233())
	{
		case 0:
		case 1:
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1270332421;
				default:
					break;
			}
			break;
		case 4:
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					return 480084174;
				default:
					break;
			}
			break;
	}
	return 41788943;
}

void func_239(int iParam0, int iParam1)
{
	Local_667.f_74.f_7[iParam0]->f_4 = iParam1;
}

char* func_240(int iParam0)
{
	switch (func_233())
	{
		case 0:
		case 1:
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					return "0283_A_M_M_NbxSlums_01_WHITE_01";
				default:
					break;
			}
			break;
		case 4:
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					return "0644_A_M_M_Civ_Poor_White_AGGRESSIVE_19";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_241(int iParam0, char* sParam1)
{
	Local_667.f_74.f_7[iParam0]->f_10 = sParam1;
}

Vector3 func_242(int iParam0)
{
	return func_294();
}

float func_243(int iParam0)
{
	return get_random_float_in_range(0f, 360f);
}

void func_244(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	Local_667.f_74.f_7[iParam0]->f_6 = { vParam1 };
	Local_667.f_74.f_7[iParam0]->f_5 = fParam4;
	if (bParam5)
	{
		func_254(&(Local_667.f_74.f_7[iParam0]->f_2), 2);
	}
	else
	{
		func_272(&(Local_667.f_74.f_7[iParam0]->f_2), 2);
	}
}

int func_245(int iParam0)
{
	if (iParam0 == 7)
	{
		return func_383(func_382());
	}
	switch (func_195())
	{
		case 0:
			switch (func_233())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -1499182641;
						case 1:
							return 319326044;
						case 2:
							return 193241785;
						case 3:
							return 193241785;
						case 4:
							return -72392766;
						case 5:
							return 193241785;
						case 6:
							return 193241785;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -1499182641;
						case 1:
							return 319326044;
						case 2:
							return 193241785;
						case 3:
							return 193241785;
						case 4:
							return -72392766;
						case 5:
							return 193241785;
						case 6:
							return 193241785;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1499182641;
						case 1:
							return 319326044;
						case 2:
							return 193241785;
						case 3:
							return 193241785;
						case 4:
							return -72392766;
						case 5:
							return 193241785;
						case 6:
							return 193241785;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1499182641;
						case 1:
							return 319326044;
						case 2:
							return 193241785;
						case 3:
							return 193241785;
						case 4:
							return -72392766;
						case 5:
							return 193241785;
						case 6:
							return 193241785;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -1499182641;
						case 1:
							return 319326044;
						case 2:
							return 193241785;
						case 3:
							return 193241785;
						case 4:
							return -72392766;
						case 5:
							return 193241785;
						case 6:
							return 193241785;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -1499182641;
						case 1:
							return 319326044;
						case 2:
							return 193241785;
						case 3:
							return 193241785;
						case 4:
							return -72392766;
						case 5:
							return 193241785;
						case 6:
							return 193241785;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1499182641;
						case 1:
							return 319326044;
						case 2:
							return 193241785;
						case 3:
							return 193241785;
						case 4:
							return -72392766;
						case 5:
							return 193241785;
						case 6:
							return 193241785;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (func_233())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -1499182641;
						case 1:
							return 319326044;
						case 2:
							return -347276241;
						case 3:
							return -347276241;
						case 4:
							return -72392766;
						case 5:
							return 1061658559;
						case 6:
							return 1061658559;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -1499182641;
						case 1:
							return 319326044;
						case 2:
							return -51847185;
						case 3:
							return -51847185;
						case 4:
							return -72392766;
						case 5:
							return 161801294;
						case 6:
							return 161801294;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1499182641;
						case 1:
							return 319326044;
						case 2:
							return -51847185;
						case 3:
							return -51847185;
						case 4:
							return -72392766;
						case 5:
							return 161801294;
						case 6:
							return 161801294;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1499182641;
						case 1:
							return 319326044;
						case 2:
							return -100088714;
						case 3:
							return -100088714;
						case 4:
							return -72392766;
						case 5:
							return 1727249588;
						case 6:
							return 1727249588;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -1499182641;
						case 1:
							return 319326044;
						case 2:
							return -100088714;
						case 3:
							return -100088714;
						case 4:
							return -72392766;
						case 5:
							return 1727249588;
						case 6:
							return 1727249588;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -1499182641;
						case 1:
							return 319326044;
						case 2:
							return -347276241;
						case 3:
							return -51847185;
						case 4:
							return -72392766;
						case 5:
							return -347276241;
						case 6:
							return 1061658559;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1499182641;
						case 1:
							return 319326044;
						case 2:
							return 2020860041;
						case 3:
							return 2020860041;
						case 4:
							return -72392766;
						case 5:
							return 1959411711;
						case 6:
							return 1959411711;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (func_233())
			{
				case 0:
				case 1:
				case 2:
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1499182641;
						case 1:
							return 319326044;
						case 2:
							return -72392766;
						case 3:
							return 1491155834;
						case 4:
							return 116449707;
						case 5:
							return 1491155834;
						case 6:
							return 116449707;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

Vector3 func_246(int iParam0)
{
	switch (func_195())
	{
		case 0:
		case 2:
			switch (func_233())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 0f;
						case 1:
							return 90f, 90f, 90f;
						case 2:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 3:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 4:
							return 0f, 0f, get_random_float_in_range(0f, 180f);
						case 5:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 6:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -10f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 3:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 4:
							return 0f, 0f, get_random_float_in_range(0f, 180f);
						case 5:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 6:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 3:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 4:
							return 0f, 0f, get_random_float_in_range(0f, 180f);
						case 5:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 6:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 3:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 4:
							return 0f, 0f, get_random_float_in_range(0f, 180f);
						case 5:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 6:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 180f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 3:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 4:
							return 0f, 0f, get_random_float_in_range(0f, 180f);
						case 5:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 6:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 0f, 10f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 3:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 4:
							return 0f, 0f, get_random_float_in_range(0f, 180f);
						case 5:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 6:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 3:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 4:
							return 0f, 0f, get_random_float_in_range(0f, 180f);
						case 5:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 6:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (func_233())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 0f, 0f, get_random_float_in_range(0f, 180f);
						case 3:
							return 0f, 0f, get_random_float_in_range(0f, 180f);
						case 4:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 5:
							return 0f, 0f, get_random_float_in_range(0f, 180f);
						case 6:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -10f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 0f, 0f, get_random_float_in_range(0f, 180f);
						case 3:
							return 0f, 0f, get_random_float_in_range(0f, 180f);
						case 4:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 5:
							return 0f, 0f, get_random_float_in_range(0f, 180f);
						case 6:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 0f, 0f, get_random_float_in_range(0f, 180f);
						case 3:
							return 0f, 0f, get_random_float_in_range(0f, 180f);
						case 4:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 5:
							return 0f, 0f, get_random_float_in_range(0f, 180f);
						case 6:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 0f, 0f, get_random_float_in_range(0f, 180f);
						case 3:
							return 0f, 0f, get_random_float_in_range(0f, 180f);
						case 4:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						case 5:
							return 0f, 0f, get_random_float_in_range(0f, 180f);
						case 6:
							return 90f, 90f, get_random_float_in_range(0f, 180f);
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_247(int iParam0, int iParam1)
{
	func_384(0, iParam0, iParam1);
}

void func_248(int iParam0, vector3 vParam1, vector3 vParam4, bool bParam7)
{
	func_385(0, iParam0, vParam1, vParam4, bParam7);
}

void func_249(int iParam0)
{
	func_386(0, iParam0);
}

void func_250(int iParam0)
{
	func_387(0, iParam0);
}

void func_251(int iParam0)
{
	func_388(0, iParam0);
}

void func_252(int iParam0)
{
	func_389(0, iParam0);
}

bool func_253(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_254(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_255(int iParam0)
{
	if (!func_189(iParam0))
	{
		return false;
	}
	iVar0 = func_390(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

void func_256(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_257(struct<31> Param0)
{
	func_256(&uVar0, Param0);
	return _0x77a6e4ad0c496f81(&uVar0);
}

bool func_258(var uParam0)
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
	while (iVar2 < 1)
	{
		if (func_175(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_391(iVar2, uParam0, &bVar1))
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
			if (func_392(iVar2))
			{
				if (network_does_network_id_exist(&(Local_13.f_23[iVar2])))
				{
					if (network_request_control_of_network_id(&(Local_13.f_23[iVar2])))
					{
						_0x7182edda1ee7db5a(&(Local_13.f_23[iVar2]));
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

void func_259()
{
	func_129(2);
}

bool func_260(bool bParam0)
{
	if (!can_register_mission_objects(1))
	{
		*bParam0 = 1;
		return false;
	}
	bVar3 = false;
	vVar4 = { 0f, 0f, 0f };
	vVar7 = { 0f, 0f, 0f };
	vVar10 = { Local_667.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 90f);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 8)
		{
			iVar2 = func_393(iVar0, iVar1);
			if (func_177(iVar0, iVar1))
			{
			}
			else if (func_176(iVar0, iVar1))
			{
			}
			else if (is_bit_set(Local_667.f_101[iVar0]->f_2, iVar1))
			{
				if (func_394(iVar0, iVar1))
				{
					if (network_does_network_id_exist(Local_13.f_25[iVar0][iVar1]))
					{
						if (network_request_control_of_network_id(Local_13.f_25[iVar0][iVar1]))
						{
							_0x7182edda1ee7db5a(Local_13.f_25[iVar0][iVar1]);
						}
					}
				}
			}
			else
			{
				if (!network_does_network_id_exist(Local_13.f_25[iVar0][iVar1]))
				{
					if (!func_395(iVar0, iVar1))
					{
						vVar7 = { _get_object_offset_from_coords(vVar10, 0f, func_396(iVar0, iVar1)) };
					}
					else
					{
						vVar7 = { func_396(iVar0, iVar1) };
					}
					if (func_397(iVar0, iVar1))
					{
						if (!func_398(&vVar7, 1, 10, 0, 0))
						{
							bVar3 = true;
						}
						else
						{
							if (func_399(iVar0, iVar1))
							{
								iVar13 = _0x9641a9a20310f6b8(Local_667.f_101[iVar0]->f_5[iVar1]->f_3, vVar7, 0f, 0f, 0f, 1, 0, 0);
								if (!does_entity_exist(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									(*Local_13.f_25[iVar0])[iVar1] = obj_to_net(iVar13);
									if (!network_does_network_id_exist(Local_13.f_25[iVar0][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
								}
							}
							else if (func_400(iVar0, iVar1))
							{
								iVar13 = _create_weapon_object(Local_667.f_101[iVar0]->f_5[iVar1]->f_5, Local_667.f_101[iVar0]->f_5[iVar1]->f_4, func_396(iVar0, iVar1), true, 1f);
								if (!does_entity_exist(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									(*Local_13.f_25[iVar0])[iVar1] = obj_to_net(iVar13);
									if (!network_does_network_id_exist(Local_13.f_25[iVar0][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
									else
									{
										set_network_id_exists_on_all_machines(Local_13.f_25[iVar0][iVar1], true);
									}
								}
							}
							else if (iVar2 == 0)
							{
								Jump @1087; //curOff = 574
							}
							else if (!func_401((*Local_13.f_25[iVar0])[iVar1], iVar2, vVar7, 1, 0))
							{
								*bParam0 = 1;
								return false;
							}
							if (network_does_network_id_exist(Local_13.f_25[iVar0][iVar1]))
							{
								iVar13 = net_to_obj(Local_13.f_25[iVar0][iVar1]);
								if (func_394(iVar0, iVar1))
								{
									if (network_does_network_id_exist(Local_13.f_25[iVar0][iVar1]))
									{
										if (network_request_control_of_network_id(Local_13.f_25[iVar0][iVar1]))
										{
											_0x7182edda1ee7db5a(Local_13.f_25[iVar0][iVar1]);
										}
									}
								}
								if (!does_entity_exist(iVar13))
								{
									*bParam0 = 1;
									return false;
								}
								set_bit(&(Local_667.f_101[iVar0]->f_2), iVar1);
								if (func_402(iVar0, iVar1))
								{
									_0x78b4567e18b54480(iVar13);
									_set_pickup_object_glow_enabled(iVar13, true);
								}
								if (func_403(iVar0, iVar1))
								{
									_0xebdc12861d079aba(iVar13, 1);
								}
								if (func_404(iVar0, iVar1))
								{
									set_entity_visible(iVar13, false);
								}
								else
								{
									_0xa91e6cf94404e8c9(iVar13);
								}
								if (func_397(iVar0, iVar1))
								{
									_0x9587913b9e772d29(iVar13, 0);
								}
								vVar4 = { func_405(iVar0, iVar1) };
								if (!func_179(vVar4))
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
										if (!func_406(iVar0, iVar1, 32))
										{
											get_model_dimensions(iVar2, &vVar15, &vVar18);
											vVar21 = { vVar18 - vVar15 * Vector(0.5f, 0.5f, 0.5f) };
											vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, absf(func_407(vVar4.x)), absf(func_407(vVar4.y))) };
											vVar27 = { func_408(vVar24) * vVar21 };
											set_entity_coords(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
										}
									}
								}
								if (func_409(iVar0, iVar1))
								{
									func_410(iVar0, iVar1, 1);
								}
								if (func_411(iVar0, iVar1))
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

bool func_261(int iParam0)
{
	return func_188(Local_667.f_5, iParam0);
}

bool func_262(int iParam0)
{
	return func_188(Local_667.f_6, iParam0);
}

void func_263()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_412(Local_13.f_40[iVar0], func_182(iVar0));
		iVar0++;
	}
}

bool func_264()
{
	if (func_413(1073741824))
	{
		func_414(6);
	}
	if (Local_13.f_7 == 6)
	{
		return true;
	}
	return false;
}

void func_265()
{
	if (func_415(33554432, 0) && Local_13.f_7 != 5)
	{
		func_414(5);
	}
	if (func_415(2048, 0) && Local_13.f_7 < 4)
	{
		func_414(4);
	}
}

void func_266()
{
	if (func_195() == 2)
	{
		if (!func_413(2))
		{
			return;
		}
		if (!func_413(32768))
		{
			return;
		}
	}
	func_414(1);
}

void func_267()
{
	if (func_307())
	{
		switch (func_195())
		{
			case 0:
			case 1:
			case 2:
				func_414(2);
				break;
			default:
				func_414(2);
				break;
		}
	}
}

void func_268()
{
	if (func_195() != 2)
	{
		return;
	}
	func_416();
	if (func_415(8, 0))
	{
		func_414(4);
	}
	else if (func_415(32, 0))
	{
		func_414(3);
	}
}

void func_269()
{
	if (func_415(64, 0) || func_415(128, 0))
	{
		if (func_229(0) != 3)
		{
			func_417(0, 3);
		}
		else
		{
			func_414(4);
		}
	}
	else
	{
		if (func_415(268435456, 0))
		{
			if (func_229(0) != 2)
			{
				func_417(0, 2);
			}
		}
		else if (func_415(134217728, 0))
		{
			if (func_229(0) != 1)
			{
				func_417(0, 1);
			}
		}
		if (func_418(0, 2))
		{
			if (Local_13.f_7.f_12 == 0)
			{
				Local_13.f_7.f_12 = get_network_time_accurate();
			}
			else if (get_time_difference(Local_13.f_7.f_12, get_network_time_accurate()) > 30000)
			{
				func_414(4);
			}
		}
	}
}

void func_270()
{
	if (func_229(0) != 3)
	{
		func_417(0, 3);
	}
	if (!func_419(4))
	{
		if (func_415(64, 0))
		{
			if (!func_420(4096))
			{
				func_421(4096);
			}
		}
		else if (func_415(128, 0))
		{
			if (!func_420(8192))
			{
				func_421(8192);
			}
		}
		else if (func_415(2048, 0))
		{
			if (!func_420(16384))
			{
				func_421(16384);
			}
		}
		else if (!func_420(32))
		{
			func_421(32);
		}
		func_422(&(Local_13.f_7.f_5));
		Local_13.f_7.f_11 = get_network_time_accurate();
		func_423(4);
	}
	else
	{
		func_424();
	}
}

void func_271()
{
	if (func_229(0) < 3)
	{
		func_417(0, 3);
	}
}

void func_272(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_273(int iParam0)
{
	if (!func_189(iParam0))
	{
		return 0;
	}
	if (!func_255(iParam0))
	{
		return 0;
	}
	return (*Global_1131196)[iParam0]->f_18.f_1;
}

void func_274(var uParam0, int iParam1)
{
	func_425(uParam0, iParam1);
}

void func_275(var uParam0, int iParam1)
{
	func_426(uParam0, iParam1);
}

void func_276(int iParam0)
{
	Var0.f_10 = 255;
	get_event_data(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 182:
			if (func_427(&Var0, iParam0))
			{
				func_428(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_277(int iParam0)
{
}

void func_278(int iParam0)
{
	if (get_event_at_index(0, iParam0) != 1081092949)
	{
		return;
	}
	if (!get_event_data(0, iParam0, &Var0, 5))
	{
		return;
	}
	if (func_429(Var0.f_4, &uVar5))
	{
		if (!func_430(2048, 255))
		{
			func_431(2048);
		}
		if (!func_432())
		{
			func_433();
		}
		if (!func_434())
		{
			func_435();
		}
		if (!func_436())
		{
			func_437(1);
		}
		return;
	}
	else if (_0xd04241bbf6d03a5e(player_ped_id()) != Local_667.f_19.f_50)
	{
		return;
	}
	iVar6 = Var0;
	if (!func_438(iVar6, 0))
	{
		return;
	}
	if (iVar6 != func_382())
	{
		return;
	}
	if (!func_430(2048, 255))
	{
		func_431(2048);
	}
	func_439();
	func_440();
}

bool func_279()
{
	if (func_195() == 0)
	{
		if (network_is_host_of_this_script())
		{
			if (!func_419(8))
			{
				if (!_0xf0460c7bf80011ea(1))
				{
					return false;
				}
				else
				{
					reserve_network_mission_pickups(1);
					func_423(8);
				}
			}
		}
	}
	return true;
}

void func_280(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		func_441(iParam0);
	}
}

char* func_281(int iParam0)
{
	switch (func_195())
	{
		case 2:
			switch (iParam0)
			{
				case 1:
					return "script@beat@wilderness@crashedwagon@action";
				case 0:
					return "script@beat@wilderness@crashedwagon@action";
				default:
					break;
			}
			return "";
	}
	return "";
}

int func_282(int iParam0)
{
	switch (func_195())
	{
		case 2:
			switch (iParam0)
			{
				case 0:
					return 64;
				case 1:
					return 64;
				default:
					break;
			}
			return 0;
	}
	return 0;
}

char* func_283(int iParam0)
{
	switch (func_195())
	{
		case 2:
			switch (iParam0)
			{
				case 1:
					return "pbl_DRUNK_ACTION";
				case 0:
					return "pbl_DRUNK_IDLE_01";
				default:
					break;
			}
			return "";
	}
	return "";
}

bool func_284(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4)
{
	if (network_is_host_of_this_script())
	{
		if (!network_does_network_id_exist(*uParam2))
		{
			if (!_does_anim_scene_exist(*uParam1))
			{
				*uParam1 = _create_anim_scene(sParam0, iParam3, sParam4, true, true);
			}
			if (_does_anim_scene_exist(*uParam1))
			{
				if (!_network_has_control_of_anim_scene(*uParam1))
				{
					if (!_network_request_control_of_anim_scene(*uParam1))
					{
						return false;
					}
				}
				if (!_is_anim_scene_loaded(*uParam1, true, false))
				{
					if (!_is_anim_scene_loading(*uParam1, false) && !_is_anim_scene_loaded(*uParam1, false, false))
					{
						load_anim_scene(*uParam1);
					}
					return false;
				}
				else
				{
					*uParam2 = _anim_scene_to_net(*uParam1);
				}
			}
			return false;
		}
	}
	if (!network_does_network_id_exist(*uParam2))
	{
		return false;
	}
	*uParam1 = _net_to_anim_scene(*uParam2);
	if (!_does_anim_scene_exist(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_285(float fParam0)
{
	vVar0 = { func_294() };
	if (_0x6bfbdc46139c45ab(vVar0))
	{
		if (func_442(&(Local_667.f_19.f_47)))
		{
			func_443(&(Local_667.f_19.f_47));
		}
		return true;
	}
	if (!func_442(&(Local_667.f_19.f_47)))
	{
		func_422(&(Local_667.f_19.f_47));
	}
	request_collision_at_coord(vVar0);
	request_additional_collision_at_coord(vVar0);
	if (fParam0 <= 0f)
	{
		return false;
	}
	return func_444(&(Local_667.f_19.f_47), 30f);
}

bool func_286()
{
	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (is_bit_set(Local_667.f_74.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_445(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!is_bit_set(Local_667.f_74.f_4, iVar0))
				{
					request_model(iVar2, false);
					set_bit(&(Local_667.f_74.f_4), iVar0);
				}
				if (!has_model_loaded(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					set_bit(&(Local_667.f_74.f_3), iVar0);
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
		while (iVar1 < 8)
		{
			if (is_bit_set(Local_667.f_101[iVar0]->f_1, iVar1))
			{
			}
			else
			{
				iVar3 = func_393(iVar0, iVar1);
				if (func_446(iVar1))
				{
					if (Local_667.f_101[iVar0]->f_5[iVar1]->f_6 == 0 || !_0x93ffd92f05ec32fd(Local_667.f_101[iVar0]->f_5[iVar1]->f_6))
					{
						Local_667.f_101[iVar0]->f_5[iVar1]->f_6 = _0x91fe941f9fcfb702(Local_667.f_101[iVar0]->f_5[iVar1]->f_3, 0);
						bVar2 = true;
					}
					else if (!_0xb0b2c6d170b0e8e5(Local_667.f_101[iVar0]->f_5[iVar1]->f_6))
					{
						bVar2 = true;
					}
					else if (!is_bit_set(Local_667.f_101[iVar0]->f_1, iVar1))
					{
						set_bit(&(Local_667.f_101[iVar0]->f_1), iVar1);
					}
				}
				else if (func_447(iVar1))
				{
					_0x72d4cb5db927009c(Local_667.f_101[iVar0]->f_5[iVar1]->f_5, -1, 0);
					if (!_0xff07cf465f48b830(Local_667.f_101[iVar0]->f_5[iVar1]->f_5))
					{
						bVar2 = true;
					}
					else if (!is_bit_set(Local_667.f_101[iVar0]->f_1, iVar1))
					{
						set_bit(&(Local_667.f_101[iVar0]->f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @457; //curOff = 353
				}
				else
				{
					if (!is_bit_set(&(Local_667.f_101[iVar0]), iVar1))
					{
						request_model(iVar3, false);
						set_bit(Local_667.f_101[iVar0], iVar1);
					}
					if (!has_model_loaded(iVar3))
					{
						bVar2 = true;
						Jump @457; //curOff = 413
					}
					else if (!is_bit_set(Local_667.f_101[iVar0]->f_1, iVar1))
					{
						set_bit(&(Local_667.f_101[iVar0]->f_1), iVar1);
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

bool func_288()
{
	bVar3 = false;
	vVar4 = { 0f, 0f, 0f };
	vVar7 = { 0f, 0f, 0f };
	vVar10 = { Local_667.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 90f);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 8)
		{
			iVar2 = func_393(iVar0, iVar1);
			if (func_176(iVar0, iVar1))
			{
			}
			else if (!func_177(iVar0, iVar1))
			{
				if (network_is_host_of_this_script())
				{
					if (is_bit_set(Local_667.f_101[iVar0]->f_2, iVar1))
					{
						if (func_394(iVar0, iVar1))
						{
							if (network_does_network_id_exist(Local_13.f_25[iVar0][iVar1]))
							{
								if (network_request_control_of_network_id(Local_13.f_25[iVar0][iVar1]))
								{
									_0x7182edda1ee7db5a(Local_13.f_25[iVar0][iVar1]);
								}
							}
						}
					}
				}
			}
			else if (is_bit_set(Local_667.f_101[iVar0]->f_2, iVar1))
			{
			}
			else
			{
				if (!func_395(iVar0, iVar1))
				{
					vVar7 = { _get_object_offset_from_coords(vVar10, 0f, func_396(iVar0, iVar1)) };
				}
				else
				{
					vVar7 = { func_396(iVar0, iVar1) };
				}
				if (func_397(iVar0, iVar1))
				{
					if (!func_398(&vVar7, 1, 10, 0, 0))
					{
						bVar3 = true;
					}
					else
					{
						if (func_399(iVar0, iVar1))
						{
							iVar13 = _0x9641a9a20310f6b8(Local_667.f_101[iVar0]->f_5[iVar1]->f_3, vVar7, 0f, 0f, 0f, 0, 0, 0);
							if (!does_entity_exist(iVar13))
							{
								return false;
							}
						}
						else if (func_400(iVar0, iVar1))
						{
							iVar13 = _create_weapon_object(Local_667.f_101[iVar0]->f_5[iVar1]->f_5, Local_667.f_101[iVar0]->f_5[iVar1]->f_4, func_396(iVar0, iVar1), true, 1f);
							if (!does_entity_exist(iVar13))
							{
								return false;
							}
						}
						else if (iVar2 == 0)
						{
							Jump @831; //curOff = 447
						}
						else
						{
							iVar13 = create_object(iVar2, vVar7, false, true, false, false, true);
							if (!does_entity_exist(iVar13))
							{
								return false;
							}
						}
						set_bit(&(Local_667.f_101[iVar0]->f_2), iVar1);
						if (func_402(iVar0, iVar1))
						{
							_0x78b4567e18b54480(iVar13);
							_set_pickup_object_glow_enabled(iVar13, true);
						}
						if (func_403(iVar0, iVar1))
						{
							_0xebdc12861d079aba(iVar13, 1);
						}
						if (func_404(iVar0, iVar1))
						{
							set_entity_visible(iVar13, false);
						}
						else
						{
							_0xa91e6cf94404e8c9(iVar13);
						}
						if (func_397(iVar0, iVar1))
						{
							_0x9587913b9e772d29(iVar13, 0);
						}
						vVar4 = { func_405(iVar0, iVar1) };
						if (!func_179(vVar4))
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
								if (!func_406(iVar0, iVar1, 32))
								{
									get_model_dimensions(iVar2, &vVar15, &vVar18);
									vVar21 = { vVar18 - vVar15 * Vector(0.5f, 0.5f, 0.5f) };
									vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, absf(func_407(vVar4.x)), absf(func_407(vVar4.y))) };
									vVar27 = { func_408(vVar24) * vVar21 };
									set_entity_coords(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
								}
							}
						}
						Local_667.f_101[iVar0]->f_5[iVar1] = iVar13;
						if (func_409(iVar0, iVar1))
						{
							func_410(iVar0, iVar1, 1);
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

void func_289(struct<2> Param0)
{
	if (func_338(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_338(Param0)))
	{
		_0x99230691875fc218(func_336(Param0), func_338(Param0), Global_35);
	}
}

void func_290()
{
	if (!func_228(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_448(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_291()
{
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 8)
		{
			if (func_177(iVar1, iVar2))
			{
			}
			else if (func_176(iVar1, iVar2))
			{
			}
			else if (network_does_network_id_exist(Local_13.f_25[iVar1][iVar2]))
			{
				iVar0 = net_to_obj(Local_13.f_25[iVar1][iVar2]);
				Local_667.f_101[iVar1]->f_5[iVar2] = iVar0;
				if (func_394(iVar1, iVar2))
				{
					if (network_does_network_id_exist(Local_13.f_25[iVar1][iVar2]))
					{
						if (network_request_control_of_network_id(Local_13.f_25[iVar1][iVar2]))
						{
							_0x7182edda1ee7db5a(Local_13.f_25[iVar1][iVar2]);
						}
					}
				}
				if (func_402(iVar1, iVar2))
				{
					_0x78b4567e18b54480(iVar0);
					_set_pickup_object_glow_enabled(iVar0, true);
				}
			}
			else if (0 != func_393(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_292()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (!func_179((*Local_667.f_317[iVar0])[iVar1]->f_3))
			{
				if (!func_180((*Local_667.f_317[iVar0])[iVar1]))
				{
					if ((*Local_667.f_317[iVar0])[iVar1]->f_7)
					{
						vVar2 = { (*Local_667.f_317[iVar0])[iVar1]->f_3 };
					}
					else
					{
						vVar2 = { _get_object_offset_from_coords(Local_667.f_15, 0f, (*Local_667.f_317[iVar0])[iVar1]->f_3) };
					}
					(*Local_667.f_317[iVar0])[iVar1] = _0xfa50f79257745e74(vVar2, (*Local_667.f_317[iVar0])[iVar1]->f_6, (*Local_667.f_317[iVar0])[iVar1]->f_2, (*Local_667.f_317[iVar0])[iVar1]->f_1, 0);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_293()
{
	iVar0 = func_305(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_does_scenario_point_exist(Local_667.f_19.f_51))
	{
		Local_667.f_19.f_51 = _0xd508fa229f1c4900(iVar0, 0f, -0.25f, 0f, 1765033373, 1f);
	}
	if (_does_scenario_point_exist(Local_667.f_19.f_51) && _is_scenario_point_active(Local_667.f_19.f_51))
	{
		_set_scenario_point_active(Local_667.f_19.f_50, false);
	}
	if (!func_192(256))
	{
		if (!_does_scenario_point_exist(Local_667.f_19.f_50))
		{
			Local_667.f_19.f_50 = create_scenario_point_attached_to_entity(iVar0, 75374539, 0f, -0.25f, 0f, 0f, 0f, 0f, 1);
			if (!_does_scenario_point_exist(Local_667.f_19.f_50))
			{
			}
			else
			{
				func_449(256);
			}
		}
		if (!func_192(256))
		{
			return;
		}
	}
	if (func_415(536870912, 1))
	{
		return;
	}
	if (!func_296(0))
	{
		return;
	}
	if (func_450(7))
	{
		attach_entity_to_entity(func_305(7), func_305(0), 0, func_451(), func_452(), false, false, false, false, 2, true, false, false);
		func_431(536870912);
	}
}

Vector3 func_294()
{
	return Local_667.f_15;
}

bool func_295(int iParam0)
{
	return func_453(0, iParam0);
}

bool func_296(int iParam0)
{
	return func_454(0, iParam0);
}

void func_297(int iParam0, bool bParam1)
{
	func_410(0, iParam0, bParam1);
}

void func_298(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (fParam0 >= fParam1)
	{
	}
	Local_667.f_335.f_2 = iParam2;
	Local_667.f_335.f_9 = fParam0;
	Local_667.f_335.f_10 = fParam1;
	Local_667.f_335.f_8 = iParam3;
	if (bParam4)
	{
		func_254(&(Local_667.f_335.f_12), 1);
	}
	else
	{
		func_272(&(Local_667.f_335.f_12), 1);
	}
}

void func_299()
{
	if (func_192(64))
	{
		return;
	}
	if (!func_455(0))
	{
		return;
	}
	add_entity_to_audio_mix_group(func_301(0), "DLC_MP007_ORECRW_group", 0f);
	func_449(64);
}

void func_300()
{
	if (func_192(32))
	{
		return;
	}
	_0x6339c1ea3979b5f7("boost_speech", "DLC_MP007_ORECRW_Sceneset");
	func_449(32);
}

int func_301(int iParam0)
{
	return &(Local_667.f_74.f_7[iParam0]);
}

int func_302(int iParam0)
{
	if (func_456(iParam0, &(Local_667.f_335.f_13)))
	{
		Local_667.f_335++;
		return 1;
	}
	return 0;
}

void func_303()
{
	iVar0 = func_381();
	func_197();
	switch (iVar0)
	{
		case 4:
			Local_667.f_19.f_53 = _create_volume_box(951.683f, -1246.043f, 53.61932f, 0f, 0f, 14.4774f, 1.661476f, 3.466542f, 1f);
			break;
	}
	if (!_does_volume_exist(Local_667.f_19.f_53))
	{
		return;
	}
	_0x19c7567d2f2287d6(Local_667.f_19.f_53, 16);
}

void func_304()
{
	func_198();
	switch (func_195())
	{
		case 0:
		case 2:
			switch (func_233())
			{
				case 0:
					Local_667.f_19.f_54 = _create_volume_box(-1496.161f, -551.9078f, 132.87f, 0f, 0f, 49.1446f, 4.634823f, 2.705444f, 2.888015f);
					break;
				case 1:
					Local_667.f_19.f_54 = _create_volume_box(-1759.685f, 272.4722f, 118.6335f, 0f, 0f, -12.00098f, 3.001256f, 4.476863f, 3.161584f);
					break;
				case 2:
					Local_667.f_19.f_54 = _create_volume_box(-2762.81f, -153.8303f, 151.4003f, 0f, 0f, 5.996339f, 2.797741f, 4.382535f, 2.039426f);
					break;
				case 3:
					Local_667.f_19.f_54 = _create_volume_box(-714.6502f, -754.3206f, 50.24637f, 0f, 0f, 28.49731f, 7.091133f, 2.954644f, 1f);
					break;
				case 4:
					Local_667.f_19.f_54 = _create_volume_box(953.3542f, -1252.704f, 54.91592f, 0f, 0f, 24.49942f, 2.708279f, 4.611202f, 2.922155f);
					break;
				case 5:
					Local_667.f_19.f_54 = _create_volume_box(1089.345f, -1414.659f, 56.033f, 0f, 0f, -15.53225f, 2.903421f, 4.91881f, 3.984426f);
					break;
				case 6:
					Local_667.f_19.f_54 = _create_volume_box(1283.91f, -1601.337f, 64.23965f, 0f, 0f, -23.0008f, 5.390947f, 3.631615f, 3.381567f);
					break;
			}
			break;
		case 1:
			switch (func_233())
			{
				case 0:
					Local_667.f_19.f_54 = _create_volume_box(-1495.911f, -552.1236f, 132.87f, 0f, 0f, 49.1446f, 4.634823f, 2.705444f, 2.888015f);
					break;
				case 1:
					Local_667.f_19.f_54 = _create_volume_box(-1759.685f, 272.4722f, 118.6335f, 0f, 0f, -12.00098f, 3.001256f, 4.476863f, 3.161584f);
					break;
				case 2:
					Local_667.f_19.f_54 = _create_volume_box(-2763.189f, -153.8702f, 151.4003f, 0f, 0f, 11.87059f, 2.797741f, 4.868763f, 2.140226f);
					break;
				case 3:
					Local_667.f_19.f_54 = _create_volume_box(-714.3862f, -754.1364f, 50.79624f, 0f, 0f, 34.89754f, 5.615334f, 2.954644f, 3.378589f);
					break;
			}
			break;
	}
	if (_does_volume_exist(Local_667.f_19.f_54))
	{
		if (!_0x19c7567d2f2287d6(Local_667.f_19.f_54, 7))
		{
		}
	}
}

int func_305(int iParam0)
{
	return func_457(0, iParam0);
}

void func_306()
{
	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (func_459(func_458(iVar0), &Var1))
		{
			if (does_entity_exist(Var1))
			{
				if (!network_has_control_of_entity(Var1))
				{
				}
				else
				{
					_0xbb1e41dd3d3c6250(Var1, "MpRandomEvent", 1);
					func_460(&(Local_667.f_220), Var1);
					func_461(func_458(iVar0));
				}
				iVar0++;
			}
		}
	}
}

bool func_307()
{
	return (func_135(32) || func_134(32, 255));
}

bool func_308(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_462(iParam0, 1178968787) };
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

void func_309()
{
	func_463();
	func_464();
	func_465();
}

void func_310()
{
	iVar2 = participant_id_to_int();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = network_is_participant_active(int_to_participantindex(iVar0));
		func_466(iVar0, bVar1, iVar2);
		func_467(iVar0, bVar1, iVar2);
		func_468(iVar0, bVar1, iVar2);
		func_469(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_311()
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
	if (!func_228(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (network_is_in_mp_cutscene() != Local_667.f_74.f_26)
	{
		bVar8 = true;
		Local_667.f_74.f_26 = !Local_667.f_74.f_26;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_667.f_74.f_19 >= 1)
		{
			Local_667.f_74.f_19 = 0;
		}
		iVar0 = Local_667.f_74.f_19;
		Local_667.f_74.f_19++;
		iVar9 = func_470(iVar0);
		iVar1 = &Local_667.f_74.f_7[iVar0];
		bVar4 = !does_entity_exist(iVar1);
		if (func_175(iVar9, 4))
		{
			func_448(iVar9, iVar3, 1);
			bVar4 = !does_entity_exist(iVar1);
		}
		if (bVar4)
		{
			if (&Local_58[iVar3]->f_2.f_2[iVar0] > -1f)
			{
				Local_58[iVar3]->f_2.f_2[iVar0] = -1f;
			}
			if (is_bit_set(Local_667.f_74.f_5, iVar0))
			{
				clear_bit(&(Local_667.f_74.f_5), iVar0);
				clear_bit(&(Local_667.f_74.f_6), iVar0);
				clear_bit(&(Local_667.f_74.f_20), iVar0);
			}
		}
		else
		{
			bVar7 = func_471(iVar2, iVar1, iVar0, iVar3);
		}
		if (is_bit_set(Local_667.f_74.f_20, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				clear_bit(&(Local_667.f_74.f_20), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				set_bit(&(Local_667.f_74.f_20), iVar0);
			}
		}
		if (!bVar4)
		{
			if (is_any_speech_playing(iVar1))
			{
				if (!is_bit_set(Local_58[iVar3]->f_2.f_1, iVar0))
				{
					set_bit(&(Local_58[iVar3]->f_2.f_1), iVar0);
				}
				func_422(Local_667.f_74.f_21[iVar0]);
			}
		}
		if (is_bit_set(Local_58[iVar3]->f_2.f_1, iVar0))
		{
			if (bVar4 || (!is_any_speech_playing(iVar1) && (!func_442(Local_667.f_74.f_21[iVar0]) || func_444(Local_667.f_74.f_21[iVar0], 0.5f))))
			{
				func_443(Local_667.f_74.f_21[iVar0]);
				clear_bit(&(Local_58[iVar3]->f_2.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_175(iVar9, 256))
		{
			set_entity_visible_in_cutscene(iVar1, Local_667.f_74.f_26, 0, 256);
		}
		if (func_175(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (network_is_host_of_this_script())
					{
						if (func_472(iVar9))
						{
							if (!func_391(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_473(iVar9, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if ((_0xb07d3185e11657a5(iVar1) && network_has_control_of_entity(iVar1)) && !func_175(iVar9, 8))
			{
				if (!func_472(iVar9))
				{
					_0x7043d0681285ba2d(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_667.f_74.f_20 != 0)
	{
		if (!func_474(1, 255))
		{
			func_475(1);
		}
	}
	else if (func_474(1, 255))
	{
		func_476(1);
	}
}

void func_312()
{
	Var5.f_6 = 1065353216;
	Var5.f_7 = 1065353216;
	Var5.f_8 = 1065353216;
	Var5.f_9 = 1;
	Var5.f_12 = 8;
	iVar20 = 255;
	if (!func_228(&iVar25))
	{
		return;
	}
	func_477();
	bVar27 = get_current_ped_weapon(player_ped_id(), &iVar26, true, 0, false);
	bVar28 = (bVar27 && is_ped_shooting(player_ped_id()));
	if ((bVar27 && bVar28) && _0x705be297eebdb95d(iVar26))
	{
		Local_667.f_220.f_64 = 0;
		Local_58[iVar25]->f_6.f_4 = get_network_time_accurate();
	}
	bVar29 = (bVar28 && (iVar26 == -1361787316 || iVar26 == 1698907612));
	bVar30 = false;
	while (iVar22 < 1)
	{
		if (Local_667.f_220.f_93 >= 1)
		{
			Local_667.f_220.f_93 = 0;
		}
		iVar1 = Local_667.f_220.f_93;
		Local_667.f_220.f_93++;
		iVar22++;
		iVar18 = func_458(iVar1);
		if (!func_478(iVar18))
		{
		}
		else if (func_479(iVar18, &Var5))
		{
			if (func_480(&Var5, iVar18))
			{
				if (func_481(&(Local_58[iVar25]->f_6), 8, iVar1))
				{
					func_482(&(Local_58[iVar25]->f_6), 8, iVar1);
				}
			}
			else if (!func_481(&(Local_58[iVar25]->f_6), 8, iVar1))
			{
				func_483(&(Local_58[iVar25]->f_6), 8, iVar1);
			}
			if (!does_entity_exist(Var5))
			{
			}
			else
			{
				func_484(iVar18);
				if (func_485(iVar18))
				{
					if (func_486(iVar18))
					{
						if (!func_487(iVar18))
						{
							func_488(iVar18);
						}
					}
					if (func_489(iVar18))
					{
						func_490(iVar18);
					}
				}
				else
				{
					if (func_491(iVar18))
					{
						if ((does_entity_exist(Var5) && !is_entity_dead(Var5)) && network_has_control_of_entity(Var5))
						{
							set_ped_reset_flag(Var5, 42, true);
						}
					}
					if (!func_492(Var5))
					{
						if (network_has_control_of_entity(Var5))
						{
							func_460(&(Local_667.f_220), Var5);
						}
					}
					if (!func_493(iVar18, 255))
					{
						bVar2 = false;
						iVar3 = 0;
						if (func_494(iVar18))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (func_495(iVar18, iVar25))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_496(Var5, Var5.f_1, &(Local_667.f_220), &iVar4, 0, Var5.f_2))
						{
							switch (iVar4)
							{
								case 256:
									if (!is_bit_set(Local_667.f_220.f_64, iVar18))
									{
										bVar2 = true;
										set_bit(&(Local_667.f_220.f_64), iVar18);
									}
									break;
								case 8:
									if (bVar27)
									{
										if (!_is_weapon_lasso(iVar26) && !_0x8785e6e40c7a8819(player_ped_id()))
										{
											bVar2 = true;
										}
									}
									break;
								default:
									bVar2 = true;
									break;
							}
						}
						else if ((bVar29 && Var5.f_2 <= 1.25f) && func_497(player_ped_id(), Var5, 1060437492) == 0)
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else
						{
							if (!bVar2)
							{
								if (func_498(iVar18, &Var5, iVar25))
								{
									iVar4 = 4;
									bVar2 = true;
									set_bit(&(Local_667.f_220.f_64), iVar18);
								}
							}
							if (!bVar2)
							{
								bVar30 = true;
								if (!func_499(iVar18) || !_0x83d43f0fd5276e4d(Var5, 1))
								{
									bVar30 = false;
									if (network_has_control_of_entity(Var5))
									{
										_0xbb1e41dd3d3c6250(Var5, "MpRandomEvent", 1);
										func_461(iVar18);
									}
								}
								if (bVar30)
								{
									iVar31 = _0x796eecff0c6d39be(Var5, 1, 1);
									if (iVar31 != 0)
									{
										iVar32 = _0x822a001bcea5bd81(Var5, iVar31, 1, 1);
										if (does_entity_exist(iVar32) && is_entity_a_ped(iVar32))
										{
											iVar33 = get_ped_index_from_entity_index(iVar32);
											if (is_ped_a_player(iVar33) && iVar33 == player_ped_id())
											{
												switch (iVar31)
												{
													case -587661767:
														if (func_500(iVar18, &Var5))
														{
															iVar4 = 256;
															bVar2 = true;
															set_bit(&(Local_667.f_220.f_64), iVar18);
														}
														break;
													case -1507090758:
													case -1102089407:
														if (!Local_667.f_220.f_2 & 4 != 0)
														{
															iVar4 = 4;
															bVar2 = true;
														}
														break;
												}
											}
										}
										_0x1a5c5d350068a673(Var5, 1);
									}
								}
								if (!bVar2)
								{
									if (func_501(iVar18, &Var5, iVar25))
									{
										iVar4 = 256;
										bVar2 = true;
										set_bit(&(Local_667.f_220.f_64), iVar18);
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_502(iVar18, iVar4, iVar3))
							{
							}
							else
							{
								if (func_481(&(Local_58[iVar25]->f_6), 8, iVar1))
								{
									func_482(&(Local_58[iVar25]->f_6), 8, iVar1);
								}
								func_503(iVar18, 1);
								if (func_504(iVar18))
								{
									if (!func_505(iVar18, 255))
									{
										if (network_has_control_of_entity(Var5))
										{
											if (!func_506(iVar18))
											{
											}
											else
											{
												func_507(iVar18);
												func_508(iVar18);
												Jump @1378; //curOff = 1187
												if (func_509(iVar18))
												{
												}
												else if (iVar23 < 1)
												{
													if (network_has_control_of_entity(Var5))
													{
														iVar24 = 0;
														while (iVar24 < 8)
														{
															if (&Local_667.f_220.f_95[iVar18] >= 32)
															{
																iVar0 = 0;
																Local_667.f_220.f_95[iVar18] = 0;
															}
															else
															{
																iVar0 = &Local_667.f_220.f_95[iVar18];
																Local_667.f_220.f_95[iVar18] = &Local_667.f_220.f_95[iVar18] + 1;
															}
															iVar24++;
															if (func_510(iVar0, &uVar21, &iVar20, &uVar19))
															{
																if (!func_511(iVar18, iVar20))
																{
																	if (func_493(iVar18, iVar0))
																	{
																		if (!func_512(iVar18, uVar21, iVar20, uVar19))
																		{
																		}
																		else
																		{
																			func_513(iVar18, iVar20);
																		}
																	}
																}
															}
														}
														iVar23++;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_313()
{
	fVar0 = func_514();
	if (Local_667.f_335.f_4)
	{
		return;
	}
	if (!func_228(&iVar1))
	{
		return;
	}
	if (func_188(Local_58[iVar1]->f_15, 1))
	{
		Local_667.f_335.f_4 = 1;
		return;
	}
	iVar2 = get_player_ped(player_id());
	if (func_515(iVar2, 0))
	{
		return;
	}
	fVar3 = vdist(get_entity_coords(iVar2, true, false), Local_667.f_15);
	fVar4 = Local_667.f_335.f_9;
	fVar5 = Local_667.f_335.f_10;
	if (func_188(Local_667.f_335.f_12, 2))
	{
		bVar6 = false;
		fVar7 = get_entity_speed(iVar2);
		fVar8 = (fVar0 * (1f / Local_667.f_335.f_7));
		if (fVar7 > 0f)
		{
			if (func_516(Local_667.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_667.f_335.f_6 < 1f)
			{
				Local_667.f_335.f_6 = (Local_667.f_335.f_6 + fVar8);
				if (Local_667.f_335.f_6 > 1f)
				{
					Local_667.f_335.f_6 = 1f;
				}
			}
		}
		else if (Local_667.f_335.f_6 > 0f)
		{
			Local_667.f_335.f_6 = (Local_667.f_335.f_6 - fVar8);
			if (Local_667.f_335.f_6 < 0f)
			{
				Local_667.f_335.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_667.f_335.f_5) * Local_667.f_335.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_254(&(Local_58[iVar1]->f_15), 1);
	}
	else if (_does_volume_exist(Local_667.f_335.f_11) && is_entity_in_volume(iVar2, Local_667.f_335.f_11, false, 0))
	{
		func_254(&(Local_58[iVar1]->f_15), 1);
	}
	else if (Local_667.f_335 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 2)
		{
			func_517(Local_667.f_335.f_13[iVar10], fVar5, 1082130432, 0, 0, 0, 0, 1);
			iVar10++;
		}
		if (func_518(&(Local_667.f_335.f_13), Local_667.f_335, Local_667.f_335.f_8))
		{
			func_254(&(Local_58[iVar1]->f_15), 1);
		}
	}
	if (func_188(Local_58[iVar1]->f_15, 1))
	{
		Local_667.f_335.f_4 = 1;
	}
}

void func_314()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_519(Local_13.f_40[iVar0], Local_667.f_367[iVar0], func_182(iVar0));
		iVar0++;
	}
}

bool func_315()
{
	bVar0 = true;
	if (bVar0 && !_unlock_is_unlocked(Local_667.f_14))
	{
		return false;
	}
	if (func_520())
	{
		return false;
	}
	if (func_521(get_player_index()))
	{
		return false;
	}
	return true;
}

void func_316()
{
	Local_667.f_19.f_40 = -1;
	Local_667.f_19.f_41 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_362(iVar0, 1))
		{
			Local_667.f_19.f_41 = (Local_667.f_19.f_41 || Local_58[iVar0]->f_1);
			Local_667.f_19.f_40 = (Local_667.f_19.f_40 && Local_58[iVar0]->f_1);
		}
		iVar0++;
	}
}

void func_317()
{
	if (Local_667.f_19 != Local_13.f_7)
	{
		Local_667.f_19 = Local_13.f_7;
	}
}

void func_318()
{
	if (!func_430(1024, 255))
	{
		if (func_522(func_382()))
		{
			func_449(8);
			func_431(1024);
		}
	}
}

void func_319()
{
	if (func_195() != 2)
	{
		return;
	}
	if (!func_523(255))
	{
		func_174(0);
		return;
	}
	if (!func_524(0, 150f, 255, 1))
	{
		func_174(0);
		return;
	}
	if (func_415(33554432, 0))
	{
		func_174(0);
		return;
	}
	if (Local_13.f_7 > 3)
	{
		func_174(0);
	}
	else if (Local_13.f_7 > 1)
	{
		if (!func_524(0, 50f, 255, 0))
		{
			func_174(0);
			return;
		}
		if (!func_525(0))
		{
			func_526(0, -89429847, 580546400, 0, "NB_CRASHED_WAGON_DRIVER_BLIP");
		}
	}
}

void func_320()
{
	if (func_195() != 2)
	{
		return;
	}
	if (func_415(4096, 0))
	{
		return;
	}
	if (!func_455(0) || !func_527(0, 1))
	{
	}
	if (!func_528(0, player_id(), 0, 1))
	{
		return;
	}
	func_529(151445061, 1, 0);
	func_431(4096);
}

void func_321()
{
	iVar0 = 2;
	while (iVar0 <= 6)
	{
		if ((func_295(iVar0) && func_296(iVar0)) && _0x083d497d57b7400f(func_305(iVar0)))
		{
			if (_0x61914209c36efddb(func_305(iVar0)) == 4 || !func_531(func_530(iVar0), get_entity_coords(func_305(iVar0), true, false), 0.1f, 1))
			{
				func_297(iVar0, 0);
			}
		}
		iVar0++;
	}
}

void func_322()
{
	if (!func_307())
	{
		return;
	}
	fVar0 = vdist(get_entity_coords(player_ped_id(), true, false), func_294());
	if (!func_430(1073741824, 255))
	{
		if (fVar0 > 250f)
		{
			func_431(1073741824);
		}
	}
	else if (fVar0 < (250f / 2f))
	{
		func_532(1073741824);
	}
}

void func_323()
{
	switch (func_381())
	{
		case 0:
			switch (func_195())
			{
				case 0:
				case 2:
					break;
				case 1:
					if (!func_192(-2147483648))
					{
						func_533(&iVar0, 178323656, -1497.022f, -552.8489f, 131.8527f, 3);
						if (func_534(&iVar0))
						{
							set_entity_visible(iVar0, false);
							func_449(-2147483648);
						}
					}
					break;
			}
			break;
	}
}

int func_324(int iParam0, int iParam1)
{
	if (does_entity_exist(&(Local_667.f_101[iParam0]->f_5[iParam1])))
	{
		if (network_has_control_of_entity(&(Local_667.f_101[iParam0]->f_5[iParam1])))
		{
			delete_object(Local_667.f_101[iParam0]->f_5[iParam1]);
			Local_667.f_101[iParam0]->f_5[iParam1] = 0;
			return 1;
		}
	}
	return 0;
}

void func_325()
{
	if (func_195() == 2)
	{
		func_535();
	}
}

void func_326()
{
	if (func_307())
	{
		return;
	}
	if (!func_536())
	{
		return;
	}
	if (!func_415(256, 0))
	{
		func_431(256);
	}
	func_433();
}

void func_327()
{
	if (func_195() != 2)
	{
		return;
	}
	iVar0 = func_301(0);
	if (!func_415(4, 0))
	{
		if (func_537(1))
		{
			func_431(4);
		}
	}
	else if (network_has_control_of_entity(iVar0))
	{
		if (!_0x3ab6c7b0bb0df4b1(iVar0, func_194()))
		{
			func_431(8);
		}
	}
	if (!func_430(32, 255))
	{
		if (func_524(0, 10f, 255, 0))
		{
			func_431(32);
		}
	}
	else if (!func_524(0, 10f, 255, 0))
	{
		func_532(32);
	}
}

void func_328()
{
	iVar0 = func_301(0);
	iVar1 = func_194();
	if (_0x3ab6c7b0bb0df4b1(iVar0, iVar1))
	{
		if (_network_has_control_of_anim_scene(iVar1))
		{
			remove_anim_scene_entity(iVar1, "male", iVar0);
		}
	}
	else
	{
		func_538();
		if (!func_415(16, 0))
		{
			return;
		}
		if (!network_has_control_of_entity(iVar0))
		{
			return;
		}
		if (!func_415(134217728, 1))
		{
			func_421(131072);
			func_431(134217728);
		}
		else if (!func_415(268435456, 1))
		{
			if (!func_539(0))
			{
				func_431(268435456);
			}
		}
	}
}

void func_329()
{
	iVar0 = func_301(0);
	iVar1 = func_194();
	if (_0x3ab6c7b0bb0df4b1(iVar0, iVar1))
	{
		if (_network_has_control_of_anim_scene(iVar1))
		{
			remove_anim_scene_entity(iVar1, "male", iVar0);
		}
	}
	else if (!func_415(512, 0))
	{
		if (func_540(iVar0, 713668775, 1, 0))
		{
			if ((func_419(4) && Local_13.f_7.f_11 != 0) && get_time_difference(Local_13.f_7.f_11, get_network_time_accurate()) >= 2000)
			{
				task_follow_nav_mesh_to_coord(iVar0, func_541(), 1f, -1, 0.25f, 1, 40000f);
				func_431(512);
			}
		}
	}
	else if (!func_415(16384, 0))
	{
		if (func_542(iVar0, func_541(), 1) < 5f)
		{
			_task_move_in_traffic(iVar0, 1f, 0, 0);
			func_431(16384);
		}
	}
}

void func_330()
{
	if (_0x3ab6c7b0bb0df4b1(func_301(0), func_194()))
	{
		if (_network_has_control_of_anim_scene(func_194()))
		{
			remove_anim_scene_entity(func_194(), "male", func_301(0));
		}
	}
	else
	{
		if (!func_430(67108864, 255))
		{
			if (func_192(4))
			{
				if (!func_420(256))
				{
					func_543(0, 256, 0, -417894478);
				}
				else
				{
					func_431(67108864);
				}
			}
			else if (!func_420(65536))
			{
				func_543(0, 65536, 0, -417894478);
			}
			else
			{
				func_431(67108864);
			}
		}
		if (!is_ped_fleeing(func_301(0)))
		{
			if (Local_13.f_7.f_3 == 0)
			{
				if (func_430(33554432, 255))
				{
					Local_13.f_7.f_3 = get_player_ped(player_id());
				}
			}
			else if (func_540(func_301(0), 518218985, 1, 0))
			{
				_task_flee_from_ped(func_301(0), Local_13.f_7.f_3, 0f, 0f, 0f, 100f, -1, 0, 1077936128, 0);
			}
		}
	}
}

void func_331()
{
	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (func_459(func_458(iVar0), &Var1))
		{
			if (does_entity_exist(Var1))
			{
				_0xad8f2424c6e1e3a8(Var1);
			}
		}
		iVar0++;
	}
}

void func_332(int iParam0, int iParam1)
{
	func_272(&(Local_667.f_367[iParam0]->f_5), iParam1);
}

bool func_333(int iParam0, int iParam1)
{
	return func_188(Local_667.f_367[iParam0]->f_5, iParam1);
}

int func_334(int iParam0)
{
	return func_301(iParam0);
}

void func_335(int iParam0, bool bParam1)
{
	Var1.f_4 = 1;
	Var1.f_7 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_544(&(Local_667.f_367[iParam0]->f_6[iVar0])))
		{
			func_545(Local_667.f_367[iParam0]->f_6[iVar0], 1, 1);
			if (bParam1)
			{
				_copy_memory(Local_667.f_367[iParam0]->f_6[iVar0], &Var1, 8);
			}
		}
		iVar0++;
	}
	func_332(iParam0, 2);
}

int func_336(var uParam0, var uParam1)
{
	return uParam0;
}

int func_337(int iParam0)
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

int func_338(struct<2> Param0)
{
	return func_546(Param0);
}

void func_339(struct<2> Param0, var uParam2)
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
	switch (func_336(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_548(func_547(Param0));
			iVar5 = func_549(iVar4);
			if (!func_550(iVar5, 0))
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

int func_340(int iParam0, int iParam1)
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
			func_32(&Var1, iVar32, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar33++;
	}
	return -1;
}

void func_341(int iParam0)
{
	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_551(&Var0);
}

var func_342(int iParam0)
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

var func_343(int iParam0)
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

var func_344(int iParam0)
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

int func_345(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_552())
	{
		return 0;
	}
	_remove_imap(iParam0);
	return 0;
}

var func_346()
{
	return Local_667.f_3;
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
	func_204(uParam0, 0);
	func_204(uParam0, 1);
	func_204(uParam0, 3);
	func_202(uParam0);
}

void func_350(var uParam0)
{
	func_203(uParam0);
	func_553(uParam0, 0, 3);
}

void func_351(var uParam0)
{
	func_204(uParam0, 0);
	func_205(uParam0, 0);
	func_205(uParam0, 1);
	func_205(uParam0, 2);
}

void func_352(var uParam0)
{
	func_204(uParam0, 1);
	func_202(uParam0);
}

void func_353(var uParam0)
{
	func_204(uParam0, 2);
	func_205(uParam0, 3);
}

void func_354(var uParam0)
{
	func_204(uParam0, 3);
	func_205(uParam0, 4);
}

void func_355(var uParam0)
{
	func_205(uParam0, 0);
	func_205(uParam0, 1);
}

void func_356(var uParam0)
{
	func_205(uParam0, 2);
	func_205(uParam0, 3);
}

void func_357(var uParam0)
{
	func_205(uParam0, 4);
	func_205(uParam0, 5);
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

bool func_362(int iParam0, bool bParam1)
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

int func_363(int iParam0)
{
	return iParam0;
}

void func_364(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_333(iParam0, 4))
		{
			func_554(iParam0, 4);
		}
	}
	else if (func_333(iParam0, 4))
	{
		func_332(iParam0, 4);
	}
}

void func_365(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		func_554(iParam0, 16);
	}
	else
	{
		func_332(iParam0, 16);
	}
}

void func_366(int iParam0, float fParam1)
{
	if (fParam1 > 0f)
	{
		Local_667.f_367[iParam0]->f_2 = fParam1;
	}
}

void func_367(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Local_667.f_367[iParam0]->f_6[iParam1]->f_2 = sParam2;
	Local_667.f_367[iParam0]->f_6[iParam1]->f_3 = iParam3;
	Local_667.f_367[iParam0]->f_6[iParam1]->f_6 = iParam4;
	Local_667.f_367[iParam0]->f_6[iParam1]->f_4 = iParam5;
	Local_667.f_367[iParam0]->f_6[iParam1]->f_5 = iParam6;
	Local_667.f_367[iParam0]->f_6[iParam1]->f_7 = iParam7;
	Local_667.f_367[iParam0]->f_6[iParam1]->f_1 = iParam8;
	if (func_555(iParam0))
	{
		func_556(iParam0, iParam1, 16);
	}
}

void func_368(int iParam0, int iParam1)
{
	if (Local_667.f_367[iParam0]->f_4 == iParam1)
	{
		return;
	}
	Local_667.f_367[iParam0]->f_4 = iParam1;
	func_554(iParam0, 8);
}

void func_369(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (_0x375f5870a7b8bec1(Local_667.f_367[iParam0]->f_6[iParam1]->f_2))
	{
		return;
	}
	if (!bParam2)
	{
		func_556(iParam0, iParam1, 1);
	}
	else
	{
		func_557(iParam0, iParam1, 1);
	}
	if (bParam3 && func_555(iParam0))
	{
		func_558(&(Local_667.f_367[iParam0]->f_6[iParam1]), bParam2, 1, 1);
	}
}

void func_370(int iParam0, int iParam1)
{
	Local_667.f_367[iParam0]->f_6[iParam1]->f_2 = "";
	Local_667.f_367[iParam0]->f_6[iParam1]->f_3 = 0;
	Local_667.f_367[iParam0]->f_6[iParam1]->f_6 = 0;
	Local_667.f_367[iParam0]->f_6[iParam1]->f_4 = 1;
	Local_667.f_367[iParam0]->f_6[iParam1]->f_5 = 0;
	Local_667.f_367[iParam0]->f_6[iParam1]->f_7 = -1;
	Local_667.f_367[iParam0]->f_6[iParam1]->f_1 = 0;
	if (func_544(&(Local_667.f_367[iParam0]->f_6[iParam1])))
	{
		func_545(Local_667.f_367[iParam0]->f_6[iParam1], 1, 1);
	}
}

void func_371(var uParam0)
{
	func_559(uParam0, 0);
	func_560(uParam0, 0);
	func_372(uParam0, 1);
	func_561(uParam0, 1);
	func_562(uParam0, 0);
	func_563(uParam0, 1);
	func_564(uParam0, 1, 1, 1);
}

void func_372(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_272(&(uParam0->f_2), 256);
	}
	else
	{
		func_254(&(uParam0->f_2), 256);
	}
}

void func_373(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_272(&(uParam0->f_2), 4);
	}
	else
	{
		func_254(&(uParam0->f_2), 4);
	}
}

void func_374(var uParam0)
{
	func_566(uParam0, (func_565(uParam0) - 6f));
	func_567(uParam0, 1);
}

void func_375(var uParam0)
{
	func_559(uParam0, 0);
	func_560(uParam0, 0);
	func_372(uParam0, 0);
	func_562(uParam0, 0);
	func_564(uParam0, 1, 1, 1);
}

void func_376(var uParam0)
{
	func_568(uParam0, 1);
	func_569(uParam0, 1);
	func_570(uParam0, 1);
}

void func_377(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_272(&(uParam0->f_2), 131072);
	}
	else
	{
		func_254(&(uParam0->f_2), 131072);
	}
}

void func_378(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_254(uParam0, 4);
	}
	else
	{
		func_272(uParam0, 4);
	}
}

bool func_379(int iParam0, var uParam1)
{
	*uParam1 = floor((to_float(iParam0 * 10) * 0.03125f));
	uParam1->f_2 = (iParam0 * 10 % 32);
	iVar0 = (32 - uParam1->f_2);
	if (iVar0 < 10)
	{
		uParam1->f_1 = *uParam1 + 1;
		uParam1->f_3 = (9 - iVar0);
	}
	else
	{
		uParam1->f_1 = *uParam1;
		uParam1->f_3 = uParam1->f_2 + 9;
	}
	return (((*uParam1 > -1 && uParam1->f_1 > -1) && *uParam1 < 3) && uParam1->f_1 < 3);
}

int func_380(int iParam0, int iParam1)
{
	iVar0 = 0;
	set_bit(&iVar0, 31);
	iVar0 = shift_right(iVar0, (31 - iParam1));
	iVar0 ^= -1;
	iVar0 = shift_left(iVar0, iParam0);
	return iVar0;
}

int func_381()
{
	return Local_667.f_2;
}

int func_382()
{
	switch (func_195())
	{
		case 0:
		case 2:
			switch (func_233())
			{
				case 0:
					return -392829098;
				case 1:
					return 1603716279;
				case 2:
					return 1565126061;
				case 3:
					return 941442568;
				case 4:
					return 1135560775;
				case 5:
					return 1465762285;
				case 6:
					return -897008046;
				default:
					break;
			}
			break;
		case 1:
			switch (func_233())
			{
				case 0:
					return -27315089;
				case 1:
					return -1868057871;
				case 2:
					return 1742487931;
				case 3:
					return 147602269;
				default:
					break;
			}
			break;
	}
	return 1465762285;
}

int func_383(int iParam0)
{
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

void func_384(int iParam0, int iParam1, int iParam2)
{
	Local_667.f_101[iParam0]->f_5[iParam1]->f_2 = iParam2;
}

void func_385(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, bool bParam8)
{
	Local_667.f_101[iParam0]->f_5[iParam1]->f_7 = { vParam2 };
	Local_667.f_101[iParam0]->f_5[iParam1]->f_10 = { vParam5 };
	Local_667.f_101[iParam0]->f_5[iParam1]->f_13 = bParam8;
}

void func_386(int iParam0, int iParam1)
{
	func_254(&(Local_667.f_101[iParam0]->f_5[iParam1]->f_1), 16);
}

void func_387(int iParam0, int iParam1)
{
	set_bit(&(Local_667.f_101[iParam0]->f_4), iParam1);
}

void func_388(int iParam0, int iParam1)
{
	func_254(&(Local_667.f_101[iParam0]->f_5[iParam1]->f_1), 4);
}

void func_389(int iParam0, int iParam1)
{
	func_254(&(Local_667.f_101[iParam0]->f_5[iParam1]->f_1), 2);
}

int func_390(int iParam0)
{
	if (!func_189(iParam0))
	{
		return 0;
	}
	return Global_1132288->f_1[iParam0]->f_3;
}

bool func_391(int iParam0, bool bParam1, bool bParam2)
{
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_667.f_15 };
	iVar7 = 0;
	iVar8 = func_445(iParam0);
	iVar9 = func_571(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!network_does_network_id_exist(&(Local_13.f_23[iParam0])))
		{
			iVar9 = func_571(iParam0);
			fVar0 = func_572(iParam0);
			if (!func_188(Local_667.f_74.f_7[iParam0]->f_2, 2))
			{
				vVar1 = { _get_object_offset_from_coords(vVar4, 0f, func_573(iParam0)) };
			}
			else
			{
				vVar1 = { func_573(iParam0) };
			}
			if (!func_574(Local_13.f_23[iParam0], iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || _is_this_model_a_horse(iVar8)), 1, 1))
			{
				*bParam1 = 1;
			}
			else
			{
				iVar7 = net_to_ped(&(Local_13.f_23[iParam0]));
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
						_update_ped_variation(iVar7, func_175(iParam0, 1), true, true, true, false);
					}
					else if (_is_this_model_a_horse(iVar8))
					{
						if (_0xa0bc8faed8cfeb3c(iVar7))
						{
						}
						func_575(iVar7, 1);
					}
					if (func_576(iParam0))
					{
						set_ped_can_be_targetted(iVar7, false);
					}
					if (_is_this_model_a_horse(iVar8))
					{
						if (func_577(iParam0))
						{
							if (func_576(iParam0))
							{
							}
						}
						else
						{
							set_ped_can_be_targetted(iVar7, false);
						}
					}
					if (func_392(iParam0))
					{
						if (network_request_control_of_network_id(&(Local_13.f_23[iParam0])))
						{
							_0x7182edda1ee7db5a(&(Local_13.f_23[iParam0]));
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
		else if (_0xa0bc8faed8cfeb3c(net_to_ped(&(Local_13.f_23[iParam0]))))
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

bool func_392(int iParam0)
{
	return func_175(iParam0, 128);
}

int func_393(int iParam0, int iParam1)
{
	return Local_667.f_101[iParam0]->f_5[iParam1]->f_2;
}

bool func_394(int iParam0, int iParam1)
{
	return func_188(Local_667.f_101[iParam0]->f_5[iParam1]->f_1, 64);
}

bool func_395(int iParam0, int iParam1)
{
	return func_188(Local_667.f_101[iParam0]->f_5[iParam1]->f_1, 16);
}

Vector3 func_396(int iParam0, int iParam1)
{
	return Local_667.f_101[iParam0]->f_5[iParam1]->f_7;
}

bool func_397(int iParam0, int iParam1)
{
	return Local_667.f_101[iParam0]->f_5[iParam1]->f_13;
}

bool func_398(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_578(*uParam0, 0f, 0f, 0f))
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

bool func_399(int iParam0, int iParam1)
{
	return is_bit_set(Local_667.f_101[iParam0]->f_3, iParam1);
}

bool func_400(int iParam0, int iParam1)
{
	return func_188(Local_667.f_101[iParam0]->f_5[iParam1]->f_1, 1);
}

bool func_401(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_579(iParam1))
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

bool func_402(int iParam0, int iParam1)
{
	return func_188(Local_667.f_101[iParam0]->f_5[iParam1]->f_1, 2);
}

bool func_403(int iParam0, int iParam1)
{
	return func_188(Local_667.f_101[iParam0]->f_5[iParam1]->f_1, 4);
}

bool func_404(int iParam0, int iParam1)
{
	return func_188(Local_667.f_101[iParam0]->f_5[iParam1]->f_1, 128);
}

Vector3 func_405(int iParam0, int iParam1)
{
	return Local_667.f_101[iParam0]->f_5[iParam1]->f_10;
}

bool func_406(int iParam0, int iParam1, int iParam2)
{
	return func_188(Local_667.f_101[iParam0]->f_5[iParam1]->f_1, iParam2);
}

float func_407(float fParam0)
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

Vector3 func_408(vector3 vParam0)
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

bool func_409(int iParam0, int iParam1)
{
	return func_188(Local_667.f_101[iParam0]->f_5[iParam1]->f_1, 256);
}

void func_410(int iParam0, int iParam1, bool bParam2)
{
	freeze_entity_position(&(Local_667.f_101[iParam0]->f_5[iParam1]), bParam2);
}

bool func_411(int iParam0, int iParam1)
{
	return func_188(Local_667.f_101[iParam0]->f_5[iParam1]->f_1, 512);
}

void func_412(var uParam0, int iParam1)
{
	switch (uParam0->f_2)
	{
		case 0:
			if (network_is_player_active(uParam0->f_1))
			{
				uParam0->f_2 = 1;
			}
			break;
		case 1:
			if (!func_580(iParam1))
			{
			}
			else
			{
				uParam0->f_2 = 2;
			}
			break;
		case 2:
			if (func_581(iParam1))
			{
			}
			else
			{
				uParam0->f_1 = 255;
				*uParam0 = func_583(iParam1, func_582(Local_13.f_40.f_4, iParam1), func_229(iParam1));
				func_122(&(Local_13.f_40.f_4), iParam1, 3);
				uParam0->f_2 = 0;
			}
			break;
	}
}

bool func_413(int iParam0)
{
	return func_188(Local_667.f_19.f_40, iParam0);
}

void func_414(int iParam0)
{
	if (Local_13.f_7 != iParam0)
	{
		Local_13.f_7 = iParam0;
	}
}

bool func_415(int iParam0, bool bParam1)
{
	if (func_188(Local_667.f_19.f_41, iParam0))
	{
		if (bParam1)
		{
			if (!func_430(iParam0, 255))
			{
				func_431(iParam0);
			}
		}
		return true;
	}
	return false;
}

void func_416()
{
	if (func_195() != 2)
	{
		return;
	}
	if (Local_13.f_7.f_13 == 0 || get_time_difference(Local_13.f_7.f_13, get_network_time_accurate()) >= 7000)
	{
		if (!func_539(0))
		{
			iVar0 = 1;
			switch (network_get_random_int_ranged(0, 4))
			{
				case 1:
					iVar0 = 2;
					break;
				case 2:
					iVar0 = 4;
					break;
				case 3:
					iVar0 = 8;
					break;
			}
			func_421(iVar0);
			Local_13.f_7.f_13 = get_network_time_accurate();
		}
	}
}

int func_417(int iParam0, int iParam1)
{
	return func_584(iParam0, iParam1);
}

bool func_418(int iParam0, int iParam1)
{
	return &Local_13.f_40[iParam0] == iParam1;
}

bool func_419(int iParam0)
{
	return func_188(Local_13.f_7.f_1, iParam0);
}

bool func_420(int iParam0)
{
	return func_188(Local_13.f_7.f_4, iParam0);
}

void func_421(int iParam0)
{
	if (func_420(iParam0))
	{
		return;
	}
	uVar0 = func_585(get_entity_coords(func_301(0), true, false), 0f, 0f, 0f, 30f, 30f, 20f, 665633627, 0, 8);
	Var1 = { func_586(1) };
	Var1.f_11 = iParam0;
	func_587(&Var1, uVar0);
}

void func_422(var uParam0)
{
	func_588(uParam0, 0f);
}

void func_423(int iParam0)
{
	func_254(&(Local_13.f_7.f_1), iParam0);
}

void func_424()
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	if (Local_13.f_7.f_14 > 3)
	{
		return;
	}
	if (!func_442(&(Local_13.f_7.f_5)) || func_589(&(Local_13.f_7.f_5)) > 10000)
	{
		switch (Local_13.f_7.f_14)
		{
			case 0:
				iVar0 = 32768;
				break;
			case 1:
				iVar0 = 262144;
				break;
			case 2:
				iVar0 = 524288;
				break;
			case 3:
				iVar0 = 1048576;
				break;
		}
		Local_13.f_7.f_14++;
		func_421(iVar0);
		func_422(&(Local_13.f_7.f_5));
	}
}

void func_425(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_426(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_427(int* iParam0, int iParam1)
{
	if (!get_event_data(1, iParam1, iParam0, 15))
	{
		return false;
	}
	if (iParam0->f_4.f_1 != Local_667.f_1)
	{
		return false;
	}
	if (iParam0->f_4 != iVar663)
	{
		return false;
	}
	if (iParam0->f_4.f_2 != Local_667.f_2)
	{
		return false;
	}
	if (iParam0->f_4.f_3 != Local_667.f_3)
	{
		return false;
	}
	return true;
}

void func_428(int iParam0)
{
	iVar0 = iParam0->f_9;
	switch (iVar0)
	{
		case 1:
			func_543(0, iParam0->f_11, 0, -417894478);
			break;
		case 2:
			iVar5 = func_590();
			if (!func_591(iVar5, &uVar1))
			{
			}
			break;
	}
}

bool func_429(int iParam0, var uParam1)
{
	if (!is_entity_an_object(iParam0))
	{
		return false;
	}
	iVar0 = get_object_index_from_entity_index(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_295(iVar1) && iVar0 == func_305(iVar1))
		{
			*uParam1 = iVar1;
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_430(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = participant_id_to_int();
	}
	if (!func_362(iParam1, 1))
	{
		return false;
	}
	if (func_188(Local_58[iParam1]->f_1, iParam0))
	{
		return true;
	}
	return false;
}

void func_431(int iParam0)
{
	if (!func_228(&iVar0))
	{
		return;
	}
	func_254(&(Local_58[iVar0]->f_1), iParam0);
}

bool func_432()
{
	return func_70(2);
}

void func_433()
{
	if (!func_134(32, 255))
	{
		func_592(Local_667.f_1, Local_667.f_3);
		if (!func_134(1024, 255))
		{
			func_593(Local_667.f_1);
			func_151(1024);
		}
		iVar0 = func_340(Local_667.f_1, Local_667.f_2);
		func_594(iVar0);
		func_595(iVar0);
		func_149(2);
		func_596(Local_667.f_9);
		func_597(Local_667.f_1);
		func_598(Local_667.f_1, Local_667.f_2, Local_667.f_3);
		func_151(32);
	}
}

bool func_434()
{
	return func_70(8);
}

void func_435()
{
	if (!func_70(2))
	{
		return;
	}
	func_149(8);
}

bool func_436()
{
	return func_70(16);
}

void func_437(bool bParam0)
{
	if (!func_70(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_70(256))
		{
			func_187(Local_667.f_18, 0);
			func_149(256);
		}
	}
	func_149(16);
}

bool func_438(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

void func_439()
{
	Var0 = { func_586(2) };
	if (!func_599(&uVar15, 20f, 0))
	{
		return;
	}
	func_587(&Var0, uVar15);
}

void func_440()
{
	if (!_does_scenario_point_exist(Local_667.f_19.f_50))
	{
		return;
	}
	if (_0xfb7cf1de938a3e22(Local_667.f_19.f_50))
	{
		return;
	}
	_0x8245c1f3262f4ac2(Local_667.f_19.f_50);
}

int func_441(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_552())
	{
		return 0;
	}
	_request_imap(iParam0);
	return 0;
}

bool func_442(var uParam0)
{
	return func_600(*uParam0, 1);
}

void func_443(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_444(var uParam0, float fParam1)
{
	if (!func_442(uParam0))
	{
		return false;
	}
	if (func_601(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_445(int iParam0)
{
	return Local_667.f_74.f_7[iParam0]->f_3;
}

bool func_446(int iParam0)
{
	return func_399(0, iParam0);
}

bool func_447(int iParam0)
{
	return func_400(0, iParam0);
}

void func_448(int iParam0, int iParam1, bool bParam2)
{
	iVar2 = func_445(iParam0);
	bVar3 = func_362(iParam1, 1);
	if (!is_bit_set(Local_667.f_74.f_5, iParam0))
	{
		if (network_does_network_id_exist(&(Local_13.f_23[iParam0])))
		{
			iVar1 = net_to_ped(&(Local_13.f_23[iParam0]));
			if (!does_entity_exist(iVar1))
			{
				return;
			}
			Local_667.f_74.f_7[iParam0] = iVar1;
			if (bVar3)
			{
				if (is_entity_dead(iVar1) || is_entity_dead(player_ped_id()))
				{
					Local_58[iParam1]->f_2.f_2[iParam0] = -1f;
				}
				else
				{
					Local_58[iParam1]->f_2.f_2[iParam0] = vdist(get_entity_coords(iVar1, true, false), get_entity_coords(player_ped_id(), true, false));
				}
			}
			if (network_is_host_of_this_script())
			{
				if (func_392(iParam0))
				{
					if (network_does_network_id_exist(&(Local_13.f_23[iParam0])))
					{
						if (network_request_control_of_network_id(&(Local_13.f_23[iParam0])))
						{
							_0x7182edda1ee7db5a(&(Local_13.f_23[iParam0]));
						}
					}
				}
			}
			if (does_entity_exist(iVar1))
			{
				if (network_has_control_of_entity(iVar1))
				{
					func_602(iVar1, 1f, 0);
					sVar0 = func_603(iParam0);
					if (!_0x375f5870a7b8bec1(sVar0))
					{
						func_604(iVar1, sVar0, 1);
					}
				}
				if (func_576(iParam0))
				{
					set_ped_can_be_targetted(iVar1, false);
				}
				if (_is_this_model_a_horse(iVar2))
				{
					if (func_577(iParam0))
					{
						if (func_576(iParam0))
						{
						}
					}
					else
					{
						set_ped_can_be_targetted(iVar1, false);
					}
				}
				set_bit(&(Local_667.f_74.f_5), iParam0);
				if (bParam2)
				{
					func_605(iParam0);
				}
			}
		}
	}
}

void func_449(int iParam0)
{
	func_254(&(Local_667.f_19.f_42), iParam0);
}

bool func_450(int iParam0)
{
	return func_606(0, iParam0);
}

Vector3 func_451()
{
	switch (func_382())
	{
		case -392829098:
			return -0.075f, 0f, 0.05f;
		case 1603716279:
			return -0.1f, 0f, 0.05f;
		case 1565126061:
			return -0.075f, 0f, 0.05f;
		case 941442568:
			return -0.125f, 0f, 0.05f;
		case 1135560775:
			return -0.1f, 0f, 0.05f;
		case 1465762285:
			return -0.075f, 0f, 0.05f;
		case -897008046:
			return -0.075f, 0f, 0.05f;
		case -27315089:
			return -0.06f, -0.015f, 0.065f;
		case -1868057871:
			return 0f, 0f, 0f;
		case 1742487931:
			return 0.05f, -0.01f, 0.06f;
		case 147602269:
			return 0f, 0f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_452()
{
	switch (func_382())
	{
		case -392829098:
			return 90f, 90f, get_random_float_in_range(-10f, 10f);
		case 1603716279:
			return 90f, 90f, get_random_float_in_range(-5f, 5f);
		case 1565126061:
			return 90f, 90f, get_random_float_in_range(-20f, 20f);
		case 941442568:
			return 90f, 90f, get_random_float_in_range(-10f, 10f);
		case 1135560775:
			return 90f, 90f, get_random_float_in_range(-5f, 5f);
		case 1465762285:
			return 90f, 90f, get_random_float_in_range(-20f, 20f);
		case -897008046:
			return 90f, 90f, get_random_float_in_range(-20f, 20f);
		case -27315089:
			return -10f, 72.5f, -65f;
		case -1868057871:
			return 0f, 0f, get_random_float_in_range(80f, 100f);
		case 1742487931:
			return -10f, -72.5f, 65f;
		case 147602269:
			return 0f, 0f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_453(int iParam0, int iParam1)
{
	return does_entity_exist(&(Local_667.f_101[iParam0]->f_5[iParam1]));
}

bool func_454(int iParam0, int iParam1)
{
	return network_has_control_of_entity(&(Local_667.f_101[iParam0]->f_5[iParam1]));
}

bool func_455(int iParam0)
{
	return does_entity_exist(&(Local_667.f_74.f_7[iParam0]));
}

bool func_456(int iParam0, var uParam1)
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

var func_457(int iParam0, int iParam1)
{
	return &(Local_667.f_101[iParam0]->f_5[iParam1]);
}

int func_458(int iParam0)
{
	return iParam0;
}

bool func_459(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = func_301(iParam0);
	if (does_entity_exist(*uParam1))
	{
		return true;
	}
	return false;
}

void func_460(var uParam0, int iParam1)
{
	set_ped_config_flag(iParam1, 168, true);
	_0xbb1e41dd3d3c6250(iParam1, "SpAggroDefault", 0);
	decor_set_bool(iParam1, "UsesTracker", true);
}

void func_461(int iParam0)
{
	if (!func_228(&iVar0))
	{
		return;
	}
	func_483(&(Local_58[iVar0]->f_6), 0, iParam0);
}

struct<2> func_462(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_607(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_608(iParam1, iVar4) };
	if (!_stat_id_is_valid(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_463()
{
	Local_667.f_74.f_6 = 0;
	Local_667.f_74.f_2 = 0;
	Local_667.f_74.f_1 = -1;
}

void func_464()
{
	func_232(&(Local_667.f_220.f_72), 2, 0);
	func_232(&(Local_667.f_220.f_72), 1, 0);
	func_232(&(Local_667.f_220.f_72), 4, 0);
	func_232(&(Local_667.f_220.f_72), 5, 0);
	func_232(&(Local_667.f_220.f_72), 8, -1);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		_0xde544b7ec0c187cc(Local_667.f_220.f_66[iVar0]);
		_0x20f4cb76689acdbc(Local_667.f_220.f_70[iVar0]);
		_0xde544b7ec0c187cc(Local_667.f_220.f_68[iVar0]);
		func_609(iVar0);
		iVar0++;
	}
}

void func_465()
{
	iVar1 = 0;
	iVar2 = func_610(0, 0);
	if (!does_entity_exist(iVar2) || !is_entity_a_ped(iVar2))
	{
		func_611();
	}
	else
	{
		iVar1 = get_ped_index_from_entity_index(iVar2);
	}
	bVar3 = false;
	Local_667.f_367.f_40 = 0;
	Local_667.f_367.f_41 = -1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!bVar3 && does_entity_exist(iVar1))
		{
			if (func_612(func_182(iVar0), iVar1))
			{
				bVar3 = true;
			}
		}
		iVar0++;
	}
	if (!bVar3)
	{
		func_611();
	}
}

void func_466(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_667.f_74.f_2 = (Local_667.f_74.f_2 || Local_58[iParam0]->f_2);
		Local_667.f_74.f_1 = (Local_667.f_74.f_1 && Local_58[iParam0]->f_2);
		Local_667.f_74.f_6 = (Local_667.f_74.f_6 || Local_58[iParam0]->f_2.f_1);
	}
}

void func_467(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		func_613(&(Local_667.f_220.f_72), &(Local_58[iParam0]->f_6), 2);
		func_613(&(Local_667.f_220.f_72), &(Local_58[iParam0]->f_6), 1);
		func_613(&(Local_667.f_220.f_72), &(Local_58[iParam0]->f_6), 4);
		func_613(&(Local_667.f_220.f_72), &(Local_58[iParam0]->f_6), 5);
		func_613(&(Local_667.f_220.f_72), &(Local_58[iParam0]->f_6), 6);
		func_613(&(Local_667.f_220.f_72), &(Local_58[iParam0]->f_6), 7);
		func_613(&(Local_667.f_220.f_72), &(Local_58[iParam0]->f_6), 0);
		func_613(&(Local_667.f_220.f_72), &(Local_58[iParam0]->f_6), 3);
		func_614(&(Local_667.f_220.f_72), &(Local_58[iParam0]->f_6), 8);
		iVar0 = 0;
		while (iVar0 < 1)
		{
			_0xffddf802279be128(Local_58[iParam0]->f_6.f_5[iVar0], Local_667.f_220.f_66[iVar0], Local_667.f_220.f_66[iVar0]);
			_0xffddf802279be128(Local_58[iParam0]->f_6.f_5[iVar0], Local_667.f_220.f_66[iVar0], Local_667.f_220.f_68[iVar0]);
			_0xe4abe20dce7c7cfe(Local_58[iParam0]->f_6.f_5[iVar0], Local_667.f_220.f_66[iVar0], Local_667.f_220.f_70[iVar0]);
			func_615(func_458(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_468(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		Local_58[iParam2]->f_15 = (Local_58[iParam2]->f_15 || Local_58[iParam0]->f_15);
	}
}

void func_469(int iParam0, bool bParam1, int iParam2)
{
	if (!bParam1)
	{
		return;
	}
	Local_667.f_367.f_40 = (Local_667.f_367.f_40 || Local_58[iParam0]->f_16.f_2);
	Local_667.f_367.f_41 = (Local_667.f_367.f_41 && Local_58[iParam0]->f_16.f_2);
	func_616(iParam0);
}

int func_470(int iParam0)
{
	return iParam0;
}

int func_471(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam0) || !does_entity_exist(iParam1))
	{
		return 0;
	}
	fVar0 = vdist(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	Local_58[iParam3]->f_2.f_2[iParam2] = fVar0;
	if (fVar0 > Local_667.f_74.f_7[iParam2]->f_9)
	{
		return 0;
	}
	return 1;
}

bool func_472(int iParam0)
{
	return true;
}

void func_473(int iParam0, int iParam1)
{
	func_272(&(Local_667.f_74.f_7[iParam0]->f_2), iParam1);
}

bool func_474(int iParam0, int iParam1)
{
	if (!func_362(iParam1, 0))
	{
		if (!func_228(&iParam1))
		{
			return false;
		}
	}
	return func_188(Local_58[iParam1]->f_2, iParam0);
}

void func_475(int iParam0)
{
	if (!func_228(&iVar0))
	{
		return;
	}
	func_254(&(Local_58[iVar0]->f_2), iParam0);
}

void func_476(int iParam0)
{
	if (!func_228(&iVar0))
	{
		return;
	}
	func_272(&(Local_58[iVar0]->f_2), iParam0);
}

void func_477()
{
	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	if (!func_228(&iVar15))
	{
		return;
	}
	iVar16 = player_id();
	if (!network_is_player_active(iVar16))
	{
		return;
	}
	iVar17 = get_player_ped(iVar16);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar14 = func_458(iVar0);
		if (!func_478(iVar14))
		{
		}
		else if (!func_479(iVar14, &Var1))
		{
		}
		else
		{
			if (!is_entity_dead(Var1) && is_bullet_in_area(get_entity_coords(Var1, true, false), 4f, true))
			{
				set_bit(&(Local_667.f_220.f_65), iVar14);
			}
			if (func_495(iVar14, iVar15))
			{
			}
			else if (has_entity_been_damaged_by_entity(Var1, iVar17, 0, 0))
			{
				func_617(iVar14);
				func_618(iVar14);
			}
		}
		iVar0++;
	}
}

bool func_478(int iParam0)
{
	return !func_481(&(Local_667.f_220.f_72), 5, iParam0);
}

bool func_479(int iParam0, var uParam1)
{
	if (!is_bit_set(Local_667.f_220.f_90, iParam0))
	{
		return false;
	}
	*uParam1 = &Local_667.f_220.f_76[iParam0];
	uParam1->f_1 = Local_667.f_220.f_76[iParam0]->f_1;
	uParam1->f_2 = Local_667.f_220.f_76[iParam0]->f_2;
	if (!does_entity_exist(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_480(var uParam0, int iParam1)
{
	if (!func_619(iParam1))
	{
		iVar0 = player_ped_id();
		if (uParam0->f_2 <= 25f && get_player_current_stealth_noise(player_id()) >= 4f)
		{
			if (is_ped_in_cover(iVar0, 0, 0) || is_ped_going_into_cover(iVar0))
			{
			}
			else
			{
				return true;
			}
		}
	}
	if (func_620(*uParam0, &(Local_667.f_220.f_32), &uVar1, uParam0->f_2))
	{
		return true;
	}
	if (is_entity_touching_entity(player_ped_id(), *uParam0))
	{
		return true;
	}
	return false;
}

bool func_481(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 10)
	{
		return false;
	}
	if (!func_379(iParam1, &Var0))
	{
		return false;
	}
	if (Var0 == Var0.f_1)
	{
		return is_bit_set(uParam0[Var0], (Var0.f_2 + iParam2));
	}
	iVar4 = (32 - Var0.f_2);
	if (iParam2 < iVar4)
	{
		return is_bit_set(uParam0[Var0], (Var0.f_2 + iParam2));
	}
	return is_bit_set(uParam0[Var0.f_1], (Var0.f_3 - (iParam2 - iVar4)));
}

int func_482(var uParam0, int iParam1, int iParam2)
{
	if (!func_379(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		clear_bit((*uParam0)[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	iVar4 = (32 - Var0.f_2);
	if (iParam2 < iVar4)
	{
		clear_bit((*uParam0)[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	clear_bit((*uParam0)[Var0.f_1], (Var0.f_3 - (iParam2 - iVar4)));
	return 1;
}

int func_483(var uParam0, int iParam1, int iParam2)
{
	if (!func_379(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		set_bit((*uParam0)[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	iVar4 = (32 - Var0.f_2);
	if (iParam2 < iVar4)
	{
		set_bit((*uParam0)[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	set_bit((*uParam0)[Var0.f_1], (Var0.f_3 - (iParam2 - iVar4)));
	return 1;
}

void func_484(int iParam0)
{
}

bool func_485(int iParam0)
{
	return func_481(&(Local_667.f_220.f_72), 4, iParam0);
}

bool func_486(int iParam0)
{
	if (!func_228(&iVar0))
	{
		return false;
	}
	return func_481(&(Local_58[iVar0]->f_6), 4, iParam0);
}

bool func_487(int iParam0)
{
	return _0x179a6f0ee2e79026(Local_667.f_220.f_68[iParam0]);
}

void func_488(int iParam0)
{
	if (!func_228(&iVar0))
	{
		return;
	}
	func_482(&(Local_58[iVar0]->f_6), 4, iParam0);
}

bool func_489(int iParam0)
{
	if (!func_228(&iVar0))
	{
		return false;
	}
	return _0x179a6f0ee2e79026(Local_58[iVar0]->f_6.f_5[iParam0]);
}

void func_490(int iParam0)
{
	if (!func_228(&iVar0))
	{
		return;
	}
	_0xde544b7ec0c187cc(Local_58[iVar0]->f_6.f_5[iParam0]);
}

bool func_491(int iParam0)
{
	return func_481(&(Local_667.f_220.f_72), 6, iParam0);
}

bool func_492(int iParam0)
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

bool func_493(int iParam0, int iParam1)
{
	if (!func_362(iParam1, 0))
	{
		if (!func_228(&iParam1))
		{
			return false;
		}
	}
	return func_481(&(Local_58[iParam1]->f_6), 1, iParam0);
}

bool func_494(int iParam0)
{
	return false;
}

bool func_495(int iParam0, int iParam1)
{
	if (!func_362(iParam1, 0))
	{
		if (!func_228(&iParam1))
		{
			return false;
		}
	}
	if (!func_621(int_to_participantindex(iParam1)))
	{
		return false;
	}
	return func_481(&(Local_58[iParam1]->f_6), 3, iParam0);
}

bool func_496(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_6)
	{
		func_622(uParam2, 1, iVar0);
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
			if (func_623(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_624(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258->f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_625(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_624(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_626(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_624(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_627(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_624(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_20 && func_628(player_id(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_624(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258->f_19)
		{
			if (func_629(uParam2, 1065353216))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_630(Global_34, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_624(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_631(Global_34, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_624(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940258->f_23) < 300)
			{
				if (func_632(Global_34, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_624(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_632(Global_34, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_624(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_633(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_624(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940258->f_19 || uParam2->f_13 < 20f)
			{
				if (func_634(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_624(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_24 || Global_1940258->f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_635(uParam2, 4000))
				{
					if ((func_636(iParam0, Global_1940258->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_637(uParam2, iParam0)) && func_638(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_624(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_636(iParam0, Global_1940258->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_637(uParam2, iParam0)) && func_638(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_624(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (Global_1940258->f_34 == 0)
			{
				if (Global_1940258->f_35 != 0)
				{
					if (func_639(iParam0, Global_1940258->f_35))
					{
						func_640();
						*iParam3 = 2;
						func_624(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 10f)
			{
				if (func_641(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_642() - uParam2->f_10) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_640();
						*iParam3 = 2;
						func_624(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1940258->f_36 != 0)
			{
				if (func_643())
				{
					if (func_639(iParam0, Global_1940258->f_36))
					{
						func_640();
						*iParam3 = 2;
						func_624(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_644(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_624(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (func_645(uParam2, iParam0))
		{
			*iParam3 = 1048576;
			func_624(iParam0, uParam2, *iParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_646(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_624(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_647(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_624(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_648(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_624(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_649(uParam2, 4000))
				{
					if (func_650(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_624(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_651(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_5 = 0;
					func_624(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_652(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_624(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_497(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_653(iParam0, vVar0, iParam2);
}

bool func_498(int iParam0, int iParam1, int iParam2)
{
	if (!func_654(iParam0, iParam1, iParam2, 0))
	{
		return false;
	}
	func_655(&iVar4, iParam1->f_12);
	func_657(&(Local_667.f_74.f_7[iParam0]), &uVar0, iParam1->f_3, func_656(iParam1), iParam1->f_9, iParam1->f_10, iParam1->f_11, 0, 0);
	return func_658(&iVar4, &uVar0);
}

bool func_499(int iParam0)
{
	if (!func_228(&iVar0))
	{
		return false;
	}
	return func_481(&(Local_58[iVar0]->f_6), 0, iParam0);
}

bool func_500(int iParam0, int iParam1)
{
	if (is_bit_set(Local_667.f_220.f_64, iParam0))
	{
		return false;
	}
	if (func_188(Local_667.f_220.f_2, 256))
	{
		return false;
	}
	if (iParam1->f_2 < 0f || iParam1->f_2 > IntToFloat(func_659(&(Local_667.f_220))))
	{
		return false;
	}
	return true;
}

bool func_501(int iParam0, int iParam1, int iParam2)
{
	if (!func_500(iParam0, iParam1))
	{
		return false;
	}
	if (Local_58[iParam2]->f_6.f_4 != 0 && get_time_difference(Local_58[iParam2]->f_6.f_4, get_network_time_accurate()) <= 3000)
	{
		return true;
	}
	return false;
}

bool func_502(int iParam0, int iParam1, int iParam2)
{
	func_431(33554432);
	switch (iParam1)
	{
		case 8:
			if (!func_192(4))
			{
				func_449(4);
			}
			break;
	}
	return true;
}

void func_503(int iParam0, bool bParam1)
{
	if (!func_228(&iVar0))
	{
		return;
	}
	func_483(&(Local_58[iVar0]->f_6), 1, iParam0);
	if (bParam1)
	{
		Local_58[iVar0]->f_6.f_7[iParam0] = get_network_time_accurate();
	}
}

bool func_504(int iParam0)
{
	return func_481(&(Local_667.f_220.f_72), 1, iParam0);
}

bool func_505(int iParam0, int iParam1)
{
	if (!func_362(iParam1, 0))
	{
		if (!func_228(&iParam1))
		{
			return false;
		}
	}
	return func_481(&(Local_58[iParam1]->f_6), 2, iParam0);
}

bool func_506(int iParam0)
{
	return true;
}

void func_507(int iParam0)
{
}

void func_508(int iParam0)
{
	if (!func_228(&iVar0))
	{
		return;
	}
	func_483(&(Local_58[iVar0]->f_6), 2, iParam0);
}

bool func_509(int iParam0)
{
	_0x20f4cb76689acdbc(&uVar0);
	_0x64f765d9a1f8f02c(&uVar0, Local_667.f_220.f_70[iParam0], &uVar0);
	return !_0x179a6f0ee2e79026(&uVar0);
}

bool func_510(int iParam0, var uParam1, int iParam2, var uParam3)
{
	*uParam1 = int_to_participantindex(iParam0);
	if (!network_is_participant_active(*uParam1))
	{
		return false;
	}
	*iParam2 = network_get_player_index(*uParam1);
	if (!_network_is_player_index_valid(*iParam2))
	{
		return false;
	}
	*uParam3 = get_player_ped(*iParam2);
	if (!does_entity_exist(*uParam3))
	{
		return false;
	}
	if (is_entity_dead(*uParam3))
	{
		return false;
	}
	return true;
}

bool func_511(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	return _0x72b2e00c9bac6789(Local_667.f_220.f_66[iParam0], iParam1);
}

bool func_512(int iParam0, var uParam1, int iParam2, var uParam3)
{
	return true;
}

void func_513(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return;
	}
	if (!func_228(&iVar0))
	{
		return;
	}
	_0x31010318ba9897ac(Local_58[iVar0]->f_6.f_5[iParam0], iParam1);
}

float func_514()
{
	if (Local_667.f_335.f_3 == 0)
	{
		Local_667.f_335.f_3 = get_game_timer();
		return 0.03125f;
	}
	iVar0 = get_game_timer();
	fVar1 = (to_float((iVar0 - Local_667.f_335.f_3)) * 0.001f);
	Local_667.f_335.f_3 = iVar0;
	return fVar1;
}

bool func_515(int iParam0, bool bParam1)
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

bool func_516(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_660(vVar0, vParam0) > func_660(vVar0, get_entity_coords(iParam3, true, false));
}

int func_517(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, float fParam6, bool bParam7)
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
			else if (func_661(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_662(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_663() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_518(var uParam0, int iParam1, float fParam2)
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
	func_181(uParam0);
	return true;
}

void func_519(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_334(iParam2);
	if (!does_entity_exist(iVar0))
	{
		if (func_664(iParam2))
		{
			func_335(iParam2, 0);
		}
		return;
	}
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	if (uParam0->f_2 != uParam1->f_1)
	{
		uParam1->f_1 = uParam0->f_2;
	}
	if (uParam1->f_1 == 0 && *uParam0 != *uParam1)
	{
		func_230(iParam2, *uParam0);
		func_665(*uParam1, *uParam0);
		*uParam1 = *uParam0;
	}
	func_666(iParam2);
	switch (uParam1->f_1)
	{
		case 0:
			if (!func_333(iParam2, 1))
			{
				return;
			}
			if (func_555(iParam2))
			{
				if (!func_664(iParam2))
				{
					func_667(iParam2);
				}
				if (func_333(iParam2, 16))
				{
					disable_control_action(0, -1292666904, false);
					disable_control_action(0, 578288361, false);
				}
				bVar3 = is_bit_set(Local_58[iVar1]->f_16, iParam2);
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (func_668(iParam2, iVar2, 16))
					{
						func_669(iParam2, iVar2, 1);
					}
					bVar4 = (func_668(iParam2, iVar2, 1) || bVar3);
					bVar5 = func_668(iParam2, iVar2, 8);
					bVar6 = (bVar4 || bVar5);
					if (!bVar6)
					{
						if (func_668(iParam2, iVar2, 4))
						{
							if (func_670() < Local_667.f_367[iParam2]->f_6[iVar2]->f_7)
							{
								bVar6 = true;
							}
						}
					}
					if (bVar5)
					{
						func_557(iParam2, iVar2, 8);
					}
					if (!func_544(&(Local_667.f_367[iParam2]->f_6[iVar2])))
					{
					}
					else if (func_671(&(Local_667.f_367[iParam2]->f_6[iVar2]), 0))
					{
						if (bVar6)
						{
							func_558(&(Local_667.f_367[iParam2]->f_6[iVar2]), 0, 1, 1);
						}
						else
						{
							if (!func_228(&iVar1))
							{
							}
							else
							{
								if (func_672(&(Local_667.f_367[iParam2]->f_6[iVar2]), 1))
								{
									if (!func_673(iParam2, iVar2, func_229(iParam2)))
									{
										Jump @583; //curOff = 513
									}
									else
									{
										set_bit(&(Local_58[iVar1]->f_16), iParam2);
										func_122(&(Local_58[iVar1]->f_16.f_1), iParam2, iVar2);
									}
								}
								Jump @583; //curOff = 551
								if (!bVar6)
								{
									func_558(&(Local_667.f_367[iParam2]->f_6[iVar2]), 1, 1, 1);
								}
							}
							iVar2++;
							Jump @611; //curOff = 592
							if (func_664(iParam2))
							{
								func_335(iParam2, 0);
							}
							Jump @924; //curOff = 611
							iVar2 = 0;
							while (iVar2 < 4)
							{
								if (!func_544(&(Local_667.f_367[iParam2]->f_6[iVar2])))
								{
								}
								else if (func_671(&(Local_667.f_367[iParam2]->f_6[iVar2]), 0))
								{
									func_558(&(Local_667.f_367[iParam2]->f_6[iVar2]), 0, 1, 1);
								}
								iVar2++;
							}
							if (!is_bit_set(Local_58[iVar1]->f_16.f_2, iParam2))
							{
								func_674(iParam2, func_582(Local_13.f_40.f_4, iParam2));
								set_bit(&(Local_58[iVar1]->f_16.f_2), iParam2);
							}
							Jump @924; //curOff = 760
							iVar2 = 0;
							while (iVar2 < 4)
							{
								if (!func_544(&(Local_667.f_367[iParam2]->f_6[iVar2])))
								{
								}
								else if (func_671(&(Local_667.f_367[iParam2]->f_6[iVar2]), 0))
								{
									func_558(&(Local_667.f_367[iParam2]->f_6[iVar2]), 0, 1, 1);
								}
								iVar2++;
							}
							if (is_bit_set(Local_58[iVar1]->f_16.f_2, iParam2))
							{
								clear_bit(&(Local_58[iVar1]->f_16.f_2), iParam2);
								clear_bit(&(Local_58[iVar1]->f_16), iParam2);
								func_122(&(Local_58[iVar1]->f_16.f_1), iParam2, 3);
							}
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_520()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

bool func_521(int iParam0)
{
	if (func_675(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_522(int iParam0)
{
	if (_0xd04241bbf6d03a5e(Global_34) != 0)
	{
		iVar10 = 0;
		while (iVar10 < get_number_of_events(0))
		{
			if (get_event_at_index(0, iVar10) == -1730772208)
			{
				if (get_event_data(0, iVar10, &vVar0, 10))
				{
					if (vVar0.z == iParam0 || iParam0 == 0)
					{
						return true;
					}
				}
			}
			iVar10++;
		}
	}
	return false;
}

bool func_523(int iParam0)
{
	return func_134(8, iParam0);
}

bool func_524(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (!func_362(iParam2, 0))
	{
		if (!func_228(&iParam2))
		{
			return false;
		}
	}
	fVar0 = &Local_58[iParam2]->f_2.f_2[iParam0];
	if (fVar0 <= 0f)
	{
		if (bParam3)
		{
			iVar1 = func_301(iParam0);
			if (does_entity_exist(iVar1))
			{
				iVar2 = network_get_player_index(int_to_participantindex(iParam2));
				if (_network_is_player_index_valid(iVar2))
				{
					fVar0 = vdist(get_entity_coords(iVar1, true, false), func_676(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					Local_58[iParam2]->f_2.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

bool func_525(int iParam0)
{
	return does_blip_exist(Local_667.f_74.f_7[iParam0]->f_1);
}

void func_526(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	func_174(iParam0);
	if (!does_entity_exist(&(Local_667.f_74.f_7[iParam0])))
	{
		return;
	}
	iVar0 = _blip_add_for_entity(iParam1, &(Local_667.f_74.f_7[iParam0]));
	if (iParam2 != 0)
	{
		_blip_set_modifier(iVar0, iParam2);
	}
	if (iParam3 != 0)
	{
		set_blip_sprite(iVar0, iParam3, true);
	}
	if (!is_string_null_or_empty(sParam4))
	{
		set_blip_name_from_text_file(iVar0, sParam4);
	}
	Local_667.f_74.f_7[iParam0]->f_1 = iVar0;
}

bool func_527(int iParam0, bool bParam1)
{
	if (!bParam1 || func_455(iParam0))
	{
		return is_entity_dead(&(Local_667.f_74.f_7[iParam0]));
	}
	return false;
}

bool func_528(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!network_is_player_active(iParam1))
		{
			return false;
		}
	}
	return func_677(iParam0, get_player_ped(iParam1), bParam2);
}

void func_529(int iParam0, bool bParam1, bool bParam2)
{
	if (func_28() != 0)
	{
		return;
	}
	if (func_678())
	{
		return;
	}
	if (_0x0e2f43516f998269(player_ped_id()))
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!&Global_1139381->f_3876.f_2[func_679(iParam0, 1)])
		{
			return;
		}
	}
	(Global_1139381->f_3876.f_2[func_679(iParam0, 1)])->f_2++;
	if (!bParam2)
	{
		return;
	}
	if (Global_1296859->f_16 != &Global_1296859)
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 0;
	Var0.f_5 = iParam0;
	Var0.f_6 = bParam1;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (!network_is_player_active(&(Global_1296859->f_154[iVar8])))
		{
		}
		else if (!_0x9be7dcb22d32ccbe(Global_1296859->f_15, &(Global_1296859->f_154[iVar8])))
		{
		}
		else if (&Global_1296859->f_154[iVar8] == Global_1296859->f_10)
		{
		}
		else
		{
			_0x31010318ba9897ac(&uVar7, &(Global_1296859->f_154[iVar8]));
		}
		iVar8++;
	}
	func_680(&Var0, uVar7);
}

Vector3 func_530(int iParam0)
{
	return Local_667.f_101[0]->f_5[iParam0]->f_7;
}

bool func_531(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (absf((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (absf((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || absf((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_532(int iParam0)
{
	if (!func_228(&iVar0))
	{
		return;
	}
	func_272(&(Local_58[iVar0]->f_1), iParam0);
}

void func_533(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	*uParam0 = 0;
	uParam0->f_3 = { vParam2 };
	uParam0->f_1 = iParam1;
	uParam0->f_2 = iParam5;
}

bool func_534(var uParam0)
{
	*uParam0 = 0;
	if (uParam0->f_1 == 0)
	{
		return false;
	}
	iVar0 = create_itemset(false);
	iVar1 = _0x59b57c4b06531e1e(uParam0->f_3, 0.1f, iVar0, uParam0->f_2);
	if (iVar1 > 0)
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar0));
			if (!does_entity_exist(iVar3))
			{
			}
			else if (get_entity_model(iVar3) == uParam0->f_1)
			{
				*uParam0 = iVar3;
			}
			else
			{
				iVar2++;
			}
		}
	}
	_0x20a4bf0e09bee146(iVar0);
	destroy_itemset(iVar0);
	return does_entity_exist(*uParam0);
}

void func_535()
{
	if (!func_413(2))
	{
		if (!func_415(2, 1))
		{
			if (!func_681())
			{
				if (_network_has_control_of_anim_scene(func_194()))
				{
				}
			}
		}
	}
	if (!func_413(32768))
	{
		if (!func_415(32768, 1))
		{
			if (func_682(0))
			{
				iVar0 = func_301(0);
				_0x406ccf555b04fad3(iVar0, 1, 1065353216);
				remove_all_ped_weapons(iVar0, true, true);
				func_431(32768);
			}
		}
	}
}

bool func_536()
{
	return Local_667.f_335.f_4;
}

bool func_537(int iParam0)
{
	iVar0 = func_194();
	sVar1 = func_283(iParam0);
	if (!_does_anim_scene_exist(iVar0) || !_is_anim_scene_loaded(iVar0, true, false))
	{
		return false;
	}
	if (_0x1f0e401031e20146(iVar0, sVar1))
	{
		return true;
	}
	if (!_network_has_control_of_anim_scene(iVar0))
	{
		return false;
	}
	if (!_0x23e33cb9f4a3f547(iVar0, sVar1))
	{
		if (!_0x0df57f86fe71dbe5(iVar0, sVar1))
		{
			if (!_0xdf7b5144e25cd3fe(iVar0, sVar1))
			{
			}
		}
		return false;
	}
	_set_anim_scene_playback_list_bool(iVar0, sVar1, true);
	return false;
}

bool func_538()
{
	if (!func_682(0))
	{
		return func_415(16, 1);
	}
	iVar0 = func_301(0);
	iVar1 = Local_667.f_19.f_52;
	iVar2 = func_683(0, 20f, 1, 0);
	if (iVar1 != iVar2 && network_is_player_active(iVar2))
	{
		Local_667.f_19.f_52 = iVar2;
		task_turn_ped_to_face_entity(iVar0, get_player_ped(iVar2), -1, -1082130432, -1082130432, -1082130432);
	}
	else if (!func_684(iVar0, -875674219))
	{
		if (network_is_player_active(iVar2))
		{
			Local_667.f_19.f_52 = iVar2;
			task_turn_ped_to_face_entity(iVar0, get_player_ped(iVar2), -1, -1082130432, -1082130432, -1082130432);
		}
		else if (!func_685(iVar0, 1435919172))
		{
			task_stand_still(iVar0, -1);
		}
	}
	else if (!func_430(16, 255))
	{
		func_431(16);
	}
	return func_430(16, 255);
}

bool func_539(int iParam0)
{
	return is_bit_set(Local_667.f_74.f_6, iParam0);
}

bool func_540(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam2 && !network_has_control_of_entity(iParam0))
	{
		return false;
	}
	if (!bParam3 && func_684(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == -1794415470 && is_ped_being_jacked(iParam0))
	{
		return false;
	}
	return true;
}

Vector3 func_541()
{
	switch (func_233())
	{
		case 0:
			return -1525.73f, -558.6525f, 137.1892f;
		case 1:
			return -1773.655f, 288.0809f, 116.3698f;
		case 2:
			return -2727.401f, -266.463f, 148.4963f;
		case 3:
			return -732.9782f, -730.3648f, 49.85772f;
		case 4:
			return 982.9839f, -1284.832f, 53.40044f;
		case 5:
			return 1108.551f, -1449.591f, 52.30062f;
		case 6:
			return 1329.837f, -1607.947f, 65.025f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_542(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_543(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_686(func_301(iParam0), 0))
	{
		return 0;
	}
	else if (func_420(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 256:
		case 65536:
		case 131072:
			bParam2 = true;
			break;
	}
	switch (iParam1)
	{
		case 1:
		case 2:
		case 4:
		case 8:
			func_687(1891783641, func_301(0), 1);
			break;
	}
	iVar0 = func_301(iParam0);
	if (is_any_speech_playing(iVar0))
	{
		if (!bParam2)
		{
			return 0;
		}
		else
		{
			stop_current_playing_speech(iVar0, 0);
		}
	}
	sVar1 = func_240(iParam0);
	sVar2 = func_688(func_233(), iParam1);
	iVar3 = func_689(iParam1);
	if (!func_690(iVar0, sVar2, iParam3, 0, 0, sVar1, iVar3, 1))
	{
		return 0;
	}
	func_691(iParam1);
	if (network_is_host_of_this_script())
	{
		if (func_442(&(Local_13.f_7.f_5)))
		{
			if (func_589(&(Local_13.f_7.f_5)) >= 10000)
			{
				func_443(&(Local_13.f_7.f_5));
			}
		}
	}
	return 1;
}

bool func_544(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if ((*Global_1951255)[iParam0]->f_1 & 2 == 0)
	{
		return false;
	}
	return _uiprompt_is_valid((*Global_1951255)[iParam0]->f_3);
}

void func_545(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_544(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_692(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_693(iVar0);
	*uParam0 = 0;
}

int func_546(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_694(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_547(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_694(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_548(int iParam0)
{
	iVar0 = -1;
	if (func_358(&Var1, iParam0))
	{
		iVar0 = ((func_695() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_549(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_550(int iParam0, int iParam1)
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

void func_551(var uParam0)
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
	_trigger_script_event_2(uParam0, 8, 10, &(Global_1051252->f_16[16]));
	func_696(uParam0, uParam0->f_1);
}

bool func_552()
{
	return func_697() == 4;
}

void func_553(var uParam0, int iParam1, int iParam2)
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
		func_205(uParam0, iVar0);
		iVar0++;
	}
}

void func_554(int iParam0, int iParam1)
{
	func_254(&(Local_667.f_367[iParam0]->f_5), iParam1);
}

bool func_555(int iParam0)
{
	if (Local_667.f_367.f_42 == iParam0)
	{
		return true;
	}
	return false;
}

void func_556(int iParam0, int iParam1, int iParam2)
{
	func_254(&(Local_667.f_367[iParam0]->f_6[iParam1]->f_1), iParam2);
}

void func_557(int iParam0, int iParam1, int iParam2)
{
	func_272(&(Local_667.f_367[iParam0]->f_6[iParam1]->f_1), iParam2);
}

void func_558(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_544(iParam0))
	{
		return;
	}
	iVar0 = func_692(iParam0);
	if (bParam1)
	{
		func_698(iParam0, 4);
		if (bParam3)
		{
			func_699(iVar0, 1);
		}
		func_700(iVar0, 1);
	}
	else
	{
		func_701(iParam0, 4);
		func_700(iVar0, 0);
	}
}

void func_559(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_272(&(uParam0->f_2), 16384);
	}
	else
	{
		func_254(&(uParam0->f_2), 16384);
	}
}

void func_560(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_272(&(uParam0->f_2), 2048);
	}
	else
	{
		func_254(&(uParam0->f_2), 2048);
	}
}

void func_561(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_254(uParam0, 16);
	}
	else
	{
		func_272(uParam0, 67108864);
		func_272(uParam0, 16);
	}
}

void func_562(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_272(&(uParam0->f_2), 128);
	}
	else
	{
		func_254(&(uParam0->f_2), 128);
	}
}

void func_563(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_254(uParam0, 256);
	}
	else
	{
		func_272(uParam0, 256);
	}
}

void func_564(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_254(uParam0, 268435456);
	}
	else
	{
		func_272(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_254(uParam0, 1073741824);
	}
	else
	{
		func_272(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_254(uParam0, 536870912);
	}
	else
	{
		func_272(uParam0, 536870912);
	}
}

float func_565(var uParam0)
{
	return uParam0->f_26;
}

void func_566(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

void func_567(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_254(uParam0, 1);
	}
	else
	{
		func_272(uParam0, 1);
	}
}

void func_568(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_254(uParam0, 512);
	}
	else
	{
		func_272(uParam0, 512);
	}
}

void func_569(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_254(uParam0, 2);
	}
	else
	{
		func_272(uParam0, 2);
	}
}

void func_570(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_254(uParam0, 8);
	}
	else
	{
		func_272(uParam0, 8);
	}
}

int func_571(int iParam0)
{
	return Local_667.f_74.f_7[iParam0]->f_4;
}

float func_572(int iParam0)
{
	return Local_667.f_74.f_7[iParam0]->f_5;
}

Vector3 func_573(int iParam0)
{
	return Local_667.f_74.f_7[iParam0]->f_6;
}

bool func_574(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_579(iParam1))
	{
		return false;
	}
	iVar0 = func_702(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_575(int iParam0, bool bParam1)
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

bool func_576(int iParam0)
{
	return func_175(iParam0, 32);
}

bool func_577(int iParam0)
{
	return func_175(iParam0, 64);
}

bool func_578(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_579(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

bool func_580(int iParam0)
{
	return is_bit_set(Local_667.f_367.f_41, iParam0);
}

bool func_581(int iParam0)
{
	return is_bit_set(Local_667.f_367.f_40, iParam0);
}

int func_582(int iParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = iParam1 * 2;
	if (is_bit_set(iParam0, iVar1))
	{
		set_bit(&iVar0, 0);
	}
	if (is_bit_set(iParam0, iVar1 + 1))
	{
		set_bit(&iVar0, 1);
	}
	return iVar0;
}

int func_583(int iParam0, int iParam1, int iParam2)
{
	switch (func_363(iParam2))
	{
		case 0:
			return 2;
		case 1:
			return 3;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 3;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 3:
			return 2;
	}
	return 0;
}

int func_584(int iParam0, int iParam1)
{
	if (func_703(iParam0))
	{
		return 0;
	}
	if (&Local_13.f_40[iParam0] == iParam1)
	{
		return 1;
	}
	Local_13.f_40[iParam0] = iParam1;
	return 1;
}

var func_585(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, var uParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_704() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_705());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_705());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_705());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_706(get_player_team(iVar5)));
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
			if (func_707(iVar2))
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
				if (iVar9 & 8192 != 0 && func_708(iVar2) != 1)
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
					if (!func_709(iVar10))
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

struct<15> func_586(int iParam0)
{
	Var0.f_10 = 255;
	_copy_memory(&(Var0.f_4), &Local_667, 5);
	Var0.f_9 = iParam0;
	Var0 = 182;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	return Var0;
}

void func_587(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	trigger_script_event(1, uParam0, 15, 41, &uParam1);
}

void func_588(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_663() - fParam1);
	func_710(uParam0, 1);
	func_711(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_589(var uParam0)
{
	if (!func_442(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_712(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_642() - round((uParam0->f_1 * 1000f)));
}

int func_590()
{
	switch (func_195())
	{
		case 0:
		case 2:
			switch (func_233())
			{
				case 0:
					return 505459309;
				case 1:
					return 1962033744;
				case 2:
					return -1583551360;
				case 3:
					return 1331081117;
				case 4:
					return 903574438;
				case 5:
					return 856057291;
				case 6:
					return 259513172;
				default:
					break;
			}
			break;
		case 1:
			switch (func_233())
			{
				case 0:
					return -364070233;
				case 1:
					return 1628530735;
				case 2:
					return 530382704;
				case 3:
					return -649069078;
				default:
					break;
			}
			break;
	}
	return 856057291;
}

int func_591(int iParam0, var uParam1)
{
	Var0.f_1 = 10;
	func_713(&Var0, 1356624740);
	return func_714(iParam0, &Var0, uParam1, 0, 0);
}

void func_592(int iParam0, int iParam1)
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, iParam0, -1, -1, 255);
	Var31 = { func_462(iParam0, 1346578557) };
	if (!stat_id_get_int(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	set_bit(&iVar33, iParam1);
	if (!func_124(&Var0, 4) && func_715(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!stat_id_set_int(&Var31, iVar33, true))
	{
	}
	(*Global_1268861)[network_player_id_to_int()]->f_56[iParam0] = iVar33;
}

void func_593(int iParam0)
{
	func_716(iParam0);
}

void func_594(int iParam0)
{
	if (func_131(Global_1272030[iParam0]))
	{
		return;
	}
	func_717(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_32(&Var2, iVar0, iVar1, -1, 255);
	func_132((*Global_1272030)[iParam0]);
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_718(153786159) };
		stat_id_set_int(&Var34, iVar33, true);
		Var34 = { func_718(217123284) };
		stat_id_set_int(&Var34, Global_1296859->f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_718(945205875) };
		stat_id_set_int(&Var37, iVar36, true);
		Var37 = { func_718(890183498) };
		stat_id_set_int(&Var37, Global_1296859->f_21, true);
	}
}

void func_595(int iParam0)
{
	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_551(&Var0);
}

void func_596(struct<2> Param0)
{
	if (func_338(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_338(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_338(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_719(Param0, &Var0))
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

void func_597(int iParam0)
{
	Var0 = { func_462(iParam0, -1797584255) };
	_0x6a0184e904cdf25e(&Var0, 1);
}

void func_598(int iParam0, int iParam1, int iParam2)
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	iVar31 = network_player_id_to_int();
	if (iVar31 > -1 && iVar31 < 32)
	{
		func_32(&Var0, iParam0, iParam1, iParam2, 255);
		if (Var0.f_7 < 3 && Var0.f_7 >= 0)
		{
			(*Global_1268861)[iVar31]->f_95[Var0.f_7] = 0;
		}
	}
}

bool func_599(var uParam0, float fParam1, bool bParam2)
{
	iVar1 = 255;
	iVar2 = player_id();
	iVar3 = 255;
	iVar4 = player_ped_id();
	iVar5 = 0;
	_0xde544b7ec0c187cc(uParam0);
	if (!network_is_player_active(iVar2))
	{
		return false;
	}
	iVar6 = _0x901e0dc25080c8b9(iVar2);
	if (!_0xd6f6acf4392187fb(iVar6) || !_0x0f99f6436528a089(iVar6))
	{
		return false;
	}
	iVar57 = _0xd1bf325c8252a982(iVar6, &Var7);
	if (iVar57 < 1)
	{
		return false;
	}
	if (fParam1 <= 0f)
	{
		return false;
	}
	if (!does_entity_exist(iVar4))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iVar57)
	{
		iVar1 = network_get_player_from_gamer_handle(Var7[iVar0]);
		if (!network_is_player_active(iVar1))
		{
		}
		else
		{
			iVar3 = network_get_participant_index(iVar1);
			if (!network_is_participant_active(iVar3))
			{
			}
			else
			{
				iVar5 = get_player_ped(iVar1);
				if (!does_entity_exist(iVar5))
				{
				}
				else if (vdist(get_entity_coords(iVar4, true, false), get_entity_coords(iVar5, true, false)) <= fParam1)
				{
					_0x31010318ba9897ac(uParam0, iVar1);
				}
			}
		}
		iVar0++;
	}
	if (!bParam2)
	{
		_0xd426e2e3288469d6(uParam0, iVar2);
	}
	return _0x179a6f0ee2e79026(uParam0);
}

bool func_600(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_601(var uParam0)
{
	if (!func_442(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_712(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_663() - uParam0->f_1);
}

void func_602(int iParam0, float fParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		fParam1 = func_720(fParam1, 0f, 1f);
		iVar0 = floor((fParam1 * IntToFloat(get_entity_max_health(iParam0, bParam2))));
		_set_entity_health(iParam0, iVar0, 0);
	}
}

char* func_603(int iParam0)
{
	return Local_667.f_74.f_7[iParam0]->f_10;
}

void func_604(int iParam0, char* sParam1, bool bParam2)
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

void func_605(int iParam0)
{
}

int func_606(int iParam0, int iParam1)
{
	iVar0 = &Local_667.f_101[iParam0]->f_5[iParam1];
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (network_has_control_of_entity(iVar0))
	{
		return 1;
	}
	if (!network_request_control_of_entity(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_607(int iParam0)
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

struct<2> func_608(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_609(int iParam0)
{
	if (!func_459(func_458(iParam0), Local_667.f_220.f_76[iParam0]))
	{
		clear_bit(&(Local_667.f_220.f_90), iParam0);
		return;
	}
	set_bit(&(Local_667.f_220.f_90), iParam0);
}

int func_610(int iParam0, int iParam1)
{
	if (!is_entity_dead(get_player_ped(player_id())))
	{
		if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, iParam0, iParam1))
		{
			if (does_entity_exist(iVar0))
			{
				if (is_entity_a_ped(iVar0))
				{
					return iVar0;
				}
			}
		}
	}
	return 0;
}

void func_611()
{
	if (Local_667.f_367.f_42 < 0)
	{
		return;
	}
	func_335(func_182(Local_667.f_367.f_42), 0);
	Local_667.f_367.f_42 = -1;
	func_721(func_182(Local_667.f_367.f_42));
}

bool func_612(int iParam0, int iParam1)
{
	iVar0 = func_334(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (iParam1 == iVar0)
	{
		if (Local_667.f_367.f_42 != iParam0)
		{
			func_611();
			func_667(iParam0);
			Local_667.f_367.f_42 = iParam0;
			func_722(iParam0);
		}
		return true;
	}
	return false;
}

int func_613(var uParam0, var uParam1, int iParam2)
{
	if (!func_379(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_380(Var0.f_2, 10);
		(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] || uParam1[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_380(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] || uParam1[Var0]) && iVar4));
	iVar4 = func_380(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = ((uParam0[Var0.f_1] && iVar4 ^ -1) || ((uParam0[Var0.f_1] || uParam1[Var0.f_1]) && iVar4));
	return 1;
}

int func_614(var uParam0, var uParam1, int iParam2)
{
	if (!func_379(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_380(Var0.f_2, 10);
		(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] && uParam1[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_380(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] && uParam1[Var0]) && iVar4));
	iVar4 = func_380(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = ((uParam0[Var0.f_1] && iVar4 ^ -1) || ((uParam0[Var0.f_1] && uParam1[Var0.f_1]) && iVar4));
	return 1;
}

void func_615(int iParam0, int iParam1)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	if (func_481(&(Local_58[iParam1]->f_6), 1, iParam0))
	{
		if (&Local_58[iParam1]->f_6.f_7[iParam0] == 0)
		{
			return;
		}
		iVar0 = network_get_player_index(int_to_participantindex(iParam1));
		if (!_network_is_player_index_valid(iVar0))
		{
			return;
		}
		if (_network_is_player_index_valid(&(Local_13.f_35.f_1[iParam0])))
		{
			if (&Local_13.f_35.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (&Local_13.f_35.f_3[iParam0] == 0 || is_time_more_than(&(Local_58[iParam1]->f_6.f_7[iParam0]), &(Local_13.f_35.f_3[iParam0])))
		{
			Local_13.f_35.f_1[iParam0] = iVar0;
			Local_13.f_35.f_3[iParam0] = &Local_58[iParam1]->f_6.f_7[iParam0];
		}
	}
}

void func_616(int iParam0)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	iVar1 = 255;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_13.f_40[iVar0]->f_2 != 0)
		{
		}
		else if (network_is_player_active(Local_13.f_40[iVar0]->f_1))
		{
		}
		else if (!is_bit_set(Local_58[iParam0]->f_16, iVar0))
		{
		}
		else
		{
			iVar1 = network_get_player_index(int_to_participantindex(iParam0));
			if (!network_is_player_active(iVar1))
			{
				Jump @155; //curOff = 109
			}
			else
			{
				Local_13.f_40[iVar0]->f_1 = iVar1;
				func_122(&(Local_13.f_40.f_4), iVar0, func_582(Local_58[iParam0]->f_16.f_1, iVar0));
			}
		}
		iVar0++;
	}
}

void func_617(int iParam0)
{
	if (!func_228(&iVar0))
	{
		return;
	}
	func_483(&(Local_58[iVar0]->f_6), 3, iParam0);
}

void func_618(int iParam0)
{
}

bool func_619(int iParam0)
{
	return func_481(&(Local_667.f_220.f_72), 7, iParam0);
}

bool func_620(int iParam0, var uParam1, var uParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam1->f_6)
	{
		func_622(uParam1, 0, iVar0);
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
				if (func_635(uParam1, 4000))
				{
					if ((func_636(iParam0, Global_1940258->f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_637(uParam1, iParam0)) && func_638(uParam1, iParam0))
					{
						func_640();
						*uParam2 = 2;
						func_624(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 2 != 0)
		{
			if (uParam1->f_13 < 4f)
			{
				if (func_635(uParam1, 4000))
				{
					if ((func_636(iParam0, Global_1940258->f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_637(uParam1, iParam0)) && func_638(uParam1, iParam0))
					{
						func_640();
						*uParam2 = 2;
						func_624(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940258->f_35 != 0)
			{
				if (Global_1940258->f_34 == 0)
				{
					if (func_639(iParam0, Global_1940258->f_35))
					{
						func_640();
						*uParam2 = 2;
						func_624(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940258->f_36 != 0)
			{
				if (func_643())
				{
					if (func_639(iParam0, Global_1940258->f_36))
					{
						func_640();
						*uParam2 = 2;
						func_624(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940258->f_19)
		{
			if (func_629(uParam1, 1065353216))
			{
				if (!uParam1->f_2 & 4 != 0)
				{
					if (func_630(Global_34, iParam0, uParam1))
					{
						func_640();
						*uParam2 = 4;
						func_624(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_2 & 256 != 0)
				{
					if (func_631(Global_34, iParam0, uParam1))
					{
						func_640();
						*uParam2 = 256;
						func_624(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 131072 != 0)
		{
			if (func_723(iParam0, uParam1))
			{
				func_640();
				*uParam2 = 131072;
				func_624(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_724(iParam0, uParam1))
			{
				func_640();
				*uParam2 = 262144;
				func_624(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_621(int iParam0)
{
	if (iParam0 == 255)
	{
		return false;
	}
	return network_is_participant_active(iParam0);
}

void func_622(var uParam0, bool bParam1, int iParam2)
{
	func_725(iParam2);
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
		uParam0->f_14 = func_726(0);
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
							func_254(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_727(1, 1))
						{
							func_254(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_34) && (!func_727(1, 1) || *uParam0 & 8192 != 0))
				{
					func_272(uParam0, 33554432);
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
			if (func_728(uParam0))
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
	func_729(uParam0);
}

bool func_623(int iParam0, var uParam1)
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
			if (!func_730(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_731(iParam0, iVar2) <= func_732(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_624(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_733(iParam2, 1, 1, 1, 0))
	{
		func_254(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_734(uParam1, 1);
	func_735();
}

bool func_625(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_736(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_737(uParam1);
			if (func_738(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_3);
				iVar3 = func_739(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_734(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_740(uParam1))
						{
							func_734(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_626(int iParam0, int iParam1, var uParam2)
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
	if (func_741(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_737(uParam2);
		if (func_738(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = get_game_timer();
			}
			if (uParam2->f_3 != 0)
			{
				if (get_game_timer() - uParam2->f_3) > func_739(uParam2)
				{
					func_734(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_627(int iParam0, var uParam1)
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
	if (func_730(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_4) > func_739(uParam1)
		{
			fVar3 = func_737(uParam1);
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

int func_628(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_742(bParam1, bParam2, bParam3);
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

bool func_629(var uParam0, float fParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_642();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_630(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_743(uParam2);
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
			if (func_638(uParam2, iParam1))
			{
				func_734(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_631(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_13 < IntToFloat(func_659(uParam2)))
	{
		if ((is_weapon_valid(Global_1940258->f_40) && !_0x5809dbca0a37c82b(Global_1940258->f_40)) || get_current_ped_vehicle_weapon(Global_34, &uVar0))
		{
			if (func_638(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_734(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_632(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_744(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_24))
				{
					func_734(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_30))
				{
					func_734(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_29, &vVar4, 0, 0);
					if (func_745(iParam1, vVar0, vVar4))
					{
						func_734(uParam2, 1);
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
					func_734(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_29, &vVar7, 0, 0);
					if (func_745(iParam1, vVar0, vVar7))
					{
						func_734(uParam2, 1);
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

bool func_633(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1940258->f_33)
	{
		if (!func_730(iParam0, uParam1, &(Global_1940258->f_28[iVar0])) || iParam0 == &Global_1940258->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_746(&(Global_1940258->f_28[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false), vVar9);
			if (func_747(&(Global_1940258->f_28[iVar0])))
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
			if (func_748(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_749(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_750(uParam1, iParam0, fVar1, iVar0))
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

bool func_634(int iParam0, var uParam1)
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

bool func_635(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_642();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_636(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_751(iVar0, &iVar2))
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
	if (func_752(iVar0, iParam0))
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

int func_637(var uParam0, int iParam1)
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

bool func_638(var uParam0, int iParam1)
{
	if (func_753(uParam0))
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

bool func_639(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_754(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_640()
{
}

bool func_641(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_34);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_755(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_642();
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
						if (func_542(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_10 = func_642();
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

int func_642()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_643()
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
	if ((func_642() - Global_1940258->f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_644(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_15))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_732(uParam0);
	if (uParam0->f_13 > func_565(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_756(iParam1);
	iVar1 = func_757(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || _0x9d9473cb82d83a30(iParam1, Global_34, 0) == 1) || _0x9d9473cb82d83a30(iParam1, uParam0->f_15, 0) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_645(var uParam0, int iParam1)
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
	if (func_497(iVar0, iParam1, 1060437492) != 0)
	{
		return false;
	}
	vVar1 = { get_entity_coords(iParam1, true, false) };
	vVar4 = { get_entity_coords(iVar0, true, false) };
	fVar7 = func_758(vVar1, vVar4);
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

int func_646(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_13 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_759(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_647(int iParam0, var uParam1)
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
		if (func_760(iParam0, uParam1, 1))
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
	if (!func_492(iParam0))
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
			if (func_761(uParam1))
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
					if (!func_762(uParam1, iParam0))
					{
						if (func_542(iVar4, Global_35, 1) < 7f)
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

bool func_648(int iParam0, var uParam1)
{
	if (!func_763(0))
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

bool func_649(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_642();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_650(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_651(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_642();
	}
	else if (func_642() - uParam1->f_5) > func_764(uParam1)
	{
		return func_765(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_652(var uParam0, int iParam1)
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

int func_653(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_766(vVar3, vVar6);
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
	if (func_767(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_654(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_188(Local_667.f_220.f_2, 4))
	{
		return false;
	}
	if (!is_bit_set(Local_667.f_220.f_65, iParam0))
	{
		return false;
	}
	clear_bit(&(Local_667.f_220.f_65), iParam0);
	if (!bParam3 && Local_58[iParam2]->f_6.f_4 == 0)
	{
		return false;
	}
	if (!bParam3 && get_time_difference(Local_58[iParam2]->f_6.f_4, get_network_time_accurate()) > 750)
	{
		return false;
	}
	if (is_entity_occluded(*iParam1))
	{
		return false;
	}
	if (!has_entity_clear_los_to_entity(player_ped_id(), *iParam1, 17))
	{
		return false;
	}
	iVar0 = func_768(player_ped_id(), 0, 1, 0);
	if (!is_weapon_valid(iVar0) || !((_0x705be297eebdb95d(iVar0) || func_769(iVar0)) || _is_weapon_throwable(iVar0)))
	{
		return false;
	}
	if (_0x79b1a6e780266db0(player_ped_id()) < iParam1->f_2)
	{
		return false;
	}
	return true;
}

void func_655(int* iParam0, var uParam1)
{
	get_screen_resolution(iParam0, &(iParam0->f_1));
	*iParam0 = (*iParam0 / 2);
	iParam0->f_1 = (iParam0->f_1 / 2);
	iParam0->f_2 = uParam1;
}

Vector3 func_656(int iParam0)
{
	return iParam0->f_6, iParam0->f_7, iParam0->f_8;
}

int func_657(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = 0;
	uParam1->f_3 = 0;
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = get_entity_model(iParam0);
	if (!is_model_valid(iVar0))
	{
		return 0;
	}
	get_model_dimensions(iVar0, &vVar1, &vVar4);
	vVar7 = { vVar4 - vVar1 * Vector(0.5f, 0.5f, 0.5f) };
	if (bParam8)
	{
		vVar7.x = ((func_770(iParam0) * 0.5f) + vParam5.x);
		vVar7.f_1 = ((func_771(iParam0) * 0.5f) + vParam5.y);
		vVar7.f_2 = ((func_772(iParam0) * 0.5f) + vParam5.z);
	}
	vVar10 = { func_408(func_773(get_rendering_cam())) };
	vVar13 = { func_774(vVar10, 0f, 0f, 1f) };
	vVar16 = { func_774(vVar13, vVar10) };
	vVar19 = { get_entity_coords(iParam0, true, false) + vParam2 };
	vVar22 = { vVar19 - vVar7 * vVar13 + vVar7 * vVar16 };
	vVar25 = { vVar19 + vVar7 * vVar13 + vVar7 * vVar16 };
	vVar28 = { vVar19 - vVar7 * vVar13 - vVar7 * vVar16 };
	vVar31 = { vVar19 + vVar7 * vVar13 - vVar7 * vVar16 };
	get_screen_resolution(&iVar34, &iVar35);
	vVar36 = { to_float(iVar34), to_float(iVar35), 0f };
	bVar39 = get_screen_coord_from_world_coord(vVar19, &vVar19, &(vVar19.f_1));
	bVar40 = get_screen_coord_from_world_coord(vVar22, &vVar22, &(vVar22.f_1));
	bVar41 = get_screen_coord_from_world_coord(vVar25, &vVar25, &(vVar25.f_1));
	bVar42 = get_screen_coord_from_world_coord(vVar28, &vVar28, &(vVar28.f_1));
	bVar43 = get_screen_coord_from_world_coord(vVar31, &vVar31, &(vVar31.f_1));
	bVar44 = (((bVar40 || bVar41) || bVar42) || bVar43);
	if (bVar39)
	{
		vVar19 = { vVar19 * vVar36 };
	}
	if (bVar40)
	{
		vVar22 = { vVar22 * vVar36 };
	}
	if (bVar41)
	{
		vVar25 = { vVar25 * vVar36 };
	}
	if (bVar42)
	{
		vVar28 = { vVar28 * vVar36 };
	}
	if (bVar43)
	{
		vVar31 = { vVar31 * vVar36 };
	}
	iVar45 = (iParam9 / 2);
	iVar46 = (iParam10 / 2);
	if (!bVar39 && !bVar44)
	{
		return 0;
	}
	else if (bVar39 && !bVar44)
	{
		*uParam1 = 0;
		uParam1->f_1 = 0;
		uParam1->f_2 = iVar34;
		uParam1->f_3 = iVar35;
	}
	else if (!bVar44)
	{
		return 0;
	}
	else if (bVar40)
	{
		if (!bVar41)
		{
			uParam1->f_2 = (iParam9 + (iVar34 - floor(vVar22.x)));
		}
		else
		{
			uParam1->f_2 = (iParam9 + floor((func_775((!bVar43 || vVar25.x < vVar31.x), vVar25.x, vVar31.x) - vVar22.x)));
		}
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			return 0;
		}
		if (bVar42)
		{
			uParam1->f_3 = (iParam10 + floor((func_775((!bVar43 || vVar28.y > vVar31.y), vVar28.y, vVar31.y) - vVar22.y)));
		}
		else
		{
			uParam1->f_3 = (iParam10 + (iVar35 - floor(vVar22.y)));
		}
		if (uParam1->f_3 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
		*uParam1 = (floor(vVar22.x) - iVar45);
		uParam1->f_1 = (floor(vVar22.y) - iVar46);
	}
	else if (bVar41)
	{
		if (bVar43)
		{
			uParam1->f_3 = (iParam10 + floor((func_775(vVar28.y > vVar31.y, vVar28.y, vVar31.y) - vVar25.y)));
		}
		else
		{
			uParam1->f_3 = (iParam10 + (iVar35 - floor(vVar25.y)));
		}
		if (uParam1->f_3 < 1)
		{
			uParam1->f_3 = 0;
			return 0;
		}
		uParam1->f_2 = (iParam9 + floor(func_775((!bVar43 || vVar25.x > vVar31.x), vVar25.x, vVar31.x)));
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
		*uParam1 = 0;
		uParam1->f_1 = (floor(vVar25.y) - iVar46);
	}
	else if (bVar42)
	{
		if (bVar43)
		{
			uParam1->f_2 = (iParam9 + floor((vVar31.x - vVar28.x)));
			if (uParam1->f_2 < 1)
			{
				uParam1->f_2 = 0;
				return 0;
			}
		}
		else
		{
			uParam1->f_2 = (iParam9 + (iVar34 - floor(vVar28.x)));
			if (uParam1->f_2 < 1)
			{
				uParam1->f_2 = 0;
				return 0;
			}
		}
		uParam1->f_3 = (iParam10 + floor(vVar28.y));
		if (uParam1->f_3 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
		*uParam1 = (floor(vVar28.x) - iVar45);
		uParam1->f_1 = 0;
	}
	else if (bVar43)
	{
		*uParam1 = 0;
		uParam1->f_1 = 0;
		uParam1->f_2 = (iParam9 + floor(vVar31.x));
		uParam1->f_3 = (iParam10 + floor(vVar28.y));
		if (uParam1->f_2 < 1 || uParam1->f_3 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_658(int iParam0, var uParam1)
{
	iVar0 = (uParam1->f_2 / 2);
	iVar1 = (uParam1->f_3 / 2);
	iVar2 = (*uParam1 + iVar0);
	iVar3 = (uParam1->f_1 + iVar1);
	iVar4 = absi((*iParam0 - iVar2));
	iVar5 = absi((iParam0->f_1 - iVar3));
	if (iVar4 > (iVar0 + iParam0->f_2) || iVar5 > (iVar1 + iParam0->f_2))
	{
		return 0;
	}
	if (iVar4 <= iVar0 || iVar5 <= iVar1)
	{
		return 1;
	}
	iVar6 = (iVar4 - iVar0);
	iVar7 = (iVar5 - iVar1);
	iVar6 = (iVar6 * iVar6);
	iVar7 = (iVar7 * iVar7);
	if (iVar6 + iVar7) <= (iParam0->f_2 * iParam0->f_2)
	{
		return 1;
	}
	return 0;
}

int func_659(var uParam0)
{
	return uParam0->f_23;
}

float func_660(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_661(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_662(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_661(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_663() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

float func_663()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_664(int iParam0)
{
	if (func_333(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_665(var uParam0, var uParam1)
{
}

void func_666(int iParam0)
{
	iVar0 = func_334(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!func_776(iParam0))
	{
		func_183(iParam0, 0);
		return;
	}
	else if (func_333(iParam0, 8))
	{
		func_183(iParam0, 0);
	}
	bVar1 = vdist(get_entity_coords(iVar0, true, false), func_676(player_id())) <= Local_667.f_367[iParam0]->f_2;
	if (bVar1 != func_333(iParam0, 1))
	{
		func_183(iParam0, 0);
		if (bVar1)
		{
			if (!_0x870708a6e147a9ad(iVar0, Local_667.f_367[iParam0]->f_3, Local_667.f_367[iParam0]->f_2, 0, Local_667.f_367[iParam0]->f_4, 0, 0, 0, 0, 3))
			{
			}
			else
			{
				if (func_555(iParam0))
				{
					func_667(iParam0);
				}
				if (!_0x375f5870a7b8bec1(Local_667.f_367[iParam0]->f_3))
				{
					_0xfca8fb9e15fa80d3(iVar0, get_hash_key(Local_667.f_367[iParam0]->f_3));
				}
				if (network_has_control_of_entity(iVar0))
				{
					set_ped_config_flag(iVar0, 130, true);
					set_ped_config_flag(iVar0, 178, false);
					set_ped_config_flag(iVar0, 297, true);
					set_ped_config_flag(iVar0, 315, true);
					set_ped_config_flag(iVar0, 301, false);
				}
				func_554(iParam0, 1);
			}
		}
	}
}

void func_667(int iParam0)
{
	if (func_664(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_669(iParam0, iVar0, 1);
		iVar0++;
	}
	func_554(iParam0, 2);
}

bool func_668(int iParam0, int iParam1, int iParam2)
{
	return func_188(Local_667.f_367[iParam0]->f_6[iParam1]->f_1, iParam2);
}

void func_669(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_545(Local_667.f_367[iParam0]->f_6[iParam1], 1, 1);
	}
	if (_0x375f5870a7b8bec1(Local_667.f_367[iParam0]->f_6[iParam1]->f_2))
	{
		return;
	}
	if (Local_667.f_367[iParam0]->f_6[iParam1]->f_3 == 0)
	{
	}
	iVar0 = func_334(iParam0);
	iVar1 = func_777(Local_667.f_367[iParam0]->f_6[iParam1]->f_2, Local_667.f_367[iParam0]->f_6[iParam1]->f_3, iVar0, Local_667.f_367[iParam0]->f_6[iParam1]->f_4, Local_667.f_367[iParam0]->f_6[iParam1]->f_5, 0, 0, Local_667.f_367[iParam0]->f_6[iParam1]->f_6, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
	iVar2 = func_692(iVar1);
	func_778(iVar1, 18, 0, 1);
	func_778(iVar1, 17, 0, 1);
	_uiprompt_set_group((*Global_1951255)[iVar2]->f_3, _uiprompt_get_group_id_for_target_entity(iVar0), 0);
	if (func_668(iParam0, iParam1, 2))
	{
		func_779(iVar1, Local_667.f_367[iParam0]->f_6[iParam1]->f_2, Local_667.f_367[iParam0]->f_6[iParam1]->f_7, 1);
	}
	if (!func_668(iParam0, iParam1, 1))
	{
		if (func_668(iParam0, iParam1, 4))
		{
			if (func_670() < Local_667.f_367[iParam0]->f_6[iParam1]->f_7)
			{
				if (func_671(&(Local_667.f_367[iParam0]->f_6[iParam1]), 0))
				{
					func_558(&(Local_667.f_367[iParam0]->f_6[iParam1]), 0, 1, 1);
				}
			}
			else if (!func_671(&(Local_667.f_367[iParam0]->f_6[iParam1]), 0))
			{
				func_558(&(Local_667.f_367[iParam0]->f_6[iParam1]), 1, 1, 1);
			}
		}
	}
	else
	{
		func_558(iVar1, 0, 1, 1);
	}
	func_557(iParam0, iParam1, 16);
	Local_667.f_367[iParam0]->f_6[iParam1] = iVar1;
}

int func_670()
{
	if (func_28() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

bool func_671(int iParam0, bool bParam1)
{
	if (bParam1 && !func_544(iParam0))
	{
		return false;
	}
	return !func_780(iParam0, 4);
}

bool func_672(int iParam0, bool bParam1)
{
	if (bParam1 && !func_544(iParam0))
	{
		return false;
	}
	iVar0 = func_692(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

bool func_673(int iParam0, int iParam1, int iParam2)
{
	return true;
}

void func_674(int iParam0, int iParam1)
{
	func_781(0, 1);
	switch (func_363(func_229(iParam0)))
	{
		case 2:
			if (func_782(iParam0) == player_id())
			{
				switch (iParam1)
				{
					case 0:
						func_431(64);
						func_783(0, 0, -822629770, 1, 1, 0, 0);
						break;
					case 1:
						func_431(128);
						func_783(0, 0, -653113914, 1, 1, 0, 0);
						break;
				}
			}
			if (network_is_host_of_this_script())
			{
				func_423(2);
			}
			break;
	}
}

bool func_675(int iParam0, var uParam1, var uParam2, bool bParam3)
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

Vector3 func_676(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

int func_677(int iParam0, int iParam1, bool bParam2)
{
	if (!func_455(iParam0))
	{
		return 0;
	}
	iVar0 = func_301(iParam0);
	if (is_ped_dead_or_dying(iVar0, true) && !get_ped_config_flag(iVar0, 11, true))
	{
		iVar1 = get_ped_source_of_death(iVar0);
		if (does_entity_exist(iVar1) && is_entity_a_ped(iVar1))
		{
			if (get_ped_index_from_entity_index(iVar1) == iParam1)
			{
				return 1;
			}
		}
		if (bParam2)
		{
			if (has_entity_been_damaged_by_entity(iVar0, iParam1, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_678()
{
	if (func_28() != 0)
	{
		return true;
	}
	if (!_unlock_is_unlocked(-1461907237))
	{
		return true;
	}
	if (Global_1139381->f_3876.f_1 & 2 != 0)
	{
		return true;
	}
	if (Global_1139381->f_3876.f_1 & 4 != 0)
	{
		return true;
	}
	if (!has_network_time_started())
	{
		return true;
	}
	return false;
}

int func_679(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2086327823:
			return 64;
		case -2076515520:
			return 98;
		case -2062348046:
			return 101;
		case -1983943039:
			return 62;
		case -1967078622:
			return 4;
		case -1935655667:
			return 39;
		case -1930919582:
			return 56;
		case -1930399868:
			return 68;
		case -1924130593:
			return 102;
		case -1898294040:
			return 50;
		case -1854780893:
			return 5;
		case -1783181138:
			return 13;
		case -1777144780:
			return 92;
		case -1679013564:
			return 16;
		case -1648877470:
			return 43;
		case -1634863390:
			return 10;
		case -1598949067:
			return 45;
		case -1575244427:
			return 67;
		case -1494363065:
			return 1;
		case -1408563730:
			return 30;
		case -1399051227:
			return 53;
		case -1393798041:
			return 59;
		case -1376314322:
			return 49;
		case -1330378740:
			return 95;
		case -1315007749:
			return 21;
		case -1296513906:
			return 11;
		case -1258163578:
			return 48;
		case -1215742816:
			return 37;
		case -1152882498:
			return 18;
		case -1098645728:
			return 93;
		case -1034424695:
			return 32;
		case -1030655937:
			return 12;
		case -985005225:
			return 57;
		case -892848695:
			return 74;
		case -789758703:
			return 34;
		case -757633599:
			return 31;
		case -706075066:
			return 17;
		case -682435976:
			return 82;
		case -634665876:
			return 15;
		case -545299531:
			return 44;
		case -514316475:
			return 2;
		case -479797100:
			return 105;
		case -469672732:
			return 70;
		case -379874384:
			return 79;
		case -355092128:
			return 75;
		case -326224139:
			return 100;
		case -210274020:
			return 35;
		case -162385832:
			return 73;
		case -114666387:
			return 51;
		case -86995487:
			return 20;
		case -79139194:
			return 77;
		case -71551190:
			return 96;
		case -32613857:
			return 86;
		case -29468993:
			return 103;
		case -1:
			return 0;
		case 5611246:
			return 87;
		case 81846499:
			return 23;
		case 120448958:
			return 27;
		case 151445061:
			return 61;
		case 242857368:
			return 42;
		case 300196727:
			return 41;
		case 334700325:
			return 52;
		case 353568324:
			return 69;
		case 385589027:
			return 24;
		case 396837320:
			return 29;
		case 440583097:
			return 47;
		case 449057693:
			return 22;
		case 457103096:
			return 55;
		case 477974086:
			return 6;
		case 478308321:
			return 46;
		case 499656970:
			return 8;
		case 618068466:
			return 7;
		case 630308764:
			return 89;
		case 633501950:
			return 36;
		case 640330073:
			return 94;
		case 669386338:
			return 104;
		case 796310207:
			return 66;
		case 905156700:
			return 60;
		case 941437279:
			return 72;
		case 946732137:
			return 76;
		case 1232224440:
			return 83;
		case 1248971179:
			return 97;
		case 1250422342:
			return 14;
		case 1257949393:
			return 3;
		case 1316486837:
			return 26;
		case 1345888212:
			return 28;
		case 1382158532:
			return 78;
		case 1398164246:
			return 90;
		case 1427070667:
			return 81;
		case 1571096148:
			return 54;
		case 1623086000:
			return 65;
		case 1717813521:
			return 71;
		case 1723535349:
			return 58;
		case 1791948823:
			return 9;
		case 1841970554:
			return 33;
		case 1872332830:
			return 99;
		case 1889309476:
			return 84;
		case 1898201469:
			return 40;
		case 1918774327:
			return 85;
		case 1951290581:
			return 25;
		case 1971904853:
			return 38;
		case 2002140369:
			return 91;
		case 2018657739:
			return 80;
		case 2021695109:
			return 63;
		case 2078792148:
			return 88;
		case 2108116481:
			return 19;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_680(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 185;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 7, 8, &uParam1);
}

bool func_681()
{
	iVar0 = func_194();
	if (!_network_has_control_of_anim_scene(iVar0))
	{
		return false;
	}
	if (!_does_anim_scene_exist(iVar0) || !_is_anim_scene_loaded(iVar0, true, false))
	{
		return false;
	}
	if (!func_455(0))
	{
		return false;
	}
	bVar1 = false;
	vVar8 = { func_784() };
	iVar11 = func_301(0);
	_get_anim_scene_origin(iVar0, &vVar2, &uVar5, 2);
	if (!func_531(vVar2, vVar8, 1056964608, 1))
	{
		set_anim_scene_origin(iVar0, vVar8, 0f, 0f, 0f, 2);
		bVar1 = true;
	}
	if (_get_anim_scene_ped(iVar0, "male", false) != iVar11)
	{
		set_anim_scene_entity(iVar0, "male", func_301(0), 0);
		bVar1 = true;
	}
	if (bVar1)
	{
		return false;
	}
	if (!func_785(iVar0, func_281(0)))
	{
		return false;
	}
	func_431(2);
	return true;
}

bool func_682(int iParam0)
{
	if (!func_455(iParam0))
	{
		return false;
	}
	return network_has_control_of_entity(&(Local_667.f_74.f_7[iParam0]));
}

int func_683(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		if (!does_entity_exist(&(Local_667.f_74.f_7[iParam0])))
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
		else if (&Local_58[iVar0]->f_2.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam3 && !func_523(iVar0))
		{
		}
		else if (iVar1 != -1 && &Local_58[iVar0]->f_2.f_2[iParam0] > &Local_58[iVar1]->f_2.f_2[iParam0])
		{
		}
		else if (bVar2 && &Local_58[iVar0]->f_2.f_2[iParam0] > fParam1)
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

bool func_684(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_685(int iParam0, int iParam1)
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

bool func_686(int iParam0, int iParam1)
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
	if (func_253(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_253(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_253(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_253(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_253(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_253(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_253(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_253(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_687(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

char* func_688(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 1:
					return "RE_CW_MTN_V2_RAMBLING_A";
				case 2:
					return "RE_CW_MTN_V2_RAMBLING_B";
				case 4:
					return "RE_CW_MTN_V2_RAMBLING_C";
				case 8:
					return "RE_CW_MTN_V2_RAMBLING_D";
				case 16:
					return "RE_CW_MTN_V2_LEAVE_ROCK";
				case 32:
					return "RE_CW_MTN_V2_EARLY_FINISH";
				case 64:
					return "RE_CW_MTN_V2_BOSS_HAPPY";
				case 128:
					return "RE_CW_MTN_V2_AGGRO_A";
				case 256:
					return "RE_CW_MTN_V2_AGGRO_B";
				case 512:
					return "RE_CW_MTN_V2_AGGRO_C";
				case 1024:
					return "RE_CW_MTN_V2_AGGRO_D";
				case 2048:
					return "RE_CW_MTN_V2_AGGRO_E";
				case 4096:
					return "GENERIC_THANKS";
				case 8192:
					return "GENERIC_CURSE_MED";
				case 16384:
					return "RE_CW_MTN_V2_HELP_SELF";
				case 32768:
					return "RE_CW_MTN_V2_LEAVE";
				case 65536:
					return "RE_CW_MTN_V2_AGGRO";
				case 131072:
					return "RE_CW_MTN_V2_WATCH_STUFF";
				case 262144:
					return "RE_CW_MTN_V2_TASTE";
				case 524288:
					return "RE_CW_MTN_V2_TASTE_B";
				case 1048576:
					return "RE_CW_MTN_V2_TASTE_C";
				case 2097152:
					return "RE_CW_MTN_V2_FOLLOW_A";
				case 4194304:
					return "RE_CW_MTN_V2_FOLLOW_B";
				case 8388608:
					return "RE_CW_MTN_V2_FOLLOW_A_RANDOM";
				case 16777216:
					return "RE_CW_MTN_V2_FOLLOW_B_RANDOM";
				case 33554432:
					return "RE_CW_MTN_V2_PASS_OUT_A";
				case 67108864:
					return "RE_CW_MTN_V2_PASS_OUT_B";
				case 134217728:
					return "IGNORING_YOU";
				case 268435456:
					return "RE_CW_MTN_V2_AGGRO_MINOR_B";
				case 536870912:
					return "RE_CW_MTN_V2_AGGRO_MINOR_C";
				case 1073741824:
					return "RE_CW_MTN_V2_HOGTIE";
				default:
					break;
			}
			break;
		case 4:
		case 5:
		case 6:
			switch (iParam1)
			{
				case 1:
					return "RE_CW_LWL_V2_RAMBLING_A";
				case 2:
					return "RE_CW_LWL_V2_RAMBLING_B";
				case 4:
					return "RE_CW_LWL_V2_RAMBLING_C";
				case 8:
					return "RE_CW_LWL_V2_RAMBLING_D";
				case 16:
					return "RE_CW_LWL_V2_LEAVE_ROCK";
				case 32:
					return "RE_CW_LWL_V2_EARLY_FINISH";
				case 64:
					return "RE_CW_LWL_V2_BOSS_HAPPY";
				case 128:
					return "RE_CW_LWL_V2_AGGRO_A";
				case 256:
					return "RE_CW_LWL_V2_AGGRO_B";
				case 512:
					return "LIARS_DICE_BULLSHIT";
				case 1024:
					return "RE_CW_LWL_V2_AGGRO_D";
				case 2048:
					return "RE_CW_LWL_V2_AGGRO_E";
				case 4096:
					return "MINIGAME_VOCALFX_EXCITED";
				case 8192:
					return "RE_CW_LWL_V2_NEGATIVE_REACT";
				case 16384:
					return "RE_CW_LWL_V2_HELP_SELF";
				case 32768:
					return "RE_CW_LWL_V2_LEAVE";
				case 65536:
					return "RE_CW_LWL_V2_AGGRO";
				case 131072:
					return "RE_CW_LWL_V2_WATCH_STUFF";
				case 262144:
					return "RE_CW_LWL_V2_TASTE";
				case 524288:
					return "RE_CW_LWL_V2_TASTE_B";
				case 1048576:
					return "RE_CW_LWL_V2_TASTE_C";
				case 2097152:
					return "RE_CW_LWL_V2_FOLLOW_A";
				case 4194304:
					return "RE_CW_LWL_V2_FOLLOW_B";
				case 8388608:
					return "RE_CW_LWL_V2_FOLLOW_A_RANDOM";
				case 16777216:
					return "RE_CW_LWL_V2_FOLLOW_B_RANDOM";
				case 33554432:
					return "RE_CW_LWL_V2_PASS_OUT_A";
				case 67108864:
					return "RE_CW_LWL_V2_PASS_OUT_B";
				case 134217728:
					return "RE_CW_LWL_V2_AGGRO_MINOR_A";
				case 268435456:
					return "RE_CW_LWL_V2_AGGRO_MINOR_B";
				case 536870912:
					return "RE_CW_LWL_V2_AGGRO_MINOR_C";
				case 1073741824:
					return "RE_CW_LWL_V2_HOGTIE";
				default:
					break;
			}
			break;
	}
	return "INVALID DIALOGUE BIT";
}

int func_689(int iParam0)
{
	switch (func_233())
	{
		case 0:
		case 1:
		case 2:
		case 3:
			switch (iParam0)
			{
				case 8192:
					return 2;
			}
			break;
		case 4:
		case 5:
		case 6:
			switch (iParam0)
			{
				case 512:
					return 1;
				case 4096:
					return 3;
			}
			break;
	}
	return 0;
}

bool func_690(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = sParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_786(iParam0, &Var0);
}

void func_691(int iParam0)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	func_254(&(Local_13.f_7.f_4), iParam0);
}

int func_692(int iParam0)
{
	return iParam0;
}

void func_693(int iParam0)
{
	if (!func_787(iParam0))
	{
		return;
	}
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_delete((*Global_1951255)[iParam0]->f_3);
	}
	(*Global_1951255)[iParam0]->f_4 = 0;
	(*Global_1951255)[iParam0] = 1;
	(*Global_1951255)[iParam0]->f_16 = 0;
	(*Global_1951255)[iParam0]->f_1 = 0;
	(*Global_1951255)[iParam0]->f_6 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_9 = 0f;
	(*Global_1951255)[iParam0]->f_10 = 0;
	(*Global_1951255)[iParam0]->f_11 = 0;
	(*Global_1951255)[iParam0]->f_2 = 1;
	(*Global_1951255)[iParam0]->f_15 = -1f;
}

bool func_694(struct<2> Param0, var uParam2)
{
	if (!func_40(Param0))
	{
		return false;
	}
	func_788(uParam2);
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

int func_695()
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

void func_696(var uParam0, var uParam1)
{
}

int func_697()
{
	if (&Global_1102219 <= 5)
	{
		return &Global_1102219;
	}
	if (&Global_1102219 <= 22)
	{
		return 4;
	}
	if (&Global_1102219 <= 25)
	{
		return 3;
	}
	return 26;
}

void func_698(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_699(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_780(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_700(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_701(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

int func_702(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

bool func_703(int iParam0)
{
	return Local_13.f_40[iParam0]->f_2 > 0;
}

int func_704()
{
	return Global_1051252->f_12;
}

char* func_705()
{
	return "unnamed";
}

int func_706(int iParam0)
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

bool func_707(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_789(36, iParam0);
}

int func_708(int iParam0)
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

bool func_709(int iParam0)
{
	if (func_790(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_791(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

void func_710(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_711(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_712(var uParam0)
{
	return func_600(*uParam0, 2);
}

void func_713(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (&uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case 291123060:
			case 617531372:
				if (&uParam0->f_1[iVar1] == 617531372 || &uParam0->f_1[iVar1] == 291123060)
				{
					bVar0 = true;
				}
				break;
			case 1356624740:
			case 1884295263:
				if (&uParam0->f_1[iVar1] == 1356624740 || &uParam0->f_1[iVar1] == 1884295263)
				{
					bVar0 = true;
				}
				break;
			case -1850666435:
			case 1551239286:
			case 1937393363:
				if ((&uParam0->f_1[iVar1] == 1551239286 || &uParam0->f_1[iVar1] == -1850666435) || &uParam0->f_1[iVar1] == 1937393363)
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_714(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_792(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_793(uParam2, iParam0, Var1);
	return 1;
}

int func_715(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

void func_716(int iParam0)
{
	iVar0 = Global_1296859->f_21;
	Var1 = { func_462(iParam0, 1178968787) };
	if (!stat_id_set_int(&Var1, iVar0, true))
	{
	}
}

int func_717(int iParam0, int iParam1, int iParam2)
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
		func_32(&Var2, *iParam1, -1, -1, 255);
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

struct<2> func_718(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

bool func_719(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_694(Param0, &vVar0);
	if (func_794(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

float func_720(float fParam0, float fParam1, float fParam2)
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

void func_721(int iParam0)
{
}

void func_722(int iParam0)
{
}

bool func_723(int iParam0, var uParam1)
{
	fVar0 = func_795(uParam1);
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
		fVar2 = func_796(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
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
					if (func_797())
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

bool func_724(int iParam0, var uParam1)
{
	if (func_798(iParam0))
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

void func_725(int iParam0)
{
	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1940258->f_32);
	Global_1940258->f_21 = func_799();
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
			func_800(&(Global_1940258->f_28), &(Global_1940258->f_33));
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

var func_726(int iParam0)
{
	return &(Global_1102219->f_3705[iParam0]);
}

bool func_727(bool bParam0, bool bParam1)
{
	if (func_801(bParam0, &iVar0, &iVar1))
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

bool func_728(var uParam0)
{
	iVar0 = Global_1940258->f_34;
	if (func_28() == -1)
	{
		if (Global_1940258->f_34 == 0)
		{
			iVar0 = func_802(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1940258->f_34) || !&Global_1956200->f_1716[4])
	{
		iVar0 = func_802(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_757(iVar0) == -1)
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

void func_729(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_803(uParam0);
	}
}

bool func_730(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_757(iParam2);
	}
	else
	{
		iVar1 = func_756(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_757(iParam0);
	}
	else
	{
		iVar0 = func_756(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_188(*uParam1, 8388608))
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

float func_731(int iParam0, int iParam1)
{
	return func_754(iParam0, iParam1, 1, 1);
}

float func_732(var uParam0)
{
	return uParam0->f_29;
}

bool func_733(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_734(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_254(uParam0, 134217728);
	}
	else
	{
		func_272(uParam0, 134217728);
	}
}

void func_735()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_736(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_754(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_804(iVar0, 0)))
		{
			if (func_805(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_737(var uParam0)
{
	return uParam0->f_18;
}

bool func_738(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_188(*uParam0, 4194304))
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

int func_739(var uParam0)
{
	return uParam0->f_19;
}

int func_740(var uParam0)
{
	return uParam0->f_20;
}

bool func_741(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_804(iVar0, 0)))
		{
			if (func_806(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_742(bool bParam0, bool bParam1, bool bParam2)
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

float func_743(var uParam0)
{
	return uParam0->f_25;
}

int func_744(var uParam0)
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

bool func_745(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_807(iParam0, vParam4, 0.5f))
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

int func_746(int iParam0)
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
	if (func_808(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_747(int iParam0)
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

bool func_748(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_798(iParam1))
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

bool func_749(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_798(iParam1))
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

bool func_750(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = func_809(uParam0);
	if (func_798(iParam1))
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

bool func_751(int iParam0, int iParam1)
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

bool func_752(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (_0x8d50f43298ab9545(iParam0, iParam1))
	{
		return true;
	}
	if (!_is_weapon_lasso(func_810(iParam0, 1, 0, 0)) && !func_810(iParam0, 1, 0, 0) == 1151374672)
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

bool func_753(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_754(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_755(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_542(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_756(int iParam0)
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

int func_757(int iParam0)
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

float func_758(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

int func_759(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_751(Global_34, &iVar1))
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
		fVar2 = func_754(iParam0, player_ped_id(), 0, 1);
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
		if (func_754(iParam0, Global_1940258->f_34, 0, 1) < 2.5f)
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

bool func_760(int iParam0, var uParam1, bool bParam2)
{
	func_801(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_762(uParam1, iVar0))
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
				if (!bParam2 || !func_762(uParam1, iVar1))
				{
					if (func_542(iVar1, Global_35, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_761(var uParam0)
{
	return func_188(*uParam0, 131072);
}

bool func_762(var uParam0, int iParam1)
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

bool func_763(int iParam0)
{
	return false;
}

int func_764(var uParam0)
{
	return uParam0->f_22;
}

int func_765(int iParam0, var uParam1, bool bParam2, float fParam3)
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

float func_766(vector3 vParam0, vector3 vParam3)
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

bool func_767(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_768(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_769(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

float func_770(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_811(vVar2.x, fVar0);
	fVar1 = func_796(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_811(vVar2.x, fVar0);
	fVar1 = func_796(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_811(vVar2.x, fVar0);
	fVar1 = func_796(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_811(vVar2.x, fVar0);
	fVar1 = func_796(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_811(vVar2.x, fVar0);
	fVar1 = func_796(vVar2.x, fVar1);
	return (fVar0 - fVar1);
}

float func_771(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_811(vVar2.y, fVar0);
	fVar1 = func_796(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_811(vVar2.y, fVar0);
	fVar1 = func_796(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_811(vVar2.y, fVar0);
	fVar1 = func_796(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_811(vVar2.y, fVar0);
	fVar1 = func_796(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_811(vVar2.y, fVar0);
	fVar1 = func_796(vVar2.y, fVar1);
	return (fVar0 - fVar1);
}

float func_772(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_811(vVar2.z, fVar0);
	fVar1 = func_796(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_811(vVar2.z, fVar0);
	fVar1 = func_796(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_811(vVar2.z, fVar0);
	fVar1 = func_796(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_811(vVar2.z, fVar0);
	fVar1 = func_796(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_811(vVar2.z, fVar0);
	fVar1 = func_796(vVar2.z, fVar1);
	return (fVar0 - fVar1);
}

Vector3 func_773(int iParam0)
{
	if (!does_cam_exist(iParam0))
	{
		vVar0 = { get_gameplay_cam_rot(2) };
	}
	else
	{
		vVar0 = { get_cam_rot(iParam0, 2) };
	}
	fVar3 = sin(vVar0.z);
	fVar4 = cos(vVar0.z);
	fVar5 = sin(vVar0.x);
	fVar6 = cos(vVar0.x);
	return func_408((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_774(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_775(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_776(int iParam0)
{
	return !func_333(iParam0, 4);
}

int func_777(char* sParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (!does_entity_exist(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_780(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == (*Global_1951255)[iVar0]->f_11 && iParam1 == (*Global_1951255)[iVar0]->f_4)
				{
					if (iParam3 <= Global_1951255[iVar0])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_812(iVar1, iParam1, sParam0, 5, iParam3, uParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_778(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_544(iParam0))
	{
		return;
	}
	iVar0 = func_692(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

void func_779(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_544(iParam0))
	{
		return;
	}
	iVar0 = func_692(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

bool func_780(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_781(bool bParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = func_182(iVar0);
		func_369(iVar1, 0, bParam0, bParam1);
		func_369(iVar1, 1, bParam0, bParam1);
		func_369(iVar1, 2, bParam0, bParam1);
		iVar0++;
	}
}

int func_782(int iParam0)
{
	return Local_13.f_40[iParam0]->f_1;
}

void func_783(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (_is_ped_carrying(iVar0))
	{
		return;
	}
	if (func_768(iVar0, 0, 1, 0) != -1569615261)
	{
		return;
	}
	_task_emote_2(iVar0, iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, 0);
}

Vector3 func_784()
{
	switch (func_195())
	{
		case 2:
			switch (func_233())
			{
				case 0:
					return -1497.818f, -556.8351f, 132.8748f;
				case 1:
					return -1757.976f, 270.188f, 119.49f;
				case 2:
					return -2767f, -157.757f, 151.381f;
				case 3:
					return -719.1843f, -747.2665f, 48.8984f;
				case 4:
					return 948.085f, -1257.209f, 53.973f;
				case 5:
					return 1092.027f, -1415.588f, 55.604f;
				case 6:
					return 1297.907f, -1595.661f, 63.79068f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_785(int iParam0, char* sParam1)
{
	if (_network_has_control_of_anim_scene(iParam0))
	{
		if (!_does_anim_scene_exist(iParam0))
		{
		}
		else if (!_is_anim_scene_loaded(iParam0, true, false))
		{
		}
		else if (_is_anim_scene_started(iParam0, false))
		{
			return true;
		}
		else
		{
			start_anim_scene(iParam0);
		}
	}
	return false;
}

bool func_786(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_787(int iParam0)
{
	return func_780(iParam0, 2);
}

void func_788(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_789(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_813(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_814())
	{
		return func_813(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_813(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_790(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_791(int iParam0)
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
		func_815(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_816(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

void func_792(var uParam0)
{
	func_713(uParam0, 143479330);
	if (func_817() == 2026485318)
	{
		func_713(uParam0, 617531372);
	}
	else
	{
		func_713(uParam0, 291123060);
	}
}

void func_793(var uParam0, int iParam1, struct<15> Param2)
{
	if (!func_818(uParam0))
	{
		return;
	}
	if (Global_1293346->f_2538 < 20)
	{
		Global_1293346->f_2538++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_2538.f_1[iVar0] = { *(Global_1293346->f_2538.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1293346->f_2538.f_1[(Global_1293346->f_2538 - 1)]) = { Var1 };
}

bool func_794(int iParam0, var uParam1, var uParam2)
{
	if (!func_819(iParam0))
	{
		return false;
	}
	if (func_820(iParam0, uParam1, &uVar0))
	{
		func_821(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

float func_795(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_565(uParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_822(uParam0);
	}
	return func_565(uParam0);
}

float func_796(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_797()
{
	iVar0 = func_824(func_823());
	iVar1 = func_825(func_823());
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

bool func_798(int iParam0)
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

bool func_799()
{
	if (func_826())
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

void func_800(var uParam0, var uParam1)
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

bool func_801(bool bParam0, int iParam1, int iParam2)
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

int func_802(var uParam0)
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

void func_803(var uParam0)
{
	if (Global_1940258->f_32 == 0)
	{
		func_272(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940258->f_33)
		{
			if (does_entity_exist(&(Global_1940258->f_28[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1940258->f_28[iVar0])))
				{
					func_254(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_804(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_805(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_806(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_806(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_807(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_808(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_809(var uParam0)
{
	return uParam0->f_28;
}

int func_810(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_811(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_812(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	(*Global_1951255)[iParam0]->f_4 = iParam1;
	(*Global_1951255)[iParam0] = iParam4;
	(*Global_1951255)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1951255)[iParam0]->f_2 = uParam5;
	(*Global_1951255)[iParam0]->f_6 = { vParam6 };
	(*Global_1951255)[iParam0]->f_9 = fParam9;
	(*Global_1951255)[iParam0]->f_10 = iParam10;
	(*Global_1951255)[iParam0]->f_11 = iParam11;
	(*Global_1951255)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_5 = iParam12;
	(*Global_1951255)[iParam0]->f_1 = 2;
	(*Global_1951255)[iParam0]->f_17 = -1;
	(*Global_1951255)[iParam0]->f_18 = iParam16;
	(*Global_1951255)[iParam0]->f_19 = iParam15;
	(*Global_1951255)[iParam0]->f_20 = bParam25;
	(*Global_1951255)[iParam0]->f_22 = 0f;
	if (bParam25)
	{
		(*Global_1951255)[iParam0]->f_21 = get_game_timer();
	}
	else
	{
		(*Global_1951255)[iParam0]->f_21 = _get_system_time();
	}
	iVar0 = _uiprompt_register_begin();
	_uiprompt_set_control_action(iVar0, iParam1);
	if (iParam23 != 0)
	{
		_uiprompt_set_control_action(iVar0, iParam23);
	}
	_uiprompt_set_text(iVar0, sParam2);
	if (iParam3 == 4)
	{
		_uiprompt_context_set_point(iVar0, vParam6);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		_0x4d107406667423be(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		_0x4d107406667423be(iVar0, iParam11);
		_uiprompt_context_set_point(iVar0, 0f, 0f, 0f);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	_uiprompt_set_priority(iVar0, iParam4);
	_uiprompt_set_transport_mode(iVar0, uParam5);
	_uiprompt_set_attribute(iVar0, 18, 1);
	if (bParam22)
	{
		_0x53ce46c01a089da1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			_uiprompt_set_standard_mode(iVar0, 0);
			break;
		case 2:
			_uiprompt_set_standard_mode(iVar0, 1);
			break;
		case 1:
			_uiprompt_set_pressed_timed_mode(iVar0, iParam16);
			break;
		case 3:
			_uiprompt_set_hold_indefinitely_mode(iVar0);
			break;
		case 6:
			_uiprompt_set_hold_auto_fill_mode(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				_uiprompt_set_attribute(iVar0, 24, 1);
			}
			break;
		case 7:
			_0xa3f2149aa24f3d8e(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				_uiprompt_set_attribute(iVar0, 24, 1);
			}
			break;
		case 8:
			_uiprompt_set_mash_mode(iVar0, iParam17);
			break;
		case 9:
			_uiprompt_set_mash_auto_fill_mode(iVar0, iParam16, iParam17);
			break;
		case 14:
			_uiprompt_set_mash_indefinitely_mode(iVar0);
			break;
		case 16:
			_uiprompt_set_target_mode(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			_uiprompt_set_mash_with_resistance_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			_uiprompt_set_standardized_hold_mode(iVar0, iParam24);
			break;
		case 11:
			_uiprompt_set_mash_with_resistance_can_fail_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			_uiprompt_set_mash_manual_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			_uiprompt_set_mash_manual_can_fail_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			_uiprompt_set_rotate_mode(iVar0, iParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1951255)[iParam0]->f_3 = iVar0;
	func_699(iParam0, 1);
	func_700(iParam0, 1);
	func_701(iParam0, 128);
}

bool func_813(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_814()
{
	return Global_1102219->f_3672;
}

void func_815(int iParam0)
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
	func_816(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_816(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

int func_817()
{
	return Global_1952637->f_1;
}

bool func_818(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_819(int iParam0)
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

bool func_820(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_827(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_821(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_828(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_829(iVar0);
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
			uParam2->f_5 = func_830(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_831(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_832(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_833(iVar0);
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

var func_822(var uParam0)
{
	return uParam0->f_27;
}

int func_823()
{
	return &Global_1902818;
}

int func_824(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_825(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

bool func_826()
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

int func_827(int iParam0)
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

int func_828(int iParam0, var uParam1)
{
	if (func_834(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_829(int iParam0)
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

int func_830(int iParam0)
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

int func_831(int iParam0)
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

int func_832(int iParam0)
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

int func_833(int iParam0)
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

bool func_834(int iParam0, var uParam1, var uParam2)
{
	if (func_835(iParam0, uParam1, &uVar0))
	{
		func_836(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_835(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_827(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_836(var uParam0, int iParam1, var uParam2)
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

