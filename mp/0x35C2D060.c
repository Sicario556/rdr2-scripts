void __EntryFunction__()
{
	fLocal_1104 = 1f;
	fLocal_1105 = 1f;
	iVar0 = iVar1105;
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
	network_register_host_broadcast_variables(&Local_13, 74, 43);
	func_10(_0xba24095ea96dfe17(&Local_13), 74, "m_hostData");
	network_register_player_broadcast_variables(&Local_87, 705, 44);
	func_11(_0x690806bc83bc8ca2(Local_87[0]), 705, "m_clientData");
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
	else if (func_17(Local_792.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_792.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_792.f_12), Local_792.f_9))
	{
		return true;
	}
	else if (Local_792.f_8 == 6)
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
	_copy_memory(&Local_792, uParam0, 5);
	iVar2 = func_31(&bVar1, Local_792.f_1, Local_792.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_792.f_12 = iVar2;
	iVar0 = Global_1198046->f_231.f_1066[iVar2]->f_5;
	Var3.f_10 = 1106247680;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_32(&Var3, Local_792.f_1, Local_792.f_2, Local_792.f_3, iVar0);
	Local_792.f_9 = { func_33(Var3.f_5, 8) };
	Local_792.f_14 = Var3.f_5;
	Local_792.f_15 = { Var3.f_11 };
	Local_792.f_18 = Var3.f_7;
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
	if (Local_792.f_8 <= 5)
	{
		func_51();
	}
	switch (Local_792.f_8)
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
}

void func_27()
{
	if (Local_792.f_12 != -1)
	{
		if (network_is_game_in_progress() && network_get_num_participants() <= 1)
		{
			func_64(Local_792.f_12, 4);
		}
	}
	func_65();
	if (func_66(64))
	{
		func_67(Local_13.f_6);
	}
	func_68();
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
		Local_13.f_69.f_1[iVar0] = 255;
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
	func_69(&Var0, Var26.f_5);
	iVar25 = func_70(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_71(iVar25) };
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
			func_72(uParam0, iParam2);
			break;
		case 2:
			func_73(uParam0, iParam2);
			break;
		case 3:
			func_74(uParam0, iParam2);
			break;
		case 4:
			func_75(uParam0, iParam2);
			break;
		case 12:
			func_76(uParam0, iParam2);
			break;
		case 6:
			func_77(uParam0, iParam2, -1);
			break;
		case 7:
			func_78(uParam0, iParam2, iParam3);
			break;
		case 5:
			func_79(uParam0, iParam2);
			break;
		case 11:
			func_80(uParam0, iParam2);
			break;
		case 9:
			func_81(uParam0, iParam2, iParam3);
			break;
		case 10:
			func_82(uParam0, iParam2);
			break;
		case 8:
			func_83(uParam0, iParam2);
			break;
		case 13:
			func_84(uParam0, iParam2, iParam4);
			break;
		case 14:
			func_85(uParam0, iParam2, iParam3);
			break;
		case 15:
			func_86(uParam0, iParam2);
			break;
		case 16:
			func_87(uParam0, iParam2, iParam3);
			break;
		case 31:
			func_88(uParam0, iParam2);
			break;
		case 21:
			func_89(uParam0, iParam2);
			break;
		case 28:
			func_90(uParam0, iParam2);
			break;
		case 25:
			func_91(uParam0, iParam2);
			break;
		case 24:
			func_92(uParam0, iParam2);
			break;
		case 22:
			func_93(uParam0, iParam2);
			break;
		case 23:
			func_94(uParam0, iParam2);
			break;
		case 29:
			func_95(uParam0, iParam2);
			break;
		case 26:
			func_96(uParam0, iParam2);
			break;
		case 30:
			func_97(uParam0, iParam2);
			break;
		case 27:
			func_98(uParam0, iParam2);
			break;
		case 32:
			func_99(uParam0, iParam2, iParam3);
			break;
		case 33:
			func_100(uParam0, iParam2, iParam3);
			break;
		case 34:
			func_101(uParam0, iParam2);
			break;
		case 17:
			func_102(uParam0, iParam2);
			break;
		case 18:
			func_103(uParam0, iParam2);
			break;
		case 19:
			func_104(uParam0, iParam2);
			break;
		case 20:
			func_105(uParam0, iParam2);
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
			func_106(uParam0, iParam1, iParam2);
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
			Var0.f_1 = func_108(iParam0, &(Global_1071686->f_636), func_107(iParam1));
			break;
		case 3:
			Var0.f_1 = func_108(iParam0, &(Global_1071686->f_636.f_602), func_107(iParam1));
			break;
		case 4:
			Var0.f_1 = func_108(iParam0, &(Global_1071686->f_636.f_2104), func_107(iParam1));
			break;
		case 5:
			Var0.f_1 = func_108(iParam0, &(Global_1071686->f_636.f_12606), func_107(iParam1));
			break;
		case 6:
			Var0.f_1 = func_108(iParam0, &(Global_1071686->f_636.f_12908), func_107(iParam1));
			break;
		case 7:
			Var0.f_1 = func_108(iParam0, &(Global_1071686->f_636.f_15910), func_107(iParam1));
			break;
		case 8:
			Var0.f_1 = func_108(iParam0, &(Global_1071686->f_636.f_16512), func_107(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_109();
	}
	return Var0;
}

void func_34()
{
	func_110();
	func_111();
	func_112();
}

void func_35()
{
	func_113();
	func_114(0);
	switch (func_115())
	{
		case 0:
			func_116(0, -1082130432, -1082130432);
			func_117(0);
			break;
	}
}

void func_36()
{
}

void func_37()
{
}

bool func_38(struct<2> Param0)
{
	if (!func_118(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_107(Param0))
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
	iVar0 = Global_1198046->f_231.f_1066[Local_792.f_12]->f_5;
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_32(&Var1, Local_792.f_1, Local_792.f_2, Local_792.f_3, iVar0);
	if (!func_119(&Var1, 1))
	{
		func_120(1);
		return;
	}
	Local_13.f_6 = func_121(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar0)));
	func_122(256);
	if (func_123(Local_13.f_6))
	{
		func_124(5);
		func_120(6);
	}
	else
	{
		func_120(1);
	}
}

void func_44()
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, Local_792.f_1, Local_792.f_2, -1, 255);
	if (func_119(&Var0, 1))
	{
		func_120(2);
		return;
	}
	if (func_125(Var0, &bVar31))
	{
		clear_area(Local_792.f_15, Var0.f_10, 2442122);
		func_120(2);
	}
	else if (bVar31)
	{
		func_124(3);
		func_120(6);
	}
	if (!func_126(Local_13.f_3.f_2))
	{
		func_127(&(Local_13.f_3.f_2));
	}
	else if (func_128(Local_13.f_3.f_2) > 45000)
	{
		func_124(4);
		func_120(6);
	}
}

void func_45()
{
	if (func_129(1, 255))
	{
		if (!func_130(1))
		{
			if (func_131())
			{
				func_122(1);
			}
		}
		else
		{
			func_132();
			func_120(3);
		}
	}
}

void func_46()
{
	if (func_129(2, 255))
	{
		if (!func_130(2))
		{
			bVar0 = true;
			if (!func_133())
			{
				bVar0 = false;
			}
			if (!func_134())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_122(2);
			}
		}
		else
		{
			func_135();
			func_120(4);
		}
	}
}

void func_47()
{
	func_136();
	func_137();
	func_138();
	if (func_139() || Local_13.f_2 != 0)
	{
		func_140();
		func_120(5);
	}
}

void func_48()
{
	if (func_129(4, 255))
	{
		if (func_141())
		{
			func_122(4);
			func_120(6);
		}
	}
}

void func_49()
{
	if (!func_130(256))
	{
		return;
	}
	if (func_130(512))
	{
		if (func_66(64) && func_121(player_id()) == Local_13.f_6)
		{
			func_67(Local_13.f_6);
			func_142(64);
		}
	}
	else if (!func_66(64))
	{
		if (func_121(player_id()) == Local_13.f_6)
		{
			func_143(Local_13.f_6, 1, 1);
			func_144(64);
		}
	}
	else if (func_121(player_id()) != Local_13.f_6)
	{
		func_67(Local_13.f_6);
		func_142(64);
	}
}

void func_50()
{
	if (!Global_13)
	{
		if (func_129(8192, 255))
		{
			func_145(8192);
		}
	}
	else if (!func_129(8192, 255))
	{
		func_146(8192);
	}
}

void func_51()
{
	func_147();
}

void func_52()
{
	if (Local_13 == 6)
	{
		func_148(6);
	}
	else if (Local_13 > 0)
	{
		func_49();
		func_148(1);
	}
}

void func_53()
{
	if (Local_13 == 6)
	{
		func_148(6);
	}
	else if (Local_13 > 1)
	{
		func_148(2);
	}
}

void func_54()
{
	if (!func_129(1, 255))
	{
		bVar0 = true;
		if (!func_149())
		{
			bVar0 = false;
		}
		if (!func_150())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_146(1);
		}
		else
		{
			iVar1 = Global_1901947->f_236.f_68;
			if (!func_126(Local_792.f_11))
			{
				func_127(&(Local_792.f_11));
			}
			if (func_128(Local_792.f_11) >= iVar1)
			{
				func_148(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_151(&(Local_792.f_11));
		func_152();
		func_148(3);
	}
}

void func_55()
{
	if (!func_129(2, 255))
	{
		iVar0 = func_153();
		iVar1 = func_154();
		if (iVar0 && iVar1)
		{
			func_146(2);
		}
		else
		{
			iVar2 = Global_1901947->f_236.f_68;
			if (!func_126(Local_792.f_11))
			{
				func_127(&(Local_792.f_11));
			}
			if (func_155(Local_792.f_11) >= iVar2)
			{
				func_148(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_151(&(Local_792.f_11));
		func_156();
		func_157();
		func_158();
		func_159();
		func_148(4);
	}
}

void func_56()
{
	if (Local_13 >= 5)
	{
		func_160();
		func_148(5);
		return;
	}
	func_161();
	func_162();
	func_163();
	func_164();
	func_165();
	func_166();
}

void func_57()
{
	if (!func_129(4, 255))
	{
		if (func_167())
		{
			func_168();
			func_64(Local_792.f_12, 4);
			func_146(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_148(6);
	}
}

void func_58()
{
}

bool func_59()
{
	return (func_130(4) || (network_is_game_in_progress() && network_get_num_participants() <= 1));
}

void func_60()
{
}

void func_61()
{
	if (func_59())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (network_does_network_id_exist(&(Local_13.f_67[iVar1])))
			{
				iVar0 = net_to_ped(&(Local_13.f_67[iVar1]));
				func_169(iVar1);
				if (network_has_control_of_entity(iVar0))
				{
					set_blocking_of_non_temporary_events(iVar0, false);
					if (!func_170(iVar1, 16))
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
	func_171(&(Local_792.f_289.f_13));
	if (_does_volume_exist(Local_792.f_289.f_11))
	{
		_delete_volume(Local_792.f_289.f_11);
	}
}

void func_63()
{
	func_172();
}

void func_64(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (func_173(iParam0, iVar0, iParam1))
	{
		return;
	}
	set_bit((*(*Global_1207784)[iVar0])[iParam0], iParam1);
}

void func_65()
{
	if (!func_66(1))
	{
		return;
	}
	if (func_66(4))
	{
		return;
	}
	if (!func_66(2))
	{
		iVar0 = -1;
	}
	else if (!func_66(8))
	{
		iVar0 = 2;
	}
	else if (func_66(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_66(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_174(Local_792.f_9, iVar0, 0, 255, 0);
	func_144(4);
	if (bVar1)
	{
		func_175(Local_792.f_1, Local_792.f_2);
		if (!func_66(256))
		{
			if (iVar0 == 1)
			{
				func_176(Local_792.f_18, 1);
			}
			else
			{
				func_176(Local_792.f_18, 0);
			}
			func_144(256);
		}
	}
	else
	{
		func_176(Local_792.f_18, 2);
	}
}

bool func_66(int iParam0)
{
	return func_177(Local_792.f_7, iParam0);
}

void func_67(int iParam0)
{
	if (!func_178(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	(*Global_1134390)[iVar0]->f_70 = iParam0;
	(*Global_1134390)[iVar0]->f_70.f_2 = 0;
}

void func_68()
{
}

void func_69(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_70(var uParam0)
{
	if (!func_179(uParam0))
	{
		return -1;
	}
	iVar0 = func_180(uParam0, uParam0->f_9);
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
			iVar0 = func_180(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_71(int iParam0)
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

void func_72(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 7;
	func_181(uParam0, iParam1);
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

void func_73(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_182(uParam0);
	switch (iParam1)
	{
		case 0:
			func_183(uParam0);
			uParam0->f_5 = 277430601;
			uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
			break;
		case 1:
			func_183(uParam0);
			uParam0->f_5 = 1659133778;
			uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
			break;
		case 2:
			func_183(uParam0);
			uParam0->f_5 = 1296650927;
			uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
			break;
		case 3:
			func_183(uParam0);
			uParam0->f_5 = 2115437634;
			uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
			break;
		case 4:
			func_183(uParam0);
			uParam0->f_5 = 1098622970;
			uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
			break;
		case 5:
			func_183(uParam0);
			uParam0->f_5 = 393263596;
			uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
			break;
		case 6:
			func_183(uParam0);
			uParam0->f_5 = 189453630;
			uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
			break;
		case 7:
			func_183(uParam0);
			uParam0->f_5 = -98921343;
			uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
			break;
		case 8:
			func_183(uParam0);
			uParam0->f_5 = 6025033;
			uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
			break;
		case 9:
			func_183(uParam0);
			uParam0->f_5 = -1060299979;
			uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
			break;
		case 10:
			func_183(uParam0);
			uParam0->f_5 = 682088681;
			uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
			break;
		case 11:
			func_183(uParam0);
			uParam0->f_5 = 1705841922;
			uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
			break;
		case 12:
			func_183(uParam0);
			uParam0->f_5 = -301205165;
			uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
			break;
		case 13:
			func_183(uParam0);
			uParam0->f_5 = 1906160715;
			uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
			break;
		case 14:
			func_183(uParam0);
			uParam0->f_5 = -1129906020;
			uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
			break;
		case 15:
			func_183(uParam0);
			uParam0->f_5 = 1592980994;
			uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
			break;
		case 16:
			func_183(uParam0);
			uParam0->f_5 = 686459378;
			uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
			break;
		case 17:
			func_183(uParam0);
			uParam0->f_5 = -259262381;
			uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
			break;
		case 18:
			func_183(uParam0);
			uParam0->f_5 = 1289806844;
			uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
			break;
		case 19:
			func_183(uParam0);
			uParam0->f_5 = 347656238;
			uParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
			break;
	}
}

void func_74(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 8;
	uParam0->f_2 = 1;
	func_182(uParam0);
	switch (iParam1)
	{
		case 0:
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			func_184(uParam0, 5);
			uParam0->f_5 = 1454566440;
			uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
			break;
		case 1:
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			func_184(uParam0, 5);
			uParam0->f_5 = 1141360338;
			uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
		case 2:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			func_184(uParam0, 5);
			uParam0->f_5 = 844768119;
			uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
		case 3:
			func_184(uParam0, 0);
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			func_184(uParam0, 4);
			func_184(uParam0, 5);
			func_184(uParam0, 7);
			uParam0->f_5 = -1601993562;
			uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
			break;
		case 4:
			func_184(uParam0, 0);
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			func_184(uParam0, 5);
			func_184(uParam0, 7);
			uParam0->f_5 = -901588956;
			uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
			break;
		case 5:
			func_184(uParam0, 0);
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			func_184(uParam0, 5);
			func_184(uParam0, 7);
			uParam0->f_5 = 2129019244;
			uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
		case 6:
			func_184(uParam0, 0);
			func_184(uParam0, 2);
			func_184(uParam0, 4);
			func_184(uParam0, 5);
			func_184(uParam0, 6);
			uParam0->f_5 = 1227099802;
			uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
			break;
		case 7:
			func_184(uParam0, 0);
			func_184(uParam0, 2);
			func_184(uParam0, 4);
			func_184(uParam0, 5);
			func_184(uParam0, 6);
			uParam0->f_5 = -940471213;
			uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
			break;
		case 8:
			func_184(uParam0, 0);
			func_184(uParam0, 2);
			func_184(uParam0, 4);
			func_184(uParam0, 5);
			func_184(uParam0, 6);
			uParam0->f_5 = -700569364;
			uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
			break;
		case 9:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			uParam0->f_5 = 412376369;
			uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
		case 10:
			func_184(uParam0, 0);
			func_184(uParam0, 2);
			func_184(uParam0, 5);
			func_184(uParam0, 7);
			uParam0->f_5 = -364052317;
			uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
		case 11:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			uParam0->f_5 = -989186530;
			uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
			break;
		case 12:
			func_184(uParam0, 0);
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			func_184(uParam0, 4);
			func_184(uParam0, 5);
			func_184(uParam0, 6);
			uParam0->f_5 = 333858683;
			uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
			break;
		case 13:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			uParam0->f_5 = -39511303;
			uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
			break;
		case 14:
			func_184(uParam0, 3);
			func_184(uParam0, 4);
			func_184(uParam0, 5);
			func_184(uParam0, 6);
			uParam0->f_5 = 813662381;
			uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
			break;
		case 15:
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			func_184(uParam0, 5);
			func_184(uParam0, 7);
			uParam0->f_5 = -1114006686;
			uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
			break;
		case 16:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			func_184(uParam0, 3);
			func_184(uParam0, 5);
			func_184(uParam0, 7);
			uParam0->f_5 = 1049238845;
			uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
			break;
		case 17:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			func_184(uParam0, 3);
			func_184(uParam0, 5);
			func_184(uParam0, 7);
			uParam0->f_5 = 1363886783;
			uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
			break;
		case 18:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			func_184(uParam0, 5);
			uParam0->f_5 = -1215674354;
			uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
			break;
		case 19:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			uParam0->f_5 = 1902132155;
			uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
			break;
		case 20:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			func_184(uParam0, 5);
			uParam0->f_5 = 1661312774;
			uParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
			break;
	}
}

void func_75(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 2;
	func_182(uParam0);
	uParam0->f_15[0] = -2090512547;
	switch (iParam1)
	{
		case 0:
			func_183(uParam0);
			uParam0->f_5 = 1382777618;
			uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
		case 1:
			func_183(uParam0);
			uParam0->f_5 = -2000681184;
			uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
			break;
		case 2:
			func_183(uParam0);
			uParam0->f_5 = 886884092;
			uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
			break;
		case 3:
			func_183(uParam0);
			uParam0->f_5 = -1277120723;
			uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
			break;
		case 4:
			func_183(uParam0);
			uParam0->f_5 = 1577436816;
			uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
			break;
		case 5:
			func_183(uParam0);
			uParam0->f_5 = -234749781;
			uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
			break;
		case 6:
			func_183(uParam0);
			uParam0->f_5 = -1607623039;
			uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
		case 7:
			func_183(uParam0);
			uParam0->f_5 = -1943295936;
			uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
			break;
		case 8:
			func_183(uParam0);
			uParam0->f_5 = -397730168;
			uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
			break;
		case 9:
			func_183(uParam0);
			uParam0->f_5 = -392659534;
			uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
			break;
		case 10:
			func_183(uParam0);
			uParam0->f_5 = 146267878;
			uParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
			break;
	}
}

void func_76(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_182(uParam0);
	switch (iParam1)
	{
		case 0:
			func_183(uParam0);
			uParam0->f_5 = 1247886914;
			uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
		case 1:
			func_183(uParam0);
			uParam0->f_5 = 1926100410;
			uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
			break;
		case 2:
			func_183(uParam0);
			uParam0->f_5 = 603340011;
			uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
			break;
		case 3:
			func_183(uParam0);
			uParam0->f_5 = -1253915394;
			uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
			break;
		case 4:
			func_183(uParam0);
			uParam0->f_5 = 1281783573;
			uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
			break;
		case 5:
			func_183(uParam0);
			uParam0->f_5 = -1384936716;
			uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
			break;
		case 6:
			func_183(uParam0);
			uParam0->f_5 = 636669604;
			uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
			break;
		case 7:
			func_183(uParam0);
			uParam0->f_5 = 1410575087;
			uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
			break;
		case 8:
			func_183(uParam0);
			uParam0->f_5 = -736919321;
			uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
		case 9:
			func_183(uParam0);
			uParam0->f_5 = 1755496218;
			uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
			break;
		case 10:
			func_183(uParam0);
			uParam0->f_5 = -1810033095;
			uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
			break;
		case 11:
			func_183(uParam0);
			uParam0->f_5 = 99707271;
			uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
			break;
		case 12:
			func_183(uParam0);
			uParam0->f_5 = 2145033839;
			uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
			break;
		case 13:
			func_183(uParam0);
			uParam0->f_5 = -994111457;
			uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
			break;
		case 14:
			func_183(uParam0);
			uParam0->f_5 = 702836385;
			uParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
			break;
	}
}

void func_77(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 16;
	uParam0->f_1 = 2;
	uParam0->f_2 = 8;
	switch (iParam2)
	{
		case 0:
			func_185(uParam0, 0);
			func_185(uParam0, 1);
			func_185(uParam0, 4);
			func_185(uParam0, 5);
			break;
		case 1:
			func_185(uParam0, 2);
			func_185(uParam0, 3);
			func_185(uParam0, 6);
			func_185(uParam0, 7);
			func_186(uParam0, 2);
			break;
		default:
			func_182(uParam0);
			break;
	}
	switch (iParam1)
	{
		case 0:
			func_184(uParam0, 0);
			uParam0->f_5 = -88606612;
			uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
			break;
		case 1:
			func_184(uParam0, 1);
			uParam0->f_5 = -1507537085;
			uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
		case 2:
			func_184(uParam0, 0);
			uParam0->f_5 = 150331424;
			uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
			break;
		case 3:
			func_184(uParam0, 1);
			uParam0->f_5 = -74168995;
			uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
			break;
		case 4:
			func_184(uParam0, 0);
			uParam0->f_5 = -1303456769;
			uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
			break;
		case 5:
			func_184(uParam0, 1);
			uParam0->f_5 = 2080696176;
			uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
			break;
		case 6:
			func_184(uParam0, 0);
			uParam0->f_5 = -801880493;
			uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
			break;
		case 7:
			func_184(uParam0, 1);
			uParam0->f_5 = -2098877513;
			uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
			break;
		case 8:
			func_184(uParam0, 0);
			uParam0->f_5 = -985131289;
			uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
			break;
		case 9:
			func_184(uParam0, 1);
			uParam0->f_5 = 171385032;
			uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
			break;
		case 10:
			func_184(uParam0, 0);
			uParam0->f_5 = -690365399;
			uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
			break;
		case 11:
			func_184(uParam0, 1);
			uParam0->f_5 = -393773180;
			uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
		case 12:
			func_184(uParam0, 0);
			uParam0->f_5 = 1783045643;
			uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
			break;
		case 13:
			func_184(uParam0, 1);
			uParam0->f_5 = -1841828372;
			uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
			break;
		case 14:
			func_184(uParam0, 0);
			uParam0->f_5 = -1926357119;
			uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
			break;
		case 15:
			func_184(uParam0, 1);
			uParam0->f_5 = -1904926193;
			uParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
			break;
	}
}

void func_78(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 12;
	uParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			func_184(uParam0, 9);
			func_184(uParam0, 10);
			func_184(uParam0, 11);
			func_187(uParam0, iParam2);
			uParam0->f_5 = 666420762;
			uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
			break;
		case 1:
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			func_184(uParam0, 8);
			func_184(uParam0, 9);
			func_184(uParam0, 10);
			func_184(uParam0, 11);
			func_187(uParam0, iParam2);
			uParam0->f_5 = 1145423923;
			uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
			break;
		case 2:
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			func_184(uParam0, 4);
			func_184(uParam0, 5);
			func_184(uParam0, 6);
			func_184(uParam0, 9);
			func_184(uParam0, 10);
			func_184(uParam0, 11);
			func_187(uParam0, iParam2);
			uParam0->f_5 = -1176575305;
			uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
			break;
		case 3:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			func_184(uParam0, 9);
			func_184(uParam0, 10);
			func_184(uParam0, 11);
			func_187(uParam0, iParam2);
			uParam0->f_5 = -888961792;
			uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
			break;
		case 4:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			func_184(uParam0, 9);
			func_184(uParam0, 10);
			func_184(uParam0, 11);
			func_187(uParam0, iParam2);
			uParam0->f_5 = -1145898130;
			uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
			break;
		case 5:
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			func_184(uParam0, 4);
			func_184(uParam0, 7);
			func_184(uParam0, 8);
			func_184(uParam0, 9);
			func_184(uParam0, 10);
			func_184(uParam0, 11);
			func_187(uParam0, iParam2);
			uParam0->f_5 = -264936334;
			uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
			break;
		case 6:
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			func_184(uParam0, 6);
			func_184(uParam0, 7);
			func_184(uParam0, 9);
			func_184(uParam0, 10);
			func_184(uParam0, 11);
			func_187(uParam0, iParam2);
			uParam0->f_5 = -562839313;
			uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
			break;
		case 7:
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			func_184(uParam0, 4);
			func_184(uParam0, 5);
			func_184(uParam0, 6);
			func_184(uParam0, 9);
			func_184(uParam0, 10);
			func_184(uParam0, 11);
			func_187(uParam0, iParam2);
			uParam0->f_5 = -819926700;
			uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
			break;
		case 8:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			func_184(uParam0, 9);
			func_184(uParam0, 10);
			func_184(uParam0, 11);
			func_187(uParam0, iParam2);
			uParam0->f_5 = -100890882;
			uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
			break;
		case 9:
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			func_184(uParam0, 5);
			func_184(uParam0, 9);
			func_184(uParam0, 10);
			func_184(uParam0, 11);
			func_187(uParam0, iParam2);
			uParam0->f_5 = 373607510;
			uParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
			break;
	}
}

void func_79(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_182(uParam0);
	switch (iParam1)
	{
		case 0:
			func_183(uParam0);
			uParam0->f_5 = -1562903685;
			uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
			break;
		case 1:
			func_183(uParam0);
			uParam0->f_5 = 442262250;
			uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
			break;
		case 2:
			func_183(uParam0);
			uParam0->f_5 = 2113001754;
			uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
			break;
		case 3:
			func_183(uParam0);
			uParam0->f_5 = 222101843;
			uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
			break;
		case 4:
			func_183(uParam0);
			uParam0->f_5 = 862535295;
			uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
		case 5:
			func_183(uParam0);
			uParam0->f_5 = 267494763;
			uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
			break;
		case 6:
			func_183(uParam0);
			uParam0->f_5 = 492498900;
			uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
			break;
		case 7:
			func_183(uParam0);
			uParam0->f_5 = -735417347;
			uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
		case 8:
			func_183(uParam0);
			uParam0->f_5 = 2000289900;
			uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
			break;
		case 9:
			func_183(uParam0);
			uParam0->f_5 = 1820563970;
			uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
			break;
		case 10:
			func_183(uParam0);
			uParam0->f_5 = 1501808210;
			uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
			break;
		case 11:
			func_183(uParam0);
			uParam0->f_5 = -1103422576;
			uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
			break;
		case 12:
			func_183(uParam0);
			uParam0->f_5 = -375108461;
			uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
			break;
		case 13:
			func_183(uParam0);
			uParam0->f_5 = 1074344160;
			uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
			break;
		case 14:
			func_183(uParam0);
			uParam0->f_5 = 1375567406;
			uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
			break;
		case 15:
			func_183(uParam0);
			uParam0->f_5 = 1695022182;
			uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
			break;
		case 16:
			func_183(uParam0);
			uParam0->f_5 = 1773241795;
			uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
			break;
		case 17:
			func_183(uParam0);
			uParam0->f_5 = 1650499101;
			uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
			break;
		case 18:
			func_183(uParam0);
			uParam0->f_5 = 149116609;
			uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
			break;
		case 19:
			func_183(uParam0);
			uParam0->f_5 = 1486166046;
			uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
			break;
		case 20:
			func_183(uParam0);
			uParam0->f_5 = 58739626;
			uParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
			break;
	}
}

void func_80(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	func_182(uParam0);
	func_186(uParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_183(uParam0);
			uParam0->f_5 = -1657923088;
			uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
		case 1:
			func_183(uParam0);
			uParam0->f_5 = -1268232386;
			uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
			break;
		case 2:
			func_183(uParam0);
			uParam0->f_5 = 1926851120;
			uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
			break;
		case 3:
			func_183(uParam0);
			uParam0->f_5 = -66052340;
			uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
			break;
		case 4:
			func_183(uParam0);
			uParam0->f_5 = 1738334804;
			uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
			break;
		case 5:
			func_183(uParam0);
			uParam0->f_5 = 1009780912;
			uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
			break;
		case 6:
			func_183(uParam0);
			uParam0->f_5 = -1560771476;
			uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
			break;
		case 7:
			func_183(uParam0);
			uParam0->f_5 = 453813335;
			uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
			break;
		case 8:
			func_183(uParam0);
			uParam0->f_5 = 786924542;
			uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
		case 9:
			func_183(uParam0);
			uParam0->f_5 = 1656593925;
			uParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
			break;
	}
}

void func_81(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 4;
	uParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_188(uParam0, iParam2);
			uParam0->f_5 = 1323108111;
			uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
			break;
		case 1:
			func_188(uParam0, iParam2);
			uParam0->f_5 = -1505479200;
			uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
			break;
		case 2:
			func_188(uParam0, iParam2);
			uParam0->f_5 = -1283075997;
			uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
			break;
		case 3:
			func_188(uParam0, iParam2);
			uParam0->f_5 = -2100531475;
			uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
			break;
		case 4:
			func_188(uParam0, iParam2);
			uParam0->f_5 = 269617530;
			uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
			break;
		case 5:
			func_188(uParam0, iParam2);
			uParam0->f_5 = 1592829750;
			uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
			break;
		case 6:
			func_188(uParam0, iParam2);
			uParam0->f_5 = 1817985549;
			uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
		case 7:
			func_188(uParam0, iParam2);
			uParam0->f_5 = 1945424739;
			uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
		case 8:
			func_188(uParam0, iParam2);
			uParam0->f_5 = 1787314318;
			uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
		case 9:
			func_188(uParam0, iParam2);
			uParam0->f_5 = 542354442;
			uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
		case 10:
			func_188(uParam0, iParam2);
			uParam0->f_5 = 1510776727;
			uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
		case 11:
			func_188(uParam0, iParam2);
			uParam0->f_5 = -2017297662;
			uParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
			break;
	}
}

void func_82(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_182(uParam0);
	switch (iParam1)
	{
		case 0:
			func_183(uParam0);
			uParam0->f_5 = -377638420;
			uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
		case 1:
			func_183(uParam0);
			uParam0->f_5 = 1308799438;
			uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
			break;
		case 2:
			func_183(uParam0);
			uParam0->f_5 = -1030922940;
			uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
			break;
		case 3:
			func_183(uParam0);
			uParam0->f_5 = 1750043358;
			uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
			break;
		case 4:
			func_183(uParam0);
			uParam0->f_5 = -1330609910;
			uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
			break;
		case 5:
			func_183(uParam0);
			uParam0->f_5 = 223942444;
			uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
			break;
		case 6:
			func_183(uParam0);
			uParam0->f_5 = 1067547121;
			uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
			break;
		case 7:
			func_183(uParam0);
			uParam0->f_5 = -450732096;
			uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
			break;
		case 8:
			func_183(uParam0);
			uParam0->f_5 = -1701940764;
			uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
			break;
		case 9:
			func_183(uParam0);
			uParam0->f_5 = 1584258975;
			uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
			break;
		case 10:
			func_183(uParam0);
			uParam0->f_5 = -98183174;
			uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
			break;
		case 11:
			func_183(uParam0);
			uParam0->f_5 = -90261849;
			uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
			break;
		case 12:
			func_183(uParam0);
			uParam0->f_5 = 754522971;
			uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
			break;
		case 13:
			func_183(uParam0);
			uParam0->f_5 = 974542513;
			uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
			break;
		case 14:
			func_183(uParam0);
			uParam0->f_5 = -790885273;
			uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
			break;
		case 15:
			func_183(uParam0);
			uParam0->f_5 = -1447045452;
			uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
			break;
		case 16:
			func_183(uParam0);
			uParam0->f_5 = -586115209;
			uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
			break;
		case 17:
			func_183(uParam0);
			uParam0->f_5 = 224941020;
			uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
			break;
		case 18:
			func_183(uParam0);
			uParam0->f_5 = -1179654578;
			uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
			break;
		case 19:
			func_183(uParam0);
			uParam0->f_5 = 1247197458;
			uParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
			break;
	}
}

void func_83(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 9;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_182(uParam0);
	uParam0->f_10 = 60f;
	switch (iParam1)
	{
		case 0:
			func_183(uParam0);
			uParam0->f_5 = 974582605;
			uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
		case 1:
			func_183(uParam0);
			uParam0->f_5 = -964359125;
			uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
		case 2:
			func_183(uParam0);
			uParam0->f_5 = -700339292;
			uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
		case 3:
			func_183(uParam0);
			uParam0->f_5 = -470300912;
			uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
		case 4:
			func_183(uParam0);
			uParam0->f_5 = -241343909;
			uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
		case 5:
			func_183(uParam0);
			uParam0->f_5 = 1944053474;
			uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
		case 6:
			func_183(uParam0);
			uParam0->f_5 = -2120646059;
			uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
		case 7:
			func_183(uParam0);
			uParam0->f_5 = -1656440405;
			uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
		case 8:
			func_183(uParam0);
			uParam0->f_5 = -1422404207;
			uParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
			break;
	}
}

void func_84(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 1;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	func_182(uParam0);
	func_186(uParam0, 1);
	func_186(uParam0, 4);
	func_186(uParam0, 8);
	func_186(uParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_183(uParam0);
			uParam0->f_5 = -1623035253;
			uParam0->f_11 = { func_189(func_121(iParam2)) };
			break;
	}
}

void func_85(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 5;
	uParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_190(uParam0, iParam2);
			uParam0->f_5 = -1957221189;
			uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
			break;
		case 1:
			func_190(uParam0, iParam2);
			uParam0->f_5 = 871956008;
			uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
			break;
		case 2:
			func_190(uParam0, iParam2);
			uParam0->f_5 = -718829908;
			uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
			break;
		case 3:
			func_190(uParam0, iParam2);
			uParam0->f_5 = -478076065;
			uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
			break;
		case 4:
			func_190(uParam0, iParam2);
			uParam0->f_5 = 158131441;
			uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
			break;
		case 5:
			func_190(uParam0, iParam2);
			uParam0->f_5 = 575051428;
			uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
			break;
		case 6:
			func_190(uParam0, iParam2);
			uParam0->f_5 = -861587350;
			uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
			break;
		case 7:
			func_190(uParam0, iParam2);
			uParam0->f_5 = -616671844;
			uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
			break;
		case 8:
			func_190(uParam0, iParam2);
			uParam0->f_5 = -828875274;
			uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
			break;
		case 9:
			func_190(uParam0, iParam2);
			uParam0->f_5 = -598017669;
			uParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
			break;
	}
}

void func_86(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_182(uParam0);
	switch (iParam1)
	{
		case 0:
			func_183(uParam0);
			uParam0->f_5 = 2136361638;
			uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
			break;
		case 1:
			func_183(uParam0);
			uParam0->f_5 = 1948005426;
			uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
			break;
		case 2:
			func_183(uParam0);
			uParam0->f_5 = 462368629;
			uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
		case 3:
			func_183(uParam0);
			uParam0->f_5 = -172629291;
			uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
		case 4:
			func_183(uParam0);
			uParam0->f_5 = 1063777848;
			uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
			break;
		case 5:
			func_183(uParam0);
			uParam0->f_5 = -267241827;
			uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
		case 6:
			func_183(uParam0);
			uParam0->f_5 = -1183266453;
			uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
		case 7:
			func_183(uParam0);
			uParam0->f_5 = -877826604;
			uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
		case 8:
			func_183(uParam0);
			uParam0->f_5 = 1527533302;
			uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
		case 9:
			func_183(uParam0);
			uParam0->f_5 = -865586768;
			uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
			break;
		case 10:
			func_183(uParam0);
			uParam0->f_5 = 294379466;
			uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
			break;
		case 11:
			func_183(uParam0);
			uParam0->f_5 = 452588198;
			uParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
			break;
	}
}

void func_87(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 2;
	uParam0->f_2 = 4;
	func_191(uParam0, iParam2);
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

void func_88(var uParam0, int iParam1)
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
	func_182(uParam0);
	switch (iParam1)
	{
		case 0:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -672003008;
			uParam0->f_11 = { 2153.785f, -1677.743f, 40.5666f };
			break;
		case 1:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -396317411;
			uParam0->f_11 = { 2188.584f, -1595.642f, 40.591f };
			break;
		case 2:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -1239103346;
			uParam0->f_11 = { 2078.438f, -1694.907f, 40.6896f };
			break;
		case 3:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -889851344;
			uParam0->f_11 = { 2066.834f, -1767.304f, 40.1183f };
			break;
		case 4:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -1582784618;
			uParam0->f_11 = { 2131.718f, -1865.66f, 40.0837f };
			break;
		case 5:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 407459900;
			uParam0->f_11 = { 2189.613f, -654.0466f, 40.5628f };
			break;
		case 6:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -1359903346;
			uParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
		case 7:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -1075501195;
			uParam0->f_11 = { 2212.435f, -599.6181f, 40.5628f };
			break;
		case 8:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -761049871;
			uParam0->f_11 = { 2273.341f, -693.9393f, 40.5628f };
			break;
		case 9:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 1397804618;
			uParam0->f_11 = { 2314.659f, -599.6119f, 40.5628f };
			break;
		case 10:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -636095416;
			uParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
		case 11:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -933474091;
			uParam0->f_11 = { 2800.13f, -727.0102f, 40.6116f };
			break;
		case 12:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -1209520147;
			uParam0->f_11 = { 2726.128f, -662.6138f, 40.5283f };
			break;
		case 13:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -1524528544;
			uParam0->f_11 = { 2710.138f, -534.5544f, 40.615f };
			break;
		case 14:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -449082741;
			uParam0->f_11 = { 2728.174f, -468.3862f, 40.7744f };
			break;
	}
}

void func_89(var uParam0, int iParam1)
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
			func_193(uParam0, iParam1);
			uParam0->f_5 = -42638554;
			uParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
		case 1:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -330841909;
			uParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
		case 2:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -637690825;
			uParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
		case 3:
			func_193(uParam0, iParam1);
			uParam0->f_5 = 1210841234;
			uParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
		case 4:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -275624566;
			uParam0->f_11 = { -2023.4f, 662.6884f, 119.8702f };
			break;
		case 5:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -2051147289;
			uParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
		case 6:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -1760846718;
			uParam0->f_11 = { -2487.232f, 414.2487f, 148.2772f };
			break;
		case 7:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -1591562064;
			uParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
		case 8:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -1159724897;
			uParam0->f_11 = { -1377.945f, 265.2666f, 78.222f };
			break;
		case 9:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -114459335;
			uParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
		case 10:
			func_193(uParam0, iParam1);
			uParam0->f_5 = 564350440;
			uParam0->f_11 = { -1091.188f, -37.3214f, 40.5256f };
			break;
		case 11:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -840522068;
			uParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
		case 12:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -2076667055;
			uParam0->f_11 = { -792.3045f, 647.1317f, 88.5497f };
			break;
	}
}

void func_90(var uParam0, int iParam1)
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
	func_182(uParam0);
	switch (iParam1)
	{
		case 0:
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			uParam0->f_5 = -666643000;
			uParam0->f_11 = { -2323.821f, -444.3168f, 143.2396f };
			break;
		case 1:
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			uParam0->f_5 = -930743103;
			uParam0->f_11 = { -2387.781f, -333.0453f, 142.8896f };
			break;
		case 2:
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			uParam0->f_5 = -4199612;
			uParam0->f_11 = { -2622.5f, -342.7303f, 141.5315f };
			break;
		case 3:
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			uParam0->f_5 = -1480377528;
			uParam0->f_11 = { -2760.32f, -77.8632f, 151.8582f };
			break;
		case 4:
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			uParam0->f_5 = -1817640794;
			uParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
		case 5:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			uParam0->f_5 = -915442079;
			uParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
		case 6:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			uParam0->f_5 = 1928422814;
			uParam0->f_11 = { 2257.893f, 256.7348f, 43.6559f };
			break;
		case 7:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			uParam0->f_5 = 1940620434;
			uParam0->f_11 = { 2324.826f, 895.6353f, 71.6451f };
			break;
		case 8:
			func_184(uParam0, 1);
			uParam0->f_5 = -665538457;
			uParam0->f_11 = { 2383.811f, 1084.155f, 85.9333f };
			break;
		case 9:
			func_184(uParam0, 1);
			uParam0->f_5 = 355243564;
			uParam0->f_11 = { 2398.53f, 773.5043f, 67.0099f };
			break;
	}
}

void func_91(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 326651247;
	func_182(uParam0);
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
			func_184(uParam0, 0);
			uParam0->f_5 = -1024453831;
			uParam0->f_11 = { -1856.609f, 1802.919f, 234.305f };
			break;
		case 1:
			func_184(uParam0, 0);
			uParam0->f_5 = -652787833;
			uParam0->f_11 = { -1821.152f, 1566.352f, 235.8068f };
			break;
		case 2:
			func_184(uParam0, 0);
			uParam0->f_5 = 230697180;
			uParam0->f_11 = { -2069.577f, 1812.812f, 246.0542f };
			break;
		case 3:
			func_184(uParam0, 0);
			uParam0->f_5 = -543699832;
			uParam0->f_11 = { -1932.007f, 2153.216f, 322.7221f };
			break;
		case 4:
			func_184(uParam0, 0);
			uParam0->f_5 = 894826503;
			uParam0->f_11 = { -1752.347f, 1951.369f, 264.5091f };
			break;
		case 5:
			func_184(uParam0, 1);
			uParam0->f_5 = 1666294228;
			uParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
		case 6:
			func_184(uParam0, 1);
			uParam0->f_5 = 1426851145;
			uParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
		case 7:
			func_184(uParam0, 1);
			uParam0->f_5 = -807339271;
			uParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
		case 8:
			func_184(uParam0, 1);
			uParam0->f_5 = -1050255868;
			uParam0->f_11 = { 1251.465f, 344.8225f, 92.1045f };
			break;
		case 9:
			func_184(uParam0, 1);
			uParam0->f_5 = -1406848126;
			uParam0->f_11 = { 913.0093f, 113.5476f, 116.3f };
			break;
	}
}

void func_92(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 11;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1848813677;
	func_182(uParam0);
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
			func_184(uParam0, 0);
			uParam0->f_5 = -1741150966;
			uParam0->f_11 = { -1352.639f, -2550.378f, 74.9777f };
			break;
		case 1:
			func_184(uParam0, 0);
			uParam0->f_5 = -796584541;
			uParam0->f_11 = { -1913.631f, -2213.565f, 42.0518f };
			break;
		case 2:
			func_184(uParam0, 0);
			uParam0->f_5 = 80182823;
			uParam0->f_11 = { -1745.884f, -2388.807f, 42.8205f };
			break;
		case 3:
			func_184(uParam0, 1);
			uParam0->f_5 = 1964620432;
			uParam0->f_11 = { -1593.106f, -2351.92f, 43.0229f };
			break;
		case 4:
			func_184(uParam0, 1);
			uParam0->f_5 = 1731665611;
			uParam0->f_11 = { -1800.651f, -1644.944f, 96.7288f };
			break;
		case 5:
			func_184(uParam0, 1);
			uParam0->f_5 = -1728544175;
			uParam0->f_11 = { -1628.216f, -1943.554f, 50.1671f };
			break;
		case 6:
			func_184(uParam0, 2);
			uParam0->f_5 = -1242537170;
			uParam0->f_11 = { 2443.712f, -19.2163f, 43.2151f };
			break;
		case 7:
			func_184(uParam0, 2);
			uParam0->f_5 = 2036591126;
			uParam0->f_11 = { 2715.91f, -128.7452f, 42.0147f };
			break;
		case 8:
			func_184(uParam0, 2);
			uParam0->f_5 = 197299925;
			uParam0->f_11 = { 2363.777f, 13.1458f, 41.3272f };
			break;
		case 9:
			func_184(uParam0, 2);
			uParam0->f_5 = 1291850063;
			uParam0->f_11 = { 2355.338f, -247.3491f, 41.5576f };
			break;
		case 10:
			func_184(uParam0, 2);
			uParam0->f_5 = 1599124976;
			uParam0->f_11 = { 2601.386f, -212.5256f, 43.7812f };
			break;
	}
}

void func_93(var uParam0, int iParam1)
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
			func_194(uParam0, iParam1);
			uParam0->f_5 = 980541174;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
		case 1:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 1220770713;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
		case 2:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 1322813407;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
		case 3:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 1552098100;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
		case 4:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 1916358304;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
		case 5:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -1363212564;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5896.217f, -3811.854f, -31.2514f };
			break;
		case 6:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 686685000;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6360.188f, -3401.399f, -14.7027f };
			break;
		case 7:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -1524698208;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6241.614f, -3430.465f, 1.465f };
			break;
		case 8:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -1804348854;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6091.54f, -3398.527f, 17.9157f };
			break;
		case 9:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -2035403073;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6054.187f, -3594.051f, -4.8637f };
			break;
		case 10:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 728964560;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5609.956f, -3781.126f, -24.15435f };
			break;
		case 11:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 765075998;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5664.643f, -3561.726f, -24.1565f };
			break;
		case 12:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 1070974613;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5811.027f, -3789.534f, -27.8079f };
			break;
		case 13:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -1088797396;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5906.508f, -3520.436f, -24.1555f };
			break;
		case 14:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -740987230;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5753.862f, -3302.776f, -24.1569f };
			break;
		case 15:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 2110034336;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -937.2829f, -1900.071f, 50.81326f };
			break;
		case 16:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -783796062;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -1060.57f, -1731.06f, 75.49813f };
			break;
		case 17:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -545106666;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1052.66f, -1784.942f, 62.46124f };
			break;
		case 18:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 379536207;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			break;
		case 19:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -992108595;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1331.61f, -1892.678f, 60.4174f };
			break;
	}
}

void func_94(var uParam0, int iParam1)
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
			func_195(uParam0, iParam1);
			uParam0->f_5 = 1750035473;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1486.613f, -2140.134f, 47.13319f };
			break;
		case 1:
			func_195(uParam0, iParam1);
			uParam0->f_5 = -1499633496;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1400.093f, -2166.322f, 47.3376f };
			break;
		case 2:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 2019068959;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1229.798f, -2101.002f, 57.1906f };
			break;
		case 3:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 1010504677;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1036.581f, -2147.274f, 43.912f };
			break;
		case 4:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 1297331734;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1190.843f, -2218.737f, 57.2836f };
			break;
		case 5:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 980309385;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
		case 6:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 1451396569;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 1632.416f, -616.6262f, 42.8678f };
			break;
		case 7:
			func_195(uParam0, iParam1);
			uParam0->f_5 = -1404978858;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2127.624f, -907.4355f, 40.6492f };
			break;
		case 8:
			func_195(uParam0, iParam1);
			uParam0->f_5 = -1173302028;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2023.697f, -1017.159f, 42.3998f };
			break;
		case 9:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 2143543387;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
		case 10:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 1187325752;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2183.54f, -213.3573f, 45.5331f };
			break;
		case 11:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 201273773;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 2185.672f, -43.506f, 52.2188f };
			break;
		case 12:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 36249089;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
		case 13:
			func_195(uParam0, iParam1);
			uParam0->f_5 = -1717449488;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 1832.42f, -317.352f, 45.708f };
			break;
		case 14:
			func_195(uParam0, iParam1);
			uParam0->f_5 = -2014041707;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 1876.532f, -453.5455f, 43.2695f };
			break;
	}
}

void func_95(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 29257535;
	func_182(uParam0);
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
			func_184(uParam0, 3);
			func_184(uParam0, 4);
			func_184(uParam0, 5);
			uParam0->f_5 = -813726569;
			uParam0->f_11 = { -2685.817f, -2697.83f, 71.8905f };
			break;
		case 1:
			func_184(uParam0, 3);
			func_184(uParam0, 4);
			func_184(uParam0, 5);
			uParam0->f_5 = -991070207;
			uParam0->f_11 = { -2841.472f, -2845.188f, 86.3463f };
			break;
		case 2:
			func_184(uParam0, 3);
			func_184(uParam0, 4);
			func_184(uParam0, 5);
			uParam0->f_5 = 1385332783;
			uParam0->f_11 = { -3043.896f, -2154.732f, 59.9256f };
			break;
		case 3:
			func_184(uParam0, 3);
			func_184(uParam0, 4);
			func_184(uParam0, 5);
			uParam0->f_5 = 1394180521;
			uParam0->f_11 = { -2653.586f, -2143.511f, 75.962f };
			break;
		case 4:
			func_184(uParam0, 3);
			func_184(uParam0, 4);
			func_184(uParam0, 5);
			uParam0->f_5 = -1581141590;
			uParam0->f_11 = { -3228.791f, -2434.523f, 26.6737f };
			break;
		case 5:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			uParam0->f_5 = 1300807189;
			uParam0->f_11 = { -1177.594f, -748.8547f, 67.811f };
			break;
		case 6:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			uParam0->f_5 = -1226288496;
			uParam0->f_11 = { -1735.686f, -628.3361f, 145.1246f };
			break;
		case 7:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			uParam0->f_5 = -566411244;
			uParam0->f_11 = { -1572.939f, -328.771f, 160.6099f };
			break;
		case 8:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			uParam0->f_5 = 1931184426;
			uParam0->f_11 = { -1463.646f, -481.3466f, 129.9887f };
			break;
		case 9:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			uParam0->f_5 = 432310963;
			uParam0->f_11 = { -1525.983f, -916.2361f, 88.1698f };
			break;
	}
}

void func_96(var uParam0, int iParam1)
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
			func_196(uParam0, iParam1);
			uParam0->f_5 = 439376203;
			uParam0->f_11 = { 1200.338f, -568.1477f, 67.3878f };
			break;
		case 1:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -862568936;
			uParam0->f_11 = { 1238.102f, -546.7609f, 66.5485f };
			break;
		case 2:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -1361247578;
			uParam0->f_11 = { 1294.011f, -627.1522f, 58.9807f };
			break;
		case 3:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -518330591;
			uParam0->f_11 = { 1330.112f, -709.0779f, 64.7788f };
			break;
		case 4:
			func_196(uParam0, iParam1);
			uParam0->f_5 = 1666706329;
			uParam0->f_11 = { 1174.01f, -520.5736f, 69.0551f };
			break;
		case 5:
			func_196(uParam0, iParam1);
			uParam0->f_5 = 618479763;
			uParam0->f_11 = { 627.306f, -1038.205f, 42.0511f };
			break;
		case 6:
			func_196(uParam0, iParam1);
			uParam0->f_5 = 916579356;
			uParam0->f_11 = { 675.5718f, -1121.435f, 50.7543f };
			break;
		case 7:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -1544831314;
			uParam0->f_11 = { 799.3545f, -1190.935f, 42.9927f };
			break;
		case 8:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -1524645610;
			uParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
		case 9:
			func_196(uParam0, iParam1);
			uParam0->f_5 = 5765001;
			uParam0->f_11 = { 745.8436f, -1119.909f, 55.5229f };
			break;
		case 10:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -147337997;
			uParam0->f_11 = { -963.4839f, 2238.298f, 342.2684f };
			break;
		case 11:
			func_196(uParam0, iParam1);
			uParam0->f_5 = 46195721;
			uParam0->f_11 = { -1100.64f, 2080.921f, 365.7759f };
			break;
		case 12:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -41952889;
			uParam0->f_11 = { -1209.432f, 2421.632f, 309.8767f };
			break;
		case 13:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -280740592;
			uParam0->f_11 = { -1280.937f, 2445.134f, 305.019f };
			break;
		case 14:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -636874084;
			uParam0->f_11 = { -1340.472f, 2298.734f, 308.7317f };
			break;
		case 15:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -1240479072;
			uParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
		case 16:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -1479922155;
			uParam0->f_11 = { -1329.47f, 2266.865f, 309.1315f };
			break;
		case 17:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -1836252261;
			uParam0->f_11 = { -1202.59f, 2191.101f, 333.5445f };
			break;
		case 18:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -2075236578;
			uParam0->f_11 = { -1171.686f, 2299.184f, 323.3623f };
			break;
		case 19:
			func_196(uParam0, iParam1);
			uParam0->f_5 = 1074322888;
			uParam0->f_11 = { -1394.394f, 2394.838f, 308.3089f };
			break;
	}
}

void func_97(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -2109368060;
	func_182(uParam0);
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
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			uParam0->f_5 = 1070019252;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 1:
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			uParam0->f_5 = -510012600;
			uParam0->f_11 = { 2808.358f, 2290.307f, 155.8015f };
			break;
		case 2:
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			uParam0->f_5 = -250768090;
			uParam0->f_11 = { 2324.25f, 2143.964f, 211.2929f };
			break;
		case 3:
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			uParam0->f_5 = 1057891329;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 4:
			func_184(uParam0, 2);
			func_184(uParam0, 3);
			uParam0->f_5 = 863129034;
			uParam0->f_11 = { 2489.669f, 2265.437f, 175.6015f };
			break;
		case 5:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			uParam0->f_5 = -1100103111;
			uParam0->f_11 = { -957.019f, 1550.161f, 237.4414f };
			break;
		case 6:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			uParam0->f_5 = -383805560;
			uParam0->f_11 = { -1023.774f, 1561.614f, 237.4295f };
			break;
		case 7:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			uParam0->f_5 = -233104073;
			uParam0->f_11 = { -986.7993f, 1636.296f, 237.4295f };
			break;
		case 8:
			func_184(uParam0, 1);
			uParam0->f_5 = -604353467;
			uParam0->f_11 = { -874.8361f, 1499.423f, 245.7041f };
			break;
		case 9:
			func_184(uParam0, 1);
			uParam0->f_5 = 1641665016;
			uParam0->f_11 = { -919.2281f, 1482.48f, 245.1043f };
			break;
	}
}

void func_98(var uParam0, int iParam1)
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
			func_197(uParam0, iParam1);
			uParam0->f_5 = -1895828765;
			uParam0->f_11 = { 1649.598f, 1335.141f, 144.8913f };
			break;
		case 1:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 1786489311;
			uParam0->f_11 = { 1711.248f, 1464.318f, 146.3869f };
			break;
		case 2:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 1548029298;
			uParam0->f_11 = { 1569.279f, 1372.517f, 145.0414f };
			break;
		case 3:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -718766281;
			uParam0->f_11 = { 1427.097f, 1701.411f, 197.8922f };
			break;
		case 4:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -1212595111;
			uParam0->f_11 = { 1593.958f, 1646.358f, 143.5214f };
			break;
		case 5:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -1283376151;
			uParam0->f_11 = { 1694.973f, 1740.234f, 188.4962f };
			break;
		case 6:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -1525768444;
			uParam0->f_11 = { 1487.993f, 1066.912f, 182.3846f };
			break;
		case 7:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 249590434;
			uParam0->f_11 = { 1401.922f, 1325.553f, 163.9692f };
			break;
		case 8:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 9885199;
			uParam0->f_11 = { 1812.587f, 1193.924f, 215.9388f };
			break;
		case 9:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 1343123829;
			uParam0->f_11 = { 1940.486f, 1389.066f, 177.8712f };
			break;
		case 10:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -2039750752;
			uParam0->f_11 = { 127.6135f, 1824.788f, 199.2989f };
			break;
		case 11:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -2028740368;
			uParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
		case 12:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 1508771493;
			uParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
		case 13:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 1820404683;
			uParam0->f_11 = { 185.3962f, 1824.202f, 200.2588f };
			break;
		case 14:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 1332736425;
			uParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
		case 15:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 536875722;
			uParam0->f_11 = { 239.17f, 1914.014f, 204.8216f };
			break;
		case 16:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 795259287;
			uParam0->f_11 = { 512.8569f, 1926.074f, 199.1983f };
			break;
		case 17:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 20501824;
			uParam0->f_11 = { 325.2433f, 1902.083f, 200.069f };
			break;
		case 18:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 320272636;
			uParam0->f_11 = { 360.4333f, 1843.854f, 185.1447f };
			break;
		case 19:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 1135434088;
			uParam0->f_11 = { 506.2105f, 1883.957f, 201.9437f };
			break;
		case 20:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 1976647087;
			uParam0->f_11 = { 253.8551f, 1705.438f, 187.3591f };
			break;
		case 21:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -2028969939;
			uParam0->f_11 = { 320.4962f, 1736.16f, 192.2878f };
			break;
		case 22:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 2065778767;
			uParam0->f_11 = { -29.8717f, 1716.412f, 179.3378f };
			break;
		case 23:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -1385354006;
			uParam0->f_11 = { -20.6945f, 1632.488f, 162.0277f };
			break;
		case 24:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -1602546938;
			uParam0->f_11 = { 480.1275f, 2070.224f, 235.143f };
			break;
	}
}

void func_99(var uParam0, int iParam1, int iParam2)
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
	func_198(uParam0, iParam1, iParam2);
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

void func_100(var uParam0, int iParam1, int iParam2)
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
	func_199(uParam0, iParam1, iParam2);
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

void func_101(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -405566878;
	func_182(uParam0);
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
			func_184(uParam0, 0);
			break;
		case 1:
			uParam0->f_5 = 1765108824;
			uParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_184(uParam0, 0);
			break;
		case 2:
			uParam0->f_5 = 1620892455;
			uParam0->f_11 = { -142.6579f, 1231.128f, 164.5134f };
			func_184(uParam0, 0);
			break;
		case 3:
			uParam0->f_5 = 1380531840;
			uParam0->f_11 = { 411.3364f, 1329.074f, 180.39f };
			func_184(uParam0, 0);
			break;
		case 4:
			uParam0->f_5 = -1542790654;
			uParam0->f_11 = { 473.7581f, 1011.376f, 173.0766f };
			func_184(uParam0, 0);
			break;
		case 5:
			uParam0->f_5 = -1733556405;
			uParam0->f_11 = { -4209.333f, -2677.593f, 5.4303f };
			func_184(uParam0, 1);
			break;
		case 6:
			uParam0->f_5 = -478503693;
			uParam0->f_11 = { -4260.617f, -2412.103f, 23.6335f };
			func_184(uParam0, 1);
			break;
		case 7:
			uParam0->f_5 = -156122271;
			uParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_184(uParam0, 1);
			break;
		case 8:
			uParam0->f_5 = 1073468916;
			uParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_184(uParam0, 1);
			break;
		case 9:
			uParam0->f_5 = -249481152;
			uParam0->f_11 = { -4104.459f, -2061.22f, 4.8147f };
			func_184(uParam0, 1);
			break;
	}
}

void func_102(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_182(uParam0);
	switch (iParam1)
	{
		case 0:
			func_183(uParam0);
			uParam0->f_5 = -206668292;
			uParam0->f_11 = { -2586.923f, -264.5349f, 161.6671f };
			break;
		case 1:
			func_183(uParam0);
			uParam0->f_5 = -2125063863;
			uParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
		case 2:
			func_183(uParam0);
			uParam0->f_5 = -2012469579;
			uParam0->f_11 = { -2196.576f, 468.8412f, 119.5676f };
			break;
		case 3:
			func_183(uParam0);
			uParam0->f_5 = 108841496;
			uParam0->f_11 = { -1637.2f, -1513.234f, 82.6688f };
			break;
		case 4:
			func_183(uParam0);
			uParam0->f_5 = 415657643;
			uParam0->f_11 = { -825.3087f, -1804.951f, 59.0313f };
			break;
		case 5:
			func_183(uParam0);
			uParam0->f_5 = 1133170861;
			uParam0->f_11 = { 1786.915f, 1588.926f, 167.4663f };
			break;
		case 6:
			func_183(uParam0);
			uParam0->f_5 = 2120009296;
			uParam0->f_11 = { 1959.894f, 1387.251f, 179.786f };
			break;
		case 7:
			func_183(uParam0);
			uParam0->f_5 = 689773522;
			uParam0->f_11 = { 637.5925f, 2099.455f, 222.0308f };
			break;
		case 8:
			func_183(uParam0);
			uParam0->f_5 = -258135345;
			uParam0->f_11 = { 1296.321f, 1161.685f, 150.1379f };
			break;
		case 9:
			func_183(uParam0);
			uParam0->f_5 = 2107537913;
			uParam0->f_11 = { -2100.247f, -1372.887f, 127.7423f };
			break;
		case 10:
			func_183(uParam0);
			uParam0->f_5 = -1477292384;
			uParam0->f_11 = { -2205.016f, -1584.145f, 148.3944f };
			break;
	}
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_182(uParam0);
	switch (iParam1)
	{
		case 0:
			func_183(uParam0);
			uParam0->f_5 = -274965770;
			uParam0->f_11 = { -1109.718f, 2104.703f, 361.4368f };
			break;
		case 1:
			func_183(uParam0);
			uParam0->f_5 = 1652259747;
			uParam0->f_11 = { -4300.761f, -3445.602f, 33.26603f };
			break;
		case 2:
			func_183(uParam0);
			uParam0->f_5 = -743720569;
			uParam0->f_11 = { -3895.461f, -2492.511f, -11.57848f };
			break;
		case 3:
			func_183(uParam0);
			uParam0->f_5 = -1200331578;
			uParam0->f_11 = { -2190.508f, -2867.223f, 25.40727f };
			break;
		case 4:
			func_183(uParam0);
			uParam0->f_5 = -1026512984;
			uParam0->f_11 = { -2083.893f, -1412.552f, 131.8581f };
			break;
		case 5:
			func_183(uParam0);
			uParam0->f_5 = -1017773316;
			uParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
		case 6:
			func_183(uParam0);
			uParam0->f_5 = 303940131;
			uParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
		case 7:
			func_183(uParam0);
			uParam0->f_5 = 1273284251;
			uParam0->f_11 = { 1548.084f, 1355.097f, 146.0557f };
			break;
		case 8:
			func_183(uParam0);
			uParam0->f_5 = -950817569;
			uParam0->f_11 = { 2652.989f, 1189.503f, 118.7033f };
			break;
		case 9:
			func_183(uParam0);
			uParam0->f_5 = -910888222;
			uParam0->f_11 = { 1509.102f, -2101.449f, 45.3134f };
			break;
	}
}

void func_104(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 7;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_182(uParam0);
	switch (iParam1)
	{
		case 0:
			func_183(uParam0);
			uParam0->f_5 = -803667719;
			uParam0->f_11 = { -1499.397f, -553.9472f, 131.8198f };
			break;
		case 1:
			func_183(uParam0);
			uParam0->f_5 = -822411587;
			uParam0->f_11 = { -1760.55f, 268.6243f, 118.6948f };
			break;
		case 2:
			func_183(uParam0);
			uParam0->f_5 = -1331314157;
			uParam0->f_11 = { -2762.128f, -158.0485f, 150.8974f };
			break;
		case 3:
			func_183(uParam0);
			uParam0->f_5 = -1580456864;
			uParam0->f_11 = { -719.5702f, -756.9052f, 49.81378f };
			break;
		case 4:
			func_184(uParam0, 0);
			func_184(uParam0, 2);
			uParam0->f_5 = -102469545;
			uParam0->f_11 = { 951.5258f, -1248.371f, 53.86922f };
			break;
		case 5:
			func_184(uParam0, 0);
			func_184(uParam0, 2);
			uParam0->f_5 = 70321392;
			uParam0->f_11 = { 1088.291f, -1418.599f, 55.54557f };
			break;
		case 6:
			func_184(uParam0, 0);
			func_184(uParam0, 2);
			uParam0->f_5 = 529087392;
			uParam0->f_11 = { 1289.693f, -1603.704f, 64.23989f };
			break;
	}
}

void func_105(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 8;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -418287183;
			uParam0->f_11 = { -2081.231f, -2774.597f, 77.5683f };
			break;
		case 1:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1127015115;
			uParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
		case 2:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1853700459;
			uParam0->f_11 = { -2925.017f, -2769.882f, 95.6414f };
			break;
		case 3:
			func_200(uParam0, iParam1);
			uParam0->f_5 = 529883832;
			uParam0->f_11 = { -2648.38f, -2977.772f, 76.4237f };
			break;
		case 4:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -204230900;
			uParam0->f_11 = { -2323.921f, -2074.845f, 88.1254f };
			break;
		case 5:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1938530367;
			uParam0->f_11 = { -3455.578f, -2264.7f, 4.7142f };
			break;
		case 6:
			func_200(uParam0, iParam1);
			uParam0->f_5 = 1968802033;
			uParam0->f_11 = { -3581.218f, -3650.89f, -12.8679f };
			break;
		case 7:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -2098551789;
			uParam0->f_11 = { -5254.539f, -4050.37f, -3.6288f };
			break;
	}
}

void func_106(var uParam0, int iParam1, int iParam2)
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
	iVar0 = func_201(iParam1);
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
	*uParam0 = func_202(iVar0);
	uParam0->f_1 = 0;
	uParam0->f_6 = 2;
	func_186(uParam0, 32);
	if (iParam2 != -1)
	{
		uParam0->f_9 = func_204(func_203(iVar0), iParam2);
		uParam0->f_15[0] = func_205(func_203(iVar0), iParam2);
		uParam0->f_5 = func_206(iVar0, iParam2);
		uParam0->f_11 = { func_207(iVar0, iParam2) };
	}
}

int func_107(int iParam0)
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

int func_108(int iParam0, var uParam1, int iParam2)
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

struct<2> func_109()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_110()
{
	reserve_network_mission_peds(1);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			Local_87[iVar1]->f_8.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_111()
{
	func_208(&(Local_792.f_192), &(Local_792.f_192.f_32));
	bVar2 = true;
	if (!func_209(&iVar1))
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (network_is_host_of_this_script())
		{
			Local_13.f_69.f_3[iVar0] = 0;
			Local_13.f_69.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			Local_87[iVar1]->f_12.f_7[iVar0] = 0;
		}
		iVar0++;
	}
	func_210(&(Local_792.f_192.f_72), 8, -1);
	if (bVar2)
	{
		func_210(&(Local_87[iVar1]->f_12), 8, -1);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			func_210(&(Local_87[iVar3]->f_12), 8, -1);
			iVar3++;
		}
	}
}

void func_112()
{
}

void func_113()
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, Local_792.f_1, Local_792.f_2, Local_792.f_3, 255);
	switch (func_211())
	{
		case 0:
			func_212(0, -781967776);
			func_213(0, -44203702);
			func_214(0, Var0.f_11, 136.5f, 1);
			func_215(0, 16);
			break;
		case 1:
			func_212(0, -781967776);
			func_213(0, -44203702);
			func_214(0, Var0.f_11, 168.8146f, 1);
			func_215(0, 16);
			break;
		case 2:
			func_212(0, -781967776);
			func_213(0, -44203702);
			func_214(0, Var0.f_11, 252.4146f, 1);
			func_215(0, 16);
			break;
		case 3:
			func_212(0, -781967776);
			func_213(0, -44203702);
			func_214(0, Var0.f_11, 298.7998f, 1);
			func_215(0, 16);
			break;
		case 4:
			func_212(0, -781967776);
			func_213(0, -44203702);
			func_214(0, Var0.f_11, 187.7998f, 1);
			func_215(0, 16);
			break;
		case 5:
			func_212(0, -781967776);
			func_213(0, 319532198);
			func_214(0, Var0.f_11, 112f, 1);
			func_215(0, 16);
			break;
		case 6:
			func_212(0, -781967776);
			func_213(0, 319532198);
			func_214(0, Var0.f_11, 301f, 1);
			func_215(0, 16);
			break;
		case 7:
			func_212(0, -781967776);
			func_213(0, 319532198);
			func_214(0, Var0.f_11, 92f, 1);
			func_215(0, 16);
			break;
		case 8:
			func_212(0, -781967776);
			func_213(0, 319532198);
			func_214(0, Var0.f_11, 22f, 1);
			func_215(0, 16);
			break;
		case 9:
			func_212(0, -781967776);
			func_213(0, 319532198);
			func_214(0, Var0.f_11, 205f, 1);
			func_215(0, 16);
			break;
	}
}

void func_114(int iParam0)
{
	set_bit(&(Local_792.f_19), iParam0);
}

int func_115()
{
	switch (func_216())
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_116(int iParam0, float fParam1, float fParam2)
{
	Local_792.f_25 = 1;
	Local_792.f_25.f_1 = iParam0;
	if (fParam1 > 0f)
	{
		Local_792.f_25.f_26 = fParam1;
	}
	if (fParam2 > 0f)
	{
		Local_792.f_25.f_27 = fParam2;
	}
	if (network_is_host_of_this_script())
	{
		Local_13.f_7 = 2;
		func_217();
	}
}

void func_117(int iParam0)
{
	if (network_is_host_of_this_script())
	{
		Local_13.f_7.f_1 = iParam0;
	}
}

bool func_118(int iParam0)
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

bool func_119(var uParam0, int iParam1)
{
	return func_218(uParam0->f_25, iParam1);
}

void func_120(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

int func_121(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

void func_122(int iParam0)
{
	if (!func_130(iParam0))
	{
		func_219(&(Local_13.f_1), iParam0);
	}
}

bool func_123(int iParam0)
{
	if (!func_178(iParam0))
	{
		return false;
	}
	return (func_220(iParam0) && (*Global_1131196)[iParam0]->f_18.f_1 != 0);
}

void func_124(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

bool func_125(struct<31> Param0, var uParam31)
{
	if (_0xf6a8a652a6b186cd(Local_13.f_3.f_1))
	{
		return true;
	}
	if (func_221(Local_792.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!_0xa4a4359320345b34(Local_13.f_3))
	{
		if (_0x397769175a7dbb30(Local_792.f_15, Param0.f_10, 0, 0, 0))
		{
			_0xfa15c9a320e707b0();
			*uParam31 = 1;
			return false;
		}
		func_222(&uVar1, Param0);
		Local_13.f_3 = _0x183c0b6cfeffcae4(&uVar1);
		func_146(128);
	}
	else if (!func_129(128, 255))
	{
		Local_13.f_3.f_1 = func_223(Param0);
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

bool func_126(int iParam0)
{
	return iParam0 != 0;
}

void func_127(var uParam0)
{
	*uParam0 = Global_1296859->f_21;
}

int func_128(int iParam0)
{
	return (Global_1296859->f_21 - iParam0) * 1000;
}

bool func_129(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_209(&iParam1))
		{
			return false;
		}
	}
	return func_177(&(Local_87[iParam1]), iParam0);
}

bool func_130(int iParam0)
{
	return func_177(Local_13.f_1, iParam0);
}

bool func_131()
{
	return true;
}

void func_132()
{
}

bool func_133()
{
	return true;
}

bool func_134()
{
	if (!func_224(&bVar0))
	{
		if (bVar0)
		{
			func_225();
		}
		return false;
	}
	return true;
}

void func_135()
{
}

void func_136()
{
	if (!func_130(32) && func_226(32))
	{
		func_122(32);
	}
	if (!func_130(64) && func_226(64))
	{
		func_122(64);
	}
	if (!func_130(16) && func_227(16))
	{
		func_122(16);
	}
	if ((!func_130(2048) && func_226(2048)) && !func_226(4096))
	{
		func_122(2048);
	}
}

void func_137()
{
	if (!bVar0 && func_130(16))
	{
		func_124(1);
		return;
	}
	if (func_130(2048) && !func_226(4096))
	{
		func_124(6);
		return;
	}
}

void func_138()
{
	func_228();
}

bool func_139()
{
	if (does_entity_exist(func_229(0)))
	{
		func_230(get_entity_coords(func_229(0), true, false));
	}
	if (func_231())
	{
		return true;
	}
	switch (func_115())
	{
		case 0:
			return false;
	}
	switch (Local_13.f_24)
	{
		case 0:
			func_232();
			break;
		case 1:
			func_233();
			break;
		case 2:
			func_234();
			break;
		case 3:
			func_235();
			break;
		case 4:
			func_236();
			break;
		case 5:
			func_237();
			break;
		case 6:
			func_238();
			break;
		case 7:
			func_239();
			break;
		case 8:
			func_240();
			break;
		case 11:
			func_241();
			break;
		case 10:
			func_242();
			break;
		case 9:
			func_243();
			break;
		case 12:
			func_244();
			break;
		case 13:
			func_245();
			break;
		case 14:
			func_246();
			break;
		case 15:
			func_247();
			break;
	}
	return false;
}

void func_140()
{
}

bool func_141()
{
	return true;
}

void func_142(int iParam0)
{
	if (func_66(iParam0))
	{
		func_248(&(Local_792.f_7), iParam0);
	}
}

int func_143(int iParam0, int iParam1, bool bParam2)
{
	if (!func_178(iParam0))
	{
		return 0;
	}
	iVar0 = func_249(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = player_id();
	(*Global_1134390)[iVar1]->f_70 = iParam0;
	(*Global_1134390)[iVar1]->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_250(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	else
	{
		func_251(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	return 1;
}

void func_144(int iParam0)
{
	if (!func_66(iParam0))
	{
		func_219(&(Local_792.f_7), iParam0);
	}
}

void func_145(int iParam0)
{
	if (func_177(&(Local_87[participant_id_to_int()]), iParam0))
	{
		func_248(Local_87[participant_id_to_int()], iParam0);
	}
}

void func_146(int iParam0)
{
	if (!func_129(iParam0, 255))
	{
		func_219(Local_87[participant_id_to_int()], iParam0);
	}
}

void func_147()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_252(iVar0);
				break;
			case -1315570756:
				func_253(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		func_254(iVar0);
		iVar0++;
	}
}

void func_148(int iParam0)
{
	if (Local_792.f_8 != iParam0)
	{
		Local_792.f_8 = iParam0;
	}
}

bool func_149()
{
	if (!func_255())
	{
		return false;
	}
	return true;
}

bool func_150()
{
	bVar0 = false;
	if (!func_256())
	{
		bVar0 = true;
	}
	if (Local_792.f_25 && !func_257(&(Local_13.f_7), &(Local_792.f_25)))
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_151(var uParam0)
{
	*uParam0 = 0;
}

void func_152()
{
}

int func_153()
{
	return 1;
}

int func_154()
{
	return 1;
}

int func_155(int iParam0)
{
	return (iParam0 - Global_1296859->f_21) * 1000;
}

void func_156()
{
	if (!func_66(1))
	{
		func_258(Local_792.f_9);
		func_144(1);
	}
}

void func_157()
{
	func_259();
}

void func_158()
{
	iVar0 = func_229(0);
	func_260(iVar0);
	func_261();
	func_262(&(Local_792.f_53), 0, get_entity_coords(iVar0, true, false), 1112014848);
	func_263(&(Local_792.f_53), 13);
	bVar1 = func_264(0);
	if (func_265(1) || bVar1)
	{
		func_266(2, 1);
	}
	if (func_265(2) || bVar1)
	{
		func_266(4, 1);
	}
	func_267(&(Local_792.f_53), 1);
	func_268(15f, 100f, 1, 1f, 1);
	func_269(1065353216, 2.5f);
	func_270(iVar0);
}

void func_159()
{
	func_271();
}

void func_160()
{
}

void func_161()
{
	if (func_221(Local_792.f_15))
	{
		return;
	}
	if (func_272())
	{
		return;
	}
	if (func_273(Local_792.f_1, 600))
	{
		fVar0 = vdist(get_entity_coords(player_ped_id(), false, false), Local_792.f_15);
		if (fVar0 < 200f)
		{
			func_146(4096);
		}
		else if (fVar0 < 400f)
		{
			func_145(4096);
			func_146(2048);
		}
		else
		{
			func_145(4096);
			func_145(2048);
		}
	}
}

void func_162()
{
	func_274();
	func_275();
	func_276();
	func_277();
	func_278();
	func_279();
}

void func_163()
{
	if (func_280())
	{
		func_146(8);
	}
	else
	{
		func_145(8);
	}
}

void func_164()
{
	if (Local_13.f_24 != Local_792.f_152)
	{
		func_281(Local_792.f_152);
		Local_792.f_152 = Local_13.f_24;
		func_282();
	}
	func_283();
	switch (func_115())
	{
		case 0:
			func_284(func_229(0), 0);
			return;
		case 1:
			func_284(func_229(0), 1);
			break;
		default:
			break;
	}
	func_285();
	func_286();
	switch (Local_792.f_152)
	{
		case 0:
			func_287();
			break;
		case 1:
			func_288();
			break;
		case 2:
			func_289();
			break;
		case 3:
			func_290();
			break;
		case 4:
			func_291();
			break;
		case 5:
			func_292();
			break;
		case 6:
			func_293();
			break;
		case 7:
			func_294();
			break;
		case 8:
			func_295();
			break;
		case 11:
			func_296();
			break;
		case 10:
			func_297();
			break;
		case 9:
			func_298();
			break;
		case 12:
			func_299();
			break;
		case 14:
			func_300();
			break;
		case 13:
			func_301();
			break;
		case 15:
			func_302();
			break;
	}
}

void func_165()
{
	if (!func_129(8, 255))
	{
		func_146(16);
	}
	else
	{
		func_145(16);
	}
}

void func_166()
{
	Local_792.f_6 = -1;
	Local_792.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_792.f_5 = (Local_792.f_5 || Local_87[iVar0]) // PointerArith;
			Local_792.f_6 = (Local_792.f_6 && Local_87[iVar0]) // PointerArith;
		}
		iVar0++;
	}
}

bool func_167()
{
	return true;
}

void func_168()
{
	func_303();
}

void func_169(int iParam0)
{
	if (does_blip_exist(Local_792.f_165.f_7[iParam0]->f_1))
	{
		remove_blip(&(Local_792.f_165.f_7[iParam0]->f_1));
	}
}

bool func_170(int iParam0, int iParam1)
{
	return func_177(Local_792.f_165.f_7[iParam0]->f_2, iParam1);
}

void func_171(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_172()
{
	if (!func_304())
	{
		return;
	}
	if (func_305(2, -1))
	{
		return;
	}
	if ((does_entity_exist(Local_792.f_53) && is_entity_dead(Local_792.f_53)) || Local_792.f_53.f_2 == 12)
	{
		return;
	}
	if (func_306(16))
	{
		return;
	}
	sVar0 = func_307(Local_792.f_142.f_5, Local_792.f_142.f_6);
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	func_308(sVar0);
}

bool func_173(int iParam0, int iParam1, int iParam2)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	return is_bit_set((*Global_1207784)[iParam1][iParam0], iParam2);
}

void func_174(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_310(func_309(Param0));
	iVar1 = func_311(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_312(Param0, &Var2);
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

void func_175(int iParam0, int iParam1)
{
	iVar0 = func_313(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_314(iVar0);
}

void func_176(int iParam0, int iParam1)
{
	func_127(Global_1272030->f_3271[iParam0]);
	switch (iParam1)
	{
		case 0:
			Global_1272030->f_3275[iParam0] = func_315(iParam0);
			break;
		case 1:
			Global_1272030->f_3275[iParam0] = func_316(iParam0);
			break;
		case 2:
			Global_1272030->f_3275[iParam0] = func_317(iParam0);
			break;
	}
}

bool func_177(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_178(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_179(var uParam0)
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

int func_180(var uParam0, int iParam1)
{
	iVar0 = func_318(iParam1);
	iVar1 = ((&Global_1198046->f_3[iParam1] + iVar0) - 1);
	if (&Global_1198046->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_319(iParam1)) - 1);
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

void func_181(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_320(uParam0);
			break;
		case 1:
			func_320(uParam0);
			break;
		case 2:
			func_320(uParam0);
			break;
		case 3:
			func_321(uParam0);
			break;
		case 4:
			func_320(uParam0);
			break;
		case 5:
			func_320(uParam0);
			break;
		case 6:
			func_321(uParam0);
			break;
		case 7:
			func_321(uParam0);
			break;
		case 8:
			func_321(uParam0);
			break;
		case 9:
			func_320(uParam0);
			break;
		default:
			func_183(uParam0);
			func_182(uParam0);
			break;
	}
}

void func_182(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_185(uParam0, iVar0);
		iVar0++;
	}
}

void func_183(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_184(uParam0, iVar0);
		iVar0++;
	}
}

void func_184(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_3), iParam1);
}

void func_185(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_4), iParam1);
}

void func_186(var uParam0, int iParam1)
{
	func_250(&(uParam0->f_25), iParam1);
}

void func_187(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_185(uParam0, 0);
			break;
		case 1:
		case 2:
			func_185(uParam0, 1);
			func_185(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_185(uParam0, 0);
			func_185(uParam0, 2);
			break;
		case 8:
			func_185(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_185(uParam0, 1);
			break;
		default:
			func_182(uParam0);
			break;
	}
}

void func_188(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_322(uParam0);
			break;
		case 1:
			func_323(uParam0);
			break;
		case 2:
			func_324(uParam0);
			break;
		case 3:
			func_325(uParam0);
			break;
		default:
			func_183(uParam0);
			func_182(uParam0);
			break;
	}
}

Vector3 func_189(int iParam0)
{
	if (!func_178(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1131196)[iParam0]->f_20;
}

void func_190(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_326(uParam0);
			break;
		case 1:
		case 2:
			func_327(uParam0);
			break;
		case 3:
		case 4:
			func_328(uParam0);
			break;
		default:
			func_182(uParam0);
			break;
	}
	func_183(uParam0);
}

void func_191(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_185(uParam0, 0);
			func_185(uParam0, 2);
			break;
		case 1:
			func_185(uParam0, 1);
			func_185(uParam0, 3);
			break;
		default:
			func_183(uParam0);
			func_182(uParam0);
			break;
	}
}

void func_192(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_184(uParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_184(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_184(uParam0, 0);
			break;
		default:
			func_184(uParam0, 0);
			break;
	}
	func_182(uParam0);
}

void func_193(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_184(uParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_184(uParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_184(uParam0, 2);
			break;
		default:
			func_183(uParam0);
			break;
	}
	func_182(uParam0);
}

void func_194(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_184(uParam0, 0);
			func_185(uParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_184(uParam0, 1);
			func_185(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_184(uParam0, 2);
			func_185(uParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_184(uParam0, 3);
			func_185(uParam0, 0);
			break;
	}
}

void func_195(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_184(uParam0, 0);
			func_185(uParam0, 0);
			break;
		case 2:
			func_184(uParam0, 1);
			func_185(uParam0, 0);
			break;
		case 3:
		case 4:
			func_184(uParam0, 2);
			func_185(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_184(uParam0, 3);
			func_185(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_184(uParam0, 4);
			func_185(uParam0, 1);
			break;
	}
}

void func_196(var uParam0, int iParam1)
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
			func_184(uParam0, 3);
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
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			break;
		default:
			func_183(uParam0);
			break;
	}
	func_182(uParam0);
}

void func_197(var uParam0, int iParam1)
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
			func_184(uParam0, 3);
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
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			break;
		default:
			func_183(uParam0);
			break;
	}
	func_182(uParam0);
}

void func_198(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_185(uParam0, 0);
			func_184(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_185(uParam0, 1);
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			func_184(uParam0, 2);
			break;
		default:
			func_185(uParam0, 0);
			func_184(uParam0, 0);
			break;
	}
}

void func_199(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_185(uParam0, 0);
			func_184(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_185(uParam0, 1);
			func_184(uParam0, 0);
			func_184(uParam0, 1);
			break;
		default:
			func_185(uParam0, 0);
			func_184(uParam0, 0);
			break;
	}
}

void func_200(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_182(uParam0);
			func_183(uParam0);
			break;
		default:
			func_182(uParam0);
			func_183(uParam0);
			break;
	}
}

int func_201(int iParam0)
{
	return &(Global_1272030->f_3348[iParam0]);
}

int func_202(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (*Global_1257541)[iParam0]->f_3;
}

int func_203(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0];
}

var func_204(int iParam0, int iParam1)
{
	if (func_329(&Var1, iParam0) && func_330(&Var1, iParam1))
	{
		func_331(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_205(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_329(&Var1, iParam0) && func_330(&Var1, iParam1))
	{
		func_331(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_206(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_332(iParam0, iParam1);
	return &(Global_1257541->f_451[iVar0]);
}

Vector3 func_207(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_332(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_3;
}

void func_208(var uParam0, var uParam1)
{
	func_333(uParam0);
	func_334(uParam1);
	func_335(uParam1);
	func_336(uParam1);
	func_337(uParam1, 1);
	func_338(uParam1, 1);
	func_339(uParam0, 1);
	func_340(uParam0, 1.25f);
}

bool func_209(int iParam0)
{
	*iParam0 = participant_id_to_int();
	if (!func_341(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

int func_210(var uParam0, int iParam1, int iParam2)
{
	if (!func_342(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_343(Var0.f_2, 10);
		iVar5 = iVar4 ^ -1;
		(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] && iVar5);
		if (iParam2 != 0)
		{
			(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] || (shift_left(iParam2, Var0.f_2) && iVar4));
		}
		return 1;
	}
	iVar4 = func_343(Var0.f_2, (32 - Var0.f_2));
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0] = (uParam0[Var0] && iVar5);
	(*uParam0)[Var0] = (uParam0[Var0] || (shift_left(iParam2, Var0.f_2) && iVar4));
	iVar4 = func_343(0, Var0.f_3 + 1);
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] && iVar5);
	(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] || (shift_right(iParam2, (32 - Var0.f_3)) && iVar4));
	return 1;
}

int func_211()
{
	return Local_792.f_2;
}

void func_212(int iParam0, int iParam1)
{
	Local_792.f_165.f_7[iParam0]->f_3 = iParam1;
}

void func_213(int iParam0, int iParam1)
{
	Local_792.f_165.f_7[iParam0]->f_4 = iParam1;
}

void func_214(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	Local_792.f_165.f_7[iParam0]->f_6 = { vParam1 };
	Local_792.f_165.f_7[iParam0]->f_5 = fParam4;
	if (bParam5)
	{
		func_219(&(Local_792.f_165.f_7[iParam0]->f_2), 2);
	}
	else
	{
		func_248(&(Local_792.f_165.f_7[iParam0]->f_2), 2);
	}
}

void func_215(int iParam0, int iParam1)
{
	func_219(&(Local_792.f_165.f_7[iParam0]->f_2), iParam1);
}

int func_216()
{
	return Local_792.f_3;
}

void func_217()
{
	if (Local_13.f_7.f_1 == -1)
	{
		iVar0 = get_random_int_in_range(0, 2);
		Local_13.f_7.f_1 = iVar0;
	}
}

bool func_218(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_219(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_220(int iParam0)
{
	if (!func_178(iParam0))
	{
		return false;
	}
	iVar0 = func_344(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_221(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_222(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_223(struct<31> Param0)
{
	func_222(&uVar0, Param0);
	return _0x77a6e4ad0c496f81(&uVar0);
}

bool func_224(var uParam0)
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
		if (func_170(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_345(iVar2, uParam0, &bVar1))
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
			if (func_346(iVar2))
			{
				if (network_does_network_id_exist(&(Local_13.f_67[iVar2])))
				{
					if (network_request_control_of_network_id(&(Local_13.f_67[iVar2])))
					{
						_0x7182edda1ee7db5a(&(Local_13.f_67[iVar2]));
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

void func_225()
{
	func_124(2);
}

bool func_226(int iParam0)
{
	return func_177(Local_792.f_5, iParam0);
}

bool func_227(int iParam0)
{
	return func_177(Local_792.f_6, iParam0);
}

void func_228()
{
	if (Local_792.f_25 && func_347(&(Local_13.f_7), &(Local_792.f_25)))
	{
		func_124(7);
	}
}

int func_229(int iParam0)
{
	return &(Local_792.f_165.f_7[iParam0]);
}

void func_230(vector3 vParam0)
{
	if (!func_126(Local_792.f_13))
	{
		func_127(&(Local_792.f_13));
	}
	if (func_128(Local_792.f_13) < Global_1901947->f_236.f_69)
	{
		return;
	}
	func_348(Local_792.f_9, vParam0, 0, Local_792.f_12);
	func_151(&(Local_792.f_13));
}

bool func_231()
{
	if (func_349(128))
	{
		return true;
	}
	if (Local_13.f_24 > 1)
	{
		if (func_350(5, 30, 5))
		{
			if (!func_351(0, 175f, 0))
			{
				return true;
			}
		}
		else if (!func_351(0, 225f, 0))
		{
			return true;
		}
	}
	if (func_352(134217728, 0))
	{
		return true;
	}
	return false;
}

void func_232()
{
	if (func_261())
	{
		func_353(1, 1);
	}
}

void func_233()
{
	bVar0 = func_354(0, 1);
	if ((func_355(2, 0) || func_355(32, 0)) || func_272())
	{
		if (!func_265(1))
		{
			func_356(1, 1);
		}
		if (func_355(8, 0) || bVar0)
		{
			if (!func_265(2))
			{
				func_356(2, 1);
			}
			switch (func_115())
			{
				case 0:
					func_353(2, 1);
					break;
				case 1:
					func_353(3, 1);
					break;
				case 2:
					func_353(3, 1);
					break;
			}
		}
	}
	if (!func_357(&(Local_13.f_24.f_19)))
	{
		func_358(&(Local_13.f_24.f_19), 0);
	}
	if (Local_13.f_24.f_4 == -2128726980 || func_359(&(Local_13.f_24.f_19)) > Local_13.f_24.f_25)
	{
		switch (func_360())
		{
			case 923520851:
				func_358(&(Local_13.f_24.f_19), 1);
				Local_13.f_24.f_4 = 923520851;
				Local_13.f_24.f_25 = get_random_int_in_range(6500, 12500);
				break;
			case 993674639:
				func_358(&(Local_13.f_24.f_19), 1);
				Local_13.f_24.f_4 = 993674639;
				Local_13.f_24.f_25 = get_random_int_in_range(12000, 20000);
				break;
			case 1139527981:
				func_358(&(Local_13.f_24.f_19), 1);
				Local_13.f_24.f_4 = 1139527981;
				Local_13.f_24.f_25 = get_random_int_in_range(3000, 6000);
				break;
		}
	}
}

void func_234()
{
	if (func_355(1048576, 0))
	{
		func_353(15, 1);
	}
	else if (func_355(16777216, 0))
	{
		func_353(15, 1);
	}
	else if (func_355(33554432, 0))
	{
		func_353(6, 1);
	}
	else
	{
		func_353(5, 1);
	}
}

void func_235()
{
	switch (func_115())
	{
		case 0:
			func_353(2, 1);
			break;
		case 1:
		case 2:
			if (func_355(1048576, 0))
			{
				func_353(15, 1);
			}
			else if (func_355(2097152, 0))
			{
				func_353(14, 1);
			}
			else if (func_355(67108864, 0))
			{
				func_353(7, 1);
			}
			else if (func_355(4194304, 0))
			{
				func_353(9, 1);
			}
			else if (func_355(8388608, 0))
			{
				func_353(11, 1);
			}
			else if (func_355(16777216, 0))
			{
				func_353(8, 1);
			}
			else if (func_355(33554432, 0))
			{
				func_353(6, 1);
			}
			else
			{
				if (!func_357(&(Local_13.f_24.f_22)))
				{
					func_361(&(Local_13.f_24.f_22));
				}
				if (func_359(&(Local_13.f_24.f_22)) > 4000)
				{
					func_362(&(Local_13.f_24.f_22));
					func_353(5, 1);
				}
			}
			break;
	}
}

void func_236()
{
	if (func_355(16777216, 0))
	{
		return;
	}
	if (func_355(33554432, 0))
	{
		return;
	}
	func_353(3, 1);
}

void func_237()
{
	if (func_355(1048576, 0))
	{
		func_353(15, 1);
		return;
	}
	if (func_355(64, 0))
	{
		func_353(4, 1);
		return;
	}
	if (func_355(128, 0))
	{
		if ((Global_1296859->f_21 - Local_13.f_24.f_18) > 70)
		{
			func_353(4, 1);
			return;
		}
	}
	if (func_355(32, 0))
	{
		func_353(4, 1);
		return;
	}
	if (!func_357(&(Local_13.f_24.f_19)))
	{
		func_358(&(Local_13.f_24.f_19), 0);
	}
	if (Local_13.f_24.f_4 == -2128726980 || func_359(&(Local_13.f_24.f_19)) > Local_13.f_24.f_25)
	{
		switch (func_360())
		{
			case -1146898486:
				func_358(&(Local_13.f_24.f_19), 1);
				Local_13.f_24.f_4 = -1146898486;
				Local_13.f_24.f_25 = get_random_int_in_range(6500, 12500);
				break;
			case 993674639:
				func_358(&(Local_13.f_24.f_19), 1);
				Local_13.f_24.f_4 = 993674639;
				Local_13.f_24.f_25 = get_random_int_in_range(12000, 20000);
				break;
			case 1139527981:
				func_358(&(Local_13.f_24.f_19), 1);
				Local_13.f_24.f_4 = 1139527981;
				Local_13.f_24.f_25 = get_random_int_in_range(3000, 6000);
				break;
		}
	}
}

void func_238()
{
	if (func_355(1048576, 0))
	{
		func_353(15, 1);
		return;
	}
	if (func_355(64, 0))
	{
		func_353(4, 1);
		return;
	}
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (func_355(32, 0))
	{
		func_353(4, 1);
		return;
	}
	if (!func_357(&(Local_13.f_24.f_15)))
	{
		func_358(&(Local_13.f_24.f_15), 1);
	}
	iVar1 = Local_792.f_152.f_10;
	if (!network_is_player_active(iVar1))
	{
		func_353(4, 1);
		return;
	}
	iVar2 = get_player_ped(iVar1);
	fVar3 = vdist(get_entity_coords(iVar0, true, false), get_entity_coords(iVar2, true, false));
	if (fVar3 > 40f)
	{
		Local_13.f_24.f_18 = Global_1296859->f_21;
		func_362(&(Local_13.f_24.f_15));
		func_353(4, 1);
		return;
	}
	if (func_359(&(Local_13.f_24.f_15)) > 15000)
	{
		Local_13.f_24.f_18 = Global_1296859->f_21;
		func_362(&(Local_13.f_24.f_15));
		func_353(4, 1);
		return;
	}
}

void func_239()
{
	if (func_355(1048576, 0))
	{
		func_362(&(Local_13.f_24.f_15));
		func_353(15, 1);
		return;
	}
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (get_entity_health(iVar0) < Local_13.f_24.f_39)
	{
		func_362(&(Local_13.f_24.f_15));
		func_353(4, 1);
		return;
	}
	if (Local_792.f_152.f_8 < 14f && Local_792.f_152.f_7 < 75f)
	{
		func_362(&(Local_13.f_24.f_15));
		func_353(4, 1);
		return;
	}
	if (!func_357(&(Local_13.f_24.f_15)))
	{
		func_358(&(Local_13.f_24.f_15), 1);
	}
	if (func_359(&(Local_13.f_24.f_15)) > 15000)
	{
		func_362(&(Local_13.f_24.f_15));
		func_353(4, 1);
	}
}

void func_240()
{
	if (func_355(1048576, 0))
	{
		func_363();
		func_353(15, 1);
		return;
	}
	if (func_355(32, 0))
	{
		func_363();
		func_353(4, 1);
		return;
	}
	if (Local_13.f_24.f_40 >= 7)
	{
		func_363();
		func_353(4, 1);
		return;
	}
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar1 = Local_792.f_152.f_10;
	if (!_network_is_player_index_valid(iVar1) || !network_is_player_active(iVar1))
	{
		func_353(4, 1);
		return;
	}
	iVar2 = get_player_ped(iVar1);
	fVar3 = vdist(get_entity_coords(iVar0, true, false), get_entity_coords(iVar2, true, false));
	if (func_364(iVar0, -1389117756))
	{
		vVar4 = { get_entity_forward_vector(iVar0) };
		vVar4 = { func_365(vVar4) };
		vVar7 = { get_entity_coords(iVar2, true, false) - get_entity_coords(iVar0, true, false) };
		vVar7 = { func_365(vVar7) };
		fVar10 = func_366(vVar4, vVar7);
		if (!func_357(&(Local_13.f_24.f_8)))
		{
			if (fVar10 < 0.35f)
			{
				return;
			}
			Local_13.f_24.f_41++;
			Local_13.f_24.f_42 = get_random_int_in_range(7500, 9200);
			Local_13.f_24.f_14 = Global_1296859->f_21;
			Local_13.f_24.f_11 = { get_entity_coords(iVar0, true, false) };
			func_358(&(Local_13.f_24.f_8), 1);
		}
		if (fVar3 < func_367())
		{
			func_363();
			func_353(11, 1);
			return;
		}
		if (fVar3 > 40f)
		{
			func_363();
			func_353(6, 1);
			return;
		}
		if (func_359(&(Local_13.f_24.f_8)) > Local_13.f_24.f_42)
		{
			func_363();
			func_353(10, 1);
			return;
		}
	}
}

void func_241()
{
	if (func_355(1048576, 0))
	{
		func_362(&(Local_13.f_24.f_26));
		func_353(15, 1);
		return;
	}
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar1 = Local_792.f_152.f_10;
	if (!network_is_player_active(iVar1))
	{
		func_362(&(Local_13.f_24.f_26));
		func_353(4, 1);
		return;
	}
	if (!_network_is_player_index_valid(iVar1))
	{
		func_362(&(Local_13.f_24.f_26));
		func_353(4, 1);
		return;
	}
	iVar2 = get_player_ped(iVar1);
	fVar3 = vdist(get_entity_coords(iVar0, true, false), get_entity_coords(iVar2, true, false));
	if (fVar3 > 75f)
	{
		func_362(&(Local_13.f_24.f_26));
		func_353(4, 1);
		return;
	}
	if (fVar3 < 75f && Local_792.f_152.f_9)
	{
		func_353(13, 1);
		return;
	}
	if (func_364(iVar0, -1578598439))
	{
		if (!func_357(&(Local_13.f_24.f_26)))
		{
			func_358(&(Local_13.f_24.f_26), 1);
			Local_13.f_24.f_29 = get_random_int_in_range(8000, 18000);
		}
	}
	if ((func_357(&(Local_13.f_24.f_26)) && func_359(&(Local_13.f_24.f_26)) > Local_13.f_24.f_29) && (Global_1296859->f_21 - Local_792.f_152.f_12) > 10)
	{
		func_362(&(Local_13.f_24.f_26));
		func_353(13, 1);
		return;
	}
	func_368(iVar0);
	if (Local_13.f_24.f_31 >= 2)
	{
		func_353(14, 1);
		return;
	}
}

void func_242()
{
	if (func_355(1048576, 0))
	{
		func_362(&(Local_13.f_24.f_26));
		func_353(15, 1);
		return;
	}
	if (!func_357(&(Local_13.f_24.f_26)))
	{
		func_358(&(Local_13.f_24.f_26), 1);
		Local_13.f_24.f_30 = get_random_int_in_range(1000, 2600);
	}
	if (func_359(&(Local_13.f_24.f_26)) > Local_13.f_24.f_30)
	{
		func_362(&(Local_13.f_24.f_26));
		func_353(13, 1);
		return;
	}
}

void func_243()
{
	if (func_355(1048576, 0))
	{
		func_353(15, 1);
		return;
	}
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar1 = Local_792.f_152.f_10;
	if (!_network_is_player_index_valid(iVar1) || !network_is_player_active(iVar1))
	{
		func_353(13, 1);
		return;
	}
	iVar2 = get_player_ped(iVar1);
	fVar3 = vdist(get_entity_coords(iVar0, true, false), get_entity_coords(iVar2, true, false));
	if (fVar3 > 75f && !func_355(32, 0))
	{
		func_353(4, 1);
		return;
	}
	if (func_369())
	{
		func_353(4, 1);
		return;
	}
	if (fVar3 < 75f && Local_792.f_152.f_9)
	{
		func_353(15, 1);
		return;
	}
	if (!func_357(&(Local_13.f_24.f_26)))
	{
		func_358(&(Local_13.f_24.f_26), 1);
		Local_13.f_24.f_29 = get_random_int_in_range(50000, 90000);
	}
	if (func_357(&(Local_13.f_24.f_26)) && func_359(&(Local_13.f_24.f_26)) > Local_13.f_24.f_29)
	{
		func_362(&(Local_13.f_24.f_26));
		func_353(15, 1);
		return;
	}
	func_368(iVar0);
	if (Local_13.f_24.f_31 >= 2)
	{
		func_353(14, 1);
		return;
	}
}

void func_244()
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
}

void func_245()
{
	if (func_355(1048576, 0))
	{
		func_353(15, 1);
		return;
	}
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar1 = Local_792.f_152.f_10;
	if (!network_is_player_active(iVar1))
	{
		return;
	}
	iVar2 = get_player_ped(iVar1);
	if (network_is_player_active(iVar1))
	{
		fVar3 = vdist(get_entity_coords(iVar0, true, false), get_entity_coords(iVar2, true, false));
	}
	else
	{
		fVar3 = 0f;
	}
	if (!func_357(&(Local_13.f_24.f_36)))
	{
		func_358(&(Local_13.f_24.f_36), 1);
		Local_13.f_24.f_40++;
	}
	if (func_359(&(Local_13.f_24.f_36)) > 15000)
	{
		func_362(&(Local_13.f_24.f_36));
		func_353(8, 1);
		return;
	}
	if (func_355(2097152, 0))
	{
		fVar3 = vdist(Local_13.f_24.f_5, get_entity_coords(iVar0, true, false));
		if (fVar3 > 45f)
		{
			func_362(&(Local_13.f_24.f_36));
			func_353(4, 1);
			return;
		}
	}
	else if (fVar3 > 40f)
	{
		func_362(&(Local_13.f_24.f_36));
		func_353(4, 1);
		return;
	}
}

void func_246()
{
	if (func_355(1048576, 0))
	{
		func_353(15, 1);
		return;
	}
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar1 = Local_792.f_152.f_10;
	if (!network_is_player_active(iVar1))
	{
		func_353(7, 1);
		return;
	}
	fVar2 = vdist(Local_13.f_24.f_5, get_entity_coords(iVar0, true, false));
	if (!func_357(&(Local_13.f_24.f_36)))
	{
		func_358(&(Local_13.f_24.f_36), 1);
	}
	if (func_359(&(Local_13.f_24.f_36)) > 15000)
	{
		func_362(&(Local_13.f_24.f_36));
		Local_13.f_24.f_39 = get_entity_health(iVar0);
		func_353(7, 1);
		return;
	}
	if (fVar2 > 45f)
	{
		func_362(&(Local_13.f_24.f_36));
		Local_13.f_24.f_39 = get_entity_health(iVar0);
		func_353(7, 1);
		return;
	}
}

void func_247()
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
}

void func_248(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_249(int iParam0)
{
	if (!func_178(iParam0))
	{
		return 0;
	}
	if (!func_220(iParam0))
	{
		return 0;
	}
	return (*Global_1131196)[iParam0]->f_18.f_1;
}

void func_250(var uParam0, int iParam1)
{
	func_370(uParam0, iParam1);
}

void func_251(var uParam0, int iParam1)
{
	func_371(uParam0, iParam1);
}

void func_252(int iParam0)
{
	Var0.f_10 = 255;
	get_event_data(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 182:
			if (func_372(&Var0, iParam0))
			{
				func_373(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_253(int iParam0)
{
}

void func_254(int iParam0)
{
}

bool func_255()
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

bool func_256()
{
	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (is_bit_set(Local_792.f_165.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_374(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!is_bit_set(Local_792.f_165.f_4, iVar0))
				{
					request_model(iVar2, false);
					set_bit(&(Local_792.f_165.f_4), iVar0);
				}
				if (!has_model_loaded(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					set_bit(&(Local_792.f_165.f_3), iVar0);
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

bool func_257(var uParam0, var uParam1)
{
	if (*uParam0 == 3)
	{
		return func_375(&(uParam0->f_9), &(uParam1->f_16), &(uParam1->f_4), &(uParam1->f_12), 64);
	}
	return true;
}

void func_258(struct<2> Param0)
{
	if (func_311(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_311(Param0)))
	{
		_0x99230691875fc218(func_309(Param0), func_311(Param0), Global_35);
	}
}

void func_259()
{
	if (!func_209(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_376(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_260(int iParam0)
{
	Local_792.f_142.f_5 = func_377(get_entity_model(iParam0));
	func_378(iParam0, &(Local_792.f_149));
	func_379(iParam0);
}

bool func_261()
{
	if (func_355(1, 1))
	{
		return func_380(1);
	}
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (!network_has_control_of_entity(iVar0))
	{
		return false;
	}
	set_animal_tuning_bool_param(iVar0, 43, true);
	func_381(iVar0, func_216());
	set_ped_hearing_range(iVar0, 45f);
	_task_start_scenario_in_place(iVar0, -95090138, -1, true, 0, -1f, false);
	switch (func_115())
	{
		case 0:
			func_213(0, -44203702);
			break;
		case 1:
			func_213(0, 319532198);
			break;
	}
	func_266(1, 1);
	return false;
}

void func_262(var uParam0, int iParam1, vector3 vParam2, var uParam5)
{
	func_215(iParam1, 256);
	uParam0->f_40 = iParam1;
	*uParam0 = func_229(iParam1);
	uParam0->f_12 = uParam5;
	uParam0->f_30 = { vParam2 };
}

void func_263(var uParam0, int iParam1)
{
	fVar0 = Global_1901947->f_852;
	iVar1 = Global_1901947->f_852.f_1;
	fVar2 = Global_1901947->f_852.f_2;
	switch (iParam1)
	{
		case 14:
			func_383(uParam0, func_382(*uParam0), 1000, 15f, 1500f, 10f, -1723181095);
			func_384(uParam0, 30f, 50f, 120f, 50f, 80f, 500f, 1f, 4f, 0.5f);
			func_385(uParam0, 8);
			func_385(uParam0, 4);
			break;
		case 0:
			func_383(uParam0, "LEGENDARY_ALLIGATOR_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_384(uParam0, 30f, 50f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 1:
			func_383(uParam0, "LEGENDARY_BEAR_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_384(uParam0, 30f, 50f, 120f, 40f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 2:
			func_383(uParam0, "LEGENDARY_BEAVER_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_384(uParam0, 10f, 30f, 120f, 30f, 70f, 200f, 1f, 4f, 0.5f);
			break;
		case 3:
			func_383(uParam0, "LEGENDARY_BISON_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_384(uParam0, 30f, 50f, 120f, 40f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 4:
			func_383(uParam0, "LEGENDARY_BOAR_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_384(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 5:
			func_383(uParam0, "LEGENDARY_BUCK_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_384(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 6:
			func_383(uParam0, "LEGENDARY_COUGAR_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_384(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 7:
			func_383(uParam0, "LEGENDARY_PANTHER_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_384(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 8:
			func_383(uParam0, "LEGENDARY_COYOTE_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_384(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 9:
			func_383(uParam0, "LEGENDARY_FOX_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_384(uParam0, 10f, 30f, 120f, 30f, 70f, 200f, 1f, 4f, 0.5f);
			break;
		case 10:
			func_383(uParam0, "LEGENDARY_MOOSE_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_384(uParam0, 30f, 50f, 120f, 40f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 11:
			func_383(uParam0, "LEGENDARY_RAM_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_384(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 12:
			func_383(uParam0, "LEGENDARY_WOLF_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_384(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 13:
			func_383(uParam0, "LEGENDARY_ELK_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_384(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
	}
}

bool func_264(int iParam0)
{
	return func_386(&(Local_792.f_192.f_72), 1, iParam0);
}

bool func_265(int iParam0)
{
	return func_177(Local_13.f_24.f_1, iParam0);
}

void func_266(int iParam0, bool bParam1)
{
	iVar0 = participant_id_to_int();
	if (bParam1)
	{
		if (!network_is_participant_active(participant_id()))
		{
			return;
		}
		if (iVar0 < 0 || iVar0 >= network_get_max_num_participants())
		{
			return;
		}
	}
	func_219(&(Local_87[iVar0]->f_6), iParam0);
}

void func_267(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_385(uParam0, 16);
	}
	else
	{
		func_387(uParam0, 16);
	}
}

void func_268(float fParam0, float fParam1, int iParam2, float fParam3, bool bParam4)
{
	if (fParam0 >= fParam1)
	{
	}
	Local_792.f_289.f_2 = iParam2;
	Local_792.f_289.f_9 = fParam0;
	Local_792.f_289.f_10 = fParam1;
	Local_792.f_289.f_8 = fParam3;
	if (bParam4)
	{
		func_219(&(Local_792.f_289.f_12), 1);
	}
	else
	{
		func_248(&(Local_792.f_289.f_12), 1);
	}
}

void func_269(int iParam0, float fParam1)
{
	func_219(&(Local_792.f_289.f_12), 2);
	Local_792.f_289.f_7 = fParam1;
	Local_792.f_289.f_5 = iParam0;
}

int func_270(int iParam0)
{
	if (func_388(iParam0, &(Local_792.f_289.f_13)))
	{
		Local_792.f_289++;
		return 1;
	}
	return 0;
}

void func_271()
{
	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (func_390(func_389(iVar0), &Var1))
		{
			if (does_entity_exist(Var1))
			{
				if (!network_has_control_of_entity(Var1))
				{
				}
				else
				{
					_0xbb1e41dd3d3c6250(Var1, "MpRandomEvent", 1);
					func_391(&(Local_792.f_192), Var1);
					func_392(func_389(iVar0));
				}
				iVar0++;
			}
		}
	}
}

bool func_272()
{
	return (func_130(32) || func_129(32, 255));
}

bool func_273(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_393(iParam0, 1178968787) };
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

void func_274()
{
	func_394();
	func_395();
}

void func_275()
{
	iVar2 = participant_id_to_int();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = network_is_participant_active(int_to_participantindex(iVar0));
		func_396(iVar0, bVar1, iVar2);
		func_397(iVar0, bVar1, iVar2);
		func_398(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_276()
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
	if (!func_209(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (network_is_in_mp_cutscene() != Local_792.f_165.f_26)
	{
		bVar8 = true;
		Local_792.f_165.f_26 = !Local_792.f_165.f_26;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_792.f_165.f_19 >= 1)
		{
			Local_792.f_165.f_19 = 0;
		}
		iVar0 = Local_792.f_165.f_19;
		Local_792.f_165.f_19++;
		iVar9 = func_399(iVar0);
		iVar1 = &Local_792.f_165.f_7[iVar0];
		bVar4 = !does_entity_exist(iVar1);
		if (func_170(iVar9, 4))
		{
			func_376(iVar9, iVar3, 1);
			bVar4 = !does_entity_exist(iVar1);
		}
		if (bVar4)
		{
			if (&Local_87[iVar3]->f_8.f_2[iVar0] > -1f)
			{
				Local_87[iVar3]->f_8.f_2[iVar0] = -1f;
			}
			if (is_bit_set(Local_792.f_165.f_5, iVar0))
			{
				clear_bit(&(Local_792.f_165.f_5), iVar0);
				clear_bit(&(Local_792.f_165.f_6), iVar0);
				clear_bit(&(Local_792.f_165.f_20), iVar0);
			}
		}
		else
		{
			bVar7 = func_400(iVar2, iVar1, iVar0, iVar3);
		}
		if (is_bit_set(Local_792.f_165.f_20, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				clear_bit(&(Local_792.f_165.f_20), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				set_bit(&(Local_792.f_165.f_20), iVar0);
			}
		}
		if (!bVar4)
		{
			if (is_any_speech_playing(iVar1))
			{
				if (!is_bit_set(Local_87[iVar3]->f_8.f_1, iVar0))
				{
					set_bit(&(Local_87[iVar3]->f_8.f_1), iVar0);
				}
				func_401(Local_792.f_165.f_21[iVar0]);
			}
		}
		if (is_bit_set(Local_87[iVar3]->f_8.f_1, iVar0))
		{
			if (bVar4 || (!is_any_speech_playing(iVar1) && (!func_402(Local_792.f_165.f_21[iVar0]) || func_403(Local_792.f_165.f_21[iVar0], 0.5f))))
			{
				func_404(Local_792.f_165.f_21[iVar0]);
				clear_bit(&(Local_87[iVar3]->f_8.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_170(iVar9, 256))
		{
			set_entity_visible_in_cutscene(iVar1, Local_792.f_165.f_26, 0, 256);
		}
		if (func_170(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (network_is_host_of_this_script())
					{
						if (func_405(iVar9))
						{
							if (!func_345(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_406(iVar9, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if ((_0xb07d3185e11657a5(iVar1) && network_has_control_of_entity(iVar1)) && !func_170(iVar9, 8))
			{
				if (!func_405(iVar9))
				{
					_0x7043d0681285ba2d(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_792.f_165.f_20 != 0)
	{
		if (!func_407(1, 255))
		{
			func_408(1);
		}
	}
	else if (func_407(1, 255))
	{
		func_409(1);
	}
}

void func_277()
{
	Var5.f_6 = 1065353216;
	Var5.f_7 = 1065353216;
	Var5.f_8 = 1065353216;
	Var5.f_9 = 1;
	Var5.f_12 = 8;
	iVar20 = 255;
	if (!func_209(&iVar25))
	{
		return;
	}
	func_410();
	bVar27 = get_current_ped_weapon(player_ped_id(), &iVar26, true, 0, false);
	bVar28 = (bVar27 && is_ped_shooting(player_ped_id()));
	if ((bVar27 && bVar28) && _0x705be297eebdb95d(iVar26))
	{
		Local_792.f_192.f_64 = 0;
		Local_87[iVar25]->f_12.f_4 = get_network_time_accurate();
	}
	bVar29 = (bVar28 && (iVar26 == -1361787316 || iVar26 == 1698907612));
	bVar30 = false;
	while (iVar22 < 1)
	{
		if (Local_792.f_192.f_93 >= 1)
		{
			Local_792.f_192.f_93 = 0;
		}
		iVar1 = Local_792.f_192.f_93;
		Local_792.f_192.f_93++;
		iVar22++;
		iVar18 = func_389(iVar1);
		if (!func_411(iVar18))
		{
		}
		else if (func_412(iVar18, &Var5))
		{
			if (func_413(&Var5, iVar18))
			{
				if (func_386(&(Local_87[iVar25]->f_12), 8, iVar1))
				{
					func_414(&(Local_87[iVar25]->f_12), 8, iVar1);
				}
			}
			else if (!func_386(&(Local_87[iVar25]->f_12), 8, iVar1))
			{
				func_415(&(Local_87[iVar25]->f_12), 8, iVar1);
			}
			if (!does_entity_exist(Var5))
			{
			}
			else
			{
				func_416(iVar18);
				if (func_417(iVar18))
				{
					if (func_418(iVar18))
					{
						if (!func_419(iVar18))
						{
							func_420(iVar18);
						}
					}
					if (func_421(iVar18))
					{
						func_422(iVar18);
					}
				}
				else
				{
					if (func_423(iVar18))
					{
						if ((does_entity_exist(Var5) && !is_entity_dead(Var5)) && network_has_control_of_entity(Var5))
						{
							set_ped_reset_flag(Var5, 42, true);
						}
					}
					if (!func_424(Var5))
					{
						if (network_has_control_of_entity(Var5))
						{
							func_391(&(Local_792.f_192), Var5);
						}
					}
					if (!func_425(iVar18, 255))
					{
						bVar2 = false;
						bVar3 = false;
						if (func_426(iVar18))
						{
							bVar2 = true;
							bVar3 = true;
						}
						else if (func_427(iVar18, iVar25))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_428(Var5, Var5.f_1, &(Local_792.f_192), &iVar4, 0, Var5.f_2))
						{
							switch (iVar4)
							{
								case 256:
									if (!is_bit_set(Local_792.f_192.f_64, iVar18))
									{
										bVar2 = true;
										set_bit(&(Local_792.f_192.f_64), iVar18);
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
						else if ((bVar29 && Var5.f_2 <= 1.25f) && func_429(player_ped_id(), Var5, 1060437492) == 0)
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else
						{
							if (!bVar2)
							{
								if (func_430(iVar18, &Var5, iVar25))
								{
									iVar4 = 4;
									bVar2 = true;
									set_bit(&(Local_792.f_192.f_64), iVar18);
								}
							}
							if (!bVar2)
							{
								bVar30 = true;
								if (!func_431(iVar18) || !_0x83d43f0fd5276e4d(Var5, 1))
								{
									bVar30 = false;
									if (network_has_control_of_entity(Var5))
									{
										_0xbb1e41dd3d3c6250(Var5, "MpRandomEvent", 1);
										func_392(iVar18);
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
														if (func_432(iVar18, &Var5))
														{
															iVar4 = 256;
															bVar2 = true;
															set_bit(&(Local_792.f_192.f_64), iVar18);
														}
														break;
													case -1507090758:
													case -1102089407:
														if (!Local_792.f_192.f_2 & 4 != 0)
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
									if (func_433(iVar18, &Var5, iVar25))
									{
										iVar4 = 256;
										bVar2 = true;
										set_bit(&(Local_792.f_192.f_64), iVar18);
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_434(iVar18, iVar4, bVar3))
							{
							}
							else
							{
								if (func_386(&(Local_87[iVar25]->f_12), 8, iVar1))
								{
									func_414(&(Local_87[iVar25]->f_12), 8, iVar1);
								}
								func_435(iVar18, 1);
								if (func_264(iVar18))
								{
									if (!func_436(iVar18, 255))
									{
										if (network_has_control_of_entity(Var5))
										{
											if (!func_437(iVar18))
											{
											}
											else
											{
												func_438(iVar18);
												func_439(iVar18);
												Jump @1378; //curOff = 1187
												if (func_440(iVar18))
												{
												}
												else if (iVar23 < 1)
												{
													if (network_has_control_of_entity(Var5))
													{
														iVar24 = 0;
														while (iVar24 < 8)
														{
															if (&Local_792.f_192.f_95[iVar18] >= 32)
															{
																iVar0 = 0;
																Local_792.f_192.f_95[iVar18] = 0;
															}
															else
															{
																iVar0 = &Local_792.f_192.f_95[iVar18];
																Local_792.f_192.f_95[iVar18] = &Local_792.f_192.f_95[iVar18] + 1;
															}
															iVar24++;
															if (func_441(iVar0, &uVar21, &iVar20, &uVar19))
															{
																if (!func_442(iVar18, iVar20))
																{
																	if (func_425(iVar18, iVar0))
																	{
																		if (!func_443(iVar18, uVar21, iVar20, uVar19))
																		{
																		}
																		else
																		{
																			func_444(iVar18, iVar20);
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

void func_278()
{
	fVar0 = func_445();
	if (Local_792.f_289.f_4)
	{
		return;
	}
	if (!func_209(&iVar1))
	{
		return;
	}
	if (func_177(Local_87[iVar1]->f_21, 1))
	{
		Local_792.f_289.f_4 = 1;
		return;
	}
	iVar2 = get_player_ped(player_id());
	if (func_446(iVar2, 0))
	{
		return;
	}
	fVar3 = vdist(get_entity_coords(iVar2, true, false), Local_792.f_15);
	fVar4 = Local_792.f_289.f_9;
	fVar5 = Local_792.f_289.f_10;
	if (func_177(Local_792.f_289.f_12, 2))
	{
		bVar6 = false;
		fVar7 = get_entity_speed(iVar2);
		fVar8 = (fVar0 * (1f / Local_792.f_289.f_7));
		if (fVar7 > 0f)
		{
			if (func_447(Local_792.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_792.f_289.f_6 < 1f)
			{
				Local_792.f_289.f_6 = (Local_792.f_289.f_6 + fVar8);
				if (Local_792.f_289.f_6 > 1f)
				{
					Local_792.f_289.f_6 = 1f;
				}
			}
		}
		else if (Local_792.f_289.f_6 > 0f)
		{
			Local_792.f_289.f_6 = (Local_792.f_289.f_6 - fVar8);
			if (Local_792.f_289.f_6 < 0f)
			{
				Local_792.f_289.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_792.f_289.f_5) * Local_792.f_289.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_219(&(Local_87[iVar1]->f_21), 1);
	}
	else if (_does_volume_exist(Local_792.f_289.f_11) && is_entity_in_volume(iVar2, Local_792.f_289.f_11, false, 0))
	{
		func_219(&(Local_87[iVar1]->f_21), 1);
	}
	else if (Local_792.f_289 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 1)
		{
			func_448(Local_792.f_289.f_13[iVar10], fVar5, 1082130432, 0, 0, 0, 0, 1);
			iVar10++;
		}
		if (func_449(&(Local_792.f_289.f_13), Local_792.f_289, Local_792.f_289.f_8))
		{
			func_219(&(Local_87[iVar1]->f_21), 1);
		}
	}
	if (func_177(Local_87[iVar1]->f_21, 1))
	{
		Local_792.f_289.f_4 = 1;
	}
}

void func_279()
{
	func_450();
	func_451();
	func_452();
	func_453(&(Local_792.f_149));
	if (Local_792.f_25)
	{
		func_454(&(Local_13.f_7), &(Local_792.f_25), &(Local_792.f_53));
	}
	func_455();
	if (func_456(&(Local_792.f_53)))
	{
		func_457(&(Local_792.f_53));
	}
	func_458(Local_792.f_53);
	func_459(Local_792.f_53);
	func_460(Local_792.f_53);
	if (func_305(2, -1))
	{
		fVar0 = 150f;
	}
	else
	{
		fVar0 = 250f;
	}
	func_461(Local_792.f_53, fVar0);
}

bool func_280()
{
	bVar0 = true;
	if (bVar0 && !_unlock_is_unlocked(Local_792.f_14))
	{
		return false;
	}
	if (func_462())
	{
		return false;
	}
	if (func_463(get_player_index()))
	{
		return false;
	}
	return true;
}

void func_281(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_266(2, 1);
			break;
		case 8:
			func_464();
			break;
		case 6:
			func_465(128, 1);
			break;
		case 14:
			func_465(2097152, 1);
			break;
		case 7:
			func_465(67108864, 1);
			break;
	}
}

void func_282()
{
	switch (Local_13.f_24)
	{
		case 8:
			func_465(64, 1);
			func_465(128, 1);
			break;
		case 6:
			func_465(128, 1);
			break;
		case 5:
			func_465(128, 1);
			break;
	}
}

void func_283()
{
	if (func_466(2))
	{
		uVar0[0] = func_229(0);
		func_467(&uVar0);
		return;
	}
	if (!func_468(4, -1, 1))
	{
		return;
	}
	if (!func_469() && !func_425(0, 255))
	{
		return;
	}
	func_470();
}

void func_284(int iParam0, int iParam1)
{
	if (Local_792.f_142.f_6 == -1)
	{
		Local_792.f_142.f_6 = iParam1;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!func_471(&(Local_792.f_53), 128))
	{
		if (func_472(Global_34, iParam0, 20f, 1, 1))
		{
			func_473(iParam0, func_377(get_entity_model(iParam0)), iParam1, &(Local_792.f_53));
			func_385(&(Local_792.f_53), 128);
		}
	}
}

void func_285()
{
	iVar0 = func_229(0);
	if (does_entity_exist(iVar0))
	{
		iVar1 = func_474(0, 0, 1, 0);
		bVar2 = (_network_is_player_index_valid(iVar1) && network_is_player_active(iVar1));
		bVar3 = func_475();
		if (!bVar3)
		{
			if (Local_792.f_152.f_10 != 255)
			{
				Local_792.f_152.f_10 = 255;
				Local_792.f_152.f_12 = Global_1296859->f_21;
			}
		}
		if (!bVar2 && !bVar3)
		{
			if (Local_792.f_152.f_10 != 255)
			{
				Local_792.f_152.f_10 = 255;
				Local_792.f_152.f_12 = Global_1296859->f_21;
			}
			return;
		}
		if (bVar2)
		{
			if (!bVar3)
			{
				Local_792.f_152.f_10 = iVar1;
				Local_792.f_152.f_12 = Global_1296859->f_21;
			}
			else if (Local_792.f_152.f_10 != iVar1 && (Global_1296859->f_21 - Local_792.f_152.f_12) >= 10)
			{
				Local_792.f_152.f_10 = iVar1;
				Local_792.f_152.f_12 = Global_1296859->f_21;
			}
		}
		if (_network_is_player_index_valid(Local_792.f_152.f_10) && network_is_player_active(Local_792.f_152.f_10))
		{
			Local_792.f_152.f_9 = is_ped_in_any_vehicle(get_player_ped(Local_792.f_152.f_10), false);
			iVar4 = get_player_ped(Local_792.f_152.f_10);
			Local_792.f_152.f_7 = vdist(get_entity_coords(iVar0, true, false), get_entity_coords(iVar4, true, false));
			Local_792.f_152.f_4 = { get_entity_coords(iVar4, true, false) - get_entity_coords(iVar0, true, false) };
			Local_792.f_152.f_8 = absf(Local_792.f_152.f_4.f_2);
		}
	}
}

void func_286()
{
	if (func_476() && !func_468(134217728, -1, 1))
	{
		func_266(134217728, 1);
	}
	Local_792.f_152.f_2 = -1;
	Local_792.f_152.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_792.f_152.f_2 = (Local_792.f_152.f_2 && Local_87[iVar0]->f_6);
			Local_792.f_152.f_3 = (Local_792.f_152.f_3 || Local_87[iVar0]->f_6);
		}
		iVar0++;
	}
}

void func_287()
{
	if (!network_is_host_of_this_script())
	{
		if (!func_261())
		{
		}
	}
}

void func_288()
{
	iVar0 = func_229(0);
	bVar1 = func_264(0);
	if (!func_468(2, -1, 1) && func_272())
	{
		if (bVar1)
		{
			func_477(&(Local_792.f_53));
		}
		func_266(2, 1);
	}
	if (func_355(2, 0))
	{
		func_266(2, 1);
	}
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	if (!func_357(&(Local_13.f_24.f_19)))
	{
		return;
	}
	if (Local_13.f_24.f_4 == -2128726980)
	{
		return;
	}
	if (!func_364(iVar0, Local_13.f_24.f_4))
	{
		if (!network_has_control_of_entity(iVar0))
		{
			return;
		}
		if (func_364(iVar0, 993674639))
		{
			_0xa3a9299c4f2adb98(iVar0);
		}
		switch (Local_13.f_24.f_4)
		{
			case 923520851:
				func_478(0);
				break;
			case 993674639:
				func_479();
				break;
			case 1139527981:
				func_480(0, Local_13.f_24.f_25);
				break;
		}
		func_266(8, 1);
	}
}

void func_289()
{
	iVar0 = func_229(0);
	if (network_has_control_of_entity(iVar0))
	{
		if ((func_355(32, 0) || func_355(64, 0)) || func_355(16, 0))
		{
			func_266(1048576, 1);
		}
		else if (func_355(128, 0))
		{
			func_266(33554432, 1);
		}
		else
		{
			func_353(5, 1);
		}
	}
}

void func_290()
{
	if (func_355(1048576, 0) || func_355(8388608, 0))
	{
		return;
	}
	iVar0 = func_229(0);
	if (network_has_control_of_entity(iVar0))
	{
		if (func_355(32, 0) || Local_13.f_24.f_40 >= 7)
		{
			iVar1 = get_entity_health(iVar0);
			if (IntToFloat(iVar1) < (IntToFloat(iVar1) * 0.75f))
			{
				func_266(1048576, 1);
			}
			else if (Local_792.f_152.f_7 < 55f && Local_792.f_152.f_8 < 14f)
			{
				func_266(4194304, 1);
			}
			else if ((Local_792.f_152.f_7 > 55f && Local_792.f_152.f_7 < 75f) && Local_792.f_152.f_8 > 14f)
			{
				if (iVar1 < Local_13.f_24.f_39)
				{
					func_266(2097152, 1);
				}
				else
				{
					func_266(67108864, 1);
				}
			}
			else if (Local_792.f_152.f_7 >= 75f)
			{
				func_266(1048576, 1);
			}
			else if (get_random_int_in_range(0, 2) == 0)
			{
				func_266(67108864, 1);
			}
			else
			{
				func_266(2097152, 1);
			}
		}
		else if (func_355(64, 0))
		{
			func_266(16777216, 1);
		}
		else if (func_355(128, 0) && (Global_1296859->f_21 - Local_13.f_24.f_18) > 70)
		{
			func_266(33554432, 1);
		}
		else if (func_355(16, 0))
		{
			func_266(1048576, 1);
		}
	}
}

void func_291()
{
	if (func_468(2097152, -1, 1))
	{
		func_465(2097152, 1);
	}
	if (func_468(33554432, -1, 1))
	{
		func_465(33554432, 1);
	}
	if (func_468(16777216, -1, 1))
	{
		func_465(16777216, 1);
	}
	if (func_468(67108864, -1, 1))
	{
		func_465(67108864, 1);
	}
}

void func_292()
{
	iVar0 = func_229(0);
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	if (!func_357(&(Local_13.f_24.f_19)))
	{
		return;
	}
	if (Local_13.f_24.f_4 == -2128726980)
	{
		return;
	}
	if (!func_364(iVar0, Local_13.f_24.f_4))
	{
		if (func_364(iVar0, 993674639))
		{
			_0xa3a9299c4f2adb98(iVar0);
		}
		switch (Local_13.f_24.f_4)
		{
			case -1146898486:
				func_478(0);
				break;
			case 993674639:
				func_479();
				break;
			case 1139527981:
				func_480(0, Local_13.f_24.f_25);
				break;
		}
	}
}

void func_293()
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (network_has_control_of_entity(iVar0))
	{
		if (func_364(iVar0, 993674639))
		{
			_0xa3a9299c4f2adb98(iVar0);
		}
		if (!func_364(iVar0, 1287254818))
		{
			func_482(func_481(), 0, 6000);
		}
	}
}

void func_294()
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (network_has_control_of_entity(iVar0))
	{
		if (func_364(iVar0, 993674639))
		{
			_0xa3a9299c4f2adb98(iVar0);
		}
		if (!func_364(iVar0, 1287254818))
		{
			func_482(func_481(), 0, 6000);
		}
	}
}

void func_295()
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (network_has_control_of_entity(iVar0))
	{
		if (!func_364(iVar0, -1389117756))
		{
			func_483(func_481(), 0);
		}
	}
}

void func_296()
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar1 = Local_792.f_152.f_10;
	if (!_network_is_player_index_valid(iVar1) || !network_is_player_active(iVar1))
	{
		return;
	}
	if (!func_364(iVar0, -1578598439) || (iVar1 != Local_792.f_152.f_11 && iVar1 != 255))
	{
		Local_792.f_152.f_11 = iVar1;
		func_484(1);
	}
}

void func_297()
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!func_364(iVar0, -1578598439))
	{
		func_484(1);
	}
}

void func_298()
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar1 = Local_792.f_152.f_10;
	if (!_network_is_player_index_valid(iVar1) || !network_is_player_active(iVar1))
	{
		return;
	}
	iVar2 = get_player_ped(iVar1);
	fVar3 = vdist(get_entity_coords(iVar0, true, false), get_entity_coords(iVar2, true, false));
	if (fVar3 > 75f)
	{
		func_465(32, 1);
		return;
	}
	if (!func_364(iVar0, -1578598439) || (iVar1 != Local_792.f_152.f_11 && iVar1 != 255))
	{
		Local_792.f_152.f_11 = iVar1;
		func_484(func_355(32, 0));
	}
}

void func_299()
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (network_has_control_of_entity(iVar0))
	{
		if (!is_ped_fleeing(iVar0))
		{
			func_485(0, 4, -1f, -1);
		}
	}
}

void func_300()
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!func_364(iVar0, 518218985))
	{
		func_485(0, 3, 45f, -1);
	}
}

void func_301()
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!func_364(iVar0, 518218985))
	{
		func_485(0, 2, 40f, -1);
	}
}

void func_302()
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (network_has_control_of_entity(iVar0))
	{
		if (!is_ped_fleeing(iVar0))
		{
			func_485(0, 4, -1f, -1);
		}
	}
}

void func_303()
{
	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (func_390(func_389(iVar0), &Var1))
		{
			if (does_entity_exist(Var1))
			{
				_0xad8f2424c6e1e3a8(Var1);
			}
		}
		iVar0++;
	}
}

bool func_304()
{
	return func_66(8);
}

bool func_305(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = participant_id_to_int();
	}
	if (!func_486(iParam1, 0, 1))
	{
		return false;
	}
	return func_218(Local_87[iParam1]->f_4, iParam0);
}

bool func_306(int iParam0)
{
	return func_218(Local_792.f_142.f_1, iParam0);
}

char* func_307(int iParam0, int iParam1)
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

var func_308(char* sParam0)
{
	if (!func_487(255))
	{
		return 0;
	}
	if (is_entity_dead(Global_34))
	{
		return 0;
	}
	return func_488(sParam0, 10000, 0, 0, 0, 1);
}

int func_309(var uParam0, var uParam1)
{
	return uParam0;
}

int func_310(int iParam0)
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

int func_311(struct<2> Param0)
{
	return func_489(Param0);
}

void func_312(struct<2> Param0, var uParam2)
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
	switch (func_309(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_491(func_490(Param0));
			iVar5 = func_492(iVar4);
			if (!func_493(iVar5, 0))
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

int func_313(int iParam0, int iParam1)
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

void func_314(int iParam0)
{
	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_494(&Var0);
}

var func_315(int iParam0)
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

var func_316(int iParam0)
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

var func_317(int iParam0)
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

int func_318(int iParam0)
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

int func_319(int iParam0)
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

void func_320(var uParam0)
{
	func_184(uParam0, 0);
	func_184(uParam0, 1);
	func_184(uParam0, 3);
	func_182(uParam0);
}

void func_321(var uParam0)
{
	func_183(uParam0);
	func_495(uParam0, 0, 3);
}

void func_322(var uParam0)
{
	func_184(uParam0, 0);
	func_185(uParam0, 0);
	func_185(uParam0, 1);
	func_185(uParam0, 2);
}

void func_323(var uParam0)
{
	func_184(uParam0, 1);
	func_182(uParam0);
}

void func_324(var uParam0)
{
	func_184(uParam0, 2);
	func_185(uParam0, 3);
}

void func_325(var uParam0)
{
	func_184(uParam0, 3);
	func_185(uParam0, 4);
}

void func_326(var uParam0)
{
	func_185(uParam0, 0);
	func_185(uParam0, 1);
}

void func_327(var uParam0)
{
	func_185(uParam0, 2);
	func_185(uParam0, 3);
}

void func_328(var uParam0)
{
	func_185(uParam0, 4);
	func_185(uParam0, 5);
}

bool func_329(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

bool func_330(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_331(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_332(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1257541)[iParam0]->f_4 + iParam1);
}

void func_333(var uParam0)
{
	func_496(uParam0, 0);
	func_497(uParam0, 0);
	func_498(uParam0, 1);
	func_499(uParam0, 1);
	func_500(uParam0, 0);
	func_501(uParam0, 1);
	func_502(uParam0, 1, 1, 1);
}

void func_334(var uParam0)
{
	func_504(uParam0, (func_503(uParam0) - 6f));
	func_505(uParam0, 1);
}

void func_335(var uParam0)
{
	func_496(uParam0, 0);
	func_497(uParam0, 0);
	func_498(uParam0, 0);
	func_500(uParam0, 0);
	func_502(uParam0, 1, 1, 1);
}

void func_336(var uParam0)
{
	func_506(uParam0, 1);
	func_507(uParam0, 1);
	func_508(uParam0, 1);
}

void func_337(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(&(uParam0->f_2), 131072);
	}
	else
	{
		func_219(&(uParam0->f_2), 131072);
	}
}

void func_338(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_219(uParam0, 4);
	}
	else
	{
		func_248(uParam0, 4);
	}
}

void func_339(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_219(&(uParam0->f_1), 1);
	}
	else
	{
		func_248(&(uParam0->f_1), 1);
	}
}

void func_340(var uParam0, float fParam1)
{
	uParam0->f_31 = fParam1;
}

bool func_341(int iParam0, bool bParam1)
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

bool func_342(int iParam0, var uParam1)
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

int func_343(int iParam0, int iParam1)
{
	iVar0 = 0;
	set_bit(&iVar0, 31);
	iVar0 = shift_right(iVar0, (31 - iParam1));
	iVar0 ^= -1;
	iVar0 = shift_left(iVar0, iParam0);
	return iVar0;
}

int func_344(int iParam0)
{
	if (!func_178(iParam0))
	{
		return 0;
	}
	return Global_1132288->f_1[iParam0]->f_3;
}

bool func_345(int iParam0, bool bParam1, bool bParam2)
{
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_792.f_15 };
	iVar7 = 0;
	iVar8 = func_374(iParam0);
	iVar9 = func_509(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!network_does_network_id_exist(&(Local_13.f_67[iParam0])))
		{
			iVar9 = func_509(iParam0);
			fVar0 = func_510(iParam0);
			if (!func_177(Local_792.f_165.f_7[iParam0]->f_2, 2))
			{
				vVar1 = { _get_object_offset_from_coords(vVar4, 0f, func_511(iParam0)) };
			}
			else
			{
				vVar1 = { func_511(iParam0) };
			}
			if (!func_512(Local_13.f_67[iParam0], iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || _is_this_model_a_horse(iVar8)), 1, 1))
			{
				*bParam1 = 1;
			}
			else
			{
				iVar7 = net_to_ped(&(Local_13.f_67[iParam0]));
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
						_update_ped_variation(iVar7, func_170(iParam0, 1), true, true, true, false);
					}
					else if (_is_this_model_a_horse(iVar8))
					{
						if (_0xa0bc8faed8cfeb3c(iVar7))
						{
						}
						func_513(iVar7, 1);
					}
					if (func_514(iParam0))
					{
						set_ped_can_be_targetted(iVar7, false);
					}
					if (_is_this_model_a_horse(iVar8))
					{
						if (func_515(iParam0))
						{
							if (func_514(iParam0))
							{
							}
						}
						else
						{
							set_ped_can_be_targetted(iVar7, false);
						}
					}
					if (func_346(iParam0))
					{
						if (network_request_control_of_network_id(&(Local_13.f_67[iParam0])))
						{
							_0x7182edda1ee7db5a(&(Local_13.f_67[iParam0]));
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
		else if (_0xa0bc8faed8cfeb3c(net_to_ped(&(Local_13.f_67[iParam0]))))
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

bool func_346(int iParam0)
{
	return func_170(iParam0, 128);
}

int func_347(var uParam0, var uParam1)
{
	iVar0 = func_516(uParam1->f_1);
	if (!does_entity_exist(iVar0))
	{
		return 1;
	}
	if (func_349(128))
	{
		return 1;
	}
	if (is_entity_dead(iVar0))
	{
		func_517(uParam0, 10);
	}
	if (func_518() && uParam0->f_2 < 8)
	{
		switch (uParam0->f_1)
		{
			case 1:
				func_517(uParam0, 8);
				break;
			case 0:
				func_517(uParam0, 9);
				break;
		}
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_519(1))
			{
				switch (*uParam0)
				{
					case 1:
						func_517(uParam0, 1);
						break;
					case 2:
						func_517(uParam0, 3);
						break;
					case 3:
						func_517(uParam0, 5);
						break;
				}
			}
			break;
		case 5:
			if (func_520(uParam0, uParam1))
			{
				func_517(uParam0, 6);
			}
			break;
		case 6:
			if (func_521())
			{
				func_517(uParam0, 7);
			}
			break;
		case 7:
			break;
		case 1:
			if (is_ped_using_any_scenario(func_516(uParam1->f_1)))
			{
				func_517(uParam0, 2);
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 8:
			if (func_364(iVar0, 780511057))
			{
				func_517(uParam0, 11);
			}
			break;
		case 9:
			if (is_ped_fleeing(iVar0))
			{
				func_517(uParam0, 11);
			}
			break;
		case 11:
			if (get_ped_config_flag(iVar0, 580, true))
			{
				func_361(&(uParam0->f_6));
			}
			if ((func_522(uParam1, 32) && is_ped_fleeing(iVar0)) && func_523(&(uParam0->f_6)) > 10f)
			{
				iVar1 = func_524(iVar0);
				if (does_entity_exist(iVar1))
				{
					if ((func_472(iVar1, iVar0, 15f, 1, 1) || (func_472(iVar1, iVar0, 40f, 1, 1) && is_ped_shooting(iVar1))) || func_525(64))
					{
						func_526(uParam0, 1);
						func_517(uParam0, 8);
					}
				}
			}
			break;
		case 10:
			break;
	}
	return 0;
}

void func_348(struct<2> Param0, vector3 vParam2, int iParam5, var uParam6)
{
	if (func_221(vParam2))
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
	func_528(&Var0, func_527(0, 8));
}

bool func_349(int iParam0)
{
	return func_218(Local_792.f_142, iParam0);
}

bool func_350(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	func_529(&iVar0, &iVar2, &iVar1);
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

bool func_351(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (!bParam2 || func_487(iVar0))
			{
				if (func_530(iParam0, fParam1, iVar0, 0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_352(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return func_177(Local_792.f_152.f_2, iParam0);
	}
	iVar0 = participant_id_to_int();
	bVar1 = func_177(Local_792.f_152.f_3, iParam0);
	if (bVar1 && !func_177(Local_87[iVar0]->f_6, iParam0))
	{
		func_219(&(Local_87[iVar0]->f_6), iParam0);
		Local_792.f_152.f_2 = (Local_792.f_152.f_2 && Local_87[iVar0]->f_6);
	}
	return func_177(Local_792.f_152.f_2, iParam0);
}

void func_353(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!network_is_host_of_this_script())
		{
			return;
		}
	}
	if (Local_13.f_24 != iParam0)
	{
		iVar0 = func_229(0);
		if (does_entity_exist(iVar0))
		{
			Local_13.f_24.f_5 = { get_entity_coords(iVar0, true, false) };
		}
		Local_13.f_24 = iParam0;
	}
}

bool func_354(int iParam0, bool bParam1)
{
	if (!bParam1 || func_531(iParam0))
	{
		return is_entity_dead(&(Local_792.f_165.f_7[iParam0]));
	}
	return false;
}

bool func_355(int iParam0, bool bParam1)
{
	if (func_177(Local_792.f_152.f_3, iParam0))
	{
		if (bParam1)
		{
			if (!func_468(iParam0, -1, 1))
			{
				func_266(iParam0, 1);
			}
		}
		return true;
	}
	return false;
}

void func_356(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!network_is_host_of_this_script())
		{
			return;
		}
	}
	func_219(&(Local_13.f_24.f_1), iParam0);
}

bool func_357(var uParam0)
{
	return func_532(*uParam0, 1);
}

void func_358(var uParam0, bool bParam1)
{
	if (bParam1 || !func_357(uParam0))
	{
		func_361(uParam0);
	}
}

int func_359(var uParam0)
{
	if (!func_357(uParam0))
	{
		return 0;
	}
	if (func_533(uParam0))
	{
		return uParam0->f_2;
	}
	return func_534(uParam0->f_1);
}

int func_360()
{
	if (func_535() == -1)
	{
		return func_536(get_random_int_in_range(0, 3));
	}
	iVar0 = get_random_int_in_range(0, 3);
	if (iVar0 == func_535())
	{
		iVar0 = (iVar0 + 1 % 3);
	}
	return func_536(iVar0);
}

void func_361(var uParam0)
{
	func_537(uParam0, 0);
}

void func_362(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_363()
{
	func_362(&(Local_13.f_24.f_8));
}

bool func_364(int iParam0, int iParam1)
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

Vector3 func_365(vector3 vParam0)
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

float func_366(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

float func_367()
{
	if (Local_13.f_24.f_41 <= 3)
	{
		return 20f;
	}
	else if (Local_13.f_24.f_41 <= 4)
	{
		return 30f;
	}
	return 9999f;
}

void func_368(int iParam0)
{
	if (Local_13.f_24.f_35 != 255 || Local_13.f_24.f_31 > 0)
	{
		if (_0x76610d12a838ebde(iParam0) < 0f)
		{
			if (!func_357(&(Local_13.f_24.f_32)))
			{
				func_358(&(Local_13.f_24.f_32), 1);
			}
			if (func_523(&(Local_13.f_24.f_32)) >= 7f)
			{
				Local_13.f_24.f_31 = 0;
				func_362(&(Local_13.f_24.f_32));
				Local_13.f_24.f_35 = 255;
			}
		}
	}
	if (_0x76610d12a838ebde(iParam0) > 0f)
	{
		if (!func_357(&(Local_13.f_24.f_32)))
		{
			func_358(&(Local_13.f_24.f_32), 1);
		}
		if ((Local_13.f_24.f_35 != 255 && Local_13.f_24.f_35 == Local_792.f_152.f_10) && func_523(&(Local_13.f_24.f_32)) >= 4f)
		{
			Local_13.f_24.f_31++;
			func_361(&(Local_13.f_24.f_32));
		}
		if ((Local_13.f_24.f_35 != Local_792.f_152.f_10 && func_523(&(Local_13.f_24.f_32)) >= 2f) && func_538() > 1)
		{
			Local_13.f_24.f_31++;
			Local_13.f_24.f_35 = Local_792.f_152.f_10;
		}
	}
}

bool func_369()
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	iVar1 = get_entity_health(iVar0);
	return IntToFloat(iVar1) < (IntToFloat(get_entity_max_health(iVar0, false)) * 0.75f);
}

void func_370(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_371(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_372(int* iParam0, int iParam1)
{
	if (!get_event_data(1, iParam1, iParam0, 15))
	{
		return false;
	}
	if (iParam0->f_4.f_1 != Local_792.f_1)
	{
		return false;
	}
	if (iParam0->f_4 != iVar788)
	{
		return false;
	}
	if (iParam0->f_4.f_2 != Local_792.f_2)
	{
		return false;
	}
	if (iParam0->f_4.f_3 != Local_792.f_3)
	{
		return false;
	}
	return true;
}

void func_373(int iParam0)
{
	switch (iParam0->f_9)
	{
		case -922869466:
			func_539(iParam0);
			break;
		case 2126697993:
			func_540(iParam0);
			break;
		case -1485898032:
			func_541(iParam0);
			break;
	}
}

int func_374(int iParam0)
{
	return Local_792.f_165.f_7[iParam0]->f_3;
}

int func_375(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4)
{
	if (is_string_null_or_empty(sParam2))
	{
		return 0;
	}
	if (is_string_null_or_empty(sParam3))
	{
		return 0;
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
					return 0;
				}
			}
			if (!_network_has_control_of_anim_scene(*uParam1))
			{
				if (!_network_request_control_of_anim_scene(*uParam1))
				{
					return 0;
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
			return 0;
		}
		return 1;
	}
	else
	{
		if (!network_does_network_id_exist(*uParam0))
		{
			return 0;
		}
		*uParam1 = _net_to_anim_scene(*uParam0);
		if (!_does_anim_scene_exist(*uParam1))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_376(int iParam0, int iParam1, bool bParam2)
{
	iVar2 = func_374(iParam0);
	bVar3 = func_341(iParam1, 1);
	if (!is_bit_set(Local_792.f_165.f_5, iParam0))
	{
		if (network_does_network_id_exist(&(Local_13.f_67[iParam0])))
		{
			iVar1 = net_to_ped(&(Local_13.f_67[iParam0]));
			if (!does_entity_exist(iVar1))
			{
				return;
			}
			Local_792.f_165.f_7[iParam0] = iVar1;
			if (bVar3)
			{
				if (is_entity_dead(iVar1) || is_entity_dead(player_ped_id()))
				{
					Local_87[iParam1]->f_8.f_2[iParam0] = -1f;
				}
				else
				{
					Local_87[iParam1]->f_8.f_2[iParam0] = vdist(get_entity_coords(iVar1, true, false), get_entity_coords(player_ped_id(), true, false));
				}
			}
			if (network_is_host_of_this_script())
			{
				if (func_346(iParam0))
				{
					if (network_does_network_id_exist(&(Local_13.f_67[iParam0])))
					{
						if (network_request_control_of_network_id(&(Local_13.f_67[iParam0])))
						{
							_0x7182edda1ee7db5a(&(Local_13.f_67[iParam0]));
						}
					}
				}
			}
			if (does_entity_exist(iVar1))
			{
				if (network_has_control_of_entity(iVar1))
				{
					func_542(iVar1, 1f, 0);
					sVar0 = func_543(iParam0);
					if (!_0x375f5870a7b8bec1(sVar0))
					{
						func_544(iVar1, sVar0, 1);
					}
				}
				if (func_514(iParam0))
				{
					set_ped_can_be_targetted(iVar1, false);
				}
				if (_is_this_model_a_horse(iVar2))
				{
					if (func_515(iParam0))
					{
						if (func_514(iParam0))
						{
						}
					}
					else
					{
						set_ped_can_be_targetted(iVar1, false);
					}
				}
				set_bit(&(Local_792.f_165.f_5), iParam0);
				if (bParam2)
				{
					func_545(iParam0);
				}
			}
		}
	}
}

int func_377(int iParam0)
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

void func_378(int iParam0, var uParam1)
{
	*uParam1 = iParam0;
	func_546(*uParam1);
}

void func_379(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (!_0x0e6846476906c9dd(player_id(), iParam0))
		{
			_0x543dfe14be720027(player_id(), iParam0, 1);
		}
		if (!func_547())
		{
			set_ped_config_flag(iParam0, 593, true);
		}
		else
		{
			set_ped_config_flag(iParam0, 593, false);
		}
	}
}

bool func_380(int iParam0)
{
	return func_177(Local_792.f_152.f_2, iParam0);
}

void func_381(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = func_377(get_entity_model(iParam0));
	iVar1 = func_548(iVar0);
	if (iVar0 != 2 && iVar0 != 0)
	{
		set_ped_path_prefer_to_avoid_water(iParam0, true, 2f);
		_0x9de63896b176ea94(iParam0, 0);
	}
	_0x06ecf3925bc2abae(iParam0, 0);
	set_ped_config_flag(iParam0, 402, true);
	set_ped_config_flag(iParam0, 542, true);
	_0xf74e134f40192884(iParam0, 1);
	func_549(iParam0, iVar1, iParam1);
	func_550(iParam0);
}

char* func_382(int iParam0)
{
	iVar0 = func_377(get_entity_model(iParam0));
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

void func_383(var uParam0, char* sParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6)
{
	StringCopy(&(uParam0->f_22), sParam1, 64);
	uParam0->f_7 = iParam2;
	uParam0->f_8 = fParam3;
	uParam0->f_10 = fParam4;
	uParam0->f_11 = fParam5;
	uParam0->f_9 = iParam6;
}

void func_384(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9)
{
	uParam0->f_13 = fParam1;
	uParam0->f_14 = fParam2;
	uParam0->f_15 = fParam3;
	uParam0->f_16 = fParam4;
	uParam0->f_17 = fParam5;
	uParam0->f_18 = fParam6;
	uParam0->f_19 = fParam7;
	uParam0->f_20 = fParam8;
	uParam0->f_21 = fParam9;
}

void func_385(var uParam0, int iParam1)
{
	func_250(&(uParam0->f_36), iParam1);
}

bool func_386(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 10)
	{
		return false;
	}
	if (!func_342(iParam1, &Var0))
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

void func_387(var uParam0, int iParam1)
{
	func_251(&(uParam0->f_36), iParam1);
}

bool func_388(int iParam0, var uParam1)
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

int func_389(int iParam0)
{
	return iParam0;
}

bool func_390(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = func_229(iParam0);
	if (does_entity_exist(*uParam1))
	{
		uParam1->f_2 = func_551(iParam0, 255, 1);
		if (uParam1->f_2 < 0f)
		{
			uParam1->f_2 = 0f;
		}
		return true;
	}
	return false;
}

void func_391(var uParam0, int iParam1)
{
	set_ped_config_flag(iParam1, 168, true);
	_0xbb1e41dd3d3c6250(iParam1, "SpAggroDefault", 0);
	decor_set_bool(iParam1, "UsesTracker", true);
}

void func_392(int iParam0)
{
	if (!func_209(&iVar0))
	{
		return;
	}
	func_415(&(Local_87[iVar0]->f_12), 0, iParam0);
}

struct<2> func_393(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_552(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_553(iParam1, iVar4) };
	if (!_stat_id_is_valid(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_394()
{
	Local_792.f_165.f_6 = 0;
	Local_792.f_165.f_2 = 0;
	Local_792.f_165.f_1 = -1;
}

void func_395()
{
	func_210(&(Local_792.f_192.f_72), 2, 0);
	func_210(&(Local_792.f_192.f_72), 1, 0);
	func_210(&(Local_792.f_192.f_72), 4, 0);
	func_210(&(Local_792.f_192.f_72), 5, 0);
	func_210(&(Local_792.f_192.f_72), 8, -1);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		_0xde544b7ec0c187cc(Local_792.f_192.f_66[iVar0]);
		_0x20f4cb76689acdbc(Local_792.f_192.f_70[iVar0]);
		_0xde544b7ec0c187cc(Local_792.f_192.f_68[iVar0]);
		func_554(iVar0);
		iVar0++;
	}
}

void func_396(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_792.f_165.f_2 = (Local_792.f_165.f_2 || Local_87[iParam0]->f_8);
		Local_792.f_165.f_1 = (Local_792.f_165.f_1 && Local_87[iParam0]->f_8);
		Local_792.f_165.f_6 = (Local_792.f_165.f_6 || Local_87[iParam0]->f_8.f_1);
	}
}

void func_397(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		func_555(&(Local_792.f_192.f_72), &(Local_87[iParam0]->f_12), 2);
		func_555(&(Local_792.f_192.f_72), &(Local_87[iParam0]->f_12), 1);
		func_555(&(Local_792.f_192.f_72), &(Local_87[iParam0]->f_12), 4);
		func_555(&(Local_792.f_192.f_72), &(Local_87[iParam0]->f_12), 5);
		func_555(&(Local_792.f_192.f_72), &(Local_87[iParam0]->f_12), 6);
		func_555(&(Local_792.f_192.f_72), &(Local_87[iParam0]->f_12), 7);
		func_555(&(Local_792.f_192.f_72), &(Local_87[iParam0]->f_12), 0);
		func_555(&(Local_792.f_192.f_72), &(Local_87[iParam0]->f_12), 3);
		func_556(&(Local_792.f_192.f_72), &(Local_87[iParam0]->f_12), 8);
		iVar0 = 0;
		while (iVar0 < 1)
		{
			_0xffddf802279be128(Local_87[iParam0]->f_12.f_5[iVar0], Local_792.f_192.f_66[iVar0], Local_792.f_192.f_66[iVar0]);
			_0xffddf802279be128(Local_87[iParam0]->f_12.f_5[iVar0], Local_792.f_192.f_66[iVar0], Local_792.f_192.f_68[iVar0]);
			_0xe4abe20dce7c7cfe(Local_87[iParam0]->f_12.f_5[iVar0], Local_792.f_192.f_66[iVar0], Local_792.f_192.f_70[iVar0]);
			func_557(func_389(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_398(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		Local_87[iParam2]->f_21 = (Local_87[iParam2]->f_21 || Local_87[iParam0]->f_21);
	}
}

int func_399(int iParam0)
{
	return iParam0;
}

int func_400(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam0) || !does_entity_exist(iParam1))
	{
		return 0;
	}
	fVar0 = vdist(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	Local_87[iParam3]->f_8.f_2[iParam2] = fVar0;
	if (fVar0 > Local_792.f_165.f_7[iParam2]->f_9)
	{
		return 0;
	}
	return 1;
}

void func_401(var uParam0)
{
	func_558(uParam0, 0f);
}

bool func_402(var uParam0)
{
	return func_532(*uParam0, 1);
}

bool func_403(var uParam0, float fParam1)
{
	if (!func_402(uParam0))
	{
		return false;
	}
	if (func_559(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_404(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_405(int iParam0)
{
	return true;
}

void func_406(int iParam0, int iParam1)
{
	func_248(&(Local_792.f_165.f_7[iParam0]->f_2), iParam1);
}

bool func_407(int iParam0, int iParam1)
{
	if (!func_341(iParam1, 0))
	{
		if (!func_209(&iParam1))
		{
			return false;
		}
	}
	return func_177(Local_87[iParam1]->f_8, iParam0);
}

void func_408(int iParam0)
{
	if (!func_209(&iVar0))
	{
		return;
	}
	func_219(&(Local_87[iVar0]->f_8), iParam0);
}

void func_409(int iParam0)
{
	if (!func_209(&iVar0))
	{
		return;
	}
	func_248(&(Local_87[iVar0]->f_8), iParam0);
}

void func_410()
{
	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	if (!func_209(&iVar15))
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
		iVar14 = func_389(iVar0);
		if (!func_411(iVar14))
		{
		}
		else if (!func_412(iVar14, &Var1))
		{
		}
		else
		{
			if (!is_entity_dead(Var1) && is_bullet_in_area(get_entity_coords(Var1, true, false), 4f, true))
			{
				set_bit(&(Local_792.f_192.f_65), iVar14);
			}
			if (func_427(iVar14, iVar15))
			{
			}
			else if (has_entity_been_damaged_by_entity(Var1, iVar17, 0, 0))
			{
				func_560(iVar14);
				func_561(iVar14);
			}
		}
		iVar0++;
	}
}

bool func_411(int iParam0)
{
	return !func_386(&(Local_792.f_192.f_72), 5, iParam0);
}

bool func_412(int iParam0, var uParam1)
{
	if (!is_bit_set(Local_792.f_192.f_90, iParam0))
	{
		return false;
	}
	*uParam1 = &Local_792.f_192.f_76[iParam0];
	uParam1->f_1 = Local_792.f_192.f_76[iParam0]->f_1;
	uParam1->f_2 = Local_792.f_192.f_76[iParam0]->f_2;
	if (!does_entity_exist(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_413(var uParam0, int iParam1)
{
	if (!func_562(iParam1))
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
	if (func_563(*uParam0, &(Local_792.f_192.f_32), &uVar1, uParam0->f_2))
	{
		return true;
	}
	if (is_entity_touching_entity(player_ped_id(), *uParam0))
	{
		return true;
	}
	return false;
}

int func_414(var uParam0, int iParam1, int iParam2)
{
	if (!func_342(iParam1, &Var0))
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

int func_415(var uParam0, int iParam1, int iParam2)
{
	if (!func_342(iParam1, &Var0))
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

void func_416(int iParam0)
{
	iVar0 = func_229(0);
	iVar1 = Local_792.f_152.f_10;
	if (!network_is_player_active(iVar1))
	{
		return;
	}
	iVar2 = get_player_ped(iVar1);
	fVar3 = vdist(get_entity_coords(iVar0, true, false), get_entity_coords(iVar2, true, false));
	if (func_468(128, -1, 1) && fVar3 > 40f)
	{
		if (func_468(128, -1, 1))
		{
			func_465(128, 1);
		}
	}
	if (func_468(32, -1, 1) && fVar3 > 75f)
	{
		func_465(32, 1);
	}
	if (func_468(64, -1, 1) && fVar3 > 30f)
	{
		func_465(64, 1);
	}
}

bool func_417(int iParam0)
{
	return func_386(&(Local_792.f_192.f_72), 4, iParam0);
}

bool func_418(int iParam0)
{
	if (!func_209(&iVar0))
	{
		return false;
	}
	return func_386(&(Local_87[iVar0]->f_12), 4, iParam0);
}

bool func_419(int iParam0)
{
	return _0x179a6f0ee2e79026(Local_792.f_192.f_68[iParam0]);
}

void func_420(int iParam0)
{
	if (!func_209(&iVar0))
	{
		return;
	}
	func_414(&(Local_87[iVar0]->f_12), 4, iParam0);
}

bool func_421(int iParam0)
{
	if (!func_209(&iVar0))
	{
		return false;
	}
	return _0x179a6f0ee2e79026(Local_87[iVar0]->f_12.f_5[iParam0]);
}

void func_422(int iParam0)
{
	if (!func_209(&iVar0))
	{
		return;
	}
	_0xde544b7ec0c187cc(Local_87[iVar0]->f_12.f_5[iParam0]);
}

bool func_423(int iParam0)
{
	return func_386(&(Local_792.f_192.f_72), 6, iParam0);
}

bool func_424(int iParam0)
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

bool func_425(int iParam0, int iParam1)
{
	if (!func_341(iParam1, 0))
	{
		if (!func_209(&iParam1))
		{
			return false;
		}
	}
	return func_386(&(Local_87[iParam1]->f_12), 1, iParam0);
}

bool func_426(int iParam0)
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	iVar1 = Local_792.f_152.f_10;
	fVar2 = 0f;
	if (network_is_player_active(iVar1))
	{
		iVar3 = get_player_ped(iVar1);
		fVar2 = vdist(get_entity_coords(iVar0, true, false), get_entity_coords(iVar3, true, false));
	}
	if (func_564(0, 255) && fVar2 <= 40f)
	{
		if ((Global_1296859->f_21 - Local_13.f_24.f_18) > 70)
		{
			func_266(128, 1);
		}
	}
	if (!func_468(64, -1, 1) && fVar2 <= 30f)
	{
		func_266(64, 1);
	}
	if (func_369())
	{
		func_266(1048576, 1);
	}
	return false;
}

bool func_427(int iParam0, int iParam1)
{
	if (!func_341(iParam1, 0))
	{
		if (!func_209(&iParam1))
		{
			return false;
		}
	}
	if (!func_565(int_to_participantindex(iParam1)))
	{
		return false;
	}
	return func_386(&(Local_87[iParam1]->f_12), 3, iParam0);
}

bool func_428(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_6)
	{
		func_566(uParam2, 1, iVar0);
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
			if (func_567(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_568(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258->f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_569(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_568(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_570(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_568(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_571(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_568(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_20 && func_572(player_id(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_568(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258->f_19)
		{
			if (func_573(uParam2, 1065353216))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_574(Global_34, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_568(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_575(Global_34, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_568(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940258->f_23) < 300)
			{
				if (func_576(Global_34, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_568(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_576(Global_34, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_568(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_577(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_568(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940258->f_19 || uParam2->f_13 < 20f)
			{
				if (func_578(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_568(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_24 || Global_1940258->f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_579(uParam2, 4000))
				{
					if ((func_580(iParam0, Global_1940258->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_581(uParam2, iParam0)) && func_582(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_568(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_580(iParam0, Global_1940258->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_581(uParam2, iParam0)) && func_582(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_568(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (Global_1940258->f_34 == 0)
			{
				if (Global_1940258->f_35 != 0)
				{
					if (func_583(iParam0, Global_1940258->f_35))
					{
						func_584();
						*iParam3 = 2;
						func_568(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 10f)
			{
				if (func_585(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_586() - uParam2->f_10) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_584();
						*iParam3 = 2;
						func_568(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1940258->f_36 != 0)
			{
				if (func_587())
				{
					if (func_583(iParam0, Global_1940258->f_36))
					{
						func_584();
						*iParam3 = 2;
						func_568(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_588(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_568(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (func_589(uParam2, iParam0))
		{
			*iParam3 = 1048576;
			func_568(iParam0, uParam2, *iParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_590(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_568(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_591(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_568(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_592(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_568(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_593(uParam2, 4000))
				{
					if (func_594(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_568(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_595(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_5 = 0;
					func_568(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_596(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_568(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_429(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_597(iParam0, vVar0, iParam2);
}

bool func_430(int iParam0, int iParam1, int iParam2)
{
	if (!func_598(iParam0, iParam1, iParam2, 0))
	{
		return false;
	}
	func_599(&iVar4, iParam1->f_12);
	func_601(&(Local_792.f_165.f_7[iParam0]), &uVar0, iParam1->f_3, func_600(iParam1), iParam1->f_9, iParam1->f_10, iParam1->f_11, 0, 0);
	return func_602(&iVar4, &uVar0);
}

bool func_431(int iParam0)
{
	if (!func_209(&iVar0))
	{
		return false;
	}
	return func_386(&(Local_87[iVar0]->f_12), 0, iParam0);
}

bool func_432(int iParam0, int iParam1)
{
	if (is_bit_set(Local_792.f_192.f_64, iParam0))
	{
		return false;
	}
	if (func_177(Local_792.f_192.f_2, 256))
	{
		return false;
	}
	if (iParam1->f_2 < 0f || iParam1->f_2 > IntToFloat(func_603(&(Local_792.f_192))))
	{
		return false;
	}
	return true;
}

bool func_433(int iParam0, int iParam1, int iParam2)
{
	if (!func_432(iParam0, iParam1))
	{
		return false;
	}
	if (Local_87[iParam2]->f_12.f_4 != 0 && get_time_difference(Local_87[iParam2]->f_12.f_4, get_network_time_accurate()) <= 3000)
	{
		return true;
	}
	return false;
}

bool func_434(int iParam0, int iParam1, bool bParam2)
{
	func_266(2, 1);
	if (bParam2)
	{
		return true;
	}
	else
	{
		if (func_604(iParam1))
		{
			switch (iParam1)
			{
				case 2:
				case 4:
				case 2048:
					func_266(32, 1);
					break;
			}
		}
		switch (iParam1)
		{
			case 32:
			case 256:
				func_266(64, 1);
				return false;
			case 8:
				break;
			case 131072:
			case 262144:
				func_266(128, 1);
				return false;
		}
	}
	return false;
}

void func_435(int iParam0, bool bParam1)
{
	if (!func_209(&iVar0))
	{
		return;
	}
	func_415(&(Local_87[iVar0]->f_12), 1, iParam0);
	if (bParam1)
	{
		Local_87[iVar0]->f_12.f_7[iParam0] = get_network_time_accurate();
	}
}

bool func_436(int iParam0, int iParam1)
{
	if (!func_341(iParam1, 0))
	{
		if (!func_209(&iParam1))
		{
			return false;
		}
	}
	return func_386(&(Local_87[iParam1]->f_12), 2, iParam0);
}

bool func_437(int iParam0)
{
	return true;
}

void func_438(int iParam0)
{
}

void func_439(int iParam0)
{
	if (!func_209(&iVar0))
	{
		return;
	}
	func_415(&(Local_87[iVar0]->f_12), 2, iParam0);
}

bool func_440(int iParam0)
{
	_0x20f4cb76689acdbc(&uVar0);
	_0x64f765d9a1f8f02c(&uVar0, Local_792.f_192.f_70[iParam0], &uVar0);
	return !_0x179a6f0ee2e79026(&uVar0);
}

bool func_441(int iParam0, var uParam1, int iParam2, var uParam3)
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

bool func_442(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	return _0x72b2e00c9bac6789(Local_792.f_192.f_66[iParam0], iParam1);
}

bool func_443(int iParam0, var uParam1, int iParam2, var uParam3)
{
	return true;
}

void func_444(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return;
	}
	if (!func_209(&iVar0))
	{
		return;
	}
	_0x31010318ba9897ac(Local_87[iVar0]->f_12.f_5[iParam0], iParam1);
}

float func_445()
{
	if (Local_792.f_289.f_3 == 0)
	{
		Local_792.f_289.f_3 = get_game_timer();
		return 0.03125f;
	}
	iVar0 = get_game_timer();
	fVar1 = (to_float((iVar0 - Local_792.f_289.f_3)) * 0.001f);
	Local_792.f_289.f_3 = iVar0;
	return fVar1;
}

bool func_446(int iParam0, bool bParam1)
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

bool func_447(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_366(vVar0, vParam0) > func_366(vVar0, get_entity_coords(iParam3, true, false));
}

int func_448(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, float fParam6, bool bParam7)
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
			else if (func_605(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_606(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_607() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_449(var uParam0, int iParam1, float fParam2)
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
	func_171(uParam0);
	return true;
}

void func_450()
{
	Local_792.f_142.f_1 = 0;
	Local_792.f_142.f_2 = -1;
	Local_792.f_25.f_22 = 0;
	Local_792.f_25.f_23 = -1;
	Local_792.f_53.f_43 = 0;
	Local_792.f_53.f_42 = -1;
	iVar0 = 0;
	while (iVar0 <= (network_get_max_num_participants() - 1))
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_792.f_142.f_1 = (Local_792.f_142.f_1 || Local_87[iVar0]->f_4);
			Local_792.f_142.f_2 = (Local_792.f_142.f_2 && Local_87[iVar0]->f_4);
			Local_792.f_25.f_22 = (Local_792.f_25.f_22 || Local_87[iVar0]->f_5);
			Local_792.f_25.f_23 = (Local_792.f_25.f_23 && Local_87[iVar0]->f_5);
			Local_792.f_53.f_43 = (Local_792.f_53.f_43 || Local_87[iVar0]->f_1);
			Local_792.f_53.f_42 = (Local_792.f_53.f_42 && Local_87[iVar0]->f_1);
		}
		iVar0++;
	}
}

void func_451()
{
	Local_792.f_142.f_4++;
	if (Local_792.f_142.f_4 >= 1)
	{
		Local_792.f_142.f_4 = 0;
	}
	iVar0 = func_516(Local_792.f_142.f_4);
	if (is_bit_set(Local_792.f_142.f_3, Local_792.f_142.f_4))
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
	if (func_608(iVar0))
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
		func_609(Local_792.f_142.f_4);
	}
}

void func_452()
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
			func_610(&uVar5, &(Local_792.f_149));
		}
		iVar0++;
	}
}

void func_453(var uParam0)
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
	else if (iVar0 > 15000 && func_218(uParam0->f_2, 4))
	{
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
		return;
	}
	else if (!func_218(uParam0->f_2, 4))
	{
		if (!does_entity_exist(Global_34))
		{
			return;
		}
		fVar1 = func_611(Global_34, *uParam0, 1, 1);
		bVar2 = ((does_entity_exist(*uParam0) && _0x083d497d57b7400f(*uParam0)) && !is_entity_visible(*uParam0));
		if (fVar1 < 300f && (func_218(uParam0->f_2, 1) || func_218(uParam0->f_2, 2)))
		{
			if (!func_612())
			{
				if (!bVar2)
				{
					func_613(*uParam0);
				}
			}
		}
		if (!bVar2 && fVar1 < 300f)
		{
			func_614(*uParam0);
		}
		if (func_218(uParam0->f_2, 1))
		{
			func_615(2, *uParam0);
		}
		if (func_218(uParam0->f_2, 1) && does_entity_exist(*uParam0))
		{
			Var3 = { func_553(1368284188, -1530824760) };
			if (_0x5420d398a42917fc(*uParam0, &Var3))
			{
				func_616(Var3, 1);
			}
		}
		func_250(&(uParam0->f_2), 4);
	}
}

void func_454(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_516(uParam1->f_1);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	bVar3 = network_has_control_of_entity(iVar0);
	if (!func_617() && func_618(uParam1->f_1, 40f, 60f, 100f, 1065353216, 5, 0, 1))
	{
		func_619();
	}
	if (!func_518())
	{
		if (func_620(iVar0, &(Local_792.f_97)) || func_621(iVar0, &(Local_792.f_97), 0))
		{
			func_622();
			func_623(uParam0, uParam1, 0, 0);
		}
	}
	if ((func_624(4, -1) && !func_525(8)) && !func_625(uParam0, iVar0))
	{
		if (network_has_control_of_entity(iVar0))
		{
			func_623(uParam0, uParam1, 0, 0);
		}
		else
		{
			network_request_control_of_entity(iVar0);
		}
	}
	if (!func_522(uParam1, 8) && func_518())
	{
		iVar1 = 0;
		while (iVar1 <= (network_get_max_num_participants() - 1))
		{
			if (network_is_participant_active(int_to_participantindex(iVar1)) && func_624(4, -1))
			{
				uParam1->f_20 = int_to_playerindex(iVar1);
			}
			else
			{
				iVar1++;
			}
		}
		if (uParam0->f_2 == 7 && !func_522(uParam1, 2))
		{
			func_626(uParam1->f_16);
			func_627(uParam1, 2);
		}
		func_623(uParam0, uParam1, 0, 0);
		func_628(uParam0, uParam1);
		func_629(&(Local_792.f_53));
		func_477(&(Local_792.f_53));
		func_627(uParam1, 8);
	}
	func_630(uParam0, uParam1, uParam2);
	if (func_522(uParam1, 8))
	{
		func_631(uParam0, uParam1);
	}
	else
	{
		func_632(uParam1);
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (!func_624(1, -1))
			{
				iVar1 = 0;
				while (iVar1 <= 0)
				{
					iVar2 = &Local_792.f_165.f_7[iVar1];
					if (iVar1 != uParam1->f_1 && does_entity_exist(iVar2))
					{
						func_633(iVar1);
					}
					iVar1++;
				}
				func_634(1);
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
			if (!func_522(uParam1, 4))
			{
				if (func_635(uParam1->f_16) || _0xb89fcff19dafff28(uParam1->f_16, &(uParam1->f_14)))
				{
					func_636(uParam1->f_16);
					func_627(uParam1, 4);
				}
			}
			else
			{
				func_637();
			}
			break;
		case 1:
			if (bVar3 && !is_ped_using_any_scenario(iVar0))
			{
				if (func_522(uParam1, 1))
				{
					iVar4 = _find_closest_active_scenario_point_of_type(get_entity_coords(iVar0, true, false), uParam1->f_3, 2f, 1, false);
					if (_does_scenario_point_exist(iVar4))
					{
						_task_use_scenario_point(iVar0, iVar4, 0, 0, false, true, 0, false, -1f, false);
					}
					else
					{
						task_start_scenario_at_position(iVar0, uParam1->f_3, Local_792.f_165.f_7[uParam1->f_1]->f_6, Local_792.f_165.f_7[uParam1->f_1]->f_5, 0, false, true, 0, -1f, false);
					}
				}
				else
				{
					task_start_scenario_at_position(iVar0, uParam1->f_3, Local_792.f_165.f_7[uParam1->f_1]->f_6, Local_792.f_165.f_7[uParam1->f_1]->f_5, 0, false, true, 0, -1f, false);
				}
			}
			break;
		case 2:
			break;
		case 3:
			if (bVar3 && !func_638(iVar0, 923520851))
			{
				task_wander_in_area(iVar0, Local_792.f_165.f_7[uParam1->f_1]->f_6, uParam1->f_26, 1077936128, 1086324736, 0);
			}
			break;
		case 4:
			break;
		case 8:
			func_623(uParam0, uParam1, 0, 0);
			break;
		case 9:
			func_623(uParam0, uParam1, 0, 0);
			break;
		case 11:
			if ((!is_entity_dead(iVar0) && !get_ped_config_flag(iVar0, 580, true)) && !func_624(64, -1))
			{
				if (func_472(Global_34, iVar0, 15f, 1, 1) || (func_472(Global_34, iVar0, 40f, 1, 1) && is_ped_shooting(Global_34)))
				{
					func_634(64);
				}
			}
			else if (func_624(64, -1))
			{
				if (!func_472(Global_34, iVar0, 40f, 1, 1) || get_ped_config_flag(iVar0, 580, true))
				{
					func_639(64);
				}
			}
			if (((bVar3 && !is_entity_dead(iVar0)) && !get_ped_config_flag(iVar0, 580, true)) && (get_frame_count() % 10) == 0)
			{
				iVar5 = get_ped_index_from_entity_index(_0xcd66fea29400a0b5(iVar0));
				if (does_entity_exist(iVar5) && is_ped_a_player(iVar5))
				{
					iVar6 = network_get_player_index_from_ped(iVar5);
					iVar7 = iVar6;
					if (func_486(iVar7, 1, 1))
					{
						if (func_640(4, iVar7))
						{
							func_623(uParam0, uParam1, 1, 1);
						}
					}
				}
			}
			if (!func_525(16))
			{
				if (bVar3)
				{
					set_ped_keep_task(iVar0, true);
					set_blocking_of_non_temporary_events(iVar0, false);
					func_634(16);
				}
			}
			else if ((((Local_13.f_7.f_1 == 0 && !is_entity_dead(iVar0)) && !get_ped_config_flag(iVar0, 580, false)) && !is_ped_fleeing(iVar0)) && is_ped_still(iVar0))
			{
				func_623(uParam0, uParam1, 1, 1);
			}
			if ((!func_525(32) && bVar3) && is_ped_in_combat(iVar0, 0))
			{
				if (is_entity_dead(get_player_ped(uParam1->f_20)) || !func_472(get_player_ped(uParam1->f_20), iVar0, 100f, 1, 1))
				{
					task_animal_unalerted(iVar0, -1, 0, 0, 0);
					set_ped_keep_task(iVar0, true);
					set_blocking_of_non_temporary_events(iVar0, false);
					func_634(32);
				}
			}
			break;
		case 10:
			break;
	}
}

void func_455()
{
	if (func_641(256))
	{
		return;
	}
	if (!does_entity_exist(Local_792.f_53))
	{
		return;
	}
	if (is_entity_dead(Local_792.f_53))
	{
		return;
	}
	if (!func_472(Global_34, Local_792.f_53, 50f, 1, 1))
	{
		func_404(&(Local_792.f_97.f_42));
		func_642(4);
		func_642(8);
		func_642(16);
		func_642(32);
		func_642(64);
		return;
	}
	if ((_is_ped_hogtied(Global_34) || _0x833f0053340ef413(Global_34)) || is_ped_in_any_vehicle(Global_34, true))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_643(Local_792.f_53, Global_34, &(Local_792.f_97.f_39), &(Local_792.f_97.f_38));
	}
	if (!func_640(4, -1))
	{
		if (iVar0 == 1)
		{
			func_644(&(Local_792.f_97.f_42), 0);
			func_645(4);
		}
	}
	else if (iVar0 == 0)
	{
		func_404(&(Local_792.f_97.f_42));
		func_642(4);
		func_642(8);
		func_642(16);
		func_642(32);
		func_642(64);
		func_642(128);
	}
	else
	{
		if (!func_640(128, -1) && func_621(Local_792.f_53, &(Local_792.f_97), 0))
		{
			func_645(128);
		}
		if (func_559(&(Local_792.f_97.f_42)) > 15f)
		{
			if (!func_640(64, -1))
			{
				func_645(64);
			}
		}
		else if (func_559(&(Local_792.f_97.f_42)) > 10f)
		{
			if (!func_640(32, -1))
			{
				func_645(32);
			}
		}
		else if (func_559(&(Local_792.f_97.f_42)) > 8f)
		{
			if (!func_640(16, -1))
			{
				func_645(16);
			}
		}
		else if (func_559(&(Local_792.f_97.f_42)) > 5f)
		{
			if (!func_640(8, -1))
			{
				func_645(8);
			}
		}
	}
}

bool func_456(var uParam0)
{
	if (!func_487(255))
	{
		return false;
	}
	if (!func_471(&(Local_792.f_53), 256) && func_472(Global_34, *uParam0, Global_1901947->f_852.f_3, 1, 0))
	{
		func_646();
	}
	else if (func_471(&(Local_792.f_53), 256) && !func_472(Global_34, *uParam0, (Global_1901947->f_852.f_3 + 50f), 1, 0))
	{
		func_647();
	}
	if ((uParam0->f_35 < 2 && func_648()) || Local_13.f_18.f_1)
	{
		uParam0->f_35 = 2;
	}
	switch (uParam0->f_35)
	{
		case 0:
			if (!func_649(uParam0))
			{
				return false;
			}
			if (func_650(Global_34, uParam0->f_30, uParam0->f_10, 1, 1))
			{
				if ((get_frame_count() % 5) == 0)
				{
					get_posix_time(&uVar0, &uVar0, &uVar0, &uVar0, &uVar0, &iVar1);
					iVar2 = (iVar1 % round(uParam0->f_8));
					if (iVar2 < 5)
					{
						func_651(uParam0, 1);
					}
				}
			}
			break;
		case 1:
			if (!func_650(Global_34, uParam0->f_30, (uParam0->f_10 + 20f), 1, 1))
			{
				func_404(&(uParam0->f_37));
				func_651(uParam0, 0);
			}
			else if (func_650(Global_34, uParam0->f_30, (uParam0->f_12 + 10f), 1, 1) || func_471(uParam0, 1))
			{
				func_404(&(uParam0->f_37));
				func_651(uParam0, 2);
			}
			else if (uParam0->f_7 == -1 || uParam0->f_34 < uParam0->f_7)
			{
				if (!func_402(&(uParam0->f_37)) || func_559(&(uParam0->f_37)) > uParam0->f_8)
				{
					if (func_650(Global_34, uParam0->f_30, (uParam0->f_12 + 20f), 1, 1))
					{
						uParam0->f_11 = (uParam0->f_11 / 4f);
					}
					if (func_471(uParam0, 8))
					{
						vVar3 = { func_652(get_entity_coords(*uParam0, true, false), uParam0->f_11, 0f) };
						func_653(vVar3, uParam0->f_9);
					}
					else
					{
						vVar3 = { func_652(uParam0->f_30, uParam0->f_11, 0f) };
						func_653(vVar3, uParam0->f_9);
					}
					func_401(&(uParam0->f_37));
					func_654();
					func_655(uParam0, uParam0->f_30);
					uParam0->f_34++;
					if (uParam0->f_34 == 1)
					{
						iVar6 = func_656(21, 34);
						if (iVar6 <= 3)
						{
							func_308("LA_H_BLIPPED");
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

int func_457(var uParam0)
{
	if (!func_487(255))
	{
		return 0;
	}
	if (does_entity_exist(*uParam0))
	{
		if ((!func_640(2, -1) && !is_entity_dead(*uParam0)) && is_ped_fleeing(*uParam0))
		{
			func_645(2);
		}
		if (func_357(&(Local_13.f_20)))
		{
			bVar2 = true;
		}
		else if (func_641(2))
		{
			bVar2 = true;
		}
		func_657(*uParam0, &(Local_13.f_20), bVar2);
	}
	if ((uParam0->f_2 < 12 && does_entity_exist(*uParam0)) && is_entity_dead(*uParam0))
	{
		if (does_blip_exist(uParam0->f_1))
		{
			remove_blip(&(uParam0->f_1));
		}
		set_ped_config_flag(*uParam0, 297, false);
		func_658(uParam0, 12);
	}
	if ((uParam0->f_2 < 11 && get_ped_config_flag(*uParam0, 580, true)) && is_ped_in_writhe(*uParam0))
	{
		if (does_blip_exist(uParam0->f_1))
		{
			remove_blip(&(uParam0->f_1));
		}
		func_658(uParam0, 11);
	}
	if (func_471(uParam0, 64) && does_blip_exist(uParam0->f_33))
	{
		remove_blip(&(uParam0->f_33));
	}
	if (uParam0->f_2 <= 3 && func_648())
	{
		uParam0->f_2 = 3;
		func_477(uParam0);
	}
	if (func_659(uParam0))
	{
		if (does_entity_exist(*uParam0) && !is_entity_dead(*uParam0))
		{
			if (func_472(Global_34, *uParam0, uParam0->f_12, 0, 1) && uParam0->f_2 >= 4)
			{
				if (!func_660())
				{
					func_661();
				}
				if (!func_304())
				{
					func_662();
				}
			}
		}
	}
	if (((uParam0->f_2 < 3 && Local_13.f_18.f_1) && does_entity_exist(*uParam0)) && !func_663(*uParam0))
	{
		func_658(uParam0, 3);
		func_629(uParam0);
		func_477(uParam0);
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_471(uParam0, 4))
			{
				func_658(uParam0, 2);
			}
			if (func_664(uParam0) || func_471(uParam0, 1))
			{
				func_658(uParam0, 1);
			}
			break;
		case 1:
			if (!does_blip_exist(uParam0->f_33))
			{
				uParam0->f_33 = _blip_add_for_coord(func_665(), uParam0->f_30);
				_blip_set_modifier(uParam0->f_33, -528849255);
				set_blip_name_from_text_file(uParam0->f_33, "LA_CLUE");
				func_661();
				func_658(uParam0, 2);
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 <= 0)
			{
				iVar0 = func_516(iVar1);
				if ((does_entity_exist(iVar0) && is_bit_set(uParam0->f_41, iVar1)) && func_618(iVar1, uParam0->f_13, uParam0->f_14, uParam0->f_15, 1065353216, 5, 0, 1))
				{
					func_629(uParam0);
				}
				else
				{
					iVar1++;
				}
			}
			iVar0 = *uParam0;
			if (does_entity_exist(iVar0) && func_618(uParam0->f_40, uParam0->f_13, uParam0->f_14, uParam0->f_15, 1065353216, 5, 0, 1))
			{
				func_629(uParam0);
			}
			if (func_471(uParam0, 1))
			{
				func_658(uParam0, 3);
			}
			break;
		case 3:
			iVar0 = *uParam0;
			if (does_blip_exist(uParam0->f_33))
			{
				remove_blip(&(uParam0->f_33));
			}
			if (does_entity_exist(iVar0) && func_618(uParam0->f_40, uParam0->f_13, uParam0->f_14, uParam0->f_15, 1065353216, 5, 0, 1))
			{
				func_477(uParam0);
			}
			if (func_659(uParam0))
			{
				if (_0x6dac799857ef3f11(Global_34, *uParam0) || _0x920684be432875b1(*uParam0))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_666(*uParam0, &(uParam0->f_1), 0, bVar3);
				func_667(&(uParam0->f_37), -5f, 1);
				func_658(uParam0, 4);
			}
			break;
		case 4:
			if (!is_ped_fleeing(*uParam0))
			{
				if (!func_402(&(uParam0->f_37)))
				{
					func_644(&(uParam0->f_37), 0);
				}
				else if (func_559(&(uParam0->f_37)) > 5f && !func_472(*uParam0, Global_34, uParam0->f_17, 1, 1))
				{
					func_404(&(uParam0->f_37));
					func_658(uParam0, 5);
				}
			}
			else if (!func_402(&(uParam0->f_37)))
			{
				func_644(&(uParam0->f_37), 0);
			}
			else if (func_559(&(uParam0->f_37)) > 5f && !func_618(uParam0->f_40, uParam0->f_16, (uParam0->f_14 + 10f), (uParam0->f_15 + 10f), 1f, 0, 0, 1))
			{
				func_404(&(uParam0->f_37));
				func_658(uParam0, 5);
			}
			break;
		case 5:
			if (!func_402(&(uParam0->f_37)))
			{
				func_644(&(uParam0->f_37), 0);
			}
			else if (func_559(&(uParam0->f_37)) > uParam0->f_19)
			{
				func_404(&(uParam0->f_37));
				func_668(&(uParam0->f_1));
				func_658(uParam0, 7);
			}
			break;
		case 7:
			if (!func_402(&(uParam0->f_37)))
			{
				func_644(&(uParam0->f_37), 0);
			}
			else if (func_559(&(uParam0->f_37)) > 1f && func_618(uParam0->f_40, uParam0->f_16, uParam0->f_14, uParam0->f_15, 0f, 1, 0, 0))
			{
				func_669(&(uParam0->f_1));
				func_404(&(uParam0->f_37));
				func_658(uParam0, 4);
			}
			else if (func_559(&(uParam0->f_37)) > (uParam0->f_20 + ((vdist(Global_35, get_entity_coords(*uParam0, true, false)) / 25f) * uParam0->f_21)) || ((func_402(&(Local_792.f_19.f_3)) && func_559(&(Local_792.f_19.f_3)) < Global_1901947->f_852.f_4) && func_559(&(uParam0->f_37)) > 2f))
			{
				func_670(&(uParam0->f_1));
				if (func_471(uParam0, 32))
				{
					func_671(*uParam0, uParam0->f_9);
				}
				func_404(&(uParam0->f_37));
				func_658(uParam0, 5);
			}
			else if (!func_472(Global_34, *uParam0, uParam0->f_18, 1, 1) && (!func_402(&(Local_792.f_19.f_3)) || func_559(&(Local_792.f_19.f_3)) > Global_1901947->f_852.f_4))
			{
				func_404(&(uParam0->f_37));
				func_658(uParam0, 8);
			}
			break;
		case 8:
			if (!func_402(&(uParam0->f_37)))
			{
				func_644(&(uParam0->f_37), 0);
			}
			if (func_472(Global_34, *uParam0, (uParam0->f_18 - 10f), 1, 1) || (func_402(&(Local_792.f_19.f_3)) && func_559(&(Local_792.f_19.f_3)) < Global_1901947->f_852.f_4))
			{
				func_404(&(uParam0->f_37));
				func_658(uParam0, 7);
			}
			break;
		case 9:
			if (!does_blip_exist(uParam0->f_1))
			{
				func_666(*uParam0, &(uParam0->f_1), 0, 1);
			}
			if (!func_472(Global_34, *uParam0, (50f + 10f), 1, 1))
			{
				func_658(uParam0, 10);
			}
			break;
		case 10:
			if (does_blip_exist(uParam0->f_1))
			{
				remove_blip(&(uParam0->f_1));
			}
			if (func_472(Global_34, *uParam0, 50f, 1, 1))
			{
				func_658(uParam0, 9);
			}
			break;
		case 11:
			if (!get_ped_config_flag(*uParam0, 580, true) && !is_ped_in_writhe(*uParam0))
			{
				if (_0x6dac799857ef3f11(Global_34, *uParam0))
				{
					if (func_472(Global_34, *uParam0, 50f, 1, 1))
					{
						func_658(uParam0, 9);
					}
					else
					{
						func_658(uParam0, 10);
					}
				}
				else
				{
					func_658(uParam0, 3);
				}
			}
			break;
		case 12:
			return 1;
	}
	return 0;
}

void func_458(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if ((Local_13.f_18 == 255 && !func_349(2)) || (Local_13.f_18 != 255 && Local_13.f_18 != player_id()))
	{
		if (is_entity_dead(iParam0) && _0xef2d9ed7ce684f08(iParam0) == Global_34)
		{
			func_672();
			func_673(2);
		}
	}
}

void func_459(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!func_349(1))
	{
		if ((!is_entity_dead(iParam0) && get_ped_config_flag(iParam0, 580, true)) && _0xef2d9ed7ce684f08(iParam0) == Global_34)
		{
			func_674();
			func_673(1);
			func_675(2);
		}
	}
}

void func_460(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!func_349(16))
	{
		if (is_entity_dead(iParam0) && get_ped_index_from_entity_index(func_676(Global_34)) == iParam0)
		{
			func_677();
			func_673(16);
		}
	}
}

void func_461(int iParam0, float fParam1)
{
	if (network_is_host_of_this_script())
	{
		if (!Local_13.f_18.f_1 && func_306(32))
		{
			Local_13.f_18.f_1 = 1;
		}
	}
	if (((!func_349(4) && (get_frame_count() % 10) == 0) && does_entity_exist(Local_792.f_53)) && _0x920684be432875b1(Local_792.f_53))
	{
		func_673(4);
	}
	if (!Local_13.f_18.f_1 && !func_305(32, -1))
	{
		if (func_264(Local_792.f_53.f_40))
		{
			func_675(32);
		}
		if (Local_792.f_97.f_33 != 0)
		{
			func_675(32);
		}
	}
	if (!func_349(128))
	{
		if (((((func_349(8) || func_349(16)) || func_349(4)) || func_306(8)) || (func_306(2) && is_entity_dead(iParam0))) || (is_entity_dead(iParam0) && !_0xa4b6432e3880f2f9(iParam0)))
		{
			func_673(128);
		}
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (network_has_control_of_entity(iParam0))
	{
		if ((!func_305(4, -1) && func_349(128)) && func_609(Local_792.f_53.f_40))
		{
			func_675(4);
		}
		if (!func_305(8, -1) && func_678(1))
		{
			if (is_entity_dead(iParam0))
			{
				func_675(16);
			}
			if (func_679(Local_792.f_53.f_40))
			{
				func_675(8);
			}
		}
	}
	if (!func_305(1, -1))
	{
		if (((func_272() && !func_472(Global_34, iParam0, fParam1, 1, 1)) && Local_792.f_19.f_2 != 2) && (!func_402(&(Local_792.f_19.f_3)) || func_559(&(Local_792.f_19.f_3)) > Global_1901947->f_852.f_4))
		{
			func_675(1);
		}
	}
	else
	{
		if (func_402(&(Local_792.f_19.f_3)) && func_559(&(Local_792.f_19.f_3)) < 20f)
		{
			fVar0 = 5f;
		}
		else
		{
			fVar0 = 30f;
		}
		if (func_472(Global_34, iParam0, (fParam1 - fVar0), 1, 1))
		{
			func_680(1);
		}
	}
}

bool func_462()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

bool func_463(int iParam0)
{
	if (func_681(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

void func_464()
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	if (_0x498f2e77982d6945(iVar0, "InCombatCharging"))
	{
		_0xa6f67bec53379a32(iVar0, "InCombatCharging");
	}
}

void func_465(int iParam0, bool bParam1)
{
	iVar0 = participant_id_to_int();
	if (bParam1)
	{
		if (!network_is_participant_active(participant_id()))
		{
			return;
		}
		if (iVar0 < 0 || iVar0 >= network_get_max_num_participants())
		{
			return;
		}
	}
	func_248(&(Local_87[iVar0]->f_6), iParam0);
}

bool func_466(int iParam0)
{
	return func_177(Local_792.f_152.f_1, iParam0);
}

void func_467(var uParam0)
{
	if (Local_792.f_19 == 0)
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
	switch (Local_792.f_19.f_2)
	{
		case 0:
			if (Local_87[iVar1]->f_2.f_1 != 0)
			{
				Local_792.f_19.f_1 = player_ped_id();
				if (func_682())
				{
					Local_792.f_19.f_2 = 2;
				}
				else
				{
					Local_792.f_19.f_2 = 1;
				}
			}
			break;
		case 1:
			if (func_682())
			{
				if (func_683(uParam0))
				{
					Local_87[iVar1]->f_2++;
				}
				Local_792.f_19.f_2 = 2;
			}
			break;
		case 2:
			if (!func_682())
			{
				Local_792.f_19.f_2 = 1;
				Local_792.f_19.f_1 = player_ped_id();
				func_401(&(Local_792.f_19.f_3));
			}
			break;
	}
}

bool func_468(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= network_get_max_num_participants())
	{
		iParam1 = participant_id_to_int();
	}
	if (bParam2)
	{
		if (!network_is_participant_active(int_to_participantindex(iParam1)))
		{
			return false;
		}
	}
	return func_177(Local_87[iParam1]->f_6, iParam0);
}

bool func_469()
{
	return Local_792.f_289.f_4;
}

void func_470()
{
	if (!func_466(2))
	{
		if (!func_684())
		{
			return;
		}
		func_685(2);
	}
}

bool func_471(var uParam0, int iParam1)
{
	return func_218(uParam0->f_36, iParam1);
}

bool func_472(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	else if (func_686(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

void func_473(int iParam0, int iParam1, int iParam2, var uParam3)
{
	iVar0 = func_687(iParam1, iParam2);
	if (iVar0 != 0)
	{
		set_blip_name_from_text_file(uParam3->f_1, func_688(iParam1, iParam2));
	}
}

int func_474(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		if (!does_entity_exist(&(Local_792.f_165.f_7[iParam0])))
		{
			return 255;
		}
	}
	iVar1 = -1;
	bVar2 = fParam1 > 0f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = int_to_participantindex(iVar0);
		if (!network_is_participant_active(iVar5))
		{
		}
		else if (&Local_87[iVar0]->f_8.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam3 && !func_487(iVar0))
		{
		}
		else if (iVar1 != -1)
		{
			if (bVar3)
			{
				if (&Local_87[iVar0]->f_8.f_2[iParam0] > 75f)
				{
				}
				else
				{
					Jump @191; //curOff = 153
					if (&Local_87[iVar0]->f_8.f_2[iParam0] > &Local_87[iVar1]->f_8.f_2[iParam0])
					{
					}
					else if (bVar2 && &Local_87[iVar0]->f_8.f_2[iParam0] > fParam1)
					{
					}
					else
					{
						iVar6 = network_get_player_index(int_to_participantindex(iVar0));
						if (!network_is_player_active(iVar6))
						{
						}
						else if (is_player_dead(iVar6) || !is_player_playing(iVar6))
						{
						}
						else
						{
							bVar4 = (is_ped_in_any_vehicle(get_player_ped(iVar6), false) || Local_13.f_24.f_35 == iVar6);
							if ((iVar1 != -1 && bVar4) && &Local_87[iVar1]->f_8.f_2[iParam0] < 75f)
							{
							}
							else
							{
								bVar3 = bVar4;
								iVar1 = iVar0;
							}
						}
					}
				}
				iVar0++;
				if (iVar1 > -1 && iVar1 < 32)
				{
					if ((func_475() && !is_ped_in_any_vehicle(get_player_ped(Local_792.f_152.f_10), false)) && Local_13.f_24.f_35 != Local_792.f_152.f_10)
					{
						if (Local_792.f_152.f_7 < (&Local_87[iVar1]->f_8.f_2[iParam0] + 10f))
						{
							return 255;
						}
					}
					return network_get_player_index(int_to_participantindex(iVar1));
				}
				return 255;
			}
		}
	}
}

bool func_475()
{
	if (!_network_is_player_index_valid(Local_792.f_152.f_10))
	{
		return false;
	}
	if (!network_is_player_active(Local_792.f_152.f_10))
	{
		return false;
	}
	if (is_player_dead(Local_792.f_152.f_10) || !is_player_playing(Local_792.f_152.f_10))
	{
		return false;
	}
	return true;
}

bool func_476()
{
	if (func_218(Local_792.f_142, 16))
	{
		return true;
	}
	if (func_218(Local_792.f_142, 8))
	{
		return true;
	}
	if (func_218(Local_792.f_142, 2))
	{
		return true;
	}
	if (func_218(Local_792.f_142, 1))
	{
		return true;
	}
	if (func_218(Local_792.f_142, 4))
	{
		return true;
	}
	return false;
}

void func_477(var uParam0)
{
	if (func_471(uParam0, 2))
	{
		return;
	}
	func_645(1);
	func_385(uParam0, 2);
}

void func_478(bool bParam0)
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	fVar1 = to_float((Local_13.f_24.f_25 / 1000));
	task_wander_in_area(func_689(bParam0, 0, iVar0), Local_13.f_24.f_5, 15f, fVar1, fVar1, 0);
}

void func_479()
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	_task_start_scenario_in_place(iVar0, -95090138, -1, true, 0, -1f, false);
}

void func_480(bool bParam0, int iParam1)
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	task_animal_unalerted(func_689(bParam0, 0, iVar0), iParam1, 0, 0, 0);
}

int func_481()
{
	return -1;
}

void func_482(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	if (iParam0 == func_481())
	{
		iVar1 = Local_792.f_152.f_10;
		if (!network_is_player_active(iVar1))
		{
			return;
		}
		iParam0 = get_player_ped(iVar1);
	}
	task_animal_alerted(func_689(bParam1, 0, iVar0), iParam0, iParam2);
}

void func_483(int iParam0, bool bParam1)
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	if (iParam0 == func_481())
	{
		iVar1 = Local_792.f_152.f_10;
		if (!network_is_player_active(iVar1))
		{
			return;
		}
		iParam0 = get_player_ped(iVar1);
	}
	_0x463803429297117c(iVar0, get_entity_coords(iParam0, true, false), 1, 0);
	_0xcb9401f918cb0f75(iVar0, "InCombatCharging", 1, -1);
	task_combat_animal_warn(func_689(bParam1, 0, iVar0), iParam0, 0);
}

void func_484(bool bParam0)
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	iVar1 = Local_792.f_152.f_10;
	if (!network_is_player_active(iVar1))
	{
		return;
	}
	iVar2 = get_player_ped(iVar1);
	if (!does_entity_exist(iVar2) || is_entity_dead(iVar2))
	{
		return;
	}
	_0x802092b07e3b1eea(iVar0, get_entity_coords(iVar2, true, false), 3);
	task_combat_animal_charge(iVar0, iVar2, bParam0, 1, 1, 1, 1);
}

void func_485(bool bParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = func_229(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	iVar1 = Local_792.f_152.f_10;
	if (network_is_player_active(iVar1))
	{
		_0xeeed8fafec331a70(iVar0, get_entity_coords(get_player_ped(iVar1), true, false), 1);
		_task_smart_flee_style_ped(func_689(bParam0, 0, iVar0), get_player_ped(iVar1), iParam1, 0, fParam2, iParam3, 0);
	}
	else
	{
		_0xeeed8fafec331a70(iVar0, get_entity_coords(iVar0, true, false), 1);
		_task_smart_flee_style_coord(func_689(bParam0, 0, iVar0), get_entity_coords(iVar0, true, false), iParam1, 0, fParam2, iParam3, 0);
	}
}

bool func_486(int iParam0, bool bParam1, bool bParam2)
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

bool func_487(int iParam0)
{
	return func_129(8, iParam0);
}

var func_488(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_489(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_690(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_490(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_690(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_491(int iParam0)
{
	iVar0 = -1;
	if (func_329(&Var1, iParam0))
	{
		iVar0 = ((func_691() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_492(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_493(int iParam0, int iParam1)
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

void func_494(var uParam0)
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
	func_692(uParam0, uParam0->f_1);
}

void func_495(var uParam0, int iParam1, int iParam2)
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
		func_185(uParam0, iVar0);
		iVar0++;
	}
}

void func_496(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(&(uParam0->f_2), 16384);
	}
	else
	{
		func_219(&(uParam0->f_2), 16384);
	}
}

void func_497(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(&(uParam0->f_2), 2048);
	}
	else
	{
		func_219(&(uParam0->f_2), 2048);
	}
}

void func_498(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(&(uParam0->f_2), 256);
	}
	else
	{
		func_219(&(uParam0->f_2), 256);
	}
}

void func_499(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_219(uParam0, 16);
	}
	else
	{
		func_248(uParam0, 67108864);
		func_248(uParam0, 16);
	}
}

void func_500(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(&(uParam0->f_2), 128);
	}
	else
	{
		func_219(&(uParam0->f_2), 128);
	}
}

void func_501(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_219(uParam0, 256);
	}
	else
	{
		func_248(uParam0, 256);
	}
}

void func_502(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_219(uParam0, 268435456);
	}
	else
	{
		func_248(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_219(uParam0, 1073741824);
	}
	else
	{
		func_248(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_219(uParam0, 536870912);
	}
	else
	{
		func_248(uParam0, 536870912);
	}
}

float func_503(var uParam0)
{
	return uParam0->f_26;
}

void func_504(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

void func_505(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_219(uParam0, 1);
	}
	else
	{
		func_248(uParam0, 1);
	}
}

void func_506(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_219(uParam0, 512);
	}
	else
	{
		func_248(uParam0, 512);
	}
}

void func_507(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_219(uParam0, 2);
	}
	else
	{
		func_248(uParam0, 2);
	}
}

void func_508(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_219(uParam0, 8);
	}
	else
	{
		func_248(uParam0, 8);
	}
}

int func_509(int iParam0)
{
	return Local_792.f_165.f_7[iParam0]->f_4;
}

float func_510(int iParam0)
{
	return Local_792.f_165.f_7[iParam0]->f_5;
}

Vector3 func_511(int iParam0)
{
	return Local_792.f_165.f_7[iParam0]->f_6;
}

bool func_512(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_693(iParam1))
	{
		return false;
	}
	iVar0 = func_694(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_513(int iParam0, bool bParam1)
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

bool func_514(int iParam0)
{
	return func_170(iParam0, 32);
}

bool func_515(int iParam0)
{
	return func_170(iParam0, 64);
}

int func_516(int iParam0)
{
	return &(Local_792.f_165.f_7[iParam0]);
}

void func_517(var uParam0, int iParam1)
{
	if (uParam0->f_2 == iParam1)
	{
		return;
	}
	func_361(&(uParam0->f_6));
	uParam0->f_2 = iParam1;
}

bool func_518()
{
	return func_525(4);
}

bool func_519(int iParam0)
{
	return func_218(Local_792.f_25.f_23, iParam0);
}

bool func_520(var uParam0, var uParam1)
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
	set_anim_scene_entity(uParam1->f_16, &(uParam1->f_14), func_516(uParam1->f_1), 0);
	func_695(uParam1->f_16);
	set_anim_scene_origin(uParam1->f_16, Local_792.f_165.f_7[uParam1->f_1]->f_6, 0f, 0f, Local_792.f_165.f_7[uParam1->f_1]->f_5, 2);
	start_anim_scene(uParam1->f_16);
	return true;
}

bool func_521()
{
	return func_525(2);
}

bool func_522(var uParam0, int iParam1)
{
	return func_218(uParam0->f_21, iParam1);
}

float func_523(var uParam0)
{
	return (to_float(func_359(uParam0)) * 0.001f);
}

int func_524(int iParam0)
{
	return get_player_ped(func_696(iParam0));
}

bool func_525(int iParam0)
{
	return func_218(Local_792.f_25.f_22, iParam0);
}

void func_526(var uParam0, int iParam1)
{
	func_250(&(uParam0->f_10), iParam1);
}

var func_527(int iParam0, int iParam1)
{
	return func_697(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_528(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 5;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 21, 29, &uParam1);
}

void func_529(int iParam0, int iParam1, int iParam2)
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
		else if (Local_87[iVar0]->f_2.f_1 == 0)
		{
		}
		else
		{
			*iParam0 = (*iParam0 + Local_87[iVar0]->f_2);
			if (iVar1 == 0 || is_time_more_than(Local_87[iVar0]->f_2.f_1, iVar1))
			{
				iVar1 = Local_87[iVar0]->f_2.f_1;
			}
			if (iVar2 == 0 || is_time_less_than(Local_87[iVar0]->f_2.f_1, iVar2))
			{
				iVar2 = Local_87[iVar0]->f_2.f_1;
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

bool func_530(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (!func_341(iParam2, 0))
	{
		if (!func_209(&iParam2))
		{
			return false;
		}
	}
	fVar0 = &Local_87[iParam2]->f_8.f_2[iParam0];
	if (fVar0 <= 0f)
	{
		if (bParam3)
		{
			iVar1 = func_229(iParam0);
			if (does_entity_exist(iVar1))
			{
				iVar2 = network_get_player_index(int_to_participantindex(iParam2));
				if (_network_is_player_index_valid(iVar2))
				{
					fVar0 = vdist(get_entity_coords(iVar1, true, false), func_698(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					Local_87[iParam2]->f_8.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

bool func_531(int iParam0)
{
	return does_entity_exist(&(Local_792.f_165.f_7[iParam0]));
}

bool func_532(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_533(var uParam0)
{
	return func_532(*uParam0, 2);
}

int func_534(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

int func_535()
{
	switch (Local_13.f_24.f_4)
	{
		case 923520851:
			return 0;
		case 993674639:
			return 1;
		case 1139527981:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_536(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 923520851;
		case 1:
			return 993674639;
		case 2:
			return 1139527981;
		default:
			break;
	}
	return -2128726980;
}

void func_537(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_699(uParam0, 1);
	func_700(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_538()
{
	return (Global_1296859->f_21 - Local_792.f_152.f_12);
}

void func_539(int iParam0)
{
	func_673(8);
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
	if (_0x3f59fe6f37869576(iParam0->f_1, get_player_index()) && func_487(255))
	{
		if (!func_660())
		{
			func_661();
		}
		if (!func_304())
		{
			func_662();
		}
		if (!func_701())
		{
			func_702(1);
		}
	}
}

void func_540(int iParam0)
{
	if (_0x3f59fe6f37869576(iParam0->f_1, get_player_index()) && func_487(255))
	{
		if (!func_660())
		{
			func_661();
		}
		if (!func_304())
		{
			func_662();
		}
		if (!func_703())
		{
			func_704(1);
		}
	}
}

void func_541(int iParam0)
{
	func_673(16);
	if (_0x3f59fe6f37869576(iParam0->f_1, get_player_index()) && func_487(255))
	{
		if (!func_660())
		{
			func_661();
		}
		if (!func_304())
		{
			func_662();
		}
		if (!func_701())
		{
			func_702(1);
		}
	}
}

void func_542(int iParam0, float fParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		fParam1 = func_705(fParam1, 0f, 1f);
		iVar0 = floor((fParam1 * IntToFloat(get_entity_max_health(iParam0, bParam2))));
		_set_entity_health(iParam0, iVar0, 0);
	}
}

char* func_543(int iParam0)
{
	return Local_792.f_165.f_7[iParam0]->f_10;
}

void func_544(int iParam0, char* sParam1, bool bParam2)
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

void func_545(int iParam0)
{
}

void func_546(int iParam0)
{
	_0xd9130842d7226045(func_706(iParam0), 0);
}

bool func_547()
{
	return Global_1146212->f_21645[54]->f_208;
}

int func_548(int iParam0)
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

void func_549(int iParam0, int iParam1, int iParam2)
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
		iVar0 = func_377(get_entity_model(iParam0));
		iVar1 = func_707(iVar0, iParam2);
		set_entity_max_health(iParam0, iVar1);
		_set_entity_health(iParam0, iVar1, 0);
	}
}

void func_550(int iParam0)
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

float func_551(int iParam0, int iParam1, bool bParam2)
{
	if (!func_341(iParam1, 0))
	{
		if (!func_209(&iParam1))
		{
			return 0f;
		}
	}
	if (bParam2)
	{
		if (&Local_87[iParam1]->f_8.f_2[iParam0] < 0f)
		{
			return 0f;
		}
	}
	return &(Local_87[iParam1]->f_8.f_2[iParam0]);
}

int func_552(int iParam0)
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

struct<2> func_553(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_554(int iParam0)
{
	if (!func_390(func_389(iParam0), Local_792.f_192.f_76[iParam0]))
	{
		clear_bit(&(Local_792.f_192.f_90), iParam0);
		return;
	}
	set_bit(&(Local_792.f_192.f_90), iParam0);
}

int func_555(var uParam0, var uParam1, int iParam2)
{
	if (!func_342(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_343(Var0.f_2, 10);
		(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] || uParam1[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_343(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] || uParam1[Var0]) && iVar4));
	iVar4 = func_343(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = ((uParam0[Var0.f_1] && iVar4 ^ -1) || ((uParam0[Var0.f_1] || uParam1[Var0.f_1]) && iVar4));
	return 1;
}

int func_556(var uParam0, var uParam1, int iParam2)
{
	if (!func_342(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_343(Var0.f_2, 10);
		(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] && uParam1[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_343(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] && uParam1[Var0]) && iVar4));
	iVar4 = func_343(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = ((uParam0[Var0.f_1] && iVar4 ^ -1) || ((uParam0[Var0.f_1] && uParam1[Var0.f_1]) && iVar4));
	return 1;
}

void func_557(int iParam0, int iParam1)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	if (func_386(&(Local_87[iParam1]->f_12), 1, iParam0))
	{
		if (&Local_87[iParam1]->f_12.f_7[iParam0] == 0)
		{
			return;
		}
		iVar0 = network_get_player_index(int_to_participantindex(iParam1));
		if (!_network_is_player_index_valid(iVar0))
		{
			return;
		}
		if (_network_is_player_index_valid(&(Local_13.f_69.f_1[iParam0])))
		{
			if (&Local_13.f_69.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (&Local_13.f_69.f_3[iParam0] == 0 || is_time_more_than(&(Local_87[iParam1]->f_12.f_7[iParam0]), &(Local_13.f_69.f_3[iParam0])))
		{
			Local_13.f_69.f_1[iParam0] = iVar0;
			Local_13.f_69.f_3[iParam0] = &Local_87[iParam1]->f_12.f_7[iParam0];
		}
	}
}

void func_558(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_607() - fParam1);
	func_699(uParam0, 1);
	func_700(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_559(var uParam0)
{
	if (!func_402(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_708(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_607() - uParam0->f_1);
}

void func_560(int iParam0)
{
	if (!func_209(&iVar0))
	{
		return;
	}
	func_415(&(Local_87[iVar0]->f_12), 3, iParam0);
}

void func_561(int iParam0)
{
	if (func_709(iParam0) == 0)
	{
	}
}

bool func_562(int iParam0)
{
	return func_386(&(Local_792.f_192.f_72), 7, iParam0);
}

bool func_563(int iParam0, var uParam1, var uParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam1->f_6)
	{
		func_566(uParam1, 0, iVar0);
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
				if (func_579(uParam1, 4000))
				{
					if ((func_580(iParam0, Global_1940258->f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_581(uParam1, iParam0)) && func_582(uParam1, iParam0))
					{
						func_584();
						*uParam2 = 2;
						func_568(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 2 != 0)
		{
			if (uParam1->f_13 < 4f)
			{
				if (func_579(uParam1, 4000))
				{
					if ((func_580(iParam0, Global_1940258->f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_581(uParam1, iParam0)) && func_582(uParam1, iParam0))
					{
						func_584();
						*uParam2 = 2;
						func_568(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940258->f_35 != 0)
			{
				if (Global_1940258->f_34 == 0)
				{
					if (func_583(iParam0, Global_1940258->f_35))
					{
						func_584();
						*uParam2 = 2;
						func_568(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940258->f_36 != 0)
			{
				if (func_587())
				{
					if (func_583(iParam0, Global_1940258->f_36))
					{
						func_584();
						*uParam2 = 2;
						func_568(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940258->f_19)
		{
			if (func_573(uParam1, 1065353216))
			{
				if (!uParam1->f_2 & 4 != 0)
				{
					if (func_574(Global_34, iParam0, uParam1))
					{
						func_584();
						*uParam2 = 4;
						func_568(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_2 & 256 != 0)
				{
					if (func_575(Global_34, iParam0, uParam1))
					{
						func_584();
						*uParam2 = 256;
						func_568(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 131072 != 0)
		{
			if (func_710(iParam0, uParam1))
			{
				func_584();
				*uParam2 = 131072;
				func_568(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_711(iParam0, uParam1))
			{
				func_584();
				*uParam2 = 262144;
				func_568(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_564(int iParam0, int iParam1)
{
	if (!func_341(iParam1, 0))
	{
		if (!func_209(&iParam1))
		{
			return false;
		}
	}
	if (!func_386(&(Local_87[iParam1]->f_12), 8, iParam0))
	{
		return !func_386(&(Local_87[iParam1]->f_12), 1, iParam0);
	}
	return false;
}

bool func_565(int iParam0)
{
	if (iParam0 == 255)
	{
		return false;
	}
	return network_is_participant_active(iParam0);
}

void func_566(var uParam0, bool bParam1, int iParam2)
{
	func_712(iParam2);
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
		uParam0->f_14 = func_713(0);
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
							func_219(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_714(1, 1))
						{
							func_219(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_34) && (!func_714(1, 1) || *uParam0 & 8192 != 0))
				{
					func_248(uParam0, 33554432);
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
			if (func_715(uParam0))
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
	func_716(uParam0);
}

bool func_567(int iParam0, var uParam1)
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
			if (!func_717(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_718(iParam0, iVar2) <= func_719(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_568(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_720(iParam2, 1, 1, 1, 0))
	{
		func_219(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_721(uParam1, 1);
	func_722();
}

bool func_569(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_723(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_724(uParam1);
			if (func_725(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_3);
				iVar3 = func_726(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_721(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_727(uParam1))
						{
							func_721(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_570(int iParam0, int iParam1, var uParam2)
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
	if (func_728(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_724(uParam2);
		if (func_725(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = get_game_timer();
			}
			if (uParam2->f_3 != 0)
			{
				if (get_game_timer() - uParam2->f_3) > func_726(uParam2)
				{
					func_721(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_571(int iParam0, var uParam1)
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
	if (func_717(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_4) > func_726(uParam1)
		{
			fVar3 = func_724(uParam1);
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

int func_572(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_729(bParam1, bParam2, bParam3);
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

bool func_573(var uParam0, float fParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_586();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_574(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_730(uParam2);
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
			if (func_582(uParam2, iParam1))
			{
				func_721(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_575(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_13 < IntToFloat(func_603(uParam2)))
	{
		if ((is_weapon_valid(Global_1940258->f_40) && !_0x5809dbca0a37c82b(Global_1940258->f_40)) || get_current_ped_vehicle_weapon(Global_34, &uVar0))
		{
			if (func_582(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_721(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_576(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_731(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_24))
				{
					func_721(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_30))
				{
					func_721(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_29, &vVar4, 0, 0);
					if (func_732(iParam1, vVar0, vVar4))
					{
						func_721(uParam2, 1);
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
					func_721(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_29, &vVar7, 0, 0);
					if (func_732(iParam1, vVar0, vVar7))
					{
						func_721(uParam2, 1);
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

bool func_577(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1940258->f_33)
	{
		if (!func_717(iParam0, uParam1, &(Global_1940258->f_28[iVar0])) || iParam0 == &Global_1940258->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_733(&(Global_1940258->f_28[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false), vVar9);
			if (func_734(&(Global_1940258->f_28[iVar0])))
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
			if (func_735(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_736(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_737(uParam1, iParam0, fVar1, iVar0))
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

bool func_578(int iParam0, var uParam1)
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

bool func_579(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_586();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_580(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_738(iVar0, &iVar2))
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
	if (func_739(iVar0, iParam0))
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

int func_581(var uParam0, int iParam1)
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

bool func_582(var uParam0, int iParam1)
{
	if (func_740(uParam0))
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

bool func_583(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_611(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_584()
{
}

bool func_585(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_34);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_741(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_586();
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
						if (func_742(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_10 = func_586();
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

int func_586()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_587()
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
	if ((func_586() - Global_1940258->f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_588(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_15))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_719(uParam0);
	if (uParam0->f_13 > func_503(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_743(iParam1);
	iVar1 = func_744(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || _0x9d9473cb82d83a30(iParam1, Global_34, 0) == 1) || _0x9d9473cb82d83a30(iParam1, uParam0->f_15, 0) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_589(var uParam0, int iParam1)
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
	if (func_429(iVar0, iParam1, 1060437492) != 0)
	{
		return false;
	}
	vVar1 = { get_entity_coords(iParam1, true, false) };
	vVar4 = { get_entity_coords(iVar0, true, false) };
	fVar7 = func_745(vVar1, vVar4);
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

int func_590(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_13 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_746(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_591(int iParam0, var uParam1)
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
		if (func_747(iParam0, uParam1, 1))
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
	if (!func_424(iParam0))
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
			if (func_748(uParam1))
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
					if (!func_749(uParam1, iParam0))
					{
						if (func_742(iVar4, Global_35, 1) < 7f)
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

bool func_592(int iParam0, var uParam1)
{
	if (!func_750(0))
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

bool func_593(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_586();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_594(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_595(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_586();
	}
	else if (func_586() - uParam1->f_5) > func_751(uParam1)
	{
		return func_752(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_596(var uParam0, int iParam1)
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

int func_597(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_753(vVar3, vVar6);
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
	if (func_754(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_598(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_177(Local_792.f_192.f_2, 4))
	{
		return false;
	}
	if (!is_bit_set(Local_792.f_192.f_65, iParam0))
	{
		return false;
	}
	clear_bit(&(Local_792.f_192.f_65), iParam0);
	if (!bParam3 && Local_87[iParam2]->f_12.f_4 == 0)
	{
		return false;
	}
	if (!bParam3 && get_time_difference(Local_87[iParam2]->f_12.f_4, get_network_time_accurate()) > 750)
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
	iVar0 = func_755(player_ped_id(), 0, 1, 0);
	if (!is_weapon_valid(iVar0) || !((_0x705be297eebdb95d(iVar0) || func_756(iVar0)) || _is_weapon_throwable(iVar0)))
	{
		return false;
	}
	if (_0x79b1a6e780266db0(player_ped_id()) < iParam1->f_2)
	{
		return false;
	}
	return true;
}

void func_599(int* iParam0, var uParam1)
{
	get_screen_resolution(iParam0, &(iParam0->f_1));
	*iParam0 = (*iParam0 / 2);
	iParam0->f_1 = (iParam0->f_1 / 2);
	iParam0->f_2 = uParam1;
}

Vector3 func_600(int iParam0)
{
	return iParam0->f_6, iParam0->f_7, iParam0->f_8;
}

int func_601(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12)
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
		vVar7.x = ((func_757(iParam0) * 0.5f) + vParam5.x);
		vVar7.f_1 = ((func_758(iParam0) * 0.5f) + vParam5.y);
		vVar7.f_2 = ((func_759(iParam0) * 0.5f) + vParam5.z);
	}
	vVar10 = { func_365(func_760(get_rendering_cam())) };
	vVar13 = { func_761(vVar10, 0f, 0f, 1f) };
	vVar16 = { func_761(vVar13, vVar10) };
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
			uParam1->f_2 = (iParam9 + floor((func_762((!bVar43 || vVar25.x < vVar31.x), vVar25.x, vVar31.x) - vVar22.x)));
		}
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			return 0;
		}
		if (bVar42)
		{
			uParam1->f_3 = (iParam10 + floor((func_762((!bVar43 || vVar28.y > vVar31.y), vVar28.y, vVar31.y) - vVar22.y)));
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
			uParam1->f_3 = (iParam10 + floor((func_762(vVar28.y > vVar31.y, vVar28.y, vVar31.y) - vVar25.y)));
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
		uParam1->f_2 = (iParam9 + floor(func_762((!bVar43 || vVar25.x > vVar31.x), vVar25.x, vVar31.x)));
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

int func_602(int iParam0, var uParam1)
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

int func_603(var uParam0)
{
	return uParam0->f_23;
}

bool func_604(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 8:
		case 16:
		case 2048:
			return true;
		default:
			break;
	}
	return false;
}

bool func_605(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_606(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_605(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_607() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

float func_607()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_608(int iParam0)
{
	return func_763(iParam0);
}

bool func_609(int iParam0)
{
	if (does_entity_exist(&(Local_792.f_165.f_7[iParam0])))
	{
		if (network_has_control_of_entity(&(Local_792.f_165.f_7[iParam0])))
		{
			uVar0 = &Local_792.f_165.f_7[iParam0];
			set_ped_as_no_longer_needed(&uVar0);
			return true;
		}
	}
	return false;
}

void func_610(var uParam0, var uParam1)
{
	switch (uParam0->f_4)
	{
		case 1:
			func_764(uParam0, uParam1);
			break;
		case 2:
			func_765(uParam0, uParam1);
			break;
	}
}

float func_611(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_612()
{
	return false;
}

void func_613(int iParam0)
{
	allow_sonar_blips(true);
	force_sonar_blips_this_frame();
	_trigger_sonar_blip_2(1231752879, iParam0);
}

void func_614(int iParam0)
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

void func_615(int iParam0, int iParam1)
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
	uVar6 = func_527(0, 8);
	trigger_script_event(1, &Var0, 6, 42, &uVar6);
}

void func_616(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_617()
{
	return func_624(2, -1);
}

bool func_618(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_229(iParam0);
	if ((get_frame_count() % iParam5) != iParam6)
	{
		return false;
	}
	if (is_entity_dead(Global_34))
	{
		return false;
	}
	if (!func_472(Global_34, iVar0, fParam3, 1, 1))
	{
		return false;
	}
	if (func_663(iVar0))
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
		if (func_766(player_id(), iVar0) || is_player_free_aiming_at_entity(player_id(), iVar0))
		{
			return true;
		}
	}
	bVar1 = false;
	if (func_472(Global_34, iVar0, fParam1, 1, 1))
	{
		bVar1 = true;
	}
	else if (func_472(Global_34, iVar0, fParam2, 1, 1) && is_tracked_ped_visible(iVar0))
	{
		bVar1 = true;
	}
	else if ((func_472(Global_34, iVar0, fParam3, 1, 1) && func_767()) && is_tracked_ped_visible(iVar0))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (!func_402(Local_792.f_53.f_3[iParam0]))
		{
			func_644(Local_792.f_53.f_3[iParam0], 0);
		}
		else if (func_559(Local_792.f_53.f_3[iParam0]) > fParam4)
		{
			return true;
		}
	}
	else if (func_402(Local_792.f_53.f_3[iParam0]))
	{
		func_404(Local_792.f_53.f_3[iParam0]);
	}
	return false;
}

void func_619()
{
	func_634(2);
}

bool func_620(int iParam0, var uParam1)
{
	fVar0 = 5f;
	if (func_763(iParam0))
	{
		fVar0 = func_768(iParam0);
	}
	if (func_472(Global_34, iParam0, fVar0, 1, 1))
	{
		uParam1->f_32 = 262144;
		return true;
	}
	if (!func_402(&(uParam1->f_35)))
	{
		if (_0xd55db4466d00a258(iParam0))
		{
			func_644(&(uParam1->f_35), 0);
		}
	}
	else if (func_559(&(uParam1->f_35)) > 2.5f)
	{
		uParam1->f_32 = 262144;
		return true;
	}
	if (func_563(iParam0, uParam1, &(uParam1->f_32), 0))
	{
		return true;
	}
	return false;
}

bool func_621(int iParam0, var uParam1, bool bParam2)
{
	if (func_428(iParam0, 0, uParam1, &(uParam1->f_33), 0, 0))
	{
		return true;
	}
	if (Global_1940258->f_19 && !uParam1->f_2 & 4 != 0)
	{
		if (((func_472(Global_34, iParam0, _0x79b1a6e780266db0(Global_34), 1, 1) && _0x285d36c5c72b0569(Global_34) <= 0.5f) && func_769(iParam0, 0.45f, 0.55f, 0.45f, 0.55f)) && !is_entity_occluded(iParam0))
		{
			uParam1->f_33 = 4;
			return true;
		}
	}
	if (bParam2 && func_472(Global_34, iParam0, 7f, 1, 1))
	{
		uParam1->f_33 = 65536;
		return true;
	}
	return false;
}

void func_622()
{
	Local_792.f_25.f_20 = player_id();
	func_634(4);
}

void func_623(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	iVar0 = func_516(uParam1->f_1);
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
	if ((uParam1->f_20 == 255 || func_770(uParam0, 1)) || bParam2)
	{
		iVar1 = func_524(iVar0);
		if (!func_472(iVar1, iVar0, 100f, 1, 1))
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
		if ((!is_ped_fleeing(iVar0) || !func_638(iVar0, 518218985)) || bParam3)
		{
			if (func_522(uParam1, 16))
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
			func_634(8);
		}
		return;
	}
	switch (uParam0->f_1)
	{
		case 1:
			if ((!is_ped_in_combat(iVar0, 0) || !func_638(iVar0, 780511057)) || bParam3)
			{
				task_combat_ped(iVar0, iVar1, 0, 0);
				func_634(8);
			}
			break;
		case 0:
			if ((!is_ped_fleeing(iVar0) || !func_638(iVar0, 518218985)) || bParam3)
			{
				if (func_522(uParam1, 16))
				{
					iVar5 |= 67108864;
				}
				_task_smart_flee_style_ped(iVar0, iVar1, 3, iVar5, 400f, -1, 0);
				func_634(8);
			}
			break;
		default:
			break;
	}
}

bool func_624(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = participant_id_to_int();
	}
	if (!func_486(iParam1, 0, 1))
	{
		return false;
	}
	return func_218(Local_87[iParam1]->f_5, iParam0);
}

bool func_625(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 1:
			return (func_638(iParam1, 780511057) || is_ped_in_combat(iParam1, 0));
		case 0:
			return (func_638(iParam1, 518218985) || is_ped_fleeing(iParam1));
	}
	return false;
}

void func_626(var uParam0)
{
}

void func_627(var uParam0, int iParam1)
{
	func_250(&(uParam0->f_21), iParam1);
}

void func_628(var uParam0, var uParam1)
{
}

void func_629(var uParam0)
{
	if (func_471(uParam0, 1))
	{
		return;
	}
	func_662();
	func_385(uParam0, 1);
}

void func_630(var uParam0, var uParam1, var uParam2)
{
	if (!func_487(255))
	{
		return;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 <= 0)
	{
		iVar0 = &Local_792.f_165.f_7[iVar2];
		if (((iVar2 != uParam1->f_1 && iVar2 != uParam1->f_2) && does_entity_exist(iVar0)) && !is_entity_dead(iVar0))
		{
			switch (uParam0->f_1)
			{
				case 1:
					if (func_625(uParam0, iVar0))
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
			if (iVar1 == 1 && func_472(iVar0, Global_34, uParam2->f_13, 1, 1))
			{
				if (!_0x9fa00e2fc134a9d0(iVar0) && is_entity_visible(iVar0))
				{
					_blip_add_for_entity(831283580, iVar0);
				}
			}
			else if (!func_472(iVar0, Global_34, uParam2->f_17, 1, 1) || iVar1 == 0)
			{
				if (_0x9fa00e2fc134a9d0(iVar0))
				{
					func_771(iVar0);
				}
			}
		}
		iVar2++;
	}
}

void func_631(var uParam0, var uParam1)
{
	iVar2 = 0;
	while (iVar2 <= 0)
	{
		iVar0 = &Local_792.f_165.f_7[iVar2];
		if ((((((iVar2 != uParam1->f_1 && iVar2 != uParam1->f_2) && does_entity_exist(iVar0)) && network_has_control_of_entity(iVar0)) && !is_entity_dead(iVar0)) && !get_ped_config_flag(iVar0, 580, true)) && !func_625(uParam0, iVar0))
		{
			switch (uParam0->f_1)
			{
				case 1:
					task_combat_ped(iVar0, get_player_ped(uParam1->f_20), 0, 0);
					break;
				case 0:
					iVar1 = 0;
					if (func_522(uParam1, 16))
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

void func_632(var uParam0)
{
	iVar1 = 0;
	while (iVar1 <= 0)
	{
		iVar0 = &Local_792.f_165.f_7[iVar1];
		if ((((((iVar1 != uParam0->f_1 && iVar1 != uParam0->f_2) && does_entity_exist(iVar0)) && network_has_control_of_entity(iVar0)) && !is_entity_dead(iVar0)) && !get_ped_config_flag(iVar0, 580, true)) && _0x268b3aebf032a88d(iVar0))
		{
			task_wander_in_area(iVar0, Local_792.f_165.f_7[uParam0->f_1]->f_6, uParam0->f_27, 1077936128, 1086324736, 0);
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

void func_633(int iParam0)
{
	set_bit(&(Local_792.f_53.f_41), iParam0);
}

void func_634(int iParam0)
{
	if (!func_486(participant_id_to_int(), 0, 1))
	{
		return;
	}
	func_250(&(Local_87[participant_id_to_int()]->f_5), iParam0);
}

int func_635(var uParam0)
{
	return 0;
}

void func_636(var uParam0)
{
}

void func_637()
{
}

bool func_638(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_639(int iParam0)
{
	if (!func_486(participant_id_to_int(), 0, 1))
	{
		return;
	}
	func_251(&(Local_87[participant_id_to_int()]->f_5), iParam0);
}

bool func_640(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = participant_id_to_int();
	}
	if (!func_486(iParam1, 0, 1))
	{
		return false;
	}
	return func_218(Local_87[iParam1]->f_1, iParam0);
}

bool func_641(int iParam0)
{
	return func_218(Local_792.f_53.f_43, iParam0);
}

void func_642(int iParam0)
{
	if (!func_486(participant_id_to_int(), 0, 1))
	{
		return;
	}
	func_251(&(Local_87[participant_id_to_int()]->f_1), iParam0);
}

int func_643(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (!func_472(iParam0, iParam1, 50f, 1, 1))
	{
		return 2;
	}
	if (!func_402(uParam2))
	{
		func_401(uParam2);
		*uParam3 = 0;
		return 2;
	}
	else if (func_559(uParam2) > 4f)
	{
		if (*uParam3 == 0)
		{
			vVar0 = { get_entity_coords(iParam0, true, false) };
			vVar3 = { get_entity_coords(iParam1, true, false) };
			*uParam3 = _0x348f211ca2404039(iParam0, vVar0, vVar3, 29);
			if (*uParam3 == -1)
			{
				func_401(uParam2);
				*uParam3 = 0;
				return 2;
			}
		}
		if (_0x3a0f82f6ee2291c8(*uParam3) == 1)
		{
			func_401(uParam2);
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

void func_644(var uParam0, bool bParam1)
{
	if (bParam1 || !func_402(uParam0))
	{
		func_401(uParam0);
	}
}

void func_645(int iParam0)
{
	if (!func_486(participant_id_to_int(), 0, 1))
	{
		return;
	}
	func_250(&(Local_87[participant_id_to_int()]->f_1), iParam0);
}

void func_646()
{
	if (func_471(&(Local_792.f_53), 256))
	{
		return;
	}
	if (!does_entity_exist(Local_792.f_53))
	{
		return;
	}
	func_772(Local_792.f_53);
	func_385(&(Local_792.f_53), 256);
}

void func_647()
{
	if (!func_471(&(Local_792.f_53), 256))
	{
		return;
	}
	if (!does_entity_exist(Local_792.f_53))
	{
		func_387(&(Local_792.f_53), 256);
		return;
	}
	func_773(Local_792.f_53);
	func_387(&(Local_792.f_53), 256);
}

bool func_648()
{
	return func_641(1);
}

bool func_649(var uParam0)
{
	return _0xd9130842d7226045(&(uParam0->f_22), 0);
}

bool func_650(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6)
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
	else if (func_686(get_entity_coords(iParam0, bParam5, false), vParam1) <= (bParam4 * bParam4))
	{
		return true;
	}
	return false;
}

void func_651(var uParam0, int iParam1)
{
	if (uParam0->f_35 == iParam1)
	{
		return;
	}
	uParam0->f_35 = iParam1;
}

Vector3 func_652(vector3 vParam0, float fParam3, float fParam4)
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
	return func_774(vParam0, fParam3, fParam4);
}

void func_653(vector3 vParam0, int iParam3)
{
	allow_sonar_blips(true);
	force_sonar_blips_this_frame();
	trigger_sonar_blip(iParam3, vParam0);
}

void func_654()
{
}

void func_655(var uParam0, vector3 vParam1)
{
	if (is_string_null_or_empty(&(uParam0->f_22)))
	{
		return;
	}
	_play_sound_from_position("CALL", vParam1, &(uParam0->f_22), false, 0, true, 0);
}

int func_656(int iParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = iParam0;
	while (iVar2 <= iParam1)
	{
		iVar1 = func_775(iVar2);
		if (iVar1 >= 0)
		{
			iVar0 = (iVar0 + iVar1);
		}
		iVar2++;
	}
	return iVar0;
}

void func_657(int iParam0, var uParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (network_is_host_of_this_script())
	{
		if (!func_357(uParam1))
		{
			if (bParam2)
			{
				func_358(uParam1, 0);
			}
		}
		else
		{
			uParam1->f_3 = (func_523(uParam1) * Global_1901947->f_852.f_8);
			if (uParam1->f_3 > 1f)
			{
				uParam1->f_3 = 1f;
			}
		}
	}
	if ((((!is_entity_dead(iParam0) && func_357(uParam1)) && !get_ped_config_flag(iParam0, 580, true)) && network_has_control_of_entity(iParam0)) && (get_frame_count() % 10) == 0)
	{
		if (!_0x33fa048675821da7(iParam0, 5))
		{
			_0x2eb75fb86c41f026(iParam0, 5, 1);
		}
		_0x06d26a96ca1bca75(iParam0, 5, uParam1->f_3, 0);
	}
}

void func_658(var uParam0, int iParam1)
{
	if (uParam0->f_2 == iParam1)
	{
		return;
	}
	uParam0->f_2 = iParam1;
}

bool func_659(var uParam0)
{
	return func_471(uParam0, 2);
}

bool func_660()
{
	return func_66(2);
}

void func_661()
{
	if (!func_129(32, 255))
	{
		func_776(Local_792.f_1, Local_792.f_3);
		if (!func_129(1024, 255))
		{
			func_777(Local_792.f_1);
			func_146(1024);
		}
		iVar0 = func_313(Local_792.f_1, Local_792.f_2);
		func_778(iVar0);
		func_779(iVar0);
		func_144(2);
		func_780(Local_792.f_9);
		func_781(Local_792.f_1);
		func_782(Local_792.f_1, Local_792.f_2, Local_792.f_3);
		func_146(32);
	}
}

void func_662()
{
	if (!func_66(2))
	{
		return;
	}
	func_144(8);
}

bool func_663(int iParam0)
{
	return !is_entity_visible(iParam0);
}

bool func_664(var uParam0)
{
	return func_650(Global_34, uParam0->f_30, uParam0->f_12, 1, !func_783(uParam0));
}

int func_665()
{
	return -108658760;
}

void func_666(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!does_blip_exist(*uParam1))
	{
		*uParam1 = _blip_add_for_entity(func_784(), iParam0);
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
		set_blip_name_from_text_file(*uParam1, func_785(func_377(get_entity_model(iParam0))));
	}
}

void func_667(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_402(uParam0))
	{
		func_558(uParam0, fParam1);
	}
}

void func_668(var uParam0)
{
	if (does_blip_exist(*uParam0))
	{
		_set_blip_flash_style(*uParam0, -1833912565);
		_blip_set_modifier(*uParam0, 197772266);
	}
}

void func_669(var uParam0)
{
	if (does_blip_exist(*uParam0))
	{
		_set_blip_flash_style(*uParam0, 197772266);
		_blip_set_modifier(*uParam0, -1833912565);
	}
}

void func_670(var uParam0)
{
	if (does_blip_exist(*uParam0))
	{
		_set_blip_flash_style(*uParam0, 197772266);
	}
}

void func_671(int iParam0, int iParam1)
{
	allow_sonar_blips(true);
	force_sonar_blips_this_frame();
	_trigger_sonar_blip_2(iParam1, iParam0);
}

void func_672()
{
	Var0 = { func_786(-922869466) };
	func_787(&Var0);
}

void func_673(int iParam0)
{
	func_250(&(Local_792.f_142), iParam0);
}

void func_674()
{
	Var0 = { func_786(2126697993) };
	func_787(&Var0);
}

void func_675(int iParam0)
{
	if (!func_486(participant_id_to_int(), 0, 1))
	{
		return;
	}
	func_250(&(Local_87[participant_id_to_int()]->f_4), iParam0);
}

int func_676(int iParam0)
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

void func_677()
{
	Var0 = { func_786(-1485898032) };
	func_787(&Var0);
}

bool func_678(int iParam0)
{
	return func_218(Local_792.f_142.f_2, iParam0);
}

bool func_679(int iParam0)
{
	if (does_entity_exist(&(Local_792.f_165.f_7[iParam0])))
	{
		if (network_has_control_of_entity(&(Local_792.f_165.f_7[iParam0])))
		{
			delete_ped(Local_792.f_165.f_7[iParam0]);
			Local_792.f_165.f_7[iParam0] = 0;
			return true;
		}
	}
	return false;
}

void func_680(int iParam0)
{
	if (!func_486(participant_id_to_int(), 0, 1))
	{
		return;
	}
	func_251(&(Local_87[participant_id_to_int()]->f_4), iParam0);
}

bool func_681(int iParam0, var uParam1, var uParam2, bool bParam3)
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

bool func_682()
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

bool func_683(var uParam0)
{
	if (!does_entity_exist(Local_792.f_19.f_1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (is_bit_set(Local_792.f_19, iVar0))
		{
			if (does_entity_exist(uParam0[iVar0]))
			{
				if (func_788(Local_792.f_19.f_1, uParam0[iVar0]))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_684()
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
	if (Local_87[iVar1]->f_2.f_1 != 0)
	{
	}
	Local_87[iVar1]->f_2.f_1 = get_network_time_accurate();
	return true;
}

void func_685(int iParam0)
{
	func_219(&(Local_792.f_152.f_1), iParam0);
}

float func_686(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_687(int iParam0, int iParam1)
{
	sVar0 = func_688(iParam0, iParam1);
	if (is_string_null_or_empty(sVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(sVar0);
	return iVar1;
}

char* func_688(int iParam0, int iParam1)
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

int func_689(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_690(struct<2> Param0, var uParam2)
{
	if (!func_38(Param0))
	{
		return false;
	}
	func_789(uParam2);
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

int func_691()
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

void func_692(var uParam0, var uParam1)
{
}

bool func_693(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_694(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

void func_695(var uParam0)
{
}

int func_696(int iParam0)
{
	return func_790(get_entity_coords(iParam0, true, false), 1203982208, 1, 1);
}

var func_697(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_791() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_792());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_792());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_792());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_793(get_player_team(iVar5)));
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
			if (func_794(iVar2))
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
				if (iVar9 & 8192 != 0 && func_795(iVar2) != 1)
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
					if (!func_796(iVar10))
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

Vector3 func_698(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_699(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_700(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_701()
{
	return func_66(32);
}

void func_702(bool bParam0)
{
	if (!func_66(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_66(256))
		{
			func_176(Local_792.f_18, 0);
			func_144(256);
		}
	}
	func_144(32);
}

bool func_703()
{
	return func_66(16);
}

void func_704(bool bParam0)
{
	if (!func_66(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_66(256))
		{
			func_176(Local_792.f_18, 0);
			func_144(256);
		}
	}
	func_144(16);
}

float func_705(float fParam0, float fParam1, float fParam2)
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

char* func_706(int iParam0)
{
	switch (func_377(get_entity_model(iParam0)))
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

int func_707(int iParam0, int iParam1)
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

bool func_708(var uParam0)
{
	return func_532(*uParam0, 2);
}

int func_709(int iParam0)
{
	return iParam0;
}

bool func_710(int iParam0, var uParam1)
{
	fVar0 = func_797(uParam1);
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
		fVar2 = func_798(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
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
					if (func_799())
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

bool func_711(int iParam0, var uParam1)
{
	if (func_800(iParam0))
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

void func_712(int iParam0)
{
	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1940258->f_32);
	Global_1940258->f_21 = func_801();
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
			func_802(&(Global_1940258->f_28), &(Global_1940258->f_33));
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

var func_713(int iParam0)
{
	return &(Global_1102219->f_3705[iParam0]);
}

bool func_714(bool bParam0, bool bParam1)
{
	if (func_803(bParam0, &iVar0, &iVar1))
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

bool func_715(var uParam0)
{
	iVar0 = Global_1940258->f_34;
	if (func_28() == -1)
	{
		if (Global_1940258->f_34 == 0)
		{
			iVar0 = func_804(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1940258->f_34) || !&Global_1956200->f_1716[4])
	{
		iVar0 = func_804(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_744(iVar0) == -1)
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

void func_716(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_805(uParam0);
	}
}

bool func_717(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_744(iParam2);
	}
	else
	{
		iVar1 = func_743(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_744(iParam0);
	}
	else
	{
		iVar0 = func_743(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_177(*uParam1, 8388608))
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

float func_718(int iParam0, int iParam1)
{
	return func_611(iParam0, iParam1, 1, 1);
}

float func_719(var uParam0)
{
	return uParam0->f_29;
}

bool func_720(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_721(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_219(uParam0, 134217728);
	}
	else
	{
		func_248(uParam0, 134217728);
	}
}

void func_722()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_723(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_611(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_806(iVar0, 0)))
		{
			if (func_769(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_724(var uParam0)
{
	return uParam0->f_18;
}

bool func_725(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_177(*uParam0, 4194304))
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

int func_726(var uParam0)
{
	return uParam0->f_19;
}

int func_727(var uParam0)
{
	return uParam0->f_20;
}

bool func_728(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_806(iVar0, 0)))
		{
			if (func_807(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_729(bool bParam0, bool bParam1, bool bParam2)
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

float func_730(var uParam0)
{
	return uParam0->f_25;
}

int func_731(var uParam0)
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

bool func_732(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_808(iParam0, vParam4, 0.5f))
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

int func_733(int iParam0)
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
	if (func_809(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_734(int iParam0)
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

bool func_735(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_800(iParam1))
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

bool func_736(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_800(iParam1))
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

bool func_737(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = func_810(uParam0);
	if (func_800(iParam1))
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

bool func_738(int iParam0, int iParam1)
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

bool func_739(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (_0x8d50f43298ab9545(iParam0, iParam1))
	{
		return true;
	}
	if (!_is_weapon_lasso(func_811(iParam0, 1, 0, 0)) && !func_811(iParam0, 1, 0, 0) == 1151374672)
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

bool func_740(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_741(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_742(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_742(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_743(int iParam0)
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

int func_744(int iParam0)
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

float func_745(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

int func_746(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_738(Global_34, &iVar1))
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
		fVar2 = func_611(iParam0, player_ped_id(), 0, 1);
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
		if (func_611(iParam0, Global_1940258->f_34, 0, 1) < 2.5f)
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

bool func_747(int iParam0, var uParam1, bool bParam2)
{
	func_803(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_749(uParam1, iVar0))
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
				if (!bParam2 || !func_749(uParam1, iVar1))
				{
					if (func_742(iVar1, Global_35, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_748(var uParam0)
{
	return func_177(*uParam0, 131072);
}

bool func_749(var uParam0, int iParam1)
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

bool func_750(int iParam0)
{
	return false;
}

int func_751(var uParam0)
{
	return uParam0->f_22;
}

int func_752(int iParam0, var uParam1, bool bParam2, float fParam3)
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

float func_753(vector3 vParam0, vector3 vParam3)
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

bool func_754(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_755(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_756(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

float func_757(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_812(vVar2.x, fVar0);
	fVar1 = func_798(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_812(vVar2.x, fVar0);
	fVar1 = func_798(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_812(vVar2.x, fVar0);
	fVar1 = func_798(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_812(vVar2.x, fVar0);
	fVar1 = func_798(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_812(vVar2.x, fVar0);
	fVar1 = func_798(vVar2.x, fVar1);
	return (fVar0 - fVar1);
}

float func_758(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_812(vVar2.y, fVar0);
	fVar1 = func_798(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_812(vVar2.y, fVar0);
	fVar1 = func_798(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_812(vVar2.y, fVar0);
	fVar1 = func_798(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_812(vVar2.y, fVar0);
	fVar1 = func_798(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_812(vVar2.y, fVar0);
	fVar1 = func_798(vVar2.y, fVar1);
	return (fVar0 - fVar1);
}

float func_759(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_812(vVar2.z, fVar0);
	fVar1 = func_798(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_812(vVar2.z, fVar0);
	fVar1 = func_798(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_812(vVar2.z, fVar0);
	fVar1 = func_798(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_812(vVar2.z, fVar0);
	fVar1 = func_798(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_812(vVar2.z, fVar0);
	fVar1 = func_798(vVar2.z, fVar1);
	return (fVar0 - fVar1);
}

Vector3 func_760(int iParam0)
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
	return func_365((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_761(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_762(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_763(int iParam0)
{
	return _0xf8b48a361dc388ae(iParam0) == 2;
}

void func_764(var uParam0, var uParam1)
{
	if (uParam0->f_1 == 255 || !network_is_player_active(uParam0->f_1))
	{
		return;
	}
	bVar0 = false;
	if (does_entity_exist(*uParam1) && func_742(*uParam1, Global_35, 1) < 300f)
	{
		bVar0 = true;
	}
	bVar1 = false;
	bVar1 = func_813();
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
				func_814(*uParam1);
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
		if (func_611(iVar2, *uParam1, 1, 1) > 300f)
		{
			return;
		}
	}
	if ((func_218(uParam1->f_2, 1) || func_218(uParam1->f_2, 2)) && uParam1->f_1 != 0)
	{
		return;
	}
	uParam1->f_1 = Global_1296859->f_21;
	if (uParam0->f_1 == player_id())
	{
		func_250(&(uParam1->f_2), 1);
	}
	else if (_0x3f59fe6f37869576(player_id(), uParam0->f_1))
	{
		func_250(&(uParam1->f_2), 2);
	}
}

void func_765(var uParam0, var uParam1)
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
			func_815(947, 1);
			func_816(*uParam1);
		}
		else if (network_has_control_of_network_id(uParam0->f_5))
		{
			if (((is_ped_dead_or_dying(iVar0, true) || is_ped_injured(iVar0)) || get_ped_config_flag(iVar0, 580, true)) || (_0x083d497d57b7400f(iVar0) && !is_entity_visible(iVar0)))
			{
				return;
			}
			func_817(*uParam1);
		}
	}
}

bool func_766(int iParam0, int iParam1)
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

bool func_767()
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

float func_768(int iParam0)
{
	switch (func_548(func_377(get_entity_model(iParam0))))
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

bool func_769(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_807(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_770(var uParam0, int iParam1)
{
	return func_218(uParam0->f_10, iParam1);
}

void func_771(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_818(&iVar0);
}

void func_772(var uParam0)
{
	_0xe37287ee358939c3(uParam0);
}

void func_773(var uParam0)
{
	_0x011a42fd923d41ca(uParam0);
}

Vector3 func_774(vector3 vParam0, float fParam3, float fParam4)
{
	vVar0 = { get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_819(vVar0, get_random_float_in_range(0f, fParam3)) };
	vVar0.f_2 = get_random_float_in_range(-fVar3, fVar3);
	return vParam0 + vVar0;
}

int func_775(int iParam0)
{
	Var0 = { func_393(iParam0, -1797584255) };
	if (!stat_id_get_int(&Var0, &uVar2))
	{
		return -1;
	}
	return uVar2;
}

void func_776(int iParam0, int iParam1)
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, iParam0, -1, -1, 255);
	Var31 = { func_393(iParam0, 1346578557) };
	if (!stat_id_get_int(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	set_bit(&iVar33, iParam1);
	if (!func_119(&Var0, 4) && func_820(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!stat_id_set_int(&Var31, iVar33, true))
	{
	}
	(*Global_1268861)[network_player_id_to_int()]->f_56[iParam0] = iVar33;
}

void func_777(int iParam0)
{
	func_821(iParam0);
}

void func_778(int iParam0)
{
	if (func_126(Global_1272030[iParam0]))
	{
		return;
	}
	func_822(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_32(&Var2, iVar0, iVar1, -1, 255);
	func_127((*Global_1272030)[iParam0]);
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_823(153786159) };
		stat_id_set_int(&Var34, iVar33, true);
		Var34 = { func_823(217123284) };
		stat_id_set_int(&Var34, Global_1296859->f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_823(945205875) };
		stat_id_set_int(&Var37, iVar36, true);
		Var37 = { func_823(890183498) };
		stat_id_set_int(&Var37, Global_1296859->f_21, true);
	}
}

void func_779(int iParam0)
{
	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_494(&Var0);
}

void func_780(struct<2> Param0)
{
	if (func_311(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_311(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_311(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_824(Param0, &Var0))
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

void func_781(int iParam0)
{
	Var0 = { func_393(iParam0, -1797584255) };
	_0x6a0184e904cdf25e(&Var0, 1);
}

void func_782(int iParam0, int iParam1, int iParam2)
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

bool func_783(var uParam0)
{
	return func_471(uParam0, 16);
}

int func_784()
{
	return -839369609;
}

char* func_785(int iParam0)
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

struct<15> func_786(int iParam0)
{
	Var0.f_10 = 255;
	_copy_memory(&(Var0.f_4), &Local_792, 5);
	Var0.f_9 = iParam0;
	Var0 = 182;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	return Var0;
}

void func_787(var uParam0)
{
	func_825(uParam0, func_527(4, 117));
}

bool func_788(int iParam0, int iParam1)
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

void func_789(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_790(vector3 vParam0, int iParam3, bool bParam4, bool bParam5)
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
			if (bParam4 && !func_486(iVar1, 1, 1))
			{
			}
			else if (!func_487(iVar1))
			{
			}
			else
			{
				iVar6 = get_player_ped(iVar4);
				if (bParam5)
				{
					if (((_is_ped_hogtied(iVar6) || _0x833f0053340ef413(iVar6)) || func_640(4, iVar1)) || is_ped_in_any_vehicle(iVar6, false))
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
					iVar0++;
					return iVar5;
				}
			}
		}
	}
}

int func_791()
{
	return Global_1051252->f_12;
}

char* func_792()
{
	return "unnamed";
}

int func_793(int iParam0)
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

bool func_794(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_826(36, iParam0);
}

int func_795(int iParam0)
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

bool func_796(int iParam0)
{
	if (func_827(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_828(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

float func_797(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_503(uParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_829(uParam0);
	}
	return func_503(uParam0);
}

float func_798(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_799()
{
	iVar0 = func_831(func_830());
	iVar1 = func_832(func_830());
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

bool func_800(int iParam0)
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

bool func_801()
{
	if (func_833())
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

void func_802(var uParam0, var uParam1)
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

bool func_803(bool bParam0, int iParam1, int iParam2)
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

int func_804(var uParam0)
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

void func_805(var uParam0)
{
	if (Global_1940258->f_32 == 0)
	{
		func_248(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940258->f_33)
		{
			if (does_entity_exist(&(Global_1940258->f_28[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1940258->f_28[iVar0])))
				{
					func_219(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_806(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_807(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_808(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_809(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_810(var uParam0)
{
	return uParam0->f_28;
}

int func_811(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_812(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_813()
{
	return 0;
}

void func_814(int iParam0)
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

void func_815(int iParam0, bool bParam1)
{
	func_834(iParam0, &iVar0, &iVar1);
	if (!func_835(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_836(iVar0, iVar1);
}

void func_816(int iParam0)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	vVar0.f_2 = Global_35.f_2;
	vVar0 = { vVar0 - Global_35 };
	if (func_221(vVar0))
	{
		vVar0 = { 1f, 0f, 0f };
	}
	vVar0 = { func_365(vVar0) };
	vVar0 = { Global_35 + vVar0 * Vector(160f, 160f, 160f) };
	_play_sound_from_position(func_837(iParam0), vVar0, func_706(iParam0), false, 0, true, 0);
}

void func_817(var uParam0)
{
	_0x0e53530d9b2db01d(uParam0, -1574878795, 1);
}

void func_818(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

Vector3 func_819(vector3 vParam0, float fParam3)
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

int func_820(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

void func_821(int iParam0)
{
	iVar0 = Global_1296859->f_21;
	Var1 = { func_393(iParam0, 1178968787) };
	if (!stat_id_set_int(&Var1, iVar0, true))
	{
	}
}

int func_822(int iParam0, int iParam1, int iParam2)
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

struct<2> func_823(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

bool func_824(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_690(Param0, &vVar0);
	if (func_838(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

void func_825(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	trigger_script_event(1, uParam0, 15, 41, &uParam1);
}

bool func_826(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_839(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_840())
	{
		return func_839(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_839(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_827(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_828(int iParam0)
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
		func_841(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_842(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

var func_829(var uParam0)
{
	return uParam0->f_27;
}

int func_830()
{
	return &Global_1902818;
}

int func_831(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_832(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

bool func_833()
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

void func_834(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_835(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_843(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_844(iParam0))
	{
		return false;
	}
	if (func_845(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_846(iParam0, 1)) || func_847(32768))
	{
		if (!func_846(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_848())
	{
		return false;
	}
	return true;
}

void func_836(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

char* func_837(int iParam0)
{
	return "CALL";
}

bool func_838(int iParam0, var uParam1, var uParam2)
{
	if (!func_849(iParam0))
	{
		return false;
	}
	if (func_850(iParam0, uParam1, &uVar0))
	{
		func_851(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_839(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_840()
{
	return Global_1102219->f_3672;
}

void func_841(int iParam0)
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
	func_842(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_842(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_843(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_844(int iParam0)
{
	if (func_846(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_845(int iParam0)
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

bool func_846(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_847(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_848()
{
	if (!func_18())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_849(int iParam0)
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

bool func_850(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_852(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_851(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_853(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_854(iVar0);
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
			uParam2->f_5 = func_855(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_856(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_857(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_858(iVar0);
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

int func_852(int iParam0)
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

int func_853(int iParam0, var uParam1)
{
	if (func_859(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_854(int iParam0)
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

int func_855(int iParam0)
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

int func_856(int iParam0)
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

int func_857(int iParam0)
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

int func_858(int iParam0)
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

bool func_859(int iParam0, var uParam1, var uParam2)
{
	if (func_860(iParam0, uParam1, &uVar0))
	{
		func_861(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_860(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_852(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_861(var uParam0, int iParam1, var uParam2)
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

