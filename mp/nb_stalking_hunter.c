void __EntryFunction__()
{
	fLocal_1074 = 1f;
	fLocal_1075 = 1f;
	iVar0 = iVar1075;
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
	network_register_host_broadcast_variables(&Local_13, 44, 42);
	func_10(_0xba24095ea96dfe17(&Local_13), 44, "m_hostData");
	network_register_player_broadcast_variables(&Local_57, 737, 43);
	func_11(_0x690806bc83bc8ca2(Local_57[0]), 737, "m_clientData");
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
	else if (func_17(Local_794.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_794.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_794.f_12), Local_794.f_9))
	{
		return true;
	}
	else if (Local_794.f_8 == 6)
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
	_copy_memory(&Local_794, uParam0, 5);
	iVar2 = func_31(&bVar1, Local_794.f_1, Local_794.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_794.f_12 = iVar2;
	iVar0 = Global_1198046->f_231.f_1066[iVar2]->f_5;
	Var3.f_10 = 1106247680;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_32(&Var3, Local_794.f_1, Local_794.f_2, Local_794.f_3, iVar0);
	Local_794.f_9 = { func_33(Var3.f_5, 8) };
	Local_794.f_14 = Var3.f_5;
	Local_794.f_15 = { Var3.f_11 };
	Local_794.f_18 = Var3.f_7;
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
	if (Local_794.f_8 <= 5)
	{
		func_51();
	}
	switch (Local_794.f_8)
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
}

void func_27()
{
	if (Local_794.f_12 != -1)
	{
		if (network_is_game_in_progress() && network_get_num_participants() <= 1)
		{
			func_63(Local_794.f_12, 4);
		}
	}
	func_64();
	if (func_65(64))
	{
		func_66(Local_13.f_6);
	}
	func_67();
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
	while (iVar0 < 3)
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
	func_68(&Var0, Var26.f_5);
	iVar25 = func_69(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_70(iVar25) };
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
			func_71(uParam0, iParam2);
			break;
		case 2:
			func_72(uParam0, iParam2);
			break;
		case 3:
			func_73(uParam0, iParam2);
			break;
		case 4:
			func_74(uParam0, iParam2);
			break;
		case 12:
			func_75(uParam0, iParam2);
			break;
		case 6:
			func_76(uParam0, iParam2, -1);
			break;
		case 7:
			func_77(uParam0, iParam2, iParam3);
			break;
		case 5:
			func_78(uParam0, iParam2);
			break;
		case 11:
			func_79(uParam0, iParam2);
			break;
		case 9:
			func_80(uParam0, iParam2, iParam3);
			break;
		case 10:
			func_81(uParam0, iParam2);
			break;
		case 8:
			func_82(uParam0, iParam2);
			break;
		case 13:
			func_83(uParam0, iParam2, iParam4);
			break;
		case 14:
			func_84(uParam0, iParam2, iParam3);
			break;
		case 15:
			func_85(uParam0, iParam2);
			break;
		case 16:
			func_86(uParam0, iParam2, iParam3);
			break;
		case 31:
			func_87(uParam0, iParam2);
			break;
		case 21:
			func_88(uParam0, iParam2);
			break;
		case 28:
			func_89(uParam0, iParam2);
			break;
		case 25:
			func_90(uParam0, iParam2);
			break;
		case 24:
			func_91(uParam0, iParam2);
			break;
		case 22:
			func_92(uParam0, iParam2);
			break;
		case 23:
			func_93(uParam0, iParam2);
			break;
		case 29:
			func_94(uParam0, iParam2);
			break;
		case 26:
			func_95(uParam0, iParam2);
			break;
		case 30:
			func_96(uParam0, iParam2);
			break;
		case 27:
			func_97(uParam0, iParam2);
			break;
		case 32:
			func_98(uParam0, iParam2, iParam3);
			break;
		case 33:
			func_99(uParam0, iParam2, iParam3);
			break;
		case 34:
			func_100(uParam0, iParam2);
			break;
		case 17:
			func_101(uParam0, iParam2);
			break;
		case 18:
			func_102(uParam0, iParam2);
			break;
		case 19:
			func_103(uParam0, iParam2);
			break;
		case 20:
			func_104(uParam0, iParam2);
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
			func_105(uParam0, iParam1, iParam2);
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
			Var0.f_1 = func_107(iParam0, &(Global_1071686->f_636), func_106(iParam1));
			break;
		case 3:
			Var0.f_1 = func_107(iParam0, &(Global_1071686->f_636.f_602), func_106(iParam1));
			break;
		case 4:
			Var0.f_1 = func_107(iParam0, &(Global_1071686->f_636.f_2104), func_106(iParam1));
			break;
		case 5:
			Var0.f_1 = func_107(iParam0, &(Global_1071686->f_636.f_12606), func_106(iParam1));
			break;
		case 6:
			Var0.f_1 = func_107(iParam0, &(Global_1071686->f_636.f_12908), func_106(iParam1));
			break;
		case 7:
			Var0.f_1 = func_107(iParam0, &(Global_1071686->f_636.f_15910), func_106(iParam1));
			break;
		case 8:
			Var0.f_1 = func_107(iParam0, &(Global_1071686->f_636.f_16512), func_106(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_108();
	}
	return Var0;
}

void func_34()
{
	func_109();
	func_110();
	func_111();
}

void func_35()
{
	reserve_network_mission_peds(3);
	func_113(0, func_112(0));
	func_116(0, func_114(0), func_115(0), 1);
	func_117(0, 16);
	func_113(1, func_112(1));
	func_119(1, func_118());
	func_121(1, func_120());
	func_116(1, func_114(1), func_115(1), 1);
	func_113(2, func_112(2));
	func_117(2, 1);
	func_116(2, func_114(2), func_115(2), 1);
}

void func_36()
{
}

void func_37()
{
}

bool func_38(struct<2> Param0)
{
	if (!func_122(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_106(Param0))
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
	iVar0 = Global_1198046->f_231.f_1066[Local_794.f_12]->f_5;
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_32(&Var1, Local_794.f_1, Local_794.f_2, Local_794.f_3, iVar0);
	if (!func_123(&Var1, 1))
	{
		func_124(1);
		return;
	}
	Local_13.f_6 = func_125(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar0)));
	func_126(256);
	if (func_127(Local_13.f_6))
	{
		func_128(5);
		func_124(6);
	}
	else
	{
		func_124(1);
	}
}

void func_44()
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, Local_794.f_1, Local_794.f_2, -1, 255);
	if (func_123(&Var0, 1))
	{
		func_124(2);
		return;
	}
	if (func_129(Var0, &bVar31))
	{
		clear_area(Local_794.f_15, Var0.f_10, 2442122);
		func_124(2);
	}
	else if (bVar31)
	{
		func_128(3);
		func_124(6);
	}
	if (!func_130(Local_13.f_3.f_2))
	{
		func_131(&(Local_13.f_3.f_2));
	}
	else if (func_132(Local_13.f_3.f_2) > 45000)
	{
		func_128(4);
		func_124(6);
	}
}

void func_45()
{
	if (func_133(1, 255))
	{
		if (!func_134(1))
		{
			if (func_135())
			{
				func_126(1);
			}
		}
		else
		{
			func_136();
			func_124(3);
		}
	}
}

void func_46()
{
	if (func_133(2, 255))
	{
		if (!func_134(2))
		{
			bVar0 = true;
			if (!func_137())
			{
				bVar0 = false;
			}
			if (!func_138())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_126(2);
			}
		}
		else
		{
			func_139();
			func_124(4);
		}
	}
}

void func_47()
{
	func_140();
	func_141();
	func_142();
	if (func_143() || Local_13.f_2 != 0)
	{
		func_144();
		func_124(5);
	}
}

void func_48()
{
	if (func_133(4, 255))
	{
		if (func_145())
		{
			func_126(4);
			func_124(6);
		}
	}
}

void func_49()
{
	if (!func_134(256))
	{
		return;
	}
	if (func_134(512))
	{
		if (func_65(64) && func_125(player_id()) == Local_13.f_6)
		{
			func_66(Local_13.f_6);
			func_146(64);
		}
	}
	else if (!func_65(64))
	{
		if (func_125(player_id()) == Local_13.f_6)
		{
			func_147(Local_13.f_6, 1, 1);
			func_148(64);
		}
	}
	else if (func_125(player_id()) != Local_13.f_6)
	{
		func_66(Local_13.f_6);
		func_146(64);
	}
}

void func_50()
{
	if (!Global_13)
	{
		if (func_133(8192, 255))
		{
			func_149(8192);
		}
	}
	else if (!func_133(8192, 255))
	{
		func_150(8192);
	}
}

void func_51()
{
	func_151();
	func_152();
}

void func_52()
{
	if (Local_13 == 6)
	{
		func_153(6);
	}
	else if (Local_13 > 0)
	{
		func_49();
		func_153(1);
	}
}

void func_53()
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

void func_54()
{
	if (!func_133(1, 255))
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
			func_150(1);
		}
		else
		{
			iVar1 = Global_1901947->f_236.f_68;
			if (!func_130(Local_794.f_11))
			{
				func_131(&(Local_794.f_11));
			}
			if (func_132(Local_794.f_11) >= iVar1)
			{
				func_153(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_156(&(Local_794.f_11));
		func_157();
		func_153(3);
	}
}

void func_55()
{
	if (!func_133(2, 255))
	{
		iVar0 = func_158();
		iVar1 = func_159();
		if (iVar0 && iVar1)
		{
			func_150(2);
		}
		else
		{
			iVar2 = Global_1901947->f_236.f_68;
			if (!func_130(Local_794.f_11))
			{
				func_131(&(Local_794.f_11));
			}
			if (func_160(Local_794.f_11) >= iVar2)
			{
				func_153(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_156(&(Local_794.f_11));
		func_161();
		func_162();
		func_163();
		func_164();
		func_153(4);
	}
}

void func_56()
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

void func_57()
{
	if (!func_133(4, 255))
	{
		if (func_172())
		{
			func_173();
			func_63(Local_794.f_12, 4);
			func_150(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_153(6);
	}
}

void func_58()
{
}

bool func_59()
{
	return (func_134(4) || (network_is_game_in_progress() && network_get_num_participants() <= 1));
}

void func_60()
{
}

void func_61()
{
	if (func_59())
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (network_does_network_id_exist(&(Local_13.f_31[iVar1])))
			{
				iVar0 = net_to_ped(&(Local_13.f_31[iVar1]));
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

void func_62()
{
	func_176(&(Local_794.f_246.f_13));
	if (_does_volume_exist(Local_794.f_246.f_11))
	{
		_delete_volume(Local_794.f_246.f_11);
	}
}

void func_63(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (func_177(iParam0, iVar0, iParam1))
	{
		return;
	}
	set_bit((*(*Global_1207784)[iVar0])[iParam0], iParam1);
}

void func_64()
{
	if (!func_65(1))
	{
		return;
	}
	if (func_65(4))
	{
		return;
	}
	if (!func_65(2))
	{
		iVar0 = -1;
	}
	else if (!func_65(8))
	{
		iVar0 = 2;
	}
	else if (func_65(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_65(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_178(Local_794.f_9, iVar0, 0, 255, 0);
	func_148(4);
	if (bVar1)
	{
		func_179(Local_794.f_1, Local_794.f_2);
		if (!func_65(256))
		{
			if (iVar0 == 1)
			{
				func_180(Local_794.f_18, 1);
			}
			else
			{
				func_180(Local_794.f_18, 0);
			}
			func_148(256);
		}
	}
	else
	{
		func_180(Local_794.f_18, 2);
	}
}

bool func_65(int iParam0)
{
	return func_181(Local_794.f_7, iParam0);
}

void func_66(int iParam0)
{
	if (!func_182(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	(*Global_1134390)[iVar0]->f_70 = iParam0;
	(*Global_1134390)[iVar0]->f_70.f_2 = 0;
}

void func_67()
{
	bVar0 = func_59();
	func_183(1, 0);
	iVar1 = func_184(1);
	iVar2 = func_184(0);
	iVar3 = func_184(2);
	if (network_has_control_of_entity(iVar1))
	{
		_0x78815fc52832b690(iVar1, 1);
		_0x58f7db5bd8fa2288(iVar1);
	}
	if (does_entity_exist(iVar1) && !is_entity_dead(iVar1))
	{
		if (!func_185(iVar1, iVar3, 0) && !func_186(65536))
		{
			_task_smart_flee_style_ped(iVar1, iVar2, 6, 0, -1082130432, -1, iVar3);
			set_blocking_of_non_temporary_events(iVar1, false);
		}
	}
	if (does_entity_exist(iVar2))
	{
		if (func_187() == 0)
		{
			set_ped_relationship_group_hash(iVar1, -1976316465);
			set_ped_relationship_group_hash(iVar2, -989642646);
			set_relationship_between_groups(6, -1976316465, -989642646);
			set_relationship_between_groups(6, 1862763509, -989642646);
			set_entity_can_be_damaged_by_relationship_group(iVar2, true, -1976316465);
			set_ped_config_flag(iVar2, 263, false);
		}
		func_188(0);
	}
	if (does_entity_exist(iVar3))
	{
		set_ped_config_flag(iVar3, 367, false);
		_0x06d26a96ca1bca75(iVar3, 3, 0f, 0);
		set_blocking_of_non_temporary_events(iVar3, false);
		task_go_to_whistle(iVar3, iVar1, 0);
	}
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		func_189(iVar4);
		if ((bVar0 && network_does_network_id_exist(&(Local_13.f_7.f_2[iVar4]))) && network_has_control_of_network_id(&(Local_13.f_7.f_2[iVar4])))
		{
			iVar5 = net_to_ent(&(Local_13.f_7.f_2[iVar4]));
			set_entity_as_no_longer_needed(&iVar5);
		}
		iVar4++;
	}
	func_190();
	func_191(Local_794.f_19.f_34);
	func_191(Local_794.f_19.f_35);
	if (_does_scenario_point_exist(Local_794.f_19.f_30))
	{
		_delete_scenario_point(Local_794.f_19.f_30);
	}
	if (_does_scenario_point_exist(Local_794.f_19.f_31))
	{
		_delete_scenario_point(Local_794.f_19.f_31);
	}
	clear_sequence_task(&(Local_794.f_19.f_32));
	clear_sequence_task(&(Local_794.f_19.f_33));
	_0xd1472aff30c103d6(1f);
}

void func_68(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_69(var uParam0)
{
	if (!func_192(uParam0))
	{
		return -1;
	}
	iVar0 = func_193(uParam0, uParam0->f_9);
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
			iVar0 = func_193(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_70(int iParam0)
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

void func_71(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 7;
	func_194(uParam0, iParam1);
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

void func_72(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = 277430601;
			uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = 1659133778;
			uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = 1296650927;
			uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = 2115437634;
			uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
			break;
		case 4:
			func_196(uParam0);
			uParam0->f_5 = 1098622970;
			uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
			break;
		case 5:
			func_196(uParam0);
			uParam0->f_5 = 393263596;
			uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
			break;
		case 6:
			func_196(uParam0);
			uParam0->f_5 = 189453630;
			uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
			break;
		case 7:
			func_196(uParam0);
			uParam0->f_5 = -98921343;
			uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
			break;
		case 8:
			func_196(uParam0);
			uParam0->f_5 = 6025033;
			uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
			break;
		case 9:
			func_196(uParam0);
			uParam0->f_5 = -1060299979;
			uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
			break;
		case 10:
			func_196(uParam0);
			uParam0->f_5 = 682088681;
			uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
			break;
		case 11:
			func_196(uParam0);
			uParam0->f_5 = 1705841922;
			uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
			break;
		case 12:
			func_196(uParam0);
			uParam0->f_5 = -301205165;
			uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
			break;
		case 13:
			func_196(uParam0);
			uParam0->f_5 = 1906160715;
			uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
			break;
		case 14:
			func_196(uParam0);
			uParam0->f_5 = -1129906020;
			uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
			break;
		case 15:
			func_196(uParam0);
			uParam0->f_5 = 1592980994;
			uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
			break;
		case 16:
			func_196(uParam0);
			uParam0->f_5 = 686459378;
			uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
			break;
		case 17:
			func_196(uParam0);
			uParam0->f_5 = -259262381;
			uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
			break;
		case 18:
			func_196(uParam0);
			uParam0->f_5 = 1289806844;
			uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
			break;
		case 19:
			func_196(uParam0);
			uParam0->f_5 = 347656238;
			uParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
			break;
	}
}

void func_73(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 8;
	uParam0->f_2 = 1;
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 5);
			uParam0->f_5 = 1454566440;
			uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
			break;
		case 1:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 5);
			uParam0->f_5 = 1141360338;
			uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
		case 2:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 5);
			uParam0->f_5 = 844768119;
			uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
		case 3:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			func_197(uParam0, 7);
			uParam0->f_5 = -1601993562;
			uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
			break;
		case 4:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 5);
			func_197(uParam0, 7);
			uParam0->f_5 = -901588956;
			uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
			break;
		case 5:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 5);
			func_197(uParam0, 7);
			uParam0->f_5 = 2129019244;
			uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
		case 6:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			func_197(uParam0, 6);
			uParam0->f_5 = 1227099802;
			uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
			break;
		case 7:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			func_197(uParam0, 6);
			uParam0->f_5 = -940471213;
			uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
			break;
		case 8:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			func_197(uParam0, 6);
			uParam0->f_5 = -700569364;
			uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
			break;
		case 9:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			uParam0->f_5 = 412376369;
			uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
		case 10:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			func_197(uParam0, 5);
			func_197(uParam0, 7);
			uParam0->f_5 = -364052317;
			uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
		case 11:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			uParam0->f_5 = -989186530;
			uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
			break;
		case 12:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			func_197(uParam0, 6);
			uParam0->f_5 = 333858683;
			uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
			break;
		case 13:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			uParam0->f_5 = -39511303;
			uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
			break;
		case 14:
			func_197(uParam0, 3);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			func_197(uParam0, 6);
			uParam0->f_5 = 813662381;
			uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
			break;
		case 15:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 5);
			func_197(uParam0, 7);
			uParam0->f_5 = -1114006686;
			uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
			break;
		case 16:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 3);
			func_197(uParam0, 5);
			func_197(uParam0, 7);
			uParam0->f_5 = 1049238845;
			uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
			break;
		case 17:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 3);
			func_197(uParam0, 5);
			func_197(uParam0, 7);
			uParam0->f_5 = 1363886783;
			uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
			break;
		case 18:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 5);
			uParam0->f_5 = -1215674354;
			uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
			break;
		case 19:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			uParam0->f_5 = 1902132155;
			uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
			break;
		case 20:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 5);
			uParam0->f_5 = 1661312774;
			uParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
			break;
	}
}

void func_74(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 2;
	func_195(uParam0);
	uParam0->f_15[0] = -2090512547;
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = 1382777618;
			uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = -2000681184;
			uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = 886884092;
			uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = -1277120723;
			uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
			break;
		case 4:
			func_196(uParam0);
			uParam0->f_5 = 1577436816;
			uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
			break;
		case 5:
			func_196(uParam0);
			uParam0->f_5 = -234749781;
			uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
			break;
		case 6:
			func_196(uParam0);
			uParam0->f_5 = -1607623039;
			uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
		case 7:
			func_196(uParam0);
			uParam0->f_5 = -1943295936;
			uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
			break;
		case 8:
			func_196(uParam0);
			uParam0->f_5 = -397730168;
			uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
			break;
		case 9:
			func_196(uParam0);
			uParam0->f_5 = -392659534;
			uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
			break;
		case 10:
			func_196(uParam0);
			uParam0->f_5 = 146267878;
			uParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
			break;
	}
}

void func_75(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = 1247886914;
			uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = 1926100410;
			uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = 603340011;
			uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = -1253915394;
			uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
			break;
		case 4:
			func_196(uParam0);
			uParam0->f_5 = 1281783573;
			uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
			break;
		case 5:
			func_196(uParam0);
			uParam0->f_5 = -1384936716;
			uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
			break;
		case 6:
			func_196(uParam0);
			uParam0->f_5 = 636669604;
			uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
			break;
		case 7:
			func_196(uParam0);
			uParam0->f_5 = 1410575087;
			uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
			break;
		case 8:
			func_196(uParam0);
			uParam0->f_5 = -736919321;
			uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
		case 9:
			func_196(uParam0);
			uParam0->f_5 = 1755496218;
			uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
			break;
		case 10:
			func_196(uParam0);
			uParam0->f_5 = -1810033095;
			uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
			break;
		case 11:
			func_196(uParam0);
			uParam0->f_5 = 99707271;
			uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
			break;
		case 12:
			func_196(uParam0);
			uParam0->f_5 = 2145033839;
			uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
			break;
		case 13:
			func_196(uParam0);
			uParam0->f_5 = -994111457;
			uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
			break;
		case 14:
			func_196(uParam0);
			uParam0->f_5 = 702836385;
			uParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
			break;
	}
}

void func_76(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 16;
	uParam0->f_1 = 2;
	uParam0->f_2 = 8;
	switch (iParam2)
	{
		case 0:
			func_198(uParam0, 0);
			func_198(uParam0, 1);
			func_198(uParam0, 4);
			func_198(uParam0, 5);
			break;
		case 1:
			func_198(uParam0, 2);
			func_198(uParam0, 3);
			func_198(uParam0, 6);
			func_198(uParam0, 7);
			func_199(uParam0, 2);
			break;
		default:
			func_195(uParam0);
			break;
	}
	switch (iParam1)
	{
		case 0:
			func_197(uParam0, 0);
			uParam0->f_5 = -88606612;
			uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
			break;
		case 1:
			func_197(uParam0, 1);
			uParam0->f_5 = -1507537085;
			uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
		case 2:
			func_197(uParam0, 0);
			uParam0->f_5 = 150331424;
			uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
			break;
		case 3:
			func_197(uParam0, 1);
			uParam0->f_5 = -74168995;
			uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
			break;
		case 4:
			func_197(uParam0, 0);
			uParam0->f_5 = -1303456769;
			uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
			break;
		case 5:
			func_197(uParam0, 1);
			uParam0->f_5 = 2080696176;
			uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
			break;
		case 6:
			func_197(uParam0, 0);
			uParam0->f_5 = -801880493;
			uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
			break;
		case 7:
			func_197(uParam0, 1);
			uParam0->f_5 = -2098877513;
			uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
			break;
		case 8:
			func_197(uParam0, 0);
			uParam0->f_5 = -985131289;
			uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
			break;
		case 9:
			func_197(uParam0, 1);
			uParam0->f_5 = 171385032;
			uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
			break;
		case 10:
			func_197(uParam0, 0);
			uParam0->f_5 = -690365399;
			uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
			break;
		case 11:
			func_197(uParam0, 1);
			uParam0->f_5 = -393773180;
			uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
		case 12:
			func_197(uParam0, 0);
			uParam0->f_5 = 1783045643;
			uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
			break;
		case 13:
			func_197(uParam0, 1);
			uParam0->f_5 = -1841828372;
			uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
			break;
		case 14:
			func_197(uParam0, 0);
			uParam0->f_5 = -1926357119;
			uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
			break;
		case 15:
			func_197(uParam0, 1);
			uParam0->f_5 = -1904926193;
			uParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
			break;
	}
}

void func_77(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 12;
	uParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 9);
			func_197(uParam0, 10);
			func_197(uParam0, 11);
			func_200(uParam0, iParam2);
			uParam0->f_5 = 666420762;
			uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
			break;
		case 1:
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 8);
			func_197(uParam0, 9);
			func_197(uParam0, 10);
			func_197(uParam0, 11);
			func_200(uParam0, iParam2);
			uParam0->f_5 = 1145423923;
			uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
			break;
		case 2:
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			func_197(uParam0, 6);
			func_197(uParam0, 9);
			func_197(uParam0, 10);
			func_197(uParam0, 11);
			func_200(uParam0, iParam2);
			uParam0->f_5 = -1176575305;
			uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
			break;
		case 3:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 9);
			func_197(uParam0, 10);
			func_197(uParam0, 11);
			func_200(uParam0, iParam2);
			uParam0->f_5 = -888961792;
			uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
			break;
		case 4:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 9);
			func_197(uParam0, 10);
			func_197(uParam0, 11);
			func_200(uParam0, iParam2);
			uParam0->f_5 = -1145898130;
			uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
			break;
		case 5:
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 4);
			func_197(uParam0, 7);
			func_197(uParam0, 8);
			func_197(uParam0, 9);
			func_197(uParam0, 10);
			func_197(uParam0, 11);
			func_200(uParam0, iParam2);
			uParam0->f_5 = -264936334;
			uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
			break;
		case 6:
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			func_197(uParam0, 6);
			func_197(uParam0, 7);
			func_197(uParam0, 9);
			func_197(uParam0, 10);
			func_197(uParam0, 11);
			func_200(uParam0, iParam2);
			uParam0->f_5 = -562839313;
			uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
			break;
		case 7:
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			func_197(uParam0, 6);
			func_197(uParam0, 9);
			func_197(uParam0, 10);
			func_197(uParam0, 11);
			func_200(uParam0, iParam2);
			uParam0->f_5 = -819926700;
			uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
			break;
		case 8:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 9);
			func_197(uParam0, 10);
			func_197(uParam0, 11);
			func_200(uParam0, iParam2);
			uParam0->f_5 = -100890882;
			uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
			break;
		case 9:
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			func_197(uParam0, 5);
			func_197(uParam0, 9);
			func_197(uParam0, 10);
			func_197(uParam0, 11);
			func_200(uParam0, iParam2);
			uParam0->f_5 = 373607510;
			uParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
			break;
	}
}

void func_78(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = -1562903685;
			uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = 442262250;
			uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = 2113001754;
			uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = 222101843;
			uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
			break;
		case 4:
			func_196(uParam0);
			uParam0->f_5 = 862535295;
			uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
		case 5:
			func_196(uParam0);
			uParam0->f_5 = 267494763;
			uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
			break;
		case 6:
			func_196(uParam0);
			uParam0->f_5 = 492498900;
			uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
			break;
		case 7:
			func_196(uParam0);
			uParam0->f_5 = -735417347;
			uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
		case 8:
			func_196(uParam0);
			uParam0->f_5 = 2000289900;
			uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
			break;
		case 9:
			func_196(uParam0);
			uParam0->f_5 = 1820563970;
			uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
			break;
		case 10:
			func_196(uParam0);
			uParam0->f_5 = 1501808210;
			uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
			break;
		case 11:
			func_196(uParam0);
			uParam0->f_5 = -1103422576;
			uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
			break;
		case 12:
			func_196(uParam0);
			uParam0->f_5 = -375108461;
			uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
			break;
		case 13:
			func_196(uParam0);
			uParam0->f_5 = 1074344160;
			uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
			break;
		case 14:
			func_196(uParam0);
			uParam0->f_5 = 1375567406;
			uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
			break;
		case 15:
			func_196(uParam0);
			uParam0->f_5 = 1695022182;
			uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
			break;
		case 16:
			func_196(uParam0);
			uParam0->f_5 = 1773241795;
			uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
			break;
		case 17:
			func_196(uParam0);
			uParam0->f_5 = 1650499101;
			uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
			break;
		case 18:
			func_196(uParam0);
			uParam0->f_5 = 149116609;
			uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
			break;
		case 19:
			func_196(uParam0);
			uParam0->f_5 = 1486166046;
			uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
			break;
		case 20:
			func_196(uParam0);
			uParam0->f_5 = 58739626;
			uParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
			break;
	}
}

void func_79(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	func_195(uParam0);
	func_199(uParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = -1657923088;
			uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = -1268232386;
			uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = 1926851120;
			uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = -66052340;
			uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
			break;
		case 4:
			func_196(uParam0);
			uParam0->f_5 = 1738334804;
			uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
			break;
		case 5:
			func_196(uParam0);
			uParam0->f_5 = 1009780912;
			uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
			break;
		case 6:
			func_196(uParam0);
			uParam0->f_5 = -1560771476;
			uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
			break;
		case 7:
			func_196(uParam0);
			uParam0->f_5 = 453813335;
			uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
			break;
		case 8:
			func_196(uParam0);
			uParam0->f_5 = 786924542;
			uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
		case 9:
			func_196(uParam0);
			uParam0->f_5 = 1656593925;
			uParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
			break;
	}
}

void func_80(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 4;
	uParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_201(uParam0, iParam2);
			uParam0->f_5 = 1323108111;
			uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
			break;
		case 1:
			func_201(uParam0, iParam2);
			uParam0->f_5 = -1505479200;
			uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
			break;
		case 2:
			func_201(uParam0, iParam2);
			uParam0->f_5 = -1283075997;
			uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
			break;
		case 3:
			func_201(uParam0, iParam2);
			uParam0->f_5 = -2100531475;
			uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
			break;
		case 4:
			func_201(uParam0, iParam2);
			uParam0->f_5 = 269617530;
			uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
			break;
		case 5:
			func_201(uParam0, iParam2);
			uParam0->f_5 = 1592829750;
			uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
			break;
		case 6:
			func_201(uParam0, iParam2);
			uParam0->f_5 = 1817985549;
			uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
		case 7:
			func_201(uParam0, iParam2);
			uParam0->f_5 = 1945424739;
			uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
		case 8:
			func_201(uParam0, iParam2);
			uParam0->f_5 = 1787314318;
			uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
		case 9:
			func_201(uParam0, iParam2);
			uParam0->f_5 = 542354442;
			uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
		case 10:
			func_201(uParam0, iParam2);
			uParam0->f_5 = 1510776727;
			uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
		case 11:
			func_201(uParam0, iParam2);
			uParam0->f_5 = -2017297662;
			uParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
			break;
	}
}

void func_81(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = -377638420;
			uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = 1308799438;
			uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = -1030922940;
			uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = 1750043358;
			uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
			break;
		case 4:
			func_196(uParam0);
			uParam0->f_5 = -1330609910;
			uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
			break;
		case 5:
			func_196(uParam0);
			uParam0->f_5 = 223942444;
			uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
			break;
		case 6:
			func_196(uParam0);
			uParam0->f_5 = 1067547121;
			uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
			break;
		case 7:
			func_196(uParam0);
			uParam0->f_5 = -450732096;
			uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
			break;
		case 8:
			func_196(uParam0);
			uParam0->f_5 = -1701940764;
			uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
			break;
		case 9:
			func_196(uParam0);
			uParam0->f_5 = 1584258975;
			uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
			break;
		case 10:
			func_196(uParam0);
			uParam0->f_5 = -98183174;
			uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
			break;
		case 11:
			func_196(uParam0);
			uParam0->f_5 = -90261849;
			uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
			break;
		case 12:
			func_196(uParam0);
			uParam0->f_5 = 754522971;
			uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
			break;
		case 13:
			func_196(uParam0);
			uParam0->f_5 = 974542513;
			uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
			break;
		case 14:
			func_196(uParam0);
			uParam0->f_5 = -790885273;
			uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
			break;
		case 15:
			func_196(uParam0);
			uParam0->f_5 = -1447045452;
			uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
			break;
		case 16:
			func_196(uParam0);
			uParam0->f_5 = -586115209;
			uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
			break;
		case 17:
			func_196(uParam0);
			uParam0->f_5 = 224941020;
			uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
			break;
		case 18:
			func_196(uParam0);
			uParam0->f_5 = -1179654578;
			uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
			break;
		case 19:
			func_196(uParam0);
			uParam0->f_5 = 1247197458;
			uParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
			break;
	}
}

void func_82(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 9;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_195(uParam0);
	uParam0->f_10 = 60f;
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = 974582605;
			uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = -964359125;
			uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = -700339292;
			uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = -470300912;
			uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
		case 4:
			func_196(uParam0);
			uParam0->f_5 = -241343909;
			uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
		case 5:
			func_196(uParam0);
			uParam0->f_5 = 1944053474;
			uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
		case 6:
			func_196(uParam0);
			uParam0->f_5 = -2120646059;
			uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
		case 7:
			func_196(uParam0);
			uParam0->f_5 = -1656440405;
			uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
		case 8:
			func_196(uParam0);
			uParam0->f_5 = -1422404207;
			uParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
			break;
	}
}

void func_83(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 1;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	func_195(uParam0);
	func_199(uParam0, 1);
	func_199(uParam0, 4);
	func_199(uParam0, 8);
	func_199(uParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = -1623035253;
			uParam0->f_11 = { func_202(func_125(iParam2)) };
			break;
	}
}

void func_84(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 5;
	uParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_203(uParam0, iParam2);
			uParam0->f_5 = -1957221189;
			uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
			break;
		case 1:
			func_203(uParam0, iParam2);
			uParam0->f_5 = 871956008;
			uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
			break;
		case 2:
			func_203(uParam0, iParam2);
			uParam0->f_5 = -718829908;
			uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
			break;
		case 3:
			func_203(uParam0, iParam2);
			uParam0->f_5 = -478076065;
			uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
			break;
		case 4:
			func_203(uParam0, iParam2);
			uParam0->f_5 = 158131441;
			uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
			break;
		case 5:
			func_203(uParam0, iParam2);
			uParam0->f_5 = 575051428;
			uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
			break;
		case 6:
			func_203(uParam0, iParam2);
			uParam0->f_5 = -861587350;
			uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
			break;
		case 7:
			func_203(uParam0, iParam2);
			uParam0->f_5 = -616671844;
			uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
			Jump @506; //curOff = 421
			func_203(uParam0, iParam2);
			uParam0->f_5 = -828875274;
			uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
			Jump @506; //curOff = 462
			func_203(uParam0, iParam2);
			uParam0->f_5 = -598017669;
			uParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
		}

void func_85(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = 2136361638;
			uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = 1948005426;
			uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = 462368629;
			uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = -172629291;
			uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
		case 4:
			func_196(uParam0);
			uParam0->f_5 = 1063777848;
			uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
			break;
		case 5:
			func_196(uParam0);
			uParam0->f_5 = -267241827;
			uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
		case 6:
			func_196(uParam0);
			uParam0->f_5 = -1183266453;
			uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
		case 7:
			func_196(uParam0);
			uParam0->f_5 = -877826604;
			uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
		case 8:
			func_196(uParam0);
			uParam0->f_5 = 1527533302;
			uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
		case 9:
			func_196(uParam0);
			uParam0->f_5 = -865586768;
			uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
			break;
		case 10:
			func_196(uParam0);
			uParam0->f_5 = 294379466;
			uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
			break;
		case 11:
			func_196(uParam0);
			uParam0->f_5 = 452588198;
			uParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
			break;
	}
}

void func_86(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 2;
	uParam0->f_2 = 4;
	func_204(uParam0, iParam2);
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

void func_87(var uParam0, int iParam1)
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
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -672003008;
			uParam0->f_11 = { 2153.785f, -1677.743f, 40.5666f };
			break;
		case 1:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -396317411;
			uParam0->f_11 = { 2188.584f, -1595.642f, 40.591f };
			break;
		case 2:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1239103346;
			uParam0->f_11 = { 2078.438f, -1694.907f, 40.6896f };
			break;
		case 3:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -889851344;
			uParam0->f_11 = { 2066.834f, -1767.304f, 40.1183f };
			break;
		case 4:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1582784618;
			uParam0->f_11 = { 2131.718f, -1865.66f, 40.0837f };
			break;
		case 5:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 407459900;
			uParam0->f_11 = { 2189.613f, -654.0466f, 40.5628f };
			break;
		case 6:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1359903346;
			uParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
		case 7:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1075501195;
			uParam0->f_11 = { 2212.435f, -599.6181f, 40.5628f };
			break;
		case 8:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -761049871;
			uParam0->f_11 = { 2273.341f, -693.9393f, 40.5628f };
			break;
		case 9:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 1397804618;
			uParam0->f_11 = { 2314.659f, -599.6119f, 40.5628f };
			break;
		case 10:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -636095416;
			uParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
		case 11:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -933474091;
			uParam0->f_11 = { 2800.13f, -727.0102f, 40.6116f };
			break;
		case 12:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1209520147;
			uParam0->f_11 = { 2726.128f, -662.6138f, 40.5283f };
			break;
		case 13:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1524528544;
			uParam0->f_11 = { 2710.138f, -534.5544f, 40.615f };
			break;
		case 14:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -449082741;
			uParam0->f_11 = { 2728.174f, -468.3862f, 40.7744f };
			break;
	}
}

void func_88(var uParam0, int iParam1)
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
			func_206(uParam0, iParam1);
			uParam0->f_5 = -42638554;
			uParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
		case 1:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -330841909;
			uParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
		case 2:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -637690825;
			uParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
		case 3:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 1210841234;
			uParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
		case 4:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -275624566;
			uParam0->f_11 = { -2023.4f, 662.6884f, 119.8702f };
			break;
		case 5:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -2051147289;
			uParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
		case 6:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -1760846718;
			uParam0->f_11 = { -2487.232f, 414.2487f, 148.2772f };
			break;
		case 7:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -1591562064;
			uParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
		case 8:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -1159724897;
			uParam0->f_11 = { -1377.945f, 265.2666f, 78.222f };
			break;
		case 9:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -114459335;
			uParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
		case 10:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 564350440;
			uParam0->f_11 = { -1091.188f, -37.3214f, 40.5256f };
			break;
		case 11:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -840522068;
			uParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
		case 12:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -2076667055;
			uParam0->f_11 = { -792.3045f, 647.1317f, 88.5497f };
			break;
	}
}

void func_89(var uParam0, int iParam1)
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
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			uParam0->f_5 = -666643000;
			uParam0->f_11 = { -2323.821f, -444.3168f, 143.2396f };
			break;
		case 1:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			uParam0->f_5 = -930743103;
			uParam0->f_11 = { -2387.781f, -333.0453f, 142.8896f };
			break;
		case 2:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			uParam0->f_5 = -4199612;
			uParam0->f_11 = { -2622.5f, -342.7303f, 141.5315f };
			break;
		case 3:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			uParam0->f_5 = -1480377528;
			uParam0->f_11 = { -2760.32f, -77.8632f, 151.8582f };
			break;
		case 4:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			uParam0->f_5 = -1817640794;
			uParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
		case 5:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			uParam0->f_5 = -915442079;
			uParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
		case 6:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			uParam0->f_5 = 1928422814;
			uParam0->f_11 = { 2257.893f, 256.7348f, 43.6559f };
			break;
		case 7:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			uParam0->f_5 = 1940620434;
			uParam0->f_11 = { 2324.826f, 895.6353f, 71.6451f };
			break;
		case 8:
			func_197(uParam0, 1);
			uParam0->f_5 = -665538457;
			uParam0->f_11 = { 2383.811f, 1084.155f, 85.9333f };
			break;
		case 9:
			func_197(uParam0, 1);
			uParam0->f_5 = 355243564;
			uParam0->f_11 = { 2398.53f, 773.5043f, 67.0099f };
			break;
	}
}

void func_90(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 326651247;
	func_195(uParam0);
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
			func_197(uParam0, 0);
			uParam0->f_5 = -1024453831;
			uParam0->f_11 = { -1856.609f, 1802.919f, 234.305f };
			break;
		case 1:
			func_197(uParam0, 0);
			uParam0->f_5 = -652787833;
			uParam0->f_11 = { -1821.152f, 1566.352f, 235.8068f };
			break;
		case 2:
			func_197(uParam0, 0);
			uParam0->f_5 = 230697180;
			uParam0->f_11 = { -2069.577f, 1812.812f, 246.0542f };
			break;
		case 3:
			func_197(uParam0, 0);
			uParam0->f_5 = -543699832;
			uParam0->f_11 = { -1932.007f, 2153.216f, 322.7221f };
			break;
		case 4:
			func_197(uParam0, 0);
			uParam0->f_5 = 894826503;
			uParam0->f_11 = { -1752.347f, 1951.369f, 264.5091f };
			break;
		case 5:
			func_197(uParam0, 1);
			uParam0->f_5 = 1666294228;
			uParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
		case 6:
			func_197(uParam0, 1);
			uParam0->f_5 = 1426851145;
			uParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
		case 7:
			func_197(uParam0, 1);
			uParam0->f_5 = -807339271;
			uParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
		case 8:
			func_197(uParam0, 1);
			uParam0->f_5 = -1050255868;
			uParam0->f_11 = { 1251.465f, 344.8225f, 92.1045f };
			break;
		case 9:
			func_197(uParam0, 1);
			uParam0->f_5 = -1406848126;
			uParam0->f_11 = { 913.0093f, 113.5476f, 116.3f };
			break;
	}
}

void func_91(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 11;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1848813677;
	func_195(uParam0);
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
			func_197(uParam0, 0);
			uParam0->f_5 = -1741150966;
			uParam0->f_11 = { -1352.639f, -2550.378f, 74.9777f };
			break;
		case 1:
			func_197(uParam0, 0);
			uParam0->f_5 = -796584541;
			uParam0->f_11 = { -1913.631f, -2213.565f, 42.0518f };
			break;
		case 2:
			func_197(uParam0, 0);
			uParam0->f_5 = 80182823;
			uParam0->f_11 = { -1745.884f, -2388.807f, 42.8205f };
			break;
		case 3:
			func_197(uParam0, 1);
			uParam0->f_5 = 1964620432;
			uParam0->f_11 = { -1593.106f, -2351.92f, 43.0229f };
			break;
		case 4:
			func_197(uParam0, 1);
			uParam0->f_5 = 1731665611;
			uParam0->f_11 = { -1800.651f, -1644.944f, 96.7288f };
			break;
		case 5:
			func_197(uParam0, 1);
			uParam0->f_5 = -1728544175;
			uParam0->f_11 = { -1628.216f, -1943.554f, 50.1671f };
			break;
		case 6:
			func_197(uParam0, 2);
			uParam0->f_5 = -1242537170;
			uParam0->f_11 = { 2443.712f, -19.2163f, 43.2151f };
			break;
		case 7:
			func_197(uParam0, 2);
			uParam0->f_5 = 2036591126;
			uParam0->f_11 = { 2715.91f, -128.7452f, 42.0147f };
			break;
		case 8:
			func_197(uParam0, 2);
			uParam0->f_5 = 197299925;
			uParam0->f_11 = { 2363.777f, 13.1458f, 41.3272f };
			break;
		case 9:
			func_197(uParam0, 2);
			uParam0->f_5 = 1291850063;
			uParam0->f_11 = { 2355.338f, -247.3491f, 41.5576f };
			break;
		case 10:
			func_197(uParam0, 2);
			uParam0->f_5 = 1599124976;
			uParam0->f_11 = { 2601.386f, -212.5256f, 43.7812f };
			break;
	}
}

void func_92(var uParam0, int iParam1)
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
			func_207(uParam0, iParam1);
			uParam0->f_5 = 980541174;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
		case 1:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 1220770713;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
		case 2:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 1322813407;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
		case 3:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 1552098100;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
		case 4:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 1916358304;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
		case 5:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -1363212564;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5896.217f, -3811.854f, -31.2514f };
			break;
		case 6:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 686685000;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6360.188f, -3401.399f, -14.7027f };
			break;
		case 7:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -1524698208;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6241.614f, -3430.465f, 1.465f };
			break;
		case 8:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -1804348854;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6091.54f, -3398.527f, 17.9157f };
			break;
		case 9:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -2035403073;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6054.187f, -3594.051f, -4.8637f };
			break;
		case 10:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 728964560;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5609.956f, -3781.126f, -24.15435f };
			break;
		case 11:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 765075998;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5664.643f, -3561.726f, -24.1565f };
			break;
		case 12:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 1070974613;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5811.027f, -3789.534f, -27.8079f };
			break;
		case 13:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -1088797396;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5906.508f, -3520.436f, -24.1555f };
			break;
		case 14:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -740987230;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5753.862f, -3302.776f, -24.1569f };
			break;
		case 15:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 2110034336;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -937.2829f, -1900.071f, 50.81326f };
			break;
		case 16:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -783796062;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -1060.57f, -1731.06f, 75.49813f };
			break;
		case 17:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -545106666;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1052.66f, -1784.942f, 62.46124f };
			break;
		case 18:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 379536207;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			break;
		case 19:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -992108595;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1331.61f, -1892.678f, 60.4174f };
			break;
	}
}

void func_93(var uParam0, int iParam1)
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
			func_208(uParam0, iParam1);
			uParam0->f_5 = 1750035473;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1486.613f, -2140.134f, 47.13319f };
			break;
		case 1:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -1499633496;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1400.093f, -2166.322f, 47.3376f };
			break;
		case 2:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 2019068959;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1229.798f, -2101.002f, 57.1906f };
			break;
		case 3:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 1010504677;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1036.581f, -2147.274f, 43.912f };
			break;
		case 4:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 1297331734;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1190.843f, -2218.737f, 57.2836f };
			break;
		case 5:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 980309385;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
		case 6:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 1451396569;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 1632.416f, -616.6262f, 42.8678f };
			break;
		case 7:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -1404978858;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2127.624f, -907.4355f, 40.6492f };
			break;
		case 8:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -1173302028;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2023.697f, -1017.159f, 42.3998f };
			break;
		case 9:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 2143543387;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
		case 10:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 1187325752;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2183.54f, -213.3573f, 45.5331f };
			break;
		case 11:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 201273773;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 2185.672f, -43.506f, 52.2188f };
			break;
		case 12:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 36249089;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
		case 13:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -1717449488;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 1832.42f, -317.352f, 45.708f };
			break;
		case 14:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -2014041707;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 1876.532f, -453.5455f, 43.2695f };
			break;
	}
}

void func_94(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 29257535;
	func_195(uParam0);
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
			func_197(uParam0, 3);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			uParam0->f_5 = -813726569;
			uParam0->f_11 = { -2685.817f, -2697.83f, 71.8905f };
			break;
		case 1:
			func_197(uParam0, 3);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			uParam0->f_5 = -991070207;
			uParam0->f_11 = { -2841.472f, -2845.188f, 86.3463f };
			break;
		case 2:
			func_197(uParam0, 3);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			uParam0->f_5 = 1385332783;
			uParam0->f_11 = { -3043.896f, -2154.732f, 59.9256f };
			break;
		case 3:
			func_197(uParam0, 3);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			uParam0->f_5 = 1394180521;
			uParam0->f_11 = { -2653.586f, -2143.511f, 75.962f };
			break;
		case 4:
			func_197(uParam0, 3);
			func_197(uParam0, 4);
			func_197(uParam0, 5);
			uParam0->f_5 = -1581141590;
			uParam0->f_11 = { -3228.791f, -2434.523f, 26.6737f };
			break;
		case 5:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			uParam0->f_5 = 1300807189;
			uParam0->f_11 = { -1177.594f, -748.8547f, 67.811f };
			break;
		case 6:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			uParam0->f_5 = -1226288496;
			uParam0->f_11 = { -1735.686f, -628.3361f, 145.1246f };
			break;
		case 7:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			uParam0->f_5 = -566411244;
			uParam0->f_11 = { -1572.939f, -328.771f, 160.6099f };
			break;
		case 8:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			uParam0->f_5 = 1931184426;
			uParam0->f_11 = { -1463.646f, -481.3466f, 129.9887f };
			break;
		case 9:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			uParam0->f_5 = 432310963;
			uParam0->f_11 = { -1525.983f, -916.2361f, 88.1698f };
			break;
	}
}

void func_95(var uParam0, int iParam1)
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
			func_209(uParam0, iParam1);
			uParam0->f_5 = 439376203;
			uParam0->f_11 = { 1200.338f, -568.1477f, 67.3878f };
			break;
		case 1:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -862568936;
			uParam0->f_11 = { 1238.102f, -546.7609f, 66.5485f };
			break;
		case 2:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -1361247578;
			uParam0->f_11 = { 1294.011f, -627.1522f, 58.9807f };
			break;
		case 3:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -518330591;
			uParam0->f_11 = { 1330.112f, -709.0779f, 64.7788f };
			break;
		case 4:
			func_209(uParam0, iParam1);
			uParam0->f_5 = 1666706329;
			uParam0->f_11 = { 1174.01f, -520.5736f, 69.0551f };
			break;
		case 5:
			func_209(uParam0, iParam1);
			uParam0->f_5 = 618479763;
			uParam0->f_11 = { 627.306f, -1038.205f, 42.0511f };
			break;
		case 6:
			func_209(uParam0, iParam1);
			uParam0->f_5 = 916579356;
			uParam0->f_11 = { 675.5718f, -1121.435f, 50.7543f };
			break;
		case 7:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -1544831314;
			uParam0->f_11 = { 799.3545f, -1190.935f, 42.9927f };
			break;
		case 8:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -1524645610;
			uParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
		case 9:
			func_209(uParam0, iParam1);
			uParam0->f_5 = 5765001;
			uParam0->f_11 = { 745.8436f, -1119.909f, 55.5229f };
			break;
		case 10:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -147337997;
			uParam0->f_11 = { -963.4839f, 2238.298f, 342.2684f };
			break;
		case 11:
			func_209(uParam0, iParam1);
			uParam0->f_5 = 46195721;
			uParam0->f_11 = { -1100.64f, 2080.921f, 365.7759f };
			break;
		case 12:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -41952889;
			uParam0->f_11 = { -1209.432f, 2421.632f, 309.8767f };
			break;
		case 13:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -280740592;
			uParam0->f_11 = { -1280.937f, 2445.134f, 305.019f };
			break;
		case 14:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -636874084;
			uParam0->f_11 = { -1340.472f, 2298.734f, 308.7317f };
			break;
		case 15:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -1240479072;
			uParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
		case 16:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -1479922155;
			uParam0->f_11 = { -1329.47f, 2266.865f, 309.1315f };
			break;
		case 17:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -1836252261;
			uParam0->f_11 = { -1202.59f, 2191.101f, 333.5445f };
			break;
		case 18:
			func_209(uParam0, iParam1);
			uParam0->f_5 = -2075236578;
			uParam0->f_11 = { -1171.686f, 2299.184f, 323.3623f };
			break;
		case 19:
			func_209(uParam0, iParam1);
			uParam0->f_5 = 1074322888;
			uParam0->f_11 = { -1394.394f, 2394.838f, 308.3089f };
			break;
	}
}

void func_96(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -2109368060;
	func_195(uParam0);
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
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			uParam0->f_5 = 1070019252;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 1:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			uParam0->f_5 = -510012600;
			uParam0->f_11 = { 2808.358f, 2290.307f, 155.8015f };
			break;
		case 2:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			uParam0->f_5 = -250768090;
			uParam0->f_11 = { 2324.25f, 2143.964f, 211.2929f };
			break;
		case 3:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			uParam0->f_5 = 1057891329;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 4:
			func_197(uParam0, 2);
			func_197(uParam0, 3);
			uParam0->f_5 = 863129034;
			uParam0->f_11 = { 2489.669f, 2265.437f, 175.6015f };
			break;
		case 5:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			uParam0->f_5 = -1100103111;
			uParam0->f_11 = { -957.019f, 1550.161f, 237.4414f };
			break;
		case 6:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			uParam0->f_5 = -383805560;
			uParam0->f_11 = { -1023.774f, 1561.614f, 237.4295f };
			break;
		case 7:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			uParam0->f_5 = -233104073;
			uParam0->f_11 = { -986.7993f, 1636.296f, 237.4295f };
			break;
		case 8:
			func_197(uParam0, 1);
			uParam0->f_5 = -604353467;
			uParam0->f_11 = { -874.8361f, 1499.423f, 245.7041f };
			break;
		case 9:
			func_197(uParam0, 1);
			uParam0->f_5 = 1641665016;
			uParam0->f_11 = { -919.2281f, 1482.48f, 245.1043f };
			break;
	}
}

void func_97(var uParam0, int iParam1)
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
			func_210(uParam0, iParam1);
			uParam0->f_5 = -1895828765;
			uParam0->f_11 = { 1649.598f, 1335.141f, 144.8913f };
			break;
		case 1:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 1786489311;
			uParam0->f_11 = { 1711.248f, 1464.318f, 146.3869f };
			break;
		case 2:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 1548029298;
			uParam0->f_11 = { 1569.279f, 1372.517f, 145.0414f };
			break;
		case 3:
			func_210(uParam0, iParam1);
			uParam0->f_5 = -718766281;
			uParam0->f_11 = { 1427.097f, 1701.411f, 197.8922f };
			break;
		case 4:
			func_210(uParam0, iParam1);
			uParam0->f_5 = -1212595111;
			uParam0->f_11 = { 1593.958f, 1646.358f, 143.5214f };
			break;
		case 5:
			func_210(uParam0, iParam1);
			uParam0->f_5 = -1283376151;
			uParam0->f_11 = { 1694.973f, 1740.234f, 188.4962f };
			break;
		case 6:
			func_210(uParam0, iParam1);
			uParam0->f_5 = -1525768444;
			uParam0->f_11 = { 1487.993f, 1066.912f, 182.3846f };
			break;
		case 7:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 249590434;
			uParam0->f_11 = { 1401.922f, 1325.553f, 163.9692f };
			break;
		case 8:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 9885199;
			uParam0->f_11 = { 1812.587f, 1193.924f, 215.9388f };
			break;
		case 9:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 1343123829;
			uParam0->f_11 = { 1940.486f, 1389.066f, 177.8712f };
			break;
		case 10:
			func_210(uParam0, iParam1);
			uParam0->f_5 = -2039750752;
			uParam0->f_11 = { 127.6135f, 1824.788f, 199.2989f };
			break;
		case 11:
			func_210(uParam0, iParam1);
			uParam0->f_5 = -2028740368;
			uParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
		case 12:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 1508771493;
			uParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
		case 13:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 1820404683;
			uParam0->f_11 = { 185.3962f, 1824.202f, 200.2588f };
			break;
		case 14:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 1332736425;
			uParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
		case 15:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 536875722;
			uParam0->f_11 = { 239.17f, 1914.014f, 204.8216f };
			break;
		case 16:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 795259287;
			uParam0->f_11 = { 512.8569f, 1926.074f, 199.1983f };
			break;
		case 17:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 20501824;
			uParam0->f_11 = { 325.2433f, 1902.083f, 200.069f };
			break;
		case 18:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 320272636;
			uParam0->f_11 = { 360.4333f, 1843.854f, 185.1447f };
			break;
		case 19:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 1135434088;
			uParam0->f_11 = { 506.2105f, 1883.957f, 201.9437f };
			break;
		case 20:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 1976647087;
			uParam0->f_11 = { 253.8551f, 1705.438f, 187.3591f };
			break;
		case 21:
			func_210(uParam0, iParam1);
			uParam0->f_5 = -2028969939;
			uParam0->f_11 = { 320.4962f, 1736.16f, 192.2878f };
			break;
		case 22:
			func_210(uParam0, iParam1);
			uParam0->f_5 = 2065778767;
			uParam0->f_11 = { -29.8717f, 1716.412f, 179.3378f };
			break;
		case 23:
			func_210(uParam0, iParam1);
			uParam0->f_5 = -1385354006;
			uParam0->f_11 = { -20.6945f, 1632.488f, 162.0277f };
			break;
		case 24:
			func_210(uParam0, iParam1);
			uParam0->f_5 = -1602546938;
			uParam0->f_11 = { 480.1275f, 2070.224f, 235.143f };
			break;
	}
}

void func_98(var uParam0, int iParam1, int iParam2)
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
	func_211(uParam0, iParam1, iParam2);
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

void func_99(var uParam0, int iParam1, int iParam2)
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
	func_212(uParam0, iParam1, iParam2);
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

void func_100(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -405566878;
	func_195(uParam0);
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
			func_197(uParam0, 0);
			break;
		case 1:
			uParam0->f_5 = 1765108824;
			uParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_197(uParam0, 0);
			break;
		case 2:
			uParam0->f_5 = 1620892455;
			uParam0->f_11 = { -142.6579f, 1231.128f, 164.5134f };
			func_197(uParam0, 0);
			break;
		case 3:
			uParam0->f_5 = 1380531840;
			uParam0->f_11 = { 411.3364f, 1329.074f, 180.39f };
			func_197(uParam0, 0);
			break;
		case 4:
			uParam0->f_5 = -1542790654;
			uParam0->f_11 = { 473.7581f, 1011.376f, 173.0766f };
			func_197(uParam0, 0);
			break;
		case 5:
			uParam0->f_5 = -1733556405;
			uParam0->f_11 = { -4209.333f, -2677.593f, 5.4303f };
			func_197(uParam0, 1);
			break;
		case 6:
			uParam0->f_5 = -478503693;
			uParam0->f_11 = { -4260.617f, -2412.103f, 23.6335f };
			func_197(uParam0, 1);
			break;
		case 7:
			uParam0->f_5 = -156122271;
			uParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_197(uParam0, 1);
			break;
		case 8:
			uParam0->f_5 = 1073468916;
			uParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_197(uParam0, 1);
			break;
		case 9:
			uParam0->f_5 = -249481152;
			uParam0->f_11 = { -4104.459f, -2061.22f, 4.8147f };
			func_197(uParam0, 1);
			break;
	}
}

void func_101(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = -206668292;
			uParam0->f_11 = { -2586.923f, -264.5349f, 161.6671f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = -2125063863;
			uParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = -2012469579;
			uParam0->f_11 = { -2196.576f, 468.8412f, 119.5676f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = 108841496;
			uParam0->f_11 = { -1637.2f, -1513.234f, 82.6688f };
			break;
		case 4:
			func_196(uParam0);
			uParam0->f_5 = 415657643;
			uParam0->f_11 = { -825.3087f, -1804.951f, 59.0313f };
			break;
		case 5:
			func_196(uParam0);
			uParam0->f_5 = 1133170861;
			uParam0->f_11 = { 1786.915f, 1588.926f, 167.4663f };
			break;
		case 6:
			func_196(uParam0);
			uParam0->f_5 = 2120009296;
			uParam0->f_11 = { 1959.894f, 1387.251f, 179.786f };
			break;
		case 7:
			func_196(uParam0);
			uParam0->f_5 = 689773522;
			uParam0->f_11 = { 637.5925f, 2099.455f, 222.0308f };
			break;
		case 8:
			func_196(uParam0);
			uParam0->f_5 = -258135345;
			uParam0->f_11 = { 1296.321f, 1161.685f, 150.1379f };
			break;
		case 9:
			func_196(uParam0);
			uParam0->f_5 = 2107537913;
			uParam0->f_11 = { -2100.247f, -1372.887f, 127.7423f };
			break;
		case 10:
			func_196(uParam0);
			uParam0->f_5 = -1477292384;
			uParam0->f_11 = { -2205.016f, -1584.145f, 148.3944f };
			break;
	}
}

void func_102(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = -274965770;
			uParam0->f_11 = { -1109.718f, 2104.703f, 361.4368f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = 1652259747;
			uParam0->f_11 = { -4300.761f, -3445.602f, 33.26603f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = -743720569;
			uParam0->f_11 = { -3895.461f, -2492.511f, -11.57848f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = -1200331578;
			uParam0->f_11 = { -2190.508f, -2867.223f, 25.40727f };
			break;
		case 4:
			func_196(uParam0);
			uParam0->f_5 = -1026512984;
			uParam0->f_11 = { -2083.893f, -1412.552f, 131.8581f };
			break;
		case 5:
			func_196(uParam0);
			uParam0->f_5 = -1017773316;
			uParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
		case 6:
			func_196(uParam0);
			uParam0->f_5 = 303940131;
			uParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
		case 7:
			func_196(uParam0);
			uParam0->f_5 = 1273284251;
			uParam0->f_11 = { 1548.084f, 1355.097f, 146.0557f };
			break;
		case 8:
			func_196(uParam0);
			uParam0->f_5 = -950817569;
			uParam0->f_11 = { 2652.989f, 1189.503f, 118.7033f };
			break;
		case 9:
			func_196(uParam0);
			uParam0->f_5 = -910888222;
			uParam0->f_11 = { 1509.102f, -2101.449f, 45.3134f };
			break;
	}
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 7;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_195(uParam0);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0);
			uParam0->f_5 = -803667719;
			uParam0->f_11 = { -1499.397f, -553.9472f, 131.8198f };
			break;
		case 1:
			func_196(uParam0);
			uParam0->f_5 = -822411587;
			uParam0->f_11 = { -1760.55f, 268.6243f, 118.6948f };
			break;
		case 2:
			func_196(uParam0);
			uParam0->f_5 = -1331314157;
			uParam0->f_11 = { -2762.128f, -158.0485f, 150.8974f };
			break;
		case 3:
			func_196(uParam0);
			uParam0->f_5 = -1580456864;
			uParam0->f_11 = { -719.5702f, -756.9052f, 49.81378f };
			break;
		case 4:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			uParam0->f_5 = -102469545;
			uParam0->f_11 = { 951.5258f, -1248.371f, 53.86922f };
			break;
		case 5:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			uParam0->f_5 = 70321392;
			uParam0->f_11 = { 1088.291f, -1418.599f, 55.54557f };
			break;
		case 6:
			func_197(uParam0, 0);
			func_197(uParam0, 2);
			uParam0->f_5 = 529087392;
			uParam0->f_11 = { 1289.693f, -1603.704f, 64.23989f };
			break;
	}
}

void func_104(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 8;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -418287183;
			uParam0->f_11 = { -2081.231f, -2774.597f, 77.5683f };
			break;
		case 1:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -1127015115;
			uParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
		case 2:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -1853700459;
			uParam0->f_11 = { -2925.017f, -2769.882f, 95.6414f };
			break;
		case 3:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 529883832;
			uParam0->f_11 = { -2648.38f, -2977.772f, 76.4237f };
			break;
		case 4:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -204230900;
			uParam0->f_11 = { -2323.921f, -2074.845f, 88.1254f };
			break;
		case 5:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -1938530367;
			uParam0->f_11 = { -3455.578f, -2264.7f, 4.7142f };
			break;
		case 6:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 1968802033;
			uParam0->f_11 = { -3581.218f, -3650.89f, -12.8679f };
			break;
		case 7:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -2098551789;
			uParam0->f_11 = { -5254.539f, -4050.37f, -3.6288f };
			break;
	}
}

void func_105(var uParam0, int iParam1, int iParam2)
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
	iVar0 = func_214(iParam1);
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
	*uParam0 = func_215(iVar0);
	uParam0->f_1 = 0;
	uParam0->f_6 = 2;
	func_199(uParam0, 32);
	if (iParam2 != -1)
	{
		uParam0->f_9 = func_217(func_216(iVar0), iParam2);
		uParam0->f_15[0] = func_218(func_216(iVar0), iParam2);
		uParam0->f_5 = func_219(iVar0, iParam2);
		uParam0->f_11 = { func_220(iVar0, iParam2) };
	}
}

int func_106(int iParam0)
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

int func_107(int iParam0, var uParam1, int iParam2)
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

struct<2> func_108()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_109()
{
	reserve_network_mission_peds(3);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Local_57[iVar1]->f_3.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_110()
{
	func_221(&(Local_794.f_115), &(Local_794.f_115.f_32));
	bVar2 = true;
	if (!func_222(&iVar1))
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (network_is_host_of_this_script())
		{
			Local_13.f_35.f_5[iVar0] = 0;
			Local_13.f_35.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			Local_57[iVar1]->f_9.f_9[iVar0] = 0;
		}
		iVar0++;
	}
	func_223(&(Local_794.f_115.f_78), 8, -1);
	if (bVar2)
	{
		func_223(&(Local_57[iVar1]->f_9), 8, -1);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			func_223(&(Local_57[iVar3]->f_9), 8, -1);
			iVar3++;
		}
	}
}

void func_111()
{
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_187())
			{
				case 0:
					return -1124266369;
				case 1:
					return -1963605336;
				default:
					break;
			}
			break;
		case 1:
			return -201677013;
		case 2:
			return func_224(997958153, 1);
	}
	return 0;
}

void func_113(int iParam0, int iParam1)
{
	Local_794.f_60.f_7[iParam0]->f_3 = iParam1;
}

Vector3 func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_225())
			{
				case 0:
					return -2600.339f, -200.348f, 172.4074f;
				case 1:
					return -2471.388f, 344.5066f, 155.2384f;
				case 2:
					return -2196.24f, 385.8229f, 142.956f;
				case 3:
					return -1598.706f, -1583.181f, 82.05007f;
				case 4:
					return -754.1541f, -1812.722f, 43.37779f;
				case 5:
					return 1789.223f, 1674.79f, 175.551f;
				case 6:
					return 1983.676f, 1325.422f, 193.4437f;
				case 7:
					return 583.4135f, 2036.525f, 209.769f;
				case 8:
					return 1319.929f, 1070.54f, 159.915f;
				case 9:
					return -2181.646f, -1349.82f, 131.5856f;
				case 10:
					return -2137.098f, -1568.92f, 146.1239f;
				default:
					break;
			}
			break;
		case 1:
			return Local_794.f_15;
		case 2:
			return Local_794.f_15;
	}
	return Local_794.f_15;
}

float func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_225())
			{
				case 0:
					return 290f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

void func_116(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	Local_794.f_60.f_7[iParam0]->f_6 = { vParam1 };
	Local_794.f_60.f_7[iParam0]->f_5 = fParam4;
	if (bParam5)
	{
		func_226(&(Local_794.f_60.f_7[iParam0]->f_2), 2);
	}
	else
	{
		func_227(&(Local_794.f_60.f_7[iParam0]->f_2), 2);
	}
}

void func_117(int iParam0, int iParam1)
{
	func_226(&(Local_794.f_60.f_7[iParam0]->f_2), iParam1);
}

int func_118()
{
	switch (func_187())
	{
		case 0:
			return 676615008;
		case 1:
			return 1049788380;
		default:
			break;
	}
	return 676615008;
}

void func_119(int iParam0, int iParam1)
{
	Local_794.f_60.f_7[iParam0]->f_4 = iParam1;
}

char* func_120()
{
	switch (func_187())
	{
		case 0:
			return "0454_A_M_M_GriRoughTravellers_01_WHITE_01";
		case 1:
			return "0589_A_M_M_Civ_White_13";
		default:
			break;
	}
	return "0454_A_M_M_GriRoughTravellers_01_WHITE_01";
}

void func_121(int iParam0, char* sParam1)
{
	Local_794.f_60.f_7[iParam0]->f_10 = sParam1;
}

bool func_122(int iParam0)
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

bool func_123(var uParam0, int iParam1)
{
	return func_228(uParam0->f_25, iParam1);
}

void func_124(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

int func_125(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

void func_126(int iParam0)
{
	if (!func_134(iParam0))
	{
		func_226(&(Local_13.f_1), iParam0);
	}
}

bool func_127(int iParam0)
{
	if (!func_182(iParam0))
	{
		return false;
	}
	return (func_229(iParam0) && (*Global_1131196)[iParam0]->f_18.f_1 != 0);
}

void func_128(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

bool func_129(struct<31> Param0, var uParam31)
{
	if (_0xf6a8a652a6b186cd(Local_13.f_3.f_1))
	{
		return true;
	}
	if (func_230(Local_794.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!_0xa4a4359320345b34(Local_13.f_3))
	{
		if (_0x397769175a7dbb30(Local_794.f_15, Param0.f_10, 0, 0, 0))
		{
			_0xfa15c9a320e707b0();
			*uParam31 = 1;
			return false;
		}
		func_231(&uVar1, Param0);
		Local_13.f_3 = _0x183c0b6cfeffcae4(&uVar1);
		func_150(128);
	}
	else if (!func_133(128, 255))
	{
		Local_13.f_3.f_1 = func_232(Param0);
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

bool func_130(int iParam0)
{
	return iParam0 != 0;
}

void func_131(var uParam0)
{
	*uParam0 = Global_1296859->f_21;
}

int func_132(int iParam0)
{
	return (Global_1296859->f_21 - iParam0) * 1000;
}

bool func_133(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	return func_181(&(Local_57[iParam1]), iParam0);
}

bool func_134(int iParam0)
{
	return func_181(Local_13.f_1, iParam0);
}

bool func_135()
{
	return true;
}

void func_136()
{
}

bool func_137()
{
	iVar0 = 1;
	bVar1 = false;
	if (bVar1)
	{
		func_233();
	}
	return iVar0;
}

bool func_138()
{
	if (!func_234(&bVar0))
	{
		if (bVar0)
		{
			func_233();
		}
		return false;
	}
	return true;
}

void func_139()
{
}

void func_140()
{
	if (!func_134(32) && func_235(32))
	{
		func_126(32);
	}
	if (!func_134(64) && func_235(64))
	{
		func_126(64);
	}
	if (!func_134(16) && func_236(16))
	{
		func_126(16);
	}
	if ((!func_134(2048) && func_235(2048)) && !func_235(4096))
	{
		func_126(2048);
	}
}

void func_141()
{
	if (!bVar0 && func_134(16))
	{
		func_128(1);
		return;
	}
	if (func_134(2048) && !func_235(4096))
	{
		func_128(6);
		return;
	}
}

void func_142()
{
}

bool func_143()
{
	if (func_237())
	{
		return true;
	}
	func_238();
	func_239();
	func_240();
	func_241();
	func_242();
	func_243();
	switch (Local_13.f_7)
	{
		case 0:
			func_244();
			break;
		case 1:
			func_245();
			break;
		case 2:
			func_246();
			break;
		case 3:
			func_247();
			break;
		case 4:
			func_248();
			break;
		case 5:
			func_249();
			break;
		case 6:
			func_250();
			break;
		case 7:
			func_251();
			break;
		case 8:
			func_252();
			break;
		case 9:
			func_253();
			break;
	}
	return false;
}

void func_144()
{
}

bool func_145()
{
	return true;
}

void func_146(int iParam0)
{
	if (func_65(iParam0))
	{
		func_227(&(Local_794.f_7), iParam0);
	}
}

int func_147(int iParam0, int iParam1, bool bParam2)
{
	if (!func_182(iParam0))
	{
		return 0;
	}
	iVar0 = func_254(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = player_id();
	(*Global_1134390)[iVar1]->f_70 = iParam0;
	(*Global_1134390)[iVar1]->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_255(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	else
	{
		func_256(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	return 1;
}

void func_148(int iParam0)
{
	if (!func_65(iParam0))
	{
		func_226(&(Local_794.f_7), iParam0);
	}
}

void func_149(int iParam0)
{
	if (func_181(&(Local_57[participant_id_to_int()]), iParam0))
	{
		func_227(Local_57[participant_id_to_int()], iParam0);
	}
}

void func_150(int iParam0)
{
	if (!func_133(iParam0, 255))
	{
		func_226(Local_57[participant_id_to_int()], iParam0);
	}
}

void func_151()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_257(iVar0);
				break;
			case -1315570756:
				func_258(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		func_259(iVar0);
		iVar0++;
	}
}

void func_152()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_794.f_269 >= 3)
		{
			Local_794.f_269 = 0;
		}
		func_261(func_260(Local_794.f_269));
		Local_794.f_269++;
		iVar0++;
	}
}

void func_153(int iParam0)
{
	if (Local_794.f_8 != iParam0)
	{
		Local_794.f_8 = iParam0;
	}
}

bool func_154()
{
	iVar0 = 1;
	if (!func_262())
	{
		iVar0 = 0;
	}
	if (!func_263("SCRIPT_RE@HUNTER@RIFLE"))
	{
		iVar0 = 0;
	}
	request_waypoint_recording(func_264());
	if (!get_is_waypoint_recording_loaded(func_264()))
	{
		iVar0 = 0;
	}
	if (has_model_loaded(func_112(0)))
	{
		if (!would_entity_be_occluded(func_112(0), func_114(0), true))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_155()
{
	bVar0 = false;
	if (!func_265())
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
	if (!_does_scenario_point_exist(Local_794.f_19.f_30))
	{
		Local_794.f_19.f_30 = func_266(func_114(0), func_115(0));
	}
	if (_does_scenario_point_exist(Local_794.f_19.f_30))
	{
		return 1;
	}
	return 0;
}

int func_159()
{
	return 1;
}

int func_160(int iParam0)
{
	return (iParam0 - Global_1296859->f_21) * 1000;
}

void func_161()
{
	if (!func_65(1))
	{
		func_267(Local_794.f_9);
		func_148(1);
	}
}

void func_162()
{
	func_268();
}

void func_163()
{
	func_269(30f, 30f, 1, 1077936128, 0);
	func_270(1065353216, 1065353216);
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = func_184(2);
	func_271(iVar0);
	if (network_has_control_of_entity(iVar1))
	{
		set_ped_relationship_group_hash(iVar1, -767591988);
		_task_use_scenario_point(iVar1, Local_794.f_19.f_30, 0, 0, false, true, 0, false, -1f, false);
		_0xeeed8fafec331a70(iVar1, get_entity_coords(iVar0, true, false), 1);
		_set_ped_damage(iVar1, 2);
		_set_ped_quality(iVar1, 2);
		set_ped_reset_flag(iVar1, 170, true);
		if (func_187() != 0)
		{
		}
		else
		{
			set_entity_max_health(iVar1, 400);
			_set_entity_health(iVar1, 400, 0);
			set_entity_can_be_damaged_by_relationship_group(iVar1, false, -1976316465);
			set_ped_config_flag(iVar1, 263, true);
		}
	}
	if (network_has_control_of_entity(iVar0))
	{
		set_ped_relationship_group_hash(iVar0, -1976316465);
		func_273(iVar0, func_272());
		func_274(iVar0, 379542007, -1, 0, 0, 1056964608, 1065353216, 0);
		func_274(iVar0, -183018591, -1, 1, 0, 1056964608, 1065353216, 0);
		func_275(iVar0, 100f, 1084227584, 1123024896, -1028390912, 1119092736);
		set_ped_combat_attributes(iVar0, 0, false);
		set_ped_combat_attributes(iVar0, 30, true);
		set_ped_combat_attributes(iVar0, 5, true);
		set_ped_using_action_mode(iVar0, true, -1, 0);
		_0x923583741dc87bce(iVar0, "Default");
		_0x89f5e7adecccb49c(iVar0, "stealth");
		_0x12990818c1d35886(iVar0, 0, 1065353216);
		_0xcb0b9506bc91e441(iVar0, 2);
		task_play_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(3), 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
		set_ped_config_flag(iVar0, 297, true);
		_0xed1c764997a86d5a(iVar0, iVar2);
	}
	if (network_has_control_of_entity(iVar2))
	{
		set_entity_coords(iVar2, get_offset_from_entity_in_world_coords(iVar0, -2f, -3f, 0f), true, false, true, true);
		set_ped_config_flag(iVar2, 367, true);
		set_ped_config_flag(iVar2, 297, true);
		set_ped_config_flag(iVar2, 319, true);
	}
	func_277(&(Local_794.f_115), iVar0, 0);
	func_278(&(Local_794.f_115), iVar0, iVar2, 0);
	func_279(&(Local_794.f_115), 1);
	func_280(1, 1);
	func_280(0, 1);
	func_281(1, 1);
	func_275(iVar0, 1114636288, 1084227584, 75f, -1028390912, 1119092736);
	func_282();
	func_283(0, -514316475);
	func_284(1, 0);
	_0x543dfe14be720027(player_id(), iVar1, 0);
	func_285(iVar1, func_264(), 1, 1061360239, 1053609165, 0, 0, 1);
	func_286();
	_0xd1472aff30c103d6(2.5f);
}

void func_164()
{
	func_287();
}

void func_165()
{
}

void func_166()
{
	if (func_230(Local_794.f_15))
	{
		return;
	}
	if (func_288())
	{
		return;
	}
	if (func_289(Local_794.f_1, 600))
	{
		fVar0 = vdist(get_entity_coords(player_ped_id(), false, false), Local_794.f_15);
		if (fVar0 < 200f)
		{
			func_150(4096);
		}
		else if (fVar0 < 400f)
		{
			func_149(4096);
			func_150(2048);
		}
		else
		{
			func_149(4096);
			func_149(2048);
		}
	}
}

void func_167()
{
	func_290();
	func_291();
	func_292();
	func_293();
	func_294();
}

void func_168()
{
	if (func_295())
	{
		func_150(8);
	}
	else
	{
		func_149(8);
	}
}

void func_169()
{
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = func_184(2);
	if (Local_13.f_7.f_21 != -1)
	{
		func_296(8192, 0);
	}
	else
	{
		func_297(8192);
	}
	if (Local_13.f_7 == 1)
	{
		if (Local_13.f_7.f_1 != 6 && Local_13.f_7.f_1 != 2)
		{
			if (!func_186(4))
			{
				if (!func_186(8))
				{
					if (!is_any_speech_playing(iVar0))
					{
						func_298(&(Local_794.f_115.f_32), get_entity_coords(iVar0, true, false), 15f);
					}
				}
			}
		}
	}
	if (!Local_13.f_7.f_11)
	{
		if (func_299(1))
		{
			func_298(&(Local_794.f_115.f_32), get_entity_coords(iVar1, true, false), 15f);
		}
	}
	if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
	{
		_0xc3abcfbc7d74afa5(iVar2, 6, 1);
	}
	func_300();
	func_301(Local_13.f_7);
	func_302(0);
	func_303();
	func_304();
	if (Local_794.f_19 > 0)
	{
		if (func_305(1, 255, 1) < 50f || Local_794.f_19 > 1)
		{
			func_306();
			if ((((Local_794.f_19.f_9 == 2 || Local_794.f_19.f_9 == 5) || Local_794.f_19.f_9 == 6) || Local_794.f_19 > 1) || func_305(1, 255, 1) < 25f)
			{
				func_307();
			}
			if ((Local_794.f_19 > 1 && (!func_186(1024) || Local_13.f_7.f_12)) && !func_308(iVar0))
			{
				func_309(1);
			}
		}
	}
	switch (Local_794.f_19)
	{
		case 0:
			func_310();
			break;
		case 1:
			func_311();
			break;
		case 2:
			func_312();
			break;
		case 3:
			func_313();
			break;
		case 4:
			func_314();
			break;
		case 5:
			func_315();
			break;
		case 6:
			func_316();
			break;
		case 7:
			func_317();
			break;
		case 8:
			func_318();
			break;
		case 9:
			func_319();
			break;
	}
}

void func_170()
{
	if (!func_133(8, 255))
	{
		func_150(16);
	}
	else
	{
		func_149(16);
	}
}

void func_171()
{
	Local_794.f_6 = -1;
	Local_794.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_794.f_5 = (Local_794.f_5 || Local_57[iVar0]) // PointerArith;
			Local_794.f_6 = (Local_794.f_6 && Local_57[iVar0]) // PointerArith;
		}
		iVar0++;
	}
}

bool func_172()
{
	return true;
}

void func_173()
{
	func_320();
}

void func_174(int iParam0)
{
	if (does_blip_exist(Local_794.f_60.f_7[iParam0]->f_1))
	{
		remove_blip(&(Local_794.f_60.f_7[iParam0]->f_1));
	}
}

bool func_175(int iParam0, int iParam1)
{
	return func_181(Local_794.f_60.f_7[iParam0]->f_2, iParam1);
}

void func_176(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

bool func_177(int iParam0, int iParam1, int iParam2)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	return is_bit_set((*Global_1207784)[iParam1][iParam0], iParam2);
}

void func_178(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_322(func_321(Param0));
	iVar1 = func_323(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_324(Param0, &Var2);
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

void func_179(int iParam0, int iParam1)
{
	iVar0 = func_325(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_326(iVar0);
}

void func_180(int iParam0, int iParam1)
{
	func_131(Global_1272030->f_3271[iParam0]);
	switch (iParam1)
	{
		case 0:
			Global_1272030->f_3275[iParam0] = func_327(iParam0);
			break;
		case 1:
			Global_1272030->f_3275[iParam0] = func_328(iParam0);
			break;
		case 2:
			Global_1272030->f_3275[iParam0] = func_329(iParam0);
			break;
	}
}

bool func_181(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_182(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_183(int iParam0, int iParam1)
{
	if (iParam0 != 1)
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			if (func_330(17, Local_794.f_4))
			{
				return false;
			}
			if (func_331(1, player_id(), 0, 1))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_184(int iParam0)
{
	return &(Local_794.f_60.f_7[iParam0]);
}

bool func_185(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1))
		{
			if (bParam2)
			{
				return (_is_ped_getting_into_a_mount_seat(iParam0, true) && get_mount(iParam0) == iParam1);
			}
			else
			{
				return (is_ped_on_mount(iParam0) && get_mount(iParam0) == iParam1);
			}
		}
	}
	return false;
}

bool func_186(int iParam0)
{
	return func_181(Local_794.f_19.f_38, iParam0);
}

int func_187()
{
	switch (func_225())
	{
		case 3:
		case 4:
		case 9:
		case 10:
			return 1;
		case 0:
		case 1:
		case 2:
		case 5:
		case 6:
		case 7:
		case 8:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_188(bool bParam0)
{
	iVar0 = func_184(0);
	if (!bParam0)
	{
		if (!func_186(67108864))
		{
			Var1 = { func_332(-113210209) };
			func_333(&Var1);
		}
	}
	else if (network_has_control_of_entity(iVar0))
	{
		func_334(&iVar0, 1, 1, 1);
	}
}

void func_189(int iParam0)
{
	if (!does_blip_exist(&(Local_794.f_19.f_2[iParam0])))
	{
		return;
	}
	remove_blip(Local_794.f_19.f_2[iParam0]);
}

void func_190()
{
	if (_does_volume_exist(Local_794.f_19.f_36))
	{
		_0x74c2b3dc0b294102(Local_794.f_19.f_36);
		func_191(Local_794.f_19.f_36);
	}
}

void func_191(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_192(var uParam0)
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

int func_193(var uParam0, int iParam1)
{
	iVar0 = func_335(iParam1);
	iVar1 = ((&Global_1198046->f_3[iParam1] + iVar0) - 1);
	if (&Global_1198046->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_336(iParam1)) - 1);
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

void func_194(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_337(uParam0);
			break;
		case 1:
			func_337(uParam0);
			break;
		case 2:
			func_337(uParam0);
			break;
		case 3:
			func_338(uParam0);
			break;
		case 4:
			func_337(uParam0);
			break;
		case 5:
			func_337(uParam0);
			break;
		case 6:
			func_338(uParam0);
			break;
		case 7:
			func_338(uParam0);
			break;
		case 8:
			func_338(uParam0);
			break;
		case 9:
			func_337(uParam0);
			break;
		default:
			func_196(uParam0);
			func_195(uParam0);
			break;
	}
}

void func_195(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_198(uParam0, iVar0);
		iVar0++;
	}
}

void func_196(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_197(uParam0, iVar0);
		iVar0++;
	}
}

void func_197(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_3), iParam1);
}

void func_198(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_4), iParam1);
}

void func_199(var uParam0, int iParam1)
{
	func_255(&(uParam0->f_25), iParam1);
}

void func_200(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_198(uParam0, 0);
			break;
		case 1:
		case 2:
			func_198(uParam0, 1);
			func_198(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_198(uParam0, 0);
			func_198(uParam0, 2);
			break;
		case 8:
			func_198(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_198(uParam0, 1);
			break;
		default:
			func_195(uParam0);
			break;
	}
}

void func_201(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_339(uParam0);
			break;
		case 1:
			func_340(uParam0);
			break;
		case 2:
			func_341(uParam0);
			break;
		case 3:
			func_342(uParam0);
			break;
		default:
			func_196(uParam0);
			func_195(uParam0);
			break;
	}
}

Vector3 func_202(int iParam0)
{
	if (!func_182(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1131196)[iParam0]->f_20;
}

void func_203(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_343(uParam0);
			break;
		case 1:
		case 2:
			func_344(uParam0);
			break;
		case 3:
		case 4:
			func_345(uParam0);
			break;
		default:
			func_195(uParam0);
			break;
	}
	func_196(uParam0);
}

void func_204(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_198(uParam0, 0);
			func_198(uParam0, 2);
			break;
		case 1:
			func_198(uParam0, 1);
			func_198(uParam0, 3);
			break;
		default:
			func_196(uParam0);
			func_195(uParam0);
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
			func_197(uParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_197(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_197(uParam0, 0);
			break;
		default:
			func_197(uParam0, 0);
			break;
	}
	func_195(uParam0);
}

void func_206(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_197(uParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_197(uParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_197(uParam0, 2);
			break;
		default:
			func_196(uParam0);
			break;
	}
	func_195(uParam0);
}

void func_207(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_197(uParam0, 0);
			func_198(uParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_197(uParam0, 1);
			func_198(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_197(uParam0, 2);
			func_198(uParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_197(uParam0, 3);
			func_198(uParam0, 0);
			break;
	}
}

void func_208(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_197(uParam0, 0);
			func_198(uParam0, 0);
			break;
		case 2:
			func_197(uParam0, 1);
			func_198(uParam0, 0);
			break;
		case 3:
		case 4:
			func_197(uParam0, 2);
			func_198(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_197(uParam0, 3);
			func_198(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_197(uParam0, 4);
			func_198(uParam0, 1);
			break;
	}
}

void func_209(var uParam0, int iParam1)
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
			func_197(uParam0, 3);
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
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			break;
		default:
			func_196(uParam0);
			break;
	}
	func_195(uParam0);
}

void func_210(var uParam0, int iParam1)
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
			func_197(uParam0, 3);
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
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			break;
		default:
			func_196(uParam0);
			break;
	}
	func_195(uParam0);
}

void func_211(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_198(uParam0, 0);
			func_197(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_198(uParam0, 1);
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			func_197(uParam0, 2);
			break;
		default:
			func_198(uParam0, 0);
			func_197(uParam0, 0);
			break;
	}
}

void func_212(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_198(uParam0, 0);
			func_197(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_198(uParam0, 1);
			func_197(uParam0, 0);
			func_197(uParam0, 1);
			break;
		default:
			func_198(uParam0, 0);
			func_197(uParam0, 0);
			break;
	}
}

void func_213(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_195(uParam0);
			func_196(uParam0);
			break;
		default:
			func_195(uParam0);
			func_196(uParam0);
			break;
	}
}

int func_214(int iParam0)
{
	return &(Global_1272030->f_3348[iParam0]);
}

int func_215(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (*Global_1257541)[iParam0]->f_3;
}

int func_216(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0];
}

var func_217(int iParam0, int iParam1)
{
	if (func_346(&Var1, iParam0) && func_347(&Var1, iParam1))
	{
		func_348(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_218(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_346(&Var1, iParam0) && func_347(&Var1, iParam1))
	{
		func_348(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_219(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_349(iParam0, iParam1);
	return &(Global_1257541->f_451[iVar0]);
}

Vector3 func_220(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_349(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_3;
}

void func_221(var uParam0, var uParam1)
{
	func_350(uParam1);
	func_351(uParam1);
	func_352(uParam1);
	func_353(uParam1, 65);
	func_354(uParam1, 15f);
	func_355(uParam1, 1);
	func_356(uParam1, 0);
	func_357(uParam0);
	func_351(uParam0);
	func_358(uParam0, 1);
	func_359(uParam0, 5000);
	func_360(uParam0, 0.5f);
	func_361(uParam0, 1);
	func_356(uParam0, 1);
	func_355(uParam0, 1);
	func_354(uParam0, 15f);
	func_362(uParam0, 1);
	func_363(uParam0, 1);
	func_353(uParam0, 30);
	func_364(uParam0, 1);
	func_365(uParam0, 1);
	func_366(uParam0, 1);
	func_367(uParam0, 1);
	func_368(uParam0, 1.25f);
}

bool func_222(int iParam0)
{
	*iParam0 = participant_id_to_int();
	if (!func_369(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

int func_223(var uParam0, int iParam1, int iParam2)
{
	if (!func_370(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_371(Var0.f_2, 10);
		iVar5 = iVar4 ^ -1;
		(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] && iVar5);
		if (iParam2 != 0)
		{
			(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] || (shift_left(iParam2, Var0.f_2) && iVar4));
		}
		return 1;
	}
	iVar4 = func_371(Var0.f_2, (32 - Var0.f_2));
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0] = (uParam0[Var0] && iVar5);
	(*uParam0)[Var0] = (uParam0[Var0] || (shift_left(iParam2, Var0.f_2) && iVar4));
	iVar4 = func_371(0, Var0.f_3 + 1);
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] && iVar5);
	(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] || (shift_right(iParam2, (32 - Var0.f_3)) && iVar4));
	return 1;
}

int func_224(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 997958153:
			return get_random_model_from_population_set(1468170991, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case 918497150:
			return get_random_model_from_population_set(-62570976, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case 356361174:
			return get_random_model_from_population_set(-165971473, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case -1771663379:
			return get_random_model_from_population_set(-2049218219, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case -311956671:
			return get_random_model_from_population_set(989061023, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		default:
			break;
	}
	return get_random_model_from_population_set(1468170991, 0, -1190799868, true, false, 0f, 0f, 0f);
}

int func_225()
{
	return Local_794.f_2;
}

void func_226(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_227(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_228(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_229(int iParam0)
{
	if (!func_182(iParam0))
	{
		return false;
	}
	iVar0 = func_372(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_230(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_231(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_232(struct<31> Param0)
{
	func_231(&uVar0, Param0);
	return _0x77a6e4ad0c496f81(&uVar0);
}

void func_233()
{
	func_128(2);
}

bool func_234(var uParam0)
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
	while (iVar2 < 3)
	{
		if (func_175(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_373(iVar2, uParam0, &bVar1))
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
			if (func_374(iVar2))
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

bool func_235(int iParam0)
{
	return func_181(Local_794.f_5, iParam0);
}

bool func_236(int iParam0)
{
	return func_181(Local_794.f_6, iParam0);
}

bool func_237()
{
	if (Local_13.f_7 == 10)
	{
		return true;
	}
	if (func_288())
	{
		iVar0 = func_375(1, Global_1901947->f_236.f_63, 1, 0);
		if (!_network_is_player_index_valid(iVar0))
		{
			return true;
		}
	}
	return false;
}

void func_238()
{
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	if (func_187() == 0)
	{
		if (Local_13.f_7.f_12)
		{
			if (!_0x3bdfcf25b58b0415(iVar0) || is_entity_dead(iVar1))
			{
				if (!is_entity_dead(iVar0))
				{
					func_376(iVar0, 1, 0);
				}
				Local_13.f_7.f_12 = 0;
				func_377(9);
			}
		}
		else if (_0x3bdfcf25b58b0415(iVar0) && _0xd0b7aeb56229d317(iVar1) == iVar0)
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			Local_13.f_7.f_12 = 1;
		}
	}
}

void func_239()
{
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	if (!func_186(65536) && !func_186(131072))
	{
		if (!func_186(32768))
		{
			if (func_187() != 0 && !is_entity_dead(iVar1))
			{
				if (has_entity_been_damaged_by_entity(iVar1, iVar0, 1, 1))
				{
					func_376(iVar1, 0, 0);
				}
			}
			if (func_378(iVar1, get_player_ped(player_id())) && Local_794.f_19 != 5)
			{
				func_379(32768);
				func_379(8192);
				if (!func_186(2048))
				{
					Local_13.f_7.f_17 = get_network_time_accurate();
					func_296(16, 1);
				}
			}
		}
	}
}

void func_240()
{
	if (Local_13.f_7 == 1)
	{
		iVar0 = func_184(1);
		iVar1 = func_375(1, 70f, 1, 0);
		if (func_380(iVar0) && _network_is_player_index_valid(iVar1))
		{
			if (Local_13.f_7.f_6 < 5)
			{
				if (func_382(func_381(Local_13.f_7.f_6), 1649931367) || func_382(func_381(Local_13.f_7.f_6), -139091549))
				{
					Local_13.f_7.f_6++;
				}
			}
		}
	}
}

void func_241()
{
	iVar0 = func_184(1);
	if (Local_13.f_7 == 1)
	{
		if (Local_13.f_7.f_1 != 6 && Local_13.f_7.f_1 != 2)
		{
			if (!func_186(4))
			{
				if (!func_186(8))
				{
					if (!is_any_speech_playing(iVar0))
					{
						if (func_383(Local_13.f_7.f_18, 1500) || (Local_13.f_7.f_18 == 0 && func_384(8192)))
						{
							Local_13.f_7.f_18 = 0;
							func_385(2, 0);
							func_379(8);
							func_379(16777216);
							func_379(32);
						}
					}
				}
				else if (Local_13.f_7.f_18 != 0)
				{
					if (func_383(Local_13.f_7.f_18, 2250) && func_384(8192))
					{
						Local_13.f_7.f_18 = 0;
						if (!func_186(4194304) && Local_13.f_7.f_8 < 3)
						{
							Local_13.f_7.f_8++;
							func_379(16777216);
							func_385(6, 0);
						}
						else
						{
							func_388(func_387(1, 59287, 0, 1, 0), 0, 26);
							func_188(0);
							func_296(32, 1);
						}
					}
				}
			}
		}
	}
}

void func_242()
{
	iVar0 = func_184(0);
	uVar1 = func_184(1);
	if (((((func_389(128) || is_entity_dead(iVar0)) || !does_entity_exist(iVar0)) || func_390(&uVar1)) || func_186(512)) || func_186(67108864))
	{
		return;
	}
	if (!Local_13.f_7.f_11)
	{
		if (func_299(0))
		{
			iVar2 = func_387(0, 59669, 0, 1, 0);
			if (_network_is_player_index_valid(iVar2) && func_305(1, network_get_participant_index(iVar2), 1) > 5f)
			{
				Local_13.f_7.f_11 = 1;
				func_392(0, 0, 0, 255);
			}
		}
	}
}

void func_243()
{
	if (Local_13.f_7.f_1 != 3 || func_186(16777216))
	{
		return;
	}
	if (!func_186(8))
	{
		iVar0 = func_387(1, 59669, 0, 1, 0);
		if (iVar0 != Local_13.f_7.f_22 && _network_is_player_index_valid(iVar0))
		{
			Local_13.f_7.f_22 = iVar0;
			iVar1 = func_393(1060437492, 0, 1);
			switch (iVar1)
			{
				case 0:
					Local_13.f_7.f_21 = 9;
					break;
				case 3:
					Local_13.f_7.f_21 = 10;
					break;
				case 2:
					Local_13.f_7.f_21 = 11;
					break;
				case 1:
					iVar1 = func_393(1f, 1, 0);
					if (iVar1 == 3)
					{
						Local_13.f_7.f_21 = 10;
					}
					else
					{
						Local_13.f_7.f_21 = 8;
					}
					break;
			}
		}
	}
	else
	{
		iVar0 = func_387(1, 60084, 30f, 1, 0);
		if (_network_is_player_index_valid(iVar0))
		{
			if (Local_13.f_7.f_18 == 0)
			{
				Local_13.f_7.f_22 = iVar0;
				iVar1 = func_393(1060437492, 0, 0);
				if (iVar1 == 1)
				{
					iVar1 = func_393(1f, 0, 0);
				}
				if (func_395())
				{
					switch (iVar1)
					{
						case 0:
							Local_13.f_7.f_21 = 21;
							break;
						case 3:
							Local_13.f_7.f_21 = 22;
							break;
						case 2:
							Local_13.f_7.f_21 = 23;
							break;
					}
				}
				else
				{
					switch (iVar1)
					{
						case 0:
							Local_13.f_7.f_21 = 18;
							break;
						case 3:
							Local_13.f_7.f_21 = 19;
							break;
						case 2:
							Local_13.f_7.f_21 = 20;
							break;
					}
				}
				Local_13.f_7.f_18 = get_network_time_accurate();
				Local_13.f_7.f_22 = 255;
			}
		}
	}
}

void func_244()
{
	if (func_389(512))
	{
		func_377(10);
	}
	if (func_389(1))
	{
		func_377(1);
	}
	if (func_389(4))
	{
		func_377(2);
	}
	if (func_389(8))
	{
		func_377(3);
	}
	if (func_389(2))
	{
		func_377(6);
	}
	if (func_389(16))
	{
		func_377(7);
	}
	if (func_389(64) && !Local_13.f_7.f_13)
	{
		Local_13.f_7.f_13 = 1;
		func_377(8);
	}
}

void func_245()
{
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	Local_13.f_7.f_10 = (func_396(iVar0, iVar1, 1, 85f, 0) || (func_186(16) && is_ped_active_in_scenario(iVar1, 1)));
	if (func_389(4))
	{
		func_377(2);
	}
	if (func_389(8))
	{
		func_377(3);
	}
	if (func_389(2))
	{
		func_377(6);
	}
	if (func_389(16))
	{
		func_377(7);
	}
	if (func_389(32))
	{
		func_377(4);
	}
	if (func_389(64) && !Local_13.f_7.f_13)
	{
		Local_13.f_7.f_13 = 1;
		func_377(8);
	}
}

void func_246()
{
	if (func_384(128))
	{
		Local_13.f_7.f_20 = get_network_time_accurate();
		func_377(5);
	}
}

void func_247()
{
	if (func_389(32))
	{
		func_377(4);
	}
	if (func_384(128))
	{
		Local_13.f_7.f_20 = get_network_time_accurate();
		func_377(5);
	}
	if (func_389(64) && !Local_13.f_7.f_13)
	{
		Local_13.f_7.f_13 = 1;
		func_377(8);
	}
}

void func_248()
{
	if (func_384(256))
	{
		func_377(9);
		Local_13.f_7.f_19 = get_network_time_accurate();
	}
	if (func_389(64) && !Local_13.f_7.f_13)
	{
		Local_13.f_7.f_13 = 1;
		func_377(8);
	}
}

void func_249()
{
	if (func_389(16))
	{
		Local_13.f_7.f_17 = get_network_time_accurate();
		func_377(7);
	}
	if (func_389(256))
	{
		func_377(9);
	}
	if (func_389(64) && !Local_13.f_7.f_13)
	{
		Local_13.f_7.f_13 = 1;
		func_377(8);
	}
}

void func_250()
{
	if (func_389(256) || func_384(4096))
	{
		func_377(9);
	}
	if (func_389(64) && !Local_13.f_7.f_13)
	{
		Local_13.f_7.f_13 = 1;
		func_377(8);
	}
}

void func_251()
{
	if (func_389(256))
	{
		func_377(9);
	}
	if (func_389(32))
	{
		func_377(4);
	}
	if (func_389(64) && !Local_13.f_7.f_13)
	{
		Local_13.f_7.f_13 = 1;
		func_377(8);
	}
}

void func_252()
{
	if (func_389(256) && func_186(524288))
	{
		func_377(9);
	}
	if (func_389(2))
	{
		func_377(6);
	}
}

void func_253()
{
	if (func_389(512))
	{
		func_377(10);
	}
	if (func_389(64) && !Local_13.f_7.f_13)
	{
		Local_13.f_7.f_13 = 1;
		func_377(8);
	}
}

int func_254(int iParam0)
{
	if (!func_182(iParam0))
	{
		return 0;
	}
	if (!func_229(iParam0))
	{
		return 0;
	}
	return (*Global_1131196)[iParam0]->f_18.f_1;
}

void func_255(var uParam0, int iParam1)
{
	func_397(uParam0, iParam1);
}

void func_256(var uParam0, int iParam1)
{
	func_398(uParam0, iParam1);
}

void func_257(int iParam0)
{
	Var0.f_10 = 255;
	get_event_data(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 182:
			if (func_399(&Var0, iParam0))
			{
				func_400(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_258(int iParam0)
{
}

void func_259(int iParam0)
{
}

int func_260(int iParam0)
{
	return iParam0;
}

void func_261(int iParam0)
{
	if (func_401(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (func_402(iParam0, func_260(iVar0)))
			{
				if (!func_403(iParam0, func_260(iVar0)))
				{
					if (func_183(iParam0, iVar0))
					{
						func_404(&(Local_794.f_269.f_9[iVar0]), 0, 0);
						func_405(iParam0, func_260(iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_262()
{
	switch (func_187())
	{
		case 0:
			_request_scenario_type(1102908795, 15, 0, 0);
			if (_has_scenario_type_loaded(1102908795, false))
			{
				return true;
			}
			break;
		case 1:
			_request_scenario_type(-1181541851, 15, 0, 0);
			if (_has_scenario_type_loaded(-1181541851, false))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_263(char* sParam0)
{
	request_anim_dict(sParam0);
	if (has_anim_dict_loaded(sParam0))
	{
		return true;
	}
	return false;
}

char* func_264()
{
	switch (func_225())
	{
		case 0:
			return "RE_StalkingHunter_Big_Valley_0";
		case 1:
			return "RE_StalkingHunter_Big_Valley_1";
		case 2:
			return "RE_StalkingHunter_Big_Valley_2";
		case 3:
			return "RE_StalkingHunter_Great_Plains_0";
		case 4:
			return "RE_StalkingHunter_Great_Plains_1";
		case 5:
			return "RE_StalkingHunter_Grizzlies_East_0";
		case 6:
			return "RE_StalkingHunter_Grizzlies_East_1";
		case 7:
			return "RE_StalkingHunter_Grizzlies_East_2";
		case 8:
			return "RE_StalkingHunter_Grizzlies_East_3";
		case 9:
			return "net_beat_stalking_hunter_tall_tree_0";
		case 10:
			return "net_beat_stalking_hunter_tall_tree_1";
		default:
			break;
	}
	return "";
}

bool func_265()
{
	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (is_bit_set(Local_794.f_60.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_406(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!is_bit_set(Local_794.f_60.f_4, iVar0))
				{
					request_model(iVar2, false);
					set_bit(&(Local_794.f_60.f_4), iVar0);
				}
				if (!has_model_loaded(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					set_bit(&(Local_794.f_60.f_3), iVar0);
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

var func_266(vector3 vParam0, float fParam3)
{
	switch (func_187())
	{
		case 0:
			return create_scenario_point(1102908795, vParam0, fParam3, 0, 0, 0);
		case 1:
			return create_scenario_point(-1181541851, vParam0, 0, 0, 0, 0);
		default:
			break;
	}
	return create_scenario_point(1102908795, vParam0, -57.94f, 0, 0, 0);
}

void func_267(struct<2> Param0)
{
	if (func_323(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_323(Param0)))
	{
		_0x99230691875fc218(func_321(Param0), func_323(Param0), Global_35);
	}
}

void func_268()
{
	if (!func_222(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_407(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_269(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (fParam0 >= fParam1)
	{
	}
	Local_794.f_246.f_2 = iParam2;
	Local_794.f_246.f_9 = fParam0;
	Local_794.f_246.f_10 = fParam1;
	Local_794.f_246.f_8 = iParam3;
	if (bParam4)
	{
		func_226(&(Local_794.f_246.f_12), 1);
	}
	else
	{
		func_227(&(Local_794.f_246.f_12), 1);
	}
}

void func_270(int iParam0, int iParam1)
{
	func_226(&(Local_794.f_246.f_12), 2);
	Local_794.f_246.f_7 = iParam1;
	Local_794.f_246.f_5 = iParam0;
}

int func_271(int iParam0)
{
	if (func_408(iParam0, &(Local_794.f_246.f_13)))
	{
		Local_794.f_246++;
		return 1;
	}
	return 0;
}

Vector3 func_272()
{
	switch (func_225())
	{
		case 0:
			return -2594.432f, -199.1454f, 172.0232f;
		case 1:
			return -2478.66f, 346.0224f, 154.0556f;
		case 2:
			return -2194.713f, 391.2226f, 140.5225f;
		case 3:
			return -1595.42f, -1579.488f, 82.2383f;
		case 4:
			return -761.2654f, -1810.883f, 46.58766f;
		case 5:
			return 1780.553f, 1667.592f, 176.4512f;
		case 6:
			return 1984.434f, 1330.207f, 193.295f;
		case 7:
			return 595.3819f, 2036.739f, 211.652f;
		case 8:
			return 1321.227f, 1080.102f, 160.5545f;
		case 9:
			return -2177.032f, -1345.304f, 132.7611f;
		case 10:
			return -2141.865f, -1573.724f, 148.1821f;
		default:
			break;
	}
	return 1780.553f, 1667.592f, 176.4512f;
}

void func_273(int iParam0, struct<2> Param1, var uParam3)
{
	if (!is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		set_entity_heading(iParam0, get_heading_from_vector_2d((Param1 - vVar0.x), (Param1.f_1 - vVar0.y)));
	}
}

int func_274(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_409(iParam3, 1);
	bVar1 = func_409(iParam3, 2);
	bVar2 = !func_409(iParam3, 4);
	bVar3 = func_409(iParam3, 8);
	bVar4 = !func_409(iParam3, 16);
	bVar5 = func_409(iParam3, 32);
	bVar6 = func_409(iParam3, 64);
	return func_410(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_275(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!is_ped_injured(iParam0))
	{
		set_ped_seeing_range(iParam0, fParam1);
		set_ped_visual_field_peripheral_range(iParam0, fParam2);
		set_ped_visual_field_center_angle(iParam0, (fParam3 / 2f));
		set_ped_visual_field_min_angle(iParam0, fParam4);
		set_ped_visual_field_max_angle(iParam0, fParam5);
	}
}

char* func_276(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BASE_KNEEL_HUNTER";
		case 1:
			return "ENTER_KNEEL_HUNTER";
		case 2:
			return "EXIT_KNEEL_HUNTER";
		case 3:
			return "IDLE_A_KNEEL_HUNTER";
		case 4:
			return "IDLE_B_KNEEL_HUNTER";
		case 5:
			return "INSPECT_KILL_HUNTER";
		case 6:
			return "FIRE_FAIL_HUNTER";
		case 7:
			return "KILL_REACT_HUNTER";
		case 8:
			return "SHUSH_BEHIND_HUNTER";
		case 9:
			return "SHUSH_FORWARD_HUNTER";
		case 10:
			return "SHUSH_LEFT_HUNTER";
		case 11:
			return "SHUSH_RIGHT_HUNTER";
		case 12:
			return "TRACKING_IDLE_A_HUNTER";
		case 13:
			return "TRACKING_IDLE_B_HUNTER";
		case 14:
			return "WALK";
		case 15:
			return "RUN";
		case 16:
			return "SPOT_HUNTER";
		case 17:
			return "IN_THE_WAY_FWD_HUNTER";
		case 18:
			return "SHUSH_WALKING_FWD_HUNTER";
		case 19:
			return "SHUSH_WALKING_LEFT_HUNTER";
		case 20:
			return "SHUSH_WALKING_RIGHT_HUNTER";
		case 21:
			return "SHUSH_KNEEL_FWD_LT_HUNTER";
		case 22:
			return "SHUSH_KNEEL_LT_HUNTER";
		case 23:
			return "SHUSH_KNEEL_RT_HUNTER";
		case 24:
			return "KNEEL_BRKOUT_B_HUNTER";
		case 25:
			return "KNEEL_BRKOUT_L_HUNTER";
		case 26:
			return "KNEEL_BRKOUT_R_HUNTER";
		case 27:
			return "KNEEL_BRKOUT_F_HUNTER";
		default:
			break;
	}
	return "";
}

void func_277(var uParam0, int iParam1, int iParam2)
{
	if (!is_ped_human(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			decor_set_bool(iParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			decor_set_bool(iParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			decor_set_bool(iParam1, "HorseOwnerTeamA", true);
			decor_set_bool(iParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

void func_278(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_277(uParam0, iParam1, iParam3);
	func_411(uParam0, iParam2, iParam3);
}

void func_279(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(uParam0, 65536);
	}
	else
	{
		func_227(uParam0, 65536);
	}
}

void func_280(int iParam0, bool bParam1)
{
	if (!func_222(&iVar0))
	{
		return;
	}
	if (bParam1)
	{
		func_412(&(Local_57[iVar0]->f_9), 7, iParam0);
	}
	else
	{
		func_413(&(Local_57[iVar0]->f_9), 7, iParam0);
	}
}

void func_281(int iParam0, bool bParam1)
{
	if (!func_222(&iVar0))
	{
		return;
	}
	if (bParam1)
	{
		func_412(&(Local_57[iVar0]->f_9), 6, iParam0);
	}
	else
	{
		func_413(&(Local_57[iVar0]->f_9), 6, iParam0);
	}
}

void func_282()
{
	vVar0 = { func_414(func_114(0), func_114(1)) };
	Local_794.f_19.f_34 = _create_volume_sphere(vVar0, 0f, 0f, 0f, 55f, 55f, 20f);
	Local_794.f_19.f_35 = _create_volume_sphere(vVar0, 0f, 0f, 0f, 75f, 75f, 20f);
	_0xb56d41a694e42e86(Local_794.f_19.f_34, 224, 0, 0, -1, -1, 10);
	_0x18262cafebb5fbe1(Local_794.f_19.f_34, 224, 0, 0, -1, -1, 10);
	func_415(Local_794.f_19.f_35, 0, 262144, 0);
	func_416(Local_794.f_19.f_35);
}

void func_283(int iParam0, int iParam1)
{
	Local_794.f_269.f_9[iParam0] = iParam1;
}

void func_284(int iParam0, int iParam1)
{
	set_bit(Local_794.f_269.f_1[iParam0], iParam1);
}

int func_285(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!get_is_waypoint_recording_loaded(sParam1))
	{
		return 0;
	}
	if (!waypoint_recording_get_num_points(sParam1, &iVar0))
	{
		return 0;
	}
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (iVar0 > 256)
	{
		return 0;
	}
	if (_0x29ba9f78321e5a6c(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, 0, 0, 0, iParam6, 0, iParam7))
	{
		return 1;
	}
	return 0;
}

void func_286()
{
	func_190();
	Local_794.f_19.f_36 = _create_volume_cylinder(func_417(), 0f, 0f, 0f, 3f, 3f, 3f);
	_0xb56d41a694e42e86(Local_794.f_19.f_36, 2490399, 0, 0, -1, -1, 10);
	_0x7c00cfc48a782dc0(Local_794.f_19.f_36, func_184(1), 0f, 2f, 0f, 0f, 0f, 0f, 2, 1);
}

void func_287()
{
	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_419(func_418(iVar0), &Var1))
		{
			if (does_entity_exist(Var1))
			{
				if (!network_has_control_of_entity(Var1))
				{
				}
				else
				{
					_0xbb1e41dd3d3c6250(Var1, "MpRandomEvent", 1);
					func_420(&(Local_794.f_115), Var1);
					func_421(func_418(iVar0));
				}
				iVar0++;
			}
		}
	}
}

bool func_288()
{
	return (func_134(32) || func_133(32, 255));
}

bool func_289(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_422(iParam0, 1178968787) };
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

void func_290()
{
	func_423();
	func_424();
}

void func_291()
{
	iVar2 = participant_id_to_int();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = network_is_participant_active(int_to_participantindex(iVar0));
		func_425(iVar0, bVar1, iVar2);
		func_426(iVar0, bVar1, iVar2);
		func_427(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_292()
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
	if (!func_222(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (network_is_in_mp_cutscene() != Local_794.f_60.f_54)
	{
		bVar8 = true;
		Local_794.f_60.f_54 = !Local_794.f_60.f_54;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_794.f_60.f_41 >= 3)
		{
			Local_794.f_60.f_41 = 0;
		}
		iVar0 = Local_794.f_60.f_41;
		Local_794.f_60.f_41++;
		iVar9 = func_428(iVar0);
		iVar1 = &Local_794.f_60.f_7[iVar0];
		bVar4 = !does_entity_exist(iVar1);
		if (func_175(iVar9, 4))
		{
			func_407(iVar9, iVar3, 1);
			bVar4 = !does_entity_exist(iVar1);
		}
		if (bVar4)
		{
			if (&Local_57[iVar3]->f_3.f_2[iVar0] > -1f)
			{
				Local_57[iVar3]->f_3.f_2[iVar0] = -1f;
			}
			if (is_bit_set(Local_794.f_60.f_5, iVar0))
			{
				clear_bit(&(Local_794.f_60.f_5), iVar0);
				clear_bit(&(Local_794.f_60.f_6), iVar0);
				clear_bit(&(Local_794.f_60.f_42), iVar0);
			}
		}
		else
		{
			bVar7 = func_429(iVar2, iVar1, iVar0, iVar3);
		}
		if (is_bit_set(Local_794.f_60.f_42, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				clear_bit(&(Local_794.f_60.f_42), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				set_bit(&(Local_794.f_60.f_42), iVar0);
			}
		}
		if (!bVar4)
		{
			if (is_any_speech_playing(iVar1))
			{
				if (!is_bit_set(Local_57[iVar3]->f_3.f_1, iVar0))
				{
					set_bit(&(Local_57[iVar3]->f_3.f_1), iVar0);
				}
				func_430(Local_794.f_60.f_43[iVar0]);
			}
		}
		if (is_bit_set(Local_57[iVar3]->f_3.f_1, iVar0))
		{
			if (bVar4 || (!is_any_speech_playing(iVar1) && (!func_431(Local_794.f_60.f_43[iVar0]) || func_432(Local_794.f_60.f_43[iVar0], 0.5f))))
			{
				func_433(Local_794.f_60.f_43[iVar0]);
				clear_bit(&(Local_57[iVar3]->f_3.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_175(iVar9, 256))
		{
			set_entity_visible_in_cutscene(iVar1, Local_794.f_60.f_54, 0, 256);
		}
		if (func_175(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (network_is_host_of_this_script())
					{
						if (func_434(iVar9))
						{
							if (!func_373(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_435(iVar9, 4);
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
				if (!func_434(iVar9))
				{
					_0x7043d0681285ba2d(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_794.f_60.f_42 != 0)
	{
		if (!func_436(1, 255))
		{
			func_437(1);
		}
	}
	else if (func_436(1, 255))
	{
		func_438(1);
	}
}

void func_293()
{
	Var5.f_6 = 1065353216;
	Var5.f_7 = 1065353216;
	Var5.f_8 = 1065353216;
	Var5.f_9 = 1;
	Var5.f_12 = 8;
	iVar20 = 255;
	if (!func_222(&iVar25))
	{
		return;
	}
	func_439();
	bVar27 = get_current_ped_weapon(player_ped_id(), &iVar26, true, 0, false);
	bVar28 = (bVar27 && is_ped_shooting(player_ped_id()));
	if ((bVar27 && bVar28) && _0x705be297eebdb95d(iVar26))
	{
		Local_794.f_115.f_64 = 0;
		Local_57[iVar25]->f_9.f_4 = get_network_time_accurate();
	}
	bVar29 = (bVar28 && (iVar26 == -1361787316 || iVar26 == 1698907612));
	bVar30 = false;
	while (iVar22 < 2)
	{
		if (Local_794.f_115.f_125 >= 3)
		{
			Local_794.f_115.f_125 = 0;
		}
		iVar1 = Local_794.f_115.f_125;
		Local_794.f_115.f_125++;
		iVar22++;
		iVar18 = func_418(iVar1);
		if (!func_440(iVar18))
		{
		}
		else if (func_441(iVar18, &Var5))
		{
			if (func_442(&Var5, iVar18))
			{
				if (func_443(&(Local_57[iVar25]->f_9), 8, iVar1))
				{
					func_412(&(Local_57[iVar25]->f_9), 8, iVar1);
				}
			}
			else if (!func_443(&(Local_57[iVar25]->f_9), 8, iVar1))
			{
				func_413(&(Local_57[iVar25]->f_9), 8, iVar1);
			}
			if (!does_entity_exist(Var5))
			{
			}
			else
			{
				func_444(iVar18);
				if (func_445(iVar18))
				{
					if (func_446(iVar18))
					{
						if (!func_447(iVar18))
						{
							func_448(iVar18);
						}
					}
					if (func_449(iVar18))
					{
						func_450(iVar18);
					}
				}
				else
				{
					if (func_451(iVar18))
					{
						if ((does_entity_exist(Var5) && !is_entity_dead(Var5)) && network_has_control_of_entity(Var5))
						{
							set_ped_reset_flag(Var5, 42, true);
						}
					}
					if (!func_452(Var5))
					{
						if (network_has_control_of_entity(Var5))
						{
							func_420(&(Local_794.f_115), Var5);
						}
					}
					if (!func_453(iVar18, 255))
					{
						bVar2 = false;
						bVar3 = false;
						if (func_454(iVar18))
						{
							bVar2 = true;
							bVar3 = true;
						}
						else if (func_455(iVar18, iVar25))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_456(Var5, Var5.f_1, &(Local_794.f_115), &iVar4, 0, Var5.f_2))
						{
							switch (iVar4)
							{
								case 256:
									if (!is_bit_set(Local_794.f_115.f_64, iVar18))
									{
										bVar2 = true;
										set_bit(&(Local_794.f_115.f_64), iVar18);
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
						else if ((bVar29 && Var5.f_2 <= 1.25f) && func_457(player_ped_id(), Var5, 1060437492) == 0)
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else
						{
							if (!bVar2)
							{
								if (func_458(iVar18, &Var5, iVar25))
								{
									iVar4 = 4;
									bVar2 = true;
									set_bit(&(Local_794.f_115.f_64), iVar18);
								}
							}
							if (!bVar2)
							{
								bVar30 = true;
								if (!func_459(iVar18) || !_0x83d43f0fd5276e4d(Var5, 1))
								{
									bVar30 = false;
									if (network_has_control_of_entity(Var5))
									{
										_0xbb1e41dd3d3c6250(Var5, "MpRandomEvent", 1);
										func_421(iVar18);
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
														if (func_460(iVar18, &Var5))
														{
															iVar4 = 256;
															bVar2 = true;
															set_bit(&(Local_794.f_115.f_64), iVar18);
														}
														break;
													case -1507090758:
													case -1102089407:
														if (!Local_794.f_115.f_2 & 4 != 0)
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
									if (func_461(iVar18, &Var5, iVar25))
									{
										iVar4 = 256;
										bVar2 = true;
										set_bit(&(Local_794.f_115.f_64), iVar18);
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_462(iVar18, iVar4, bVar3))
							{
							}
							else
							{
								if (func_443(&(Local_57[iVar25]->f_9), 8, iVar1))
								{
									func_412(&(Local_57[iVar25]->f_9), 8, iVar1);
								}
								func_463(iVar18, 1);
								if (func_464(iVar18))
								{
									if (!func_465(iVar18, 255))
									{
										if (network_has_control_of_entity(Var5))
										{
											if (!func_466(iVar18))
											{
											}
											else
											{
												func_467(iVar18);
												func_468(iVar18);
												Jump @1377; //curOff = 1187
												if (func_469(iVar18))
												{
												}
												else if (iVar23 < 4)
												{
													if (network_has_control_of_entity(Var5))
													{
														iVar24 = 0;
														while (iVar24 < 4)
														{
															if (&Local_794.f_115.f_127[iVar18] >= 32)
															{
																iVar0 = 0;
																Local_794.f_115.f_127[iVar18] = 0;
															}
															else
															{
																iVar0 = &Local_794.f_115.f_127[iVar18];
																Local_794.f_115.f_127[iVar18] = &Local_794.f_115.f_127[iVar18] + 1;
															}
															iVar24++;
															if (func_470(iVar0, &uVar21, &iVar20, &uVar19))
															{
																if (!func_471(iVar18, iVar20))
																{
																	if (func_453(iVar18, iVar0))
																	{
																		if (!func_472(iVar18, uVar21, iVar20, uVar19))
																		{
																		}
																		else
																		{
																			func_473(iVar18, iVar20);
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

void func_294()
{
	fVar0 = func_474();
	if (Local_794.f_246.f_4)
	{
		return;
	}
	if (!func_222(&iVar1))
	{
		return;
	}
	if (func_181(Local_57[iVar1]->f_22, 1))
	{
		Local_794.f_246.f_4 = 1;
		return;
	}
	iVar2 = get_player_ped(player_id());
	if (func_475(iVar2, 0))
	{
		return;
	}
	fVar3 = vdist(get_entity_coords(iVar2, true, false), Local_794.f_15);
	fVar4 = Local_794.f_246.f_9;
	fVar5 = Local_794.f_246.f_10;
	if (func_181(Local_794.f_246.f_12, 2))
	{
		bVar6 = false;
		fVar7 = get_entity_speed(iVar2);
		fVar8 = (fVar0 * (1f / Local_794.f_246.f_7));
		if (fVar7 > 0f)
		{
			if (func_476(Local_794.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_794.f_246.f_6 < 1f)
			{
				Local_794.f_246.f_6 = (Local_794.f_246.f_6 + fVar8);
				if (Local_794.f_246.f_6 > 1f)
				{
					Local_794.f_246.f_6 = 1f;
				}
			}
		}
		else if (Local_794.f_246.f_6 > 0f)
		{
			Local_794.f_246.f_6 = (Local_794.f_246.f_6 - fVar8);
			if (Local_794.f_246.f_6 < 0f)
			{
				Local_794.f_246.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_794.f_246.f_5) * Local_794.f_246.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_226(&(Local_57[iVar1]->f_22), 1);
	}
	else if (_does_volume_exist(Local_794.f_246.f_11) && is_entity_in_volume(iVar2, Local_794.f_246.f_11, false, 0))
	{
		func_226(&(Local_57[iVar1]->f_22), 1);
	}
	else if (Local_794.f_246 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 1)
		{
			func_477(Local_794.f_246.f_13[iVar10], fVar5, 1082130432, 0, 0, 0, 0, 1);
			iVar10++;
		}
		if (func_478(&(Local_794.f_246.f_13), Local_794.f_246, Local_794.f_246.f_8))
		{
			func_226(&(Local_57[iVar1]->f_22), 1);
		}
	}
	if (func_181(Local_57[iVar1]->f_22, 1))
	{
		Local_794.f_246.f_4 = 1;
	}
}

bool func_295()
{
	bVar0 = true;
	if (bVar0 && !_unlock_is_unlocked(Local_794.f_14))
	{
		return false;
	}
	if (func_479())
	{
		return false;
	}
	if (func_480(get_player_index()))
	{
		return false;
	}
	return true;
}

void func_296(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	func_226(&(Local_57[participant_id_to_int()]->f_1.f_1), iParam0);
}

void func_297(int iParam0)
{
	func_227(&(Local_57[participant_id_to_int()]->f_1.f_1), iParam0);
}

int func_298(var uParam0, vector3 vParam1, float fParam4)
{
	if (vdist(Global_35, vParam1) < fParam4)
	{
		if (!*uParam0 & 4 != 0)
		{
			func_356(uParam0, 1);
			return 1;
		}
	}
	else if (*uParam0 & 4 != 0)
	{
		func_356(uParam0, 0);
		return 1;
	}
	return 0;
}

bool func_299(int iParam0)
{
	return !func_443(&(Local_794.f_115.f_78), 8, iParam0);
}

void func_300()
{
	Local_794.f_19.f_37 = -1;
	Local_794.f_19.f_38 = 0;
	Local_794.f_19.f_39 = -1;
	Local_794.f_19.f_40 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_794.f_19.f_37 = (Local_794.f_19.f_37 && Local_57[iVar0]->f_1);
			Local_794.f_19.f_38 = (Local_794.f_19.f_38 || Local_57[iVar0]->f_1);
			Local_794.f_19.f_39 = (Local_794.f_19.f_39 && Local_57[iVar0]->f_1.f_1);
			Local_794.f_19.f_40 = (Local_794.f_19.f_40 || Local_57[iVar0]->f_1.f_1);
		}
		if (network_is_host_of_this_script())
		{
		}
		iVar0++;
	}
}

void func_301(int iParam0)
{
	if (Local_794.f_19 != iParam0)
	{
		Local_794.f_19 = iParam0;
	}
}

void func_302(bool bParam0)
{
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	if ((!func_186(512) && !func_186(4194304)) && !func_186(524288))
	{
		if ((!func_186(64) && func_481(iVar0, iVar1, 1, 1) < (func_482() + 8f)) && Local_13.f_7.f_1 == 3)
		{
			func_379(64);
		}
		if ((func_186(64) && !func_395()) || bParam0)
		{
			if (!func_186(16))
			{
				if (func_481(iVar0, iVar1, 1, 1) < func_482() || bParam0)
				{
					if (network_has_control_of_entity(iVar1))
					{
						if (_0x9c54041bb66bcf9e(iVar1, Local_794.f_19.f_30) || !func_483(iVar1, 1435919172))
						{
							set_ped_can_be_targetted(iVar1, true);
							if (!_does_scenario_point_exist(Local_794.f_19.f_31))
							{
								Local_794.f_19.f_31 = func_266(func_272(), 0);
							}
							clear_ped_tasks(iVar1, 1, 0);
							_task_use_scenario_point(iVar1, Local_794.f_19.f_31, 0, 0, true, false, 0, false, -1f, false);
							_0x2e1d6d87346bb7d2(iVar1, iVar0, 0, 0);
						}
						else
						{
							func_379(16);
						}
					}
				}
			}
		}
	}
}

void func_303()
{
	iVar0 = player_ped_id();
	iVar1 = _get_last_mount(iVar0);
	bVar2 = func_484(1);
	bVar3 = false;
	if (does_entity_exist(iVar0))
	{
		if (func_485(iVar0, func_417(), 20f, 1, 1))
		{
			bVar3 = true;
		}
	}
	if (!bVar3 && does_entity_exist(iVar1))
	{
		if (func_485(iVar1, func_417(), 20f, 1, 1))
		{
			bVar3 = true;
		}
	}
	if (bVar2 != bVar3)
	{
		if (bVar3)
		{
			if (func_486())
			{
				func_487(1);
			}
		}
		else
		{
			func_488();
			func_489(1);
		}
	}
}

void func_304()
{
	iVar0 = _0x4a98e228a936dbcc(get_player_ped(player_id()));
	if ((((((((((((((iVar0 == -220837440 || iVar0 == -1319858708) || iVar0 == 794116946) || iVar0 == 2099851418) || iVar0 == 1292715290) || iVar0 == 68969381) || iVar0 == 261384898) || iVar0 == 618996671) || iVar0 == -1499531531) || iVar0 == 497381157) || iVar0 == -1090018704) || iVar0 == -1382321285) || iVar0 == 175388181) || iVar0 == 1635224593) || iVar0 == -883958510)
	{
		func_379(2);
	}
	else
	{
		func_490(2);
	}
}

float func_305(int iParam0, int iParam1, bool bParam2)
{
	if (!func_369(iParam1, 0))
	{
		if (!func_222(&iParam1))
		{
			return 0f;
		}
	}
	if (bParam2)
	{
		if (&Local_57[iParam1]->f_3.f_2[iParam0] < 0f)
		{
			return 0f;
		}
	}
	return &(Local_57[iParam1]->f_3.f_2[iParam0]);
}

void func_306()
{
	if (!func_133(32, 255))
	{
		func_491(Local_794.f_1, Local_794.f_3);
		if (!func_133(1024, 255))
		{
			func_492(Local_794.f_1);
			func_150(1024);
		}
		iVar0 = func_325(Local_794.f_1, Local_794.f_2);
		func_493(iVar0);
		func_494(iVar0);
		func_148(2);
		func_495(Local_794.f_9);
		func_496(Local_794.f_1);
		func_497(Local_794.f_1, Local_794.f_2, Local_794.f_3);
		func_150(32);
	}
}

void func_307()
{
	if (!func_65(2))
	{
		return;
	}
	func_148(8);
}

bool func_308(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			if (is_entity_dead(iParam0))
			{
				if (is_ped_a_player(get_ped_index_from_entity_index(get_ped_source_of_death(get_ped_index_from_entity_index(iParam0)))))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_309(bool bParam0)
{
	if (!func_65(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_65(256))
		{
			func_180(Local_794.f_18, 0);
			func_148(256);
		}
	}
	func_148(16);
}

void func_310()
{
	if (!func_389(1))
	{
		if (func_498())
		{
			func_296(1, 1);
			func_499(0, 291934926, 0);
		}
		iVar0 = func_184(1);
		if (network_has_control_of_entity(iVar0) && !func_483(iVar0, 1435919172))
		{
			task_play_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(3), 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
		}
	}
}

void func_311()
{
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = get_player_ped(player_id());
	if (func_500(iVar2) && func_305(1, 255, 1) < 20f)
	{
		func_379(8388608);
	}
	else
	{
		func_490(8388608);
	}
	if (network_has_control_of_entity(iVar0))
	{
		set_ped_reset_flag(iVar0, 12, true);
		set_ped_reset_flag(iVar0, 172, true);
	}
	if (Local_13.f_7.f_1 != Local_794.f_19.f_9)
	{
		return;
	}
	if ((!func_186(4) && Local_13.f_7.f_1 != 1) && Local_13.f_7.f_1 != 2)
	{
		if (Local_13.f_7.f_10 && func_186(16))
		{
			func_379(4);
		}
	}
	Var3.f_10 = 255;
	switch (Local_13.f_7.f_1)
	{
		case 0:
			if (network_has_control_of_entity(iVar0))
			{
				func_385(3, 0);
			}
			break;
		case 2:
			if (network_has_control_of_entity(iVar0))
			{
				if (func_501(iVar0, "REHU_WALK_LOOP_EXIT"))
				{
					clear_ped_secondary_task(iVar0);
				}
				if ((!func_502(iVar0, 2) && func_502(iVar0, Local_13.f_7.f_21)) && _get_entity_anim_current_time(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(Local_13.f_7.f_21)) > 0.5f)
				{
					if (func_501(iVar0, "REHU_WALK_LOOP"))
					{
						task_play_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(12), 2f, -2f, -1, 67108881, 0f, false, 32768, false, 0, false);
					}
					if (func_501(iVar0, "REHU_BEGIN_WALK"))
					{
						if (does_entity_exist(iVar0))
						{
							task_go_straight_to_coord(iVar0, func_272(), 0.25f, -1, 1193033728, 1056964608, 0);
							Var3 = { func_332(-524700565) };
							func_333(&Var3);
							func_379(32);
							func_385(3, 1);
						}
					}
				}
			}
			break;
		case 3:
			func_503();
			if (network_has_control_of_entity(iVar0))
			{
				if (func_501(iVar0, "REHU_WALK_LOOP"))
				{
					task_play_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(12), 2f, -2f, -1, 67108881, 0f, false, 32768, false, 0, false);
				}
				if ((!func_186(32) && func_501(iVar0, "REHU_BEGIN_WALK")) || !func_483(iVar0, 1435919172))
				{
					if (does_entity_exist(iVar0))
					{
						if (network_has_control_of_entity(iVar0))
						{
							task_go_straight_to_coord(iVar0, func_272(), 0.25f, -1, 1193033728, 1056964608, 0);
							Var3 = { func_332(-524700565) };
							func_333(&Var3);
							func_379(32);
						}
					}
				}
				if (!func_186(64) && func_383(Local_13.f_7.f_14, 15000))
				{
					func_385(4, 0);
				}
				if (((func_186(4) && !func_186(1048576)) && !func_186(-2147483648)) && !func_186(131072))
				{
					task_clear_look_at(iVar0);
					func_385(7, 0);
				}
			}
			break;
		case 4:
			func_503();
			if (network_has_control_of_entity(iVar0))
			{
				if (func_502(iVar0, 1))
				{
					clear_ped_secondary_task(iVar0);
					func_385(3, 1);
				}
			}
			break;
		case 5:
			func_503();
			if (network_has_control_of_entity(iVar0))
			{
				if (!is_entity_playing_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(17), 1) && !func_186(33554432))
				{
					task_go_straight_to_coord(iVar0, func_272(), 0.25f, -1, 1193033728, 1056964608, 0);
					Var3 = { func_332(-524700565) };
					Var3.f_11 = 8000;
					func_333(&Var3);
					func_379(32);
					task_play_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(12), 2f, -2f, -1, 67108881, 0f, false, 32768, false, 0, false);
					task_clear_look_at(iVar0);
					func_385(3, 1);
				}
			}
			break;
		case 6:
			if (network_has_control_of_entity(iVar0))
			{
				if (_get_entity_anim_current_time(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(Local_13.f_7.f_21)) > 0.85f)
				{
					if (!func_395())
					{
						task_go_straight_to_coord(iVar0, func_272(), 0.25f, -1, 1193033728, 1056964608, 0);
						task_play_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(12), 2f, -2f, -1, 67108881, 0f, false, 32768, false, 0, false);
						Var3 = { func_332(-524700565) };
						func_333(&Var3);
						func_379(32);
					}
					else
					{
						task_play_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(2), 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
					}
					task_clear_look_at(iVar0);
					func_385(3, 1);
				}
			}
			break;
		case 7:
			if (network_has_control_of_entity(iVar0))
			{
				if (func_501(iVar0, "REHU_WALK_LOOP_EXIT"))
				{
					clear_ped_secondary_task(iVar0);
				}
				if (func_501(iVar0, "REHU_WALK_LOOP"))
				{
					task_play_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(12), 2f, -2f, -1, 67108881, 0f, false, 32768, false, 0, false);
				}
				if (func_501(iVar0, "REHU_BEGIN_WALK") || !func_483(iVar0, 1435919172))
				{
					if (does_entity_exist(iVar0))
					{
						if (network_has_control_of_entity(iVar0))
						{
							task_go_straight_to_coord(iVar0, func_272(), 0.25f, -1, 1193033728, 1056964608, 0);
							Var3 = { func_332(-524700565) };
							func_333(&Var3);
							func_379(32);
						}
					}
					func_385(8, 0);
				}
			}
			break;
		case 8:
			if ((!func_504(128) && Local_13.f_7.f_10) && !func_502(iVar0, 16))
			{
				if (func_505(iVar0, iVar2, 0.9f) && func_506(iVar0, iVar2, 5f, 1, 1))
				{
					func_392(0, 0, 0, 255);
					func_379(128);
				}
				else
				{
					if (!func_507(128, 255))
					{
						if (network_has_control_of_entity(iVar1) && func_187() != 0)
						{
							func_508(iVar1, 1);
						}
						if (network_has_control_of_entity(iVar0))
						{
							_0x8acc0506743a8a5c(iVar0, 166028666, 1, -1082130432);
							clear_ped_secondary_task(iVar0);
							if (func_187() != 0)
							{
								set_ped_accuracy(iVar0, 100);
								set_ped_combat_attributes(iVar0, 27, true);
								_0xc5b78e41dcf8227c(iVar0, 1);
							}
							else
							{
								_0xc5b78e41dcf8227c(iVar0, 1);
								set_ped_accuracy(iVar0, 0);
								set_ped_combat_movement(iVar0, 0);
								_0x2e1d6d87346bb7d2(iVar0, iVar1, 0, 0);
							}
							set_ped_combat_attributes(iVar0, 133, true);
						}
						clear_sequence_task(&(Local_794.f_19.f_32));
						_0x23767d80c7eed7c6(&(Local_794.f_19.f_32), 171278965);
						task_aim_at_entity(0, iVar1, 1000, 0, 1);
						task_shoot_at_entity(0, iVar1, 2750, 1566631136, 1);
						task_aim_at_entity(0, iVar1, 2000, 1, 1);
						if (func_187() != 0)
						{
							task_aim_at_entity(0, iVar1, -1, 1, 1);
						}
						else
						{
							task_go_to_coord_while_aiming_at_entity(0, Local_794.f_15, iVar1, 1.5f, 1, 1056964608, 1082130432, 1, 0, 1, -957453492, -1, 0);
						}
						if (network_has_control_of_entity(iVar0))
						{
							func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
						}
						else
						{
							close_sequence_task(Local_794.f_19.f_32);
						}
					}
					func_379(128);
				}
			}
			if (network_has_control_of_entity(iVar0))
			{
				if (func_510(0.1f) || is_ped_dead_or_dying(iVar1, true))
				{
					if (func_187() != 0)
					{
						if (is_ped_dead_or_dying(iVar1, true) || has_entity_been_damaged_by_any_ped(iVar1))
						{
							if (func_383(Local_13.f_7.f_15, 800))
							{
								task_play_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(7), 2f, -2f, -1, 3072, 0f, false, 0, false, 0, false);
								func_296(16, 1);
							}
						}
						else
						{
							func_392(1, 0, 0, 255);
						}
					}
					else
					{
						func_392(1, 0, 0, 255);
					}
				}
			}
			break;
		case 9:
			break;
	}
}

void func_312()
{
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = func_184(2);
	if (!func_511(128, 255))
	{
		clear_sequence_task(&(Local_794.f_19.f_32));
		_0x23767d80c7eed7c6(&(Local_794.f_19.f_32), -1557004870);
		if (func_395())
		{
			task_play_anim(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(2), 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
		}
		task_aim_gun_at_entity(0, iVar1, 3000, 0, 1);
		if (!is_entity_dead(iVar2))
		{
			func_512(0, 869278708, 1971704925);
			task_mount_animal(0, iVar2, -1, -1, 3f, 1, 0, 0);
		}
		if (network_has_control_of_entity(iVar0))
		{
			func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
			set_ped_combat_movement(iVar0, 2);
			set_ped_accuracy(iVar0, 85);
			set_ped_shoot_rate(iVar0, 75);
		}
		else
		{
			close_sequence_task(Local_794.f_19.f_32);
		}
		if (network_has_control_of_entity(iVar2))
		{
			if (_is_mount_seat_free(iVar2, -1))
			{
				task_go_to_whistle(iVar2, iVar0, 0);
			}
		}
		if (network_has_control_of_entity(iVar1))
		{
			set_blocking_of_non_temporary_events(iVar1, false);
		}
		func_296(128, 1);
	}
}

void func_313()
{
	if (func_511(128, 255))
	{
		return;
	}
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = func_184(2);
	func_189(1);
	if (!func_431(&(Local_794.f_19.f_20)))
	{
		if (!is_any_speech_playing(iVar0))
		{
			func_430(&(Local_794.f_19.f_20));
		}
	}
	else if ((Local_13.f_7.f_10 || func_481(iVar0, iVar1, 1, 1) < func_482()) || func_186(16))
	{
		if (func_513(&(Local_794.f_19.f_20), 0.5f))
		{
			func_499(27, 1744022339, 0);
			clear_sequence_task(&(Local_794.f_19.f_32));
			_0x23767d80c7eed7c6(&(Local_794.f_19.f_32), -2049936868);
			if (func_395())
			{
				task_play_anim(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(2), 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
			}
			task_aim_gun_at_entity(0, iVar1, 3000, 0, 1);
			if (!is_entity_dead(iVar2))
			{
				func_512(0, 869278708, 1971704925);
				task_mount_animal(0, iVar2, -1, -1, 3f, 1, 0, 0);
			}
			if (network_has_control_of_entity(iVar0))
			{
				func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
				set_ped_combat_movement(iVar0, 2);
				set_ped_accuracy(iVar0, 85);
				set_ped_shoot_rate(iVar0, 75);
			}
			else
			{
				close_sequence_task(Local_794.f_19.f_32);
			}
			if (network_has_control_of_entity(iVar2))
			{
				if (_is_mount_seat_free(iVar2, -1))
				{
					task_go_to_whistle(iVar2, iVar0, 0);
				}
			}
			if (network_has_control_of_entity(iVar1))
			{
				set_blocking_of_non_temporary_events(iVar1, false);
			}
			func_296(128, 1);
		}
	}
	else if (func_513(&(Local_794.f_19.f_20), 0.5f))
	{
		func_388(func_375(1, 0, 1, 0), 0, 27);
		func_377(4);
	}
}

void func_314()
{
	if (func_511(256, 255))
	{
		return;
	}
	iVar0 = func_184(1);
	iVar1 = func_184(2);
	func_189(1);
	if (func_431(&(Local_794.f_19.f_17)))
	{
		if (func_432(&(Local_794.f_19.f_17), 1.5f))
		{
			if (network_has_control_of_entity(iVar0))
			{
				set_ped_using_action_mode(iVar0, false, -1, 0);
				_0x58f7db5bd8fa2288(iVar0);
			}
			clear_sequence_task(&(Local_794.f_19.f_32));
			_0x23767d80c7eed7c6(&(Local_794.f_19.f_32), -2049936868);
			if (!is_entity_dead(iVar1))
			{
				if (func_481(iVar0, iVar1, 1, 1) > 8f)
				{
					func_512(0, 869278708, 1971704925);
				}
				task_mount_animal(0, iVar1, -1, -1, 1f, 1, 0, 0);
				_task_move_in_traffic(0, -1082130432, 0, 0);
			}
			else
			{
				_task_move_in_traffic(0, 1f, 0, 0);
			}
			if (network_has_control_of_entity(iVar0))
			{
				func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
			}
			else
			{
				close_sequence_task(Local_794.f_19.f_32);
			}
			if (network_has_control_of_entity(iVar1))
			{
				if (func_481(iVar0, iVar1, 1, 1) > 8f && _is_mount_seat_free(iVar1, -1))
				{
					task_go_to_whistle(iVar1, iVar0, 0);
				}
			}
			func_379(4194304);
			func_296(256, 1);
		}
	}
	else if (!is_any_speech_playing(iVar0))
	{
		func_514(&(Local_794.f_19.f_17), 0);
	}
}

void func_315()
{
	if (func_511(16, 255) || func_511(256, 255))
	{
		return;
	}
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = func_184(2);
	func_189(1);
	if (network_has_control_of_entity(iVar0))
	{
		if ((get_script_task_status(iVar0, 242628503, true) == 1 && get_sequence_progress(iVar0) > 0) && !is_any_speech_playing(iVar0))
		{
			func_499(30, -417894478, 0);
		}
		if (!func_186(134217728))
		{
			if (is_ped_on_mount(iVar0) || (is_entity_dead(iVar2) && !func_483(iVar0, 242628503)))
			{
				task_go_to_entity(iVar0, iVar1, -1, 0.5f, 2f, 2f, 0);
				func_379(134217728);
			}
		}
	}
	if (is_entity_dead(iVar1))
	{
		if (!is_ped_on_mount(iVar0))
		{
			if (network_has_control_of_entity(iVar0))
			{
				task_react(iVar0, 0, get_entity_coords(iVar1, false, false), "Default_Curious", 2f, 5f, 4);
			}
		}
		else
		{
			clear_sequence_task(&(Local_794.f_19.f_32));
			_0x23767d80c7eed7c6(&(Local_794.f_19.f_32), 2005498298);
			task_stand_still(0, 3000);
			task_go_to_entity(0, iVar1, -1, 15f, 2.001f, 2f, 0);
			task_dismount_animal(0, 0, 0, 0, 0, 0);
			if (network_has_control_of_entity(iVar0))
			{
				func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
			}
			else
			{
				close_sequence_task(Local_794.f_19.f_32);
			}
		}
		func_379(8192);
		func_296(16, 1);
	}
	if (func_383(Local_13.f_7.f_20, 20000))
	{
		func_499(29, -417894478, 0);
		clear_sequence_task(&(Local_794.f_19.f_32));
		_0x23767d80c7eed7c6(&(Local_794.f_19.f_32), 286440846);
		task_stand_still(0, 5000);
		_task_move_in_traffic(0, 1.001f, 0, 0);
		if (network_has_control_of_entity(iVar0))
		{
			func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
		}
		else
		{
			close_sequence_task(Local_794.f_19.f_32);
		}
		func_296(256, 1);
	}
}

void func_316()
{
	if (func_511(4096, 255))
	{
		return;
	}
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = get_player_ped(player_id());
	if (func_515(iVar1, iVar2))
	{
		func_296(16384, 1);
	}
	else
	{
		func_297(16384);
	}
	func_189(1);
	if (network_has_control_of_entity(iVar1))
	{
		if (func_481(iVar0, iVar1, 1, 1) < 5f)
		{
			set_ped_max_move_blend_ratio(iVar1, 1.5f);
		}
	}
	if (network_has_control_of_entity(iVar0))
	{
		if (is_ped_ragdoll(iVar0))
		{
			func_516(iVar0, iVar1);
			func_296(256, 1);
		}
		if (!func_517(17) && (get_sequence_progress(iVar0) > 1 || !func_483(iVar0, 242628503)))
		{
			func_499(17, 1744022339, 0);
			func_518(17);
		}
	}
	if (!Local_13.f_7.f_12)
	{
		if (func_186(1024))
		{
			if (func_383(Local_13.f_7.f_16, 3000) || !func_483(iVar0, 1435919172))
			{
				bVar3 = true;
				iVar4 = func_387(1, 73702, 25f, 1, 0);
				if (!_network_is_player_index_valid(iVar4))
				{
					bVar3 = false;
				}
				if (!is_entity_dead(iVar0))
				{
					clear_sequence_task(&(Local_794.f_19.f_32));
					_0x23767d80c7eed7c6(&(Local_794.f_19.f_32), -2000912006);
					task_aim_gun_at_entity(0, iVar1, 2000, 0, 3);
					func_516(0, iVar1);
					if (network_has_control_of_entity(iVar0))
					{
						if (bVar3)
						{
							func_499(18, 1744022339, 0);
						}
						func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
					}
					else
					{
						close_sequence_task(Local_794.f_19.f_32);
					}
				}
				func_296(4096, 1);
			}
		}
		else if (network_has_control_of_entity(iVar0))
		{
			if (!func_186(2048))
			{
				if (func_383(Local_13.f_7.f_16, 4000) || !func_483(iVar0, 1435919172))
				{
					func_516(iVar0, iVar1);
					func_296(256, 1);
				}
			}
		}
	}
}

void func_317()
{
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = func_184(2);
	if (func_187() != 0)
	{
		if (!func_384(1024))
		{
			if (!func_511(1024, 255))
			{
				if (!is_ped_on_mount(iVar0))
				{
					if (((func_501(iVar0, "Transition") && func_502(iVar0, 7)) || (func_186(8192) && func_383(Local_13.f_7.f_17, 2000))) || func_389(1024))
					{
						func_520();
						if (network_has_control_of_entity(iVar2))
						{
							if (!is_entity_dead(iVar2))
							{
								task_go_to_whistle(iVar2, iVar0, 0);
							}
						}
						func_296(1024, 1);
					}
				}
			}
		}
		else if (!func_384(2048))
		{
			func_521();
			if (!func_517(24) && func_522(iVar0, get_entity_coords(iVar1, false, false), 1) < 3f)
			{
				func_499(24, -417894478, 0);
			}
			if (!func_511(2048, 255))
			{
				if ((!network_has_control_of_entity(iVar0) || get_script_task_status(iVar0, 242628503, true) != 1) && _is_ped_carrying(iVar0))
				{
					if (network_has_control_of_entity(iVar0))
					{
						func_379(16384);
						func_499(25, -417894478, 0);
					}
					clear_sequence_task(&(Local_794.f_19.f_32));
					_0x23767d80c7eed7c6(&(Local_794.f_19.f_32), 660220433);
					if (!is_entity_dead(iVar2))
					{
						if (!_is_mount_seat_free(iVar2, -1))
						{
							task_follow_nav_mesh_to_coord(0, func_523(Local_794.f_15, iVar0, 5f), 1.5f, -1, 0.25f, 1, 40000f);
						}
						task_place_carried_entity_on_mount(0, _get_first_entity_ped_is_carrying(iVar0), iVar2, 1.5f);
						task_mount_animal(0, iVar2, -1, -1, 1f, 1, 0, 0);
						_task_move_in_traffic(0, -1082130432, 0, 0);
					}
					else
					{
						_task_move_in_traffic(0, 1f, 0, 0);
					}
					if (network_has_control_of_entity(iVar0))
					{
						func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
					}
					else
					{
						close_sequence_task(Local_794.f_19.f_32);
					}
					func_296(2048, 1);
				}
			}
		}
		else if (network_has_control_of_entity(iVar2))
		{
			if (!is_entity_dead(iVar2))
			{
				task_go_to_whistle(iVar2, iVar0, 0);
				func_296(256, 1);
			}
		}
	}
	else if (func_383(Local_13.f_7.f_17, 2000))
	{
		func_388(player_id(), 0, 28);
		func_296(32, 1);
	}
}

void func_318()
{
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = func_184(2);
	if (!func_186(524288))
	{
		func_189(1);
		fVar3 = get_distance_between_coords(func_272(), func_114(1), true);
		if ((func_187() != 0 || is_entity_dead(iVar1)) || get_distance_between_coords(get_entity_coords(iVar0, true, false), func_114(1), true) < (fVar3 / 3f))
		{
			if (network_has_control_of_entity(iVar2))
			{
				if (!is_entity_dead(iVar2))
				{
					set_blocking_of_non_temporary_events(iVar2, false);
				}
			}
			if (!func_186(65536))
			{
				if (network_has_control_of_entity(iVar0))
				{
					if (!func_186(268435456) || func_186(536870912))
					{
						if (func_501(iVar0, "bSafeToBreakout") || !func_186(268435456))
						{
							iVar4 = func_387(1, 74185, 35f, 1, 0);
							iVar5 = get_player_ped(iVar4);
							set_ped_accuracy(iVar0, 60);
							clear_ped_tasks(iVar0, 1, 0);
							_0x78815fc52832b690(iVar0, 1);
							clear_ped_secondary_task(iVar0);
							_0x58f7db5bd8fa2288(iVar0);
							if (func_186(-2147483648))
							{
								if (!is_entity_dead(iVar0))
								{
									set_blocking_of_non_temporary_events(iVar0, false);
									func_516(iVar0, iVar5);
									func_296(256, 1);
								}
							}
							else
							{
								func_499(31, 1744022339, 0);
								func_525(iVar4);
								set_ped_accuracy(iVar0, 60);
								task_combat_ped(iVar0, iVar5, 16384, 0);
								func_526(1, 831283580);
								func_379(65536);
							}
							func_379(524288);
							set_ped_keep_task(iVar0, true);
						}
					}
					else
					{
						iVar6 = func_387(1, 74185, 35f, 1, 0);
						task_play_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_527(iVar6), 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
						func_379(536870912);
					}
				}
			}
		}
		else if (!func_186(65536))
		{
			if (network_has_control_of_entity(iVar0))
			{
				iVar7 = func_387(1, 74185, 35f, 1, 0);
				iVar8 = get_player_ped(iVar7);
				func_525(iVar7);
				func_499(31, 1744022339, 0);
				clear_ped_secondary_task(iVar0);
				task_aim_gun_at_entity(iVar0, iVar8, 4000, 0, 3);
				func_379(65536);
				Var9 = { func_332(-456522470) };
				Var9.f_11 = 2000;
				func_333(&Var9);
				func_296(2, 1);
				func_379(512);
			}
		}
	}
	else if (func_186(65536))
	{
		if (!is_ped_dead_or_dying(iVar0, true))
		{
			if (func_222(&iVar24))
			{
				if (func_453(1, iVar24))
				{
					func_526(1, 831283580);
				}
			}
			if (!is_ped_in_combat(iVar0, 0))
			{
				if (network_has_control_of_entity(iVar0))
				{
					iVar25 = func_387(1, 74185, 35f, 1, 0);
					if (_network_is_player_index_valid(iVar25))
					{
						task_combat_ped(iVar0, get_player_ped(iVar25), 0, 0);
					}
					else
					{
						func_528(iVar0, get_entity_coords(iVar0, true, false));
						func_296(256, 1);
					}
				}
			}
		}
		else
		{
			func_296(256, 1);
		}
	}
}

void func_319()
{
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = func_184(2);
	if ((func_186(65536) && !func_186(2048)) && !is_ped_fleeing(iVar0))
	{
		if (func_222(&iVar3))
		{
			if (func_453(1, iVar3))
			{
				func_526(1, 831283580);
			}
		}
	}
	else
	{
		func_189(1);
	}
	if (((!func_186(32768) && !func_186(2048)) && !is_ped_fleeing(iVar0)) && !Local_13.f_7.f_13)
	{
		if (Local_13.f_7.f_19 != 0)
		{
			if (func_383(Local_13.f_7.f_19, 2500))
			{
				func_499(29, -417894478, 0);
			}
		}
	}
	if (func_186(2048) && !is_ped_fleeing(iVar0))
	{
		func_516(iVar0, iVar1);
	}
	if (network_has_control_of_entity(iVar2))
	{
		if (func_186(512) && func_187() == 0)
		{
			if (!func_186(262144) && !func_475(iVar2, 0))
			{
				if (is_ped_in_combat(iVar1, iVar0) || func_481(iVar1, iVar2, 1, 1) < 15f)
				{
					if (func_481(iVar0, iVar2, 1, 1) < 5f)
					{
						if (!is_entity_dead(iVar1))
						{
							_task_smart_flee_style_ped(iVar2, iVar1, 4, 0, -1082130432, -1, 0);
						}
						else
						{
							_task_smart_flee_style_coord(iVar2, get_entity_coords(iVar1, false, false), 4, 0, -1082130432, -1, 0);
						}
						func_379(262144);
					}
				}
			}
		}
	}
	iVar4 = func_375(1, 125f, 1, 0);
	if (func_475(iVar0, 0) || !_network_is_player_index_valid(iVar4))
	{
		func_296(512, 1);
	}
}

void func_320()
{
	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_419(func_418(iVar0), &Var1))
		{
			if (does_entity_exist(Var1))
			{
				_0xad8f2424c6e1e3a8(Var1);
			}
		}
		iVar0++;
	}
}

int func_321(var uParam0, var uParam1)
{
	return uParam0;
}

int func_322(int iParam0)
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

int func_323(struct<2> Param0)
{
	return func_529(Param0);
}

void func_324(struct<2> Param0, var uParam2)
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
	switch (func_321(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_531(func_530(Param0));
			iVar5 = func_532(iVar4);
			if (!func_533(iVar5, 0))
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

int func_325(int iParam0, int iParam1)
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

void func_326(int iParam0)
{
	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_534(&Var0);
}

var func_327(int iParam0)
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

var func_328(int iParam0)
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

var func_329(int iParam0)
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

bool func_330(int iParam0, int iParam1)
{
	if (!func_535(iParam0, iParam1))
	{
		return false;
	}
	return func_536(iParam1, iParam0);
}

bool func_331(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!network_is_player_active(iParam1))
		{
			return false;
		}
	}
	return func_537(iParam0, get_player_ped(iParam1), bParam2);
}

struct<15> func_332(int iParam0)
{
	Var0.f_10 = 255;
	_copy_memory(&(Var0.f_4), &Local_794, 5);
	Var0.f_9 = iParam0;
	Var0 = 182;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	return Var0;
}

void func_333(var uParam0)
{
	func_539(uParam0, func_538(4, 117));
}

void func_334(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_ped_injured(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
		if (!bParam3)
		{
			clear_ped_secondary_task(*iParam0);
		}
		set_ped_keep_task(*iParam0, bParam1);
		if (bParam2)
		{
			set_blocking_of_non_temporary_events(*iParam0, false);
		}
	}
	set_ped_as_no_longer_needed(iParam0);
}

int func_335(int iParam0)
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

int func_336(int iParam0)
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

void func_337(var uParam0)
{
	func_197(uParam0, 0);
	func_197(uParam0, 1);
	func_197(uParam0, 3);
	func_195(uParam0);
}

void func_338(var uParam0)
{
	func_196(uParam0);
	func_540(uParam0, 0, 3);
}

void func_339(var uParam0)
{
	func_197(uParam0, 0);
	func_198(uParam0, 0);
	func_198(uParam0, 1);
	func_198(uParam0, 2);
}

void func_340(var uParam0)
{
	func_197(uParam0, 1);
	func_195(uParam0);
}

void func_341(var uParam0)
{
	func_197(uParam0, 2);
	func_198(uParam0, 3);
}

void func_342(var uParam0)
{
	func_197(uParam0, 3);
	func_198(uParam0, 4);
}

void func_343(var uParam0)
{
	func_198(uParam0, 0);
	func_198(uParam0, 1);
}

void func_344(var uParam0)
{
	func_198(uParam0, 2);
	func_198(uParam0, 3);
}

void func_345(var uParam0)
{
	func_198(uParam0, 4);
	func_198(uParam0, 5);
}

bool func_346(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

bool func_347(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_348(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_349(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1257541)[iParam0]->f_4 + iParam1);
}

void func_350(var uParam0)
{
	func_542(uParam0, (func_541(uParam0) - 6f));
	func_543(uParam0, 1);
}

void func_351(var uParam0)
{
	func_544(uParam0, 0);
	func_362(uParam0, 0);
	func_363(uParam0, 0);
	func_545(uParam0, 0);
	func_546(uParam0, 1, 1, 1);
}

void func_352(var uParam0)
{
	func_547(uParam0, 1);
	func_548(uParam0, 1);
	func_366(uParam0, 1);
}

void func_353(var uParam0, int iParam1)
{
	uParam0->f_23 = iParam1;
}

void func_354(var uParam0, float fParam1)
{
	uParam0->f_26 = fParam1;
}

void func_355(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_227(&(uParam0->f_2), 131072);
	}
	else
	{
		func_226(&(uParam0->f_2), 131072);
	}
}

void func_356(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(iParam0, 4);
	}
	else
	{
		func_227(iParam0, 4);
	}
}

void func_357(var uParam0)
{
	func_544(uParam0, 0);
	func_362(uParam0, 0);
	func_363(uParam0, 1);
	func_364(uParam0, 1);
	func_545(uParam0, 0);
	func_361(uParam0, 1);
	func_546(uParam0, 1, 1, 1);
}

void func_358(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(uParam0, 1024);
	}
	else
	{
		func_227(uParam0, 1024);
	}
}

void func_359(var uParam0, int iParam1)
{
	uParam0->f_22 = iParam1;
}

void func_360(var uParam0, float fParam1)
{
	uParam0->f_21 = fParam1;
}

void func_361(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(uParam0, 256);
	}
	else
	{
		func_227(uParam0, 256);
	}
}

void func_362(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_227(&(uParam0->f_2), 2048);
	}
	else
	{
		func_226(&(uParam0->f_2), 2048);
	}
}

void func_363(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_227(&(uParam0->f_2), 256);
	}
	else
	{
		func_226(&(uParam0->f_2), 256);
	}
}

void func_364(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(uParam0, 16);
	}
	else
	{
		func_227(uParam0, 67108864);
		func_227(uParam0, 16);
	}
}

void func_365(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_227(&(uParam0->f_2), 1024);
	}
	else
	{
		func_226(&(uParam0->f_2), 1024);
	}
}

void func_366(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(uParam0, 8);
	}
	else
	{
		func_227(uParam0, 8);
	}
}

void func_367(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(&(uParam0->f_1), 1);
	}
	else
	{
		func_227(&(uParam0->f_1), 1);
	}
}

void func_368(var uParam0, float fParam1)
{
	uParam0->f_31 = fParam1;
}

bool func_369(int iParam0, bool bParam1)
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

bool func_370(int iParam0, var uParam1)
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

int func_371(int iParam0, int iParam1)
{
	iVar0 = 0;
	set_bit(&iVar0, 31);
	iVar0 = shift_right(iVar0, (31 - iParam1));
	iVar0 ^= -1;
	iVar0 = shift_left(iVar0, iParam0);
	return iVar0;
}

int func_372(int iParam0)
{
	if (!func_182(iParam0))
	{
		return 0;
	}
	return Global_1132288->f_1[iParam0]->f_3;
}

bool func_373(int iParam0, bool bParam1, bool bParam2)
{
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_794.f_15 };
	iVar7 = 0;
	iVar8 = func_406(iParam0);
	iVar9 = func_549(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!network_does_network_id_exist(&(Local_13.f_31[iParam0])))
		{
			iVar9 = func_549(iParam0);
			fVar0 = func_550(iParam0);
			if (!func_181(Local_794.f_60.f_7[iParam0]->f_2, 2))
			{
				vVar1 = { _get_object_offset_from_coords(vVar4, 0f, func_551(iParam0)) };
			}
			else
			{
				vVar1 = { func_551(iParam0) };
			}
			if (!func_552(Local_13.f_31[iParam0], iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || _is_this_model_a_horse(iVar8)), 1, 1))
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
						_update_ped_variation(iVar7, func_175(iParam0, 1), true, true, true, false);
					}
					else if (_is_this_model_a_horse(iVar8))
					{
						if (_0xa0bc8faed8cfeb3c(iVar7))
						{
						}
						func_553(iVar7, 1);
					}
					if (func_554(iParam0))
					{
						set_ped_can_be_targetted(iVar7, false);
					}
					if (_is_this_model_a_horse(iVar8))
					{
						if (func_555(iParam0))
						{
							if (func_554(iParam0))
							{
							}
						}
						else
						{
							set_ped_can_be_targetted(iVar7, false);
						}
					}
					if (func_374(iParam0))
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

bool func_374(int iParam0)
{
	return func_175(iParam0, 128);
}

int func_375(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		if (!does_entity_exist(&(Local_794.f_60.f_7[iParam0])))
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
		else if (&Local_57[iVar0]->f_3.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam3 && !func_556(iVar0))
		{
		}
		else if (iVar1 != -1 && &Local_57[iVar0]->f_3.f_2[iParam0] > &Local_57[iVar1]->f_3.f_2[iParam0])
		{
		}
		else if (bVar2 && &Local_57[iVar0]->f_3.f_2[iParam0] > fParam1)
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

void func_376(int iParam0, bool bParam1, bool bParam2)
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

void func_377(int iParam0)
{
	if (Local_13.f_7 != iParam0)
	{
		Local_13.f_7 = iParam0;
	}
}

bool func_378(int iParam0, int iParam1)
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

void func_379(int iParam0)
{
	if (!func_222(&iVar0))
	{
		return;
	}
	func_226(&(Local_57[iVar0]->f_1), iParam0);
}

bool func_380(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (((get_is_task_active(iParam0, 3) || func_483(iParam0, -2017877118)) || func_483(iParam0, 242628503)) || func_483(iParam0, -1162159953))
	{
		return true;
	}
	return false;
}

int func_381(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 19;
		case 1:
			return 20;
		case 2:
			return 21;
		case 3:
			return 22;
		case 4:
			return 23;
		default:
			break;
	}
	return 19;
}

int func_382(int iParam0, int iParam1)
{
	iVar0 = func_184(1);
	if (!func_475(iVar0, 0) && has_anim_event_fired(iVar0, iParam1))
	{
		func_499(iParam0, -417894478, 0);
		return 1;
	}
	return 0;
}

bool func_383(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		return get_time_difference(iParam0, get_network_time_accurate()) >= iParam1;
	}
	return false;
}

bool func_384(int iParam0)
{
	return func_181(Local_794.f_19.f_39, iParam0);
}

void func_385(int iParam0, bool bParam1)
{
	Var0 = { func_332(-1177380711) };
	Var0.f_11 = iParam0;
	if (bParam1)
	{
		Var0.f_12 = 1;
	}
	func_333(&Var0);
}

bool func_386(int iParam0, var uParam1)
{
	return func_507(8388608, iParam0);
}

int func_387(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		if (!does_entity_exist(&(Local_794.f_60.f_7[iParam0])))
		{
			return 255;
		}
	}
	iVar1 = -1;
	bVar2 = fParam2 > 0f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = int_to_participantindex(iVar0);
		if (!network_is_participant_active(iVar3))
		{
		}
		else if (&Local_57[iVar0]->f_3.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam4 && !func_556(iVar0))
		{
		}
		else if (iVar1 != -1 && &Local_57[iVar0]->f_3.f_2[iParam0] > &Local_57[iVar1]->f_3.f_2[iParam0])
		{
		}
		else if (bVar2 && &Local_57[iVar0]->f_3.f_2[iParam0] > fParam2)
		{
		}
		else
		{
			Stack.Push(iVar0);
			Stack.Push(iParam0);
			Call_Loc(iParam1);
			if (!StackVal)
			{
			}
			else
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 32)
	{
		return network_get_player_index(int_to_participantindex(iVar1));
	}
	return 255;
}

void func_388(int iParam0, bool bParam1, int iParam2)
{
	if (!func_517(iParam2))
	{
		Var0 = { func_332(-1175879321) };
		Var0.f_11 = iParam2;
		Var0.f_12 = func_557(bParam1);
		Var0.f_10 = iParam0;
		func_333(&Var0);
	}
}

bool func_389(int iParam0)
{
	return func_181(Local_794.f_19.f_40, iParam0);
}

bool func_390(var uParam0)
{
	if (!func_558(*uParam0, 0))
	{
		return false;
	}
	return is_ped_shooting(*uParam0);
}

bool func_391(int iParam0, int iParam1)
{
	return ((func_559(iParam1, iParam0) || func_507(8388608, iParam0)) || func_507(2, iParam0));
}

void func_392(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_186(131072))
	{
		Var0 = { func_332(-1910677618) };
		Var0.f_11 = func_557(bParam0);
		Var0.f_12 = func_557(bParam1);
		Var0.f_13 = func_557(bParam2);
		if (iParam3 != 255)
		{
			Var0.f_10 = iParam3;
			Var0.f_14 = 1;
		}
		else if (!bParam0)
		{
			Var0.f_10 = func_387(0, 59669, 0, 1, 0);
		}
		func_333(&Var0);
		func_379(131072);
	}
}

int func_393(float fParam0, bool bParam1, bool bParam2)
{
	iVar12 = Local_13.f_7.f_22;
	if (!_network_is_player_index_valid(iVar12))
	{
		iVar12 = func_375(1, 0, 1, 0);
	}
	iVar13 = get_player_ped(iVar12);
	if (bParam2)
	{
		func_525(iVar12);
	}
	vVar9 = { get_entity_coords(iVar13, true, false) };
	vVar0 = { get_entity_coords(func_184(1), false, false) };
	vVar3 = { func_272() - vVar0 };
	vVar6 = { vVar9 - vVar0 };
	fVar14 = func_560(vVar3, vVar6);
	if (!bParam1)
	{
		if (absf(fVar14) > fParam0)
		{
			if (fVar14 > 0f)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else if (func_561(vVar0, vVar0 + vVar3, get_entity_coords(iVar13, true, false)))
		{
			return 3;
		}
		else
		{
			return 2;
		}
	}
	if (func_561(vVar0, vVar0 + vVar3, get_entity_coords(iVar13, true, false)) && fVar14 > -0.866f)
	{
		return 3;
	}
	return 1;
}

bool func_394(int iParam0, var uParam1)
{
	return (func_507(8388608, iParam0) || func_507(2, iParam0));
}

bool func_395()
{
	iVar0 = func_184(1);
	return ((((((is_entity_playing_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(3), 1) || is_entity_playing_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(4), 1)) || is_entity_playing_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(0), 1)) || is_entity_playing_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(21), 1)) || is_entity_playing_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(22), 1)) || is_entity_playing_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(23), 1)) || (is_entity_playing_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(1), 1) && func_501(iVar0, "REHU_IN_KNEEL")));
}

bool func_396(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_505(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_506(iParam0, iParam1, fParam3, 1, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, false) == 1;
}

void func_397(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_398(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_399(int* iParam0, int iParam1)
{
	if (!get_event_data(1, iParam1, iParam0, 15))
	{
		return false;
	}
	if (iParam0->f_4.f_1 != Local_794.f_1)
	{
		return false;
	}
	if (iParam0->f_4 != iVar790)
	{
		return false;
	}
	if (iParam0->f_4.f_2 != Local_794.f_2)
	{
		return false;
	}
	if (iParam0->f_4.f_3 != Local_794.f_3)
	{
		return false;
	}
	return true;
}

void func_400(int iParam0)
{
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = func_184(2);
	switch (iParam0->f_9)
	{
		case 377515857:
			iVar4 = iParam0->f_11;
			if (!func_517(iVar4))
			{
				if (!does_blip_exist(&(Local_794.f_19.f_2[1])) && func_305(1, 255, 1) < 125f)
				{
					func_562(1891783641, iVar0, 1);
					func_526(1, -89429847);
				}
				if (func_564(iVar0, func_563(iVar4), iParam0->f_12, iVar3, 1, 0, 0, 1))
				{
				}
				func_518(iVar4);
			}
			break;
		case -1175879321:
			iVar4 = iParam0->f_11;
			iVar3 = get_player_ped(iParam0->f_10);
			if (!func_517(iVar4))
			{
				if (network_has_control_of_entity(iVar0))
				{
					clear_ped_secondary_task(iVar0);
					clear_ped_tasks(iVar0, 1, 0);
				}
				if (iParam0->f_12 == 1)
				{
					bVar6 = true;
				}
				clear_sequence_task(&(Local_794.f_19.f_32));
				_0x23767d80c7eed7c6(&(Local_794.f_19.f_32), -223096933);
				if (bVar6 && !is_ped_on_mount(iVar3))
				{
					get_current_ped_weapon(iVar0, &iVar7, true, 0, false);
					set_current_ped_weapon(iVar0, iVar7, false, 1, false, false);
					func_565(0, iVar3, 0);
					task_swap_weapon(0, 1, 0, 0, 0);
					task_confront(0, iVar3, 2);
				}
				else
				{
					task_react(0, iVar3, get_entity_coords(iVar3, true, false), "DEFAULT_ANGRY", 3f, 5f, 4);
				}
				if (!is_entity_dead(iVar2))
				{
					task_follow_nav_mesh_to_coord(0, get_entity_coords(iVar2, true, false), 1f, 20000, 0.25f, 65, 40000f);
				}
				else
				{
					task_follow_nav_mesh_to_coord(0, Local_794.f_15, 1f, 20000, 0.25f, 0, 40000f);
				}
				if (network_has_control_of_entity(iVar0))
				{
					func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
				}
				else
				{
					close_sequence_task(Local_794.f_19.f_32);
				}
				if (func_564(iVar0, func_563(iVar4), 1744022339, iVar3, 1, 0, 0, 1))
				{
				}
				func_518(iVar4);
			}
			break;
		case -524700565:
			if (network_is_host_of_this_script())
			{
				Local_13.f_7.f_14 = get_network_time_accurate();
				if (iParam0->f_11 > 0)
				{
					Local_13.f_7.f_14 = get_time_offset(Local_13.f_7.f_14, iParam0->f_11);
				}
			}
			break;
		case -1177380711:
			if (Local_13.f_7 == 1)
			{
				if (iParam0->f_12 != 1)
				{
					func_566(iParam0->f_11);
				}
				else
				{
					func_490(16777216);
				}
				Local_794.f_19.f_9 = iParam0->f_11;
				if (network_is_host_of_this_script())
				{
					Local_13.f_7.f_1 = iParam0->f_11;
				}
			}
			break;
		case 1948200198:
			if (network_is_host_of_this_script())
			{
				Local_13.f_7.f_15 = get_network_time_accurate();
			}
			func_379(256);
			break;
		case -1910677618:
			if (network_is_host_of_this_script())
			{
				Local_13.f_7.f_11 = 1;
			}
			func_379(4);
			func_379(8);
			if (iParam0->f_14 == 1)
			{
				if (network_has_control_of_entity(iVar2))
				{
					if (!is_entity_dead(iVar2))
					{
						clear_ped_tasks(iVar2, 1, 0);
					}
				}
				if (network_has_control_of_entity(iVar0))
				{
					clear_ped_secondary_task(iVar0);
					if (func_483(iVar0, -1073489615))
					{
						task_aim_gun_at_entity(iVar0, get_player_ped(iParam0->f_10), -1, 0, 3);
					}
					else
					{
						task_react(iVar0, get_player_ped(iParam0->f_10), get_entity_coords(get_player_ped(iParam0->f_10), true, false), "DEFAULT_SHOCKED", 3f, 5f, 4);
					}
				}
			}
			if (!func_475(func_184(0), 0))
			{
				if (iParam0->f_13 != 1)
				{
					if (iParam0->f_11 == 1)
					{
						func_567(func_184(1), 0);
					}
					else
					{
						bVar5 = (((_is_ped_lassoed(iVar0) || _0xd453bb601d4a606e(iVar0)) || _is_ped_hogtied(iVar0)) && _0x285d36c5c72b0569(iVar2) > 5f);
						func_567(get_player_ped(iParam0->f_10), bVar5);
					}
				}
				else
				{
					func_188(1);
				}
				if (func_288())
				{
					if (iParam0->f_12 != 1)
					{
						if (func_187() != 0)
						{
							if (iParam0->f_11 == 1)
							{
								func_296(4, 1);
							}
							else
							{
								func_296(8, 1);
							}
						}
						else
						{
							func_296(2, 1);
						}
					}
				}
				else
				{
					func_296(512, 1);
				}
			}
			break;
		case -456522470:
			if (network_is_host_of_this_script())
			{
				Local_13.f_7.f_16 = get_network_time_accurate();
				if (iParam0->f_11 > 0)
				{
					Local_13.f_7.f_16 = get_time_offset(Local_13.f_7.f_16, iParam0->f_11);
				}
			}
			break;
		case -113210209:
			if (network_has_control_of_entity(iVar0))
			{
				func_334(&iVar1, 1, 1, 1);
			}
			func_296(32, 1);
			func_379(67108864);
			break;
		case 1258249610:
			if (network_has_control_of_entity(iVar2))
			{
				play_animal_vocalization(iVar2, "AGITATED", false);
				func_568(iVar2, 1f, _get_rider_of_mount(iVar2, true));
			}
			break;
		case 978130566:
			func_569(5000, 0, 51, 0);
			break;
		case -1451891840:
			if (!network_is_player_active(iParam0->f_10))
			{
				func_569(5000, 0, 51, 0);
			}
			else
			{
				func_570(iParam0->f_10, 5000, 0, 51, 0);
			}
			break;
	}
}

bool func_401(int iParam0)
{
	return &Local_794.f_269.f_1[iParam0] != 0;
}

bool func_402(int iParam0, int iParam1)
{
	return is_bit_set(&(Local_794.f_269.f_1[iParam0]), iParam1);
}

bool func_403(int iParam0, int iParam1)
{
	return is_bit_set(&(Local_794.f_269.f_5[iParam0]), iParam1);
}

void func_404(int iParam0, bool bParam1, bool bParam2)
{
	if (func_28() != 0)
	{
		return;
	}
	if (func_571())
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
		if (!&Global_1139381->f_3876.f_2[func_572(iParam0, 1)])
		{
			return;
		}
	}
	(Global_1139381->f_3876.f_2[func_572(iParam0, 1)])->f_2++;
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
	func_573(&Var0, uVar7);
}

void func_405(int iParam0, int iParam1)
{
	set_bit(Local_794.f_269.f_5[iParam0], iParam1);
}

int func_406(int iParam0)
{
	return Local_794.f_60.f_7[iParam0]->f_3;
}

void func_407(int iParam0, int iParam1, bool bParam2)
{
	iVar2 = func_406(iParam0);
	bVar3 = func_369(iParam1, 1);
	if (!is_bit_set(Local_794.f_60.f_5, iParam0))
	{
		if (network_does_network_id_exist(&(Local_13.f_31[iParam0])))
		{
			iVar1 = net_to_ped(&(Local_13.f_31[iParam0]));
			if (!does_entity_exist(iVar1))
			{
				return;
			}
			Local_794.f_60.f_7[iParam0] = iVar1;
			if (bVar3)
			{
				if (is_entity_dead(iVar1) || is_entity_dead(player_ped_id()))
				{
					Local_57[iParam1]->f_3.f_2[iParam0] = -1f;
				}
				else
				{
					Local_57[iParam1]->f_3.f_2[iParam0] = vdist(get_entity_coords(iVar1, true, false), get_entity_coords(player_ped_id(), true, false));
				}
			}
			if (network_is_host_of_this_script())
			{
				if (func_374(iParam0))
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
					func_574(iVar1, 1f, 0);
					sVar0 = func_575(iParam0);
					if (!_0x375f5870a7b8bec1(sVar0))
					{
						func_576(iVar1, sVar0, 1);
					}
				}
				if (func_554(iParam0))
				{
					set_ped_can_be_targetted(iVar1, false);
				}
				if (_is_this_model_a_horse(iVar2))
				{
					if (func_555(iParam0))
					{
						if (func_554(iParam0))
						{
						}
					}
					else
					{
						set_ped_can_be_targetted(iVar1, false);
					}
				}
				set_bit(&(Local_794.f_60.f_5), iParam0);
				if (bParam2)
				{
					func_577(iParam0);
				}
			}
		}
	}
}

bool func_408(int iParam0, var uParam1)
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

bool func_409(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_410(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_578(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_578(iVar4) && iVar4 != iVar0)
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
	if (func_28() == -1 && !func_579(iVar0))
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
				if (func_579(-183018591))
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
		if (iParam0 != Global_34 && func_578(iVar0))
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
		func_580(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_581(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_34)
	{
		if (func_582(iVar0))
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

void func_411(var uParam0, int iParam1, int iParam2)
{
	if (is_ped_human(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			decor_set_bool(iParam1, "HorseTeamA", true);
			break;
		case 1:
			decor_set_bool(iParam1, "HorseTeamB", true);
			break;
		case 2:
			decor_set_bool(iParam1, "HorseTeamA", true);
			decor_set_bool(iParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
}

int func_412(var uParam0, int iParam1, int iParam2)
{
	if (!func_370(iParam1, &Var0))
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

int func_413(var uParam0, int iParam1, int iParam2)
{
	if (!func_370(iParam1, &Var0))
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

Vector3 func_414(vector3 vParam0, vector3 vParam3)
{
	vVar0.x = ((vParam0.x + vParam3.x) * 0.5f);
	vVar0.f_1 = ((vParam0.y + vParam3.y) * 0.5f);
	vVar0.f_2 = ((vParam0.z + vParam3.z) * 0.5f);
	return vVar0;
}

void func_415(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_227(&iParam1, 8192);
	}
	_0x2161278c6322f740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
}

void func_416(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, 224, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 224, 16384, 0, -1, -1, 0);
	_0x2161278c6322f740(224, 16384, 0, -1, -1, iParam0);
}

Vector3 func_417()
{
	return Local_794.f_15;
}

int func_418(int iParam0)
{
	return iParam0;
}

bool func_419(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = func_184(iParam0);
	if (does_entity_exist(*uParam1))
	{
		uParam1->f_2 = func_305(iParam0, 255, 1);
		if (uParam1->f_2 < 0f)
		{
			uParam1->f_2 = 10000f;
		}
		return true;
	}
	return false;
}

void func_420(var uParam0, int iParam1)
{
	set_ped_config_flag(iParam1, 168, true);
	_0xbb1e41dd3d3c6250(iParam1, "SpAggroDefault", 0);
	decor_set_bool(iParam1, "UsesTracker", true);
}

void func_421(int iParam0)
{
	if (!func_222(&iVar0))
	{
		return;
	}
	func_413(&(Local_57[iVar0]->f_9), 0, iParam0);
}

struct<2> func_422(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_583(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_584(iParam1, iVar4) };
	if (!_stat_id_is_valid(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_423()
{
	Local_794.f_60.f_6 = 0;
	Local_794.f_60.f_2 = 0;
	Local_794.f_60.f_1 = -1;
}

void func_424()
{
	func_223(&(Local_794.f_115.f_78), 2, 0);
	func_223(&(Local_794.f_115.f_78), 1, 0);
	func_223(&(Local_794.f_115.f_78), 4, 0);
	func_223(&(Local_794.f_115.f_78), 5, 0);
	func_223(&(Local_794.f_115.f_78), 8, -1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		_0xde544b7ec0c187cc(Local_794.f_115.f_66[iVar0]);
		_0x20f4cb76689acdbc(Local_794.f_115.f_74[iVar0]);
		_0xde544b7ec0c187cc(Local_794.f_115.f_70[iVar0]);
		func_585(iVar0);
		iVar0++;
	}
}

void func_425(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_794.f_60.f_2 = (Local_794.f_60.f_2 || Local_57[iParam0]->f_3);
		Local_794.f_60.f_1 = (Local_794.f_60.f_1 && Local_57[iParam0]->f_3);
		Local_794.f_60.f_6 = (Local_794.f_60.f_6 || Local_57[iParam0]->f_3.f_1);
	}
}

void func_426(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		func_586(&(Local_794.f_115.f_78), &(Local_57[iParam0]->f_9), 2);
		func_586(&(Local_794.f_115.f_78), &(Local_57[iParam0]->f_9), 1);
		func_586(&(Local_794.f_115.f_78), &(Local_57[iParam0]->f_9), 4);
		func_586(&(Local_794.f_115.f_78), &(Local_57[iParam0]->f_9), 5);
		func_586(&(Local_794.f_115.f_78), &(Local_57[iParam0]->f_9), 6);
		func_586(&(Local_794.f_115.f_78), &(Local_57[iParam0]->f_9), 7);
		func_586(&(Local_794.f_115.f_78), &(Local_57[iParam0]->f_9), 0);
		func_586(&(Local_794.f_115.f_78), &(Local_57[iParam0]->f_9), 3);
		func_587(&(Local_794.f_115.f_78), &(Local_57[iParam0]->f_9), 8);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			_0xffddf802279be128(Local_57[iParam0]->f_9.f_5[iVar0], Local_794.f_115.f_66[iVar0], Local_794.f_115.f_66[iVar0]);
			_0xffddf802279be128(Local_57[iParam0]->f_9.f_5[iVar0], Local_794.f_115.f_66[iVar0], Local_794.f_115.f_70[iVar0]);
			_0xe4abe20dce7c7cfe(Local_57[iParam0]->f_9.f_5[iVar0], Local_794.f_115.f_66[iVar0], Local_794.f_115.f_74[iVar0]);
			func_588(func_418(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_427(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		Local_57[iParam2]->f_22 = (Local_57[iParam2]->f_22 || Local_57[iParam0]->f_22);
	}
}

int func_428(int iParam0)
{
	return iParam0;
}

int func_429(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam0) || !does_entity_exist(iParam1))
	{
		return 0;
	}
	fVar0 = vdist(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	Local_57[iParam3]->f_3.f_2[iParam2] = fVar0;
	if (fVar0 > Local_794.f_60.f_7[iParam2]->f_9)
	{
		return 0;
	}
	return 1;
}

void func_430(var uParam0)
{
	func_589(uParam0, 0f);
}

bool func_431(var uParam0)
{
	return func_590(*uParam0, 1);
}

bool func_432(var uParam0, float fParam1)
{
	if (!func_431(uParam0))
	{
		return false;
	}
	if (func_591(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_433(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_434(int iParam0)
{
	return true;
}

void func_435(int iParam0, int iParam1)
{
	func_227(&(Local_794.f_60.f_7[iParam0]->f_2), iParam1);
}

bool func_436(int iParam0, int iParam1)
{
	if (!func_369(iParam1, 0))
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	return func_181(Local_57[iParam1]->f_3, iParam0);
}

void func_437(int iParam0)
{
	if (!func_222(&iVar0))
	{
		return;
	}
	func_226(&(Local_57[iVar0]->f_3), iParam0);
}

void func_438(int iParam0)
{
	if (!func_222(&iVar0))
	{
		return;
	}
	func_227(&(Local_57[iVar0]->f_3), iParam0);
}

void func_439()
{
	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	if (!func_222(&iVar15))
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
	while (iVar0 < 3)
	{
		iVar14 = func_418(iVar0);
		if (!func_440(iVar14))
		{
		}
		else if (!func_441(iVar14, &Var1))
		{
		}
		else
		{
			if (!is_entity_dead(Var1) && is_bullet_in_area(get_entity_coords(Var1, true, false), 4f, true))
			{
				set_bit(&(Local_794.f_115.f_65), iVar14);
			}
			if (func_455(iVar14, iVar15))
			{
			}
			else if (has_entity_been_damaged_by_entity(Var1, iVar17, 0, 0))
			{
				func_592(iVar14);
				func_593(iVar14);
			}
		}
		iVar0++;
	}
}

bool func_440(int iParam0)
{
	return !func_443(&(Local_794.f_115.f_78), 5, iParam0);
}

bool func_441(int iParam0, var uParam1)
{
	if (!is_bit_set(Local_794.f_115.f_122, iParam0))
	{
		return false;
	}
	*uParam1 = &Local_794.f_115.f_82[iParam0];
	uParam1->f_1 = Local_794.f_115.f_82[iParam0]->f_1;
	uParam1->f_2 = Local_794.f_115.f_82[iParam0]->f_2;
	if (!does_entity_exist(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_442(var uParam0, int iParam1)
{
	if (!func_594(iParam1))
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
	if (func_595(*uParam0, &(Local_794.f_115.f_32), &uVar1, uParam0->f_2))
	{
		return true;
	}
	if (is_entity_touching_entity(player_ped_id(), *uParam0))
	{
		return true;
	}
	return false;
}

bool func_443(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 10)
	{
		return false;
	}
	if (!func_370(iParam1, &Var0))
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

void func_444(int iParam0)
{
}

bool func_445(int iParam0)
{
	return func_443(&(Local_794.f_115.f_78), 4, iParam0);
}

bool func_446(int iParam0)
{
	if (!func_222(&iVar0))
	{
		return false;
	}
	return func_443(&(Local_57[iVar0]->f_9), 4, iParam0);
}

bool func_447(int iParam0)
{
	return _0x179a6f0ee2e79026(Local_794.f_115.f_70[iParam0]);
}

void func_448(int iParam0)
{
	if (!func_222(&iVar0))
	{
		return;
	}
	func_412(&(Local_57[iVar0]->f_9), 4, iParam0);
}

bool func_449(int iParam0)
{
	if (!func_222(&iVar0))
	{
		return false;
	}
	return _0x179a6f0ee2e79026(Local_57[iVar0]->f_9.f_5[iParam0]);
}

void func_450(int iParam0)
{
	if (!func_222(&iVar0))
	{
		return;
	}
	_0xde544b7ec0c187cc(Local_57[iVar0]->f_9.f_5[iParam0]);
}

bool func_451(int iParam0)
{
	return func_443(&(Local_794.f_115.f_78), 6, iParam0);
}

bool func_452(int iParam0)
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

bool func_453(int iParam0, int iParam1)
{
	if (!func_369(iParam1, 0))
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	return func_443(&(Local_57[iParam1]->f_9), 1, iParam0);
}

bool func_454(int iParam0)
{
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	iVar2 = func_184(2);
	iVar3 = get_player_ped(player_id());
	if (is_entity_touching_entity(iVar3, iVar0) && !func_431(&(Local_794.f_19.f_23)))
	{
		Local_794.f_19.f_12++;
	}
	if (!func_431(&(Local_794.f_19.f_26)))
	{
		if (!is_entity_dead(iVar2))
		{
			if (func_185(iVar3, iVar2, 0))
			{
				Var4 = { func_332(1258249610) };
				func_333(&Var4);
				func_514(&(Local_794.f_19.f_26), 0);
			}
		}
	}
	if (Local_794.f_19.f_12 > 75)
	{
		Local_794.f_19.f_29 = 2048;
		return true;
	}
	if (does_entity_exist(iVar0))
	{
		if (_0x5203038ff8bae577(iVar0, 15, 3000) || _0x5203038ff8bae577(iVar0, 38, 3000))
		{
			if (is_ped_ragdoll(iVar0))
			{
				Local_794.f_19.f_29 = 2048;
				return true;
			}
		}
	}
	if (func_432(&(Local_794.f_19.f_26), 3f))
	{
		Local_794.f_19.f_29 = 1024;
		return true;
	}
	if (!is_entity_dead(iVar2))
	{
		if (_0x4642182a298187d0(iVar3, 5, &Var19, 4, 2) == 3)
		{
			if (Var19.f_1 == func_596(iVar2))
			{
				Local_794.f_19.f_29 = 1024;
				return true;
			}
		}
	}
	if (Local_13.f_7 == 1 || Local_13.f_7 == 7)
	{
		if (!func_186(16384) && func_187() != 0)
		{
			if (does_entity_exist(iVar1) && is_entity_dead(iVar1))
			{
				iVar34 = func_597(Global_34, &uVar24, 8);
				if (iVar34 > 0)
				{
					iVar33 = 0;
					while (iVar33 < 8)
					{
						if (does_entity_exist(&(uVar24[iVar33])))
						{
							if (is_entity_a_ped(&(uVar24[iVar33])))
							{
								if (get_ped_index_from_entity_index(&(uVar24[iVar33])) == iVar1)
								{
									Local_794.f_19.f_29 = 1024;
									set_ped_config_flag(iVar0, 467, true);
									func_499(28, -417894478, 1);
									return true;
								}
							}
						}
						iVar33++;
					}
				}
				if (func_598(iVar3))
				{
					iVar23 = func_599(Global_34);
					if (does_entity_exist(iVar23))
					{
						if (is_entity_a_ped(iVar23))
						{
							if (get_ped_index_from_entity_index(iVar23) == iVar1)
							{
								Local_794.f_19.f_29 = 1024;
								set_ped_config_flag(iVar0, 467, true);
								func_499(28, -417894478, 1);
								return true;
							}
						}
					}
				}
			}
		}
	}
	vVar35 = { func_414(get_entity_coords(iVar0, true, false), func_272()) };
	fVar38 = (get_distance_between_coords(vVar35, func_272(), true) * 0.75f);
	if (is_shocking_event_in_sphere(-624326149, vVar35, fVar38) || is_shocking_event_in_sphere(-732566870, vVar35, fVar38))
	{
		Local_794.f_19.f_29 = 16;
		return true;
	}
	if (_0x5407b7288d0478b7(iVar3, 256) > 0 && func_481(iVar3, iVar0, 1, 1) < 25f)
	{
		if (!func_475(iVar1, 0) && is_ped_in_combat(iVar1, iVar3))
		{
			return false;
		}
		Local_794.f_19.f_29 = 8192;
		return true;
	}
	return false;
}

bool func_455(int iParam0, int iParam1)
{
	if (!func_369(iParam1, 0))
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	if (!func_600(int_to_participantindex(iParam1)))
	{
		return false;
	}
	return func_443(&(Local_57[iParam1]->f_9), 3, iParam0);
}

bool func_456(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_6)
	{
		func_601(iParam2, 1, iVar0);
	}
	if (!Global_1940258->f_6 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_13 = fParam5;
		}
		else
		{
			iParam2->f_13 = vdist(Global_35, get_entity_coords(iParam0, true, false));
		}
		if (!iParam2->f_2 & 128 != 0)
		{
			if (func_602(iParam0, iParam2))
			{
				*iParam3 = 128;
				func_603(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258->f_21)
		{
			if (!iParam2->f_2 & 8 != 0)
			{
				if (func_604(iParam0, iParam2))
				{
					*iParam3 = 8;
					func_603(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (func_605(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					func_603(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_606(iParam0, iParam2))
				{
					*iParam3 = 64;
					func_603(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_20 && func_607(player_id(), 0, 1, iParam2->f_2 & 524288 == 0))
		{
			if (!iParam2->f_2 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_603(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258->f_19)
		{
			if (func_608(iParam2, 1065353216))
			{
				if (!iParam2->f_2 & 4 != 0)
				{
					if (func_609(Global_34, iParam0, iParam2))
					{
						*iParam3 = 4;
						func_603(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_2 & 256 != 0)
				{
					if (func_610(Global_34, iParam0, iParam2))
					{
						*iParam3 = 256;
						func_603(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_2 & 16 != 0)
		{
			if ((iParam2->f_6 - Global_1940258->f_23) < 300)
			{
				if (func_611(Global_34, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					func_603(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (func_611(Global_34, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				func_603(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258->f_33 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_612(iParam0, iParam2))
				{
					*iParam3 = 32;
					func_603(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1940258->f_19 || iParam2->f_13 < 20f)
			{
				if (func_613(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					func_603(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_24 || Global_1940258->f_25)
		{
			if (!iParam2->f_2 & 2 != 0)
			{
				if (func_614(iParam2, 4000))
				{
					if ((func_615(iParam0, Global_1940258->f_35, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_616(iParam2, iParam0)) && func_617(iParam2, iParam0))
					{
						*iParam3 = 2;
						func_603(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_2 & 2 != 0)
		{
			if (iParam2->f_13 < 4f)
			{
				if ((func_615(iParam0, Global_1940258->f_35, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_616(iParam2, iParam0)) && func_617(iParam2, iParam0))
				{
					*iParam3 = 2;
					func_603(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (Global_1940258->f_34 == 0)
			{
				if (Global_1940258->f_35 != 0)
				{
					if (func_618(iParam0, Global_1940258->f_35))
					{
						func_619();
						*iParam3 = 2;
						func_603(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (iParam2->f_13 < 10f)
			{
				if (func_620(iParam2, iParam0) || (iParam2->f_10 > 0 && (func_621() - iParam2->f_10) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_619();
						*iParam3 = 2;
						func_603(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1940258->f_36 != 0)
			{
				if (func_622())
				{
					if (func_618(iParam0, Global_1940258->f_36))
					{
						func_619();
						*iParam3 = 2;
						func_603(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_2 & 1024 != 0)
		{
			if (func_623(iParam2, iParam0))
			{
				*iParam3 = 1024;
				func_603(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (func_624(iParam2, iParam0))
		{
			*iParam3 = 1048576;
			func_603(iParam0, iParam2, *iParam3);
			return true;
		}
		if (iParam2->f_13 < iParam2->f_29)
		{
			if (!iParam2->f_2 & 2048 != 0)
			{
				if (func_625(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					func_603(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_7 == 2)
				{
					if (func_626(iParam0, iParam2))
					{
						*iParam3 = 8192;
						func_603(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_627(iParam0, iParam2))
				{
					*iParam3 = 32768;
					func_603(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_13 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_628(iParam2, 4000))
				{
					if (func_629(&iParam0, iParam2))
					{
						*iParam3 = 512;
						func_603(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_13 < iParam2->f_21)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_630(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_5 = 0;
					func_603(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_2 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_631(iParam2, iParam0))
			{
				*iParam3 = 1;
				func_603(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_457(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_632(iParam0, vVar0, iParam2);
}

bool func_458(int iParam0, int iParam1, int iParam2)
{
	if (!func_633(iParam0, iParam1, iParam2, 0))
	{
		return false;
	}
	func_634(&iVar4, iParam1->f_12);
	func_636(&(Local_794.f_60.f_7[iParam0]), &uVar0, iParam1->f_3, func_635(iParam1), iParam1->f_9, iParam1->f_10, iParam1->f_11, 0, 0);
	return func_637(&iVar4, &uVar0);
}

bool func_459(int iParam0)
{
	if (!func_222(&iVar0))
	{
		return false;
	}
	return func_443(&(Local_57[iVar0]->f_9), 0, iParam0);
}

bool func_460(int iParam0, int iParam1)
{
	if (is_bit_set(Local_794.f_115.f_64, iParam0))
	{
		return false;
	}
	if (func_181(Local_794.f_115.f_2, 256))
	{
		return false;
	}
	if (iParam1->f_2 < 0f || iParam1->f_2 > IntToFloat(func_638(&(Local_794.f_115))))
	{
		return false;
	}
	return true;
}

bool func_461(int iParam0, int iParam1, int iParam2)
{
	if (!func_460(iParam0, iParam1))
	{
		return false;
	}
	if (Local_57[iParam2]->f_9.f_4 != 0 && get_time_difference(Local_57[iParam2]->f_9.f_4, get_network_time_accurate()) <= 3000)
	{
		return true;
	}
	return false;
}

bool func_462(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		iParam1 = Local_794.f_19.f_29;
	}
	if (((Local_13.f_7.f_12 || (func_186(512) && func_187() == 0)) || (iParam1 == 8 && !is_ped_human(func_184(iParam0)))) || (iParam1 == 8192 && !is_ped_human(func_184(iParam0))))
	{
		return false;
	}
	iVar0 = func_184(0);
	iVar1 = get_player_ped(player_id());
	if (((iParam1 == 4 || iParam1 == 256) || is_ped_shooting(iVar1)) || (iParam1 == 2 && !is_ped_human(func_184(iParam0))))
	{
		if ((Local_13.f_7 == 1 || Local_13.f_7 == 3) || Local_13.f_7 == 5)
		{
			if (func_639(get_entity_coords(iVar0, false, false), 0.4f, 0.6f, 0.4f, 0.6f))
			{
				Global_1940258->f_19 = 0;
				if (!func_186(512))
				{
					func_499(32, 1744022339, 0);
					func_392(0, 0, 0, player_id());
				}
				return false;
			}
		}
	}
	if (!func_186(1073741824) && !func_186(4194304))
	{
		if ((func_640(iParam1) || iParam1 == 65536) || Local_794.f_19.f_12 > 75)
		{
			func_379(1073741824);
			func_379(4194304);
			func_388(player_id(), 1, 26);
			func_188(0);
			func_296(32, 1);
			Local_794.f_19.f_12 = 0;
			func_430(&(Local_794.f_19.f_23));
			return false;
		}
	}
	if (iParam1 == 8192)
	{
		iVar2 = func_641(iVar1);
		if ((does_entity_exist(iVar2) && !is_ped_human(get_ped_index_from_entity_index(iVar2))) && !is_ped_in_combat(iVar1, 0))
		{
			return false;
		}
		func_379(-2147483648);
	}
	if (func_186(2048))
	{
		func_379(-2147483648);
	}
	if (func_395())
	{
		func_379(268435456);
	}
	if (Local_13.f_7 != 9)
	{
		if (((iParam1 != 8 && iParam1 != 1024) && iParam1 != 2048) && iParam1 != 65536)
		{
			func_392(0, 1, 0, 255);
		}
		else
		{
			func_392(0, 1, 1, 255);
		}
	}
	if (func_642(iParam1))
	{
		func_379(1048576);
	}
	else if (iParam1 == 1048576 || bParam2)
	{
		if (!bParam2)
		{
			if (!func_507(2097152, 255))
			{
				func_379(2097152);
			}
		}
	}
	func_296(64, 1);
	return true;
}

void func_463(int iParam0, bool bParam1)
{
	if (!func_222(&iVar0))
	{
		return;
	}
	func_413(&(Local_57[iVar0]->f_9), 1, iParam0);
	if (bParam1)
	{
		Local_57[iVar0]->f_9.f_9[iParam0] = get_network_time_accurate();
	}
}

bool func_464(int iParam0)
{
	return func_443(&(Local_794.f_115.f_78), 1, iParam0);
}

bool func_465(int iParam0, int iParam1)
{
	if (!func_369(iParam1, 0))
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	return func_443(&(Local_57[iParam1]->f_9), 2, iParam0);
}

bool func_466(int iParam0)
{
	return true;
}

void func_467(int iParam0)
{
}

void func_468(int iParam0)
{
	if (!func_222(&iVar0))
	{
		return;
	}
	func_413(&(Local_57[iVar0]->f_9), 2, iParam0);
}

bool func_469(int iParam0)
{
	_0x20f4cb76689acdbc(&uVar0);
	_0x64f765d9a1f8f02c(&uVar0, Local_794.f_115.f_74[iParam0], &uVar0);
	return !_0x179a6f0ee2e79026(&uVar0);
}

bool func_470(int iParam0, var uParam1, int iParam2, var uParam3)
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

bool func_471(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	return _0x72b2e00c9bac6789(Local_794.f_115.f_66[iParam0], iParam1);
}

bool func_472(int iParam0, var uParam1, int iParam2, var uParam3)
{
	return true;
}

void func_473(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return;
	}
	if (!func_222(&iVar0))
	{
		return;
	}
	_0x31010318ba9897ac(Local_57[iVar0]->f_9.f_5[iParam0], iParam1);
}

float func_474()
{
	if (Local_794.f_246.f_3 == 0)
	{
		Local_794.f_246.f_3 = get_game_timer();
		return 0.03125f;
	}
	iVar0 = get_game_timer();
	fVar1 = (to_float((iVar0 - Local_794.f_246.f_3)) * 0.001f);
	Local_794.f_246.f_3 = iVar0;
	return fVar1;
}

bool func_475(int iParam0, bool bParam1)
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

bool func_476(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_643(vVar0, vParam0) > func_643(vVar0, get_entity_coords(iParam3, true, false));
}

int func_477(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, float fParam6, bool bParam7)
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
			else if (func_644(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_645(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_646() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_478(var uParam0, int iParam1, float fParam2)
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
	func_176(uParam0);
	return true;
}

bool func_479()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

bool func_480(int iParam0)
{
	if (func_647(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

float func_481(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_482()
{
	switch (func_187())
	{
		case 0:
			return 48f;
		case 1:
			return 40f;
		default:
			break;
	}
	return 48f;
}

bool func_483(int iParam0, int iParam1)
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

bool func_484(int iParam0)
{
	return func_181(Local_794.f_19.f_1, iParam0);
}

bool func_485(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (vdist2(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_648(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_486()
{
	if (!func_649(&uVar2))
	{
		return uVar2;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!_does_thread_exist(&(Global_1291734->f_11.f_561[iVar0])))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 < 0)
	{
		return false;
	}
	iVar3 = get_id_of_this_thread();
	if (!is_thread_active(iVar3, false) || _0x30bed53646c86d11(iVar3))
	{
		return false;
	}
	Global_1291734->f_11.f_560++;
	Global_1291734->f_11.f_561[iVar1] = iVar3;
	return true;
}

void func_487(int iParam0)
{
	func_226(&(Local_794.f_19.f_1), iParam0);
}

void func_488()
{
	iVar0 = get_id_of_this_thread();
	if (!func_650(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (iVar0 == &Global_1291734->f_11.f_561[iVar1])
		{
			Global_1291734->f_11.f_561[iVar1] = 0;
			Global_1291734->f_11.f_560 = (Global_1291734->f_11.f_560 - 1);
			return;
		}
		iVar1++;
	}
}

void func_489(int iParam0)
{
	func_227(&(Local_794.f_19.f_1), iParam0);
}

void func_490(int iParam0)
{
	if (!func_222(&iVar0))
	{
		return;
	}
	func_227(&(Local_57[iVar0]->f_1), iParam0);
}

void func_491(int iParam0, int iParam1)
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, iParam0, -1, -1, 255);
	Var31 = { func_422(iParam0, 1346578557) };
	if (!stat_id_get_int(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	set_bit(&iVar33, iParam1);
	if (!func_123(&Var0, 4) && func_651(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!stat_id_set_int(&Var31, iVar33, true))
	{
	}
	(*Global_1268861)[network_player_id_to_int()]->f_56[iParam0] = iVar33;
}

void func_492(int iParam0)
{
	func_652(iParam0);
}

void func_493(int iParam0)
{
	if (func_130(Global_1272030[iParam0]))
	{
		return;
	}
	func_653(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_32(&Var2, iVar0, iVar1, -1, 255);
	func_131((*Global_1272030)[iParam0]);
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_654(153786159) };
		stat_id_set_int(&Var34, iVar33, true);
		Var34 = { func_654(217123284) };
		stat_id_set_int(&Var34, Global_1296859->f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_654(945205875) };
		stat_id_set_int(&Var37, iVar36, true);
		Var37 = { func_654(890183498) };
		stat_id_set_int(&Var37, Global_1296859->f_21, true);
	}
}

void func_494(int iParam0)
{
	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_534(&Var0);
}

void func_495(struct<2> Param0)
{
	if (func_323(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_323(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_323(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_655(Param0, &Var0))
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

void func_496(int iParam0)
{
	Var0 = { func_422(iParam0, -1797584255) };
	_0x6a0184e904cdf25e(&Var0, 1);
}

void func_497(int iParam0, int iParam1, int iParam2)
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

bool func_498()
{
	return Local_794.f_246.f_4;
}

void func_499(int iParam0, int iParam1, bool bParam2)
{
	if (!func_517(iParam0))
	{
		Var0.f_10 = 255;
		Var0 = { func_332(377515857) };
		Var0.f_11 = iParam0;
		Var0.f_12 = iParam1;
		func_333(&Var0);
		if (bParam2)
		{
			func_525(player_id());
		}
	}
}

bool func_500(int iParam0)
{
	return get_ped_config_flag(iParam0, 161, false);
}

bool func_501(int iParam0, char* sParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_dead(iParam0))
		{
			if (has_anim_event_fired(iParam0, get_hash_key(sParam1)))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_502(int iParam0, int iParam1)
{
	return is_entity_playing_anim(iParam0, "SCRIPT_RE@HUNTER@RIFLE", func_276(iParam1), 1);
}

void func_503()
{
	iVar0 = func_184(1);
	iVar1 = get_player_ped(player_id());
	if (is_ped_facing_ped(iVar0, iVar1, 30f) && func_305(1, 255, 1) < func_656(is_ped_on_mount(iVar1), 8f, 5f))
	{
		if (!func_507(33554432, 255))
		{
			func_379(33554432);
		}
	}
	else
	{
		func_490(33554432);
	}
	if (Local_13.f_7.f_1 != 5)
	{
		if ((!func_657(1) && !func_395()) && !func_502(iVar0, 1))
		{
			if (func_186(33554432))
			{
				if (!func_431(&(Local_794.f_19.f_14)))
				{
					func_430(&(Local_794.f_19.f_14));
				}
			}
			else if (func_431(&(Local_794.f_19.f_14)))
			{
				func_433(&(Local_794.f_19.f_14));
			}
		}
		else if (func_431(&(Local_794.f_19.f_14)))
		{
			func_433(&(Local_794.f_19.f_14));
		}
		if (func_513(&(Local_794.f_19.f_14), func_656(Local_13.f_7.f_9 < 2, 3f, 1.5f)) || (func_431(&(Local_794.f_19.f_14)) && func_305(1, 255, 1) < 2.5f))
		{
			if (Local_13.f_7.f_9 < 2)
			{
				func_379(16777216);
				func_385(5, 0);
			}
			else
			{
				func_388(func_387(1, 59287, 0, 1, 0), 0, 26);
				func_188(0);
				func_296(32, 1);
			}
		}
	}
	else if (func_432(&(Local_794.f_19.f_14), 5f))
	{
		func_388(func_387(1, 59287, 0, 1, 0), 0, 26);
		func_188(0);
		func_296(32, 1);
	}
}

bool func_504(int iParam0)
{
	return func_181(Local_794.f_19.f_37, iParam0);
}

bool func_505(int iParam0, int iParam1, float fParam2)
{
	return func_658(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_506(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	else if (func_648(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_507(int iParam0, int iParam1)
{
	if (!func_369(iParam1, 0))
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	if (!func_369(iParam1, 1))
	{
		return false;
	}
	if (func_181(Local_57[iParam1]->f_1, iParam0))
	{
		return true;
	}
	return false;
}

void func_508(int iParam0, bool bParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			set_ped_config_flag(iParam0, 263, !bParam1);
		}
		set_ped_config_flag(iParam0, 138, bParam1);
		set_ped_config_flag(iParam0, 488, bParam1);
	}
}

void func_509(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	close_sequence_task(*iParam1);
	if (!bParam5 || !is_entity_dead(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			_task_perform_sequence_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			task_perform_sequence(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		clear_sequence_task(iParam1);
	}
}

bool func_510(float fParam0)
{
	iVar0 = func_184(1);
	fVar1 = _0x285d36c5c72b0569(iVar0);
	if ((fVar1 > 0f && fVar1 > fParam0) && fVar1 < 10f)
	{
		if (!func_186(256))
		{
			Var2 = { func_332(1948200198) };
			func_333(&Var2);
		}
		return true;
	}
	return false;
}

bool func_511(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = participant_id_to_int();
	}
	return func_181(Local_57[iParam1]->f_1.f_1, iParam0);
}

void func_512(int iParam0, int iParam1, int iParam2)
{
	task_whistle_anim(iParam0, iParam1, iParam2);
}

bool func_513(var uParam0, float fParam1)
{
	if (func_432(uParam0, fParam1))
	{
		func_433(uParam0);
		return true;
	}
	return false;
}

void func_514(var uParam0, bool bParam1)
{
	if (bParam1 || !func_431(uParam0))
	{
		func_430(uParam0);
	}
}

bool func_515(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_in_combat(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_516(int iParam0, int iParam1)
{
	iVar0 = func_184(2);
	if (!func_186(2048))
	{
		if (!is_entity_dead(iVar0) && _is_mount_seat_free(iVar0, -1))
		{
			if (func_522(iVar0, Local_794.f_15, 1) > 10f)
			{
				func_512(iParam0, 869278708, 1971704925);
			}
		}
		if (!is_entity_dead(iParam1))
		{
			_task_smart_flee_style_ped(iParam0, iParam1, 4, 0, -1082130432, -1, iVar0);
		}
		else
		{
			_task_smart_flee_style_coord(iParam0, get_entity_coords(iParam1, false, false), 4, 0, -1082130432, -1, iVar0);
		}
		func_379(2048);
	}
}

bool func_517(int iParam0)
{
	if (is_bit_set(Local_13.f_7.f_7, iParam0) || is_bit_set(Local_794.f_19.f_11, iParam0))
	{
		return true;
	}
	return false;
}

void func_518(int iParam0)
{
	set_bit(&(Local_794.f_19.f_11), iParam0);
	if (network_is_host_of_this_script())
	{
		set_bit(&(Local_13.f_7.f_7), iParam0);
	}
}

bool func_519(int iParam0, var uParam1)
{
	return func_511(16384, iParam0);
}

void func_520()
{
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	if (network_has_control_of_entity(iVar0))
	{
		set_ped_using_action_mode(iVar0, false, -1, 0);
		_0x58f7db5bd8fa2288(iVar0);
	}
	clear_sequence_task(&(Local_794.f_19.f_32));
	_0x23767d80c7eed7c6(&(Local_794.f_19.f_32), -106360093);
	if (func_187() != 1)
	{
		task_loot_entity(0, iVar1);
	}
	if (func_187() != 0)
	{
		if (func_187() == 1)
		{
			task_pickup_carriable_entity(0, iVar1);
		}
	}
	if (network_has_control_of_entity(iVar0))
	{
		func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
	}
	else
	{
		close_sequence_task(Local_794.f_19.f_32);
	}
}

void func_521()
{
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	if (network_has_control_of_entity(iVar0))
	{
		fVar2 = func_522(iVar0, get_entity_coords(iVar1, false, false), 1);
		set_ped_max_move_blend_ratio(iVar0, 1.5f);
		if (fVar2 < 12f)
		{
			if (!func_186(4096))
			{
				set_current_ped_weapon(iVar0, -1569615261, false, 0, false, false);
				task_swap_weapon(iVar0, 1, 1, 0, 0);
				task_look_at_coord(iVar0, get_entity_coords(iVar1, false, false), 10000, 0, 51, 0);
				func_379(4096);
			}
		}
		if (fVar2 < 12f)
		{
			if (!func_186(4096))
			{
				set_current_ped_weapon(iVar0, -1569615261, false, 0, false, false);
				task_swap_weapon(iVar0, 1, 1, 0, 0);
				func_379(4096);
			}
		}
		else if (!func_186(8192))
		{
			fVar3 = (fVar2 / 20f);
			fVar4 = func_659(1f, 1.5f, fVar3);
			set_ped_min_move_blend_ratio(iVar0, fVar4);
			set_ped_max_move_blend_ratio(iVar0, fVar4);
		}
	}
}

float func_522(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

Vector3 func_523(vector3 vParam0, int iParam3, float fParam4)
{
	vVar0 = { func_660(vParam0, iParam3, fParam4) };
	return vParam0 + vVar0;
}

int func_524(int iParam0, int iParam1)
{
	if (func_453(iParam1, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_525(int iParam0)
{
	Var0.f_10 = 255;
	if (network_is_player_active(iParam0))
	{
		Var0 = { func_332(-1451891840) };
		Var0.f_10 = iParam0;
	}
	else
	{
		Var0 = { func_332(978130566) };
	}
	func_333(&Var0);
}

void func_526(int iParam0, int iParam1)
{
	if (!func_556(255))
	{
		func_189(iParam0);
		return;
	}
	if (!does_blip_exist(&(Local_794.f_19.f_2[iParam0])))
	{
		Local_794.f_19.f_2[iParam0] = _blip_add_for_entity(iParam1, func_184(iParam0));
		set_blip_name_from_text_file(&(Local_794.f_19.f_2[iParam0]), "NB_STALKING_HUNTER_BLIP");
	}
}

char* func_527(int iParam0)
{
	iVar0 = func_184(1);
	iVar1 = func_457(iVar0, get_player_ped(iParam0), 1060437492);
	switch (iVar1)
	{
		case 1:
			return func_276(24);
		case 3:
			return func_276(25);
		case 2:
			return func_276(26);
		case 0:
			return func_276(27);
		default:
			break;
	}
	return func_276(27);
}

void func_528(int iParam0, vector3 vParam1)
{
	iVar0 = func_184(2);
	if (!func_186(2048))
	{
		if (!is_entity_dead(iVar0) && _is_mount_seat_free(iVar0, -1))
		{
			if (func_522(iVar0, Local_794.f_15, 1) > 10f)
			{
				func_512(iParam0, 869278708, 1971704925);
			}
		}
		_task_smart_flee_style_coord(iParam0, vParam1, 4, 0, -1082130432, -1, iVar0);
		func_379(2048);
	}
}

int func_529(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_661(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_530(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_661(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_531(int iParam0)
{
	iVar0 = -1;
	if (func_346(&Var1, iParam0))
	{
		iVar0 = ((func_662() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_532(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_533(int iParam0, int iParam1)
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

void func_534(var uParam0)
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
	func_663(uParam0, uParam0->f_1);
}

bool func_535(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_664(iParam0) - 1))
	{
		return false;
	}
	return true;
}

bool func_536(int iParam0, int iParam1)
{
	Var0 = { func_422(iParam1, 896190569) };
	if (!stat_id_get_int(&Var0, &iVar2))
	{
		return false;
	}
	return is_bit_set(iVar2, iParam0);
}

int func_537(int iParam0, int iParam1, bool bParam2)
{
	if (!func_665(iParam0))
	{
		return 0;
	}
	iVar0 = func_184(iParam0);
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

var func_538(int iParam0, int iParam1)
{
	return func_666(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_539(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	trigger_script_event(1, uParam0, 15, 41, &uParam1);
}

void func_540(var uParam0, int iParam1, int iParam2)
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
		func_198(uParam0, iVar0);
		iVar0++;
	}
}

float func_541(int iParam0)
{
	return iParam0->f_26;
}

void func_542(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

void func_543(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(uParam0, 1);
	}
	else
	{
		func_227(uParam0, 1);
	}
}

void func_544(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_227(&(uParam0->f_2), 16384);
	}
	else
	{
		func_226(&(uParam0->f_2), 16384);
	}
}

void func_545(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_227(&(uParam0->f_2), 128);
	}
	else
	{
		func_226(&(uParam0->f_2), 128);
	}
}

void func_546(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_226(uParam0, 268435456);
	}
	else
	{
		func_227(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_226(uParam0, 1073741824);
	}
	else
	{
		func_227(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_226(uParam0, 536870912);
	}
	else
	{
		func_227(uParam0, 536870912);
	}
}

void func_547(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(uParam0, 512);
	}
	else
	{
		func_227(uParam0, 512);
	}
}

void func_548(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(uParam0, 2);
	}
	else
	{
		func_227(uParam0, 2);
	}
}

int func_549(int iParam0)
{
	return Local_794.f_60.f_7[iParam0]->f_4;
}

float func_550(int iParam0)
{
	return Local_794.f_60.f_7[iParam0]->f_5;
}

Vector3 func_551(int iParam0)
{
	return Local_794.f_60.f_7[iParam0]->f_6;
}

bool func_552(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_667(iParam1))
	{
		return false;
	}
	iVar0 = func_668(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_553(int iParam0, bool bParam1)
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

bool func_554(int iParam0)
{
	return func_175(iParam0, 32);
}

bool func_555(int iParam0)
{
	return func_175(iParam0, 64);
}

bool func_556(int iParam0)
{
	return func_133(8, iParam0);
}

int func_557(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_558(int iParam0, int iParam1)
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
	if (func_228(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_228(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_228(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_228(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_228(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_228(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_228(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_228(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_559(int iParam0, int iParam1)
{
	if (!func_369(iParam1, 0))
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	if (!func_443(&(Local_57[iParam1]->f_9), 8, iParam0))
	{
		return !func_443(&(Local_57[iParam1]->f_9), 1, iParam0);
	}
	return false;
}

float func_560(vector3 vParam0, vector3 vParam3)
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

bool func_561(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_562(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

char* func_563(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_669("RE_HU_HTL_V1_INTRO", "RE_HU_GRI_V1_INTRO");
		case 1:
			return func_669("RE_HU_HTL_V1_GREET", "RE_HU_GRI_V1_GREET");
		case 2:
			return func_669("RE_HU_HTL_V1_ANTAGONIZE", "RE_HU_GRI_V1_ANTAGONIZE");
		case 3:
			return func_669("RE_HU_HTL_V1_ENCOURAGE", "RE_HU_GRI_V1_ENCOURAGE");
		case 4:
			return func_669("RE_HU_HTL_V1_ANTAGONIZE_2", "RE_HU_GRI_V1_ANTAGONIZE_2");
		case 5:
			return func_669("RE_HU_HTL_V1_ENCOURAGE_2", "RE_HU_GRI_V1_ENCOURAGE_2");
		case 6:
			return func_669("RE_HU_HTL_V1_ANTAGONIZE_3", "RE_HU_GRI_V1_ANTAGONIZE_3");
		case 7:
			return func_669("RE_HU_HTL_V1_ANTAGONIZE_4", "RE_HU_GRI_V1_ANTAGONIZE_4");
		case 8:
			return func_669("RE_HU_HTL_V1_HIT_POS", "RE_HU_GRI_V1_HIT_POS");
		case 9:
			return func_669("RE_HU_HTL_V1_HIT_NEG", "RE_HU_GRI_V1_HIT_NEG");
		case 10:
			return func_669("RE_HU_HTL_V1_MISS_POS", "RE_HU_GRI_V1_MISS_POS");
		case 11:
			return func_669("RE_HU_HTL_V1_MISS_NEG", "RE_HU_GRI_V1_MISS_NEG");
		case 12:
			return func_669("RE_HU_HTL_V1_PLY_ALERT_GREET", "RE_HU_GRI_V1_PLY_ALERT_GREET");
		case 13:
			return func_669("RE_HU_HTL_V1_PLY_ALERT_ANT", "RE_HU_GRI_V1_PLY_ALERT_ANT");
		case 14:
			return func_669("RE_HU_HTL_V1_SHH", "RE_HU_GRI_V1_SHH");
		case 15:
			return func_669("RE_HU_HTL_V1_REPLY_SHH_A", "RE_HU_GRI_V1_REPLY_SHH_A");
		case 16:
			return func_669("RE_HU_HTL_V1_REPLY_SHH_B", "RE_HU_GRI_V1_REPLY_SHH_B");
		case 17:
			return "GENERIC_FRIGHTENED_MED";
		case 18:
			return "GENERIC_FRIGHTENED_HIGH";
		case 19:
			return func_669("RE_HU_HTL_V1_NEW_TRACKS", "RE_HU_GRI_V1_NEW_TRACKS");
		case 20:
			return func_669("RE_HU_HTL_V1_DROPPINGS", "RE_HU_GRI_V1_DROPPINGS");
		case 21:
			return func_669("RE_HU_HTL_V1_RECENTLY", "RE_HU_GRI_V1_RECENTLY");
		case 22:
			return func_669("RE_HU_HTL_V1_SOME_TRACKS", "RE_HU_GRI_V1_SOME_TRACKS");
		case 23:
			return func_669("RE_HU_HTL_V1_ITS_CLOSE", "RE_HU_GRI_V1_ITS_CLOSE");
		case 24:
			return func_669("CHAT_FLATTER", "RE_HU_GRI_V1_INSPECT");
		case 25:
			return "GOODBYE_START_MOVING";
		case 26:
			return func_669("INSULT_RESPONSE", "RE_HU_GRI_V1_OWNPATCH");
		case 28:
			return func_669("RE_HU_HTL_V1_STEAL", "RE_HU_GRI_V1_STEAL");
		case 27:
			return func_669("RE_HU_HTL_V1_SCARE", "RE_HU_GRI_V1_SCARE");
		case 29:
			return func_669("RE_HU_HTL_V1_SAD_EXIT", "RE_HU_GRI_V1_SAD_EXIT");
		case 30:
			return func_669("RE_HU_HTL_V1_FLEE", "RE_HU_GRI_V1_FLEE");
		case 31:
			return func_669("RE_HU_HTL_V1_AGGRO", "RE_HU_GRI_V1_AGGRO");
		case 32:
			return "GENERIC_CURSE_HIGH";
		default:
			break;
	}
	return "";
}

bool func_564(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_670(iParam0, &Var0);
}

int func_565(int iParam0, int iParam1, int iParam2)
{
	task_turn_ped_to_face_entity(iParam0, iParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

void func_566(int iParam0)
{
	iVar0 = func_184(1);
	switch (iParam0)
	{
		case 4:
			if (network_is_host_of_this_script())
			{
				Local_13.f_7.f_14 = 0;
			}
			func_490(32);
			break;
		case 5:
			func_430(&(Local_794.f_19.f_14));
			break;
	}
	switch (iParam0)
	{
		case 2:
			clear_sequence_task(&(Local_794.f_19.f_32));
			_0x23767d80c7eed7c6(&(Local_794.f_19.f_32), 36892756);
			if (func_395())
			{
				task_play_anim(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(2), 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
			}
			task_play_anim(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(Local_13.f_7.f_21), 2f, -2f, -1, 2048, 0f, false, 0, false, 0, false);
			if (network_has_control_of_entity(iVar0))
			{
				func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
			}
			else
			{
				close_sequence_task(Local_794.f_19.f_32);
			}
			break;
		case 3:
			if (network_has_control_of_entity(iVar0))
			{
				if (func_395())
				{
					task_play_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(2), 2f, -2f, -1, 2048, 0f, false, 0, false, 0, false);
				}
			}
			if (network_is_host_of_this_script())
			{
				Local_13.f_7.f_21 = -1;
				Local_13.f_7.f_22 = 255;
			}
			func_297(8192);
			break;
		case 4:
			clear_sequence_task(&(Local_794.f_19.f_32));
			_0x23767d80c7eed7c6(&(Local_794.f_19.f_32), -106360093);
			task_follow_nav_mesh_to_coord(0, func_671(iVar0, func_272(), 1f), 0.5f, 20000, 0.25f, 1, 40000f);
			task_play_anim(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(1), 2f, -2f, -1, 66560, 0f, false, 0, false, 0, false);
			if ((Local_13.f_7.f_6 % 2) == 0)
			{
				task_play_anim(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(3), 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
			}
			else
			{
				task_play_anim(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(4), 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
			}
			task_play_anim(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(2), 2f, -2f, -1, 2048, 0f, false, 0, false, 0, false);
			if (network_has_control_of_entity(iVar0))
			{
				func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
			}
			else
			{
				close_sequence_task(Local_794.f_19.f_32);
			}
			break;
		case 5:
			if (network_has_control_of_entity(iVar0))
			{
				clear_ped_secondary_task(iVar0);
			}
			clear_sequence_task(&(Local_794.f_19.f_32));
			_0x23767d80c7eed7c6(&(Local_794.f_19.f_32), 884269307);
			task_play_anim(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(17), 8f, -2f, -1, 67108864, 0f, false, 32768, false, 0, false);
			task_play_anim(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(14), 2f, -2f, -1, 67108865, 0f, false, 32768, false, 0, false);
			if (network_has_control_of_entity(iVar0))
			{
				func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
			}
			else
			{
				close_sequence_task(Local_794.f_19.f_32);
			}
			if (network_is_host_of_this_script())
			{
				Local_13.f_7.f_21 = 17;
				Local_13.f_7.f_9++;
			}
			break;
		case 6:
			if (func_672(Local_13.f_7.f_21))
			{
				if (network_has_control_of_entity(iVar0))
				{
					task_play_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(Local_13.f_7.f_21), 2f, -2f, -1, 2048, 0f, false, 0, false, 0, false);
				}
			}
			else
			{
				if (network_has_control_of_entity(iVar0))
				{
					clear_ped_secondary_task(iVar0);
				}
				clear_sequence_task(&(Local_794.f_19.f_32));
				_0x23767d80c7eed7c6(&(Local_794.f_19.f_32), 123378686);
				task_play_anim(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(Local_13.f_7.f_21), 8f, -8f, -1, 67108864, 0f, false, 32768, false, 0, false);
				task_play_anim(0, "SCRIPT_RE@HUNTER@RIFLE", func_276(14), 8f, -8f, -1, 67108865, 0f, false, 32768, false, 0, false);
				if (network_has_control_of_entity(iVar0))
				{
					func_509(iVar0, &(Local_794.f_19.f_32), 0, 0, 0, 1);
				}
				else
				{
					close_sequence_task(Local_794.f_19.f_32);
				}
			}
			break;
		case 7:
			if (network_has_control_of_entity(iVar0))
			{
				task_play_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(16), 2f, -2f, -1, 3072, 0f, false, 0, false, 0, false);
			}
			break;
	}
}

void func_567(int iParam0, bool bParam1)
{
	iVar0 = func_184(1);
	iVar1 = func_184(0);
	if (is_ped_dead_or_dying(iVar1, true))
	{
		func_379(512);
	}
	func_379(512);
	if (network_has_control_of_entity(iVar1))
	{
		clear_ped_tasks(iVar1, 1, 0);
	}
	if (func_187() == 0 && !bParam1)
	{
		if (network_has_control_of_entity(iVar1))
		{
			set_ped_combat_movement(iVar1, 2);
			set_animal_tuning_bool_param(iVar1, 60, false);
			set_animal_tuning_bool_param(iVar1, 31, true);
			set_animal_tuning_float_param(iVar1, 112, 0f);
			set_ped_flee_attributes(iVar1, 512, true);
			set_ped_combat_attributes(iVar1, 17, false);
			set_ped_combat_attributes(iVar1, 58, true);
			set_ped_combat_attributes(iVar1, 46, true);
			set_ped_config_flag(iVar1, 263, false);
		}
		if (iParam0 == iVar0)
		{
			iVar2 = get_player_ped(func_375(0, 0, 1, 0));
		}
		else
		{
			iVar2 = iParam0;
		}
		fVar3 = func_481(iVar1, iVar2, 1, 1);
		fVar4 = func_481(iVar1, iVar0, 1, 1);
		clear_sequence_task(&(Local_794.f_19.f_33));
		_0x23767d80c7eed7c6(&(Local_794.f_19.f_33), -624000404);
		if ((fVar3 < (fVar4 - 8f) && func_481(iVar1, iVar2, 1, 1) > 4f) || iParam0 != iVar0)
		{
			func_379(1024);
			task_combat_ped(0, iVar2, 0, 0);
		}
		else
		{
			task_combat_ped(0, iVar0, 0, 0);
		}
		set_blocking_of_non_temporary_events(iVar1, false);
		if (func_305(0, 255, 1) < 125f)
		{
			func_673(0, 831283580, 580546400, 0, 0);
		}
		if (network_has_control_of_entity(iVar1))
		{
			Var5 = { func_332(-456522470) };
			func_333(&Var5);
			func_509(iVar1, &(Local_794.f_19.f_33), 0, 0, 0, 1);
		}
		else
		{
			close_sequence_task(Local_794.f_19.f_33);
		}
	}
	else if (network_has_control_of_entity(iVar1))
	{
		set_ped_path_may_enter_water(iVar1, false);
		_0xeeed8fafec331a70(iVar1, get_entity_coords(iParam0, true, false), 1);
		if (!is_entity_dead(iParam0))
		{
			_task_smart_flee_style_ped(iVar1, iParam0, 4, 524288, -1082130432, -1, 0);
		}
		else
		{
			_task_smart_flee_style_coord(iVar1, get_entity_coords(iParam0, false, false), 3, 524288, -1082130432, -1, 0);
		}
		set_ped_keep_task(iVar1, true);
	}
}

void func_568(int iParam0, float fParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (is_ped_injured(iParam0))
	{
		return;
	}
	if (is_ped_in_writhe(iParam0))
	{
		return;
	}
	_0x06d26a96ca1bca75(iParam0, 3, fParam1, iParam2);
}

void func_569(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_375(1, 0, 1, 0);
	func_570(iVar0, iParam0, iParam1, iParam2, iParam3);
}

int func_570(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!_network_is_player_index_valid(iParam0) || !network_is_player_active(iParam0))
	{
		return 0;
	}
	iVar0 = get_player_ped(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	iVar1 = func_184(1);
	if (!does_entity_exist(iVar1) || is_entity_dead(iVar1))
	{
		return 0;
	}
	if (!network_has_control_of_entity(iVar1))
	{
		return 0;
	}
	task_look_at_entity(iVar1, iVar0, iParam1, iParam2, iParam3, iParam4);
	return 1;
}

bool func_571()
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

int func_572(int iParam0, int iParam1)
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

void func_573(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 185;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 7, 5, &uParam1);
}

void func_574(int iParam0, float fParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		fParam1 = func_674(fParam1, 0f, 1f);
		iVar0 = floor((fParam1 * IntToFloat(get_entity_max_health(iParam0, bParam2))));
		_set_entity_health(iParam0, iVar0, 0);
	}
}

char* func_575(int iParam0)
{
	return Local_794.f_60.f_7[iParam0]->f_10;
}

void func_576(int iParam0, char* sParam1, bool bParam2)
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

void func_577(int iParam0)
{
}

bool func_578(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_579(int iParam0)
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

int func_580(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_675(iParam0, 0, 1) };
		if (func_676(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_677(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_678(iParam0, Var0, Var0.f_4, 0) };
				func_679(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_680(0))
	{
		_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
		{
			return 0;
		}
		func_681(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
		func_682(iParam0, iParam1);
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

void func_581(int iParam0, int iParam1, float fParam2)
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

bool func_582(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_583(int iParam0)
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

struct<2> func_584(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_585(int iParam0)
{
	if (!func_419(func_418(iParam0), Local_794.f_115.f_82[iParam0]))
	{
		clear_bit(&(Local_794.f_115.f_122), iParam0);
		return;
	}
	set_bit(&(Local_794.f_115.f_122), iParam0);
}

int func_586(var uParam0, var uParam1, int iParam2)
{
	if (!func_370(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_371(Var0.f_2, 10);
		(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] || uParam1[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_371(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] || uParam1[Var0]) && iVar4));
	iVar4 = func_371(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = ((uParam0[Var0.f_1] && iVar4 ^ -1) || ((uParam0[Var0.f_1] || uParam1[Var0.f_1]) && iVar4));
	return 1;
}

int func_587(var uParam0, var uParam1, int iParam2)
{
	if (!func_370(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_371(Var0.f_2, 10);
		(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] && uParam1[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_371(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] && uParam1[Var0]) && iVar4));
	iVar4 = func_371(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = ((uParam0[Var0.f_1] && iVar4 ^ -1) || ((uParam0[Var0.f_1] && uParam1[Var0.f_1]) && iVar4));
	return 1;
}

void func_588(int iParam0, int iParam1)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	if (func_443(&(Local_57[iParam1]->f_9), 1, iParam0))
	{
		if (&Local_57[iParam1]->f_9.f_9[iParam0] == 0)
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
		if (&Local_13.f_35.f_5[iParam0] == 0 || is_time_more_than(&(Local_57[iParam1]->f_9.f_9[iParam0]), &(Local_13.f_35.f_5[iParam0])))
		{
			Local_13.f_35.f_1[iParam0] = iVar0;
			Local_13.f_35.f_5[iParam0] = &Local_57[iParam1]->f_9.f_9[iParam0];
		}
	}
}

void func_589(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_646() - fParam1);
	func_683(uParam0, 1);
	func_684(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_590(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_591(var uParam0)
{
	if (!func_431(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_685(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_646() - uParam0->f_1);
}

void func_592(int iParam0)
{
	if (!func_222(&iVar0))
	{
		return;
	}
	func_413(&(Local_57[iVar0]->f_9), 3, iParam0);
}

void func_593(int iParam0)
{
	if (func_686(iParam0) == 1)
	{
		func_379(1048576);
	}
}

bool func_594(int iParam0)
{
	return func_443(&(Local_794.f_115.f_78), 7, iParam0);
}

bool func_595(int iParam0, int iParam1, var uParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam1->f_6)
	{
		func_601(iParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		iParam1->f_13 = fParam3;
	}
	else
	{
		iParam1->f_13 = vdist(Global_35, get_entity_coords(iParam0, false, false));
	}
	if (!Global_1940258->f_6 && !is_entity_dead(iParam0))
	{
		if (Global_1940258->f_24 || Global_1940258->f_25)
		{
			if (!iParam1->f_2 & 2 != 0)
			{
				if (func_614(iParam1, 4000))
				{
					if ((func_615(iParam0, Global_1940258->f_35, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && func_616(iParam1, iParam0)) && func_617(iParam1, iParam0))
					{
						func_619();
						*uParam2 = 2;
						func_603(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_2 & 2 != 0)
		{
			if (iParam1->f_13 < 4f)
			{
				if (func_614(iParam1, 4000))
				{
					if ((func_615(iParam0, Global_1940258->f_35, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && func_616(iParam1, iParam0)) && func_617(iParam1, iParam0))
					{
						func_619();
						*uParam2 = 2;
						func_603(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940258->f_35 != 0)
			{
				if (Global_1940258->f_34 == 0)
				{
					if (func_618(iParam0, Global_1940258->f_35))
					{
						func_619();
						*uParam2 = 2;
						func_603(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940258->f_36 != 0)
			{
				if (func_622())
				{
					if (func_618(iParam0, Global_1940258->f_36))
					{
						func_619();
						*uParam2 = 2;
						func_603(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940258->f_19)
		{
			if (func_608(iParam1, 1065353216))
			{
				if (!iParam1->f_2 & 4 != 0)
				{
					if (func_609(Global_34, iParam0, iParam1))
					{
						func_619();
						*uParam2 = 4;
						func_603(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (!iParam1->f_2 & 256 != 0)
				{
					if (func_610(Global_34, iParam0, iParam1))
					{
						func_619();
						*uParam2 = 256;
						func_603(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_2 & 131072 != 0)
		{
			if (func_687(iParam0, iParam1))
			{
				func_619();
				*uParam2 = 131072;
				func_603(iParam0, iParam1, *uParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (func_688(iParam0, iParam1))
			{
				func_619();
				*uParam2 = 262144;
				func_603(iParam0, iParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

int func_596(int iParam0)
{
	return iParam0;
}

int func_597(int iParam0, var uParam1, int iParam2)
{
	if (!_is_ped_carrying(iParam0))
	{
		return iVar4;
	}
	iVar0 = create_itemset(true);
	find_all_attached_carriable_entities(iParam0, iVar0);
	iVar3 = get_itemset_size(iVar0);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar0));
		if (!does_entity_exist(iVar1))
		{
		}
		else
		{
			(*uParam1)[iVar4] = iVar1;
			iVar4++;
			if (iVar4 == iParam2)
			{
			}
			else
			{
				iVar2++;
			}
			destroy_itemset(iVar0);
			return iVar4;
		}
	}
}

bool func_598(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (_0x5463c962bc7777c3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x758f081db204ddde(iParam0))
	{
		return true;
	}
	return false;
}

int func_599(int iParam0)
{
	iVar0 = func_689(iParam0, 0);
	if (does_entity_exist(iVar0))
	{
		return iVar0;
	}
	iVar1 = func_689(iParam0, 2);
	if (does_entity_exist(iVar1))
	{
		return iVar1;
	}
	iVar2 = func_689(iParam0, 1);
	if (does_entity_exist(iVar2))
	{
		return iVar2;
	}
	uVar3 = _0x14169fa823679e41(iParam0);
	return uVar3;
}

bool func_600(int iParam0)
{
	if (iParam0 == 255)
	{
		return false;
	}
	return network_is_participant_active(iParam0);
}

void func_601(int iParam0, bool bParam1, int iParam2)
{
	func_690(iParam2);
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
		iParam0->f_11 = 0;
	}
	iParam0->f_6 = iParam2;
	if (Global_1572887->f_13 == -1)
	{
		iParam0->f_14 = Global_1940258->f_38;
	}
	else
	{
		iParam0->f_14 = func_691(0);
	}
	switch (iParam0->f_7)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_14 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_34))
						{
							func_226(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_692(1, 1))
						{
							func_226(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_34) && (!func_692(1, 1) || *iParam0 & 8192 != 0))
				{
					func_227(iParam0, 33554432);
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
	if (!iParam0->f_2 & 1024 != 0)
	{
		if (!does_entity_exist(iParam0->f_15))
		{
			if (func_693(iParam0))
			{
				iParam0->f_16 = get_network_time_accurate();
			}
		}
		else if (iParam0->f_16 != 0)
		{
			if (get_time_difference(iParam0->f_16, get_network_time_accurate()) > 500)
			{
				if (!is_ped_on_mount(iParam0->f_15))
				{
					iParam0->f_15 = 0;
					iParam0->f_16 = 0;
				}
			}
		}
	}
	iParam0->f_7++;
	if (iParam0->f_7 >= 4)
	{
		iParam0->f_7 = 0;
		iParam0->f_8++;
		if (iParam0->f_8 > 4)
		{
			iParam0->f_8 = 0;
		}
	}
	func_694(iParam0);
}

bool func_602(int iParam0, int iParam1)
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
			if (!func_695(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_696(iParam0, iVar2) <= func_697(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_603(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_11 = iParam0;
	}
	if (func_698(iParam2, 1, 1, 1, 0))
	{
		func_226(iParam1, 2048);
	}
	iParam1->f_17 = iParam2;
	func_699(iParam1, 1);
	func_700();
}

bool func_604(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_701(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_702(iParam1);
			if (func_703(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_3 == 0)
				{
					iParam1->f_3 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_3);
				iVar3 = func_704(iParam1);
				if (iParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_699(iParam1, 1);
						return true;
					}
					else if (iParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_705(iParam1))
						{
							func_699(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_605(int iParam0, int iParam1, int iParam2)
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
	if (func_706(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_702(iParam2);
		if (func_703(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_3 == 0)
			{
				iParam2->f_3 = get_game_timer();
			}
			if (iParam2->f_3 != 0)
			{
				if (get_game_timer() - iParam2->f_3) > func_704(iParam2)
				{
					func_699(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_606(int iParam0, int iParam1)
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
	if (func_695(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_4 == 0)
		{
			iParam1->f_4 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_4) > func_704(iParam1)
		{
			fVar3 = func_702(iParam1);
			if (iParam1->f_13 < fVar3)
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

int func_607(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_707(bParam1, bParam2, bParam3);
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

bool func_608(int iParam0, float fParam1)
{
	if (iParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_621();
	iVar1 = (iVar0 - iParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_609(int iParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_708(iParam2);
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
		if (_0x9c81338b2e62ce0a(player_id(), iParam1, iVar1) && _0x285d36c5c72b0569(iParam0) <= fVar2)
		{
			if (func_617(iParam2, iParam1))
			{
				func_699(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_610(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_13 < IntToFloat(func_638(iParam2)))
	{
		if ((is_weapon_valid(Global_1940258->f_40) && !_0x5809dbca0a37c82b(Global_1940258->f_40)) || get_current_ped_vehicle_weapon(Global_34, &uVar0))
		{
			if (func_617(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(iParam0) <= 1f)
				{
					func_699(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_611(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_709(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_24))
				{
					func_699(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_30))
				{
					func_699(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_29, &vVar4, 0, 0);
					if (func_710(iParam1, vVar0, vVar4))
					{
						func_699(iParam2, 1);
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
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_24))
				{
					func_699(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_29, &vVar7, 0, 0);
					if (func_710(iParam1, vVar0, vVar7))
					{
						func_699(iParam2, 1);
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

bool func_612(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1940258->f_33)
	{
		if (!func_695(iParam0, iParam1, &(Global_1940258->f_28[iVar0])) || iParam0 == &Global_1940258->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_711(&(Global_1940258->f_28[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false), vVar9);
			if (func_712(&(Global_1940258->f_28[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1940258->f_28[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1940258->f_28[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						iParam1->f_11 = iParam0;
						return true;
					}
				}
			}
			if (func_713(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_11 = iParam0;
				return true;
			}
			else if (func_714(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_11 = iParam0;
				return true;
			}
			else if (func_715(iParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_11 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_613(int iParam0, int iParam1)
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

bool func_614(int iParam0, int iParam1)
{
	if (iParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_621();
	iVar1 = (iVar0 - iParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_615(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_716(iVar0, &iVar2))
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
	if (func_717(iVar0, iParam0))
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

int func_616(int iParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", iParam0->f_6))
		{
		}
	}
	else if (iParam0->f_6 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_617(int iParam0, int iParam1)
{
	if (func_718(iParam0))
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

bool func_618(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_481(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_619()
{
}

bool func_620(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_34);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_719(iVar0, iParam1, vVar1))
		{
			iParam0->f_10 = func_621();
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
						if (func_522(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_10 = func_621();
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

int func_621()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_622()
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
	if ((func_621() - Global_1940258->f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_623(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_15))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_697(iParam0);
	if (iParam0->f_13 > func_541(iParam0) && iParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_720(iParam1);
	iVar1 = func_721(iParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_13 <= fVar0 || _0x9d9473cb82d83a30(iParam1, Global_34, 0) == 1) || _0x9d9473cb82d83a30(iParam1, iParam0->f_15, 0) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_624(int iParam0, int iParam1)
{
	if (!Global_1940258->f_50)
	{
		return false;
	}
	if (!iParam0->f_1 & 1 != 0)
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (func_457(iVar0, iParam1, 1060437492) != 0)
	{
		return false;
	}
	vVar1 = { get_entity_coords(iParam1, true, false) };
	vVar4 = { get_entity_coords(iVar0, true, false) };
	fVar7 = func_722(vVar1, vVar4);
	fVar8 = absf((vVar1.z - vVar4.z));
	if (fVar8 >= 2f)
	{
		return false;
	}
	if (fVar7 > iParam0->f_31)
	{
		return false;
	}
	return true;
}

int func_625(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_13 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_723(iParam0, iParam1, bVar0, bVar2, iParam2->f_13, bVar1);
}

bool func_626(int iParam0, int iParam1)
{
	if (*iParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1940258->f_18)
	{
		return true;
	}
	if (*iParam1 & 33554432 != 0)
	{
		if (func_724(iParam0, iParam1, 1))
		{
			return true;
		}
		if ((_0x06087579e7aa85a9(iParam0, Global_34, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_34, 17)) && _0x7f9b9791d4cb71f6(iParam0, Global_34, true, false) == 1)
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
	if (!func_452(iParam0))
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
			if (func_725(iParam1))
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
					if (!func_726(iParam1, iParam0))
					{
						if (func_522(iVar4, Global_35, 1) < 7f)
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

bool func_627(int iParam0, int iParam1)
{
	if (!func_727(0))
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

bool func_628(int iParam0, int iParam1)
{
	if (iParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_621();
	iVar1 = (iVar0 - iParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_629(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_630(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (iParam1->f_5 == 0)
	{
		iParam1->f_5 = func_621();
	}
	else if (func_621() - iParam1->f_5) > func_728(iParam1)
	{
		return func_729(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_631(int iParam0, int iParam1)
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

int func_632(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_560(vVar3, vVar6);
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
	if (func_561(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_633(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_181(Local_794.f_115.f_2, 4))
	{
		return false;
	}
	if (!is_bit_set(Local_794.f_115.f_65, iParam0))
	{
		return false;
	}
	clear_bit(&(Local_794.f_115.f_65), iParam0);
	if (!bParam3 && Local_57[iParam2]->f_9.f_4 == 0)
	{
		return false;
	}
	if (!bParam3 && get_time_difference(Local_57[iParam2]->f_9.f_4, get_network_time_accurate()) > 750)
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
	iVar0 = func_730(player_ped_id(), 0, 1, 0);
	if (!is_weapon_valid(iVar0) || !((_0x705be297eebdb95d(iVar0) || func_731(iVar0)) || _is_weapon_throwable(iVar0)))
	{
		return false;
	}
	if (_0x79b1a6e780266db0(player_ped_id()) < iParam1->f_2)
	{
		return false;
	}
	return true;
}

void func_634(int* iParam0, var uParam1)
{
	get_screen_resolution(iParam0, &(iParam0->f_1));
	*iParam0 = (*iParam0 / 2);
	iParam0->f_1 = (iParam0->f_1 / 2);
	iParam0->f_2 = uParam1;
}

Vector3 func_635(int iParam0)
{
	return iParam0->f_6, iParam0->f_7, iParam0->f_8;
}

int func_636(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12)
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
		vVar7.x = ((func_732(iParam0) * 0.5f) + vParam5.x);
		vVar7.f_1 = ((func_733(iParam0) * 0.5f) + vParam5.y);
		vVar7.f_2 = ((func_734(iParam0) * 0.5f) + vParam5.z);
	}
	vVar10 = { func_736(func_735(get_rendering_cam())) };
	vVar13 = { func_737(vVar10, 0f, 0f, 1f) };
	vVar16 = { func_737(vVar13, vVar10) };
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
			uParam1->f_2 = (iParam9 + floor((func_656((!bVar43 || vVar25.x < vVar31.x), vVar25.x, vVar31.x) - vVar22.x)));
		}
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			return 0;
		}
		if (bVar42)
		{
			uParam1->f_3 = (iParam10 + floor((func_656((!bVar43 || vVar28.y > vVar31.y), vVar28.y, vVar31.y) - vVar22.y)));
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
			uParam1->f_3 = (iParam10 + floor((func_656(vVar28.y > vVar31.y, vVar28.y, vVar31.y) - vVar25.y)));
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
		uParam1->f_2 = (iParam9 + floor(func_656((!bVar43 || vVar25.x > vVar31.x), vVar25.x, vVar31.x)));
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

int func_637(int iParam0, var uParam1)
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

int func_638(int iParam0)
{
	return iParam0->f_23;
}

bool func_639(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_640(int iParam0)
{
	if (iParam0 == 2048)
	{
		iVar0 = func_184(1);
		if ((!_0x29fce825613fefca(iVar0, 400) && !has_entity_been_damaged_by_entity(iVar0, get_mount(get_player_ped(player_id())), 1, 1)) && !is_ped_ragdoll(iVar0))
		{
			return true;
		}
	}
	return false;
}

int func_641(int iParam0)
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

bool func_642(int iParam0)
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

float func_643(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_644(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_645(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_644(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_646() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

float func_646()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_647(int iParam0, var uParam1, var uParam2, bool bParam3)
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

float func_648(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_649(var uParam0)
{
	*uParam0 = 0;
	if (Global_1291734->f_11.f_560 >= 8)
	{
		return false;
	}
	if (func_650(get_id_of_this_thread()))
	{
		*uParam0 = 1;
		return false;
	}
	return true;
}

bool func_650(int iParam0)
{
	if (!_does_thread_exist(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == &Global_1291734->f_11.f_561[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_651(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

void func_652(int iParam0)
{
	iVar0 = Global_1296859->f_21;
	Var1 = { func_422(iParam0, 1178968787) };
	if (!stat_id_set_int(&Var1, iVar0, true))
	{
	}
}

int func_653(int iParam0, var uParam1, var uParam2)
{
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	iVar1 = 1;
	while (iVar1 <= 43)
	{
		*uParam1 = iVar1;
		func_32(&Var2, *uParam1, -1, -1, 255);
		iVar0 = (iVar0 + Var2);
		if (iVar0 >= iParam0)
		{
			iVar0 = (iVar0 - Var2);
			*uParam2 = 0;
			while (*uParam2 <= (Var2 - 1))
			{
				if (iVar0 == iParam0)
				{
					return 1;
				}
				iVar0++;
				*uParam2++;
			}
		}
		iVar1++;
	}
	return 0;
}

struct<2> func_654(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

bool func_655(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_661(Param0, &vVar0);
	if (func_738(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

float func_656(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_657(bool bParam0)
{
	iVar0 = func_184(1);
	if (is_entity_playing_anim(iVar0, "SCRIPT_RE@HUNTER@RIFLE", func_276(2), 1))
	{
		if (bParam0)
		{
			return !func_501(iVar0, "REHU_STANDING");
		}
		return true;
	}
	return false;
}

bool func_658(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

float func_659(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

Vector3 func_660(vector3 vParam0, int iParam3, float fParam4)
{
	return func_739(vParam0, get_entity_coords(iParam3, true, false), fParam4);
}

bool func_661(struct<2> Param0, var uParam2)
{
	if (!func_38(Param0))
	{
		return false;
	}
	func_740(uParam2);
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

int func_662()
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

void func_663(var uParam0, var uParam1)
{
}

int func_664(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 4;
		case 4:
			return 2;
		default:
			break;
	}
	return 8;
}

bool func_665(int iParam0)
{
	return does_entity_exist(&(Local_794.f_60.f_7[iParam0]));
}

var func_666(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_741() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_742());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_742());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_742());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_743(get_player_team(iVar5)));
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
			if (func_744(iVar2))
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
				if (iVar9 & 8192 != 0 && func_745(iVar2) != 1)
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
					if (!func_746(iVar10))
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

bool func_667(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_668(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

char* func_669(char* sParam0, char* sParam1)
{
	switch (func_747())
	{
		case 1:
			return sParam0;
		case 0:
			return sParam1;
		default:
			break;
	}
	return sParam1;
}

bool func_670(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

Vector3 func_671(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { func_748(iParam0, vParam1, fParam4) };
	return get_entity_coords(iParam0, true, false) + vVar0;
}

bool func_672(int iParam0)
{
	return ((iParam0 == 21 || iParam0 == 22) || iParam0 == 23);
}

void func_673(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	func_174(iParam0);
	if (!does_entity_exist(&(Local_794.f_60.f_7[iParam0])))
	{
		return;
	}
	iVar0 = _blip_add_for_entity(iParam1, &(Local_794.f_60.f_7[iParam0]));
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
	Local_794.f_60.f_7[iParam0]->f_1 = iVar0;
}

float func_674(float fParam0, float fParam1, float fParam2)
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

struct<5> func_675(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_749(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_750(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_678(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_751(bParam1) };
			if (bParam2 && func_752(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_676(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_676(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_677(iParam0, &Var6, 1728382685))
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
			Var0 = { func_753(bParam1) };
			switch (func_754(iParam0))
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
			if (func_755(iParam0, -1823706425))
			{
				Var0 = { func_678(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_755(iParam0, -1483207246))
			{
				Var0 = { func_678(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_678(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_755(iParam0, -1653629781))
			{
				Var0 = { func_678(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_756(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_755(iParam0, -1653629781))
			{
				Var0 = { func_678(1384535894, Var0, 1784584921, bParam1) };
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

bool func_676(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_757(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_677(int iParam0, var uParam1, int iParam2)
{
	if (func_758(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_678(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_759(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_760(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_679(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_761(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_756(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_680(bParam6))
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
			iVar14 = func_762(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_763(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_760(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_680(bool bParam0)
{
	if (func_28() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_760(bParam0));
}

int func_681(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_764(iParam0))
	{
		return 0;
	}
	if (!func_680(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_34, iParam0, iParam1, iParam2);
	return 1;
}

void func_682(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar2 = func_765(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_34, iParam0, iVar2);
		if (get_max_ammo(Global_34, &iVar1, iParam0) && get_ammo_in_ped_weapon(Global_34, iParam0) > iVar1)
		{
			set_ped_ammo(Global_34, iParam0, iVar1);
		}
	}
}

void func_683(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_684(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_685(var uParam0)
{
	return func_590(*uParam0, 2);
}

int func_686(int iParam0)
{
	return iParam0;
}

bool func_687(int iParam0, int iParam1)
{
	fVar0 = func_766(iParam1);
	if (iParam1->f_13 > (fVar0 + 5f))
	{
		return false;
	}
	if (!_0x5102307ce88798eb(iParam0))
	{
		request_ped_visibility_tracking(iParam0);
	}
	if (iParam1->f_13 < fVar0 || is_tracked_ped_visible(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_767(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
		bVar3 = iParam1->f_1 & 2 != false;
		if (_0x06087579e7aa85a9(iParam0, Global_34, -1f, fVar2, -1f, fVar1) && _0x7f9b9791d4cb71f6(iParam0, Global_34, true, bVar3) == 1)
		{
			return true;
		}
		else if (is_weapon_valid(Global_1940258->f_38))
		{
			if (_is_weapon_lantern(Global_1940258->f_38) || _is_weapon_torch(Global_1940258->f_38))
			{
				if (iParam1->f_13 <= 5f)
				{
					if (func_768())
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

bool func_688(int iParam0, int iParam1)
{
	if (func_769(iParam0))
	{
		set_player_noise_multiplier(player_id(), 0.25f);
	}
	if (((_get_ped_crouch_movement(Global_34) || is_ped_in_cover(Global_34, 0, 0)) || is_ped_going_into_cover(Global_34)) || *iParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (_0x0ea9eacba3b01601(Global_34, iParam0, iVar1) && get_player_current_stealth_noise(player_id()) > 4f)
	{
		if (*iParam1 & 512 != 0)
		{
			if (is_ped_in_cover(Global_34, 0, 0) || is_ped_going_into_cover(Global_34))
			{
				return false;
			}
			if (_get_ped_crouch_movement(Global_34) || ((_0xa29fd00d45311eb7(Global_34, "stealth") == 1f && get_player_current_stealth_noise(player_id()) < 8f) && *iParam1 & 2097152 != 0))
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

int func_689(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar1 = _0x5463c962bc7777c3(iParam0, iParam1, &uVar0, 1, 0);
	if (iVar1 != 0)
	{
		return uVar0;
	}
	return 0;
}

void func_690(int iParam0)
{
	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1940258->f_32);
	Global_1940258->f_21 = func_770();
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
			func_771(&(Global_1940258->f_28), &(Global_1940258->f_33));
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

var func_691(int iParam0)
{
	return &(Global_1102219->f_3705[iParam0]);
}

bool func_692(bool bParam0, bool bParam1)
{
	if (func_772(bParam0, &iVar0, &iVar1))
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

bool func_693(int iParam0)
{
	iVar0 = Global_1940258->f_34;
	if (func_28() == -1)
	{
		if (Global_1940258->f_34 == 0)
		{
			iVar0 = func_773(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1940258->f_34) || !&Global_1956200->f_1716[4])
	{
		iVar0 = func_773(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_721(iVar0) == -1)
	{
		return false;
	}
	if (!does_entity_belong_to_this_script(iVar0, false))
	{
		return false;
	}
	iParam0->f_15 = iVar0;
	return true;
}

void func_694(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_774(iParam0);
	}
}

bool func_695(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_721(iParam2);
	}
	else
	{
		iVar1 = func_720(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_721(iParam0);
	}
	else
	{
		iVar0 = func_720(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_181(*iParam1, 8388608))
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

float func_696(int iParam0, int iParam1)
{
	return func_481(iParam0, iParam1, 1, 1);
}

float func_697(int iParam0)
{
	return iParam0->f_29;
}

bool func_698(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_699(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(iParam0, 134217728);
	}
	else
	{
		func_227(iParam0, 134217728);
	}
}

void func_700()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_701(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_481(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_775(iVar0, 0)))
		{
			if (func_776(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_702(int iParam0)
{
	return iParam0->f_18;
}

bool func_703(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_181(*iParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (_0x06087579e7aa85a9(iParam1, Global_34, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*iParam0 & 32768 != 0)
	{
		if (has_entity_clear_los_to_entity(iParam1, Global_34, 17))
		{
			return true;
		}
	}
	return false;
}

int func_704(int iParam0)
{
	return iParam0->f_19;
}

int func_705(int iParam0)
{
	return iParam0->f_20;
}

bool func_706(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_775(iVar0, 0)))
		{
			if (func_639(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_707(bool bParam0, bool bParam1, bool bParam2)
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

float func_708(int iParam0)
{
	return iParam0->f_25;
}

int func_709(int iParam0)
{
	switch (iParam0->f_8)
	{
		case 0:
			switch (iParam0->f_7)
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
			switch (iParam0->f_7)
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
			switch (iParam0->f_7)
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
			switch (iParam0->f_7)
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
			switch (iParam0->f_7)
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
	if (*iParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_710(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_658(iParam0, vParam4, 0.5f))
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

int func_711(int iParam0)
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
	if (func_777(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_712(int iParam0)
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

bool func_713(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_769(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_714(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_769(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_715(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = func_778(iParam0);
	if (func_769(iParam1))
	{
		return false;
	}
	if (*iParam0 & 65536 != 0)
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

bool func_716(int iParam0, int iParam1)
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

bool func_717(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (_0x8d50f43298ab9545(iParam0, iParam1))
	{
		return true;
	}
	if (!_is_weapon_lasso(func_779(iParam0, 1, 0, 0)) && !func_779(iParam0, 1, 0, 0) == 1151374672)
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

bool func_718(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_719(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_522(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_720(int iParam0)
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

int func_721(int iParam0)
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

float func_722(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

int func_723(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_716(Global_34, &iVar1))
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
		fVar2 = func_481(iParam0, player_ped_id(), 0, 1);
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
		if (func_481(iParam0, Global_1940258->f_34, 0, 1) < 2.5f)
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

bool func_724(int iParam0, int iParam1, bool bParam2)
{
	func_772(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_726(iParam1, iVar0))
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
				if (!bParam2 || !func_726(iParam1, iVar1))
				{
					if (func_522(iVar1, Global_35, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_725(int iParam0)
{
	return func_181(*iParam0, 131072);
}

bool func_726(int iParam0, int iParam1)
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

bool func_727(int iParam0)
{
	return false;
}

int func_728(int iParam0)
{
	return iParam0->f_22;
}

int func_729(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_5 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = iParam1->f_13;
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

int func_730(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_731(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

float func_732(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.x, fVar0);
	fVar1 = func_767(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.x, fVar0);
	fVar1 = func_767(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.x, fVar0);
	fVar1 = func_767(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.x, fVar0);
	fVar1 = func_767(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.x, fVar0);
	fVar1 = func_767(vVar2.x, fVar1);
	return (fVar0 - fVar1);
}

float func_733(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.y, fVar0);
	fVar1 = func_767(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.y, fVar0);
	fVar1 = func_767(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.y, fVar0);
	fVar1 = func_767(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.y, fVar0);
	fVar1 = func_767(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.y, fVar0);
	fVar1 = func_767(vVar2.y, fVar1);
	return (fVar0 - fVar1);
}

float func_734(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.z, fVar0);
	fVar1 = func_767(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.z, fVar0);
	fVar1 = func_767(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.z, fVar0);
	fVar1 = func_767(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.z, fVar0);
	fVar1 = func_767(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_780(vVar2.z, fVar0);
	fVar1 = func_767(vVar2.z, fVar1);
	return (fVar0 - fVar1);
}

Vector3 func_735(int iParam0)
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
	return func_736((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_736(vector3 vParam0)
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

Vector3 func_737(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

bool func_738(int iParam0, var uParam1, var uParam2)
{
	if (!func_781(iParam0))
	{
		return false;
	}
	if (func_782(iParam0, uParam1, &uVar0))
	{
		func_783(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

Vector3 func_739(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return func_736(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

void func_740(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_741()
{
	return Global_1051252->f_12;
}

char* func_742()
{
	return "unnamed";
}

int func_743(int iParam0)
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

bool func_744(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_784(36, iParam0);
}

int func_745(int iParam0)
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

bool func_746(int iParam0)
{
	if (func_785(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_786(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

int func_747()
{
	switch (func_187())
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

Vector3 func_748(int iParam0, vector3 vParam1, float fParam4)
{
	return func_739(get_entity_coords(iParam0, true, false), vParam1, fParam4);
}

struct<4> func_749(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_760(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_678(1328661203, func_787(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_678(1328661203, func_787(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_678(1328661203, func_787(), -1591664384, bParam0);
}

int func_750(int iParam0)
{
	if (!func_759(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_751(bool bParam0)
{
	iVar0 = func_760(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_678(923904168, func_749(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_678(923904168, func_749(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_678(923904168, func_749(bParam0), -740156546, 0);
}

bool func_752(int iParam0, bool bParam1)
{
	if (func_754(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_788();
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_753(bool bParam0)
{
	iVar0 = func_760(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_678(271701509, func_749(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_678(271701509, func_749(bParam0), 12999093, 0);
}

int func_754(int iParam0)
{
	if (!func_759(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_755(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_754(iParam0);
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
			if (func_789(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_756(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_790(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_757(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_759(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_791(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_678(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_760(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_760(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_758(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_760(0);
	*uParam1 = { func_678(iParam0, func_751(0), iParam3, 0) };
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

bool func_759(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_760(bool bParam0)
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

bool func_761(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_762(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_792(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_794(func_793(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_795(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_763(int iParam0, struct<17> Param1)
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

bool func_764(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_765(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

float func_766(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return func_541(iParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_796(iParam0);
	}
	return func_541(iParam0);
}

float func_767(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_768()
{
	iVar0 = func_798(func_797());
	iVar1 = func_799(func_797());
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

bool func_769(int iParam0)
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

bool func_770()
{
	if (func_800())
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

void func_771(var uParam0, var uParam1)
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

bool func_772(bool bParam0, int iParam1, int iParam2)
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

int func_773(int iParam0)
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
	if (iParam0->f_7 == 3)
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

void func_774(int iParam0)
{
	if (Global_1940258->f_32 == 0)
	{
		func_227(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940258->f_33)
		{
			if (does_entity_exist(&(Global_1940258->f_28[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1940258->f_28[iVar0])))
				{
					func_226(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_775(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_776(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_639(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_777(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_778(int iParam0)
{
	return iParam0->f_28;
}

int func_779(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_780(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

bool func_781(int iParam0)
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

bool func_782(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_801(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_783(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_802(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_803(iVar0);
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
			uParam2->f_5 = func_804(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_805(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_806(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_807(iVar0);
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

bool func_784(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_808(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_809())
	{
		return func_808(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_808(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_785(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_786(int iParam0)
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
		func_810(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_811(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

struct<4> func_787()
{
	return Var0;
}

bool func_788()
{
	return (func_812(-1185145312, 0, 0, 0) > 0 && func_813(func_678(889965687, func_749(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_789(int iParam0, int iParam1, int iParam2)
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

bool func_790(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_760(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_791(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

bool func_792(int iParam0, var uParam1)
{
	iVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_814(uParam1->f_8, iParam0, iVar0, 2048) || func_814(uParam1->f_8, iParam0, iVar0, 32768)) || func_814(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_814(uParam1->f_8, iParam0, iVar0, 4) || func_814(uParam1->f_8, iParam0, iVar0, 256)) || func_814(uParam1->f_8, iParam0, iVar0, 65536)) || func_814(uParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_814(uParam1->f_8, iParam0, iVar0, 1) || func_814(uParam1->f_8, iParam0, iVar0, 8)) || func_814(uParam1->f_8, iParam0, iVar0, 65536)) || func_814(uParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_814(uParam1->f_8, iParam0, iVar0, 1) || func_814(uParam1->f_8, iParam0, iVar0, 16)) || func_814(uParam1->f_8, iParam0, iVar0, 2)) || func_814(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_814(uParam1->f_8, iParam0, iVar0, 8) || func_814(uParam1->f_8, iParam0, iVar0, 4096)) || func_814(uParam1->f_8, iParam0, iVar0, 256)) || func_814(uParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_793(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_794(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_815(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_815(iParam1, 2, 0, 0);
	return -1;
}

int func_795(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_815(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

var func_796(int iParam0)
{
	return iParam0->f_27;
}

int func_797()
{
	return &Global_1902818;
}

int func_798(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_799(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

bool func_800()
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

int func_801(int iParam0)
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

int func_802(int iParam0, var uParam1)
{
	if (func_816(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_803(int iParam0)
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

int func_804(int iParam0)
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

int func_805(int iParam0)
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

int func_806(int iParam0)
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

int func_807(int iParam0)
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

bool func_808(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_809()
{
	return Global_1102219->f_3672;
}

void func_810(int iParam0)
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
	func_811(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_811(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

int func_812(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_764(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_760(bParam1), iParam0, iParam3);
}

int func_813(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_817(&uParam0, iParam4, bParam5, iParam6);
}

int func_814(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_228(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_815(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_818(iParam0, iParam1, iParam2, iParam3);
}

bool func_816(int iParam0, var uParam1, var uParam2)
{
	if (func_819(iParam0, uParam1, &uVar0))
	{
		func_820(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_817(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_821(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_818(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_822(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

bool func_819(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_801(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_820(var uParam0, int iParam1, var uParam2)
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

bool func_821(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_760(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_790(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

void func_822(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_823(&(uParam0->f_4));
}

void func_823(var uParam0)
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

