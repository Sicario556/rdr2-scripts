void __EntryFunction__()
{
	fLocal_1941 = 1f;
	fLocal_1942 = 1f;
	iVar0 = iVar1945;
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
	network_register_host_broadcast_variables(&Local_13, 70, 42);
	func_10(_0xba24095ea96dfe17(&Local_13), 70, "m_hostData");
	network_register_player_broadcast_variables(&Local_83, 1089, 43);
	func_11(_0x690806bc83bc8ca2(Local_83[0]), 1089, "m_clientData");
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
	else if (func_17(Local_1172.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_1172.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_1172.f_12), Local_1172.f_9))
	{
		return true;
	}
	else if (Local_1172.f_8 == 6)
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
	_copy_memory(&Local_1172, uParam0, 5);
	iVar2 = func_31(&bVar1, Local_1172.f_1, Local_1172.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_1172.f_12 = iVar2;
	iVar0 = Global_1198046->f_231.f_1066[iVar2]->f_5;
	Var3.f_10 = 1106247680;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_32(&Var3, Local_1172.f_1, Local_1172.f_2, Local_1172.f_3, iVar0);
	Local_1172.f_9 = { func_33(Var3.f_5, 8) };
	Local_1172.f_14 = Var3.f_5;
	Local_1172.f_15 = { Var3.f_11 };
	Local_1172.f_18 = Var3.f_7;
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
	if (Local_1172.f_8 <= 5)
	{
		func_53();
	}
	switch (Local_1172.f_8)
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
}

void func_27()
{
	if (Local_1172.f_12 != -1)
	{
		if (network_is_game_in_progress() && network_get_num_participants() <= 1)
		{
			func_67(Local_1172.f_12, 4);
		}
	}
	func_68();
	if (func_69(64))
	{
		func_70(Local_13.f_6);
	}
	func_71();
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
	while (iVar0 < 6)
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
	func_72(&Var0, Var26.f_5);
	iVar25 = func_73(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_74(iVar25) };
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
			func_75(uParam0, iParam2);
			break;
		case 2:
			func_76(uParam0, iParam2);
			break;
		case 3:
			func_77(uParam0, iParam2);
			break;
		case 4:
			func_78(uParam0, iParam2);
			break;
		case 12:
			func_79(uParam0, iParam2);
			break;
		case 6:
			func_80(uParam0, iParam2, -1);
			break;
		case 7:
			func_81(uParam0, iParam2, iParam3);
			break;
		case 5:
			func_82(uParam0, iParam2);
			break;
		case 11:
			func_83(uParam0, iParam2);
			break;
		case 9:
			func_84(uParam0, iParam2, iParam3);
			break;
		case 10:
			func_85(uParam0, iParam2);
			break;
		case 8:
			func_86(uParam0, iParam2);
			break;
		case 13:
			func_87(uParam0, iParam2, iParam4);
			break;
		case 14:
			func_88(uParam0, iParam2, iParam3);
			break;
		case 15:
			func_89(uParam0, iParam2);
			break;
		case 16:
			func_90(uParam0, iParam2, iParam3);
			break;
		case 31:
			func_91(uParam0, iParam2);
			break;
		case 21:
			func_92(uParam0, iParam2);
			break;
		case 28:
			func_93(uParam0, iParam2);
			break;
		case 25:
			func_94(uParam0, iParam2);
			break;
		case 24:
			func_95(uParam0, iParam2);
			break;
		case 22:
			func_96(uParam0, iParam2);
			break;
		case 23:
			func_97(uParam0, iParam2);
			break;
		case 29:
			func_98(uParam0, iParam2);
			break;
		case 26:
			func_99(uParam0, iParam2);
			break;
		case 30:
			func_100(uParam0, iParam2);
			break;
		case 27:
			func_101(uParam0, iParam2);
			break;
		case 32:
			func_102(uParam0, iParam2, iParam3);
			break;
		case 33:
			func_103(uParam0, iParam2, iParam3);
			break;
		case 34:
			func_104(uParam0, iParam2);
			break;
		case 17:
			func_105(uParam0, iParam2);
			break;
		case 18:
			func_106(uParam0, iParam2);
			break;
		case 19:
			func_107(uParam0, iParam2);
			break;
		case 20:
			func_108(uParam0, iParam2);
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
			func_109(uParam0, iParam1, iParam2);
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
			Var0.f_1 = func_111(iParam0, &(Global_1071686->f_636), func_110(iParam1));
			break;
		case 3:
			Var0.f_1 = func_111(iParam0, &(Global_1071686->f_636.f_602), func_110(iParam1));
			break;
		case 4:
			Var0.f_1 = func_111(iParam0, &(Global_1071686->f_636.f_2104), func_110(iParam1));
			break;
		case 5:
			Var0.f_1 = func_111(iParam0, &(Global_1071686->f_636.f_12606), func_110(iParam1));
			break;
		case 6:
			Var0.f_1 = func_111(iParam0, &(Global_1071686->f_636.f_12908), func_110(iParam1));
			break;
		case 7:
			Var0.f_1 = func_111(iParam0, &(Global_1071686->f_636.f_15910), func_110(iParam1));
			break;
		case 8:
			Var0.f_1 = func_111(iParam0, &(Global_1071686->f_636.f_16512), func_110(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_112();
	}
	return Var0;
}

void func_34()
{
	func_113();
	func_114();
	func_115();
	func_116();
	func_117();
}

void func_35()
{
	func_118();
	func_119();
	if (!add_relationship_group("REL_MPREST", &(Local_1172.f_19.f_103)))
	{
	}
	else
	{
		func_120(1);
	}
}

void func_36()
{
	if (!_request_scenario_type(-493351432, 4194319, 0, 0))
	{
	}
	else
	{
		func_121(32);
	}
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
	while (iVar0 < 6)
	{
		func_122(&(Local_13.f_50.f_19), iVar0, 3);
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
	if (Param0.f_1 >= func_110(Param0))
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
	iVar0 = Global_1198046->f_231.f_1066[Local_1172.f_12]->f_5;
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_32(&Var1, Local_1172.f_1, Local_1172.f_2, Local_1172.f_3, iVar0);
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
	func_32(&Var0, Local_1172.f_1, Local_1172.f_2, -1, 255);
	if (func_124(&Var0, 1))
	{
		func_125(2);
		return;
	}
	if (func_130(Var0, &bVar31))
	{
		clear_area(Local_1172.f_15, Var0.f_10, 2442122);
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
		if (func_69(64) && func_126(player_id()) == Local_13.f_6)
		{
			func_70(Local_13.f_6);
			func_147(64);
		}
	}
	else if (!func_69(64))
	{
		if (func_126(player_id()) == Local_13.f_6)
		{
			func_148(Local_13.f_6, 1, 1);
			func_149(64);
		}
	}
	else if (func_126(player_id()) != Local_13.f_6)
	{
		func_70(Local_13.f_6);
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
	func_153();
}

void func_54()
{
	if (Local_13 == 6)
	{
		func_154(6);
	}
	else if (Local_13 > 0)
	{
		func_51();
		func_154(1);
	}
}

void func_55()
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

void func_56()
{
	if (!func_134(1, 255))
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
			func_151(1);
		}
		else
		{
			iVar1 = Global_1901947->f_236.f_68;
			if (!func_131(Local_1172.f_11))
			{
				func_132(&(Local_1172.f_11));
			}
			if (func_133(Local_1172.f_11) >= iVar1)
			{
				func_154(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_157(&(Local_1172.f_11));
		func_158();
		func_154(3);
	}
}

void func_57()
{
	if (!func_134(2, 255))
	{
		iVar0 = func_159();
		iVar1 = func_160();
		if (iVar0 && iVar1)
		{
			func_151(2);
		}
		else
		{
			iVar2 = Global_1901947->f_236.f_68;
			if (!func_131(Local_1172.f_11))
			{
				func_132(&(Local_1172.f_11));
			}
			if (func_161(Local_1172.f_11) >= iVar2)
			{
				func_154(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_157(&(Local_1172.f_11));
		func_162();
		func_163();
		func_164();
		func_165();
		func_154(4);
	}
}

void func_58()
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

void func_59()
{
	if (!func_134(4, 255))
	{
		if (func_173())
		{
			func_174();
			func_67(Local_1172.f_12, 4);
			func_151(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_154(6);
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
		while (iVar1 < 6)
		{
			if (network_does_network_id_exist(&(Local_13.f_22[iVar1])))
			{
				iVar0 = net_to_ped(&(Local_13.f_22[iVar1]));
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

void func_64()
{
	if (func_61())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (func_177(iVar1, iVar2))
				{
				}
				else if (func_178(iVar1, iVar2))
				{
					iVar0 = &Local_1172.f_228[iVar1]->f_5[iVar2];
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
				else if (network_does_network_id_exist(Local_13.f_29[iVar1][iVar2]))
				{
					iVar0 = net_to_obj(Local_13.f_29[iVar1][iVar2]);
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

void func_65()
{
	func_180(&(Local_1172.f_473.f_13));
	if (_does_volume_exist(Local_1172.f_473.f_11))
	{
		_delete_volume(Local_1172.f_473.f_11);
	}
}

void func_66()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_182(func_181(iVar0), 1);
		iVar0++;
	}
}

void func_67(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (func_183(iParam0, iVar0, iParam1))
	{
		return;
	}
	set_bit((*(*Global_1207784)[iVar0])[iParam0], iParam1);
}

void func_68()
{
	if (!func_69(1))
	{
		return;
	}
	if (func_69(4))
	{
		return;
	}
	if (!func_69(2))
	{
		iVar0 = -1;
	}
	else if (!func_69(8))
	{
		iVar0 = 2;
	}
	else if (func_69(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_69(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_184(Local_1172.f_9, iVar0, 0, 255, 0);
	func_149(4);
	if (bVar1)
	{
		func_185(Local_1172.f_1, Local_1172.f_2);
		if (!func_69(256))
		{
			if (iVar0 == 1)
			{
				func_186(Local_1172.f_18, 1);
			}
			else
			{
				func_186(Local_1172.f_18, 0);
			}
			func_149(256);
		}
	}
	else
	{
		func_186(Local_1172.f_18, 2);
	}
}

bool func_69(int iParam0)
{
	return func_187(Local_1172.f_7, iParam0);
}

void func_70(int iParam0)
{
	if (!func_188(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	(*Global_1134390)[iVar0]->f_70 = iParam0;
	(*Global_1134390)[iVar0]->f_70.f_2 = 0;
}

void func_71()
{
	func_189(&(Local_1172.f_19.f_107), 1);
	clear_sequence_task(&(Local_1172.f_19.f_110));
}

void func_72(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_73(var uParam0)
{
	if (!func_190(uParam0))
	{
		return -1;
	}
	iVar0 = func_191(uParam0, uParam0->f_9);
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
			iVar0 = func_191(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_74(int iParam0)
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

void func_75(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 7;
	func_192(uParam0, iParam1);
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

void func_76(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_193(uParam0);
	switch (iParam1)
	{
		case 0:
			func_194(uParam0);
			uParam0->f_5 = 277430601;
			uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
			break;
		case 1:
			func_194(uParam0);
			uParam0->f_5 = 1659133778;
			uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
			break;
		case 2:
			func_194(uParam0);
			uParam0->f_5 = 1296650927;
			uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
			break;
		case 3:
			func_194(uParam0);
			uParam0->f_5 = 2115437634;
			uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
			break;
		case 4:
			func_194(uParam0);
			uParam0->f_5 = 1098622970;
			uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
			break;
		case 5:
			func_194(uParam0);
			uParam0->f_5 = 393263596;
			uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
			break;
		case 6:
			func_194(uParam0);
			uParam0->f_5 = 189453630;
			uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
			break;
		case 7:
			func_194(uParam0);
			uParam0->f_5 = -98921343;
			uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
			break;
		case 8:
			func_194(uParam0);
			uParam0->f_5 = 6025033;
			uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
			break;
		case 9:
			func_194(uParam0);
			uParam0->f_5 = -1060299979;
			uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
			break;
		case 10:
			func_194(uParam0);
			uParam0->f_5 = 682088681;
			uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
			break;
		case 11:
			func_194(uParam0);
			uParam0->f_5 = 1705841922;
			uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
			break;
		case 12:
			func_194(uParam0);
			uParam0->f_5 = -301205165;
			uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
			break;
		case 13:
			func_194(uParam0);
			uParam0->f_5 = 1906160715;
			uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
			break;
		case 14:
			func_194(uParam0);
			uParam0->f_5 = -1129906020;
			uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
			break;
		case 15:
			func_194(uParam0);
			uParam0->f_5 = 1592980994;
			uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
			break;
		case 16:
			func_194(uParam0);
			uParam0->f_5 = 686459378;
			uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
			break;
		case 17:
			func_194(uParam0);
			uParam0->f_5 = -259262381;
			uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
			break;
		case 18:
			func_194(uParam0);
			uParam0->f_5 = 1289806844;
			uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
			break;
		case 19:
			func_194(uParam0);
			uParam0->f_5 = 347656238;
			uParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
			break;
	}
}

void func_77(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 8;
	uParam0->f_2 = 1;
	func_193(uParam0);
	switch (iParam1)
	{
		case 0:
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			func_195(uParam0, 5);
			uParam0->f_5 = 1454566440;
			uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
			break;
		case 1:
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			func_195(uParam0, 5);
			uParam0->f_5 = 1141360338;
			uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
		case 2:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			func_195(uParam0, 5);
			uParam0->f_5 = 844768119;
			uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
		case 3:
			func_195(uParam0, 0);
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			func_195(uParam0, 4);
			func_195(uParam0, 5);
			func_195(uParam0, 7);
			uParam0->f_5 = -1601993562;
			uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
			break;
		case 4:
			func_195(uParam0, 0);
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			func_195(uParam0, 5);
			func_195(uParam0, 7);
			uParam0->f_5 = -901588956;
			uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
			break;
		case 5:
			func_195(uParam0, 0);
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			func_195(uParam0, 5);
			func_195(uParam0, 7);
			uParam0->f_5 = 2129019244;
			uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
		case 6:
			func_195(uParam0, 0);
			func_195(uParam0, 2);
			func_195(uParam0, 4);
			func_195(uParam0, 5);
			func_195(uParam0, 6);
			uParam0->f_5 = 1227099802;
			uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
			break;
		case 7:
			func_195(uParam0, 0);
			func_195(uParam0, 2);
			func_195(uParam0, 4);
			func_195(uParam0, 5);
			func_195(uParam0, 6);
			uParam0->f_5 = -940471213;
			uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
			break;
		case 8:
			func_195(uParam0, 0);
			func_195(uParam0, 2);
			func_195(uParam0, 4);
			func_195(uParam0, 5);
			func_195(uParam0, 6);
			uParam0->f_5 = -700569364;
			uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
			break;
		case 9:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			uParam0->f_5 = 412376369;
			uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
		case 10:
			func_195(uParam0, 0);
			func_195(uParam0, 2);
			func_195(uParam0, 5);
			func_195(uParam0, 7);
			uParam0->f_5 = -364052317;
			uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
		case 11:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			uParam0->f_5 = -989186530;
			uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
			break;
		case 12:
			func_195(uParam0, 0);
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			func_195(uParam0, 4);
			func_195(uParam0, 5);
			func_195(uParam0, 6);
			uParam0->f_5 = 333858683;
			uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
			break;
		case 13:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			uParam0->f_5 = -39511303;
			uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
			break;
		case 14:
			func_195(uParam0, 3);
			func_195(uParam0, 4);
			func_195(uParam0, 5);
			func_195(uParam0, 6);
			uParam0->f_5 = 813662381;
			uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
			break;
		case 15:
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			func_195(uParam0, 5);
			func_195(uParam0, 7);
			uParam0->f_5 = -1114006686;
			uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
			break;
		case 16:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			func_195(uParam0, 3);
			func_195(uParam0, 5);
			func_195(uParam0, 7);
			uParam0->f_5 = 1049238845;
			uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
			break;
		case 17:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			func_195(uParam0, 3);
			func_195(uParam0, 5);
			func_195(uParam0, 7);
			uParam0->f_5 = 1363886783;
			uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
			break;
		case 18:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			func_195(uParam0, 5);
			uParam0->f_5 = -1215674354;
			uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
			break;
		case 19:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			uParam0->f_5 = 1902132155;
			uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
			break;
		case 20:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			func_195(uParam0, 5);
			uParam0->f_5 = 1661312774;
			uParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
			break;
	}
}

void func_78(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 2;
	func_193(uParam0);
	uParam0->f_15[0] = -2090512547;
	switch (iParam1)
	{
		case 0:
			func_194(uParam0);
			uParam0->f_5 = 1382777618;
			uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
		case 1:
			func_194(uParam0);
			uParam0->f_5 = -2000681184;
			uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
			break;
		case 2:
			func_194(uParam0);
			uParam0->f_5 = 886884092;
			uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
			break;
		case 3:
			func_194(uParam0);
			uParam0->f_5 = -1277120723;
			uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
			break;
		case 4:
			func_194(uParam0);
			uParam0->f_5 = 1577436816;
			uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
			break;
		case 5:
			func_194(uParam0);
			uParam0->f_5 = -234749781;
			uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
			break;
		case 6:
			func_194(uParam0);
			uParam0->f_5 = -1607623039;
			uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
		case 7:
			func_194(uParam0);
			uParam0->f_5 = -1943295936;
			uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
			break;
		case 8:
			func_194(uParam0);
			uParam0->f_5 = -397730168;
			uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
			break;
		case 9:
			func_194(uParam0);
			uParam0->f_5 = -392659534;
			uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
			break;
		case 10:
			func_194(uParam0);
			uParam0->f_5 = 146267878;
			uParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
			break;
	}
}

void func_79(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_193(uParam0);
	switch (iParam1)
	{
		case 0:
			func_194(uParam0);
			uParam0->f_5 = 1247886914;
			uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
		case 1:
			func_194(uParam0);
			uParam0->f_5 = 1926100410;
			uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
			break;
		case 2:
			func_194(uParam0);
			uParam0->f_5 = 603340011;
			uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
			break;
		case 3:
			func_194(uParam0);
			uParam0->f_5 = -1253915394;
			uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
			break;
		case 4:
			func_194(uParam0);
			uParam0->f_5 = 1281783573;
			uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
			break;
		case 5:
			func_194(uParam0);
			uParam0->f_5 = -1384936716;
			uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
			break;
		case 6:
			func_194(uParam0);
			uParam0->f_5 = 636669604;
			uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
			break;
		case 7:
			func_194(uParam0);
			uParam0->f_5 = 1410575087;
			uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
			break;
		case 8:
			func_194(uParam0);
			uParam0->f_5 = -736919321;
			uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
		case 9:
			func_194(uParam0);
			uParam0->f_5 = 1755496218;
			uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
			break;
		case 10:
			func_194(uParam0);
			uParam0->f_5 = -1810033095;
			uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
			break;
		case 11:
			func_194(uParam0);
			uParam0->f_5 = 99707271;
			uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
			break;
		case 12:
			func_194(uParam0);
			uParam0->f_5 = 2145033839;
			uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
			break;
		case 13:
			func_194(uParam0);
			uParam0->f_5 = -994111457;
			uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
			break;
		case 14:
			func_194(uParam0);
			uParam0->f_5 = 702836385;
			uParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
			break;
	}
}

void func_80(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 16;
	uParam0->f_1 = 2;
	uParam0->f_2 = 8;
	switch (iParam2)
	{
		case 0:
			func_196(uParam0, 0);
			func_196(uParam0, 1);
			func_196(uParam0, 4);
			func_196(uParam0, 5);
			break;
		case 1:
			func_196(uParam0, 2);
			func_196(uParam0, 3);
			func_196(uParam0, 6);
			func_196(uParam0, 7);
			func_197(uParam0, 2);
			break;
		default:
			func_193(uParam0);
			break;
	}
	switch (iParam1)
	{
		case 0:
			func_195(uParam0, 0);
			uParam0->f_5 = -88606612;
			uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
			break;
		case 1:
			func_195(uParam0, 1);
			uParam0->f_5 = -1507537085;
			uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
		case 2:
			func_195(uParam0, 0);
			uParam0->f_5 = 150331424;
			uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
			break;
		case 3:
			func_195(uParam0, 1);
			uParam0->f_5 = -74168995;
			uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
			break;
		case 4:
			func_195(uParam0, 0);
			uParam0->f_5 = -1303456769;
			uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
			break;
		case 5:
			func_195(uParam0, 1);
			uParam0->f_5 = 2080696176;
			uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
			break;
		case 6:
			func_195(uParam0, 0);
			uParam0->f_5 = -801880493;
			uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
			break;
		case 7:
			func_195(uParam0, 1);
			uParam0->f_5 = -2098877513;
			uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
			break;
		case 8:
			func_195(uParam0, 0);
			uParam0->f_5 = -985131289;
			uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
			break;
		case 9:
			func_195(uParam0, 1);
			uParam0->f_5 = 171385032;
			uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
			break;
		case 10:
			func_195(uParam0, 0);
			uParam0->f_5 = -690365399;
			uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
			break;
		case 11:
			func_195(uParam0, 1);
			uParam0->f_5 = -393773180;
			uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
		case 12:
			func_195(uParam0, 0);
			uParam0->f_5 = 1783045643;
			uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
			break;
		case 13:
			func_195(uParam0, 1);
			uParam0->f_5 = -1841828372;
			uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
			break;
		case 14:
			func_195(uParam0, 0);
			uParam0->f_5 = -1926357119;
			uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
			break;
		case 15:
			func_195(uParam0, 1);
			uParam0->f_5 = -1904926193;
			uParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
			break;
	}
}

void func_81(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 12;
	uParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			func_195(uParam0, 9);
			func_195(uParam0, 10);
			func_195(uParam0, 11);
			func_198(uParam0, iParam2);
			uParam0->f_5 = 666420762;
			uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
			break;
		case 1:
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			func_195(uParam0, 8);
			func_195(uParam0, 9);
			func_195(uParam0, 10);
			func_195(uParam0, 11);
			func_198(uParam0, iParam2);
			uParam0->f_5 = 1145423923;
			uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
			break;
		case 2:
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			func_195(uParam0, 4);
			func_195(uParam0, 5);
			func_195(uParam0, 6);
			func_195(uParam0, 9);
			func_195(uParam0, 10);
			func_195(uParam0, 11);
			func_198(uParam0, iParam2);
			uParam0->f_5 = -1176575305;
			uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
			break;
		case 3:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			func_195(uParam0, 9);
			func_195(uParam0, 10);
			func_195(uParam0, 11);
			func_198(uParam0, iParam2);
			uParam0->f_5 = -888961792;
			uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
			break;
		case 4:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			func_195(uParam0, 9);
			func_195(uParam0, 10);
			func_195(uParam0, 11);
			func_198(uParam0, iParam2);
			uParam0->f_5 = -1145898130;
			uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
			break;
		case 5:
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			func_195(uParam0, 4);
			func_195(uParam0, 7);
			func_195(uParam0, 8);
			func_195(uParam0, 9);
			func_195(uParam0, 10);
			func_195(uParam0, 11);
			func_198(uParam0, iParam2);
			uParam0->f_5 = -264936334;
			uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
			break;
		case 6:
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			func_195(uParam0, 6);
			func_195(uParam0, 7);
			func_195(uParam0, 9);
			func_195(uParam0, 10);
			func_195(uParam0, 11);
			func_198(uParam0, iParam2);
			uParam0->f_5 = -562839313;
			uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
			break;
		case 7:
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			func_195(uParam0, 4);
			func_195(uParam0, 5);
			func_195(uParam0, 6);
			func_195(uParam0, 9);
			func_195(uParam0, 10);
			func_195(uParam0, 11);
			func_198(uParam0, iParam2);
			uParam0->f_5 = -819926700;
			uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
			break;
		case 8:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			func_195(uParam0, 9);
			func_195(uParam0, 10);
			func_195(uParam0, 11);
			func_198(uParam0, iParam2);
			uParam0->f_5 = -100890882;
			uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
			break;
		case 9:
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			func_195(uParam0, 5);
			func_195(uParam0, 9);
			func_195(uParam0, 10);
			func_195(uParam0, 11);
			func_198(uParam0, iParam2);
			uParam0->f_5 = 373607510;
			uParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
			break;
	}
}

void func_82(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_193(uParam0);
	switch (iParam1)
	{
		case 0:
			func_194(uParam0);
			uParam0->f_5 = -1562903685;
			uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
			break;
		case 1:
			func_194(uParam0);
			uParam0->f_5 = 442262250;
			uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
			break;
		case 2:
			func_194(uParam0);
			uParam0->f_5 = 2113001754;
			uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
			break;
		case 3:
			func_194(uParam0);
			uParam0->f_5 = 222101843;
			uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
			break;
		case 4:
			func_194(uParam0);
			uParam0->f_5 = 862535295;
			uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
		case 5:
			func_194(uParam0);
			uParam0->f_5 = 267494763;
			uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
			break;
		case 6:
			func_194(uParam0);
			uParam0->f_5 = 492498900;
			uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
			break;
		case 7:
			func_194(uParam0);
			uParam0->f_5 = -735417347;
			uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
		case 8:
			func_194(uParam0);
			uParam0->f_5 = 2000289900;
			uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
			break;
		case 9:
			func_194(uParam0);
			uParam0->f_5 = 1820563970;
			uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
			break;
		case 10:
			func_194(uParam0);
			uParam0->f_5 = 1501808210;
			uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
			break;
		case 11:
			func_194(uParam0);
			uParam0->f_5 = -1103422576;
			uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
			break;
		case 12:
			func_194(uParam0);
			uParam0->f_5 = -375108461;
			uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
			break;
		case 13:
			func_194(uParam0);
			uParam0->f_5 = 1074344160;
			uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
			break;
		case 14:
			func_194(uParam0);
			uParam0->f_5 = 1375567406;
			uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
			break;
		case 15:
			func_194(uParam0);
			uParam0->f_5 = 1695022182;
			uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
			break;
		case 16:
			func_194(uParam0);
			uParam0->f_5 = 1773241795;
			uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
			break;
		case 17:
			func_194(uParam0);
			uParam0->f_5 = 1650499101;
			uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
			break;
		case 18:
			func_194(uParam0);
			uParam0->f_5 = 149116609;
			uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
			break;
		case 19:
			func_194(uParam0);
			uParam0->f_5 = 1486166046;
			uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
			break;
		case 20:
			func_194(uParam0);
			uParam0->f_5 = 58739626;
			uParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
			break;
	}
}

void func_83(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	func_193(uParam0);
	func_197(uParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_194(uParam0);
			uParam0->f_5 = -1657923088;
			uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
		case 1:
			func_194(uParam0);
			uParam0->f_5 = -1268232386;
			uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
			break;
		case 2:
			func_194(uParam0);
			uParam0->f_5 = 1926851120;
			uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
			break;
		case 3:
			func_194(uParam0);
			uParam0->f_5 = -66052340;
			uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
			break;
		case 4:
			func_194(uParam0);
			uParam0->f_5 = 1738334804;
			uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
			break;
		case 5:
			func_194(uParam0);
			uParam0->f_5 = 1009780912;
			uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
			break;
		case 6:
			func_194(uParam0);
			uParam0->f_5 = -1560771476;
			uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
			break;
		case 7:
			func_194(uParam0);
			uParam0->f_5 = 453813335;
			uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
			break;
		case 8:
			func_194(uParam0);
			uParam0->f_5 = 786924542;
			uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
		case 9:
			func_194(uParam0);
			uParam0->f_5 = 1656593925;
			uParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
			break;
	}
}

void func_84(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 4;
	uParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_199(uParam0, iParam2);
			uParam0->f_5 = 1323108111;
			uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
			break;
		case 1:
			func_199(uParam0, iParam2);
			uParam0->f_5 = -1505479200;
			uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
			break;
		case 2:
			func_199(uParam0, iParam2);
			uParam0->f_5 = -1283075997;
			uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
			break;
		case 3:
			func_199(uParam0, iParam2);
			uParam0->f_5 = -2100531475;
			uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
			break;
		case 4:
			func_199(uParam0, iParam2);
			uParam0->f_5 = 269617530;
			uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
			break;
		case 5:
			func_199(uParam0, iParam2);
			uParam0->f_5 = 1592829750;
			uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
			break;
		case 6:
			func_199(uParam0, iParam2);
			uParam0->f_5 = 1817985549;
			uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
		case 7:
			func_199(uParam0, iParam2);
			uParam0->f_5 = 1945424739;
			uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
		case 8:
			func_199(uParam0, iParam2);
			uParam0->f_5 = 1787314318;
			uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
		case 9:
			func_199(uParam0, iParam2);
			uParam0->f_5 = 542354442;
			uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
		case 10:
			func_199(uParam0, iParam2);
			uParam0->f_5 = 1510776727;
			uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
		case 11:
			func_199(uParam0, iParam2);
			uParam0->f_5 = -2017297662;
			uParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
			break;
	}
}

void func_85(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_193(uParam0);
	switch (iParam1)
	{
		case 0:
			func_194(uParam0);
			uParam0->f_5 = -377638420;
			uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
		case 1:
			func_194(uParam0);
			uParam0->f_5 = 1308799438;
			uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
			break;
		case 2:
			func_194(uParam0);
			uParam0->f_5 = -1030922940;
			uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
			break;
		case 3:
			func_194(uParam0);
			uParam0->f_5 = 1750043358;
			uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
			break;
		case 4:
			func_194(uParam0);
			uParam0->f_5 = -1330609910;
			uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
			break;
		case 5:
			func_194(uParam0);
			uParam0->f_5 = 223942444;
			uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
			break;
		case 6:
			func_194(uParam0);
			uParam0->f_5 = 1067547121;
			uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
			break;
		case 7:
			func_194(uParam0);
			uParam0->f_5 = -450732096;
			uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
			break;
		case 8:
			func_194(uParam0);
			uParam0->f_5 = -1701940764;
			uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
			break;
		case 9:
			func_194(uParam0);
			uParam0->f_5 = 1584258975;
			uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
			break;
		case 10:
			func_194(uParam0);
			uParam0->f_5 = -98183174;
			uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
			break;
		case 11:
			func_194(uParam0);
			uParam0->f_5 = -90261849;
			uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
			break;
		case 12:
			func_194(uParam0);
			uParam0->f_5 = 754522971;
			uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
			break;
		case 13:
			func_194(uParam0);
			uParam0->f_5 = 974542513;
			uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
			break;
		case 14:
			func_194(uParam0);
			uParam0->f_5 = -790885273;
			uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
			break;
		case 15:
			func_194(uParam0);
			uParam0->f_5 = -1447045452;
			uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
			break;
		case 16:
			func_194(uParam0);
			uParam0->f_5 = -586115209;
			uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
			break;
		case 17:
			func_194(uParam0);
			uParam0->f_5 = 224941020;
			uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
			break;
		case 18:
			func_194(uParam0);
			uParam0->f_5 = -1179654578;
			uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
			break;
		case 19:
			func_194(uParam0);
			uParam0->f_5 = 1247197458;
			uParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
			break;
	}
}

void func_86(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 9;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_193(uParam0);
	uParam0->f_10 = 60f;
	switch (iParam1)
	{
		case 0:
			func_194(uParam0);
			uParam0->f_5 = 974582605;
			uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
		case 1:
			func_194(uParam0);
			uParam0->f_5 = -964359125;
			uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
		case 2:
			func_194(uParam0);
			uParam0->f_5 = -700339292;
			uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
		case 3:
			func_194(uParam0);
			uParam0->f_5 = -470300912;
			uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
		case 4:
			func_194(uParam0);
			uParam0->f_5 = -241343909;
			uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
		case 5:
			func_194(uParam0);
			uParam0->f_5 = 1944053474;
			uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
		case 6:
			func_194(uParam0);
			uParam0->f_5 = -2120646059;
			uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
		case 7:
			func_194(uParam0);
			uParam0->f_5 = -1656440405;
			uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
		case 8:
			func_194(uParam0);
			uParam0->f_5 = -1422404207;
			uParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
			break;
	}
}

void func_87(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 1;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	func_193(uParam0);
	func_197(uParam0, 1);
	func_197(uParam0, 4);
	func_197(uParam0, 8);
	func_197(uParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_194(uParam0);
			uParam0->f_5 = -1623035253;
			uParam0->f_11 = { func_200(func_126(iParam2)) };
			break;
	}
}

void func_88(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 5;
	uParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_201(uParam0, iParam2);
			uParam0->f_5 = -1957221189;
			uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
			break;
		case 1:
			func_201(uParam0, iParam2);
			uParam0->f_5 = 871956008;
			uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
			break;
		case 2:
			func_201(uParam0, iParam2);
			uParam0->f_5 = -718829908;
			uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
			break;
		case 3:
			func_201(uParam0, iParam2);
			uParam0->f_5 = -478076065;
			uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
			break;
		case 4:
			func_201(uParam0, iParam2);
			uParam0->f_5 = 158131441;
			uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
			break;
		case 5:
			func_201(uParam0, iParam2);
			uParam0->f_5 = 575051428;
			uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
			break;
		case 6:
			func_201(uParam0, iParam2);
			uParam0->f_5 = -861587350;
			uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
			break;
		case 7:
			func_201(uParam0, iParam2);
			uParam0->f_5 = -616671844;
			uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
			break;
		case 8:
			func_201(uParam0, iParam2);
			uParam0->f_5 = -828875274;
			uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
			break;
		case 9:
			func_201(uParam0, iParam2);
			uParam0->f_5 = -598017669;
			uParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
			break;
	}
}

void func_89(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_193(uParam0);
	switch (iParam1)
	{
		case 0:
			func_194(uParam0);
			uParam0->f_5 = 2136361638;
			uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
			break;
		case 1:
			func_194(uParam0);
			uParam0->f_5 = 1948005426;
			uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
			break;
		case 2:
			func_194(uParam0);
			uParam0->f_5 = 462368629;
			uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
		case 3:
			func_194(uParam0);
			uParam0->f_5 = -172629291;
			uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
		case 4:
			func_194(uParam0);
			uParam0->f_5 = 1063777848;
			uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
			break;
		case 5:
			func_194(uParam0);
			uParam0->f_5 = -267241827;
			uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
		case 6:
			func_194(uParam0);
			uParam0->f_5 = -1183266453;
			uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
		case 7:
			func_194(uParam0);
			uParam0->f_5 = -877826604;
			uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
		case 8:
			func_194(uParam0);
			uParam0->f_5 = 1527533302;
			uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
		case 9:
			func_194(uParam0);
			uParam0->f_5 = -865586768;
			uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
			break;
		case 10:
			func_194(uParam0);
			uParam0->f_5 = 294379466;
			uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
			break;
		case 11:
			func_194(uParam0);
			uParam0->f_5 = 452588198;
			uParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
			break;
	}
}

void func_90(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 2;
	uParam0->f_2 = 4;
	func_202(uParam0, iParam2);
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

void func_91(var uParam0, int iParam1)
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
	func_193(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -672003008;
			uParam0->f_11 = { 2153.785f, -1677.743f, 40.5666f };
			break;
		case 1:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -396317411;
			uParam0->f_11 = { 2188.584f, -1595.642f, 40.591f };
			break;
		case 2:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -1239103346;
			uParam0->f_11 = { 2078.438f, -1694.907f, 40.6896f };
			break;
		case 3:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -889851344;
			uParam0->f_11 = { 2066.834f, -1767.304f, 40.1183f };
			break;
		case 4:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -1582784618;
			uParam0->f_11 = { 2131.718f, -1865.66f, 40.0837f };
			break;
		case 5:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 407459900;
			uParam0->f_11 = { 2189.613f, -654.0466f, 40.5628f };
			break;
		case 6:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -1359903346;
			uParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
		case 7:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -1075501195;
			uParam0->f_11 = { 2212.435f, -599.6181f, 40.5628f };
			break;
		case 8:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -761049871;
			uParam0->f_11 = { 2273.341f, -693.9393f, 40.5628f };
			break;
		case 9:
			func_203(uParam0, iParam1);
			uParam0->f_5 = 1397804618;
			uParam0->f_11 = { 2314.659f, -599.6119f, 40.5628f };
			break;
		case 10:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -636095416;
			uParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
		case 11:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -933474091;
			uParam0->f_11 = { 2800.13f, -727.0102f, 40.6116f };
			break;
		case 12:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -1209520147;
			uParam0->f_11 = { 2726.128f, -662.6138f, 40.5283f };
			break;
		case 13:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -1524528544;
			uParam0->f_11 = { 2710.138f, -534.5544f, 40.615f };
			break;
		case 14:
			func_203(uParam0, iParam1);
			uParam0->f_5 = -449082741;
			uParam0->f_11 = { 2728.174f, -468.3862f, 40.7744f };
			break;
	}
}

void func_92(var uParam0, int iParam1)
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
			func_204(uParam0, iParam1);
			uParam0->f_5 = -42638554;
			uParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
		case 1:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -330841909;
			uParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
		case 2:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -637690825;
			uParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
		case 3:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 1210841234;
			uParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
		case 4:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -275624566;
			uParam0->f_11 = { -2023.4f, 662.6884f, 119.8702f };
			break;
		case 5:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -2051147289;
			uParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
		case 6:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -1760846718;
			uParam0->f_11 = { -2487.232f, 414.2487f, 148.2772f };
			break;
		case 7:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -1591562064;
			uParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
		case 8:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -1159724897;
			uParam0->f_11 = { -1377.945f, 265.2666f, 78.222f };
			break;
		case 9:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -114459335;
			uParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
		case 10:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 564350440;
			uParam0->f_11 = { -1091.188f, -37.3214f, 40.5256f };
			break;
		case 11:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -840522068;
			uParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
		case 12:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -2076667055;
			uParam0->f_11 = { -792.3045f, 647.1317f, 88.5497f };
			break;
	}
}

void func_93(var uParam0, int iParam1)
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
	func_193(uParam0);
	switch (iParam1)
	{
		case 0:
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			uParam0->f_5 = -666643000;
			uParam0->f_11 = { -2323.821f, -444.3168f, 143.2396f };
			break;
		case 1:
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			uParam0->f_5 = -930743103;
			uParam0->f_11 = { -2387.781f, -333.0453f, 142.8896f };
			break;
		case 2:
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			uParam0->f_5 = -4199612;
			uParam0->f_11 = { -2622.5f, -342.7303f, 141.5315f };
			break;
		case 3:
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			uParam0->f_5 = -1480377528;
			uParam0->f_11 = { -2760.32f, -77.8632f, 151.8582f };
			break;
		case 4:
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			uParam0->f_5 = -1817640794;
			uParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
		case 5:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			uParam0->f_5 = -915442079;
			uParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
		case 6:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			uParam0->f_5 = 1928422814;
			uParam0->f_11 = { 2257.893f, 256.7348f, 43.6559f };
			break;
		case 7:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			uParam0->f_5 = 1940620434;
			uParam0->f_11 = { 2324.826f, 895.6353f, 71.6451f };
			break;
		case 8:
			func_195(uParam0, 1);
			uParam0->f_5 = -665538457;
			uParam0->f_11 = { 2383.811f, 1084.155f, 85.9333f };
			break;
		case 9:
			func_195(uParam0, 1);
			uParam0->f_5 = 355243564;
			uParam0->f_11 = { 2398.53f, 773.5043f, 67.0099f };
			break;
	}
}

void func_94(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 326651247;
	func_193(uParam0);
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
			func_195(uParam0, 0);
			uParam0->f_5 = -1024453831;
			uParam0->f_11 = { -1856.609f, 1802.919f, 234.305f };
			break;
		case 1:
			func_195(uParam0, 0);
			uParam0->f_5 = -652787833;
			uParam0->f_11 = { -1821.152f, 1566.352f, 235.8068f };
			break;
		case 2:
			func_195(uParam0, 0);
			uParam0->f_5 = 230697180;
			uParam0->f_11 = { -2069.577f, 1812.812f, 246.0542f };
			break;
		case 3:
			func_195(uParam0, 0);
			uParam0->f_5 = -543699832;
			uParam0->f_11 = { -1932.007f, 2153.216f, 322.7221f };
			break;
		case 4:
			func_195(uParam0, 0);
			uParam0->f_5 = 894826503;
			uParam0->f_11 = { -1752.347f, 1951.369f, 264.5091f };
			break;
		case 5:
			func_195(uParam0, 1);
			uParam0->f_5 = 1666294228;
			uParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
		case 6:
			func_195(uParam0, 1);
			uParam0->f_5 = 1426851145;
			uParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
		case 7:
			func_195(uParam0, 1);
			uParam0->f_5 = -807339271;
			uParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
		case 8:
			func_195(uParam0, 1);
			uParam0->f_5 = -1050255868;
			uParam0->f_11 = { 1251.465f, 344.8225f, 92.1045f };
			break;
		case 9:
			func_195(uParam0, 1);
			uParam0->f_5 = -1406848126;
			uParam0->f_11 = { 913.0093f, 113.5476f, 116.3f };
			break;
	}
}

void func_95(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 11;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1848813677;
	func_193(uParam0);
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
			func_195(uParam0, 0);
			uParam0->f_5 = -1741150966;
			uParam0->f_11 = { -1352.639f, -2550.378f, 74.9777f };
			break;
		case 1:
			func_195(uParam0, 0);
			uParam0->f_5 = -796584541;
			uParam0->f_11 = { -1913.631f, -2213.565f, 42.0518f };
			break;
		case 2:
			func_195(uParam0, 0);
			uParam0->f_5 = 80182823;
			uParam0->f_11 = { -1745.884f, -2388.807f, 42.8205f };
			break;
		case 3:
			func_195(uParam0, 1);
			uParam0->f_5 = 1964620432;
			uParam0->f_11 = { -1593.106f, -2351.92f, 43.0229f };
			break;
		case 4:
			func_195(uParam0, 1);
			uParam0->f_5 = 1731665611;
			uParam0->f_11 = { -1800.651f, -1644.944f, 96.7288f };
			break;
		case 5:
			func_195(uParam0, 1);
			uParam0->f_5 = -1728544175;
			uParam0->f_11 = { -1628.216f, -1943.554f, 50.1671f };
			break;
		case 6:
			func_195(uParam0, 2);
			uParam0->f_5 = -1242537170;
			uParam0->f_11 = { 2443.712f, -19.2163f, 43.2151f };
			break;
		case 7:
			func_195(uParam0, 2);
			uParam0->f_5 = 2036591126;
			uParam0->f_11 = { 2715.91f, -128.7452f, 42.0147f };
			break;
		case 8:
			func_195(uParam0, 2);
			uParam0->f_5 = 197299925;
			uParam0->f_11 = { 2363.777f, 13.1458f, 41.3272f };
			break;
		case 9:
			func_195(uParam0, 2);
			uParam0->f_5 = 1291850063;
			uParam0->f_11 = { 2355.338f, -247.3491f, 41.5576f };
			break;
		case 10:
			func_195(uParam0, 2);
			uParam0->f_5 = 1599124976;
			uParam0->f_11 = { 2601.386f, -212.5256f, 43.7812f };
			break;
	}
}

void func_96(var uParam0, int iParam1)
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
			func_205(uParam0, iParam1);
			uParam0->f_5 = 980541174;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
		case 1:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 1220770713;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
		case 2:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 1322813407;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
		case 3:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 1552098100;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
		case 4:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 1916358304;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
		case 5:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1363212564;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5896.217f, -3811.854f, -31.2514f };
			break;
		case 6:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 686685000;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6360.188f, -3401.399f, -14.7027f };
			break;
		case 7:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1524698208;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6241.614f, -3430.465f, 1.465f };
			break;
		case 8:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1804348854;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6091.54f, -3398.527f, 17.9157f };
			break;
		case 9:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -2035403073;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6054.187f, -3594.051f, -4.8637f };
			break;
		case 10:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 728964560;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5609.956f, -3781.126f, -24.15435f };
			break;
		case 11:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 765075998;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5664.643f, -3561.726f, -24.1565f };
			break;
		case 12:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 1070974613;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5811.027f, -3789.534f, -27.8079f };
			break;
		case 13:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -1088797396;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5906.508f, -3520.436f, -24.1555f };
			break;
		case 14:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -740987230;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5753.862f, -3302.776f, -24.1569f };
			break;
		case 15:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 2110034336;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -937.2829f, -1900.071f, 50.81326f };
			break;
		case 16:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -783796062;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -1060.57f, -1731.06f, 75.49813f };
			break;
		case 17:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -545106666;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1052.66f, -1784.942f, 62.46124f };
			break;
		case 18:
			func_205(uParam0, iParam1);
			uParam0->f_5 = 379536207;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			break;
		case 19:
			func_205(uParam0, iParam1);
			uParam0->f_5 = -992108595;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1331.61f, -1892.678f, 60.4174f };
			break;
	}
}

void func_97(var uParam0, int iParam1)
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
			func_206(uParam0, iParam1);
			uParam0->f_5 = 1750035473;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1486.613f, -2140.134f, 47.13319f };
			break;
		case 1:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -1499633496;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1400.093f, -2166.322f, 47.3376f };
			break;
		case 2:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 2019068959;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1229.798f, -2101.002f, 57.1906f };
			break;
		case 3:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 1010504677;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1036.581f, -2147.274f, 43.912f };
			break;
		case 4:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 1297331734;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1190.843f, -2218.737f, 57.2836f };
			break;
		case 5:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 980309385;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
		case 6:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 1451396569;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 1632.416f, -616.6262f, 42.8678f };
			break;
		case 7:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -1404978858;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2127.624f, -907.4355f, 40.6492f };
			break;
		case 8:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -1173302028;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2023.697f, -1017.159f, 42.3998f };
			break;
		case 9:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 2143543387;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
		case 10:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 1187325752;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2183.54f, -213.3573f, 45.5331f };
			break;
		case 11:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 201273773;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 2185.672f, -43.506f, 52.2188f };
			break;
		case 12:
			func_206(uParam0, iParam1);
			uParam0->f_5 = 36249089;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
		case 13:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -1717449488;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 1832.42f, -317.352f, 45.708f };
			break;
		case 14:
			func_206(uParam0, iParam1);
			uParam0->f_5 = -2014041707;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 1876.532f, -453.5455f, 43.2695f };
			break;
	}
}

void func_98(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 29257535;
	func_193(uParam0);
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
			func_195(uParam0, 3);
			func_195(uParam0, 4);
			func_195(uParam0, 5);
			uParam0->f_5 = -813726569;
			uParam0->f_11 = { -2685.817f, -2697.83f, 71.8905f };
			break;
		case 1:
			func_195(uParam0, 3);
			func_195(uParam0, 4);
			func_195(uParam0, 5);
			uParam0->f_5 = -991070207;
			uParam0->f_11 = { -2841.472f, -2845.188f, 86.3463f };
			break;
		case 2:
			func_195(uParam0, 3);
			func_195(uParam0, 4);
			func_195(uParam0, 5);
			uParam0->f_5 = 1385332783;
			uParam0->f_11 = { -3043.896f, -2154.732f, 59.9256f };
			break;
		case 3:
			func_195(uParam0, 3);
			func_195(uParam0, 4);
			func_195(uParam0, 5);
			uParam0->f_5 = 1394180521;
			uParam0->f_11 = { -2653.586f, -2143.511f, 75.962f };
			break;
		case 4:
			func_195(uParam0, 3);
			func_195(uParam0, 4);
			func_195(uParam0, 5);
			uParam0->f_5 = -1581141590;
			uParam0->f_11 = { -3228.791f, -2434.523f, 26.6737f };
			break;
		case 5:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			uParam0->f_5 = 1300807189;
			uParam0->f_11 = { -1177.594f, -748.8547f, 67.811f };
			break;
		case 6:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			uParam0->f_5 = -1226288496;
			uParam0->f_11 = { -1735.686f, -628.3361f, 145.1246f };
			break;
		case 7:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			uParam0->f_5 = -566411244;
			uParam0->f_11 = { -1572.939f, -328.771f, 160.6099f };
			break;
		case 8:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			uParam0->f_5 = 1931184426;
			uParam0->f_11 = { -1463.646f, -481.3466f, 129.9887f };
			break;
		case 9:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			uParam0->f_5 = 432310963;
			uParam0->f_11 = { -1525.983f, -916.2361f, 88.1698f };
			break;
	}
}

void func_99(var uParam0, int iParam1)
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
			func_207(uParam0, iParam1);
			uParam0->f_5 = 439376203;
			uParam0->f_11 = { 1200.338f, -568.1477f, 67.3878f };
			break;
		case 1:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -862568936;
			uParam0->f_11 = { 1238.102f, -546.7609f, 66.5485f };
			break;
		case 2:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -1361247578;
			uParam0->f_11 = { 1294.011f, -627.1522f, 58.9807f };
			break;
		case 3:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -518330591;
			uParam0->f_11 = { 1330.112f, -709.0779f, 64.7788f };
			break;
		case 4:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 1666706329;
			uParam0->f_11 = { 1174.01f, -520.5736f, 69.0551f };
			break;
		case 5:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 618479763;
			uParam0->f_11 = { 627.306f, -1038.205f, 42.0511f };
			break;
		case 6:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 916579356;
			uParam0->f_11 = { 675.5718f, -1121.435f, 50.7543f };
			break;
		case 7:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -1544831314;
			uParam0->f_11 = { 799.3545f, -1190.935f, 42.9927f };
			break;
		case 8:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -1524645610;
			uParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
		case 9:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 5765001;
			uParam0->f_11 = { 745.8436f, -1119.909f, 55.5229f };
			break;
		case 10:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -147337997;
			uParam0->f_11 = { -963.4839f, 2238.298f, 342.2684f };
			break;
		case 11:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 46195721;
			uParam0->f_11 = { -1100.64f, 2080.921f, 365.7759f };
			break;
		case 12:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -41952889;
			uParam0->f_11 = { -1209.432f, 2421.632f, 309.8767f };
			break;
		case 13:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -280740592;
			uParam0->f_11 = { -1280.937f, 2445.134f, 305.019f };
			break;
		case 14:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -636874084;
			uParam0->f_11 = { -1340.472f, 2298.734f, 308.7317f };
			break;
		case 15:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -1240479072;
			uParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
		case 16:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -1479922155;
			uParam0->f_11 = { -1329.47f, 2266.865f, 309.1315f };
			break;
		case 17:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -1836252261;
			uParam0->f_11 = { -1202.59f, 2191.101f, 333.5445f };
			break;
		case 18:
			func_207(uParam0, iParam1);
			uParam0->f_5 = -2075236578;
			uParam0->f_11 = { -1171.686f, 2299.184f, 323.3623f };
			break;
		case 19:
			func_207(uParam0, iParam1);
			uParam0->f_5 = 1074322888;
			uParam0->f_11 = { -1394.394f, 2394.838f, 308.3089f };
			break;
	}
}

void func_100(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -2109368060;
	func_193(uParam0);
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
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			uParam0->f_5 = 1070019252;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 1:
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			uParam0->f_5 = -510012600;
			uParam0->f_11 = { 2808.358f, 2290.307f, 155.8015f };
			break;
		case 2:
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			uParam0->f_5 = -250768090;
			uParam0->f_11 = { 2324.25f, 2143.964f, 211.2929f };
			break;
		case 3:
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			uParam0->f_5 = 1057891329;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 4:
			func_195(uParam0, 2);
			func_195(uParam0, 3);
			uParam0->f_5 = 863129034;
			uParam0->f_11 = { 2489.669f, 2265.437f, 175.6015f };
			break;
		case 5:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			uParam0->f_5 = -1100103111;
			uParam0->f_11 = { -957.019f, 1550.161f, 237.4414f };
			break;
		case 6:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			uParam0->f_5 = -383805560;
			uParam0->f_11 = { -1023.774f, 1561.614f, 237.4295f };
			break;
		case 7:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			uParam0->f_5 = -233104073;
			uParam0->f_11 = { -986.7993f, 1636.296f, 237.4295f };
			break;
		case 8:
			func_195(uParam0, 1);
			uParam0->f_5 = -604353467;
			uParam0->f_11 = { -874.8361f, 1499.423f, 245.7041f };
			break;
		case 9:
			func_195(uParam0, 1);
			uParam0->f_5 = 1641665016;
			uParam0->f_11 = { -919.2281f, 1482.48f, 245.1043f };
			break;
	}
}

void func_101(var uParam0, int iParam1)
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
			func_208(uParam0, iParam1);
			uParam0->f_5 = -1895828765;
			uParam0->f_11 = { 1649.598f, 1335.141f, 144.8913f };
			break;
		case 1:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 1786489311;
			uParam0->f_11 = { 1711.248f, 1464.318f, 146.3869f };
			break;
		case 2:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 1548029298;
			uParam0->f_11 = { 1569.279f, 1372.517f, 145.0414f };
			break;
		case 3:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -718766281;
			uParam0->f_11 = { 1427.097f, 1701.411f, 197.8922f };
			break;
		case 4:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -1212595111;
			uParam0->f_11 = { 1593.958f, 1646.358f, 143.5214f };
			break;
		case 5:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -1283376151;
			uParam0->f_11 = { 1694.973f, 1740.234f, 188.4962f };
			break;
		case 6:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -1525768444;
			uParam0->f_11 = { 1487.993f, 1066.912f, 182.3846f };
			break;
		case 7:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 249590434;
			uParam0->f_11 = { 1401.922f, 1325.553f, 163.9692f };
			break;
		case 8:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 9885199;
			uParam0->f_11 = { 1812.587f, 1193.924f, 215.9388f };
			break;
		case 9:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 1343123829;
			uParam0->f_11 = { 1940.486f, 1389.066f, 177.8712f };
			break;
		case 10:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -2039750752;
			uParam0->f_11 = { 127.6135f, 1824.788f, 199.2989f };
			break;
		case 11:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -2028740368;
			uParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
		case 12:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 1508771493;
			uParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
		case 13:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 1820404683;
			uParam0->f_11 = { 185.3962f, 1824.202f, 200.2588f };
			break;
		case 14:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 1332736425;
			uParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
		case 15:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 536875722;
			uParam0->f_11 = { 239.17f, 1914.014f, 204.8216f };
			break;
		case 16:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 795259287;
			uParam0->f_11 = { 512.8569f, 1926.074f, 199.1983f };
			break;
		case 17:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 20501824;
			uParam0->f_11 = { 325.2433f, 1902.083f, 200.069f };
			break;
		case 18:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 320272636;
			uParam0->f_11 = { 360.4333f, 1843.854f, 185.1447f };
			break;
		case 19:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 1135434088;
			uParam0->f_11 = { 506.2105f, 1883.957f, 201.9437f };
			break;
		case 20:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 1976647087;
			uParam0->f_11 = { 253.8551f, 1705.438f, 187.3591f };
			break;
		case 21:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -2028969939;
			uParam0->f_11 = { 320.4962f, 1736.16f, 192.2878f };
			break;
		case 22:
			func_208(uParam0, iParam1);
			uParam0->f_5 = 2065778767;
			uParam0->f_11 = { -29.8717f, 1716.412f, 179.3378f };
			break;
		case 23:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -1385354006;
			uParam0->f_11 = { -20.6945f, 1632.488f, 162.0277f };
			break;
		case 24:
			func_208(uParam0, iParam1);
			uParam0->f_5 = -1602546938;
			uParam0->f_11 = { 480.1275f, 2070.224f, 235.143f };
			break;
	}
}

void func_102(var uParam0, int iParam1, int iParam2)
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
	func_209(uParam0, iParam1, iParam2);
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

void func_103(var uParam0, int iParam1, int iParam2)
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
	func_210(uParam0, iParam1, iParam2);
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

void func_104(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -405566878;
	func_193(uParam0);
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
			func_195(uParam0, 0);
			break;
		case 1:
			uParam0->f_5 = 1765108824;
			uParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_195(uParam0, 0);
			break;
		case 2:
			uParam0->f_5 = 1620892455;
			uParam0->f_11 = { -142.6579f, 1231.128f, 164.5134f };
			func_195(uParam0, 0);
			break;
		case 3:
			uParam0->f_5 = 1380531840;
			uParam0->f_11 = { 411.3364f, 1329.074f, 180.39f };
			func_195(uParam0, 0);
			break;
		case 4:
			uParam0->f_5 = -1542790654;
			uParam0->f_11 = { 473.7581f, 1011.376f, 173.0766f };
			func_195(uParam0, 0);
			break;
		case 5:
			uParam0->f_5 = -1733556405;
			uParam0->f_11 = { -4209.333f, -2677.593f, 5.4303f };
			func_195(uParam0, 1);
			break;
		case 6:
			uParam0->f_5 = -478503693;
			uParam0->f_11 = { -4260.617f, -2412.103f, 23.6335f };
			func_195(uParam0, 1);
			break;
		case 7:
			uParam0->f_5 = -156122271;
			uParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_195(uParam0, 1);
			break;
		case 8:
			uParam0->f_5 = 1073468916;
			uParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_195(uParam0, 1);
			break;
		case 9:
			uParam0->f_5 = -249481152;
			uParam0->f_11 = { -4104.459f, -2061.22f, 4.8147f };
			func_195(uParam0, 1);
			break;
	}
}

void func_105(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_193(uParam0);
	switch (iParam1)
	{
		case 0:
			func_194(uParam0);
			uParam0->f_5 = -206668292;
			uParam0->f_11 = { -2586.923f, -264.5349f, 161.6671f };
			break;
		case 1:
			func_194(uParam0);
			uParam0->f_5 = -2125063863;
			uParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
		case 2:
			func_194(uParam0);
			uParam0->f_5 = -2012469579;
			uParam0->f_11 = { -2196.576f, 468.8412f, 119.5676f };
			break;
		case 3:
			func_194(uParam0);
			uParam0->f_5 = 108841496;
			uParam0->f_11 = { -1637.2f, -1513.234f, 82.6688f };
			break;
		case 4:
			func_194(uParam0);
			uParam0->f_5 = 415657643;
			uParam0->f_11 = { -825.3087f, -1804.951f, 59.0313f };
			break;
		case 5:
			func_194(uParam0);
			uParam0->f_5 = 1133170861;
			uParam0->f_11 = { 1786.915f, 1588.926f, 167.4663f };
			break;
		case 6:
			func_194(uParam0);
			uParam0->f_5 = 2120009296;
			uParam0->f_11 = { 1959.894f, 1387.251f, 179.786f };
			break;
		case 7:
			func_194(uParam0);
			uParam0->f_5 = 689773522;
			uParam0->f_11 = { 637.5925f, 2099.455f, 222.0308f };
			break;
		case 8:
			func_194(uParam0);
			uParam0->f_5 = -258135345;
			uParam0->f_11 = { 1296.321f, 1161.685f, 150.1379f };
			break;
		case 9:
			func_194(uParam0);
			uParam0->f_5 = 2107537913;
			uParam0->f_11 = { -2100.247f, -1372.887f, 127.7423f };
			break;
		case 10:
			func_194(uParam0);
			uParam0->f_5 = -1477292384;
			uParam0->f_11 = { -2205.016f, -1584.145f, 148.3944f };
			break;
	}
}

void func_106(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_193(uParam0);
	switch (iParam1)
	{
		case 0:
			func_194(uParam0);
			uParam0->f_5 = -274965770;
			uParam0->f_11 = { -1109.718f, 2104.703f, 361.4368f };
			break;
		case 1:
			func_194(uParam0);
			uParam0->f_5 = 1652259747;
			uParam0->f_11 = { -4300.761f, -3445.602f, 33.26603f };
			break;
		case 2:
			func_194(uParam0);
			uParam0->f_5 = -743720569;
			uParam0->f_11 = { -3895.461f, -2492.511f, -11.57848f };
			break;
		case 3:
			func_194(uParam0);
			uParam0->f_5 = -1200331578;
			uParam0->f_11 = { -2190.508f, -2867.223f, 25.40727f };
			break;
		case 4:
			func_194(uParam0);
			uParam0->f_5 = -1026512984;
			uParam0->f_11 = { -2083.893f, -1412.552f, 131.8581f };
			break;
		case 5:
			func_194(uParam0);
			uParam0->f_5 = -1017773316;
			uParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
		case 6:
			func_194(uParam0);
			uParam0->f_5 = 303940131;
			uParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
		case 7:
			func_194(uParam0);
			uParam0->f_5 = 1273284251;
			uParam0->f_11 = { 1548.084f, 1355.097f, 146.0557f };
			break;
		case 8:
			func_194(uParam0);
			uParam0->f_5 = -950817569;
			uParam0->f_11 = { 2652.989f, 1189.503f, 118.7033f };
			break;
		case 9:
			func_194(uParam0);
			uParam0->f_5 = -910888222;
			uParam0->f_11 = { 1509.102f, -2101.449f, 45.3134f };
			break;
	}
}

void func_107(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 7;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_193(uParam0);
	switch (iParam1)
	{
		case 0:
			func_194(uParam0);
			uParam0->f_5 = -803667719;
			uParam0->f_11 = { -1499.397f, -553.9472f, 131.8198f };
			break;
		case 1:
			func_194(uParam0);
			uParam0->f_5 = -822411587;
			uParam0->f_11 = { -1760.55f, 268.6243f, 118.6948f };
			break;
		case 2:
			func_194(uParam0);
			uParam0->f_5 = -1331314157;
			uParam0->f_11 = { -2762.128f, -158.0485f, 150.8974f };
			break;
		case 3:
			func_194(uParam0);
			uParam0->f_5 = -1580456864;
			uParam0->f_11 = { -719.5702f, -756.9052f, 49.81378f };
			break;
		case 4:
			func_195(uParam0, 0);
			func_195(uParam0, 2);
			uParam0->f_5 = -102469545;
			uParam0->f_11 = { 951.5258f, -1248.371f, 53.86922f };
			break;
		case 5:
			func_195(uParam0, 0);
			func_195(uParam0, 2);
			uParam0->f_5 = 70321392;
			uParam0->f_11 = { 1088.291f, -1418.599f, 55.54557f };
			break;
		case 6:
			func_195(uParam0, 0);
			func_195(uParam0, 2);
			uParam0->f_5 = 529087392;
			uParam0->f_11 = { 1289.693f, -1603.704f, 64.23989f };
			break;
	}
}

void func_108(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 8;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -418287183;
			uParam0->f_11 = { -2081.231f, -2774.597f, 77.5683f };
			break;
		case 1:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -1127015115;
			uParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
		case 2:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -1853700459;
			uParam0->f_11 = { -2925.017f, -2769.882f, 95.6414f };
			break;
		case 3:
			func_211(uParam0, iParam1);
			uParam0->f_5 = 529883832;
			uParam0->f_11 = { -2648.38f, -2977.772f, 76.4237f };
			break;
		case 4:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -204230900;
			uParam0->f_11 = { -2323.921f, -2074.845f, 88.1254f };
			break;
		case 5:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -1938530367;
			uParam0->f_11 = { -3455.578f, -2264.7f, 4.7142f };
			break;
		case 6:
			func_211(uParam0, iParam1);
			uParam0->f_5 = 1968802033;
			uParam0->f_11 = { -3581.218f, -3650.89f, -12.8679f };
			break;
		case 7:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -2098551789;
			uParam0->f_11 = { -5254.539f, -4050.37f, -3.6288f };
			break;
	}
}

void func_109(var uParam0, int iParam1, int iParam2)
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
	iVar0 = func_212(iParam1);
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
	*uParam0 = func_213(iVar0);
	uParam0->f_1 = 0;
	uParam0->f_6 = 2;
	func_197(uParam0, 32);
	if (iParam2 != -1)
	{
		uParam0->f_9 = func_215(func_214(iVar0), iParam2);
		uParam0->f_15[0] = func_216(func_214(iVar0), iParam2);
		uParam0->f_5 = func_217(iVar0, iParam2);
		uParam0->f_11 = { func_218(iVar0, iParam2) };
	}
}

int func_110(int iParam0)
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

int func_111(int iParam0, var uParam1, int iParam2)
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

struct<2> func_112()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_113()
{
	reserve_network_mission_peds(6);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			Local_83[iVar1]->f_2.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_114()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 4)
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

void func_115()
{
	bVar3 = func_219(&iVar2);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_221(func_181(iVar0), func_220(func_181(iVar0)));
		Local_1172.f_514[iVar0] = func_220(func_181(iVar0));
		if (bVar3)
		{
			func_122(&(Local_83[iVar2]->f_31.f_1), iVar0, 3);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 32)
			{
				func_122(&(Local_83[iVar1]->f_31.f_1), iVar0, 3);
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_116()
{
	func_222(&(Local_1172.f_291), &(Local_1172.f_291.f_32));
	bVar2 = true;
	if (!func_219(&iVar1))
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (network_is_host_of_this_script())
		{
			Local_13.f_35.f_8[iVar0] = 0;
			Local_13.f_35.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			Local_83[iVar1]->f_11.f_12[iVar0] = 0;
		}
		iVar0++;
	}
	func_223(&(Local_1172.f_291.f_87), 8, -1);
	if (bVar2)
	{
		func_223(&(Local_83[iVar1]->f_11), 8, -1);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			func_223(&(Local_83[iVar3]->f_11), 8, -1);
			iVar3++;
		}
	}
}

void func_117()
{
}

void func_118()
{
	switch (func_224())
	{
		case 0:
			func_227(0, -Vector((1f + func_225()), 0f, 0f), func_226(), 0);
			switch (func_228())
			{
				case 0:
					func_229(0, -757935404);
					func_230(0, -1730985076);
					func_231(0, "0726_A_M_M_GuaTownfolk_01_HISPANIC_04");
					break;
				case 1:
					func_229(0, -757935404);
					func_230(0, -1970166007);
					break;
			}
			break;
	}
	func_232(0, 1);
	func_229(1, func_233(997958153, 1));
	func_227(1, func_234(), func_235(), 1);
	if (func_236() == 1)
	{
		iVar0 = get_random_int_in_range(0, 8);
		if (iVar0 < 2)
		{
			func_237(3, 5, -885451903);
		}
		else if (iVar0 == 2)
		{
			func_237(3, 4, 90264823);
		}
		else
		{
			func_237(3, 5, 480688259);
		}
		func_227(3, 6.91f, -0.98f, -3f, 0f, 0);
		func_227(4, 5.16f, 2.39f, -3f, 0f, 0);
		func_227(5, 2.81f, -3.19f, -3f, 0f, 0);
	}
}

void func_119()
{
	func_238(1, 1996775400);
	func_239(1, 0f, 0f, 0f, 0f, 0, 0);
	func_240(1, 1);
	func_238(0, 1992381179);
	func_239(0, 0f, 0f, -func_225(), 0f, 0, 0);
	func_240(0, 1);
	func_238(2, 1867102405);
	func_239(2, 0f, 0f, 0.5f, 0f, 0, 0);
	func_238(3, 319326044);
	if (func_241() != 4)
	{
		func_239(3, 1.5f, -1.3f, -func_242(), get_random_float_in_range(0f, 360f), 1, 0);
	}
	else
	{
		func_239(3, 1.5f, 1.3f, -func_242(), get_random_float_in_range(0f, 360f), 1, 0);
	}
}

void func_120(int iParam0)
{
	func_243(&(Local_1172.f_19.f_2), iParam0);
}

void func_121(int iParam0)
{
	if (network_is_host_of_this_script())
	{
		func_243(&(Local_13.f_7.f_1), iParam0);
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
	return func_244(uParam0->f_25, iParam1);
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
		func_243(&(Local_13.f_1), iParam0);
	}
}

bool func_128(int iParam0)
{
	if (!func_188(iParam0))
	{
		return false;
	}
	return (func_245(iParam0) && (*Global_1131196)[iParam0]->f_18.f_1 != 0);
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
	if (func_246(Local_1172.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!_0xa4a4359320345b34(Local_13.f_3))
	{
		if (_0x397769175a7dbb30(Local_1172.f_15, Param0.f_10, 0, 0, 0))
		{
			_0xfa15c9a320e707b0();
			*uParam31 = 1;
			return false;
		}
		func_247(&uVar1, Param0);
		Local_13.f_3 = _0x183c0b6cfeffcae4(&uVar1);
		func_151(128);
	}
	else if (!func_134(128, 255))
	{
		Local_13.f_3.f_1 = func_248(Param0);
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
		if (!func_219(&iParam1))
		{
			return false;
		}
	}
	return func_187(&(Local_83[iParam1]), iParam0);
}

bool func_135(int iParam0)
{
	return func_187(Local_13.f_1, iParam0);
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
	if (func_249(32))
	{
		if (!_has_scenario_type_loaded(-493351432, false))
		{
			return false;
		}
		if (!_does_scenario_point_exist(Local_13.f_7.f_2))
		{
			Local_13.f_7.f_2 = create_scenario_point(-493351432, func_250(1) - Vector(0.5f, 0f, 0f), func_251(1), 0, 0, 0);
		}
	}
	if (!func_249(128))
	{
		func_252();
	}
	return true;
}

bool func_139()
{
	if (!func_253(&bVar0))
	{
		if (bVar0)
		{
			func_254();
		}
		return false;
	}
	if (!func_255(&bVar0))
	{
		if (bVar0)
		{
			func_254();
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
	if (!func_135(32) && func_256(32))
	{
		func_127(32);
	}
	if (!func_135(64) && func_256(64))
	{
		func_127(64);
	}
	if (!func_135(16) && func_257(16))
	{
		func_127(16);
	}
	if ((!func_135(2048) && func_256(2048)) && !func_256(4096))
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
	if (func_135(2048) && !func_256(4096))
	{
		func_129(6);
		return;
	}
}

void func_143()
{
	func_258();
}

bool func_144()
{
	if (func_259())
	{
		return true;
	}
	if (func_260(64, 0) && does_rope_exist(Local_1172.f_19.f_106))
	{
		delete_rope(&(Local_1172.f_19.f_106));
	}
	if (is_ped_fleeing(func_261(1)) && !func_249(8192))
	{
		func_121(8192);
	}
	if (func_260(1048576, 0))
	{
		if (func_262(0))
		{
			func_263(0, 0);
		}
		if (!func_264())
		{
			func_265();
		}
		if (func_266() != 6)
		{
			func_267(6);
		}
	}
	switch (func_236())
	{
		case 0:
			switch (func_266())
			{
				case 0:
					func_268();
					break;
				case 1:
					func_269();
					break;
				case 2:
					func_270();
					break;
				case 4:
					func_271();
					break;
				case 3:
					func_272();
					break;
			}
			break;
		case 1:
			switch (func_266())
			{
				case 0:
					func_273();
					break;
				case 1:
					func_274();
					break;
				case 2:
					func_275();
					break;
				case 4:
					func_276();
					break;
				case 3:
					func_277();
					break;
			}
			break;
	}
	return false;
}

void func_145()
{
}

bool func_146()
{
	if (_does_scenario_point_exist(Local_13.f_7.f_2))
	{
		_delete_scenario_point(Local_13.f_7.f_2);
	}
	return true;
}

void func_147(int iParam0)
{
	if (func_69(iParam0))
	{
		func_278(&(Local_1172.f_7), iParam0);
	}
}

int func_148(int iParam0, int iParam1, bool bParam2)
{
	if (!func_188(iParam0))
	{
		return 0;
	}
	iVar0 = func_279(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = player_id();
	(*Global_1134390)[iVar1]->f_70 = iParam0;
	(*Global_1134390)[iVar1]->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_280(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	else
	{
		func_281(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	return 1;
}

void func_149(int iParam0)
{
	if (!func_69(iParam0))
	{
		func_243(&(Local_1172.f_7), iParam0);
	}
}

void func_150(int iParam0)
{
	if (func_187(&(Local_83[participant_id_to_int()]), iParam0))
	{
		func_278(Local_83[participant_id_to_int()], iParam0);
	}
}

void func_151(int iParam0)
{
	if (!func_134(iParam0, 255))
	{
		func_243(Local_83[participant_id_to_int()], iParam0);
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
				func_282(iVar0);
				break;
			case -1315570756:
				func_283(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		func_284(iVar0);
		iVar0++;
	}
}

void func_153()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_1172.f_752 >= 6)
		{
			Local_1172.f_752 = 0;
		}
		func_286(func_285(Local_1172.f_752));
		Local_1172.f_752++;
		iVar0++;
	}
}

void func_154(int iParam0)
{
	if (Local_1172.f_8 != iParam0)
	{
		Local_1172.f_8 = iParam0;
	}
}

bool func_155()
{
	if (network_is_host_of_this_script())
	{
		switch (Local_1172.f_19)
		{
			case 0:
				Local_1172.f_19.f_105 = _create_anim_scene(func_287(), 64, "PBL_TAKE_OFFER", true, true);
				Local_13.f_7.f_10 = _anim_scene_to_net(Local_1172.f_19.f_105);
				if (!_does_anim_scene_exist(Local_1172.f_19.f_105))
				{
					func_254();
				}
				else
				{
					load_anim_scene(Local_1172.f_19.f_105);
					Local_1172.f_19 = 1;
				}
				return false;
		}
	}
	if (!func_288())
	{
		return false;
	}
	if (_does_text_database_exist(func_289()) && !_text_database_has_loaded(func_289()))
	{
		_text_database_request(func_289());
		return false;
	}
	return true;
}

bool func_156()
{
	bVar0 = false;
	if (!func_290())
	{
		bVar0 = true;
	}
	if (!func_291())
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
	if (!func_292())
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
	if (!func_69(1))
	{
		func_293(Local_1172.f_9);
		func_149(1);
	}
}

void func_163()
{
	func_294();
	func_295();
}

void func_164()
{
	func_296();
	func_297();
	if (func_241() == 7)
	{
		func_299(&(Local_1172.f_19.f_107), func_298() - Vector(6.5f, 0f, 0f), 2.5f, 0, 0);
	}
	if (network_is_host_of_this_script())
	{
		Local_13.f_7.f_6 = get_network_time_accurate();
	}
	iVar0 = func_261(0);
	if (does_entity_exist(iVar0) && network_has_control_of_entity(iVar0))
	{
		if (!func_249(256))
		{
			freeze_entity_position(iVar0, true);
			func_300();
			set_entity_coords(iVar0, Local_1172.f_15 - Vector((1f + func_225()), 0f, 0f), true, false, true, true);
			set_entity_heading(iVar0, func_226());
			if (does_entity_exist(func_301(0)) && network_has_control_of_entity(func_301(0)))
			{
				attach_entity_to_entity_physically(func_301(0), func_261(0), -1, get_ped_bone_index(func_261(0), 45454), 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 90f, -1f, 0, 1, 0, 0, 0, 1, 1065353216, 1065353216);
			}
			else
			{
				func_254();
			}
			if (((does_entity_exist(func_301(1)) && network_has_control_of_entity(func_301(1))) && does_entity_exist(func_301(0))) && network_has_control_of_entity(func_301(0)))
			{
				func_302();
			}
			else
			{
				func_254();
			}
			func_303();
			func_121(256);
		}
	}
	iVar1 = func_261(1);
	if (does_entity_exist(iVar1))
	{
		if (network_has_control_of_entity(iVar1))
		{
			if (_does_scenario_point_exist(Local_13.f_7.f_2))
			{
				_0x06aade17334f7a40(iVar1, func_304());
				_task_use_scenario_point(iVar1, Local_13.f_7.f_2, 0, 0, false, true, 0, false, -1f, false);
				if (func_305(1))
				{
					set_ped_relationship_group_hash(iVar1, Local_1172.f_19.f_103);
				}
			}
		}
	}
	if (does_entity_exist(func_301(3)) && network_has_control_of_entity(func_301(3)))
	{
		set_entity_no_collision_entity(func_301(3), func_261(3), true);
		set_entity_no_collision_entity(func_301(3), func_261(4), true);
		set_entity_no_collision_entity(func_301(3), func_261(5), true);
		_0x9587913b9e772d29(func_301(3), 0);
	}
	if (does_entity_exist(func_301(2)) && network_has_control_of_entity(func_301(2)))
	{
		set_entity_visible(func_301(2), false);
		set_entity_collision(func_301(2), false, false);
		freeze_entity_position(func_301(2), true);
	}
	if (func_236() == 1)
	{
		func_306(3);
		func_306(4);
		func_306(5);
	}
	if (_network_has_control_of_anim_scene(Local_1172.f_19.f_105))
	{
		attach_anim_scene_to_entity_preserving_location(Local_1172.f_19.f_105, func_261(0), -1);
		set_anim_scene_origin(Local_1172.f_19.f_105, 0f, 0f, -1f, 0f, 0f, 0f, 2);
	}
	if (_0x8c03cd6b5e0e85e8(iVar0, 362262459))
	{
	}
	if (func_228() == 1)
	{
		func_307();
	}
	func_308();
	func_309(30f);
	func_310(35f, 75f, 1, 1077936128, 0);
	func_311(1065353216, 5f);
	func_312(&(Local_1172.f_291), func_261(0), func_261(1), 0);
	func_313(-432403087, func_298(), 0f, 0f, 0f, 10f, 10f, 10f);
	func_313(-1612834106, func_298() + Vector(0f, 10f, 10f), 0f, 0f, 0f, 10f, 10f, 10f);
	func_314(func_261(0));
	func_315(0, -545299531);
	func_316(0, 0);
}

void func_165()
{
	func_317();
}

void func_166()
{
}

void func_167()
{
	if (func_246(Local_1172.f_15))
	{
		return;
	}
	if (func_264())
	{
		return;
	}
	if (func_318(Local_1172.f_1, 600))
	{
		fVar0 = vdist(get_entity_coords(player_ped_id(), false, false), Local_1172.f_15);
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

void func_168()
{
	func_319();
	func_320();
	func_321();
	func_322();
	func_323();
	func_324();
}

void func_169()
{
	if (func_325())
	{
		func_151(8);
	}
	else
	{
		func_150(8);
	}
}

void func_170()
{
	if ((func_249(1024) && !func_326(1, -1, 1)) && _0x9b4f7e3e4f9c77b3(Local_1172.f_19.f_106, func_301(1)))
	{
		func_327(1);
	}
	if (func_328(1, 0) && !func_326(2, -1, 1))
	{
		func_329();
	}
	if (!func_260(32, 0))
	{
		if (func_330())
		{
			iVar0 = _0xee360cfc80c8b2bc(Local_1172.f_19.f_106);
			if (iVar0 == player_id())
			{
				func_327(32);
				func_327(4);
			}
		}
	}
	if ((func_249(128) && _0x9b4f7e3e4f9c77b3(Local_1172.f_19.f_106, func_301(1))) && _0x9b4f7e3e4f9c77b3(Local_1172.f_19.f_106, func_301(0)))
	{
		iVar1 = func_261(0);
		if (_0x083d497d57b7400f(iVar1) && network_has_control_of_entity(iVar1))
		{
			freeze_entity_position(iVar1, false);
		}
		if (get_entity_collision_disabled(iVar1) && network_has_control_of_entity(iVar1))
		{
			set_entity_collision(iVar1, true, false);
		}
	}
	if (func_331() < 2)
	{
		if ((is_entity_touching_entity(func_261(0), player_ped_id()) && is_ped_in_any_vehicle(player_ped_id(), true)) || is_entity_touching_entity(func_261(0), get_mount(player_ped_id())))
		{
			func_327(32);
			func_327(4);
			func_327(1073741824);
		}
		if ((func_260(1073741824, 0) && !func_260(64, 0)) && network_has_control_of_entity(func_261(0)))
		{
			func_327(64);
			func_332(1);
		}
	}
	if ((func_331() == 6 && network_has_control_of_entity(func_261(0))) && func_330())
	{
		if (!func_260(64, 0) && func_332(0))
		{
			func_327(64);
		}
	}
	if (func_260(128, 0) || func_260(256, 0))
	{
		if (network_has_control_of_entity(func_301(0)) && does_entity_exist(func_301(0)))
		{
			detach_entity(func_301(0), true, true);
			uVar2 = func_301(0);
			delete_object(&uVar2);
		}
	}
	if (func_331() >= 4 && (func_333(player_ped_id(), 1369124074) || _0x3ab6c7b0bb0df4b1(player_ped_id(), Local_1172.f_19.f_105)))
	{
		clear_ped_tasks(player_ped_id(), 1, 0);
	}
	if ((func_260(131072, 0) && func_326(4, -1, 1)) && !func_326(262144, -1, 1))
	{
		if (Local_13.f_7.f_12 == 0 && Local_13.f_7.f_4 == player_id())
		{
			func_334(1);
		}
		else
		{
			func_334(0);
		}
		func_327(262144);
	}
	func_335();
	func_336();
	func_337();
	func_338();
	if ((func_264() && !func_134(32, 255)) && func_339())
	{
		func_265();
	}
	switch (func_236())
	{
		case 0:
			switch (func_331())
			{
				case 0:
					func_340();
					break;
				case 1:
					func_341();
					break;
				case 2:
					func_342();
					break;
				case 4:
					func_343();
					break;
				case 3:
					func_344();
					break;
			}
			break;
		case 1:
			switch (func_331())
			{
				case 0:
					func_345();
					break;
				case 1:
					func_346();
					break;
				case 2:
					func_347();
					break;
				case 4:
					func_348();
					break;
				case 3:
					func_349();
					break;
			}
			break;
	}
	if (!func_305(4))
	{
		if (func_350() || func_351())
		{
			func_120(4);
			iVar3 = 3;
			while (iVar3 <= 5)
			{
				func_352(iVar3);
				func_353(iVar3);
				iVar3++;
			}
		}
	}
	else if (!(func_350() || func_351()))
	{
		func_354(4);
	}
}

void func_171()
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

void func_172()
{
	Local_1172.f_6 = -1;
	Local_1172.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_1172.f_5 = (Local_1172.f_5 || Local_83[iVar0]) // PointerArith;
			Local_1172.f_6 = (Local_1172.f_6 && Local_83[iVar0]) // PointerArith;
		}
		iVar0++;
	}
}

bool func_173()
{
	iVar0 = func_261(0);
	if (does_entity_exist(iVar0))
	{
		if (network_has_control_of_entity(iVar0) && !is_entity_dead(iVar0))
		{
			_0x24c82ef607105faa(iVar0, 1789063806);
		}
		if (is_entity_dead(iVar0) && func_355(0, player_ped_id(), 0))
		{
			if (!func_305(256) && !func_305(8))
			{
				func_356();
				func_120(256);
			}
		}
	}
	if (network_has_control_of_entity(func_301(2)))
	{
		iVar1 = net_to_ent(obj_to_net(func_301(2)));
		delete_entity(&iVar1);
	}
	if (!func_357() && is_entity_dead(func_261(0)))
	{
		iVar2 = 3;
		while (iVar2 <= 5)
		{
			if ((does_entity_exist(func_261(iVar2)) && !is_entity_dead(func_261(iVar2))) && network_has_control_of_entity(func_261(iVar2)))
			{
				func_358(iVar2, 16);
				task_combat_hated_targets(func_261(iVar2), -1f);
			}
			iVar2++;
		}
	}
	if (func_305(1))
	{
		remove_relationship_group(Local_1172.f_19.f_103);
		func_354(1);
	}
	if (((func_326(4, -1, 1) || func_326(524288, -1, 1)) || func_326(2097152, -1, 1)) && !func_260(262144, 0))
	{
		func_359();
	}
	if (_does_item_have_valid_base(Local_1172.f_19.f_109))
	{
		destroy_itemset(Local_1172.f_19.f_109);
	}
	return true;
}

void func_174()
{
	func_360();
}

void func_175(int iParam0)
{
	if (does_blip_exist(Local_1172.f_131.f_7[iParam0]->f_1))
	{
		remove_blip(&(Local_1172.f_131.f_7[iParam0]->f_1));
	}
}

bool func_176(int iParam0, int iParam1)
{
	return func_187(Local_1172.f_131.f_7[iParam0]->f_2, iParam1);
}

bool func_177(int iParam0, int iParam1)
{
	return func_187(Local_1172.f_228[iParam0]->f_5[iParam1]->f_1, 1024);
}

bool func_178(int iParam0, int iParam1)
{
	return func_187(Local_1172.f_228[iParam0]->f_5[iParam1]->f_1, 8);
}

bool func_179(int iParam0, int iParam1)
{
	return is_bit_set(Local_1172.f_228[iParam0]->f_4, iParam1);
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

int func_181(int iParam0)
{
	return iParam0;
}

void func_182(int iParam0, bool bParam1)
{
	func_361(iParam0, 8);
	if (!func_362(iParam0, 1))
	{
		return;
	}
	iVar0 = func_363(iParam0);
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
	func_364(iParam0, bParam1);
	func_361(iParam0, 1);
}

bool func_183(int iParam0, int iParam1, int iParam2)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	return is_bit_set((*Global_1207784)[iParam1][iParam0], iParam2);
}

void func_184(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_366(func_365(Param0));
	iVar1 = func_367(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_368(Param0, &Var2);
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

void func_185(int iParam0, int iParam1)
{
	iVar0 = func_369(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_370(iVar0);
}

void func_186(int iParam0, int iParam1)
{
	func_132(Global_1272030->f_3271[iParam0]);
	switch (iParam1)
	{
		case 0:
			Global_1272030->f_3275[iParam0] = func_371(iParam0);
			break;
		case 1:
			Global_1272030->f_3275[iParam0] = func_372(iParam0);
			break;
		case 2:
			Global_1272030->f_3275[iParam0] = func_373(iParam0);
			break;
	}
}

bool func_187(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_188(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_189(var uParam0, int iParam1)
{
	if (func_374(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

bool func_190(var uParam0)
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

int func_191(var uParam0, int iParam1)
{
	iVar0 = func_375(iParam1);
	iVar1 = ((&Global_1198046->f_3[iParam1] + iVar0) - 1);
	if (&Global_1198046->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_376(iParam1)) - 1);
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

void func_192(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_377(uParam0);
			break;
		case 1:
			func_377(uParam0);
			break;
		case 2:
			func_377(uParam0);
			break;
		case 3:
			func_378(uParam0);
			break;
		case 4:
			func_377(uParam0);
			break;
		case 5:
			func_377(uParam0);
			break;
		case 6:
			func_378(uParam0);
			break;
		case 7:
			func_378(uParam0);
			break;
		case 8:
			func_378(uParam0);
			break;
		case 9:
			func_377(uParam0);
			break;
		default:
			func_194(uParam0);
			func_193(uParam0);
			break;
	}
}

void func_193(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_196(uParam0, iVar0);
		iVar0++;
	}
}

void func_194(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_195(uParam0, iVar0);
		iVar0++;
	}
}

void func_195(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_3), iParam1);
}

void func_196(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_4), iParam1);
}

void func_197(var uParam0, int iParam1)
{
	func_280(&(uParam0->f_25), iParam1);
}

void func_198(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_196(uParam0, 0);
			break;
		case 1:
		case 2:
			func_196(uParam0, 1);
			func_196(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_196(uParam0, 0);
			func_196(uParam0, 2);
			break;
		case 8:
			func_196(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_196(uParam0, 1);
			break;
		default:
			func_193(uParam0);
			break;
	}
}

void func_199(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_379(uParam0);
			break;
		case 1:
			func_380(uParam0);
			break;
		case 2:
			func_381(uParam0);
			break;
		case 3:
			func_382(uParam0);
			break;
		default:
			func_194(uParam0);
			func_193(uParam0);
			break;
	}
}

Vector3 func_200(int iParam0)
{
	if (!func_188(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1131196)[iParam0]->f_20;
}

void func_201(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_383(uParam0);
			break;
		case 1:
		case 2:
			func_384(uParam0);
			break;
		case 3:
		case 4:
			func_385(uParam0);
			break;
		default:
			func_193(uParam0);
			break;
	}
	func_194(uParam0);
}

void func_202(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_196(uParam0, 0);
			func_196(uParam0, 2);
			break;
		case 1:
			func_196(uParam0, 1);
			func_196(uParam0, 3);
			break;
		default:
			func_194(uParam0);
			func_193(uParam0);
			break;
	}
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
			func_195(uParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_195(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_195(uParam0, 0);
			break;
		default:
			func_195(uParam0, 0);
			break;
	}
	func_193(uParam0);
}

void func_204(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_195(uParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_195(uParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_195(uParam0, 2);
			break;
		default:
			func_194(uParam0);
			break;
	}
	func_193(uParam0);
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
			func_195(uParam0, 0);
			func_196(uParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_195(uParam0, 1);
			func_196(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_195(uParam0, 2);
			func_196(uParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_195(uParam0, 3);
			func_196(uParam0, 0);
			break;
	}
}

void func_206(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_195(uParam0, 0);
			func_196(uParam0, 0);
			break;
		case 2:
			func_195(uParam0, 1);
			func_196(uParam0, 0);
			break;
		case 3:
		case 4:
			func_195(uParam0, 2);
			func_196(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_195(uParam0, 3);
			func_196(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_195(uParam0, 4);
			func_196(uParam0, 1);
			break;
	}
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
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_195(uParam0, 3);
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
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			break;
		default:
			func_194(uParam0);
			break;
	}
	func_193(uParam0);
}

void func_208(var uParam0, int iParam1)
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
			func_195(uParam0, 3);
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
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			break;
		default:
			func_194(uParam0);
			break;
	}
	func_193(uParam0);
}

void func_209(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_196(uParam0, 0);
			func_195(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_196(uParam0, 1);
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			func_195(uParam0, 2);
			break;
		default:
			func_196(uParam0, 0);
			func_195(uParam0, 0);
			break;
	}
}

void func_210(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_196(uParam0, 0);
			func_195(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_196(uParam0, 1);
			func_195(uParam0, 0);
			func_195(uParam0, 1);
			break;
		default:
			func_196(uParam0, 0);
			func_195(uParam0, 0);
			break;
	}
}

void func_211(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_193(uParam0);
			func_194(uParam0);
			break;
		default:
			func_193(uParam0);
			func_194(uParam0);
			break;
	}
}

int func_212(int iParam0)
{
	return &(Global_1272030->f_3348[iParam0]);
}

int func_213(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (*Global_1257541)[iParam0]->f_3;
}

int func_214(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0];
}

var func_215(int iParam0, int iParam1)
{
	if (func_386(&Var1, iParam0) && func_387(&Var1, iParam1))
	{
		func_388(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_216(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_386(&Var1, iParam0) && func_387(&Var1, iParam1))
	{
		func_388(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_217(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_389(iParam0, iParam1);
	return &(Global_1257541->f_451[iVar0]);
}

Vector3 func_218(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_389(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_3;
}

bool func_219(int iParam0)
{
	*iParam0 = participant_id_to_int();
	if (!func_390(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

var func_220(int iParam0)
{
	return &(Local_13.f_50[iParam0]);
}

void func_221(int iParam0, var uParam1)
{
	if (iParam0 == 1)
	{
		func_391(iParam0, 8);
		return;
	}
	switch (func_392(uParam1))
	{
		case 0:
			func_393(iParam0, 0);
			break;
		case 1:
			func_393(iParam0, 1);
			func_394(iParam0, 5f);
			func_395(iParam0, 0);
			func_396(iParam0, 0, "GREET_POS", -163964935, 0, 1, 0, -1, 0);
			func_396(iParam0, 1, "INTERACT_DECLINE", 648122183, 0, 1, 0, -1, 0);
			func_397(iParam0, 0, 1, 1);
			func_397(iParam0, 1, 1, 1);
			break;
		case 2:
			func_393(iParam0, 1);
			func_397(iParam0, 0, 0, 1);
			func_397(iParam0, 1, 0, 1);
			break;
	}
}

void func_222(var uParam0, var uParam1)
{
	func_398(uParam0);
	func_399(uParam0, 1);
	func_400(uParam0, 1);
	func_401(uParam1);
	func_402(uParam1);
	func_403(uParam1);
	func_404(uParam1, 1);
	func_405(uParam1, 1);
}

int func_223(var uParam0, int iParam1, int iParam2)
{
	if (!func_406(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_407(Var0.f_2, 10);
		iVar5 = iVar4 ^ -1;
		(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] && iVar5);
		if (iParam2 != 0)
		{
			(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] || (shift_left(iParam2, Var0.f_2) && iVar4));
		}
		return 1;
	}
	iVar4 = func_407(Var0.f_2, (32 - Var0.f_2));
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0] = (uParam0[Var0] && iVar5);
	(*uParam0)[Var0] = (uParam0[Var0] || (shift_left(iParam2, Var0.f_2) && iVar4));
	iVar4 = func_407(0, Var0.f_3 + 1);
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] && iVar5);
	(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] || (shift_right(iParam2, (32 - Var0.f_3)) && iVar4));
	return 1;
}

int func_224()
{
	return Local_1172.f_4;
}

float func_225()
{
	switch (func_241())
	{
		case 0:
			return 2f;
		case 1:
			return 3.5f;
		case 2:
			return 3.3f;
		case 3:
			return 3.4f;
		case 4:
			return 1.5f;
		case 5:
			return 1.3f;
		case 6:
			return 2.1f;
		case 7:
			return 2.8f;
		default:
			break;
	}
	return 0f;
}

float func_226()
{
	switch (func_241())
	{
		case 0:
			return -87f;
		case 1:
			return -20f;
		case 2:
			return 22.5f;
		case 3:
			return -40f;
		case 5:
			return 155.6f;
		default:
			break;
	}
	return 180f;
}

void func_227(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	Local_1172.f_131.f_7[iParam0]->f_6 = { vParam1 };
	Local_1172.f_131.f_7[iParam0]->f_5 = fParam4;
	if (bParam5)
	{
		func_243(&(Local_1172.f_131.f_7[iParam0]->f_2), 2);
	}
	else
	{
		func_278(&(Local_1172.f_131.f_7[iParam0]->f_2), 2);
	}
}

int func_228()
{
	return Local_1172.f_3;
}

void func_229(int iParam0, int iParam1)
{
	Local_1172.f_131.f_7[iParam0]->f_3 = iParam1;
}

void func_230(int iParam0, int iParam1)
{
	Local_1172.f_131.f_7[iParam0]->f_4 = iParam1;
}

void func_231(int iParam0, char* sParam1)
{
	Local_1172.f_131.f_7[iParam0]->f_10 = sParam1;
}

void func_232(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_243(&(Local_1172.f_131.f_7[iParam0]->f_2), 128);
	}
	else
	{
		func_278(&(Local_1172.f_131.f_7[iParam0]->f_2), 128);
	}
}

int func_233(int iParam0, bool bParam1)
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

Vector3 func_234()
{
	switch (func_241())
	{
		case 0:
			return -2097.542f, -2755.684f, 71.2127f;
		case 1:
			return -2225.256f, -2877.586f, 16.5711f;
		case 2:
			return -2922.413f, -2800.466f, 88.6475f;
		case 3:
			return -2593.547f, -2926.552f, 69.3725f;
		case 4:
			return -2347.997f, -2065.633f, 84.1815f;
		case 5:
			return -3455.622f, -2240.849f, -3.3819f;
		case 6:
			return -3564.85f, -3651.972f, -17.8743f;
		case 7:
			return -5244.868f, -4016.279f, -7.4328f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_235()
{
	switch (func_241())
	{
		case 0:
			return 335.8981f;
		case 1:
			return 37.2082f;
		case 2:
			return 173.8648f;
		case 3:
			return 22.6805f;
		case 4:
			return 354.3717f;
		case 5:
			return 290.3391f;
		case 6:
			return 26.7059f;
		case 7:
			return 37.1054f;
		default:
			break;
	}
	return 0f;
}

int func_236()
{
	return Local_1172.f_3;
}

void func_237(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		func_229(func_408(iVar0), iParam2);
		iVar0++;
	}
}

void func_238(int iParam0, int iParam1)
{
	func_409(0, iParam0, iParam1);
}

void func_239(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	if (bParam6)
	{
		func_410(iParam0);
	}
	func_411(0, iParam0, vParam1, fParam4, iParam5);
}

void func_240(int iParam0, bool bParam1)
{
	func_412(0, iParam0, bParam1);
}

int func_241()
{
	return Local_1172.f_2;
}

float func_242()
{
	switch (func_241())
	{
		case 0:
			return 6.395f;
		case 1:
			return 8.156f;
		case 2:
			return 7.481f;
		case 3:
			return 7.495f;
		case 4:
			return 4.09f;
		case 5:
			return 5.09f;
		case 6:
			return 5.181f;
		case 7:
			return 7.581f;
		default:
			break;
	}
	return 0f;
}

void func_243(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_244(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_245(int iParam0)
{
	if (!func_188(iParam0))
	{
		return false;
	}
	iVar0 = func_413(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_246(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_247(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_248(struct<31> Param0)
{
	func_247(&uVar0, Param0);
	return _0x77a6e4ad0c496f81(&uVar0);
}

bool func_249(int iParam0)
{
	return func_187(Local_13.f_7.f_1, iParam0);
}

Vector3 func_250(int iParam0)
{
	return Local_1172.f_131.f_7[iParam0]->f_6;
}

float func_251(int iParam0)
{
	return Local_1172.f_131.f_7[iParam0]->f_5;
}

void func_252()
{
	Local_1172.f_19.f_106 = _add_rope_2(func_298(), 0f, 0f, 0f, func_225(), 1, true, 1, -1f);
	Local_13.f_7.f_11 = _network_get_network_id_from_rope(Local_1172.f_19.f_106);
	_0xf092b6030d6fd49c(Local_1172.f_19.f_106, "ROPE_SETTINGS_DEFAULT");
	_0xdede679ed29dd4e7(Local_1172.f_19.f_106, 1);
	_0xf1ea2a881eb7f2cd(Local_1172.f_19.f_106, 1);
	_0x522fa3f490e2f7ac(Local_1172.f_19.f_106, 1, 1);
	_0x2651ddc0ea269073(Local_1172.f_19.f_106, 1f);
	_0x461fcbdeb4d06717(Local_1172.f_19.f_106, 0);
	_0x814d453fcfdf119f(Local_1172.f_19.f_106, 1, 1);
	_0x7a54d82227a139db(&(Local_1172.f_19.f_106), 1);
	func_121(128);
}

bool func_253(var uParam0)
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
	while (iVar2 < 6)
	{
		if (func_176(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_414(iVar2, uParam0, &bVar1))
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
			if (func_415(iVar2))
			{
				if (network_does_network_id_exist(&(Local_13.f_22[iVar2])))
				{
					if (network_request_control_of_network_id(&(Local_13.f_22[iVar2])))
					{
						_0x7182edda1ee7db5a(&(Local_13.f_22[iVar2]));
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

void func_254()
{
	func_129(2);
}

bool func_255(bool bParam0)
{
	if (!can_register_mission_objects(1))
	{
		*bParam0 = 1;
		return false;
	}
	bVar3 = false;
	vVar4 = { 0f, 0f, 0f };
	vVar7 = { 0f, 0f, 0f };
	vVar10 = { Local_1172.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 90f);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar2 = func_416(iVar0, iVar1);
			if (func_178(iVar0, iVar1))
			{
			}
			else if (func_177(iVar0, iVar1))
			{
			}
			else if (is_bit_set(Local_1172.f_228[iVar0]->f_2, iVar1))
			{
				if (func_417(iVar0, iVar1))
				{
					if (network_does_network_id_exist(Local_13.f_29[iVar0][iVar1]))
					{
						if (network_request_control_of_network_id(Local_13.f_29[iVar0][iVar1]))
						{
							_0x7182edda1ee7db5a(Local_13.f_29[iVar0][iVar1]);
						}
					}
				}
			}
			else
			{
				if (!network_does_network_id_exist(Local_13.f_29[iVar0][iVar1]))
				{
					if (!func_418(iVar0, iVar1))
					{
						vVar7 = { _get_object_offset_from_coords(vVar10, 0f, func_419(iVar0, iVar1)) };
					}
					else
					{
						vVar7 = { func_419(iVar0, iVar1) };
					}
					if (func_420(iVar0, iVar1))
					{
						if (!func_421(&vVar7, 1, 10, 0, 0))
						{
							bVar3 = true;
						}
						else
						{
							if (func_422(iVar0, iVar1))
							{
								iVar13 = _0x9641a9a20310f6b8(Local_1172.f_228[iVar0]->f_5[iVar1]->f_3, vVar7, 0f, 0f, 0f, 1, 0, 0);
								if (!does_entity_exist(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									(*Local_13.f_29[iVar0])[iVar1] = obj_to_net(iVar13);
									if (!network_does_network_id_exist(Local_13.f_29[iVar0][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
								}
							}
							else if (func_423(iVar0, iVar1))
							{
								iVar13 = _create_weapon_object(Local_1172.f_228[iVar0]->f_5[iVar1]->f_5, Local_1172.f_228[iVar0]->f_5[iVar1]->f_4, func_419(iVar0, iVar1), true, 1f);
								if (!does_entity_exist(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									(*Local_13.f_29[iVar0])[iVar1] = obj_to_net(iVar13);
									if (!network_does_network_id_exist(Local_13.f_29[iVar0][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
									else
									{
										set_network_id_exists_on_all_machines(Local_13.f_29[iVar0][iVar1], true);
									}
								}
							}
							else if (iVar2 == 0)
							{
								Jump @1086; //curOff = 573
							}
							else if (!func_424((*Local_13.f_29[iVar0])[iVar1], iVar2, vVar7, 1, 0))
							{
								*bParam0 = 1;
								return false;
							}
							if (network_does_network_id_exist(Local_13.f_29[iVar0][iVar1]))
							{
								iVar13 = net_to_obj(Local_13.f_29[iVar0][iVar1]);
								if (func_417(iVar0, iVar1))
								{
									if (network_does_network_id_exist(Local_13.f_29[iVar0][iVar1]))
									{
										if (network_request_control_of_network_id(Local_13.f_29[iVar0][iVar1]))
										{
											_0x7182edda1ee7db5a(Local_13.f_29[iVar0][iVar1]);
										}
									}
								}
								if (!does_entity_exist(iVar13))
								{
									*bParam0 = 1;
									return false;
								}
								set_bit(&(Local_1172.f_228[iVar0]->f_2), iVar1);
								if (func_425(iVar0, iVar1))
								{
									_0x78b4567e18b54480(iVar13);
									_set_pickup_object_glow_enabled(iVar13, true);
								}
								if (func_426(iVar0, iVar1))
								{
									_0xebdc12861d079aba(iVar13, 1);
								}
								if (func_427(iVar0, iVar1))
								{
									set_entity_visible(iVar13, false);
								}
								else
								{
									_0xa91e6cf94404e8c9(iVar13);
								}
								if (func_420(iVar0, iVar1))
								{
									_0x9587913b9e772d29(iVar13, 0);
								}
								vVar4 = { func_428(iVar0, iVar1) };
								if (!func_246(vVar4))
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
										if (!func_429(iVar0, iVar1, 32))
										{
											get_model_dimensions(iVar2, &vVar15, &vVar18);
											vVar21 = { vVar18 - vVar15 * Vector(0.5f, 0.5f, 0.5f) };
											vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, absf(func_430(vVar4.x)), absf(func_430(vVar4.y))) };
											vVar27 = { func_431(vVar24) * vVar21 };
											set_entity_coords(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
										}
									}
								}
								if (func_432(iVar0, iVar1))
								{
									func_433(iVar0, iVar1, 1);
								}
								if (func_434(iVar0, iVar1))
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

bool func_256(int iParam0)
{
	return func_187(Local_1172.f_5, iParam0);
}

bool func_257(int iParam0)
{
	return func_187(Local_1172.f_6, iParam0);
}

void func_258()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_435(Local_13.f_50[iVar0], func_181(iVar0));
		iVar0++;
	}
}

bool func_259()
{
	if (func_264() && !func_436(0, 300f, 0))
	{
		return true;
	}
	if (Local_13.f_7 == 6)
	{
		if (func_330())
		{
			if (is_ped_on_mount(func_261(0)))
			{
				return true;
			}
			if (!func_260(64, 0))
			{
				return false;
			}
			return (is_entity_dead(func_261(0)) || !func_436(0, 140f, 0));
		}
		else
		{
			vVar0 = { get_ped_bone_coords(func_261(0), 45454, 0f, 0f, 0f) };
			if (get_number_of_fires_in_range(vVar0, 0.1f) > 0)
			{
				func_327(64);
			}
			return !func_436(0, 150f, 0);
		}
	}
	return false;
}

bool func_260(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return func_187(Local_1172.f_19.f_4, iParam0);
	}
	else
	{
		iVar0 = participant_id_to_int();
		bVar1 = func_187(Local_1172.f_19.f_4, iParam0);
		if (bVar1 && !func_187(Local_83[iVar0]->f_1, iParam0))
		{
			func_243(&(Local_83[iVar0]->f_1), iParam0);
		}
		return bVar1;
	}
	return false;
}

int func_261(int iParam0)
{
	return &(Local_1172.f_131.f_7[iParam0]);
}

bool func_262(int iParam0)
{
	return !func_362(iParam0, 4);
}

bool func_263(int iParam0, int iParam1)
{
	return func_437(iParam0, iParam1);
}

bool func_264()
{
	return (func_135(32) || func_134(32, 255));
}

void func_265()
{
	if (!func_134(32, 255))
	{
		func_438(Local_1172.f_1, Local_1172.f_3);
		if (!func_134(1024, 255))
		{
			func_439(Local_1172.f_1);
			func_151(1024);
		}
		iVar0 = func_369(Local_1172.f_1, Local_1172.f_2);
		func_440(iVar0);
		func_441(iVar0);
		func_149(2);
		func_442(Local_1172.f_9);
		func_443(Local_1172.f_1);
		func_444(Local_1172.f_1, Local_1172.f_2, Local_1172.f_3);
		func_151(32);
	}
}

int func_266()
{
	return Local_13.f_7;
}

void func_267(int iParam0)
{
	Local_13.f_7 = iParam0;
}

void func_268()
{
	if (func_264())
	{
		func_267(1);
		Local_13.f_7.f_6 = get_network_time_accurate();
	}
	if (((get_time_difference(Local_13.f_7.f_6, get_network_time_accurate()) > 3000 && !func_249(512)) || get_time_difference(Local_13.f_7.f_6, get_network_time_accurate()) > 9000) && !func_264())
	{
		if (!func_445(0) && !func_436(0, 30f, 0))
		{
			func_121(512);
			func_446(0, 1744022339, 0, Local_13.f_7.f_7);
			Local_13.f_7.f_7++;
			if (Local_13.f_7.f_7 > 3)
			{
				Local_13.f_7.f_7 = 0;
			}
			Local_13.f_7.f_6 = get_network_time_accurate();
		}
	}
}

void func_269()
{
	if (func_260(64, 0))
	{
		Local_13.f_7.f_5 = get_network_time_accurate();
		func_267(2);
	}
	if (get_time_difference(Local_13.f_7.f_6, get_network_time_accurate()) > 9500)
	{
		if (!func_445(0))
		{
			func_447();
		}
	}
}

void func_270()
{
	if (!_network_is_player_index_valid(Local_13.f_7.f_3))
	{
		if (func_260(32, 0) || get_time_difference(Local_13.f_7.f_5, get_network_time_accurate()) >= 5000)
		{
			Local_13.f_7.f_3 = func_448();
		}
	}
	if (func_260(1024, 1) && !func_249(1))
	{
		Local_13.f_7.f_5 = get_network_time_accurate();
		func_121(1);
	}
	if (func_249(1) && get_time_difference(Local_13.f_7.f_5, get_network_time_accurate()) >= 2000)
	{
		if (func_263(0, 1))
		{
			Local_13.f_7.f_5 = get_network_time_accurate();
			func_267(3);
		}
	}
	if (func_260(256, 1))
	{
		func_267(4);
	}
}

void func_271()
{
	if (func_260(512, 1) || !func_436(0, 100f, 0))
	{
		func_267(6);
	}
}

void func_272()
{
	if (!func_260(67108864, 0))
	{
		if ((get_time_difference(Local_13.f_7.f_5, get_network_time_accurate()) >= 10000 && !func_445(0)) && !func_333(func_261(0), 2106541073))
		{
			if (!func_249(2))
			{
				func_446(11, -417894478, 0, 0);
				func_121(2);
				Local_13.f_7.f_5 = get_network_time_accurate();
			}
			else if (func_249(2))
			{
				Local_13.f_7.f_12 = 1;
				func_327(67108864);
			}
		}
	}
	else
	{
		if (Local_13.f_7.f_4 == 255)
		{
			Local_13.f_7.f_4 = func_449(0);
		}
		if (func_260(4096, 0) && !func_249(4))
		{
			Local_13.f_7.f_5 = get_network_time_accurate();
			func_121(4);
		}
		func_263(0, 0);
		func_450();
	}
	if (func_260(256, 1))
	{
		func_267(4);
	}
}

void func_273()
{
	if (func_264())
	{
		func_267(1);
		Local_13.f_7.f_9 = func_451();
		Local_13.f_7.f_6 = get_network_time_accurate();
	}
	if (((get_time_difference(Local_13.f_7.f_6, get_network_time_accurate()) > 3000 && !func_249(512)) || get_time_difference(Local_13.f_7.f_6, get_network_time_accurate()) > 10000) && !func_264())
	{
		if (!func_445(0) && !func_436(0, 30f, 0))
		{
			func_121(512);
			Local_13.f_7.f_7++;
			if ((Local_13.f_7.f_7 % 3) == 0)
			{
				func_446(6, 1744022339, 0, Local_13.f_7.f_7);
			}
			else
			{
				func_446(0, 1744022339, 0, Local_13.f_7.f_7);
			}
			Local_13.f_7.f_6 = get_network_time_accurate();
		}
	}
}

void func_274()
{
	if (func_260(64, 0))
	{
		Local_13.f_7.f_5 = get_network_time_accurate();
		func_267(2);
	}
	if (func_451() == 1 && !func_452(3))
	{
		func_453(3, 1);
	}
	if ((func_451() != Local_13.f_7.f_9 && func_451() > 0) && !func_445(0))
	{
		func_446(17, 1744022339, 0, Local_13.f_7.f_8);
		Local_13.f_7.f_9 = func_451();
		Local_13.f_7.f_6 = get_network_time_accurate();
	}
	if (func_454() && !func_445(0))
	{
		if (!func_249(16384))
		{
			func_121(16384);
			func_446(20, 1744022339, 0, Local_13.f_7.f_8);
			Local_13.f_7.f_6 = get_network_time_accurate();
		}
		else if (!func_249(32768) && get_time_difference(Local_13.f_7.f_6, get_network_time_accurate()) > 8000)
		{
			func_121(32768);
			func_446(20, 1744022339, 0, Local_13.f_7.f_8);
			Local_13.f_7.f_6 = get_network_time_accurate();
		}
	}
	else if (get_time_difference(Local_13.f_7.f_6, get_network_time_accurate()) > 9000)
	{
		if (!func_445(0))
		{
			if (!func_357())
			{
				if (func_260(4, 0))
				{
					func_446(3, 1744022339, 0, Local_13.f_7.f_8);
				}
				else
				{
					func_446(2, 1744022339, 0, Local_13.f_7.f_8);
				}
			}
			else if (func_260(65536, 1))
			{
				if (!func_436(0, 50f, 0) && !func_249(65536))
				{
					func_446(23, 1744022339, 0, Local_13.f_7.f_8);
					func_121(65536);
					Local_13.f_7.f_6 = get_network_time_accurate();
					return;
				}
				else if (func_249(65536))
				{
					if (func_436(0, 35f, 0))
					{
						func_446(24, 1744022339, 0, Local_13.f_7.f_8);
						func_455(65536);
						Local_13.f_7.f_6 = get_network_time_accurate();
						Local_13.f_7.f_8 = 2;
					}
					return;
				}
				if (Local_13.f_7.f_8 == 1)
				{
					func_446(21, 1744022339, 0, Local_13.f_7.f_8);
					Local_13.f_7.f_8++;
				}
				else if (Local_13.f_7.f_8 < 4)
				{
					func_446(22, 1744022339, 0, Local_13.f_7.f_8);
					Local_13.f_7.f_8++;
				}
				else if (Local_13.f_7.f_8 < 5)
				{
					func_446(7, 1744022339, 0, Local_13.f_7.f_8);
					Local_13.f_7.f_8++;
				}
				else
				{
					func_446(6, 1744022339, 0, Local_13.f_7.f_8);
				}
			}
			Local_13.f_7.f_6 = get_network_time_accurate();
		}
	}
}

void func_275()
{
	if (!_network_is_player_index_valid(Local_13.f_7.f_3))
	{
		if (func_260(32, 0) || get_time_difference(Local_13.f_7.f_5, get_network_time_accurate()) >= 5000)
		{
			Local_13.f_7.f_3 = func_448();
		}
	}
	if (func_260(1024, 1) && !func_249(1))
	{
		Local_13.f_7.f_5 = get_network_time_accurate();
		func_121(1);
	}
	if (func_249(1) && get_time_difference(Local_13.f_7.f_5, get_network_time_accurate()) >= 2000)
	{
		if (func_263(0, 1))
		{
			Local_13.f_7.f_5 = get_network_time_accurate();
			func_267(3);
		}
	}
	if (func_260(256, 1))
	{
		func_267(4);
	}
}

void func_276()
{
	if ((func_260(512, 1) || is_entity_dead(func_261(0))) || !func_436(0, 100f, 0))
	{
		func_267(6);
	}
}

void func_277()
{
	if (!func_260(67108864, 0))
	{
		if ((get_time_difference(Local_13.f_7.f_5, get_network_time_accurate()) >= 10000 && !func_445(0)) && !func_333(func_261(0), 2106541073))
		{
			if (!func_249(2))
			{
				func_446(11, -417894478, 0, 0);
				func_121(2);
				Local_13.f_7.f_5 = get_network_time_accurate();
			}
			else if (func_249(2))
			{
				Local_13.f_7.f_12 = 1;
				func_327(67108864);
			}
		}
	}
	else
	{
		if (Local_13.f_7.f_4 == 255)
		{
			Local_13.f_7.f_4 = func_449(0);
		}
		if (func_260(4096, 0) && !func_249(4))
		{
			Local_13.f_7.f_5 = get_network_time_accurate();
			func_121(4);
		}
		func_263(0, 0);
		func_450();
	}
	if (func_260(256, 1))
	{
		func_267(4);
	}
}

void func_278(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_279(int iParam0)
{
	if (!func_188(iParam0))
	{
		return 0;
	}
	if (!func_245(iParam0))
	{
		return 0;
	}
	return (*Global_1131196)[iParam0]->f_18.f_1;
}

void func_280(var uParam0, int iParam1)
{
	func_456(uParam0, iParam1);
}

void func_281(var uParam0, int iParam1)
{
	func_457(uParam0, iParam1);
}

void func_282(int iParam0)
{
	Var0.f_10 = 255;
	get_event_data(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 182:
			if (func_458(&Var0, iParam0))
			{
				func_459(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_283(int iParam0)
{
}

void func_284(int iParam0)
{
}

int func_285(int iParam0)
{
	return iParam0;
}

void func_286(int iParam0)
{
	if (func_460(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (func_461(iParam0, func_285(iVar0)))
			{
				if (!func_462(iParam0, func_285(iVar0)))
				{
					if (func_463(iParam0, iVar0))
					{
						func_464(&(Local_1172.f_752.f_15[iVar0]), 0, 0);
						func_465(iParam0, func_285(iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

char* func_287()
{
	return "script@beat@wilderness@suspensiontrap@handover";
}

bool func_288()
{
	if (func_467(func_466(0)))
	{
		if (func_467(func_466(1)))
		{
			return func_467("script_re@suspension_trap@handover@enter");
		}
	}
	return false;
}

char* func_289()
{
	switch (func_228())
	{
		case 0:
			return "0726_a_m_m_guatownfolk_01_hispanic_04";
		case 1:
			return "0896_A_M_M_Civ_Poor_Hispanic_AVOID_01";
		default:
			break;
	}
	return "";
}

bool func_290()
{
	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (is_bit_set(Local_1172.f_131.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_468(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!is_bit_set(Local_1172.f_131.f_4, iVar0))
				{
					request_model(iVar2, false);
					set_bit(&(Local_1172.f_131.f_4), iVar0);
				}
				if (!has_model_loaded(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					set_bit(&(Local_1172.f_131.f_3), iVar0);
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

bool func_291()
{
	bVar2 = false;
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (is_bit_set(Local_1172.f_228[iVar0]->f_1, iVar1))
			{
			}
			else
			{
				iVar3 = func_416(iVar0, iVar1);
				if (func_469(iVar1))
				{
					if (Local_1172.f_228[iVar0]->f_5[iVar1]->f_6 == 0 || !_0x93ffd92f05ec32fd(Local_1172.f_228[iVar0]->f_5[iVar1]->f_6))
					{
						Local_1172.f_228[iVar0]->f_5[iVar1]->f_6 = _0x91fe941f9fcfb702(Local_1172.f_228[iVar0]->f_5[iVar1]->f_3, 0);
						bVar2 = true;
					}
					else if (!_0xb0b2c6d170b0e8e5(Local_1172.f_228[iVar0]->f_5[iVar1]->f_6))
					{
						bVar2 = true;
					}
					else if (!is_bit_set(Local_1172.f_228[iVar0]->f_1, iVar1))
					{
						set_bit(&(Local_1172.f_228[iVar0]->f_1), iVar1);
					}
				}
				else if (func_470(iVar1))
				{
					_0x72d4cb5db927009c(Local_1172.f_228[iVar0]->f_5[iVar1]->f_5, -1, 0);
					if (!_0xff07cf465f48b830(Local_1172.f_228[iVar0]->f_5[iVar1]->f_5))
					{
						bVar2 = true;
					}
					else if (!is_bit_set(Local_1172.f_228[iVar0]->f_1, iVar1))
					{
						set_bit(&(Local_1172.f_228[iVar0]->f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @452; //curOff = 348
				}
				else
				{
					if (!is_bit_set(&(Local_1172.f_228[iVar0]), iVar1))
					{
						request_model(iVar3, false);
						set_bit(Local_1172.f_228[iVar0], iVar1);
					}
					if (!has_model_loaded(iVar3))
					{
						bVar2 = true;
						Jump @452; //curOff = 408
					}
					else if (!is_bit_set(Local_1172.f_228[iVar0]->f_1, iVar1))
					{
						set_bit(&(Local_1172.f_228[iVar0]->f_1), iVar1);
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

bool func_292()
{
	bVar3 = false;
	vVar4 = { 0f, 0f, 0f };
	vVar7 = { 0f, 0f, 0f };
	vVar10 = { Local_1172.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 90f);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar2 = func_416(iVar0, iVar1);
			if (func_177(iVar0, iVar1))
			{
			}
			else if (!func_178(iVar0, iVar1))
			{
				if (network_is_host_of_this_script())
				{
					if (is_bit_set(Local_1172.f_228[iVar0]->f_2, iVar1))
					{
						if (func_417(iVar0, iVar1))
						{
							if (network_does_network_id_exist(Local_13.f_29[iVar0][iVar1]))
							{
								if (network_request_control_of_network_id(Local_13.f_29[iVar0][iVar1]))
								{
									_0x7182edda1ee7db5a(Local_13.f_29[iVar0][iVar1]);
								}
							}
						}
					}
				}
			}
			else if (is_bit_set(Local_1172.f_228[iVar0]->f_2, iVar1))
			{
			}
			else
			{
				if (!func_418(iVar0, iVar1))
				{
					vVar7 = { _get_object_offset_from_coords(vVar10, 0f, func_419(iVar0, iVar1)) };
				}
				else
				{
					vVar7 = { func_419(iVar0, iVar1) };
				}
				if (func_420(iVar0, iVar1))
				{
					if (!func_421(&vVar7, 1, 10, 0, 0))
					{
						bVar3 = true;
					}
					else
					{
						if (func_422(iVar0, iVar1))
						{
							iVar13 = _0x9641a9a20310f6b8(Local_1172.f_228[iVar0]->f_5[iVar1]->f_3, vVar7, 0f, 0f, 0f, 0, 0, 0);
							if (!does_entity_exist(iVar13))
							{
								return false;
							}
						}
						else if (func_423(iVar0, iVar1))
						{
							iVar13 = _create_weapon_object(Local_1172.f_228[iVar0]->f_5[iVar1]->f_5, Local_1172.f_228[iVar0]->f_5[iVar1]->f_4, func_419(iVar0, iVar1), true, 1f);
							if (!does_entity_exist(iVar13))
							{
								return false;
							}
						}
						else if (iVar2 == 0)
						{
							Jump @830; //curOff = 446
						}
						else
						{
							iVar13 = create_object(iVar2, vVar7, false, true, false, false, true);
							if (!does_entity_exist(iVar13))
							{
								return false;
							}
						}
						set_bit(&(Local_1172.f_228[iVar0]->f_2), iVar1);
						if (func_425(iVar0, iVar1))
						{
							_0x78b4567e18b54480(iVar13);
							_set_pickup_object_glow_enabled(iVar13, true);
						}
						if (func_426(iVar0, iVar1))
						{
							_0xebdc12861d079aba(iVar13, 1);
						}
						if (func_427(iVar0, iVar1))
						{
							set_entity_visible(iVar13, false);
						}
						else
						{
							_0xa91e6cf94404e8c9(iVar13);
						}
						if (func_420(iVar0, iVar1))
						{
							_0x9587913b9e772d29(iVar13, 0);
						}
						vVar4 = { func_428(iVar0, iVar1) };
						if (!func_246(vVar4))
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
								if (!func_429(iVar0, iVar1, 32))
								{
									get_model_dimensions(iVar2, &vVar15, &vVar18);
									vVar21 = { vVar18 - vVar15 * Vector(0.5f, 0.5f, 0.5f) };
									vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, absf(func_430(vVar4.x)), absf(func_430(vVar4.y))) };
									vVar27 = { func_431(vVar24) * vVar21 };
									set_entity_coords(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
								}
							}
						}
						Local_1172.f_228[iVar0]->f_5[iVar1] = iVar13;
						if (func_432(iVar0, iVar1))
						{
							func_433(iVar0, iVar1, 1);
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

void func_293(struct<2> Param0)
{
	if (func_367(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_367(Param0)))
	{
		_0x99230691875fc218(func_365(Param0), func_367(Param0), Global_35);
	}
}

void func_294()
{
	if (!func_219(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_471(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_295()
{
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (func_178(iVar1, iVar2))
			{
			}
			else if (func_177(iVar1, iVar2))
			{
			}
			else if (network_does_network_id_exist(Local_13.f_29[iVar1][iVar2]))
			{
				iVar0 = net_to_obj(Local_13.f_29[iVar1][iVar2]);
				Local_1172.f_228[iVar1]->f_5[iVar2] = iVar0;
				if (func_417(iVar1, iVar2))
				{
					if (network_does_network_id_exist(Local_13.f_29[iVar1][iVar2]))
					{
						if (network_request_control_of_network_id(Local_13.f_29[iVar1][iVar2]))
						{
							_0x7182edda1ee7db5a(Local_13.f_29[iVar1][iVar2]);
						}
					}
				}
				if (func_425(iVar1, iVar2))
				{
					_0x78b4567e18b54480(iVar0);
					_set_pickup_object_glow_enabled(iVar0, true);
				}
			}
			else if (0 != func_416(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_296()
{
	if (!network_is_host_of_this_script())
	{
		if (network_does_network_id_exist(Local_13.f_7.f_10))
		{
			Local_1172.f_19.f_105 = _net_to_anim_scene(Local_13.f_7.f_10);
			if (!_does_anim_scene_exist(Local_1172.f_19.f_105))
			{
			}
		}
	}
}

void func_297()
{
	if (!network_is_host_of_this_script())
	{
		if (func_472(Local_13.f_7.f_11))
		{
			Local_1172.f_19.f_106 = _network_get_rope_from_network_id(Local_13.f_7.f_11);
			if (!does_rope_exist(Local_1172.f_19.f_106))
			{
			}
		}
	}
}

Vector3 func_298()
{
	return Local_1172.f_15;
}

void func_299(var uParam0, vector3 vParam1, int iParam4, var uParam5, bool bParam6)
{
	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	func_473(uParam0, vParam1, iParam4, 1, iVar0, 0);
}

void func_300()
{
	iVar0 = func_261(0);
	set_ped_can_be_targetted(iVar0, false);
	_0xe8c296b75eacc357(iVar0, 0f);
	_0xae6004120c18df97(iVar0, 0, 0);
	_0xae6004120c18df97(iVar0, 1, 0);
	set_ped_config_flag(iVar0, 88, true);
	set_ped_config_flag(iVar0, 264, true);
	set_ped_config_flag(iVar0, 103, false);
	set_ragdoll_blocking_flags(iVar0, 512);
	set_ragdoll_blocking_flags(iVar0, 262144);
	set_ragdoll_blocking_flags(iVar0, 8192);
	set_ragdoll_blocking_flags(iVar0, 16);
	set_ragdoll_blocking_flags(iVar0, 2);
	set_ragdoll_blocking_flags(iVar0, 1);
	set_ragdoll_blocking_flags(iVar0, 16384);
	set_ragdoll_blocking_flags(iVar0, 32768);
	_0x18ff3110cf47115d(iVar0, 2, 0);
	_0x18ff3110cf47115d(iVar0, 3, 0);
	_0x18ff3110cf47115d(iVar0, 7, 0);
	set_ped_relationship_group_hash(iVar0, -1976316465);
	_0xe50c9816b3f22d8b(iVar0, 1151374672, 0f);
	func_474(iVar0, 1);
	set_entity_max_health(iVar0, 20);
	_set_entity_health(iVar0, 20, 0);
	set_entity_collision(iVar0, false, false);
	_0x4f27603e44a8e4c0(iVar0, 10, 1);
}

var func_301(int iParam0)
{
	return func_475(0, iParam0);
}

void func_302()
{
	set_entity_visible(func_301(1), false);
	_0x462ff2a432733a44(Local_1172.f_19.f_106, func_301(1), func_301(0), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0);
	func_121(1024);
}

void func_303()
{
	task_play_anim(func_261(0), func_466(0), func_476(0), 8f, -8f, -1, 8197, 0f, false, 0, false, 0, true);
	freeze_entity_position(func_261(0), false);
	set_entity_collision(func_261(0), true, false);
}

Vector3 func_304()
{
	switch (func_241())
	{
		case 0:
			return -2096.563f, -2753.562f, 72.8456f;
		case 1:
			return -2226.572f, -2875.998f, 17.933f;
		case 2:
			return -2922.299f, -2802.828f, 89.6542f;
		case 3:
			return -2594.392f, -2923.869f, 70.4784f;
		case 4:
			return -2347.604f, -2063.784f, 85.2582f;
		case 5:
			return -3453.459f, -2240.163f, -3.0922f;
		case 6:
			return -3566.107f, -3649.93f, -15.8611f;
		case 7:
			return -5246.215f, -4014.477f, -6.9708f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_305(int iParam0)
{
	return func_187(Local_1172.f_19.f_2, iParam0);
}

void func_306(int iParam0)
{
	iVar0 = func_261(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (network_has_control_of_entity(iVar0))
		{
			_0xfd6943b6df77e449(iVar0, false);
			_0x9de63896b176ea94(iVar0, 0);
			set_ped_config_flag(iVar0, 186, true);
			set_ped_config_flag(iVar0, 6, true);
			set_ped_config_flag(iVar0, 388, true);
			set_ped_config_flag(iVar0, 178, false);
			set_ped_config_flag(iVar0, 297, true);
			if (func_305(1))
			{
				set_ped_relationship_group_hash(iVar0, Local_1172.f_19.f_103);
			}
			set_animal_tuning_bool_param(iVar0, 65, true);
			set_animal_tuning_bool_param(iVar0, 39, false);
			set_animal_tuning_bool_param(iVar0, 43, true);
			set_animal_tuning_float_param(iVar0, 163, 3f);
			set_animal_tuning_float_param(iVar0, 74, 1f);
			set_ped_accuracy(iVar0, 100);
			set_ped_combat_range(iVar0, 0);
			set_ped_combat_attributes(iVar0, 0, false);
			set_ped_combat_attributes(iVar0, 58, true);
			set_ped_combat_attributes(iVar0, 5, true);
			set_ped_combat_movement(iVar0, 2);
			set_combat_float(iVar0, 12, 0.2f);
			switch (iParam0)
			{
				case 3:
					_set_ped_quality(iVar0, 2);
					break;
				case 4:
					_set_ped_quality(iVar0, 1);
					break;
				case 5:
					_set_ped_quality(iVar0, 0);
					break;
			}
			set_ped_using_action_mode(iVar0, true, -1, 0);
			set_entity_max_health(iVar0, 200);
			_set_entity_health(iVar0, 200, 0);
			task_combat_animal_warn(iVar0, func_261(0), 0);
		}
	}
}

int func_307()
{
	switch (Local_1172.f_4)
	{
		case 0:
			func_477(&(Local_1172.f_19.f_5), func_261(0), "NAT007_POACHER7", 0);
			break;
	}
	return 1;
}

void func_308()
{
	func_478();
	Local_1172.f_19.f_108 = _create_volume_sphere(func_298(), 0f, 0f, 0f, 40f, 40f, 40f);
	_0x18262cafebb5fbe1(Local_1172.f_19.f_108, 4096, 0, 0, -1, -1, 8);
	_0xb56d41a694e42e86(Local_1172.f_19.f_108, 4096, 0, 0, -1, -1, 8);
}

void func_309(float fParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_479(func_408(iVar0), fParam0);
		iVar0++;
	}
}

void func_310(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (fParam0 >= fParam1)
	{
	}
	Local_1172.f_473.f_2 = iParam2;
	Local_1172.f_473.f_9 = fParam0;
	Local_1172.f_473.f_10 = fParam1;
	Local_1172.f_473.f_8 = iParam3;
	if (bParam4)
	{
		func_243(&(Local_1172.f_473.f_12), 1);
	}
	else
	{
		func_278(&(Local_1172.f_473.f_12), 1);
	}
}

void func_311(int iParam0, float fParam1)
{
	func_243(&(Local_1172.f_473.f_12), 2);
	Local_1172.f_473.f_7 = fParam1;
	Local_1172.f_473.f_5 = iParam0;
}

void func_312(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_480(uParam0, iParam1, iParam3);
	func_481(uParam0, iParam2, iParam3);
}

int func_313(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(Local_1172.f_473.f_11))
	{
		Local_1172.f_473.f_11 = _create_volume_aggregate_with_custom_name("NB_Trigger");
	}
	if (_does_volume_exist(Local_1172.f_473.f_11))
	{
		switch (iParam0)
		{
			case -1612834106:
				_0x39816f6f94f385ad(Local_1172.f_473.f_11, vParam1, vParam4, vParam7);
				break;
			case -432403087:
				_0x5b7d7bf36d2de18b(Local_1172.f_473.f_11, vParam1, vParam4, vParam7);
				break;
			case 665633627:
				_0xbce668aaf83608be(Local_1172.f_473.f_11, vParam1, vParam4, vParam7);
				break;
		}
		return 1;
	}
	return 0;
}

int func_314(int iParam0)
{
	if (func_482(iParam0, &(Local_1172.f_473.f_13)))
	{
		Local_1172.f_473++;
		return 1;
	}
	return 0;
}

void func_315(int iParam0, int iParam1)
{
	Local_1172.f_752.f_15[iParam0] = iParam1;
}

void func_316(int iParam0, int iParam1)
{
	set_bit(Local_1172.f_752.f_1[iParam0], iParam1);
}

void func_317()
{
	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_484(func_483(iVar0), &Var1))
		{
			if (does_entity_exist(Var1))
			{
				if (!network_has_control_of_entity(Var1))
				{
				}
				else
				{
					_0xbb1e41dd3d3c6250(Var1, "MpRandomEvent", 1);
					func_485(&(Local_1172.f_291), Var1);
					func_486(func_483(iVar0));
				}
				iVar0++;
			}
		}
	}
}

bool func_318(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_487(iParam0, 1178968787) };
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

void func_319()
{
	func_488();
	func_489();
	func_490();
}

void func_320()
{
	iVar2 = participant_id_to_int();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = network_is_participant_active(int_to_participantindex(iVar0));
		func_491(iVar0, bVar1, iVar2);
		func_492(iVar0, bVar1, iVar2);
		func_493(iVar0, bVar1, iVar2);
		func_494(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_321()
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
	if (!func_219(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (network_is_in_mp_cutscene() != Local_1172.f_131.f_96)
	{
		bVar8 = true;
		Local_1172.f_131.f_96 = !Local_1172.f_131.f_96;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_1172.f_131.f_74 >= 6)
		{
			Local_1172.f_131.f_74 = 0;
		}
		iVar0 = Local_1172.f_131.f_74;
		Local_1172.f_131.f_74++;
		iVar9 = func_408(iVar0);
		iVar1 = &Local_1172.f_131.f_7[iVar0];
		bVar4 = !does_entity_exist(iVar1);
		if (func_176(iVar9, 4))
		{
			func_471(iVar9, iVar3, 1);
			bVar4 = !does_entity_exist(iVar1);
		}
		if (bVar4)
		{
			if (&Local_83[iVar3]->f_2.f_2[iVar0] > -1f)
			{
				Local_83[iVar3]->f_2.f_2[iVar0] = -1f;
			}
			if (is_bit_set(Local_1172.f_131.f_5, iVar0))
			{
				clear_bit(&(Local_1172.f_131.f_5), iVar0);
				clear_bit(&(Local_1172.f_131.f_6), iVar0);
				clear_bit(&(Local_1172.f_131.f_75), iVar0);
			}
		}
		else
		{
			bVar7 = func_495(iVar2, iVar1, iVar0, iVar3);
		}
		if (is_bit_set(Local_1172.f_131.f_75, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				clear_bit(&(Local_1172.f_131.f_75), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				set_bit(&(Local_1172.f_131.f_75), iVar0);
			}
		}
		if (!bVar4)
		{
			if (is_any_speech_playing(iVar1))
			{
				if (!is_bit_set(Local_83[iVar3]->f_2.f_1, iVar0))
				{
					set_bit(&(Local_83[iVar3]->f_2.f_1), iVar0);
				}
				func_496(Local_1172.f_131.f_76[iVar0]);
			}
		}
		if (is_bit_set(Local_83[iVar3]->f_2.f_1, iVar0))
		{
			if (bVar4 || (!is_any_speech_playing(iVar1) && (!func_497(Local_1172.f_131.f_76[iVar0]) || func_498(Local_1172.f_131.f_76[iVar0], 0.5f))))
			{
				func_499(Local_1172.f_131.f_76[iVar0]);
				clear_bit(&(Local_83[iVar3]->f_2.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_176(iVar9, 256))
		{
			set_entity_visible_in_cutscene(iVar1, Local_1172.f_131.f_96, 0, 256);
		}
		if (func_176(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (network_is_host_of_this_script())
					{
						if (func_500(iVar9))
						{
							if (!func_414(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_358(iVar9, 4);
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
				if (!func_500(iVar9))
				{
					_0x7043d0681285ba2d(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_1172.f_131.f_75 != 0)
	{
		if (!func_501(1, 255))
		{
			func_502(1);
		}
	}
	else if (func_501(1, 255))
	{
		func_503(1);
	}
}

void func_322()
{
	Var5.f_6 = 1065353216;
	Var5.f_7 = 1065353216;
	Var5.f_8 = 1065353216;
	Var5.f_9 = 1;
	Var5.f_12 = 8;
	iVar20 = 255;
	if (!func_219(&iVar25))
	{
		return;
	}
	func_504();
	bVar27 = get_current_ped_weapon(player_ped_id(), &iVar26, true, 0, false);
	bVar28 = (bVar27 && is_ped_shooting(player_ped_id()));
	if ((bVar27 && bVar28) && _0x705be297eebdb95d(iVar26))
	{
		Local_1172.f_291.f_64 = 0;
		Local_83[iVar25]->f_11.f_4 = get_network_time_accurate();
	}
	bVar29 = (bVar28 && (iVar26 == -1361787316 || iVar26 == 1698907612));
	bVar30 = false;
	while (iVar22 < 1)
	{
		if (Local_1172.f_291.f_173 >= 6)
		{
			Local_1172.f_291.f_173 = 0;
		}
		iVar1 = Local_1172.f_291.f_173;
		Local_1172.f_291.f_173++;
		iVar22++;
		iVar18 = func_483(iVar1);
		if (!func_505(iVar18))
		{
		}
		else if (func_506(iVar18, &Var5))
		{
			if (func_507(&Var5, iVar18))
			{
				if (func_508(&(Local_83[iVar25]->f_11), 8, iVar1))
				{
					func_509(&(Local_83[iVar25]->f_11), 8, iVar1);
				}
			}
			else if (!func_508(&(Local_83[iVar25]->f_11), 8, iVar1))
			{
				func_510(&(Local_83[iVar25]->f_11), 8, iVar1);
			}
			if (!does_entity_exist(Var5))
			{
			}
			else
			{
				func_511(iVar18);
				if (func_512(iVar18))
				{
					if (func_513(iVar18))
					{
						if (!func_514(iVar18))
						{
							func_515(iVar18);
						}
					}
					if (func_516(iVar18))
					{
						func_352(iVar18);
					}
				}
				else
				{
					if (func_517(iVar18))
					{
						if ((does_entity_exist(Var5) && !is_entity_dead(Var5)) && network_has_control_of_entity(Var5))
						{
							set_ped_reset_flag(Var5, 42, true);
						}
					}
					if (!func_518(Var5))
					{
						if (network_has_control_of_entity(Var5))
						{
							func_485(&(Local_1172.f_291), Var5);
						}
					}
					if (!func_519(iVar18, 255))
					{
						bVar2 = false;
						bVar3 = false;
						if (func_520(iVar18))
						{
							bVar2 = true;
							bVar3 = true;
						}
						else if (func_521(iVar18, iVar25))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_522(Var5, Var5.f_1, &(Local_1172.f_291), &iVar4, 0, Var5.f_2))
						{
							switch (iVar4)
							{
								case 256:
									if (!is_bit_set(Local_1172.f_291.f_64, iVar18))
									{
										bVar2 = true;
										set_bit(&(Local_1172.f_291.f_64), iVar18);
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
						else if ((bVar29 && Var5.f_2 <= 1.25f) && func_523(player_ped_id(), Var5, 1060437492) == 0)
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else
						{
							if (!bVar2)
							{
								if (func_524(iVar18, &Var5, iVar25))
								{
									iVar4 = 4;
									bVar2 = true;
									set_bit(&(Local_1172.f_291.f_64), iVar18);
								}
							}
							if (!bVar2)
							{
								bVar30 = true;
								if (!func_525(iVar18) || !_0x83d43f0fd5276e4d(Var5, 1))
								{
									bVar30 = false;
									if (network_has_control_of_entity(Var5))
									{
										_0xbb1e41dd3d3c6250(Var5, "MpRandomEvent", 1);
										func_486(iVar18);
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
														if (func_526(iVar18, &Var5))
														{
															iVar4 = 256;
															bVar2 = true;
															set_bit(&(Local_1172.f_291.f_64), iVar18);
														}
														break;
													case -1507090758:
													case -1102089407:
														if (!Local_1172.f_291.f_2 & 4 != 0)
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
									if (func_527(iVar18, &Var5, iVar25))
									{
										iVar4 = 256;
										bVar2 = true;
										set_bit(&(Local_1172.f_291.f_64), iVar18);
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_528(iVar18, iVar4, bVar3))
							{
							}
							else
							{
								if (func_508(&(Local_83[iVar25]->f_11), 8, iVar1))
								{
									func_509(&(Local_83[iVar25]->f_11), 8, iVar1);
								}
								func_453(iVar18, 1);
								if (func_452(iVar18))
								{
									if (!func_529(iVar18, 255))
									{
										if (network_has_control_of_entity(Var5))
										{
											if (!func_530(iVar18))
											{
											}
											else
											{
												func_531(iVar18);
												func_532(iVar18);
												Jump @1397; //curOff = 1201
												if (func_533(iVar18))
												{
												}
												else if (iVar23 < 2)
												{
													if (network_has_control_of_entity(Var5))
													{
														iVar24 = 0;
														while (iVar24 < 8)
														{
															if (&Local_1172.f_291.f_175[iVar18] >= 32)
															{
																iVar0 = 0;
																Local_1172.f_291.f_175[iVar18] = 0;
															}
															else
															{
																iVar0 = &Local_1172.f_291.f_175[iVar18];
																Local_1172.f_291.f_175[iVar18] = &Local_1172.f_291.f_175[iVar18] + 1;
															}
															iVar24++;
															if (func_534(iVar0, &iVar21, &iVar20, &iVar19))
															{
																if (!func_535(iVar18, iVar20))
																{
																	if (func_519(iVar18, iVar0))
																	{
																		if (!func_536(iVar18, iVar21, iVar20, iVar19))
																		{
																		}
																		else
																		{
																			func_537(iVar18, iVar20);
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

void func_323()
{
	fVar0 = func_538();
	if (Local_1172.f_473.f_4)
	{
		return;
	}
	if (!func_219(&iVar1))
	{
		return;
	}
	if (func_187(Local_83[iVar1]->f_30, 1))
	{
		Local_1172.f_473.f_4 = 1;
		return;
	}
	iVar2 = get_player_ped(player_id());
	if (func_539(iVar2, 0))
	{
		return;
	}
	fVar3 = vdist(get_entity_coords(iVar2, true, false), Local_1172.f_15);
	fVar4 = Local_1172.f_473.f_9;
	fVar5 = Local_1172.f_473.f_10;
	if (func_187(Local_1172.f_473.f_12, 2))
	{
		bVar6 = false;
		fVar7 = get_entity_speed(iVar2);
		fVar8 = (fVar0 * (1f / Local_1172.f_473.f_7));
		if (fVar7 > 0f)
		{
			if (func_540(Local_1172.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_1172.f_473.f_6 < 1f)
			{
				Local_1172.f_473.f_6 = (Local_1172.f_473.f_6 + fVar8);
				if (Local_1172.f_473.f_6 > 1f)
				{
					Local_1172.f_473.f_6 = 1f;
				}
			}
		}
		else if (Local_1172.f_473.f_6 > 0f)
		{
			Local_1172.f_473.f_6 = (Local_1172.f_473.f_6 - fVar8);
			if (Local_1172.f_473.f_6 < 0f)
			{
				Local_1172.f_473.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_1172.f_473.f_5) * Local_1172.f_473.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_243(&(Local_83[iVar1]->f_30), 1);
	}
	else if (_does_volume_exist(Local_1172.f_473.f_11) && is_entity_in_volume(iVar2, Local_1172.f_473.f_11, false, 0))
	{
		func_243(&(Local_83[iVar1]->f_30), 1);
	}
	else if (Local_1172.f_473 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 3)
		{
			func_541(Local_1172.f_473.f_13[iVar10], fVar5, 1082130432, 0, 0, 0, 0, 1);
			iVar10++;
		}
		if (func_542(&(Local_1172.f_473.f_13), Local_1172.f_473, Local_1172.f_473.f_8))
		{
			func_243(&(Local_83[iVar1]->f_30), 1);
		}
	}
	if (func_187(Local_83[iVar1]->f_30, 1))
	{
		Local_1172.f_473.f_4 = 1;
	}
}

void func_324()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_543(Local_13.f_50[iVar0], Local_1172.f_514[iVar0], func_181(iVar0));
		iVar0++;
	}
}

bool func_325()
{
	bVar0 = true;
	if (bVar0 && !_unlock_is_unlocked(Local_1172.f_14))
	{
		return false;
	}
	if (func_544())
	{
		return false;
	}
	if (func_545(get_player_index()))
	{
		return false;
	}
	return true;
}

bool func_326(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = participant_id_to_int();
	}
	if (!func_546(int_to_participantindex(iParam1)))
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
	return func_187(Local_83[iParam1]->f_1, iParam0);
}

void func_327(int iParam0)
{
	iVar0 = participant_id();
	if (func_546(iVar0))
	{
		func_243(&(Local_83[iVar0]->f_1), iParam0);
	}
}

bool func_328(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return func_187(Local_1172.f_19.f_3, iParam0);
	}
	iVar0 = participant_id_to_int();
	bVar1 = func_187(Local_1172.f_19.f_4, iParam0);
	if (bVar1 && !func_187(Local_83[iVar0]->f_1, iParam0))
	{
		func_243(&(Local_83[iVar0]->f_1), iParam0);
		Local_1172.f_19.f_3 = (Local_1172.f_19.f_3 && Local_83[iVar0]->f_1);
	}
	return func_187(Local_1172.f_19.f_3, iParam0);
}

void func_329()
{
	_0x3c6490d940ff5d0b(Local_1172.f_19.f_106, 0, 0, func_225(), 1);
	_0x76bad9d538bca1aa(Local_1172.f_19.f_106, 0f);
	_0xb40ea9e0d2e2f7f3(Local_1172.f_19.f_106, 0.5f);
	func_327(2);
}

bool func_330()
{
	if (Local_1172.f_19.f_106 == 0)
	{
		return false;
	}
	if (Local_1172.f_19.f_106 == 0 || !does_rope_exist(Local_1172.f_19.f_106))
	{
		return true;
	}
	return _0x79c2bec82cfd7f7f(Local_1172.f_19.f_106);
}

int func_331()
{
	return Local_1172.f_19.f_1;
}

bool func_332(bool bParam0)
{
	iVar0 = func_261(0);
	clear_ragdoll_blocking_flags(iVar0, 512);
	clear_ragdoll_blocking_flags(iVar0, 262144);
	clear_ragdoll_blocking_flags(iVar0, 8192);
	clear_ragdoll_blocking_flags(iVar0, 16);
	clear_ragdoll_blocking_flags(iVar0, 16384);
	clear_ragdoll_blocking_flags(iVar0, 32768);
	clear_ragdoll_blocking_flags(iVar0, 1);
	clear_ragdoll_blocking_flags(iVar0, 2);
	_0x18ff3110cf47115d(iVar0, 2, 1);
	_0x18ff3110cf47115d(iVar0, 3, 1);
	_0x18ff3110cf47115d(iVar0, 7, 1);
	if (((bParam0 && !is_entity_on_fire(iVar0)) && !_0x0de0944eccb3df5d(iVar0)) && !is_ped_dead_or_dying(iVar0, true))
	{
		set_entity_max_health(iVar0, 125);
		_set_entity_health(iVar0, 125, 0);
		clear_ped_tasks(iVar0, 1, 0);
		set_ped_to_ragdoll(iVar0, 3000, 3001, 0, false, false, false);
		func_474(iVar0, 0);
	}
	set_ped_can_be_targetted(iVar0, true);
	_0xae6004120c18df97(iVar0, 0, 1);
	_0xae6004120c18df97(iVar0, 1, 1);
	return true;
}

bool func_333(int iParam0, int iParam1)
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

void func_334(bool bParam0)
{
	func_464(-29468993, 1, func_236() == 0);
	func_548(func_547(-1892463704, -400839231), 1);
	func_549();
	func_359();
	func_550(1);
	func_551(-419165566, 0, 255, 0, 0);
	if (bParam0)
	{
		func_552(362262459, 0);
		if (_0x8c03cd6b5e0e85e8(func_261(0), 1390084576))
		{
		}
	}
}

void func_335()
{
	Local_1172.f_19.f_3 = -1;
	Local_1172.f_19.f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_1172.f_19.f_4 = (Local_1172.f_19.f_4 || Local_83[iVar0]->f_1);
			Local_1172.f_19.f_3 = (Local_1172.f_19.f_3 && Local_83[iVar0]->f_1);
		}
		iVar0++;
	}
}

void func_336()
{
	if (func_266() != func_331())
	{
		func_553(func_331(), func_266());
		func_554(Local_13.f_7);
	}
	if (Local_13.f_7.f_11 != 0 && Local_1172.f_19.f_106 == 0)
	{
		func_297();
	}
}

void func_337()
{
	vVar0 = { func_555(player_id()) };
	switch (func_236())
	{
		case 1:
			if (func_331() < 4)
			{
				func_556(0, vVar0, 125f, -89429847, 580546400, 0, "RE_INTER_STRANGER", 1, 1);
			}
			else
			{
				func_175(0);
			}
			if (func_326(8192, -1, 1) && !func_260(65536, 1))
			{
				iVar3 = 3;
				while (iVar3 <= 5)
				{
					if (!get_ped_config_flag(func_261(iVar3), 580, true))
					{
						func_556(iVar3, vVar0, 125f, 831283580, 580546400, 0, 0, 1, 1);
					}
					iVar3++;
				}
			}
			break;
		case 0:
			if (func_331() < 4)
			{
				func_556(0, vVar0, 125f, -89429847, 580546400, 0, "RE_INTER_STRANGER", 1, 1);
			}
			else
			{
				func_175(0);
			}
			break;
	}
}

void func_338()
{
	if (is_ped_on_mount(func_261(0)) && _0xefc4303ddc6e60d3(player_ped_id()))
	{
		_0xed27560703f37258(player_ped_id());
	}
}

bool func_339()
{
	return (func_557(0, 30f, 255, 0) || func_326(4, -1, 1));
}

void func_340()
{
	iVar0 = func_261(0);
	if ((network_has_control_of_entity(iVar0) && !func_333(iVar0, -2017877118)) && !func_260(64, 0))
	{
		task_play_anim(func_261(0), func_466(0), func_476(0), 8f, -8f, -1, 8197, 0f, false, 0, false, 0, false);
		set_ped_keep_task(func_261(0), true);
	}
	if (Local_13.f_7.f_7 == 1 && !func_305(128))
	{
		_0x2660e7720edc4bd0(func_298());
		func_120(128);
	}
	if ((!func_264() && func_249(128)) && func_134(8, 255))
	{
		if (func_557(0, 30f, 255, 0) && network_has_control_of_entity(iVar0))
		{
			if (!func_445(0))
			{
				func_558(2);
				func_446(1, 1744022339, 0, 0);
				func_265();
			}
			else if (func_330())
			{
				func_265();
			}
		}
		else if (func_330())
		{
			func_265();
		}
	}
}

void func_341()
{
	if (func_260(16777216, 0) && !func_260(33554432, 0))
	{
		iVar0 = func_261(0);
		if (network_has_control_of_entity(iVar0) && !func_445(0))
		{
			func_558(10);
			func_446(4, 291934926, 0, 0);
			func_327(33554432);
		}
	}
	if (func_330() && !func_260(64, 0))
	{
		iVar1 = func_261(0);
		if (network_has_control_of_entity(iVar1) && func_332(1))
		{
			func_327(64);
		}
	}
}

void func_342()
{
	if (func_260(524288, 0))
	{
		return;
	}
	if (!func_305(16) && _network_is_player_index_valid(Local_13.f_7.f_3))
	{
		func_559();
		func_120(16);
		return;
	}
	if (!func_305(32))
	{
		if (func_557(0, 50f, 255, 0))
		{
			func_120(64);
		}
		func_120(32);
	}
	iVar0 = func_261(0);
	if (network_has_control_of_entity(iVar0))
	{
		if (!func_260(128, 1) && get_time_difference(Local_13.f_7.f_5, get_network_time_accurate()) >= 2000)
		{
			if (!func_560())
			{
				func_446(16, 1744022339, 0, 0);
				func_561(0);
				func_327(131072);
				func_327(128);
			}
			else
			{
				func_446(8, 291934926, 0, 0);
			}
			func_327(128);
		}
		else if ((!func_260(1024, 1) && get_time_difference(Local_13.f_7.f_5, get_network_time_accurate()) >= 6500) && _network_is_player_index_valid(Local_13.f_7.f_3))
		{
			if (!is_ped_facing_ped(iVar0, get_player_ped(Local_13.f_7.f_3), 10f))
			{
				task_turn_ped_to_face_entity(iVar0, get_player_ped(Local_13.f_7.f_3), 0, -1082130432, -1082130432, -1082130432);
				return;
			}
			if (!func_445(0))
			{
				if (is_ped_on_mount(get_player_ped(Local_13.f_7.f_3)))
				{
					func_446(10, 291934926, 0, 0);
				}
				else
				{
					func_446(9, 291934926, 0, 0);
				}
				set_entity_visible(func_301(2), true);
				attach_entity_to_entity(func_301(2), func_261(0), get_ped_bone_index(func_261(0), 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				_0x4f27603e44a8e4c0(iVar0, 10, 0);
				task_perform_sequence(iVar0, Local_1172.f_19.f_110);
				set_ped_keep_task(iVar0, true);
				func_327(1024);
			}
		}
	}
}

void func_343()
{
	iVar0 = func_261(0);
	if (func_562())
	{
		func_327(8);
	}
	if (!is_ped_fleeing(iVar0) && !func_333(iVar0, 1868526510))
	{
		if (!func_560() || func_260(8, 0))
		{
			if (network_has_control_of_entity(iVar0))
			{
				func_563();
				func_327(512);
			}
		}
		else if (func_564(0, 1) < 3f && network_has_control_of_entity(iVar0))
		{
			task_mount_animal(iVar0, func_261(1), 20000, -1, 1073741824, 1, 0, 0);
		}
	}
	else if (is_ped_on_mount(iVar0) && network_has_control_of_entity(iVar0))
	{
		if (!is_ped_fleeing(iVar0))
		{
			_task_smart_flee_style_coord(iVar0, func_298(), 0, 540672, -1f, -1, func_261(1));
		}
		func_327(512);
	}
}

void func_344()
{
	if (func_565())
	{
		func_566(0, 0, 1);
	}
	if (!func_567())
	{
		func_566(0, 0, 1);
		func_566(0, 1, 1);
	}
	if (!func_560())
	{
		clear_ped_tasks(func_261(0), 1, 0);
		func_446(16, -417894478, 0, 0);
		func_327(131072);
		func_561(0);
	}
	if (func_260(67108864, 0))
	{
		switch (Local_13.f_7.f_12)
		{
			case 0:
				if (Local_13.f_7.f_4 != 255)
				{
					func_568();
				}
				break;
			case 1:
				if (network_has_control_of_entity(func_261(0)))
				{
					if (!func_260(4096, 1))
					{
						task_play_anim(func_261(0), func_466(1), func_476(9), 1.5f, -1.5f, -1, 26, 0f, false, 0, false, 0, false);
						set_ped_keep_task(func_261(0), true);
						func_446(14, -417894478, 0, 0);
						func_327(4096);
						func_327(4);
						func_327(131072);
					}
					else if (((get_time_difference(Local_13.f_7.f_5, get_network_time_accurate()) >= 1000 && func_249(4)) && !func_445(0)) && !func_260(256, 0))
					{
						clear_ped_tasks(func_261(0), 1, 0);
						func_446(15, -417894478, 0, 0);
						func_561(0);
					}
				}
				break;
		}
	}
}

void func_345()
{
	iVar0 = func_261(0);
	if ((network_has_control_of_entity(iVar0) && !func_333(iVar0, -2017877118)) && !func_260(64, 0))
	{
		task_play_anim(func_261(0), func_466(0), func_476(0), 8f, -8f, -1, 8197, 0f, false, 0, false, 0, false);
		set_ped_keep_task(func_261(0), true);
	}
	func_569();
	if (Local_13.f_7.f_7 == 1 && !func_305(128))
	{
		_0x2660e7720edc4bd0(func_298());
		func_120(128);
	}
	if ((!func_264() && func_249(128)) && func_134(8, 255))
	{
		if (Local_1172.f_19.f_106 == 0)
		{
			func_297();
		}
		if (func_557(0, 30f, 255, 0) && network_has_control_of_entity(iVar0))
		{
			if (!func_445(0))
			{
				func_265();
				func_446(1, 1744022339, 0, 0);
			}
			else if (func_330())
			{
				func_265();
			}
		}
		else if (func_330())
		{
			func_265();
		}
		else if (func_260(8192, 0) && network_has_control_of_entity(iVar0))
		{
			if (!func_445(0))
			{
				func_265();
				func_446(1, 1744022339, 0, 0);
			}
		}
	}
}

void func_346()
{
	if (func_330())
	{
		iVar0 = func_261(0);
		if (network_has_control_of_entity(iVar0))
		{
			if (!func_260(64, 1) && func_332(1))
			{
				func_327(64);
				return;
			}
		}
	}
	if (((func_357() && !func_260(65536, 1)) && !func_445(0)) && network_has_control_of_entity(func_261(0)))
	{
		func_446(18, 291934926, 0, 0);
		func_327(65536);
	}
}

void func_347()
{
	if (func_260(524288, 0))
	{
		return;
	}
	iVar0 = func_261(0);
	if ((!func_357() || func_260(16384, 0)) || func_260(32768, 0))
	{
		if ((!func_260(16384, 0) && get_time_difference(Local_13.f_7.f_5, get_network_time_accurate()) >= 4500) && network_has_control_of_entity(iVar0))
		{
			_task_smart_flee_style_coord(iVar0, func_298(), 4, 0, 99999f, -1, func_261(1));
			set_ped_keep_task(iVar0, true);
			func_446(16, 1808677283, 0, 0);
			func_327(16384);
		}
		if (!func_260(32768, 0))
		{
			iVar1 = 3;
			while (iVar1 <= 5)
			{
				if (((does_entity_exist(func_261(iVar1)) && !is_entity_dead(func_261(iVar1))) && func_505(iVar1)) && network_has_control_of_entity(func_261(iVar1)))
				{
					func_570(iVar1, 0);
					register_target(func_261(iVar1), iVar0, 1);
					task_combat_ped(func_261(iVar1), iVar0, 16777216, 0);
					set_ped_combat_attributes(func_261(iVar1), 27, true);
					func_327(32768);
					return;
				}
				iVar1++;
			}
		}
		if ((func_260(16384, 0) && func_260(32768, 0)) && get_time_difference(Local_13.f_7.f_5, get_network_time_accurate()) >= 3000)
		{
			func_327(256);
		}
		return;
	}
	if (!func_305(16) && _network_is_player_index_valid(Local_13.f_7.f_3))
	{
		func_559();
		func_120(16);
		return;
	}
	if (!func_305(32))
	{
		if (func_557(0, 50f, 255, 0))
		{
			func_120(64);
		}
		func_120(32);
	}
	if (network_has_control_of_entity(iVar0))
	{
		if (!func_260(128, 1) && get_time_difference(Local_13.f_7.f_5, get_network_time_accurate()) >= 2000)
		{
			if (!func_560())
			{
				func_446(16, 1744022339, 0, 0);
				func_561(0);
				func_327(131072);
				func_327(256);
			}
			else
			{
				func_446(8, 291934926, 0, 0);
			}
			func_327(128);
		}
		else if ((!func_260(1024, 1) && get_time_difference(Local_13.f_7.f_5, get_network_time_accurate()) >= 6500) && _network_is_player_index_valid(Local_13.f_7.f_3))
		{
			if (!is_ped_facing_ped(iVar0, get_player_ped(Local_13.f_7.f_3), 10f))
			{
				task_turn_ped_to_face_entity(iVar0, get_player_ped(Local_13.f_7.f_3), 0, -1082130432, -1082130432, -1082130432);
				return;
			}
			if (!func_445(0))
			{
				if (is_ped_on_mount(get_player_ped(Local_13.f_7.f_3)))
				{
					func_446(10, 291934926, 0, 0);
				}
				else
				{
					func_446(9, 291934926, 0, 0);
				}
				set_entity_visible(func_301(2), true);
				attach_entity_to_entity(func_301(2), func_261(0), get_ped_bone_index(func_261(0), 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				_0x4f27603e44a8e4c0(iVar0, 10, 0);
				task_perform_sequence(iVar0, Local_1172.f_19.f_110);
				set_ped_keep_task(iVar0, true);
				func_327(1024);
			}
		}
	}
}

void func_348()
{
	iVar0 = func_261(0);
	if (func_562())
	{
		func_327(8);
	}
	if (!get_ped_config_flag(iVar0, 488, true) && network_has_control_of_entity(iVar0))
	{
		set_ped_config_flag(iVar0, 488, true);
	}
	if (!is_ped_fleeing(iVar0) && !func_333(iVar0, 1868526510))
	{
		if (!func_560() || func_260(8, 0))
		{
			if (network_has_control_of_entity(iVar0))
			{
				func_563();
				func_327(512);
			}
		}
		else if (func_564(0, 1) < 3f && network_has_control_of_entity(iVar0))
		{
			task_mount_animal(iVar0, func_261(1), 20000, -1, 1073741824, 1, 0, 0);
		}
	}
	else if (is_ped_on_mount(iVar0) && network_has_control_of_entity(iVar0))
	{
		if (!is_ped_fleeing(iVar0))
		{
			_task_smart_flee_style_coord(iVar0, func_298(), 0, 540672, -1f, -1, func_261(1));
		}
		func_327(512);
	}
}

void func_349()
{
	if (func_565())
	{
		func_566(0, 0, 1);
	}
	if (!func_567())
	{
		func_566(0, 0, 1);
		func_566(0, 1, 1);
	}
	if (!func_560())
	{
		clear_ped_tasks(func_261(0), 1, 0);
		func_446(16, -417894478, 0, 0);
		func_327(131072);
		func_561(0);
	}
	if (func_260(67108864, 0))
	{
		switch (Local_13.f_7.f_12)
		{
			case 0:
				if (Local_13.f_7.f_4 != 255)
				{
					func_568();
				}
				break;
			case 1:
				if (network_has_control_of_entity(func_261(0)))
				{
					if (!func_260(4096, 1))
					{
						task_play_anim(func_261(0), func_466(1), func_476(9), 1000f, -1.5f, -1, 26, 0f, false, 0, false, 0, false);
						set_ped_keep_task(func_261(0), true);
						func_446(14, -417894478, 0, 0);
						func_327(4096);
						func_327(4);
						func_327(131072);
					}
					else if (((get_time_difference(Local_13.f_7.f_5, get_network_time_accurate()) >= 1000 && func_249(4)) && !func_445(0)) && !func_260(256, 0))
					{
						clear_ped_tasks(func_261(0), 1, 0);
						func_446(15, -417894478, 0, 0);
						func_561(0);
					}
				}
				break;
		}
	}
}

bool func_350()
{
	return func_571(1, 255);
}

bool func_351()
{
	if ((!is_player_playing(player_id()) || is_ped_dead_or_dying(Global_34, true)) || _0xc5c395c60b542a3c(1))
	{
		return true;
	}
	return false;
}

void func_352(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	_0xde544b7ec0c187cc(Local_83[iVar0]->f_11.f_5[iParam0]);
}

void func_353(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	func_509(&(Local_83[iVar0]->f_11), 3, iParam0);
}

void func_354(int iParam0)
{
	func_278(&(Local_1172.f_19.f_2), iParam0);
}

bool func_355(int iParam0, int iParam1, bool bParam2)
{
	if (!func_572(iParam0))
	{
		return false;
	}
	iVar0 = func_261(iParam0);
	if (is_ped_dead_or_dying(iVar0, true) && !get_ped_config_flag(iVar0, 11, true))
	{
		iVar1 = get_ped_source_of_death(iVar0);
		if (does_entity_exist(iVar1) && is_entity_a_ped(iVar1))
		{
			if (get_ped_index_from_entity_index(iVar1) == iParam1)
			{
				return true;
			}
		}
		if (bParam2)
		{
			if (has_entity_been_damaged_by_entity(iVar0, iParam1, 0, 0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_356()
{
	if (func_326(262144, -1, 1))
	{
		func_464(669386338, 1, 0);
	}
	else
	{
		func_464(-514316475, 0, 0);
	}
}

bool func_357()
{
	iVar0 = 1;
	iVar1 = 3;
	while (iVar1 <= 5)
	{
		if (does_entity_exist(func_261(iVar1)) && has_entity_been_damaged_by_entity(func_261(iVar1), player_ped_id(), 1, 1))
		{
			func_327(4);
		}
		if ((!is_entity_dead(func_261(iVar1)) && !get_ped_config_flag(func_261(iVar1), 580, true)) && func_505(iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_358(int iParam0, int iParam1)
{
	func_278(&(Local_1172.f_131.f_7[iParam0]->f_2), iParam1);
}

void func_359()
{
	if (!func_69(2))
	{
		return;
	}
	func_149(8);
}

void func_360()
{
	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_484(func_483(iVar0), &Var1))
		{
			if (does_entity_exist(Var1))
			{
				_0xad8f2424c6e1e3a8(Var1);
			}
		}
		iVar0++;
	}
}

void func_361(int iParam0, int iParam1)
{
	func_278(&(Local_1172.f_514[iParam0]->f_5), iParam1);
}

bool func_362(int iParam0, int iParam1)
{
	return func_187(Local_1172.f_514[iParam0]->f_5, iParam1);
}

int func_363(int iParam0)
{
	return func_261(iParam0);
}

void func_364(int iParam0, bool bParam1)
{
	Var1.f_4 = 1;
	Var1.f_7 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_573(&(Local_1172.f_514[iParam0]->f_6[iVar0])))
		{
			func_574(Local_1172.f_514[iParam0]->f_6[iVar0], 1, 1);
			if (bParam1)
			{
				_copy_memory(Local_1172.f_514[iParam0]->f_6[iVar0], &Var1, 8);
			}
		}
		iVar0++;
	}
	func_361(iParam0, 2);
}

int func_365(var uParam0, var uParam1)
{
	return uParam0;
}

int func_366(int iParam0)
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

int func_367(struct<2> Param0)
{
	return func_575(Param0);
}

void func_368(struct<2> Param0, var uParam2)
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
	switch (func_365(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_577(func_576(Param0));
			iVar5 = func_578(iVar4);
			if (!func_579(iVar5, 0))
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

int func_369(int iParam0, int iParam1)
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

void func_370(int iParam0)
{
	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_580(&Var0);
}

var func_371(int iParam0)
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

var func_372(int iParam0)
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

var func_373(int iParam0)
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

bool func_374(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_375(int iParam0)
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

int func_376(int iParam0)
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

void func_377(var uParam0)
{
	func_195(uParam0, 0);
	func_195(uParam0, 1);
	func_195(uParam0, 3);
	func_193(uParam0);
}

void func_378(var uParam0)
{
	func_194(uParam0);
	func_581(uParam0, 0, 3);
}

void func_379(var uParam0)
{
	func_195(uParam0, 0);
	func_196(uParam0, 0);
	func_196(uParam0, 1);
	func_196(uParam0, 2);
}

void func_380(var uParam0)
{
	func_195(uParam0, 1);
	func_193(uParam0);
}

void func_381(var uParam0)
{
	func_195(uParam0, 2);
	func_196(uParam0, 3);
}

void func_382(var uParam0)
{
	func_195(uParam0, 3);
	func_196(uParam0, 4);
}

void func_383(var uParam0)
{
	func_196(uParam0, 0);
	func_196(uParam0, 1);
}

void func_384(var uParam0)
{
	func_196(uParam0, 2);
	func_196(uParam0, 3);
}

void func_385(var uParam0)
{
	func_196(uParam0, 4);
	func_196(uParam0, 5);
}

bool func_386(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

bool func_387(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_388(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_389(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1257541)[iParam0]->f_4 + iParam1);
}

bool func_390(int iParam0, bool bParam1)
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

void func_391(int iParam0, int iParam1)
{
	if (Local_1172.f_514[iParam0]->f_4 == iParam1)
	{
		return;
	}
	Local_1172.f_514[iParam0]->f_4 = iParam1;
	func_582(iParam0, 8);
}

int func_392(var uParam0)
{
	return uParam0;
}

void func_393(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_362(iParam0, 4))
		{
			func_582(iParam0, 4);
		}
	}
	else if (func_362(iParam0, 4))
	{
		func_361(iParam0, 4);
	}
}

void func_394(int iParam0, float fParam1)
{
	if (fParam1 > 0f)
	{
		Local_1172.f_514[iParam0]->f_2 = fParam1;
	}
}

void func_395(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		func_582(iParam0, 16);
	}
	else
	{
		func_361(iParam0, 16);
	}
}

void func_396(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Local_1172.f_514[iParam0]->f_6[iParam1]->f_2 = sParam2;
	Local_1172.f_514[iParam0]->f_6[iParam1]->f_3 = iParam3;
	Local_1172.f_514[iParam0]->f_6[iParam1]->f_6 = iParam4;
	Local_1172.f_514[iParam0]->f_6[iParam1]->f_4 = iParam5;
	Local_1172.f_514[iParam0]->f_6[iParam1]->f_5 = iParam6;
	Local_1172.f_514[iParam0]->f_6[iParam1]->f_7 = iParam7;
	Local_1172.f_514[iParam0]->f_6[iParam1]->f_1 = iParam8;
	if (func_583(iParam0))
	{
		func_584(iParam0, iParam1, 16);
	}
}

void func_397(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (_0x375f5870a7b8bec1(Local_1172.f_514[iParam0]->f_6[iParam1]->f_2))
	{
		return;
	}
	if (!bParam2)
	{
		func_584(iParam0, iParam1, 1);
	}
	else
	{
		func_585(iParam0, iParam1, 1);
	}
	if (bParam3 && func_583(iParam0))
	{
		func_586(&(Local_1172.f_514[iParam0]->f_6[iParam1]), bParam2, 1, 1);
	}
}

void func_398(var uParam0)
{
	func_587(uParam0, 0);
	func_588(uParam0, 0);
	func_399(uParam0, 1);
	func_589(uParam0, 1);
	func_590(uParam0, 0);
	func_591(uParam0, 1);
	func_592(uParam0, 1, 1, 1);
}

void func_399(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_278(&(uParam0->f_2), 256);
	}
	else
	{
		func_243(&(uParam0->f_2), 256);
	}
}

void func_400(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_278(&(uParam0->f_2), 4);
	}
	else
	{
		func_243(&(uParam0->f_2), 4);
	}
}

void func_401(var uParam0)
{
	func_594(uParam0, (func_593(uParam0) - 6f));
	func_595(uParam0, 1);
}

void func_402(var uParam0)
{
	func_587(uParam0, 0);
	func_588(uParam0, 0);
	func_399(uParam0, 0);
	func_590(uParam0, 0);
	func_592(uParam0, 1, 1, 1);
}

void func_403(var uParam0)
{
	func_596(uParam0, 1);
	func_597(uParam0, 1);
	func_598(uParam0, 1);
}

void func_404(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_278(&(uParam0->f_2), 131072);
	}
	else
	{
		func_243(&(uParam0->f_2), 131072);
	}
}

void func_405(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_243(uParam0, 4);
	}
	else
	{
		func_278(uParam0, 4);
	}
}

bool func_406(int iParam0, var uParam1)
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

int func_407(int iParam0, int iParam1)
{
	iVar0 = 0;
	set_bit(&iVar0, 31);
	iVar0 = shift_right(iVar0, (31 - iParam1));
	iVar0 ^= -1;
	iVar0 = shift_left(iVar0, iParam0);
	return iVar0;
}

int func_408(int iParam0)
{
	return iParam0;
}

void func_409(int iParam0, int iParam1, int iParam2)
{
	Local_1172.f_228[iParam0]->f_5[iParam1]->f_2 = iParam2;
}

void func_410(int iParam0)
{
	func_599(0, iParam0);
}

void func_411(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6)
{
	Local_1172.f_228[iParam0]->f_5[iParam1]->f_7 = { vParam2 };
	Local_1172.f_228[iParam0]->f_5[iParam1]->f_10 = { 0f, 0f, fParam5 };
	Local_1172.f_228[iParam0]->f_5[iParam1]->f_13 = iParam6;
}

void func_412(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_243(&(Local_1172.f_228[iParam0]->f_5[iParam1]->f_1), 64);
	}
	else
	{
		func_278(&(Local_1172.f_228[iParam0]->f_5[iParam1]->f_1), 64);
	}
}

int func_413(int iParam0)
{
	if (!func_188(iParam0))
	{
		return 0;
	}
	return Global_1132288->f_1[iParam0]->f_3;
}

bool func_414(int iParam0, bool bParam1, bool bParam2)
{
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_1172.f_15 };
	iVar7 = 0;
	iVar8 = func_468(iParam0);
	iVar9 = func_600(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!network_does_network_id_exist(&(Local_13.f_22[iParam0])))
		{
			iVar9 = func_600(iParam0);
			fVar0 = func_251(iParam0);
			if (!func_187(Local_1172.f_131.f_7[iParam0]->f_2, 2))
			{
				vVar1 = { _get_object_offset_from_coords(vVar4, 0f, func_250(iParam0)) };
			}
			else
			{
				vVar1 = { func_250(iParam0) };
			}
			if (!func_601(Local_13.f_22[iParam0], iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || _is_this_model_a_horse(iVar8)), 1, 1))
			{
				*bParam1 = 1;
			}
			else
			{
				iVar7 = net_to_ped(&(Local_13.f_22[iParam0]));
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
						func_602(iVar7, 1);
					}
					if (func_603(iParam0))
					{
						set_ped_can_be_targetted(iVar7, false);
					}
					if (_is_this_model_a_horse(iVar8))
					{
						if (func_604(iParam0))
						{
							if (func_603(iParam0))
							{
							}
						}
						else
						{
							set_ped_can_be_targetted(iVar7, false);
						}
					}
					if (func_415(iParam0))
					{
						if (network_request_control_of_network_id(&(Local_13.f_22[iParam0])))
						{
							_0x7182edda1ee7db5a(&(Local_13.f_22[iParam0]));
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
		else if (_0xa0bc8faed8cfeb3c(net_to_ped(&(Local_13.f_22[iParam0]))))
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

bool func_415(int iParam0)
{
	return func_176(iParam0, 128);
}

int func_416(int iParam0, int iParam1)
{
	return Local_1172.f_228[iParam0]->f_5[iParam1]->f_2;
}

bool func_417(int iParam0, int iParam1)
{
	return func_187(Local_1172.f_228[iParam0]->f_5[iParam1]->f_1, 64);
}

bool func_418(int iParam0, int iParam1)
{
	return func_187(Local_1172.f_228[iParam0]->f_5[iParam1]->f_1, 16);
}

Vector3 func_419(int iParam0, int iParam1)
{
	return Local_1172.f_228[iParam0]->f_5[iParam1]->f_7;
}

bool func_420(int iParam0, int iParam1)
{
	return Local_1172.f_228[iParam0]->f_5[iParam1]->f_13;
}

bool func_421(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_605(*uParam0, 0f, 0f, 0f))
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

bool func_422(int iParam0, int iParam1)
{
	return is_bit_set(Local_1172.f_228[iParam0]->f_3, iParam1);
}

bool func_423(int iParam0, int iParam1)
{
	return func_187(Local_1172.f_228[iParam0]->f_5[iParam1]->f_1, 1);
}

bool func_424(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_606(iParam1))
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

bool func_425(int iParam0, int iParam1)
{
	return func_187(Local_1172.f_228[iParam0]->f_5[iParam1]->f_1, 2);
}

bool func_426(int iParam0, int iParam1)
{
	return func_187(Local_1172.f_228[iParam0]->f_5[iParam1]->f_1, 4);
}

bool func_427(int iParam0, int iParam1)
{
	return func_187(Local_1172.f_228[iParam0]->f_5[iParam1]->f_1, 128);
}

Vector3 func_428(int iParam0, int iParam1)
{
	return Local_1172.f_228[iParam0]->f_5[iParam1]->f_10;
}

bool func_429(int iParam0, int iParam1, int iParam2)
{
	return func_187(Local_1172.f_228[iParam0]->f_5[iParam1]->f_1, iParam2);
}

float func_430(float fParam0)
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

Vector3 func_431(vector3 vParam0)
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

bool func_432(int iParam0, int iParam1)
{
	return func_187(Local_1172.f_228[iParam0]->f_5[iParam1]->f_1, 256);
}

void func_433(int iParam0, int iParam1, bool bParam2)
{
	freeze_entity_position(&(Local_1172.f_228[iParam0]->f_5[iParam1]), bParam2);
}

bool func_434(int iParam0, int iParam1)
{
	return func_187(Local_1172.f_228[iParam0]->f_5[iParam1]->f_1, 512);
}

void func_435(var uParam0, int iParam1)
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
			if (!func_607(iParam1))
			{
			}
			else
			{
				uParam0->f_2 = 2;
			}
			break;
		case 2:
			if (func_608(iParam1))
			{
			}
			else
			{
				uParam0->f_1 = 255;
				*uParam0 = func_610(iParam1, func_609(Local_13.f_50.f_19, iParam1), func_220(iParam1));
				func_122(&(Local_13.f_50.f_19), iParam1, 3);
				uParam0->f_2 = 0;
			}
			break;
	}
}

bool func_436(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (!bParam2 || func_611(iVar0))
			{
				if (func_557(iParam0, fParam1, iVar0, 0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_437(int iParam0, int iParam1)
{
	if (func_612(iParam0))
	{
		return 0;
	}
	if (&Local_13.f_50[iParam0] == iParam1)
	{
		return 1;
	}
	Local_13.f_50[iParam0] = iParam1;
	return 1;
}

void func_438(int iParam0, int iParam1)
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, iParam0, -1, -1, 255);
	Var31 = { func_487(iParam0, 1346578557) };
	if (!stat_id_get_int(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	set_bit(&iVar33, iParam1);
	if (!func_124(&Var0, 4) && func_613(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!stat_id_set_int(&Var31, iVar33, true))
	{
	}
	(*Global_1268861)[network_player_id_to_int()]->f_56[iParam0] = iVar33;
}

void func_439(int iParam0)
{
	func_614(iParam0);
}

void func_440(int iParam0)
{
	if (func_131(Global_1272030[iParam0]))
	{
		return;
	}
	func_615(iParam0, &iVar0, &iVar1);
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
		Var34 = { func_616(153786159) };
		stat_id_set_int(&Var34, iVar33, true);
		Var34 = { func_616(217123284) };
		stat_id_set_int(&Var34, Global_1296859->f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_616(945205875) };
		stat_id_set_int(&Var37, iVar36, true);
		Var37 = { func_616(890183498) };
		stat_id_set_int(&Var37, Global_1296859->f_21, true);
	}
}

void func_441(int iParam0)
{
	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_580(&Var0);
}

void func_442(struct<2> Param0)
{
	if (func_367(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_367(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_367(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_617(Param0, &Var0))
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

void func_443(int iParam0)
{
	Var0 = { func_487(iParam0, -1797584255) };
	_0x6a0184e904cdf25e(&Var0, 1);
}

void func_444(int iParam0, int iParam1, int iParam2)
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

bool func_445(int iParam0)
{
	return is_bit_set(Local_1172.f_131.f_6, iParam0);
}

void func_446(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0 = { func_618(377515857) };
	Var0.f_11 = iParam0;
	Var0.f_12 = iParam1;
	Var0.f_13 = iParam2;
	Var0.f_14 = iParam3;
	func_619(&Var0);
	func_620(iParam0, iParam1, iParam2, iParam3);
}

void func_447()
{
	if (Local_13.f_7.f_8 < 4)
	{
		func_446(2, 1744022339, 0, Local_13.f_7.f_8);
		Local_13.f_7.f_8++;
		Local_13.f_7.f_6 = get_network_time_accurate();
	}
	else if (func_236() == 1)
	{
		func_446(7, 1744022339, 0, 0);
		Local_13.f_7.f_6 = get_network_time_accurate();
	}
	else if (Local_13.f_7.f_8 < 5)
	{
		func_446(3, 1744022339, 0, 0);
		Local_13.f_7.f_8++;
		Local_13.f_7.f_6 = get_network_time_accurate();
	}
	else if (!func_260(16, 1) && get_time_difference(Local_13.f_7.f_6, get_network_time_accurate()) > 14000)
	{
		func_327(16);
		func_446(7, 1744022339, 0, 0);
		Local_13.f_7.f_6 = get_network_time_accurate();
	}
}

int func_448()
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (func_187(Local_83[iVar0]->f_1, 32))
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
	return func_621(1203982208);
}

int func_449(int iParam0)
{
	return Local_13.f_50[iParam0]->f_1;
}

void func_450()
{
	if (func_249(2048) || func_249(4096))
	{
		return;
	}
	if (Local_13.f_7.f_13.f_1 == 0 && Local_13.f_7.f_4 != 255)
	{
		func_622(&(Local_13.f_7.f_13), Local_13.f_7.f_4, Local_1172.f_19.f_105);
		return;
	}
	bVar1 = func_623(&(Local_13.f_7.f_13), "PBL_TAKE_OFFER", &bVar0);
	if (bVar1)
	{
		if (bVar0)
		{
			func_121(4096);
		}
		else
		{
			func_121(2048);
		}
	}
	else if (bVar0)
	{
		func_121(4096);
	}
}

int func_451()
{
	iVar0 = 0;
	iVar1 = 3;
	while (iVar1 <= 5)
	{
		if ((!is_entity_dead(func_261(iVar1)) && !get_ped_config_flag(func_261(iVar1), 580, true)) && func_505(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_452(int iParam0)
{
	return func_508(&(Local_1172.f_291.f_87), 1, iParam0);
}

void func_453(int iParam0, bool bParam1)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	func_510(&(Local_83[iVar0]->f_11), 1, iParam0);
	if (bParam1)
	{
		Local_83[iVar0]->f_11.f_12[iParam0] = get_network_time_accurate();
	}
}

bool func_454()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (_0x0e99e3bf11bb6367(func_261(iVar0)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_455(int iParam0)
{
	if (network_is_host_of_this_script())
	{
		func_278(&(Local_13.f_7.f_1), iParam0);
	}
}

void func_456(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_457(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_458(int* iParam0, int iParam1)
{
	if (!get_event_data(1, iParam1, iParam0, 15))
	{
		return false;
	}
	if (iParam0->f_4.f_1 != Local_1172.f_1)
	{
		return false;
	}
	if (iParam0->f_4 != iVar1168)
	{
		return false;
	}
	if (iParam0->f_4.f_2 != Local_1172.f_2)
	{
		return false;
	}
	if (iParam0->f_4.f_3 != Local_1172.f_3)
	{
		return false;
	}
	return true;
}

void func_459(int iParam0)
{
	switch (iParam0->f_9)
	{
		case 377515857:
			func_620(iParam0->f_11, iParam0->f_12, iParam0->f_13, iParam0->f_14);
			break;
	}
}

bool func_460(int iParam0)
{
	return &Local_1172.f_752.f_1[iParam0] != 0;
}

bool func_461(int iParam0, int iParam1)
{
	return is_bit_set(&(Local_1172.f_752.f_1[iParam0]), iParam1);
}

bool func_462(int iParam0, int iParam1)
{
	return is_bit_set(&(Local_1172.f_752.f_8[iParam0]), iParam1);
}

bool func_463(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			if (_0x4b19f171450e0d4f(player_ped_id()) == func_261(1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_464(int iParam0, bool bParam1, bool bParam2)
{
	if (func_28() != 0)
	{
		return;
	}
	if (func_624())
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
		if (!&Global_1139381->f_3876.f_2[func_625(iParam0, 1)])
		{
			return;
		}
	}
	(Global_1139381->f_3876.f_2[func_625(iParam0, 1)])->f_2++;
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
	func_626(&Var0, uVar7);
}

void func_465(int iParam0, int iParam1)
{
	set_bit(Local_1172.f_752.f_8[iParam0], iParam1);
}

char* func_466(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_re@suspension_trap@hanging";
		case 1:
			return "script_re@suspension_trap@handover";
		default:
			break;
	}
	return "";
}

bool func_467(char* sParam0)
{
	request_anim_dict(sParam0);
	if (has_anim_dict_loaded(sParam0))
	{
		return true;
	}
	return false;
}

int func_468(int iParam0)
{
	return Local_1172.f_131.f_7[iParam0]->f_3;
}

bool func_469(int iParam0)
{
	return func_422(0, iParam0);
}

bool func_470(int iParam0)
{
	return func_423(0, iParam0);
}

void func_471(int iParam0, int iParam1, bool bParam2)
{
	iVar2 = func_468(iParam0);
	bVar3 = func_390(iParam1, 1);
	if (!is_bit_set(Local_1172.f_131.f_5, iParam0))
	{
		if (network_does_network_id_exist(&(Local_13.f_22[iParam0])))
		{
			iVar1 = net_to_ped(&(Local_13.f_22[iParam0]));
			if (!does_entity_exist(iVar1))
			{
				return;
			}
			Local_1172.f_131.f_7[iParam0] = iVar1;
			if (bVar3)
			{
				if (is_entity_dead(iVar1) || is_entity_dead(player_ped_id()))
				{
					Local_83[iParam1]->f_2.f_2[iParam0] = -1f;
				}
				else
				{
					Local_83[iParam1]->f_2.f_2[iParam0] = vdist(get_entity_coords(iVar1, true, false), get_entity_coords(player_ped_id(), true, false));
				}
			}
			if (network_is_host_of_this_script())
			{
				if (func_415(iParam0))
				{
					if (network_does_network_id_exist(&(Local_13.f_22[iParam0])))
					{
						if (network_request_control_of_network_id(&(Local_13.f_22[iParam0])))
						{
							_0x7182edda1ee7db5a(&(Local_13.f_22[iParam0]));
						}
					}
				}
			}
			if (does_entity_exist(iVar1))
			{
				if (network_has_control_of_entity(iVar1))
				{
					func_627(iVar1, 1f, 0);
					sVar0 = func_628(iParam0);
					if (!_0x375f5870a7b8bec1(sVar0))
					{
						func_629(iVar1, sVar0, 1);
					}
				}
				if (func_603(iParam0))
				{
					set_ped_can_be_targetted(iVar1, false);
				}
				if (_is_this_model_a_horse(iVar2))
				{
					if (func_604(iParam0))
					{
						if (func_603(iParam0))
						{
						}
					}
					else
					{
						set_ped_can_be_targetted(iVar1, false);
					}
				}
				set_bit(&(Local_1172.f_131.f_5), iParam0);
				if (bParam2)
				{
					func_630(iParam0);
				}
			}
		}
	}
}

bool func_472(int iParam0)
{
	if (iParam0 != 0)
	{
		iVar0 = _network_get_rope_from_network_id(iParam0);
		if (does_rope_exist(iVar0))
		{
			return true;
		}
	}
	return false;
}

void func_473(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_374(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, iParam4, iParam5, iParam6, iParam7);
		if (func_374(uParam0))
		{
		}
	}
}

void func_474(int iParam0, bool bParam1)
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

var func_475(int iParam0, int iParam1)
{
	return &(Local_1172.f_228[iParam0]->f_5[iParam1]);
}

char* func_476(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "loop_panic_victim";
		case 1:
			return "loop_less_panic_victim";
		case 2:
			return "help_me_victim";
		case 3:
			return "anybody_there_panic_victim";
		case 4:
			return "anybody_there_victim";
		case 5:
			return "im_trapped_victim";
		case 6:
			return "take_this_offer_victim";
		case 7:
			return "offer_loop_victim";
		case 9:
			return "dont_take_offer_victim";
		case 8:
			return "take_this_offer_victim";
		case 10:
			return "player_attacks_victim";
		default:
			break;
	}
	return "";
}

void func_477(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_631(uParam0, iParam1, sParam2))
	{
		if (!is_ped_injured(iParam1))
		{
			if (!network_is_game_in_progress() || (network_is_game_in_progress() && network_has_control_of_entity(iParam1)))
			{
				set_ped_can_play_ambient_anims(iParam1, bParam3);
			}
		}
	}
}

void func_478()
{
	if (_does_volume_exist(Local_1172.f_19.f_108))
	{
		_0xa1cfb35069d23c23(Local_1172.f_19.f_108);
		_0x74c2b3dc0b294102(Local_1172.f_19.f_108);
		_delete_volume(Local_1172.f_19.f_108);
	}
}

void func_479(int iParam0, float fParam1)
{
	Local_1172.f_131.f_7[iParam0]->f_9 = fParam1;
}

void func_480(var uParam0, int iParam1, int iParam2)
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

void func_481(var uParam0, int iParam1, int iParam2)
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

bool func_482(int iParam0, var uParam1)
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

int func_483(int iParam0)
{
	return iParam0;
}

bool func_484(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = func_261(iParam0);
	uParam1->f_2 = func_632(iParam0, 255, 1);
	return does_entity_exist(*uParam1);
}

void func_485(var uParam0, int iParam1)
{
	set_ped_config_flag(iParam1, 168, true);
	_0xbb1e41dd3d3c6250(iParam1, "SpAggroDefault", 0);
	decor_set_bool(iParam1, "UsesTracker", true);
}

void func_486(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	func_510(&(Local_83[iVar0]->f_11), 0, iParam0);
}

struct<2> func_487(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_633(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_547(iParam1, iVar4) };
	if (!_stat_id_is_valid(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_488()
{
	Local_1172.f_131.f_6 = 0;
	Local_1172.f_131.f_2 = 0;
	Local_1172.f_131.f_1 = -1;
}

void func_489()
{
	func_223(&(Local_1172.f_291.f_87), 2, 0);
	func_223(&(Local_1172.f_291.f_87), 1, 0);
	func_223(&(Local_1172.f_291.f_87), 4, 0);
	func_223(&(Local_1172.f_291.f_87), 5, 0);
	func_223(&(Local_1172.f_291.f_87), 8, -1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		_0xde544b7ec0c187cc(Local_1172.f_291.f_66[iVar0]);
		_0x20f4cb76689acdbc(Local_1172.f_291.f_80[iVar0]);
		_0xde544b7ec0c187cc(Local_1172.f_291.f_73[iVar0]);
		func_634(iVar0);
		iVar0++;
	}
}

void func_490()
{
	iVar1 = 0;
	iVar2 = func_635(0, 0);
	if (!does_entity_exist(iVar2) || !is_entity_a_ped(iVar2))
	{
		func_636();
	}
	else
	{
		iVar1 = get_ped_index_from_entity_index(iVar2);
	}
	bVar3 = false;
	Local_1172.f_514.f_235 = 0;
	Local_1172.f_514.f_236 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!bVar3 && does_entity_exist(iVar1))
		{
			if (func_637(func_181(iVar0), iVar1))
			{
				bVar3 = true;
			}
		}
		iVar0++;
	}
	if (!bVar3)
	{
		func_636();
	}
}

void func_491(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_1172.f_131.f_2 = (Local_1172.f_131.f_2 || Local_83[iParam0]->f_2);
		Local_1172.f_131.f_1 = (Local_1172.f_131.f_1 && Local_83[iParam0]->f_2);
		Local_1172.f_131.f_6 = (Local_1172.f_131.f_6 || Local_83[iParam0]->f_2.f_1);
	}
}

void func_492(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		func_638(&(Local_1172.f_291.f_87), &(Local_83[iParam0]->f_11), 2);
		func_638(&(Local_1172.f_291.f_87), &(Local_83[iParam0]->f_11), 1);
		func_638(&(Local_1172.f_291.f_87), &(Local_83[iParam0]->f_11), 4);
		func_638(&(Local_1172.f_291.f_87), &(Local_83[iParam0]->f_11), 5);
		func_638(&(Local_1172.f_291.f_87), &(Local_83[iParam0]->f_11), 6);
		func_638(&(Local_1172.f_291.f_87), &(Local_83[iParam0]->f_11), 7);
		func_638(&(Local_1172.f_291.f_87), &(Local_83[iParam0]->f_11), 0);
		func_638(&(Local_1172.f_291.f_87), &(Local_83[iParam0]->f_11), 3);
		func_639(&(Local_1172.f_291.f_87), &(Local_83[iParam0]->f_11), 8);
		iVar0 = 0;
		while (iVar0 < 6)
		{
			_0xffddf802279be128(Local_83[iParam0]->f_11.f_5[iVar0], Local_1172.f_291.f_66[iVar0], Local_1172.f_291.f_66[iVar0]);
			_0xffddf802279be128(Local_83[iParam0]->f_11.f_5[iVar0], Local_1172.f_291.f_66[iVar0], Local_1172.f_291.f_73[iVar0]);
			_0xe4abe20dce7c7cfe(Local_83[iParam0]->f_11.f_5[iVar0], Local_1172.f_291.f_66[iVar0], Local_1172.f_291.f_80[iVar0]);
			func_640(func_483(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_493(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		Local_83[iParam2]->f_30 = (Local_83[iParam2]->f_30 || Local_83[iParam0]->f_30);
	}
}

void func_494(int iParam0, bool bParam1, int iParam2)
{
	if (!bParam1)
	{
		return;
	}
	Local_1172.f_514.f_235 = (Local_1172.f_514.f_235 || Local_83[iParam0]->f_31.f_2);
	Local_1172.f_514.f_236 = (Local_1172.f_514.f_236 && Local_83[iParam0]->f_31.f_2);
	func_641(iParam0);
}

int func_495(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam0) || !does_entity_exist(iParam1))
	{
		return 0;
	}
	fVar0 = vdist(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	Local_83[iParam3]->f_2.f_2[iParam2] = fVar0;
	if (fVar0 > Local_1172.f_131.f_7[iParam2]->f_9)
	{
		return 0;
	}
	return 1;
}

void func_496(var uParam0)
{
	func_642(uParam0, 0f);
}

bool func_497(var uParam0)
{
	return func_643(*uParam0, 1);
}

bool func_498(var uParam0, float fParam1)
{
	if (!func_497(uParam0))
	{
		return false;
	}
	if (func_644(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_499(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_500(int iParam0)
{
	return true;
}

bool func_501(int iParam0, int iParam1)
{
	if (!func_390(iParam1, 0))
	{
		if (!func_219(&iParam1))
		{
			return false;
		}
	}
	return func_187(Local_83[iParam1]->f_2, iParam0);
}

void func_502(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	func_243(&(Local_83[iVar0]->f_2), iParam0);
}

void func_503(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	func_278(&(Local_83[iVar0]->f_2), iParam0);
}

void func_504()
{
	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	if (!func_219(&iVar15))
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
	while (iVar0 < 6)
	{
		iVar14 = func_483(iVar0);
		if (!func_505(iVar14))
		{
		}
		else if (!func_506(iVar14, &Var1))
		{
		}
		else
		{
			if (!is_entity_dead(Var1) && is_bullet_in_area(get_entity_coords(Var1, true, false), 4f, true))
			{
				set_bit(&(Local_1172.f_291.f_65), iVar14);
			}
			if (func_521(iVar14, iVar15))
			{
			}
			else if (has_entity_been_damaged_by_entity(Var1, iVar17, 0, 0))
			{
				func_645(iVar14);
				func_646(iVar14);
			}
		}
		iVar0++;
	}
}

bool func_505(int iParam0)
{
	return !func_508(&(Local_1172.f_291.f_87), 5, iParam0);
}

bool func_506(int iParam0, var uParam1)
{
	if (!is_bit_set(Local_1172.f_291.f_170, iParam0))
	{
		return false;
	}
	*uParam1 = &Local_1172.f_291.f_91[iParam0];
	uParam1->f_1 = Local_1172.f_291.f_91[iParam0]->f_1;
	uParam1->f_2 = Local_1172.f_291.f_91[iParam0]->f_2;
	if (!does_entity_exist(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_507(var uParam0, int iParam1)
{
	if (!func_647(iParam1))
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
	if (func_648(*uParam0, &(Local_1172.f_291.f_32), &uVar1, uParam0->f_2))
	{
		return true;
	}
	if (is_entity_touching_entity(player_ped_id(), *uParam0))
	{
		return true;
	}
	return false;
}

bool func_508(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 10)
	{
		return false;
	}
	if (!func_406(iParam1, &Var0))
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

int func_509(var uParam0, int iParam1, int iParam2)
{
	if (!func_406(iParam1, &Var0))
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

int func_510(var uParam0, int iParam1, int iParam2)
{
	if (!func_406(iParam1, &Var0))
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

void func_511(int iParam0)
{
	iVar0 = func_649(iParam0);
	if (iVar0 >= 3 && iVar0 <= 5)
	{
		iVar1 = func_261(iVar0);
		if (!is_ped_dead_or_dying(iVar1, true))
		{
			if (network_has_control_of_entity(iVar1))
			{
				iVar2 = get_ped_index_from_entity_index(_0xcd66fea29400a0b5(iVar1));
				if ((!func_333(iVar1, 1435919172) || (is_entity_dead(iVar2) && !func_333(iVar1, -1389117756))) || (does_entity_exist(iVar2) && !func_650(iVar2)))
				{
					func_651(iVar0);
					if (!func_436(0, 40f, 0))
					{
						func_652(iVar0);
					}
				}
				if (iVar2 == func_261(0))
				{
					if (func_564(0, iVar0) < 7f)
					{
						task_combat_animal_warn(iVar1, func_261(0), 0);
					}
					if (!func_653(iVar0) && func_654(iVar0, 30f, 1, 0) != 255)
					{
						func_651(iVar0);
					}
				}
				if (get_ped_config_flag(iVar1, 580, true))
				{
					func_353(iVar0);
					func_651(iVar0);
					func_570(iVar0, 0);
					set_ped_combat_attributes(iVar1, 17, true);
					set_blocking_of_non_temporary_events(iVar1, false);
				}
			}
			else if (get_ped_config_flag(iVar1, 580, true))
			{
				func_353(iVar0);
				func_651(iVar0);
				func_570(iVar0, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		iVar3 = func_261(iVar0);
		if (is_entity_dead(iVar3) && func_355(0, player_ped_id(), 0))
		{
			if (!func_305(256) && !func_305(8))
			{
				func_356();
				func_120(256);
			}
		}
	}
}

bool func_512(int iParam0)
{
	return func_508(&(Local_1172.f_291.f_87), 4, iParam0);
}

bool func_513(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return false;
	}
	return func_508(&(Local_83[iVar0]->f_11), 4, iParam0);
}

bool func_514(int iParam0)
{
	return _0x179a6f0ee2e79026(Local_1172.f_291.f_73[iParam0]);
}

void func_515(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	func_509(&(Local_83[iVar0]->f_11), 4, iParam0);
}

bool func_516(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return false;
	}
	return _0x179a6f0ee2e79026(Local_83[iVar0]->f_11.f_5[iParam0]);
}

bool func_517(int iParam0)
{
	return func_508(&(Local_1172.f_291.f_87), 6, iParam0);
}

bool func_518(int iParam0)
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

bool func_519(int iParam0, int iParam1)
{
	if (!func_390(iParam1, 0))
	{
		if (!func_219(&iParam1))
		{
			return false;
		}
	}
	return func_508(&(Local_83[iParam1]->f_11), 1, iParam0);
}

bool func_520(int iParam0)
{
	iVar0 = func_649(iParam0);
	if (iVar0 == 0)
	{
		if (func_266() >= 2)
		{
			if (get_number_of_fires_in_range(func_655(func_261(iVar0)), 7f) > 0 || is_ped_diving(func_261(iVar0)))
			{
				return true;
			}
		}
	}
	if (iVar0 == 1)
	{
		iVar1 = func_261(iVar0);
		if (func_656(player_ped_id(), iVar1, 0) || func_657(player_ped_id(), &iVar1))
		{
			func_327(2097152);
			func_658(1024);
		}
		return false;
	}
	if (iVar0 > 3)
	{
		fVar2 = func_632(iVar0, 255, 0);
		if (fVar2 < 30f && !is_player_dead(player_id()))
		{
			return true;
		}
	}
	return false;
}

bool func_521(int iParam0, int iParam1)
{
	if (!func_390(iParam1, 0))
	{
		if (!func_219(&iParam1))
		{
			return false;
		}
	}
	if (!func_659(int_to_participantindex(iParam1)))
	{
		return false;
	}
	return func_508(&(Local_83[iParam1]->f_11), 3, iParam0);
}

bool func_522(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_6)
	{
		func_660(uParam2, 1, iVar0);
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
			if (func_661(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_662(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258->f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_663(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_662(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_664(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_662(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_665(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_662(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_20 && func_666(player_id(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_662(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258->f_19)
		{
			if (func_667(uParam2, 1065353216))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_668(Global_34, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_662(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_669(Global_34, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_662(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940258->f_23) < 300)
			{
				if (func_670(Global_34, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_662(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_670(Global_34, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_662(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_671(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_662(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940258->f_19 || uParam2->f_13 < 20f)
			{
				if (func_672(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_662(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_24 || Global_1940258->f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_673(uParam2, 4000))
				{
					if ((func_674(iParam0, Global_1940258->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_675(uParam2, iParam0)) && func_676(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_662(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_674(iParam0, Global_1940258->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_675(uParam2, iParam0)) && func_676(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_662(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (Global_1940258->f_34 == 0)
			{
				if (Global_1940258->f_35 != 0)
				{
					if (func_677(iParam0, Global_1940258->f_35))
					{
						func_678();
						*iParam3 = 2;
						func_662(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 10f)
			{
				if (func_679(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_680() - uParam2->f_10) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_678();
						*iParam3 = 2;
						func_662(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1940258->f_36 != 0)
			{
				if (func_681())
				{
					if (func_677(iParam0, Global_1940258->f_36))
					{
						func_678();
						*iParam3 = 2;
						func_662(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_682(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_662(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (func_683(uParam2, iParam0))
		{
			*iParam3 = 1048576;
			func_662(iParam0, uParam2, *iParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_684(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_662(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_685(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_662(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_686(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_662(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_687(uParam2, 4000))
				{
					if (func_688(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_662(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_689(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_5 = 0;
					func_662(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_690(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_662(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_523(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_691(iParam0, vVar0, iParam2);
}

bool func_524(int iParam0, int iParam1, int iParam2)
{
	if (!func_692(iParam0, iParam1, iParam2, 0))
	{
		return false;
	}
	func_693(&iVar4, iParam1->f_12);
	func_695(&(Local_1172.f_131.f_7[iParam0]), &uVar0, iParam1->f_3, func_694(iParam1), iParam1->f_9, iParam1->f_10, iParam1->f_11, 0, 0);
	return func_696(&iVar4, &uVar0);
}

bool func_525(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return false;
	}
	return func_508(&(Local_83[iVar0]->f_11), 0, iParam0);
}

bool func_526(int iParam0, int iParam1)
{
	if (is_bit_set(Local_1172.f_291.f_64, iParam0))
	{
		return false;
	}
	if (func_187(Local_1172.f_291.f_2, 256))
	{
		return false;
	}
	if (iParam1->f_2 < 0f || iParam1->f_2 > IntToFloat(func_697(&(Local_1172.f_291))))
	{
		return false;
	}
	return true;
}

bool func_527(int iParam0, int iParam1, int iParam2)
{
	if (!func_526(iParam0, iParam1))
	{
		return false;
	}
	if (Local_83[iParam2]->f_11.f_4 != 0 && get_time_difference(Local_83[iParam2]->f_11.f_4, get_network_time_accurate()) <= 3000)
	{
		return true;
	}
	return false;
}

bool func_528(int iParam0, int iParam1, bool bParam2)
{
	if (func_236() == 2)
	{
		return false;
	}
	if (func_649(iParam0) == 0)
	{
		if (func_266() < 2 || (func_266() == 2 && get_time_difference(Local_13.f_7.f_5, get_network_time_accurate()) <= 3000))
		{
			if (func_698(iParam1, 0, 0, 0, 0))
			{
				if ((Global_1940258->f_35 != 0 && is_entity_touching_entity(func_261(iParam0), Global_1940258->f_35)) && !has_entity_been_damaged_by_entity(func_261(iParam0), player_ped_id(), 1, 1))
				{
					return false;
				}
				func_699(20, Local_1172.f_4);
				func_327(524288);
				func_700(iParam1);
				return true;
			}
			else if ((iParam1 == 8 && func_266() == 1) && !func_260(16777216, 0))
			{
				func_327(16777216);
				return false;
			}
			else
			{
				return false;
			}
		}
		else
		{
			if (((!func_698(iParam1, 1, 1, 0, 0) && iParam1 != 1024) && iParam1 != 256) && !bParam2)
			{
				return false;
			}
			if (iParam1 == 256 && !func_557(iParam0, 40f, 255, 0))
			{
				return false;
			}
			if (iParam1 == 1024)
			{
				func_327(-2147483648);
			}
			func_699(20, Local_1172.f_4);
			func_327(524288);
			func_700(iParam1);
			return true;
		}
	}
	else if (func_649(iParam0) == 1)
	{
		func_699(20, Local_1172.f_4);
		if (func_658(iParam1))
		{
			func_327(2097152);
		}
		return false;
	}
	else if (func_649(iParam0) >= 3)
	{
		if ((func_653(func_649(iParam0)) && !func_698(iParam1, 0, 0, 0, 0)) || !func_134(8, 255))
		{
			return false;
		}
		func_645(iParam0);
		func_646(iParam0);
		func_327(8192);
	}
	return true;
}

bool func_529(int iParam0, int iParam1)
{
	if (!func_390(iParam1, 0))
	{
		if (!func_219(&iParam1))
		{
			return false;
		}
	}
	return func_508(&(Local_83[iParam1]->f_11), 2, iParam0);
}

bool func_530(int iParam0)
{
	iVar0 = func_649(iParam0);
	return true;
}

void func_531(int iParam0)
{
	iVar0 = func_261(iParam0);
	iVar1 = func_649(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	switch (iVar1)
	{
		case 0:
			if (((func_331() > 1 && !func_260(16384, 0)) && !is_entity_on_fire(iVar0)) && !_0x0de0944eccb3df5d(iVar0))
			{
				if (!is_ped_running_ragdoll_task(iVar0))
				{
					clear_ped_tasks(iVar0, 1, 0);
				}
				if (func_260(-2147483648, 0))
				{
					_task_smart_flee_style_coord(iVar0, Local_1172.f_15, 4, 12289, 5000f, -1, 0);
				}
				else
				{
					_task_smart_flee_style_coord(iVar0, Local_1172.f_15, 4, 12288, 5000f, -1, func_261(1));
				}
			}
			break;
		case 1:
			break;
	}
}

void func_532(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	func_510(&(Local_83[iVar0]->f_11), 2, iParam0);
}

bool func_533(int iParam0)
{
	_0x20f4cb76689acdbc(&uVar0);
	_0x64f765d9a1f8f02c(&uVar0, Local_1172.f_291.f_80[iParam0], &uVar0);
	return !_0x179a6f0ee2e79026(&uVar0);
}

bool func_534(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = int_to_participantindex(iParam0);
	if (!network_is_participant_active(*iParam1))
	{
		return false;
	}
	*iParam2 = network_get_player_index(*iParam1);
	if (!_network_is_player_index_valid(*iParam2))
	{
		return false;
	}
	*iParam3 = get_player_ped(*iParam2);
	if (!does_entity_exist(*iParam3))
	{
		return false;
	}
	if (is_entity_dead(*iParam3))
	{
		return false;
	}
	return true;
}

bool func_535(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	return _0x72b2e00c9bac6789(Local_1172.f_291.f_66[iParam0], iParam1);
}

bool func_536(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_261(iParam0);
	iVar1 = iParam0;
	if (!network_has_control_of_entity(iVar0))
	{
		return false;
	}
	if (iVar1 == 0)
	{
		_0x3923ec958249657d(iVar0, iParam3, -1082130432);
		func_446(16, 1808677283, 0, 0);
	}
	else if (iVar1 >= 3)
	{
		if (((_network_is_player_index_valid(iParam2) && !is_player_dead(iParam2)) && func_650(iParam3)) && func_521(iParam0, network_get_participant_index(iParam2)))
		{
			if (func_701(iVar1))
			{
				task_combat_ped(iVar0, iParam3, 16777216, 0);
			}
		}
		else if (!func_653(iVar1) && !func_702(iVar1))
		{
			iVar2 = func_703(iVar1, 40f);
			if (func_659(iVar2))
			{
				task_combat_ped(iVar0, get_player_ped(network_get_player_index(iVar2)), 16777216, 0);
			}
			else if (!func_704(0, 1) && func_564(iVar1, 0) < func_632(iVar1, iParam1, 1))
			{
				func_652(iVar1);
			}
			else if (func_650(iParam3))
			{
				task_combat_ped(iVar0, iParam3, 16777216, 0);
			}
		}
	}
	return true;
}

void func_537(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return;
	}
	if (!func_219(&iVar0))
	{
		return;
	}
	_0x31010318ba9897ac(Local_83[iVar0]->f_11.f_5[iParam0], iParam1);
}

float func_538()
{
	if (Local_1172.f_473.f_3 == 0)
	{
		Local_1172.f_473.f_3 = get_game_timer();
		return 0.03125f;
	}
	iVar0 = get_game_timer();
	fVar1 = (to_float((iVar0 - Local_1172.f_473.f_3)) * 0.001f);
	Local_1172.f_473.f_3 = iVar0;
	return fVar1;
}

bool func_539(int iParam0, bool bParam1)
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

bool func_540(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_705(vVar0, vParam0) > func_705(vVar0, get_entity_coords(iParam3, true, false));
}

int func_541(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, float fParam6, bool bParam7)
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
			else if (func_706(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_707(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_708() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_542(var uParam0, int iParam1, float fParam2)
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

void func_543(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_363(iParam2);
	if (!does_entity_exist(iVar0))
	{
		if (func_709(iParam2))
		{
			func_364(iParam2, 0);
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
		func_221(iParam2, *uParam0);
		func_710(*uParam1, *uParam0);
		*uParam1 = *uParam0;
	}
	func_711(iParam2);
	switch (uParam1->f_1)
	{
		case 0:
			if (!func_362(iParam2, 1))
			{
				return;
			}
			if (func_583(iParam2))
			{
				if (!func_709(iParam2))
				{
					func_712(iParam2);
				}
				if (func_362(iParam2, 16))
				{
					disable_control_action(0, -1292666904, false);
					disable_control_action(0, 578288361, false);
				}
				bVar3 = is_bit_set(Local_83[iVar1]->f_31, iParam2);
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (func_713(iParam2, iVar2, 16))
					{
						func_714(iParam2, iVar2, 1);
					}
					bVar4 = (func_713(iParam2, iVar2, 1) || bVar3);
					bVar5 = func_713(iParam2, iVar2, 8);
					bVar6 = (bVar4 || bVar5);
					if (!bVar6)
					{
						if (func_713(iParam2, iVar2, 4))
						{
							if (func_715() < Local_1172.f_514[iParam2]->f_6[iVar2]->f_7)
							{
								bVar6 = true;
							}
						}
					}
					if (bVar5)
					{
						func_585(iParam2, iVar2, 8);
					}
					if (!func_573(&(Local_1172.f_514[iParam2]->f_6[iVar2])))
					{
					}
					else if (func_716(&(Local_1172.f_514[iParam2]->f_6[iVar2]), 0))
					{
						if (bVar6)
						{
							func_586(&(Local_1172.f_514[iParam2]->f_6[iVar2]), 0, 1, 1);
						}
						else
						{
							if (!func_219(&iVar1))
							{
							}
							else
							{
								if (func_717(&(Local_1172.f_514[iParam2]->f_6[iVar2]), 1))
								{
									if (!func_718(iParam2, iVar2, func_220(iParam2)))
									{
										Jump @583; //curOff = 513
									}
									else
									{
										set_bit(&(Local_83[iVar1]->f_31), iParam2);
										func_122(&(Local_83[iVar1]->f_31.f_1), iParam2, iVar2);
									}
								}
								Jump @583; //curOff = 551
								if (!bVar6)
								{
									func_586(&(Local_1172.f_514[iParam2]->f_6[iVar2]), 1, 1, 1);
								}
							}
							iVar2++;
							Jump @611; //curOff = 592
							if (func_709(iParam2))
							{
								func_364(iParam2, 0);
							}
							Jump @924; //curOff = 611
							iVar2 = 0;
							while (iVar2 < 4)
							{
								if (!func_573(&(Local_1172.f_514[iParam2]->f_6[iVar2])))
								{
								}
								else if (func_716(&(Local_1172.f_514[iParam2]->f_6[iVar2]), 0))
								{
									func_586(&(Local_1172.f_514[iParam2]->f_6[iVar2]), 0, 1, 1);
								}
								iVar2++;
							}
							if (!is_bit_set(Local_83[iVar1]->f_31.f_2, iParam2))
							{
								func_719(iParam2, func_609(Local_13.f_50.f_19, iParam2));
								set_bit(&(Local_83[iVar1]->f_31.f_2), iParam2);
							}
							Jump @924; //curOff = 760
							iVar2 = 0;
							while (iVar2 < 4)
							{
								if (!func_573(&(Local_1172.f_514[iParam2]->f_6[iVar2])))
								{
								}
								else if (func_716(&(Local_1172.f_514[iParam2]->f_6[iVar2]), 0))
								{
									func_586(&(Local_1172.f_514[iParam2]->f_6[iVar2]), 0, 1, 1);
								}
								iVar2++;
							}
							if (is_bit_set(Local_83[iVar1]->f_31.f_2, iParam2))
							{
								clear_bit(&(Local_83[iVar1]->f_31.f_2), iParam2);
								clear_bit(&(Local_83[iVar1]->f_31), iParam2);
								func_122(&(Local_83[iVar1]->f_31.f_1), iParam2, 3);
							}
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_544()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

bool func_545(int iParam0)
{
	if (func_720(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_546(int iParam0)
{
	return func_721(iParam0);
}

struct<2> func_547(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_548(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_549()
{
	if (func_69(128))
	{
		return;
	}
	Var0 = { func_487(func_722(), -1892463704) };
	if (!_stat_id_is_valid(&Var0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&Var0, 1);
	func_149(128);
}

void func_550(bool bParam0)
{
	if (!func_69(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_69(256))
		{
			func_186(Local_1172.f_18, 0);
			func_149(256);
		}
	}
	func_149(16);
}

int func_551(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_723(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

int func_552(int iParam0, int iParam1)
{
	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_724(&Var4, 1356624740);
	return func_725(iParam0, &Var4, &uVar0, iParam1, 0);
}

void func_553(int iParam0, int iParam1)
{
	if (iParam0 <= 1)
	{
		func_309(80f);
	}
}

void func_554(var uParam0)
{
	Local_1172.f_19.f_1 = uParam0;
}

Vector3 func_555(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_556(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	iVar0 = func_261(iParam0);
	if (!does_entity_exist(iVar0) || (is_entity_dead(iVar0) && iParam10 == 1))
	{
		func_175(iParam0);
		return;
	}
	if (!func_726(iParam0))
	{
		if ((!bParam9 && vdist(get_entity_coords(iVar0, true, false), vParam1) <= fParam4) || (bParam9 && func_727(get_entity_coords(iVar0, true, false), vParam1) <= fParam4))
		{
			func_728(iParam0, iParam5, iParam6, iParam7, sParam8);
		}
	}
	else if ((!bParam9 && vdist(get_entity_coords(iVar0, true, false), vParam1) > fParam4) || (bParam9 && func_727(get_entity_coords(iVar0, true, false), vParam1) > fParam4))
	{
		func_175(iParam0);
	}
}

bool func_557(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (!func_390(iParam2, 0))
	{
		if (!func_219(&iParam2))
		{
			return false;
		}
	}
	fVar0 = &Local_83[iParam2]->f_2.f_2[iParam0];
	if (fVar0 <= 0f)
	{
		if (bParam3)
		{
			iVar1 = func_261(iParam0);
			if (does_entity_exist(iVar1))
			{
				iVar2 = network_get_player_index(int_to_participantindex(iParam2));
				if (_network_is_player_index_valid(iVar2))
				{
					fVar0 = vdist(get_entity_coords(iVar1, true, false), func_555(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					Local_83[iParam2]->f_2.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

void func_558(int iParam0)
{
	task_play_anim(func_261(0), func_466(0), func_476(iParam0), 2f, 2f, -1, 16, 0f, false, 0, false, 0, false);
}

void func_559()
{
	clear_sequence_task(&(Local_1172.f_19.f_110));
	_0x23767d80c7eed7c6(&(Local_1172.f_19.f_110), -1644571761);
	task_play_anim(0, func_466(1), func_476(6), 2f, 2f, -1, 8, 0f, false, 0, false, 0, false);
	task_play_upper_anim_facing_entity(0, func_466(1), func_476(7), get_player_ped(Local_13.f_7.f_3), -1, 1000f, -1.5f, 9, 0f, false, false, -1f, 0, 0, -1f);
	close_sequence_task(Local_1172.f_19.f_110);
}

bool func_560()
{
	iVar0 = func_261(1);
	if ((((!does_entity_exist(iVar0) || !_is_mount_seat_free(iVar0, -1)) || func_249(8192)) || _0x0de0944eccb3df5d(iVar0)) || is_entity_on_fire(iVar0))
	{
		return false;
	}
	return true;
}

void func_561(bool bParam0)
{
	iVar0 = func_261(0);
	iVar1 = func_261(1);
	iVar2 = 0;
	if (!bParam0)
	{
		iVar2 = 16384;
	}
	_0x931b241409216c1f(iVar0, iVar1, 0);
	if (!func_560())
	{
		_task_smart_flee_style_coord(iVar0, func_298(), 4, iVar2 | 1, 99999f, -1, 0);
	}
	else if (bParam0)
	{
		_task_smart_flee_style_coord(iVar0, func_298(), 4, iVar2, 99999f, -1, func_261(1));
	}
	else
	{
		task_follow_nav_mesh_to_coord(iVar0, get_entity_coords(iVar1, true, false), 1.5f, -1, 0.25f, 0, 40000f);
	}
	set_ped_keep_task(iVar0, true);
	func_327(256);
}

bool func_562()
{
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_ped_dead_or_dying(iVar0, true))
	{
		return false;
	}
	if (!_0xefc4303ddc6e60d3(iVar0))
	{
		return false;
	}
	iVar1 = _0xed1f514af4732258(iVar0);
	if (!does_entity_exist(iVar1))
	{
		return false;
	}
	if (is_ped_dead_or_dying(iVar1, true))
	{
		return false;
	}
	if (!_0x2d64376cf437363e(iVar1))
	{
		return false;
	}
	return true;
}

void func_563()
{
	iVar0 = func_261(0);
	clear_ped_tasks(iVar0, 1, 0);
	_task_smart_flee_style_coord(iVar0, func_298(), 4, 1, 99999f, -1, 0);
	set_ped_keep_task(iVar0, true);
}

float func_564(int iParam0, int iParam1)
{
	return vdist(func_729(iParam0), func_729(iParam1));
}

bool func_565()
{
	vVar6 = { 0f, 1f, 0f };
	_get_anim_scene_origin(Local_1172.f_19.f_105, &vVar0, &vVar3, 2);
	func_730(&vVar6, vVar3);
	vVar9 = { vVar0 + vVar6 };
	if (!_does_item_have_valid_base(Local_1172.f_19.f_109))
	{
		Local_1172.f_19.f_109 = create_itemset(true);
	}
	_0x20a4bf0e09bee146(Local_1172.f_19.f_109);
	iVar12 = _0x59b57c4b06531e1e(vVar9, 1.3f, Local_1172.f_19.f_109, 1);
	iVar13 = 0;
	while (iVar13 < iVar12)
	{
		iVar14 = get_indexed_item_in_itemset(iVar13, Local_1172.f_19.f_109);
		iVar15 = _get_entity_from_item(iVar14);
		if (is_entity_dead(iVar15))
		{
		}
		else if (iVar15 != func_731(func_261(0)) && !(is_entity_a_ped(iVar15) && is_ped_a_player(get_ped_index_from_entity_index(iVar15))))
		{
			return true;
		}
		iVar13++;
	}
	return false;
}

void func_566(int iParam0, int iParam1, bool bParam2)
{
	func_584(iParam0, iParam1, 8);
	if (bParam2 && func_583(iParam0))
	{
		func_586(&(Local_1172.f_514[iParam0]->f_6[iParam1]), 0, 1, 1);
	}
}

bool func_567()
{
	return (func_305(64) || func_326(4, -1, 1));
}

void func_568()
{
	if (func_260(536870912, 0))
	{
		return;
	}
	if (func_732() && !func_260(536870912, 0))
	{
		if (!network_has_control_of_entity(func_261(0)))
		{
			return;
		}
		clear_ped_tasks(func_261(0), 1, 0);
		if (!func_260(524288, 0))
		{
			func_446(15, -417894478, 0, 0);
			func_561(1);
		}
		func_327(131072);
		func_327(536870912);
		return;
	}
	if (!func_260(268435456, 0))
	{
		if (_network_has_control_of_anim_scene(Local_1172.f_19.f_105))
		{
			set_anim_scene_entity(Local_1172.f_19.f_105, "Victim", func_261(0), 0);
			set_anim_scene_entity(Local_1172.f_19.f_105, "NECKLACE", func_301(2), 0);
			func_327(268435456);
		}
		return;
	}
	if (Local_13.f_7.f_13.f_1 != 0)
	{
		func_733(&(Local_13.f_7.f_13), &(Local_1172.f_19.f_111), "player", "player", "PBL_TAKE_OFFER", 63, 768, 3000, 7000);
	}
	if ((Local_13.f_7.f_4 == player_id() && _0x3ab6c7b0bb0df4b1(player_ped_id(), Local_1172.f_19.f_105)) && !func_260(2048, 0))
	{
		detach_anim_scene_preserving_location(Local_1172.f_19.f_105);
		func_446(13, -417894478, 0, 0);
		func_327(4);
		func_327(131072);
		Local_1172.f_19.f_104 = get_network_time_accurate();
		func_327(2048);
	}
	if (_0xb89fcff19dafff28(Local_1172.f_19.f_105, "player"))
	{
		if (func_260(2048, 1) && !func_260(134217728, 1))
		{
			if (network_has_control_of_entity(func_301(2)))
			{
				set_entity_visible(func_301(2), false);
				set_entity_collision(func_301(2), false, false);
				func_327(134217728);
			}
		}
		if (((func_260(134217728, 1) && !func_260(256, 1)) && !func_445(0)) && network_has_control_of_entity(func_261(0)))
		{
			func_446(15, -417894478, 0, 0);
			func_561(0);
		}
	}
}

void func_569()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (((!does_entity_exist(func_261(iVar0)) || is_entity_dead(func_261(iVar0))) || get_ped_config_flag(func_261(iVar0), 580, true)) || func_260(8192, 0))
		{
			return;
		}
		if (!func_333(func_261(iVar0), -1389117756))
		{
			task_combat_animal_warn(func_261(iVar0), func_261(0), 0);
		}
		iVar0++;
	}
}

void func_570(int iParam0, bool bParam1)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	if (bParam1)
	{
		func_509(&(Local_83[iVar0]->f_11), 5, iParam0);
	}
	else
	{
		func_510(&(Local_83[iVar0]->f_11), 5, iParam0);
	}
}

bool func_571(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_734(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_735())
	{
		return func_734(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_734(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_572(int iParam0)
{
	return does_entity_exist(&(Local_1172.f_131.f_7[iParam0]));
}

bool func_573(int iParam0)
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

void func_574(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_573(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_736(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_737(iVar0);
	*uParam0 = 0;
}

int func_575(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_738(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_576(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_738(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_577(int iParam0)
{
	iVar0 = -1;
	if (func_386(&Var1, iParam0))
	{
		iVar0 = ((func_739() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_578(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_579(int iParam0, int iParam1)
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

void func_580(var uParam0)
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
	func_740(uParam0, uParam0->f_1);
}

void func_581(var uParam0, int iParam1, int iParam2)
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
		func_196(uParam0, iVar0);
		iVar0++;
	}
}

void func_582(int iParam0, int iParam1)
{
	func_243(&(Local_1172.f_514[iParam0]->f_5), iParam1);
}

bool func_583(int iParam0)
{
	if (Local_1172.f_514.f_237 == iParam0)
	{
		return true;
	}
	return false;
}

void func_584(int iParam0, int iParam1, int iParam2)
{
	func_243(&(Local_1172.f_514[iParam0]->f_6[iParam1]->f_1), iParam2);
}

void func_585(int iParam0, int iParam1, int iParam2)
{
	func_278(&(Local_1172.f_514[iParam0]->f_6[iParam1]->f_1), iParam2);
}

void func_586(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_573(iParam0))
	{
		return;
	}
	iVar0 = func_736(iParam0);
	if (bParam1)
	{
		func_741(iParam0, 4);
		if (bParam3)
		{
			func_742(iVar0, 1);
		}
		func_743(iVar0, 1);
	}
	else
	{
		func_744(iParam0, 4);
		func_743(iVar0, 0);
	}
}

void func_587(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_278(&(uParam0->f_2), 16384);
	}
	else
	{
		func_243(&(uParam0->f_2), 16384);
	}
}

void func_588(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_278(&(uParam0->f_2), 2048);
	}
	else
	{
		func_243(&(uParam0->f_2), 2048);
	}
}

void func_589(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_243(uParam0, 16);
	}
	else
	{
		func_278(uParam0, 67108864);
		func_278(uParam0, 16);
	}
}

void func_590(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_278(&(uParam0->f_2), 128);
	}
	else
	{
		func_243(&(uParam0->f_2), 128);
	}
}

void func_591(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_243(uParam0, 256);
	}
	else
	{
		func_278(uParam0, 256);
	}
}

void func_592(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_243(uParam0, 268435456);
	}
	else
	{
		func_278(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_243(uParam0, 1073741824);
	}
	else
	{
		func_278(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_243(uParam0, 536870912);
	}
	else
	{
		func_278(uParam0, 536870912);
	}
}

float func_593(var uParam0)
{
	return uParam0->f_26;
}

void func_594(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

void func_595(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_243(uParam0, 1);
	}
	else
	{
		func_278(uParam0, 1);
	}
}

void func_596(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_243(uParam0, 512);
	}
	else
	{
		func_278(uParam0, 512);
	}
}

void func_597(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_243(uParam0, 2);
	}
	else
	{
		func_278(uParam0, 2);
	}
}

void func_598(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_243(uParam0, 8);
	}
	else
	{
		func_278(uParam0, 8);
	}
}

void func_599(int iParam0, int iParam1)
{
	func_243(&(Local_1172.f_228[iParam0]->f_5[iParam1]->f_1), 16);
}

int func_600(int iParam0)
{
	return Local_1172.f_131.f_7[iParam0]->f_4;
}

bool func_601(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_606(iParam1))
	{
		return false;
	}
	iVar0 = func_745(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_602(int iParam0, bool bParam1)
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

bool func_603(int iParam0)
{
	return func_176(iParam0, 32);
}

bool func_604(int iParam0)
{
	return func_176(iParam0, 64);
}

bool func_605(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_606(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

bool func_607(int iParam0)
{
	return is_bit_set(Local_1172.f_514.f_236, iParam0);
}

bool func_608(int iParam0)
{
	return is_bit_set(Local_1172.f_514.f_235, iParam0);
}

int func_609(int iParam0, int iParam1)
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

int func_610(int iParam0, int iParam1, var uParam2)
{
	switch (func_392(uParam2))
	{
		case 0:
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

bool func_611(int iParam0)
{
	return func_134(8, iParam0);
}

bool func_612(int iParam0)
{
	return Local_13.f_50[iParam0]->f_2 > 0;
}

int func_613(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

void func_614(int iParam0)
{
	iVar0 = Global_1296859->f_21;
	Var1 = { func_487(iParam0, 1178968787) };
	if (!stat_id_set_int(&Var1, iVar0, true))
	{
	}
}

int func_615(int iParam0, int iParam1, int iParam2)
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

struct<2> func_616(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

bool func_617(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_738(Param0, &vVar0);
	if (func_746(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

struct<15> func_618(int iParam0)
{
	Var0.f_10 = 255;
	_copy_memory(&(Var0.f_4), &Local_1172, 5);
	Var0.f_9 = iParam0;
	Var0 = 182;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	return Var0;
}

void func_619(var uParam0)
{
	uVar0 = func_747(5, 117);
	_0xd426e2e3288469d6(&uVar0, player_id());
	func_748(uParam0, uVar0);
}

void func_620(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_261(0);
	if (!does_entity_exist(iVar0))
	{
	}
	else
	{
		stop_current_playing_speech(iVar0, 0);
		stop_current_playing_ambient_speech(iVar0, 0);
		if (iParam0 == 16)
		{
			func_749(1, 0, 0);
		}
	}
	if (func_632(0, 255, 1) <= 200f && iParam0 == 0)
	{
		func_750(-296154796, func_261(0), 1);
	}
	switch (func_228())
	{
		case 0:
			func_752(0, func_751(iParam0, iParam3), 0, iParam1, iParam2, 0);
			break;
		case 1:
			func_753(iParam0);
			break;
	}
}

int func_621(float fParam0)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (&Local_83[iVar0]->f_2.f_2[0] > -1f && &Local_83[iVar0]->f_2.f_2[0] < fParam0)
			{
				if (iVar1 == -1 || &Local_83[iVar0]->f_2.f_2[0] < &Local_83[iVar1]->f_2.f_2[0])
				{
					iVar1 = iVar0;
				}
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

void func_622(var uParam0, var uParam1, int iParam2)
{
	*uParam0 = uParam1;
	uParam0->f_1 = _anim_scene_to_net(iParam2);
}

int func_623(var uParam0, char* sParam1, var uParam2)
{
	*uParam2 = 0;
	if (!network_is_player_active(*uParam0))
	{
		*uParam2 = 1;
		return 1;
	}
	iVar0 = _net_to_anim_scene(uParam0->f_1);
	if (!_does_anim_scene_exist(iVar0))
	{
		*uParam2 = 1;
		return 1;
	}
	if (_is_anim_scene_finished(iVar0, false))
	{
		*uParam2 = 1;
		return 1;
	}
	if (!_0x1f0e401031e20146(iVar0, sParam1) || !_is_anim_scene_started(iVar0, false))
	{
		return 0;
	}
	iVar1 = get_player_ped(*uParam0);
	if (does_entity_exist(iVar1))
	{
		if (!_0x3ab6c7b0bb0df4b1(iVar1, iVar0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_624()
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

int func_625(int iParam0, int iParam1)
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

void func_626(var uParam0, var uParam1)
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

void func_627(int iParam0, float fParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		fParam1 = func_754(fParam1, 0f, 1f);
		iVar0 = floor((fParam1 * IntToFloat(get_entity_max_health(iParam0, bParam2))));
		_set_entity_health(iParam0, iVar0, 0);
	}
}

char* func_628(int iParam0)
{
	return Local_1172.f_131.f_7[iParam0]->f_10;
}

void func_629(int iParam0, char* sParam1, bool bParam2)
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

void func_630(int iParam0)
{
}

bool func_631(var uParam0, int iParam1, char* sParam2)
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (are_strings_equal(sParam2, &((*uParam0)[iVar1]->f_1)))
		{
			(*uParam0)[iVar1] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97] = iParam1;
			StringCopy(&((*uParam0)[uParam0->f_97]->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

float func_632(int iParam0, int iParam1, bool bParam2)
{
	if (!func_390(iParam1, 0))
	{
		if (!func_219(&iParam1))
		{
			return 0f;
		}
	}
	if (bParam2)
	{
		if (&Local_83[iParam1]->f_2.f_2[iParam0] < 0f)
		{
			return 0f;
		}
	}
	return &(Local_83[iParam1]->f_2.f_2[iParam0]);
}

int func_633(int iParam0)
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

void func_634(int iParam0)
{
	if (!func_484(func_483(iParam0), Local_1172.f_291.f_91[iParam0]))
	{
		clear_bit(&(Local_1172.f_291.f_170), iParam0);
		return;
	}
	set_bit(&(Local_1172.f_291.f_170), iParam0);
}

int func_635(int iParam0, int iParam1)
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

void func_636()
{
	if (Local_1172.f_514.f_237 < 0)
	{
		return;
	}
	func_364(func_181(Local_1172.f_514.f_237), 0);
	Local_1172.f_514.f_237 = -1;
	func_755(func_181(Local_1172.f_514.f_237));
}

bool func_637(int iParam0, int iParam1)
{
	iVar0 = func_363(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (iParam1 == iVar0)
	{
		if (Local_1172.f_514.f_237 != iParam0)
		{
			func_636();
			func_712(iParam0);
			Local_1172.f_514.f_237 = iParam0;
			func_756(iParam0);
		}
		return true;
	}
	return false;
}

int func_638(var uParam0, var uParam1, int iParam2)
{
	if (!func_406(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_407(Var0.f_2, 10);
		(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] || uParam1[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_407(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] || uParam1[Var0]) && iVar4));
	iVar4 = func_407(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = ((uParam0[Var0.f_1] && iVar4 ^ -1) || ((uParam0[Var0.f_1] || uParam1[Var0.f_1]) && iVar4));
	return 1;
}

int func_639(var uParam0, var uParam1, int iParam2)
{
	if (!func_406(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_407(Var0.f_2, 10);
		(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] && uParam1[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_407(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] && uParam1[Var0]) && iVar4));
	iVar4 = func_407(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = ((uParam0[Var0.f_1] && iVar4 ^ -1) || ((uParam0[Var0.f_1] && uParam1[Var0.f_1]) && iVar4));
	return 1;
}

void func_640(int iParam0, int iParam1)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	if (func_508(&(Local_83[iParam1]->f_11), 1, iParam0))
	{
		if (&Local_83[iParam1]->f_11.f_12[iParam0] == 0)
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
		if (&Local_13.f_35.f_8[iParam0] == 0 || is_time_more_than(&(Local_83[iParam1]->f_11.f_12[iParam0]), &(Local_13.f_35.f_8[iParam0])))
		{
			Local_13.f_35.f_1[iParam0] = iVar0;
			Local_13.f_35.f_8[iParam0] = &Local_83[iParam1]->f_11.f_12[iParam0];
		}
	}
}

void func_641(int iParam0)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	iVar1 = 255;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Local_13.f_50[iVar0]->f_2 != 0)
		{
		}
		else if (network_is_player_active(Local_13.f_50[iVar0]->f_1))
		{
		}
		else if (!is_bit_set(Local_83[iParam0]->f_31, iVar0))
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
				Local_13.f_50[iVar0]->f_1 = iVar1;
				func_122(&(Local_13.f_50.f_19), iVar0, func_609(Local_83[iParam0]->f_31.f_1, iVar0));
			}
		}
		iVar0++;
	}
}

void func_642(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_708() - fParam1);
	func_757(uParam0, 1);
	func_758(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_643(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_644(var uParam0)
{
	if (!func_497(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_759(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_708() - uParam0->f_1);
}

void func_645(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	func_510(&(Local_83[iVar0]->f_11), 3, iParam0);
}

void func_646(int iParam0)
{
	if (0 != iParam0)
	{
		if (1 != iParam0)
		{
			func_651(iParam0);
		}
	}
}

bool func_647(int iParam0)
{
	return func_508(&(Local_1172.f_291.f_87), 7, iParam0);
}

bool func_648(int iParam0, var uParam1, var uParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam1->f_6)
	{
		func_660(uParam1, 0, iVar0);
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
				if (func_673(uParam1, 4000))
				{
					if ((func_674(iParam0, Global_1940258->f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_675(uParam1, iParam0)) && func_676(uParam1, iParam0))
					{
						func_678();
						*uParam2 = 2;
						func_662(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 2 != 0)
		{
			if (uParam1->f_13 < 4f)
			{
				if (func_673(uParam1, 4000))
				{
					if ((func_674(iParam0, Global_1940258->f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_675(uParam1, iParam0)) && func_676(uParam1, iParam0))
					{
						func_678();
						*uParam2 = 2;
						func_662(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940258->f_35 != 0)
			{
				if (Global_1940258->f_34 == 0)
				{
					if (func_677(iParam0, Global_1940258->f_35))
					{
						func_678();
						*uParam2 = 2;
						func_662(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940258->f_36 != 0)
			{
				if (func_681())
				{
					if (func_677(iParam0, Global_1940258->f_36))
					{
						func_678();
						*uParam2 = 2;
						func_662(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940258->f_19)
		{
			if (func_667(uParam1, 1065353216))
			{
				if (!uParam1->f_2 & 4 != 0)
				{
					if (func_668(Global_34, iParam0, uParam1))
					{
						func_678();
						*uParam2 = 4;
						func_662(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_2 & 256 != 0)
				{
					if (func_669(Global_34, iParam0, uParam1))
					{
						func_678();
						*uParam2 = 256;
						func_662(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 131072 != 0)
		{
			if (func_760(iParam0, uParam1))
			{
				func_678();
				*uParam2 = 131072;
				func_662(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_761(iParam0, uParam1))
			{
				func_678();
				*uParam2 = 262144;
				func_662(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

int func_649(int iParam0)
{
	return iParam0;
}

bool func_650(int iParam0)
{
	if ((((_is_ped_hogtied(iParam0) || _0xd453bb601d4a606e(iParam0)) || _0xef3a8772f085b4aa(iParam0)) || _is_ped_lassoed(iParam0)) || is_ped_in_any_vehicle(iParam0, false))
	{
		return false;
	}
	return true;
}

void func_651(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	func_510(&(Local_83[iVar0]->f_11), 4, iParam0);
}

void func_652(int iParam0)
{
	if (func_331() > 1 || func_564(iParam0, 0) > 7f)
	{
		task_combat_ped(func_261(iParam0), func_261(0), 16777216, 0);
	}
	else
	{
		task_combat_animal_warn(func_261(iParam0), func_261(0), 0);
	}
}

bool func_653(int iParam0)
{
	iVar0 = func_451();
	if (iVar0 < 2 && iVar0 > -1)
	{
		return false;
	}
	if (func_452(iParam0))
	{
		return false;
	}
	if (func_762(2))
	{
		return false;
	}
	if (!func_763(iParam0))
	{
		switch (iParam0)
		{
			case 3:
				return true;
			default:
				return false;
		}
	}
	return false;
}

int func_654(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	iVar0 = func_764(iParam0, fParam1, bParam2, bParam3);
	if (_network_is_player_index_valid(iVar0))
	{
		return network_get_participant_index(iVar0);
	}
	return 255;
}

Vector3 func_655(int iParam0)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	get_model_dimensions(get_entity_model(iParam0), &vVar3, &vVar6);
	fVar9 = absf(((vVar6.z - vVar3.z) * 0.5f));
	vVar0.f_2 = (vVar0.z - fVar9);
	return vVar0;
}

bool func_656(int iParam0, int iParam1, bool bParam2)
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

bool func_657(int iParam0, int iParam1)
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

bool func_658(int iParam0)
{
	iVar0 = func_261(1);
	switch (iParam0)
	{
		case 1:
			func_464(-1783181138, 0, 0);
			return true;
		case 2:
			if (func_657(player_ped_id(), &iVar0))
			{
				if (!func_326(4194304, -1, 1))
				{
					func_464(1250422342, 0, 0);
					func_327(4194304);
					func_446(16, 1808677283, 0, 0);
					return true;
				}
			}
			else if (!func_326(8388608, -1, 1))
			{
				func_464(-1598949067, 0, 0);
				func_327(8388608);
				if (func_266() < 2 || (func_266() == 2 && get_time_difference(Local_13.f_7.f_5, get_network_time_accurate()) <= 3000))
				{
					func_446(16, 1808677283, 0, 0);
				}
				return true;
			}
			break;
		case 1024:
			if (!func_326(4194304, -1, 1))
			{
				func_464(1250422342, 0, 0);
				func_327(4194304);
				if (func_266() < 2 || (func_266() == 2 && get_time_difference(Local_13.f_7.f_5, get_network_time_accurate()) <= 3000))
				{
					func_446(16, 1808677283, 0, 0);
				}
				return true;
			}
			break;
	}
	return false;
}

bool func_659(int iParam0)
{
	if (iParam0 == 255)
	{
		return false;
	}
	return network_is_participant_active(iParam0);
}

void func_660(var uParam0, bool bParam1, int iParam2)
{
	func_765(iParam2);
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
		uParam0->f_14 = func_766(0);
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
							func_243(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_767(1, 1))
						{
							func_243(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_34) && (!func_767(1, 1) || *uParam0 & 8192 != 0))
				{
					func_278(uParam0, 33554432);
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
			if (func_768(uParam0))
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
	func_769(uParam0);
}

bool func_661(int iParam0, var uParam1)
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
			if (!func_770(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_771(iParam0, iVar2) <= func_772(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_662(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_698(iParam2, 1, 1, 1, 0))
	{
		func_243(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_773(uParam1, 1);
	func_774();
}

bool func_663(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_775(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_776(uParam1);
			if (func_777(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_3);
				iVar3 = func_778(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_773(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_779(uParam1))
						{
							func_773(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_664(int iParam0, int iParam1, var uParam2)
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
	if (func_780(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_776(uParam2);
		if (func_777(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = get_game_timer();
			}
			if (uParam2->f_3 != 0)
			{
				if (get_game_timer() - uParam2->f_3) > func_778(uParam2)
				{
					func_773(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_665(int iParam0, var uParam1)
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
	if (func_770(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_4) > func_778(uParam1)
		{
			fVar3 = func_776(uParam1);
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

int func_666(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_781(bParam1, bParam2, bParam3);
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

bool func_667(var uParam0, float fParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_680();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_668(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_782(uParam2);
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
			if (func_676(uParam2, iParam1))
			{
				func_773(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_669(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_13 < IntToFloat(func_697(uParam2)))
	{
		if ((is_weapon_valid(Global_1940258->f_40) && !_0x5809dbca0a37c82b(Global_1940258->f_40)) || get_current_ped_vehicle_weapon(Global_34, &uVar0))
		{
			if (func_676(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_773(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_670(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_783(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_24))
				{
					func_773(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_30))
				{
					func_773(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_29, &vVar4, 0, 0);
					if (func_784(iParam1, vVar0, vVar4))
					{
						func_773(uParam2, 1);
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
					func_773(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_29, &vVar7, 0, 0);
					if (func_784(iParam1, vVar0, vVar7))
					{
						func_773(uParam2, 1);
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

bool func_671(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1940258->f_33)
	{
		if (!func_770(iParam0, uParam1, &(Global_1940258->f_28[iVar0])) || iParam0 == &Global_1940258->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_785(&(Global_1940258->f_28[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false), vVar9);
			if (func_786(&(Global_1940258->f_28[iVar0])))
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
			if (func_787(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_788(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_789(uParam1, iParam0, fVar1, iVar0))
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

bool func_672(int iParam0, var uParam1)
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

bool func_673(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_680();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_674(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_657(iVar0, &iVar2))
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
	if (func_790(iVar0, iParam0))
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

int func_675(var uParam0, int iParam1)
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

bool func_676(var uParam0, int iParam1)
{
	if (func_791(uParam0))
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

bool func_677(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_792(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_678()
{
}

bool func_679(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_34);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_793(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_680();
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
						if (func_794(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_10 = func_680();
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

int func_680()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_681()
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
	if ((func_680() - Global_1940258->f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_682(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_15))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_772(uParam0);
	if (uParam0->f_13 > func_593(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_795(iParam1);
	iVar1 = func_796(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || _0x9d9473cb82d83a30(iParam1, Global_34, 0) == 1) || _0x9d9473cb82d83a30(iParam1, uParam0->f_15, 0) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_683(var uParam0, int iParam1)
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
	if (func_523(iVar0, iParam1, 1060437492) != 0)
	{
		return false;
	}
	vVar1 = { get_entity_coords(iParam1, true, false) };
	vVar4 = { get_entity_coords(iVar0, true, false) };
	fVar7 = func_727(vVar1, vVar4);
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

int func_684(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_13 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_797(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_685(int iParam0, var uParam1)
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
		if (func_798(iParam0, uParam1, 1))
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
	if (!func_518(iParam0))
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
			if (func_799(uParam1))
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
					if (!func_800(uParam1, iParam0))
					{
						if (func_794(iVar4, Global_35, 1) < 7f)
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

bool func_686(int iParam0, var uParam1)
{
	if (!func_801(0))
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

bool func_687(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_680();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_688(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_689(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_680();
	}
	else if (func_680() - uParam1->f_5) > func_802(uParam1)
	{
		return func_803(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_690(var uParam0, int iParam1)
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

int func_691(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_804(vVar3, vVar6);
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
	if (func_805(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_692(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_187(Local_1172.f_291.f_2, 4))
	{
		return false;
	}
	if (!is_bit_set(Local_1172.f_291.f_65, iParam0))
	{
		return false;
	}
	clear_bit(&(Local_1172.f_291.f_65), iParam0);
	if (!bParam3 && Local_83[iParam2]->f_11.f_4 == 0)
	{
		return false;
	}
	if (!bParam3 && get_time_difference(Local_83[iParam2]->f_11.f_4, get_network_time_accurate()) > 750)
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
	iVar0 = func_806(player_ped_id(), 0, 1, 0);
	if (!is_weapon_valid(iVar0) || !((_0x705be297eebdb95d(iVar0) || func_807(iVar0)) || _is_weapon_throwable(iVar0)))
	{
		return false;
	}
	if (_0x79b1a6e780266db0(player_ped_id()) < iParam1->f_2)
	{
		return false;
	}
	return true;
}

void func_693(int* iParam0, var uParam1)
{
	get_screen_resolution(iParam0, &(iParam0->f_1));
	*iParam0 = (*iParam0 / 2);
	iParam0->f_1 = (iParam0->f_1 / 2);
	iParam0->f_2 = uParam1;
}

Vector3 func_694(int iParam0)
{
	return iParam0->f_6, iParam0->f_7, iParam0->f_8;
}

int func_695(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12)
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
		vVar7.x = ((func_808(iParam0) * 0.5f) + vParam5.x);
		vVar7.f_1 = ((func_809(iParam0) * 0.5f) + vParam5.y);
		vVar7.f_2 = ((func_810(iParam0) * 0.5f) + vParam5.z);
	}
	vVar10 = { func_431(func_811(get_rendering_cam())) };
	vVar13 = { func_812(vVar10, 0f, 0f, 1f) };
	vVar16 = { func_812(vVar13, vVar10) };
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
			uParam1->f_2 = (iParam9 + floor((func_813((!bVar43 || vVar25.x < vVar31.x), vVar25.x, vVar31.x) - vVar22.x)));
		}
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			return 0;
		}
		if (bVar42)
		{
			uParam1->f_3 = (iParam10 + floor((func_813((!bVar43 || vVar28.y > vVar31.y), vVar28.y, vVar31.y) - vVar22.y)));
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
			uParam1->f_3 = (iParam10 + floor((func_813(vVar28.y > vVar31.y, vVar28.y, vVar31.y) - vVar25.y)));
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
		uParam1->f_2 = (iParam9 + floor(func_813((!bVar43 || vVar25.x > vVar31.x), vVar25.x, vVar31.x)));
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

int func_696(int iParam0, var uParam1)
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

int func_697(var uParam0)
{
	return uParam0->f_23;
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

void func_699(int iParam0, int iParam1)
{
	if (!func_814(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_815(iParam1);
	func_816(iVar0, iParam0);
}

void func_700(int iParam0)
{
	if (!func_326(1048576, -1, 1))
	{
		if ((is_entity_dead(func_261(0)) && func_355(0, player_ped_id(), 0)) || is_entity_on_fire(func_261(0)))
		{
			func_120(8);
			func_356();
		}
		else if (iParam0 != 1024)
		{
			func_464(-1315007749, 0, 0);
		}
		func_327(1048576);
	}
}

bool func_701(int iParam0)
{
	iVar0 = func_817(func_261(iParam0));
	if (!_network_is_player_index_valid(iVar0))
	{
		return true;
	}
	if (iVar0 == player_id())
	{
		return true;
	}
	if (!func_659(network_get_participant_index(iVar0)))
	{
		return true;
	}
	if (get_ped_index_from_entity_index(_0xcd66fea29400a0b5(func_261(iParam0))) == func_261(0) || func_333(func_261(iParam0), -1389117756))
	{
		return true;
	}
	if (func_632(iParam0, network_get_participant_index(iVar0), 1) > func_632(iParam0, 255, 1))
	{
		return true;
	}
	return false;
}

bool func_702(int iParam0)
{
	if (is_ped_in_combat(func_261(iParam0), 0))
	{
		if (is_ped_in_combat(func_261(iParam0), func_261(0)))
		{
			return false;
		}
		return true;
	}
	return false;
}

int func_703(int iParam0, float fParam1)
{
	if (!does_entity_exist(&(Local_1172.f_131.f_7[iParam0])))
	{
		return 255;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (&Local_83[iVar0]->f_2.f_2[iParam0] > -1f)
			{
				if (iVar1 == -1 || &Local_83[iVar0]->f_2.f_2[iParam0] < &Local_83[iVar1]->f_2.f_2[iParam0])
				{
					if (&Local_83[iVar0]->f_2.f_2[iParam0] <= fParam1 && func_650(get_player_ped(network_get_player_index(int_to_participantindex(iVar1)))))
					{
						iVar1 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 32)
	{
		iVar2 = network_get_player_index(int_to_participantindex(iVar1));
		if (_network_is_player_index_valid(iVar2))
		{
			return network_get_participant_index(iVar2);
		}
	}
	return 255;
}

bool func_704(int iParam0, bool bParam1)
{
	if (!bParam1 || func_572(iParam0))
	{
		return is_entity_dead(&(Local_1172.f_131.f_7[iParam0]));
	}
	return false;
}

float func_705(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_706(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_707(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_706(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_708() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

float func_708()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_709(int iParam0)
{
	if (func_362(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_710(var uParam0, var uParam1)
{
}

void func_711(int iParam0)
{
	iVar0 = func_363(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!func_262(iParam0))
	{
		func_182(iParam0, 0);
		return;
	}
	else if (func_362(iParam0, 8))
	{
		func_182(iParam0, 0);
	}
	bVar1 = vdist(get_entity_coords(iVar0, true, false), func_555(player_id())) <= Local_1172.f_514[iParam0]->f_2;
	if (bVar1 != func_362(iParam0, 1))
	{
		func_182(iParam0, 0);
		if (bVar1)
		{
			if (!_0x870708a6e147a9ad(iVar0, Local_1172.f_514[iParam0]->f_3, Local_1172.f_514[iParam0]->f_2, 0, Local_1172.f_514[iParam0]->f_4, 0, 0, 0, 0, 3))
			{
			}
			else
			{
				if (func_583(iParam0))
				{
					func_712(iParam0);
				}
				if (!_0x375f5870a7b8bec1(Local_1172.f_514[iParam0]->f_3))
				{
					_0xfca8fb9e15fa80d3(iVar0, get_hash_key(Local_1172.f_514[iParam0]->f_3));
				}
				if (network_has_control_of_entity(iVar0))
				{
					set_ped_config_flag(iVar0, 130, true);
					set_ped_config_flag(iVar0, 178, false);
					set_ped_config_flag(iVar0, 297, true);
					set_ped_config_flag(iVar0, 315, true);
					set_ped_config_flag(iVar0, 301, false);
				}
				func_582(iParam0, 1);
			}
		}
	}
}

void func_712(int iParam0)
{
	if (func_709(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_714(iParam0, iVar0, 1);
		iVar0++;
	}
	func_582(iParam0, 2);
}

bool func_713(int iParam0, int iParam1, int iParam2)
{
	return func_187(Local_1172.f_514[iParam0]->f_6[iParam1]->f_1, iParam2);
}

void func_714(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_574(Local_1172.f_514[iParam0]->f_6[iParam1], 1, 1);
	}
	if (_0x375f5870a7b8bec1(Local_1172.f_514[iParam0]->f_6[iParam1]->f_2))
	{
		return;
	}
	if (Local_1172.f_514[iParam0]->f_6[iParam1]->f_3 == 0)
	{
	}
	iVar0 = func_363(iParam0);
	iVar1 = func_818(Local_1172.f_514[iParam0]->f_6[iParam1]->f_2, Local_1172.f_514[iParam0]->f_6[iParam1]->f_3, iVar0, Local_1172.f_514[iParam0]->f_6[iParam1]->f_4, Local_1172.f_514[iParam0]->f_6[iParam1]->f_5, 0, 0, Local_1172.f_514[iParam0]->f_6[iParam1]->f_6, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
	iVar2 = func_736(iVar1);
	func_819(iVar1, 18, 0, 1);
	func_819(iVar1, 17, 0, 1);
	_uiprompt_set_group((*Global_1951255)[iVar2]->f_3, _uiprompt_get_group_id_for_target_entity(iVar0), 0);
	if (func_713(iParam0, iParam1, 2))
	{
		func_820(iVar1, Local_1172.f_514[iParam0]->f_6[iParam1]->f_2, Local_1172.f_514[iParam0]->f_6[iParam1]->f_7, 1);
	}
	if (!func_713(iParam0, iParam1, 1))
	{
		if (func_713(iParam0, iParam1, 4))
		{
			if (func_715() < Local_1172.f_514[iParam0]->f_6[iParam1]->f_7)
			{
				if (func_716(&(Local_1172.f_514[iParam0]->f_6[iParam1]), 0))
				{
					func_586(&(Local_1172.f_514[iParam0]->f_6[iParam1]), 0, 1, 1);
				}
			}
			else if (!func_716(&(Local_1172.f_514[iParam0]->f_6[iParam1]), 0))
			{
				func_586(&(Local_1172.f_514[iParam0]->f_6[iParam1]), 1, 1, 1);
			}
		}
	}
	else
	{
		func_586(iVar1, 0, 1, 1);
	}
	func_585(iParam0, iParam1, 16);
	Local_1172.f_514[iParam0]->f_6[iParam1] = iVar1;
}

int func_715()
{
	if (func_28() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

bool func_716(int iParam0, bool bParam1)
{
	if (bParam1 && !func_573(iParam0))
	{
		return false;
	}
	return !func_821(iParam0, 4);
}

bool func_717(int iParam0, bool bParam1)
{
	if (bParam1 && !func_573(iParam0))
	{
		return false;
	}
	iVar0 = func_736(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

bool func_718(int iParam0, int iParam1, var uParam2)
{
	return true;
}

void func_719(int iParam0, int iParam1)
{
	func_822(0, 1);
	switch (func_392(func_220(iParam0)))
	{
		case 1:
			if (func_449(iParam0) == player_id())
			{
				switch (iParam1)
				{
					case 1:
						if (_0xa24c1d341c6e0d53(1, 0, 0))
						{
							func_823(0, 0, 772373429, 1, 1, 0, 0);
						}
						else
						{
							func_823(0, 0, -653113914, 1, 1, 0, 0);
						}
						break;
				}
			}
			if (network_is_host_of_this_script())
			{
				Local_13.f_7.f_12 = iParam1;
				func_327(67108864);
			}
			break;
	}
}

bool func_720(int iParam0, var uParam1, var uParam2, bool bParam3)
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

int func_721(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= network_get_max_num_participants())
	{
		return 0;
	}
	return 1;
}

int func_722()
{
	return Local_1172.f_1;
}

int func_723(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (_0xd6f6acf4392187fb(_0x901e0dc25080c8b9(player_id())) && _0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())));
		bParam7 = bVar0;
	}
	_0xc08aff658b2e51da(&iVar1);
	if (iVar1 != 0)
	{
		func_824(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!_0x64a36ba85ce01a81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!_0x7a8e8df782b47eb0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_825(uParam1, iParam0, Var3);
	return 1;
}

void func_724(var uParam0, int iParam1)
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

int func_725(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_826(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_827(uParam2, iParam0, Var1);
	return 1;
}

bool func_726(int iParam0)
{
	return does_blip_exist(Local_1172.f_131.f_7[iParam0]->f_1);
}

float func_727(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

void func_728(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	func_175(iParam0);
	if (!does_entity_exist(&(Local_1172.f_131.f_7[iParam0])))
	{
		return;
	}
	iVar0 = _blip_add_for_entity(iParam1, &(Local_1172.f_131.f_7[iParam0]));
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
	Local_1172.f_131.f_7[iParam0]->f_1 = iVar0;
}

Vector3 func_729(int iParam0)
{
	return get_entity_coords(&(Local_1172.f_131.f_7[iParam0]), true, false);
}

void func_730(var uParam0, vector3 vParam1)
{
	fVar0 = cos(vParam1.x);
	fVar1 = sin(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = cos(vParam1.y);
	fVar1 = sin(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.f_1 = uParam0->f_1;
	vVar2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = cos(vParam1.z);
	fVar1 = sin(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.f_2 = uParam0->f_2;
	*uParam0 = { vVar2 };
}

int func_731(int iParam0)
{
	return iParam0;
}

bool func_732()
{
	if (network_is_host_of_this_script() && (!_network_is_player_index_valid(Local_13.f_7.f_4) || !network_is_player_active(Local_13.f_7.f_4)))
	{
		return true;
	}
	if (func_249(4096) || func_828(&(Local_1172.f_19.f_111)))
	{
		return true;
	}
	return false;
}

void func_733(var uParam0, var uParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (func_187(*uParam1, 2))
	{
		return;
	}
	if (!network_is_player_active(*uParam0))
	{
		return;
	}
	iVar0 = _net_to_anim_scene(uParam0->f_1);
	if (!_does_anim_scene_exist(iVar0))
	{
		return;
	}
	if (_is_anim_scene_finished(iVar0, false))
	{
		return;
	}
	iVar1 = get_player_ped(*uParam0);
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if (_0x3ab6c7b0bb0df4b1(iVar1, iVar0))
	{
		return;
	}
	bVar2 = false;
	if (!func_829(iVar0, sParam4, 0))
	{
	}
	else
	{
		bVar2 = true;
	}
	bVar3 = func_187(iParam5, 64);
	if (*uParam0 != player_id())
	{
		if (!bVar3)
		{
		}
		else if (bVar2)
		{
			if (!_network_has_control_of_anim_scene(iVar0))
			{
				return;
			}
			sVar4 = func_830(is_ped_male(iVar1), sParam2, sParam3);
			if (!_0x337f1cc8ee895601(iVar0, sVar4))
			{
			}
			else
			{
				set_anim_scene_entity(iVar0, sVar4, iVar1, 0);
				_set_anim_scene_playback_list_bool(iVar0, sParam4, true);
				if (!_is_anim_scene_started(iVar0, false))
				{
					start_anim_scene(iVar0);
				}
			}
		}
	}
	else if (func_831(iVar1))
	{
		if (func_187(*uParam1, 1))
		{
			clear_ped_tasks(iVar1, 1, 0);
		}
		func_243(uParam1, 2);
	}
	else
	{
		if (!bVar3)
		{
			_network_request_control_of_anim_scene(iVar0);
		}
		if (bVar2)
		{
			if (_network_has_control_of_anim_scene(iVar0))
			{
				if (func_187(*uParam1, 1))
				{
					sVar5 = func_830(is_ped_male(iVar1), sParam2, sParam3);
					if (!_0x337f1cc8ee895601(iVar0, sVar5))
					{
					}
					else
					{
						set_anim_scene_entity(iVar0, sVar5, iVar1, 0);
						_set_anim_scene_playback_list_bool(iVar0, sParam4, true);
						if (!_is_anim_scene_started(iVar0, false))
						{
							start_anim_scene(iVar0);
						}
					}
				}
			}
		}
		disable_control_action(0, -950261840, false);
		disable_control_action(0, 1287709438, false);
		disable_control_action(0, 130948705, false);
		disable_control_action(0, -1304887797, false);
		func_832(250);
		if (func_187(iParam5, 4) && (func_806(iVar1, 0, 1, 0) != -1569615261 || func_806(iVar1, 1, 1, 0) != -1569615261))
		{
			if (func_833(iVar1, 716706914, 0, 0))
			{
				set_current_ped_weapon(iVar1, -1569615261, false, 0, false, false);
				set_current_ped_weapon(iVar1, -1569615261, false, 1, false, false);
				task_swap_weapon(iVar1, 1, 0, 0, 0);
			}
		}
		else if (func_187(iParam5, 1) && _is_ped_getting_into_a_mount_seat(iVar1, true))
		{
			if (_is_ped_getting_into_a_mount_seat(iVar1, false))
			{
				if (func_833(iVar1, 501393341, 0, 0))
				{
					task_dismount_animal(iVar1, 0, 0, 0, 0, 0);
				}
			}
		}
		else if (func_187(iParam5, 2) && is_ped_in_any_vehicle(iVar1, true))
		{
			if (is_ped_in_any_vehicle(iVar1, false))
			{
				if (func_833(iVar1, -828834893, 0, 0))
				{
					task_leave_any_vehicle(iVar1, 0, 0);
				}
			}
		}
		else if (func_187(iParam5, 8) && get_ped_stealth_movement(iVar1))
		{
			set_ped_stealth_movement(iVar1, 0, 0, 0);
		}
		else if (func_187(iParam5, 16) && _get_ped_crouch_movement(iVar1))
		{
			_set_ped_crouch_movement(iVar1, false, 0, false);
		}
		else if (func_187(iParam5, 32) && _is_ped_carrying(iVar1))
		{
			if (func_833(iVar1, -208384378, 0, 0))
			{
				iVar6 = _get_first_entity_ped_is_carrying(iVar1);
				task_place_carried_entity_at_coord(iVar1, iVar6, 0f, 0f, 0f, 1f, 1);
			}
		}
		else if (bVar2)
		{
			iVar7 = 1369124074;
			if (!bVar3)
			{
				iVar7 = 242628503;
			}
			if (func_833(iVar1, iVar7, 0, 0))
			{
				if (func_187(*uParam1, 1))
				{
					if (!func_187(*uParam1, 4))
					{
						func_243(uParam1, 2);
					}
					else if (!bVar3)
					{
						func_243(uParam1, 2);
					}
				}
				else
				{
					if (bVar3)
					{
						iParam6 |= 8;
					}
					if (!bVar3)
					{
						open_sequence_task(&iVar8);
					}
					task_enter_anim_scene(func_834(bVar3, iVar1, 0), iVar0, func_830(is_ped_male(iVar1), sParam2, sParam3), sParam4, 1f, bVar3, iParam6, iParam8, -1082130432);
					if (!bVar3)
					{
						task_stand_still(0, iParam7);
						func_835(iVar1, &iVar8, 0, 0, 1, 1);
					}
					func_243(uParam1, 1);
				}
			}
			else if (!func_187(*uParam1, 4))
			{
				func_243(uParam1, 4);
			}
		}
	}
}

bool func_734(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_735()
{
	return Global_1102219->f_3672;
}

int func_736(int iParam0)
{
	return iParam0;
}

void func_737(int iParam0)
{
	if (!func_836(iParam0))
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

bool func_738(struct<2> Param0, var uParam2)
{
	if (!func_40(Param0))
	{
		return false;
	}
	func_837(uParam2);
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

int func_739()
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

void func_740(var uParam0, var uParam1)
{
}

void func_741(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_742(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_821(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_743(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_744(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

int func_745(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

bool func_746(int iParam0, var uParam1, var uParam2)
{
	if (!func_838(iParam0))
	{
		return false;
	}
	if (func_839(iParam0, uParam1, &uVar0))
	{
		func_840(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

var func_747(int iParam0, int iParam1)
{
	return func_841(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_748(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	trigger_script_event(1, uParam0, 15, 41, &uParam1);
}

void func_749(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_750(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

var func_751(int iParam0, int iParam1)
{
	sVar4[0] = "D";
	sVar4[1] = "A";
	sVar4[2] = "B";
	sVar4[3] = "C";
	sVar4[4] = "E";
	sVar10[0] = "B";
	sVar10[1] = "D";
	sVar10[2] = "E";
	sVar10[3] = "F";
	sVar10[4] = "";
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_OCONVO_", 32);
			StringConCat(&cVar0, &(sVar4[iParam1]), 32);
			break;
		case 1:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_MCONVO_A_MP", 32);
			break;
		case 2:
			if (Local_13.f_7.f_8 < 3)
			{
				StringCopy(&cVar0, "RE_SUS_GUA_V1_MCONVO_", 32);
				StringConCat(&cVar0, &(sVar10[iParam1]), 32);
			}
			else
			{
				StringCopy(&cVar0, "RE_SUS_GUA_V1_PLYR_LEAVING_B", 32);
			}
			break;
		case 3:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_MCONVO_F", 32);
			break;
		case 7:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_PLYR_LEAVING_D", 32);
			break;
		case 4:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_DONT_SHOOT_A", 32);
			break;
		case 8:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_THANK_A", 32);
			break;
		case 9:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_THANK_C", 32);
			break;
		case 10:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_THANK_C", 32);
			break;
		case 15:
			StringCopy(&cVar0, "RE_SUS_GUA_V2_GOODBYE_A", 32);
			break;
		case 16:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_SHOT_B", 32);
			break;
		case 11:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_THANK_WAIT", 32);
			break;
		case 12:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_THANK_WAIT", 32);
			break;
		case 13:
			StringCopy(&cVar0, "RE_SUS_GUA_V2_THANK_A", 32);
			break;
		case 14:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_THANK_NO", 32);
			break;
		default:
			return "";
	}
	return func_842(cVar0);
}

bool func_752(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	return func_843(func_261(iParam0), uParam1, iParam3, iParam2, iParam5, func_628(iParam0), iParam4, 1);
}

void func_753(int iParam0)
{
	if (func_844(iParam0, &vVar0))
	{
		if (!func_845(&(Local_1172.f_19.f_5), vVar0, 0, -1, 0, 0))
		{
		}
	}
}

float func_754(float fParam0, float fParam1, float fParam2)
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

void func_755(int iParam0)
{
}

void func_756(int iParam0)
{
}

void func_757(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_758(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_759(var uParam0)
{
	return func_643(*uParam0, 2);
}

bool func_760(int iParam0, var uParam1)
{
	fVar0 = func_846(uParam1);
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
		fVar2 = func_847(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
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
					if (func_848())
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

bool func_761(int iParam0, var uParam1)
{
	if (func_849(iParam0))
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

bool func_762(int iParam0)
{
	iVar1 = 0;
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (does_entity_exist(func_261(iVar0)))
		{
			if (func_452(iVar0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar2 = func_451();
	if (iVar2 > -1 && (iVar2 - iVar1) < 2)
	{
		return iVar2 <= iParam0;
	}
	return false;
}

bool func_763(int iParam0)
{
	return is_bit_set(Local_1172.f_291.f_171, iParam0);
}

int func_764(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		if (!does_entity_exist(&(Local_1172.f_131.f_7[iParam0])))
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
		else if (&Local_83[iVar0]->f_2.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam3 && !func_611(iVar0))
		{
		}
		else if (iVar1 != -1 && &Local_83[iVar0]->f_2.f_2[iParam0] > &Local_83[iVar1]->f_2.f_2[iParam0])
		{
		}
		else if (bVar2 && &Local_83[iVar0]->f_2.f_2[iParam0] > fParam1)
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

void func_765(int iParam0)
{
	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1940258->f_32);
	Global_1940258->f_21 = func_850();
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
			func_851(&(Global_1940258->f_28), &(Global_1940258->f_33));
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

var func_766(int iParam0)
{
	return &(Global_1102219->f_3705[iParam0]);
}

bool func_767(bool bParam0, bool bParam1)
{
	if (func_852(bParam0, &iVar0, &iVar1))
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

bool func_768(var uParam0)
{
	iVar0 = Global_1940258->f_34;
	if (func_28() == -1)
	{
		if (Global_1940258->f_34 == 0)
		{
			iVar0 = func_853(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1940258->f_34) || !&Global_1956200->f_1716[4])
	{
		iVar0 = func_853(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_796(iVar0) == -1)
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

void func_769(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_854(uParam0);
	}
}

bool func_770(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_796(iParam2);
	}
	else
	{
		iVar1 = func_795(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_796(iParam0);
	}
	else
	{
		iVar0 = func_795(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_187(*uParam1, 8388608))
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

float func_771(int iParam0, int iParam1)
{
	return func_792(iParam0, iParam1, 1, 1);
}

float func_772(var uParam0)
{
	return uParam0->f_29;
}

void func_773(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_243(uParam0, 134217728);
	}
	else
	{
		func_278(uParam0, 134217728);
	}
}

void func_774()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_775(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_792(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_855(iVar0, 0)))
		{
			if (func_856(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_776(var uParam0)
{
	return uParam0->f_18;
}

bool func_777(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_187(*uParam0, 4194304))
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

int func_778(var uParam0)
{
	return uParam0->f_19;
}

int func_779(var uParam0)
{
	return uParam0->f_20;
}

bool func_780(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_855(iVar0, 0)))
		{
			if (func_857(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_781(bool bParam0, bool bParam1, bool bParam2)
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

float func_782(var uParam0)
{
	return uParam0->f_25;
}

int func_783(var uParam0)
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

bool func_784(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_858(iParam0, vParam4, 0.5f))
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

int func_785(int iParam0)
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
	if (func_859(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_786(int iParam0)
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

bool func_787(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_849(iParam1))
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

bool func_788(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_849(iParam1))
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

bool func_789(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = func_860(uParam0);
	if (func_849(iParam1))
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

bool func_790(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (_0x8d50f43298ab9545(iParam0, iParam1))
	{
		return true;
	}
	if (!_is_weapon_lasso(func_861(iParam0, 1, 0, 0)) && !func_861(iParam0, 1, 0, 0) == 1151374672)
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

bool func_791(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_792(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_793(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_794(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_794(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_795(int iParam0)
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

int func_796(int iParam0)
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

int func_797(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_657(Global_34, &iVar1))
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
		fVar2 = func_792(iParam0, player_ped_id(), 0, 1);
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
		if (func_792(iParam0, Global_1940258->f_34, 0, 1) < 2.5f)
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

bool func_798(int iParam0, var uParam1, bool bParam2)
{
	func_852(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_800(uParam1, iVar0))
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
				if (!bParam2 || !func_800(uParam1, iVar1))
				{
					if (func_794(iVar1, Global_35, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_799(var uParam0)
{
	return func_187(*uParam0, 131072);
}

bool func_800(var uParam0, int iParam1)
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

bool func_801(int iParam0)
{
	return false;
}

int func_802(var uParam0)
{
	return uParam0->f_22;
}

int func_803(int iParam0, var uParam1, bool bParam2, float fParam3)
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

float func_804(vector3 vParam0, vector3 vParam3)
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

bool func_805(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_806(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_807(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

float func_808(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_862(vVar2.x, fVar0);
	fVar1 = func_847(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_862(vVar2.x, fVar0);
	fVar1 = func_847(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_862(vVar2.x, fVar0);
	fVar1 = func_847(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_862(vVar2.x, fVar0);
	fVar1 = func_847(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_862(vVar2.x, fVar0);
	fVar1 = func_847(vVar2.x, fVar1);
	return (fVar0 - fVar1);
}

float func_809(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_862(vVar2.y, fVar0);
	fVar1 = func_847(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_862(vVar2.y, fVar0);
	fVar1 = func_847(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_862(vVar2.y, fVar0);
	fVar1 = func_847(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_862(vVar2.y, fVar0);
	fVar1 = func_847(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_862(vVar2.y, fVar0);
	fVar1 = func_847(vVar2.y, fVar1);
	return (fVar0 - fVar1);
}

float func_810(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_862(vVar2.z, fVar0);
	fVar1 = func_847(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_862(vVar2.z, fVar0);
	fVar1 = func_847(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_862(vVar2.z, fVar0);
	fVar1 = func_847(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_862(vVar2.z, fVar0);
	fVar1 = func_847(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_862(vVar2.z, fVar0);
	fVar1 = func_847(vVar2.z, fVar1);
	return (fVar0 - fVar1);
}

Vector3 func_811(int iParam0)
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
	return func_431((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_812(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_813(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_814(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_863(iParam0) - 1))
	{
		return false;
	}
	return true;
}

int func_815(int iParam0)
{
	return iParam0 + 8;
}

void func_816(int iParam0, int iParam1)
{
	Var0 = { func_487(iParam1, 896190569) };
	if (!stat_id_get_int(&Var0, &iVar2))
	{
		return;
	}
	if (is_bit_set(iVar2, iParam0))
	{
		return;
	}
	set_bit(&iVar2, iParam0);
	if (!stat_id_set_int(&Var0, iVar2, true))
	{
	}
}

int func_817(int iParam0)
{
	iVar0 = get_ped_index_from_entity_index(_0xcd66fea29400a0b5(iParam0));
	if (iVar0 == 0 || !is_ped_a_player(iVar0))
	{
		return 0;
	}
	if (is_ped_in_combat(iParam0, iVar0))
	{
		return network_get_player_index_from_ped(iVar0);
	}
	return 0;
}

int func_818(char* sParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_821(iVar0, 2))
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
				func_864(iVar1, iParam1, sParam0, 5, iParam3, uParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_819(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_573(iParam0))
	{
		return;
	}
	iVar0 = func_736(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

void func_820(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_573(iParam0))
	{
		return;
	}
	iVar0 = func_736(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

bool func_821(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_822(bool bParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = func_181(iVar0);
		func_397(iVar1, 0, bParam0, bParam1);
		func_397(iVar1, 1, bParam0, bParam1);
		func_397(iVar1, 2, bParam0, bParam1);
		iVar0++;
	}
}

void func_823(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (func_806(iVar0, 0, 1, 0) != -1569615261)
	{
		return;
	}
	_task_emote_2(iVar0, iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, 0);
}

void func_824(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		return;
	}
}

void func_825(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_865(uParam0))
	{
		return;
	}
	if (Global_1293346->f_2011 < 20)
	{
		Global_1293346->f_2011++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_2011.f_1[iVar0] = { *(Global_1293346->f_2011.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1293346->f_2011.f_1[(Global_1293346->f_2011 - 1)]) = { Var1 };
}

void func_826(var uParam0)
{
	func_724(uParam0, 143479330);
	if (func_866() == 2026485318)
	{
		func_724(uParam0, 617531372);
	}
	else
	{
		func_724(uParam0, 291123060);
	}
}

void func_827(var uParam0, int iParam1, struct<15> Param2)
{
	if (!func_865(uParam0))
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

bool func_828(var uParam0)
{
	return func_187(*uParam0, 2);
}

bool func_829(int iParam0, char* sParam1, bool bParam2)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return false;
	}
	if (!_network_has_control_of_anim_scene(iParam0))
	{
		if (!_0x23e33cb9f4a3f547(iParam0, sParam1))
		{
			return false;
		}
		if (bParam2)
		{
			if (!_0x1f0e401031e20146(iParam0, sParam1))
			{
				return false;
			}
		}
		return true;
	}
	if (!_0x23e33cb9f4a3f547(iParam0, sParam1))
	{
		if (!_0x0df57f86fe71dbe5(iParam0, sParam1))
		{
			_0xdf7b5144e25cd3fe(iParam0, sParam1);
		}
	}
	if (_0x23e33cb9f4a3f547(iParam0, sParam1))
	{
		if (bParam2)
		{
			if (!_0x1f0e401031e20146(iParam0, sParam1))
			{
				_set_anim_scene_playback_list_bool(iParam0, sParam1, true);
				return false;
			}
		}
		return true;
	}
	return false;
}

char* func_830(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_831(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_ragdoll(iParam0) || is_ped_running_ragdoll_task(iParam0))
	{
		return true;
	}
	if (is_entity_on_fire(iParam0))
	{
		return true;
	}
	if (_is_ped_lassoed(iParam0))
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(iParam0))
	{
		return true;
	}
	if (is_ped_shooting(iParam0))
	{
		return true;
	}
	if (func_867())
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		iVar1 = get_event_at_index(0, iVar0);
		switch (iVar1)
		{
			case -1430694196:
			case -1360035949:
			case -978548489:
			case -597386145:
			case 402722103:
			case 579261718:
			case 2145012826:
				if (!get_event_data(0, iVar0, &iVar2, 9))
				{
				}
				else if (!does_entity_exist(iVar2))
				{
				}
				else
				{
					if (is_entity_a_ped(iVar2) && get_ped_index_from_entity_index(iVar2) == iParam0)
					{
						return true;
					}
				}
		}
		iVar0++;
	}
	return false;
}

void func_832(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738->f_3948 = get_game_timer();
	Global_1896738->f_3948.f_1 = iParam0;
}

bool func_833(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam2 && !network_has_control_of_entity(iParam0))
	{
		return false;
	}
	if (!bParam3 && func_868(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == -1794415470 && is_ped_being_jacked(iParam0))
	{
		return false;
	}
	return true;
}

int func_834(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_835(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_836(int iParam0)
{
	return func_821(iParam0, 2);
}

void func_837(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_838(int iParam0)
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

bool func_839(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_869(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_840(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_870(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_871(iVar0);
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
			uParam2->f_5 = func_872(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_873(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_874(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_875(iVar0);
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

var func_841(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_876() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_877());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_877());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_877());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_878(get_player_team(iVar5)));
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
			if (func_879(iVar2))
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
				if (iVar9 & 8192 != 0 && func_880(iVar2) != 1)
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
					if (!func_881(iVar10))
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

var func_842(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_843(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = uParam1;
	Var0.f_1 = sParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_882(iParam0, &Var0);
}

bool func_844(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "RESUS_", 24);
	switch (iParam0)
	{
		case 0:
			StringConCat(sParam1, "CALLOUT1", 24);
			break;
		case 1:
			StringConCat(sParam1, "CALLOUT2", 24);
			break;
		case 2:
			StringConCat(sParam1, "CALLOUT3", 24);
			break;
		case 3:
			StringConCat(sParam1, "ANICLOSE", 24);
			break;
		case 17:
			StringConCat(sParam1, "KILLANI", 24);
			break;
		case 18:
			StringConCat(sParam1, "KILLALL", 24);
			break;
		case 19:
			StringConCat(sParam1, "ANIFLEE", 24);
			break;
		case 20:
			StringConCat(sParam1, "REACTS", 24);
			break;
		case 21:
			StringConCat(sParam1, "HELP1", 24);
			break;
		case 22:
			StringConCat(sParam1, "HELP2", 24);
			break;
		case 7:
			StringConCat(sParam1, "GIVEUP", 24);
			break;
		case 23:
			StringConCat(sParam1, "PLEAVE", 24);
			break;
		case 24:
			StringConCat(sParam1, "RETURN", 24);
			break;
		case 8:
			StringConCat(sParam1, "THANKS", 24);
			break;
		case 9:
			StringConCat(sParam1, "REWARD", 24);
			break;
		case 10:
			StringConCat(sParam1, "REWARD", 24);
			break;
		case 11:
			StringConCat(sParam1, "WAITRE", 24);
			break;
		case 13:
			StringConCat(sParam1, "ACCEPT", 24);
			break;
		case 14:
			StringConCat(sParam1, "DECLINE", 24);
			break;
		case 15:
			StringConCat(sParam1, "PEDLEAVE", 24);
			break;
		case 16:
			StringConCat(sParam1, "ANIATTACK", 24);
			break;
		case 6:
			StringConCat(sParam1, "STRUGTIE", 24);
			break;
		default:
			return false;
	}
	return true;
}

bool func_845(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&vParam1))
	{
		bVar0 = create_new_scripted_conversation(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_883(vParam1, uParam0);
		if (bParam6)
		{
			preload_script_conversation(&vParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

float func_846(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_593(uParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_884(uParam0);
	}
	return func_593(uParam0);
}

float func_847(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_848()
{
	iVar0 = func_886(func_885());
	iVar1 = func_887(func_885());
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

bool func_849(int iParam0)
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

bool func_850()
{
	if (func_888())
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

void func_851(var uParam0, var uParam1)
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

bool func_852(bool bParam0, int iParam1, int iParam2)
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

int func_853(var uParam0)
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

void func_854(var uParam0)
{
	if (Global_1940258->f_32 == 0)
	{
		func_278(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940258->f_33)
		{
			if (does_entity_exist(&(Global_1940258->f_28[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1940258->f_28[iVar0])))
				{
					func_243(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_855(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_856(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_857(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_857(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_858(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_859(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_860(var uParam0)
{
	return uParam0->f_28;
}

int func_861(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_862(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_863(int iParam0)
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

void func_864(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_742(iParam0, 1);
	func_743(iParam0, 1);
	func_744(iParam0, 128);
}

bool func_865(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_866()
{
	return Global_1952637->f_1;
}

bool func_867()
{
	return Global_1896738->f_382;
}

bool func_868(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_869(int iParam0)
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

int func_870(int iParam0, var uParam1)
{
	if (func_889(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_871(int iParam0)
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

int func_872(int iParam0)
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

int func_873(int iParam0)
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

int func_874(int iParam0)
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

int func_875(int iParam0)
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

int func_876()
{
	return Global_1051252->f_12;
}

char* func_877()
{
	return "unnamed";
}

int func_878(int iParam0)
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

bool func_879(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_571(36, iParam0);
}

int func_880(int iParam0)
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

bool func_881(int iParam0)
{
	if (func_890(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_891(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

bool func_882(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_883(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (does_entity_exist(uParam3[iVar0]))
		{
			if (!is_entity_dead(uParam3[iVar0]))
			{
				if (!is_ped_in_current_conversation(&uParam0, uParam3[iVar0], 0))
				{
					add_ped_to_conversation(&uParam0, uParam3[iVar0], &((*uParam3)[iVar0]->f_1));
				}
			}
		}
		iVar0++;
	}
}

var func_884(var uParam0)
{
	return uParam0->f_27;
}

int func_885()
{
	return &Global_1902818;
}

int func_886(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_887(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

bool func_888()
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

bool func_889(int iParam0, var uParam1, var uParam2)
{
	if (func_892(iParam0, uParam1, &uVar0))
	{
		func_893(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_890(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_891(int iParam0)
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
		func_894(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_895(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

bool func_892(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_869(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_893(var uParam0, int iParam1, var uParam2)
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

void func_894(int iParam0)
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
	func_895(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_895(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

